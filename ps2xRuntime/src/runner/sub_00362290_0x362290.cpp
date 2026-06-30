#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362290
// Address: 0x362290 - 0x362850
void sub_00362290_0x362290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362290_0x362290");
#endif

    switch (ctx->pc) {
        case 0x362290u: goto label_362290;
        case 0x362294u: goto label_362294;
        case 0x362298u: goto label_362298;
        case 0x36229cu: goto label_36229c;
        case 0x3622a0u: goto label_3622a0;
        case 0x3622a4u: goto label_3622a4;
        case 0x3622a8u: goto label_3622a8;
        case 0x3622acu: goto label_3622ac;
        case 0x3622b0u: goto label_3622b0;
        case 0x3622b4u: goto label_3622b4;
        case 0x3622b8u: goto label_3622b8;
        case 0x3622bcu: goto label_3622bc;
        case 0x3622c0u: goto label_3622c0;
        case 0x3622c4u: goto label_3622c4;
        case 0x3622c8u: goto label_3622c8;
        case 0x3622ccu: goto label_3622cc;
        case 0x3622d0u: goto label_3622d0;
        case 0x3622d4u: goto label_3622d4;
        case 0x3622d8u: goto label_3622d8;
        case 0x3622dcu: goto label_3622dc;
        case 0x3622e0u: goto label_3622e0;
        case 0x3622e4u: goto label_3622e4;
        case 0x3622e8u: goto label_3622e8;
        case 0x3622ecu: goto label_3622ec;
        case 0x3622f0u: goto label_3622f0;
        case 0x3622f4u: goto label_3622f4;
        case 0x3622f8u: goto label_3622f8;
        case 0x3622fcu: goto label_3622fc;
        case 0x362300u: goto label_362300;
        case 0x362304u: goto label_362304;
        case 0x362308u: goto label_362308;
        case 0x36230cu: goto label_36230c;
        case 0x362310u: goto label_362310;
        case 0x362314u: goto label_362314;
        case 0x362318u: goto label_362318;
        case 0x36231cu: goto label_36231c;
        case 0x362320u: goto label_362320;
        case 0x362324u: goto label_362324;
        case 0x362328u: goto label_362328;
        case 0x36232cu: goto label_36232c;
        case 0x362330u: goto label_362330;
        case 0x362334u: goto label_362334;
        case 0x362338u: goto label_362338;
        case 0x36233cu: goto label_36233c;
        case 0x362340u: goto label_362340;
        case 0x362344u: goto label_362344;
        case 0x362348u: goto label_362348;
        case 0x36234cu: goto label_36234c;
        case 0x362350u: goto label_362350;
        case 0x362354u: goto label_362354;
        case 0x362358u: goto label_362358;
        case 0x36235cu: goto label_36235c;
        case 0x362360u: goto label_362360;
        case 0x362364u: goto label_362364;
        case 0x362368u: goto label_362368;
        case 0x36236cu: goto label_36236c;
        case 0x362370u: goto label_362370;
        case 0x362374u: goto label_362374;
        case 0x362378u: goto label_362378;
        case 0x36237cu: goto label_36237c;
        case 0x362380u: goto label_362380;
        case 0x362384u: goto label_362384;
        case 0x362388u: goto label_362388;
        case 0x36238cu: goto label_36238c;
        case 0x362390u: goto label_362390;
        case 0x362394u: goto label_362394;
        case 0x362398u: goto label_362398;
        case 0x36239cu: goto label_36239c;
        case 0x3623a0u: goto label_3623a0;
        case 0x3623a4u: goto label_3623a4;
        case 0x3623a8u: goto label_3623a8;
        case 0x3623acu: goto label_3623ac;
        case 0x3623b0u: goto label_3623b0;
        case 0x3623b4u: goto label_3623b4;
        case 0x3623b8u: goto label_3623b8;
        case 0x3623bcu: goto label_3623bc;
        case 0x3623c0u: goto label_3623c0;
        case 0x3623c4u: goto label_3623c4;
        case 0x3623c8u: goto label_3623c8;
        case 0x3623ccu: goto label_3623cc;
        case 0x3623d0u: goto label_3623d0;
        case 0x3623d4u: goto label_3623d4;
        case 0x3623d8u: goto label_3623d8;
        case 0x3623dcu: goto label_3623dc;
        case 0x3623e0u: goto label_3623e0;
        case 0x3623e4u: goto label_3623e4;
        case 0x3623e8u: goto label_3623e8;
        case 0x3623ecu: goto label_3623ec;
        case 0x3623f0u: goto label_3623f0;
        case 0x3623f4u: goto label_3623f4;
        case 0x3623f8u: goto label_3623f8;
        case 0x3623fcu: goto label_3623fc;
        case 0x362400u: goto label_362400;
        case 0x362404u: goto label_362404;
        case 0x362408u: goto label_362408;
        case 0x36240cu: goto label_36240c;
        case 0x362410u: goto label_362410;
        case 0x362414u: goto label_362414;
        case 0x362418u: goto label_362418;
        case 0x36241cu: goto label_36241c;
        case 0x362420u: goto label_362420;
        case 0x362424u: goto label_362424;
        case 0x362428u: goto label_362428;
        case 0x36242cu: goto label_36242c;
        case 0x362430u: goto label_362430;
        case 0x362434u: goto label_362434;
        case 0x362438u: goto label_362438;
        case 0x36243cu: goto label_36243c;
        case 0x362440u: goto label_362440;
        case 0x362444u: goto label_362444;
        case 0x362448u: goto label_362448;
        case 0x36244cu: goto label_36244c;
        case 0x362450u: goto label_362450;
        case 0x362454u: goto label_362454;
        case 0x362458u: goto label_362458;
        case 0x36245cu: goto label_36245c;
        case 0x362460u: goto label_362460;
        case 0x362464u: goto label_362464;
        case 0x362468u: goto label_362468;
        case 0x36246cu: goto label_36246c;
        case 0x362470u: goto label_362470;
        case 0x362474u: goto label_362474;
        case 0x362478u: goto label_362478;
        case 0x36247cu: goto label_36247c;
        case 0x362480u: goto label_362480;
        case 0x362484u: goto label_362484;
        case 0x362488u: goto label_362488;
        case 0x36248cu: goto label_36248c;
        case 0x362490u: goto label_362490;
        case 0x362494u: goto label_362494;
        case 0x362498u: goto label_362498;
        case 0x36249cu: goto label_36249c;
        case 0x3624a0u: goto label_3624a0;
        case 0x3624a4u: goto label_3624a4;
        case 0x3624a8u: goto label_3624a8;
        case 0x3624acu: goto label_3624ac;
        case 0x3624b0u: goto label_3624b0;
        case 0x3624b4u: goto label_3624b4;
        case 0x3624b8u: goto label_3624b8;
        case 0x3624bcu: goto label_3624bc;
        case 0x3624c0u: goto label_3624c0;
        case 0x3624c4u: goto label_3624c4;
        case 0x3624c8u: goto label_3624c8;
        case 0x3624ccu: goto label_3624cc;
        case 0x3624d0u: goto label_3624d0;
        case 0x3624d4u: goto label_3624d4;
        case 0x3624d8u: goto label_3624d8;
        case 0x3624dcu: goto label_3624dc;
        case 0x3624e0u: goto label_3624e0;
        case 0x3624e4u: goto label_3624e4;
        case 0x3624e8u: goto label_3624e8;
        case 0x3624ecu: goto label_3624ec;
        case 0x3624f0u: goto label_3624f0;
        case 0x3624f4u: goto label_3624f4;
        case 0x3624f8u: goto label_3624f8;
        case 0x3624fcu: goto label_3624fc;
        case 0x362500u: goto label_362500;
        case 0x362504u: goto label_362504;
        case 0x362508u: goto label_362508;
        case 0x36250cu: goto label_36250c;
        case 0x362510u: goto label_362510;
        case 0x362514u: goto label_362514;
        case 0x362518u: goto label_362518;
        case 0x36251cu: goto label_36251c;
        case 0x362520u: goto label_362520;
        case 0x362524u: goto label_362524;
        case 0x362528u: goto label_362528;
        case 0x36252cu: goto label_36252c;
        case 0x362530u: goto label_362530;
        case 0x362534u: goto label_362534;
        case 0x362538u: goto label_362538;
        case 0x36253cu: goto label_36253c;
        case 0x362540u: goto label_362540;
        case 0x362544u: goto label_362544;
        case 0x362548u: goto label_362548;
        case 0x36254cu: goto label_36254c;
        case 0x362550u: goto label_362550;
        case 0x362554u: goto label_362554;
        case 0x362558u: goto label_362558;
        case 0x36255cu: goto label_36255c;
        case 0x362560u: goto label_362560;
        case 0x362564u: goto label_362564;
        case 0x362568u: goto label_362568;
        case 0x36256cu: goto label_36256c;
        case 0x362570u: goto label_362570;
        case 0x362574u: goto label_362574;
        case 0x362578u: goto label_362578;
        case 0x36257cu: goto label_36257c;
        case 0x362580u: goto label_362580;
        case 0x362584u: goto label_362584;
        case 0x362588u: goto label_362588;
        case 0x36258cu: goto label_36258c;
        case 0x362590u: goto label_362590;
        case 0x362594u: goto label_362594;
        case 0x362598u: goto label_362598;
        case 0x36259cu: goto label_36259c;
        case 0x3625a0u: goto label_3625a0;
        case 0x3625a4u: goto label_3625a4;
        case 0x3625a8u: goto label_3625a8;
        case 0x3625acu: goto label_3625ac;
        case 0x3625b0u: goto label_3625b0;
        case 0x3625b4u: goto label_3625b4;
        case 0x3625b8u: goto label_3625b8;
        case 0x3625bcu: goto label_3625bc;
        case 0x3625c0u: goto label_3625c0;
        case 0x3625c4u: goto label_3625c4;
        case 0x3625c8u: goto label_3625c8;
        case 0x3625ccu: goto label_3625cc;
        case 0x3625d0u: goto label_3625d0;
        case 0x3625d4u: goto label_3625d4;
        case 0x3625d8u: goto label_3625d8;
        case 0x3625dcu: goto label_3625dc;
        case 0x3625e0u: goto label_3625e0;
        case 0x3625e4u: goto label_3625e4;
        case 0x3625e8u: goto label_3625e8;
        case 0x3625ecu: goto label_3625ec;
        case 0x3625f0u: goto label_3625f0;
        case 0x3625f4u: goto label_3625f4;
        case 0x3625f8u: goto label_3625f8;
        case 0x3625fcu: goto label_3625fc;
        case 0x362600u: goto label_362600;
        case 0x362604u: goto label_362604;
        case 0x362608u: goto label_362608;
        case 0x36260cu: goto label_36260c;
        case 0x362610u: goto label_362610;
        case 0x362614u: goto label_362614;
        case 0x362618u: goto label_362618;
        case 0x36261cu: goto label_36261c;
        case 0x362620u: goto label_362620;
        case 0x362624u: goto label_362624;
        case 0x362628u: goto label_362628;
        case 0x36262cu: goto label_36262c;
        case 0x362630u: goto label_362630;
        case 0x362634u: goto label_362634;
        case 0x362638u: goto label_362638;
        case 0x36263cu: goto label_36263c;
        case 0x362640u: goto label_362640;
        case 0x362644u: goto label_362644;
        case 0x362648u: goto label_362648;
        case 0x36264cu: goto label_36264c;
        case 0x362650u: goto label_362650;
        case 0x362654u: goto label_362654;
        case 0x362658u: goto label_362658;
        case 0x36265cu: goto label_36265c;
        case 0x362660u: goto label_362660;
        case 0x362664u: goto label_362664;
        case 0x362668u: goto label_362668;
        case 0x36266cu: goto label_36266c;
        case 0x362670u: goto label_362670;
        case 0x362674u: goto label_362674;
        case 0x362678u: goto label_362678;
        case 0x36267cu: goto label_36267c;
        case 0x362680u: goto label_362680;
        case 0x362684u: goto label_362684;
        case 0x362688u: goto label_362688;
        case 0x36268cu: goto label_36268c;
        case 0x362690u: goto label_362690;
        case 0x362694u: goto label_362694;
        case 0x362698u: goto label_362698;
        case 0x36269cu: goto label_36269c;
        case 0x3626a0u: goto label_3626a0;
        case 0x3626a4u: goto label_3626a4;
        case 0x3626a8u: goto label_3626a8;
        case 0x3626acu: goto label_3626ac;
        case 0x3626b0u: goto label_3626b0;
        case 0x3626b4u: goto label_3626b4;
        case 0x3626b8u: goto label_3626b8;
        case 0x3626bcu: goto label_3626bc;
        case 0x3626c0u: goto label_3626c0;
        case 0x3626c4u: goto label_3626c4;
        case 0x3626c8u: goto label_3626c8;
        case 0x3626ccu: goto label_3626cc;
        case 0x3626d0u: goto label_3626d0;
        case 0x3626d4u: goto label_3626d4;
        case 0x3626d8u: goto label_3626d8;
        case 0x3626dcu: goto label_3626dc;
        case 0x3626e0u: goto label_3626e0;
        case 0x3626e4u: goto label_3626e4;
        case 0x3626e8u: goto label_3626e8;
        case 0x3626ecu: goto label_3626ec;
        case 0x3626f0u: goto label_3626f0;
        case 0x3626f4u: goto label_3626f4;
        case 0x3626f8u: goto label_3626f8;
        case 0x3626fcu: goto label_3626fc;
        case 0x362700u: goto label_362700;
        case 0x362704u: goto label_362704;
        case 0x362708u: goto label_362708;
        case 0x36270cu: goto label_36270c;
        case 0x362710u: goto label_362710;
        case 0x362714u: goto label_362714;
        case 0x362718u: goto label_362718;
        case 0x36271cu: goto label_36271c;
        case 0x362720u: goto label_362720;
        case 0x362724u: goto label_362724;
        case 0x362728u: goto label_362728;
        case 0x36272cu: goto label_36272c;
        case 0x362730u: goto label_362730;
        case 0x362734u: goto label_362734;
        case 0x362738u: goto label_362738;
        case 0x36273cu: goto label_36273c;
        case 0x362740u: goto label_362740;
        case 0x362744u: goto label_362744;
        case 0x362748u: goto label_362748;
        case 0x36274cu: goto label_36274c;
        case 0x362750u: goto label_362750;
        case 0x362754u: goto label_362754;
        case 0x362758u: goto label_362758;
        case 0x36275cu: goto label_36275c;
        case 0x362760u: goto label_362760;
        case 0x362764u: goto label_362764;
        case 0x362768u: goto label_362768;
        case 0x36276cu: goto label_36276c;
        case 0x362770u: goto label_362770;
        case 0x362774u: goto label_362774;
        case 0x362778u: goto label_362778;
        case 0x36277cu: goto label_36277c;
        case 0x362780u: goto label_362780;
        case 0x362784u: goto label_362784;
        case 0x362788u: goto label_362788;
        case 0x36278cu: goto label_36278c;
        case 0x362790u: goto label_362790;
        case 0x362794u: goto label_362794;
        case 0x362798u: goto label_362798;
        case 0x36279cu: goto label_36279c;
        case 0x3627a0u: goto label_3627a0;
        case 0x3627a4u: goto label_3627a4;
        case 0x3627a8u: goto label_3627a8;
        case 0x3627acu: goto label_3627ac;
        case 0x3627b0u: goto label_3627b0;
        case 0x3627b4u: goto label_3627b4;
        case 0x3627b8u: goto label_3627b8;
        case 0x3627bcu: goto label_3627bc;
        case 0x3627c0u: goto label_3627c0;
        case 0x3627c4u: goto label_3627c4;
        case 0x3627c8u: goto label_3627c8;
        case 0x3627ccu: goto label_3627cc;
        case 0x3627d0u: goto label_3627d0;
        case 0x3627d4u: goto label_3627d4;
        case 0x3627d8u: goto label_3627d8;
        case 0x3627dcu: goto label_3627dc;
        case 0x3627e0u: goto label_3627e0;
        case 0x3627e4u: goto label_3627e4;
        case 0x3627e8u: goto label_3627e8;
        case 0x3627ecu: goto label_3627ec;
        case 0x3627f0u: goto label_3627f0;
        case 0x3627f4u: goto label_3627f4;
        case 0x3627f8u: goto label_3627f8;
        case 0x3627fcu: goto label_3627fc;
        case 0x362800u: goto label_362800;
        case 0x362804u: goto label_362804;
        case 0x362808u: goto label_362808;
        case 0x36280cu: goto label_36280c;
        case 0x362810u: goto label_362810;
        case 0x362814u: goto label_362814;
        case 0x362818u: goto label_362818;
        case 0x36281cu: goto label_36281c;
        case 0x362820u: goto label_362820;
        case 0x362824u: goto label_362824;
        case 0x362828u: goto label_362828;
        case 0x36282cu: goto label_36282c;
        case 0x362830u: goto label_362830;
        case 0x362834u: goto label_362834;
        case 0x362838u: goto label_362838;
        case 0x36283cu: goto label_36283c;
        case 0x362840u: goto label_362840;
        case 0x362844u: goto label_362844;
        case 0x362848u: goto label_362848;
        case 0x36284cu: goto label_36284c;
        default: break;
    }

    ctx->pc = 0x362290u;

label_362290:
    // 0x362290: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x362290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_362294:
    // 0x362294: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x362294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_362298:
    // 0x362298: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x362298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_36229c:
    // 0x36229c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x36229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3622a0:
    // 0x3622a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3622a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3622a4:
    // 0x3622a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3622a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3622a8:
    // 0x3622a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3622a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3622ac:
    // 0x3622ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3622acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3622b0:
    // 0x3622b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3622b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3622b4:
    // 0x3622b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3622b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3622b8:
    // 0x3622b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3622b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3622bc:
    // 0x3622bc: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x3622bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3622c0:
    // 0x3622c0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3622c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3622c4:
    // 0x3622c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3622c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3622c8:
    // 0x3622c8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3622c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3622cc:
    // 0x3622cc: 0x263500c0  addiu       $s5, $s1, 0xC0
    ctx->pc = 0x3622ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_3622d0:
    // 0x3622d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3622d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3622d4:
    // 0x3622d4: 0x26540080  addiu       $s4, $s2, 0x80
    ctx->pc = 0x3622d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_3622d8:
    // 0x3622d8: 0x94930112  lhu         $s3, 0x112($a0)
    ctx->pc = 0x3622d8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
label_3622dc:
    // 0x3622dc: 0x94830110  lhu         $v1, 0x110($a0)
    ctx->pc = 0x3622dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_3622e0:
    // 0x3622e0: 0x8c44e3e0  lw          $a0, -0x1C20($v0)
    ctx->pc = 0x3622e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3622e4:
    // 0x3622e4: 0xc494001c  lwc1        $f20, 0x1C($a0)
    ctx->pc = 0x3622e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3622e8:
    // 0x3622e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3622e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3622ec:
    // 0x3622ec: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_3622f0:
    if (ctx->pc == 0x3622F0u) {
        ctx->pc = 0x3622F0u;
            // 0x3622f0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3622F4u;
        goto label_3622f4;
    }
    ctx->pc = 0x3622ECu;
    {
        const bool branch_taken_0x3622ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3622F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3622ECu;
            // 0x3622f0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622ec) {
            ctx->pc = 0x362348u;
            goto label_362348;
        }
    }
    ctx->pc = 0x3622F4u;
label_3622f4:
    // 0x3622f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3622f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3622f8:
    // 0x3622f8: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x3622f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_3622fc:
    // 0x3622fc: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x3622fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_362300:
    // 0x362300: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x362300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_362304:
    // 0x362304: 0xc088b74  jal         func_222DD0
label_362308:
    if (ctx->pc == 0x362308u) {
        ctx->pc = 0x362308u;
            // 0x362308: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x36230Cu;
        goto label_36230c;
    }
    ctx->pc = 0x362304u;
    SET_GPR_U32(ctx, 31, 0x36230Cu);
    ctx->pc = 0x362308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362304u;
            // 0x362308: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36230Cu; }
        if (ctx->pc != 0x36230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36230Cu; }
        if (ctx->pc != 0x36230Cu) { return; }
    }
    ctx->pc = 0x36230Cu;
label_36230c:
    // 0x36230c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x36230cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_362310:
    // 0x362310: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x362310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_362314:
    // 0x362314: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x362314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_362318:
    // 0x362318: 0x320f809  jalr        $t9
label_36231c:
    if (ctx->pc == 0x36231Cu) {
        ctx->pc = 0x36231Cu;
            // 0x36231c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x362320u;
        goto label_362320;
    }
    ctx->pc = 0x362318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x362320u);
        ctx->pc = 0x36231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362318u;
            // 0x36231c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x362320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x362320u; }
            if (ctx->pc != 0x362320u) { return; }
        }
        }
    }
    ctx->pc = 0x362320u;
label_362320:
    // 0x362320: 0xc088b74  jal         func_222DD0
label_362324:
    if (ctx->pc == 0x362324u) {
        ctx->pc = 0x362324u;
            // 0x362324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362328u;
        goto label_362328;
    }
    ctx->pc = 0x362320u;
    SET_GPR_U32(ctx, 31, 0x362328u);
    ctx->pc = 0x362324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362320u;
            // 0x362324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362328u; }
        if (ctx->pc != 0x362328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362328u; }
        if (ctx->pc != 0x362328u) { return; }
    }
    ctx->pc = 0x362328u;
label_362328:
    // 0x362328: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x362328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_36232c:
    // 0x36232c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x36232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_362330:
    // 0x362330: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x362330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_362334:
    // 0x362334: 0x320f809  jalr        $t9
label_362338:
    if (ctx->pc == 0x362338u) {
        ctx->pc = 0x362338u;
            // 0x362338: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x36233Cu;
        goto label_36233c;
    }
    ctx->pc = 0x362334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36233Cu);
        ctx->pc = 0x362338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362334u;
            // 0x362338: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36233Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36233Cu; }
            if (ctx->pc != 0x36233Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36233Cu;
label_36233c:
    // 0x36233c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_362340:
    // 0x362340: 0x10000135  b           . + 4 + (0x135 << 2)
label_362344:
    if (ctx->pc == 0x362344u) {
        ctx->pc = 0x362344u;
            // 0x362344: 0xae230130  sw          $v1, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
        ctx->pc = 0x362348u;
        goto label_362348;
    }
    ctx->pc = 0x362340u;
    {
        const bool branch_taken_0x362340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362340u;
            // 0x362344: 0xae230130  sw          $v1, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362340) {
            ctx->pc = 0x362818u;
            goto label_362818;
        }
    }
    ctx->pc = 0x362348u;
label_362348:
    // 0x362348: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x362348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_36234c:
    // 0x36234c: 0xc04cc04  jal         func_133010
label_362350:
    if (ctx->pc == 0x362350u) {
        ctx->pc = 0x362350u;
            // 0x362350: 0x26a50030  addiu       $a1, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->pc = 0x362354u;
        goto label_362354;
    }
    ctx->pc = 0x36234Cu;
    SET_GPR_U32(ctx, 31, 0x362354u);
    ctx->pc = 0x362350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36234Cu;
            // 0x362350: 0x26a50030  addiu       $a1, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362354u; }
        if (ctx->pc != 0x362354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362354u; }
        if (ctx->pc != 0x362354u) { return; }
    }
    ctx->pc = 0x362354u;
label_362354:
    // 0x362354: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x362354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_362358:
    // 0x362358: 0xc04c720  jal         func_131C80
label_36235c:
    if (ctx->pc == 0x36235Cu) {
        ctx->pc = 0x36235Cu;
            // 0x36235c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362360u;
        goto label_362360;
    }
    ctx->pc = 0x362358u;
    SET_GPR_U32(ctx, 31, 0x362360u);
    ctx->pc = 0x36235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362358u;
            // 0x36235c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362360u; }
        if (ctx->pc != 0x362360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362360u; }
        if (ctx->pc != 0x362360u) { return; }
    }
    ctx->pc = 0x362360u;
label_362360:
    // 0x362360: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x362360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_362364:
    // 0x362364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x362364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_362368:
    // 0x362368: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x362368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_36236c:
    // 0x36236c: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x36236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362370:
    // 0x362370: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x362370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362374:
    // 0x362374: 0xc0b8160  jal         func_2E0580
label_362378:
    if (ctx->pc == 0x362378u) {
        ctx->pc = 0x362378u;
            // 0x362378: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x36237Cu;
        goto label_36237c;
    }
    ctx->pc = 0x362374u;
    SET_GPR_U32(ctx, 31, 0x36237Cu);
    ctx->pc = 0x362378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362374u;
            // 0x362378: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36237Cu; }
        if (ctx->pc != 0x36237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36237Cu; }
        if (ctx->pc != 0x36237Cu) { return; }
    }
    ctx->pc = 0x36237Cu;
label_36237c:
    // 0x36237c: 0x96a20052  lhu         $v0, 0x52($s5)
    ctx->pc = 0x36237cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 82)));
label_362380:
    // 0x362380: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x362380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_362384:
    // 0x362384: 0x5062006c  beql        $v1, $v0, . + 4 + (0x6C << 2)
label_362388:
    if (ctx->pc == 0x362388u) {
        ctx->pc = 0x362388u;
            // 0x362388: 0xc6210180  lwc1        $f1, 0x180($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x36238Cu;
        goto label_36238c;
    }
    ctx->pc = 0x362384u;
    {
        const bool branch_taken_0x362384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x362384) {
            ctx->pc = 0x362388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362384u;
            // 0x362388: 0xc6210180  lwc1        $f1, 0x180($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x362538u;
            goto label_362538;
        }
    }
    ctx->pc = 0x36238Cu;
label_36238c:
    // 0x36238c: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x36238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362390:
    // 0x362390: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x362390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_362394:
    // 0x362394: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x362394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362398:
    // 0x362398: 0xc6ac0014  lwc1        $f12, 0x14($s5)
    ctx->pc = 0x362398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36239c:
    // 0x36239c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x36239cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3623a0:
    // 0x3623a0: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x3623a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_3623a4:
    // 0x3623a4: 0x46000344  c1          0x344
    ctx->pc = 0x3623a4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_3623a8:
    // 0x3623a8: 0x0  nop
    ctx->pc = 0x3623a8u;
    // NOP
label_3623ac:
    // 0x3623ac: 0x0  nop
    ctx->pc = 0x3623acu;
    // NOP
label_3623b0:
    // 0x3623b0: 0xc04780a  jal         func_11E028
label_3623b4:
    if (ctx->pc == 0x3623B4u) {
        ctx->pc = 0x3623B8u;
        goto label_3623b8;
    }
    ctx->pc = 0x3623B0u;
    SET_GPR_U32(ctx, 31, 0x3623B8u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3623B8u; }
        if (ctx->pc != 0x3623B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3623B8u; }
        if (ctx->pc != 0x3623B8u) { return; }
    }
    ctx->pc = 0x3623B8u;
label_3623b8:
    // 0x3623b8: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x3623b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3623bc:
    // 0x3623bc: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x3623bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3623c0:
    // 0x3623c0: 0xc04780a  jal         func_11E028
label_3623c4:
    if (ctx->pc == 0x3623C4u) {
        ctx->pc = 0x3623C4u;
            // 0x3623c4: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x3623C8u;
        goto label_3623c8;
    }
    ctx->pc = 0x3623C0u;
    SET_GPR_U32(ctx, 31, 0x3623C8u);
    ctx->pc = 0x3623C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3623C0u;
            // 0x3623c4: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3623C8u; }
        if (ctx->pc != 0x3623C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3623C8u; }
        if (ctx->pc != 0x3623C8u) { return; }
    }
    ctx->pc = 0x3623C8u;
label_3623c8:
    // 0x3623c8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3623c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3623cc:
    // 0x3623cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3623ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3623d0:
    // 0x3623d0: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x3623d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3623d4:
    // 0x3623d4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3623d4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3623d8:
    // 0x3623d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3623d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3623dc:
    // 0x3623dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3623dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3623e0:
    // 0x3623e0: 0x0  nop
    ctx->pc = 0x3623e0u;
    // NOP
label_3623e4:
    // 0x3623e4: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3623e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3623e8:
    // 0x3623e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3623e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3623ec:
    // 0x3623ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3623ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3623f0:
    // 0x3623f0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3623f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3623f4:
    // 0x3623f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3623f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3623f8:
    // 0x3623f8: 0xc04c970  jal         func_1325C0
label_3623fc:
    if (ctx->pc == 0x3623FCu) {
        ctx->pc = 0x3623FCu;
            // 0x3623fc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x362400u;
        goto label_362400;
    }
    ctx->pc = 0x3623F8u;
    SET_GPR_U32(ctx, 31, 0x362400u);
    ctx->pc = 0x3623FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3623F8u;
            // 0x3623fc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362400u; }
        if (ctx->pc != 0x362400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362400u; }
        if (ctx->pc != 0x362400u) { return; }
    }
    ctx->pc = 0x362400u;
label_362400:
    // 0x362400: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x362400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_362404:
    // 0x362404: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_362408:
    // 0x362408: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x362408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_36240c:
    // 0x36240c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_362410:
    // 0x362410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x362410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_362414:
    // 0x362414: 0x0  nop
    ctx->pc = 0x362414u;
    // NOP
label_362418:
    // 0x362418: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x362418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_36241c:
    // 0x36241c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36241cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_362420:
    // 0x362420: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x362420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_362424:
    // 0x362424: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x362424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_362428:
    // 0x362428: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x362428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36242c:
    // 0x36242c: 0xc04c970  jal         func_1325C0
label_362430:
    if (ctx->pc == 0x362430u) {
        ctx->pc = 0x362430u;
            // 0x362430: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x362434u;
        goto label_362434;
    }
    ctx->pc = 0x36242Cu;
    SET_GPR_U32(ctx, 31, 0x362434u);
    ctx->pc = 0x362430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36242Cu;
            // 0x362430: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362434u; }
        if (ctx->pc != 0x362434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362434u; }
        if (ctx->pc != 0x362434u) { return; }
    }
    ctx->pc = 0x362434u;
label_362434:
    // 0x362434: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x362434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_362438:
    // 0x362438: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x362438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_36243c:
    // 0x36243c: 0xc04c72c  jal         func_131CB0
label_362440:
    if (ctx->pc == 0x362440u) {
        ctx->pc = 0x362440u;
            // 0x362440: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x362444u;
        goto label_362444;
    }
    ctx->pc = 0x36243Cu;
    SET_GPR_U32(ctx, 31, 0x362444u);
    ctx->pc = 0x362440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36243Cu;
            // 0x362440: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362444u; }
        if (ctx->pc != 0x362444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362444u; }
        if (ctx->pc != 0x362444u) { return; }
    }
    ctx->pc = 0x362444u;
label_362444:
    // 0x362444: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x362444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_362448:
    // 0x362448: 0xc04c74c  jal         func_131D30
label_36244c:
    if (ctx->pc == 0x36244Cu) {
        ctx->pc = 0x36244Cu;
            // 0x36244c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362450u;
        goto label_362450;
    }
    ctx->pc = 0x362448u;
    SET_GPR_U32(ctx, 31, 0x362450u);
    ctx->pc = 0x36244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362448u;
            // 0x36244c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362450u; }
        if (ctx->pc != 0x362450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362450u; }
        if (ctx->pc != 0x362450u) { return; }
    }
    ctx->pc = 0x362450u;
label_362450:
    // 0x362450: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x362450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_362454:
    // 0x362454: 0xc04c74c  jal         func_131D30
label_362458:
    if (ctx->pc == 0x362458u) {
        ctx->pc = 0x362458u;
            // 0x362458: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x36245Cu;
        goto label_36245c;
    }
    ctx->pc = 0x362454u;
    SET_GPR_U32(ctx, 31, 0x36245Cu);
    ctx->pc = 0x362458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362454u;
            // 0x362458: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36245Cu; }
        if (ctx->pc != 0x36245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36245Cu; }
        if (ctx->pc != 0x36245Cu) { return; }
    }
    ctx->pc = 0x36245Cu;
label_36245c:
    // 0x36245c: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x36245cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_362460:
    // 0x362460: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x362460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_362464:
    // 0x362464: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x362464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_362468:
    // 0x362468: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x362468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_36246c:
    // 0x36246c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_362470:
    // 0x362470: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x362470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_362474:
    // 0x362474: 0x26330170  addiu       $s3, $s1, 0x170
    ctx->pc = 0x362474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_362478:
    // 0x362478: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x362478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36247c:
    // 0x36247c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x36247cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_362480:
    // 0x362480: 0xc04cc90  jal         func_133240
label_362484:
    if (ctx->pc == 0x362484u) {
        ctx->pc = 0x362484u;
            // 0x362484: 0xe6400094  swc1        $f0, 0x94($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
        ctx->pc = 0x362488u;
        goto label_362488;
    }
    ctx->pc = 0x362480u;
    SET_GPR_U32(ctx, 31, 0x362488u);
    ctx->pc = 0x362484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362480u;
            // 0x362484: 0xe6400094  swc1        $f0, 0x94($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362488u; }
        if (ctx->pc != 0x362488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362488u; }
        if (ctx->pc != 0x362488u) { return; }
    }
    ctx->pc = 0x362488u;
label_362488:
    // 0x362488: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x362488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36248c:
    // 0x36248c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x36248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362490:
    // 0x362490: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x362490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_362494:
    // 0x362494: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_362498:
    if (ctx->pc == 0x362498u) {
        ctx->pc = 0x362498u;
            // 0x362498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36249Cu;
        goto label_36249c;
    }
    ctx->pc = 0x362494u;
    {
        const bool branch_taken_0x362494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x362494) {
            ctx->pc = 0x362498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362494u;
            // 0x362498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3624C8u;
            goto label_3624c8;
        }
    }
    ctx->pc = 0x36249Cu;
label_36249c:
    // 0x36249c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x36249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3624a0:
    // 0x3624a0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x3624a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3624a4:
    // 0x3624a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3624a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3624a8:
    // 0x3624a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3624ac:
    if (ctx->pc == 0x3624ACu) {
        ctx->pc = 0x3624B0u;
        goto label_3624b0;
    }
    ctx->pc = 0x3624A8u;
    {
        const bool branch_taken_0x3624a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3624a8) {
            ctx->pc = 0x3624C4u;
            goto label_3624c4;
        }
    }
    ctx->pc = 0x3624B0u;
label_3624b0:
    // 0x3624b0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3624b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3624b4:
    // 0x3624b4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3624b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3624b8:
    // 0x3624b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3624b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3624bc:
    // 0x3624bc: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_3624c0:
    if (ctx->pc == 0x3624C0u) {
        ctx->pc = 0x3624C0u;
            // 0x3624c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3624C4u;
        goto label_3624c4;
    }
    ctx->pc = 0x3624BCu;
    {
        const bool branch_taken_0x3624bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3624bc) {
            ctx->pc = 0x3624C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3624BCu;
            // 0x3624c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362530u;
            goto label_362530;
        }
    }
    ctx->pc = 0x3624C4u;
label_3624c4:
    // 0x3624c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3624c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3624c8:
    // 0x3624c8: 0xc04cc04  jal         func_133010
label_3624cc:
    if (ctx->pc == 0x3624CCu) {
        ctx->pc = 0x3624CCu;
            // 0x3624cc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3624D0u;
        goto label_3624d0;
    }
    ctx->pc = 0x3624C8u;
    SET_GPR_U32(ctx, 31, 0x3624D0u);
    ctx->pc = 0x3624CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3624C8u;
            // 0x3624cc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3624D0u; }
        if (ctx->pc != 0x3624D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3624D0u; }
        if (ctx->pc != 0x3624D0u) { return; }
    }
    ctx->pc = 0x3624D0u;
label_3624d0:
    // 0x3624d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3624d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3624d4:
    // 0x3624d4: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x3624d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_3624d8:
    // 0x3624d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3624d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3624dc:
    // 0x3624dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3624dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3624e0:
    // 0x3624e0: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x3624e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3624e4:
    // 0x3624e4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3624e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3624e8:
    // 0x3624e8: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x3624e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3624ec:
    // 0x3624ec: 0x46141802  mul.s       $f0, $f3, $f20
    ctx->pc = 0x3624ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_3624f0:
    // 0x3624f0: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x3624f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3624f4:
    // 0x3624f4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x3624f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3624f8:
    // 0x3624f8: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x3624f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3624fc:
    // 0x3624fc: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x3624fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_362500:
    // 0x362500: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x362500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_362504:
    // 0x362504: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x362504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_362508:
    // 0x362508: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x362508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_36250c:
    // 0x36250c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x36250cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_362510:
    // 0x362510: 0xc088b74  jal         func_222DD0
label_362514:
    if (ctx->pc == 0x362514u) {
        ctx->pc = 0x362514u;
            // 0x362514: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->pc = 0x362518u;
        goto label_362518;
    }
    ctx->pc = 0x362510u;
    SET_GPR_U32(ctx, 31, 0x362518u);
    ctx->pc = 0x362514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362510u;
            // 0x362514: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362518u; }
        if (ctx->pc != 0x362518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362518u; }
        if (ctx->pc != 0x362518u) { return; }
    }
    ctx->pc = 0x362518u;
label_362518:
    // 0x362518: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x362518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_36251c:
    // 0x36251c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x36251cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_362520:
    // 0x362520: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x362520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_362524:
    // 0x362524: 0x320f809  jalr        $t9
label_362528:
    if (ctx->pc == 0x362528u) {
        ctx->pc = 0x362528u;
            // 0x362528: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x36252Cu;
        goto label_36252c;
    }
    ctx->pc = 0x362524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36252Cu);
        ctx->pc = 0x362528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362524u;
            // 0x362528: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36252Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36252Cu; }
            if (ctx->pc != 0x36252Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36252Cu;
label_36252c:
    // 0x36252c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_362530:
    // 0x362530: 0x10000027  b           . + 4 + (0x27 << 2)
label_362534:
    if (ctx->pc == 0x362534u) {
        ctx->pc = 0x362534u;
            // 0x362534: 0xa2220164  sb          $v0, 0x164($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 356), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x362538u;
        goto label_362538;
    }
    ctx->pc = 0x362530u;
    {
        const bool branch_taken_0x362530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362530u;
            // 0x362534: 0xa2220164  sb          $v0, 0x164($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 356), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362530) {
            ctx->pc = 0x3625D0u;
            goto label_3625d0;
        }
    }
    ctx->pc = 0x362538u;
label_362538:
    // 0x362538: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x362538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36253c:
    // 0x36253c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x36253cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_362540:
    // 0x362540: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_362544:
    if (ctx->pc == 0x362544u) {
        ctx->pc = 0x362544u;
            // 0x362544: 0x26a50030  addiu       $a1, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->pc = 0x362548u;
        goto label_362548;
    }
    ctx->pc = 0x362540u;
    {
        const bool branch_taken_0x362540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x362540) {
            ctx->pc = 0x362544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362540u;
            // 0x362544: 0x26a50030  addiu       $a1, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362558u;
            goto label_362558;
        }
    }
    ctx->pc = 0x362548u;
label_362548:
    // 0x362548: 0x92220164  lbu         $v0, 0x164($s1)
    ctx->pc = 0x362548u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 356)));
label_36254c:
    // 0x36254c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_362550:
    if (ctx->pc == 0x362550u) {
        ctx->pc = 0x362550u;
            // 0x362550: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x362554u;
        goto label_362554;
    }
    ctx->pc = 0x36254Cu;
    {
        const bool branch_taken_0x36254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36254c) {
            ctx->pc = 0x362550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36254Cu;
            // 0x362550: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3625C8u;
            goto label_3625c8;
        }
    }
    ctx->pc = 0x362554u;
label_362554:
    // 0x362554: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x362554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_362558:
    // 0x362558: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x362558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_36255c:
    // 0x36255c: 0xc04cc90  jal         func_133240
label_362560:
    if (ctx->pc == 0x362560u) {
        ctx->pc = 0x362560u;
            // 0x362560: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x362564u;
        goto label_362564;
    }
    ctx->pc = 0x36255Cu;
    SET_GPR_U32(ctx, 31, 0x362564u);
    ctx->pc = 0x362560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36255Cu;
            // 0x362560: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362564u; }
        if (ctx->pc != 0x362564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362564u; }
        if (ctx->pc != 0x362564u) { return; }
    }
    ctx->pc = 0x362564u;
label_362564:
    // 0x362564: 0x26240170  addiu       $a0, $s1, 0x170
    ctx->pc = 0x362564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_362568:
    // 0x362568: 0xc04cc04  jal         func_133010
label_36256c:
    if (ctx->pc == 0x36256Cu) {
        ctx->pc = 0x36256Cu;
            // 0x36256c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x362570u;
        goto label_362570;
    }
    ctx->pc = 0x362568u;
    SET_GPR_U32(ctx, 31, 0x362570u);
    ctx->pc = 0x36256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362568u;
            // 0x36256c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362570u; }
        if (ctx->pc != 0x362570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362570u; }
        if (ctx->pc != 0x362570u) { return; }
    }
    ctx->pc = 0x362570u;
label_362570:
    // 0x362570: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x362570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362574:
    // 0x362574: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x362574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_362578:
    // 0x362578: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x362578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36257c:
    // 0x36257c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36257cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_362580:
    // 0x362580: 0xc04cc70  jal         func_1331C0
label_362584:
    if (ctx->pc == 0x362584u) {
        ctx->pc = 0x362584u;
            // 0x362584: 0xe6200180  swc1        $f0, 0x180($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
        ctx->pc = 0x362588u;
        goto label_362588;
    }
    ctx->pc = 0x362580u;
    SET_GPR_U32(ctx, 31, 0x362588u);
    ctx->pc = 0x362584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362580u;
            // 0x362584: 0xe6200180  swc1        $f0, 0x180($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362588u; }
        if (ctx->pc != 0x362588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362588u; }
        if (ctx->pc != 0x362588u) { return; }
    }
    ctx->pc = 0x362588u;
label_362588:
    // 0x362588: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x362588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36258c:
    // 0x36258c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362590:
    // 0x362590: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x362590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362594:
    // 0x362594: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x362594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_362598:
    // 0x362598: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x362598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36259c:
    // 0x36259c: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x36259cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3625a0:
    // 0x3625a0: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x3625a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3625a4:
    // 0x3625a4: 0xc088b74  jal         func_222DD0
label_3625a8:
    if (ctx->pc == 0x3625A8u) {
        ctx->pc = 0x3625A8u;
            // 0x3625a8: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->pc = 0x3625ACu;
        goto label_3625ac;
    }
    ctx->pc = 0x3625A4u;
    SET_GPR_U32(ctx, 31, 0x3625ACu);
    ctx->pc = 0x3625A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3625A4u;
            // 0x3625a8: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3625ACu; }
        if (ctx->pc != 0x3625ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3625ACu; }
        if (ctx->pc != 0x3625ACu) { return; }
    }
    ctx->pc = 0x3625ACu;
label_3625ac:
    // 0x3625ac: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3625acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3625b0:
    // 0x3625b0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3625b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3625b4:
    // 0x3625b4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3625b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3625b8:
    // 0x3625b8: 0x320f809  jalr        $t9
label_3625bc:
    if (ctx->pc == 0x3625BCu) {
        ctx->pc = 0x3625BCu;
            // 0x3625bc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3625C0u;
        goto label_3625c0;
    }
    ctx->pc = 0x3625B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3625C0u);
        ctx->pc = 0x3625BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3625B8u;
            // 0x3625bc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3625C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3625C0u; }
            if (ctx->pc != 0x3625C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3625C0u;
label_3625c0:
    // 0x3625c0: 0xa2200164  sb          $zero, 0x164($s1)
    ctx->pc = 0x3625c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 356), (uint8_t)GPR_U32(ctx, 0));
label_3625c4:
    // 0x3625c4: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3625c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_3625c8:
    // 0x3625c8: 0xc0c6278  jal         func_3189E0
label_3625cc:
    if (ctx->pc == 0x3625CCu) {
        ctx->pc = 0x3625D0u;
        goto label_3625d0;
    }
    ctx->pc = 0x3625C8u;
    SET_GPR_U32(ctx, 31, 0x3625D0u);
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3625D0u; }
        if (ctx->pc != 0x3625D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3625D0u; }
        if (ctx->pc != 0x3625D0u) { return; }
    }
    ctx->pc = 0x3625D0u;
label_3625d0:
    // 0x3625d0: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x3625d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3625d4:
    // 0x3625d4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3625d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3625d8:
    // 0x3625d8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x3625d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3625dc:
    // 0x3625dc: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_3625e0:
    if (ctx->pc == 0x3625E0u) {
        ctx->pc = 0x3625E0u;
            // 0x3625e0: 0xe7a200a0  swc1        $f2, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->pc = 0x3625E4u;
        goto label_3625e4;
    }
    ctx->pc = 0x3625DCu;
    {
        const bool branch_taken_0x3625dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3625dc) {
            ctx->pc = 0x3625E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3625DCu;
            // 0x3625e0: 0xe7a200a0  swc1        $f2, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x362624u;
            goto label_362624;
        }
    }
    ctx->pc = 0x3625E4u;
label_3625e4:
    // 0x3625e4: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3625e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3625e8:
    // 0x3625e8: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x3625e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3625ec:
    // 0x3625ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3625ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3625f0:
    // 0x3625f0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_3625f4:
    if (ctx->pc == 0x3625F4u) {
        ctx->pc = 0x3625F8u;
        goto label_3625f8;
    }
    ctx->pc = 0x3625F0u;
    {
        const bool branch_taken_0x3625f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3625f0) {
            ctx->pc = 0x362620u;
            goto label_362620;
        }
    }
    ctx->pc = 0x3625F8u;
label_3625f8:
    // 0x3625f8: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x3625f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3625fc:
    // 0x3625fc: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x3625fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362600:
    // 0x362600: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x362600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_362604:
    // 0x362604: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_362608:
    if (ctx->pc == 0x362608u) {
        ctx->pc = 0x36260Cu;
        goto label_36260c;
    }
    ctx->pc = 0x362604u;
    {
        const bool branch_taken_0x362604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x362604) {
            ctx->pc = 0x362620u;
            goto label_362620;
        }
    }
    ctx->pc = 0x36260Cu;
label_36260c:
    // 0x36260c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x36260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362610:
    // 0x362610: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x362610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362614:
    // 0x362614: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x362614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_362618:
    // 0x362618: 0x45030055  bc1tl       . + 4 + (0x55 << 2)
label_36261c:
    if (ctx->pc == 0x36261Cu) {
        ctx->pc = 0x36261Cu;
            // 0x36261c: 0x92220165  lbu         $v0, 0x165($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 357)));
        ctx->pc = 0x362620u;
        goto label_362620;
    }
    ctx->pc = 0x362618u;
    {
        const bool branch_taken_0x362618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x362618) {
            ctx->pc = 0x36261Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362618u;
            // 0x36261c: 0x92220165  lbu         $v0, 0x165($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 357)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362770u;
            goto label_362770;
        }
    }
    ctx->pc = 0x362620u;
label_362620:
    // 0x362620: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x362620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_362624:
    // 0x362624: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x362624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_362628:
    // 0x362628: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x362628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36262c:
    // 0x36262c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x36262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362630:
    // 0x362630: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x362630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362634:
    // 0x362634: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x362634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_362638:
    // 0x362638: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x362638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_36263c:
    // 0x36263c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x36263cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_362640:
    // 0x362640: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x362640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_362644:
    // 0x362644: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x362644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_362648:
    // 0x362648: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x362648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36264c:
    // 0x36264c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x36264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362650:
    // 0x362650: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x362650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_362654:
    // 0x362654: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x362654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_362658:
    // 0x362658: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x362658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_36265c:
    // 0x36265c: 0xc0d8a80  jal         func_362A00
label_362660:
    if (ctx->pc == 0x362660u) {
        ctx->pc = 0x362660u;
            // 0x362660: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x362664u;
        goto label_362664;
    }
    ctx->pc = 0x36265Cu;
    SET_GPR_U32(ctx, 31, 0x362664u);
    ctx->pc = 0x362660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36265Cu;
            // 0x362660: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362664u; }
        if (ctx->pc != 0x362664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362664u; }
        if (ctx->pc != 0x362664u) { return; }
    }
    ctx->pc = 0x362664u;
label_362664:
    // 0x362664: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x362664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_362668:
    // 0x362668: 0xc0d8a80  jal         func_362A00
label_36266c:
    if (ctx->pc == 0x36266Cu) {
        ctx->pc = 0x36266Cu;
            // 0x36266c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x362670u;
        goto label_362670;
    }
    ctx->pc = 0x362668u;
    SET_GPR_U32(ctx, 31, 0x362670u);
    ctx->pc = 0x36266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362668u;
            // 0x36266c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362670u; }
        if (ctx->pc != 0x362670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362670u; }
        if (ctx->pc != 0x362670u) { return; }
    }
    ctx->pc = 0x362670u;
label_362670:
    // 0x362670: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x362670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_362674:
    // 0x362674: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x362674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_362678:
    // 0x362678: 0xc0d8a6c  jal         func_3629B0
label_36267c:
    if (ctx->pc == 0x36267Cu) {
        ctx->pc = 0x36267Cu;
            // 0x36267c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x362680u;
        goto label_362680;
    }
    ctx->pc = 0x362678u;
    SET_GPR_U32(ctx, 31, 0x362680u);
    ctx->pc = 0x36267Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362678u;
            // 0x36267c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362680u; }
        if (ctx->pc != 0x362680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362680u; }
        if (ctx->pc != 0x362680u) { return; }
    }
    ctx->pc = 0x362680u;
label_362680:
    // 0x362680: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x362680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_362684:
    // 0x362684: 0xc0b6e90  jal         func_2DBA40
label_362688:
    if (ctx->pc == 0x362688u) {
        ctx->pc = 0x362688u;
            // 0x362688: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x36268Cu;
        goto label_36268c;
    }
    ctx->pc = 0x362684u;
    SET_GPR_U32(ctx, 31, 0x36268Cu);
    ctx->pc = 0x362688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362684u;
            // 0x362688: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36268Cu; }
        if (ctx->pc != 0x36268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36268Cu; }
        if (ctx->pc != 0x36268Cu) { return; }
    }
    ctx->pc = 0x36268Cu;
label_36268c:
    // 0x36268c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36268cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_362690:
    // 0x362690: 0xc0d8a80  jal         func_362A00
label_362694:
    if (ctx->pc == 0x362694u) {
        ctx->pc = 0x362694u;
            // 0x362694: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x362698u;
        goto label_362698;
    }
    ctx->pc = 0x362690u;
    SET_GPR_U32(ctx, 31, 0x362698u);
    ctx->pc = 0x362694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362690u;
            // 0x362694: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362698u; }
        if (ctx->pc != 0x362698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362698u; }
        if (ctx->pc != 0x362698u) { return; }
    }
    ctx->pc = 0x362698u;
label_362698:
    // 0x362698: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x362698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_36269c:
    // 0x36269c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36269cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3626a0:
    // 0x3626a0: 0xc0d8a54  jal         func_362950
label_3626a4:
    if (ctx->pc == 0x3626A4u) {
        ctx->pc = 0x3626A4u;
            // 0x3626a4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3626A8u;
        goto label_3626a8;
    }
    ctx->pc = 0x3626A0u;
    SET_GPR_U32(ctx, 31, 0x3626A8u);
    ctx->pc = 0x3626A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626A0u;
            // 0x3626a4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626A8u; }
        if (ctx->pc != 0x3626A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626A8u; }
        if (ctx->pc != 0x3626A8u) { return; }
    }
    ctx->pc = 0x3626A8u;
label_3626a8:
    // 0x3626a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3626a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3626ac:
    // 0x3626ac: 0xc0b6e90  jal         func_2DBA40
label_3626b0:
    if (ctx->pc == 0x3626B0u) {
        ctx->pc = 0x3626B0u;
            // 0x3626b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3626B4u;
        goto label_3626b4;
    }
    ctx->pc = 0x3626ACu;
    SET_GPR_U32(ctx, 31, 0x3626B4u);
    ctx->pc = 0x3626B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626ACu;
            // 0x3626b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626B4u; }
        if (ctx->pc != 0x3626B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626B4u; }
        if (ctx->pc != 0x3626B4u) { return; }
    }
    ctx->pc = 0x3626B4u;
label_3626b4:
    // 0x3626b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3626b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3626b8:
    // 0x3626b8: 0xc0d8a80  jal         func_362A00
label_3626bc:
    if (ctx->pc == 0x3626BCu) {
        ctx->pc = 0x3626BCu;
            // 0x3626bc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3626C0u;
        goto label_3626c0;
    }
    ctx->pc = 0x3626B8u;
    SET_GPR_U32(ctx, 31, 0x3626C0u);
    ctx->pc = 0x3626BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626B8u;
            // 0x3626bc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626C0u; }
        if (ctx->pc != 0x3626C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626C0u; }
        if (ctx->pc != 0x3626C0u) { return; }
    }
    ctx->pc = 0x3626C0u;
label_3626c0:
    // 0x3626c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3626c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3626c4:
    // 0x3626c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3626c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3626c8:
    // 0x3626c8: 0xc0d8a3c  jal         func_3628F0
label_3626cc:
    if (ctx->pc == 0x3626CCu) {
        ctx->pc = 0x3626CCu;
            // 0x3626cc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3626D0u;
        goto label_3626d0;
    }
    ctx->pc = 0x3626C8u;
    SET_GPR_U32(ctx, 31, 0x3626D0u);
    ctx->pc = 0x3626CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626C8u;
            // 0x3626cc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626D0u; }
        if (ctx->pc != 0x3626D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626D0u; }
        if (ctx->pc != 0x3626D0u) { return; }
    }
    ctx->pc = 0x3626D0u;
label_3626d0:
    // 0x3626d0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3626d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3626d4:
    // 0x3626d4: 0xc0b6e00  jal         func_2DB800
label_3626d8:
    if (ctx->pc == 0x3626D8u) {
        ctx->pc = 0x3626D8u;
            // 0x3626d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3626DCu;
        goto label_3626dc;
    }
    ctx->pc = 0x3626D4u;
    SET_GPR_U32(ctx, 31, 0x3626DCu);
    ctx->pc = 0x3626D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626D4u;
            // 0x3626d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626DCu; }
        if (ctx->pc != 0x3626DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626DCu; }
        if (ctx->pc != 0x3626DCu) { return; }
    }
    ctx->pc = 0x3626DCu;
label_3626dc:
    // 0x3626dc: 0xc0d8a80  jal         func_362A00
label_3626e0:
    if (ctx->pc == 0x3626E0u) {
        ctx->pc = 0x3626E0u;
            // 0x3626e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3626E4u;
        goto label_3626e4;
    }
    ctx->pc = 0x3626DCu;
    SET_GPR_U32(ctx, 31, 0x3626E4u);
    ctx->pc = 0x3626E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626DCu;
            // 0x3626e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626E4u; }
        if (ctx->pc != 0x3626E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626E4u; }
        if (ctx->pc != 0x3626E4u) { return; }
    }
    ctx->pc = 0x3626E4u;
label_3626e4:
    // 0x3626e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3626e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3626e8:
    // 0x3626e8: 0xc0d8a80  jal         func_362A00
label_3626ec:
    if (ctx->pc == 0x3626ECu) {
        ctx->pc = 0x3626ECu;
            // 0x3626ec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3626F0u;
        goto label_3626f0;
    }
    ctx->pc = 0x3626E8u;
    SET_GPR_U32(ctx, 31, 0x3626F0u);
    ctx->pc = 0x3626ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626E8u;
            // 0x3626ec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626F0u; }
        if (ctx->pc != 0x3626F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626F0u; }
        if (ctx->pc != 0x3626F0u) { return; }
    }
    ctx->pc = 0x3626F0u;
label_3626f0:
    // 0x3626f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3626f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3626f4:
    // 0x3626f4: 0xc0d8a2c  jal         func_3628B0
label_3626f8:
    if (ctx->pc == 0x3626F8u) {
        ctx->pc = 0x3626F8u;
            // 0x3626f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3626FCu;
        goto label_3626fc;
    }
    ctx->pc = 0x3626F4u;
    SET_GPR_U32(ctx, 31, 0x3626FCu);
    ctx->pc = 0x3626F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626F4u;
            // 0x3626f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626FCu; }
        if (ctx->pc != 0x3626FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3626FCu; }
        if (ctx->pc != 0x3626FCu) { return; }
    }
    ctx->pc = 0x3626FCu;
label_3626fc:
    // 0x3626fc: 0xc0d8a24  jal         func_362890
label_362700:
    if (ctx->pc == 0x362700u) {
        ctx->pc = 0x362700u;
            // 0x362700: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x362704u;
        goto label_362704;
    }
    ctx->pc = 0x3626FCu;
    SET_GPR_U32(ctx, 31, 0x362704u);
    ctx->pc = 0x362700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3626FCu;
            // 0x362700: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362704u; }
        if (ctx->pc != 0x362704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362704u; }
        if (ctx->pc != 0x362704u) { return; }
    }
    ctx->pc = 0x362704u;
label_362704:
    // 0x362704: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_362708:
    if (ctx->pc == 0x362708u) {
        ctx->pc = 0x362708u;
            // 0x362708: 0xc7a00110  lwc1        $f0, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x36270Cu;
        goto label_36270c;
    }
    ctx->pc = 0x362704u;
    {
        const bool branch_taken_0x362704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362704) {
            ctx->pc = 0x362708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362704u;
            // 0x362708: 0xc7a00110  lwc1        $f0, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x36271Cu;
            goto label_36271c;
        }
    }
    ctx->pc = 0x36270Cu;
label_36270c:
    // 0x36270c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x36270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_362710:
    // 0x362710: 0xc0d8a14  jal         func_362850
label_362714:
    if (ctx->pc == 0x362714u) {
        ctx->pc = 0x362714u;
            // 0x362714: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362718u;
        goto label_362718;
    }
    ctx->pc = 0x362710u;
    SET_GPR_U32(ctx, 31, 0x362718u);
    ctx->pc = 0x362714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362710u;
            // 0x362714: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362718u; }
        if (ctx->pc != 0x362718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362718u; }
        if (ctx->pc != 0x362718u) { return; }
    }
    ctx->pc = 0x362718u;
label_362718:
    // 0x362718: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x362718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36271c:
    // 0x36271c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362720:
    // 0x362720: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x362720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_362724:
    // 0x362724: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x362724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362728:
    // 0x362728: 0x461400c2  mul.s       $f3, $f0, $f20
    ctx->pc = 0x362728u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_36272c:
    // 0x36272c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x36272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362730:
    // 0x362730: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x362730u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_362734:
    // 0x362734: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x362734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_362738:
    // 0x362738: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x362738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_36273c:
    // 0x36273c: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x36273cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_362740:
    // 0x362740: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x362740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_362744:
    // 0x362744: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x362744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_362748:
    // 0x362748: 0xc088b74  jal         func_222DD0
label_36274c:
    if (ctx->pc == 0x36274Cu) {
        ctx->pc = 0x36274Cu;
            // 0x36274c: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->pc = 0x362750u;
        goto label_362750;
    }
    ctx->pc = 0x362748u;
    SET_GPR_U32(ctx, 31, 0x362750u);
    ctx->pc = 0x36274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362748u;
            // 0x36274c: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362750u; }
        if (ctx->pc != 0x362750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362750u; }
        if (ctx->pc != 0x362750u) { return; }
    }
    ctx->pc = 0x362750u;
label_362750:
    // 0x362750: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x362750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_362754:
    // 0x362754: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x362754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_362758:
    // 0x362758: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x362758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_36275c:
    // 0x36275c: 0x320f809  jalr        $t9
label_362760:
    if (ctx->pc == 0x362760u) {
        ctx->pc = 0x362760u;
            // 0x362760: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x362764u;
        goto label_362764;
    }
    ctx->pc = 0x36275Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x362764u);
        ctx->pc = 0x362760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36275Cu;
            // 0x362760: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x362764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x362764u; }
            if (ctx->pc != 0x362764u) { return; }
        }
        }
    }
    ctx->pc = 0x362764u;
label_362764:
    // 0x362764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_362768:
    // 0x362768: 0x1000000f  b           . + 4 + (0xF << 2)
label_36276c:
    if (ctx->pc == 0x36276Cu) {
        ctx->pc = 0x36276Cu;
            // 0x36276c: 0xa2220165  sb          $v0, 0x165($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 357), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x362770u;
        goto label_362770;
    }
    ctx->pc = 0x362768u;
    {
        const bool branch_taken_0x362768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36276Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362768u;
            // 0x36276c: 0xa2220165  sb          $v0, 0x165($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 357), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362768) {
            ctx->pc = 0x3627A8u;
            goto label_3627a8;
        }
    }
    ctx->pc = 0x362770u;
label_362770:
    // 0x362770: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_362774:
    if (ctx->pc == 0x362774u) {
        ctx->pc = 0x362774u;
            // 0x362774: 0xc621012c  lwc1        $f1, 0x12C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x362778u;
        goto label_362778;
    }
    ctx->pc = 0x362770u;
    {
        const bool branch_taken_0x362770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362770) {
            ctx->pc = 0x362774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362770u;
            // 0x362774: 0xc621012c  lwc1        $f1, 0x12C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3627ACu;
            goto label_3627ac;
        }
    }
    ctx->pc = 0x362778u;
label_362778:
    // 0x362778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36277c:
    // 0x36277c: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x36277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_362780:
    // 0x362780: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x362780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_362784:
    // 0x362784: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x362784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_362788:
    // 0x362788: 0xc088b74  jal         func_222DD0
label_36278c:
    if (ctx->pc == 0x36278Cu) {
        ctx->pc = 0x36278Cu;
            // 0x36278c: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x362790u;
        goto label_362790;
    }
    ctx->pc = 0x362788u;
    SET_GPR_U32(ctx, 31, 0x362790u);
    ctx->pc = 0x36278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362788u;
            // 0x36278c: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362790u; }
        if (ctx->pc != 0x362790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362790u; }
        if (ctx->pc != 0x362790u) { return; }
    }
    ctx->pc = 0x362790u;
label_362790:
    // 0x362790: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x362790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_362794:
    // 0x362794: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x362794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_362798:
    // 0x362798: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x362798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_36279c:
    // 0x36279c: 0x320f809  jalr        $t9
label_3627a0:
    if (ctx->pc == 0x3627A0u) {
        ctx->pc = 0x3627A0u;
            // 0x3627a0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3627A4u;
        goto label_3627a4;
    }
    ctx->pc = 0x36279Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3627A4u);
        ctx->pc = 0x3627A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36279Cu;
            // 0x3627a0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3627A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3627A4u; }
            if (ctx->pc != 0x3627A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3627A4u;
label_3627a4:
    // 0x3627a4: 0xa2200165  sb          $zero, 0x165($s1)
    ctx->pc = 0x3627a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 357), (uint8_t)GPR_U32(ctx, 0));
label_3627a8:
    // 0x3627a8: 0xc621012c  lwc1        $f1, 0x12C($s1)
    ctx->pc = 0x3627a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3627ac:
    // 0x3627ac: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x3627acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3627b0:
    // 0x3627b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3627b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3627b4:
    // 0x3627b4: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_3627b8:
    if (ctx->pc == 0x3627B8u) {
        ctx->pc = 0x3627B8u;
            // 0x3627b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3627BCu;
        goto label_3627bc;
    }
    ctx->pc = 0x3627B4u;
    {
        const bool branch_taken_0x3627b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3627b4) {
            ctx->pc = 0x3627B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3627B4u;
            // 0x3627b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362810u;
            goto label_362810;
        }
    }
    ctx->pc = 0x3627BCu;
label_3627bc:
    // 0x3627bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3627bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3627c0:
    // 0x3627c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3627c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3627c4:
    // 0x3627c4: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x3627c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_3627c8:
    // 0x3627c8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3627c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3627cc:
    // 0x3627cc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3627ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3627d0:
    // 0x3627d0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3627d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3627d4:
    // 0x3627d4: 0xc088b74  jal         func_222DD0
label_3627d8:
    if (ctx->pc == 0x3627D8u) {
        ctx->pc = 0x3627D8u;
            // 0x3627d8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x3627DCu;
        goto label_3627dc;
    }
    ctx->pc = 0x3627D4u;
    SET_GPR_U32(ctx, 31, 0x3627DCu);
    ctx->pc = 0x3627D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3627D4u;
            // 0x3627d8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3627DCu; }
        if (ctx->pc != 0x3627DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3627DCu; }
        if (ctx->pc != 0x3627DCu) { return; }
    }
    ctx->pc = 0x3627DCu;
label_3627dc:
    // 0x3627dc: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3627dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3627e0:
    // 0x3627e0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3627e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3627e4:
    // 0x3627e4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3627e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3627e8:
    // 0x3627e8: 0x320f809  jalr        $t9
label_3627ec:
    if (ctx->pc == 0x3627ECu) {
        ctx->pc = 0x3627ECu;
            // 0x3627ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3627F0u;
        goto label_3627f0;
    }
    ctx->pc = 0x3627E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3627F0u);
        ctx->pc = 0x3627ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3627E8u;
            // 0x3627ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3627F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3627F0u; }
            if (ctx->pc != 0x3627F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3627F0u;
label_3627f0:
    // 0x3627f0: 0xc088b74  jal         func_222DD0
label_3627f4:
    if (ctx->pc == 0x3627F4u) {
        ctx->pc = 0x3627F4u;
            // 0x3627f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3627F8u;
        goto label_3627f8;
    }
    ctx->pc = 0x3627F0u;
    SET_GPR_U32(ctx, 31, 0x3627F8u);
    ctx->pc = 0x3627F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3627F0u;
            // 0x3627f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3627F8u; }
        if (ctx->pc != 0x3627F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3627F8u; }
        if (ctx->pc != 0x3627F8u) { return; }
    }
    ctx->pc = 0x3627F8u;
label_3627f8:
    // 0x3627f8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3627f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3627fc:
    // 0x3627fc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3627fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_362800:
    // 0x362800: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x362800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_362804:
    // 0x362804: 0x320f809  jalr        $t9
label_362808:
    if (ctx->pc == 0x362808u) {
        ctx->pc = 0x362808u;
            // 0x362808: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x36280Cu;
        goto label_36280c;
    }
    ctx->pc = 0x362804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36280Cu);
        ctx->pc = 0x362808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362804u;
            // 0x362808: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36280Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36280Cu; }
            if (ctx->pc != 0x36280Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36280Cu;
label_36280c:
    // 0x36280c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362810:
    // 0x362810: 0xc088b74  jal         func_222DD0
label_362814:
    if (ctx->pc == 0x362814u) {
        ctx->pc = 0x362818u;
        goto label_362818;
    }
    ctx->pc = 0x362810u;
    SET_GPR_U32(ctx, 31, 0x362818u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362818u; }
        if (ctx->pc != 0x362818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362818u; }
        if (ctx->pc != 0x362818u) { return; }
    }
    ctx->pc = 0x362818u;
label_362818:
    // 0x362818: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x362818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_36281c:
    // 0x36281c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x36281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_362820:
    // 0x362820: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x362820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_362824:
    // 0x362824: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x362824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_362828:
    // 0x362828: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x362828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36282c:
    // 0x36282c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x36282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_362830:
    // 0x362830: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x362830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_362834:
    // 0x362834: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x362834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_362838:
    // 0x362838: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x362838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36283c:
    // 0x36283c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36283cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_362840:
    // 0x362840: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x362840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_362844:
    // 0x362844: 0x3e00008  jr          $ra
label_362848:
    if (ctx->pc == 0x362848u) {
        ctx->pc = 0x362848u;
            // 0x362848: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x36284Cu;
        goto label_36284c;
    }
    ctx->pc = 0x362844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362844u;
            // 0x362848: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36284Cu;
label_36284c:
    // 0x36284c: 0x0  nop
    ctx->pc = 0x36284cu;
    // NOP
}
