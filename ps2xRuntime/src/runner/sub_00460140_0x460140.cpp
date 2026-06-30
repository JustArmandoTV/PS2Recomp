#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00460140
// Address: 0x460140 - 0x460770
void sub_00460140_0x460140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460140_0x460140");
#endif

    switch (ctx->pc) {
        case 0x460140u: goto label_460140;
        case 0x460144u: goto label_460144;
        case 0x460148u: goto label_460148;
        case 0x46014cu: goto label_46014c;
        case 0x460150u: goto label_460150;
        case 0x460154u: goto label_460154;
        case 0x460158u: goto label_460158;
        case 0x46015cu: goto label_46015c;
        case 0x460160u: goto label_460160;
        case 0x460164u: goto label_460164;
        case 0x460168u: goto label_460168;
        case 0x46016cu: goto label_46016c;
        case 0x460170u: goto label_460170;
        case 0x460174u: goto label_460174;
        case 0x460178u: goto label_460178;
        case 0x46017cu: goto label_46017c;
        case 0x460180u: goto label_460180;
        case 0x460184u: goto label_460184;
        case 0x460188u: goto label_460188;
        case 0x46018cu: goto label_46018c;
        case 0x460190u: goto label_460190;
        case 0x460194u: goto label_460194;
        case 0x460198u: goto label_460198;
        case 0x46019cu: goto label_46019c;
        case 0x4601a0u: goto label_4601a0;
        case 0x4601a4u: goto label_4601a4;
        case 0x4601a8u: goto label_4601a8;
        case 0x4601acu: goto label_4601ac;
        case 0x4601b0u: goto label_4601b0;
        case 0x4601b4u: goto label_4601b4;
        case 0x4601b8u: goto label_4601b8;
        case 0x4601bcu: goto label_4601bc;
        case 0x4601c0u: goto label_4601c0;
        case 0x4601c4u: goto label_4601c4;
        case 0x4601c8u: goto label_4601c8;
        case 0x4601ccu: goto label_4601cc;
        case 0x4601d0u: goto label_4601d0;
        case 0x4601d4u: goto label_4601d4;
        case 0x4601d8u: goto label_4601d8;
        case 0x4601dcu: goto label_4601dc;
        case 0x4601e0u: goto label_4601e0;
        case 0x4601e4u: goto label_4601e4;
        case 0x4601e8u: goto label_4601e8;
        case 0x4601ecu: goto label_4601ec;
        case 0x4601f0u: goto label_4601f0;
        case 0x4601f4u: goto label_4601f4;
        case 0x4601f8u: goto label_4601f8;
        case 0x4601fcu: goto label_4601fc;
        case 0x460200u: goto label_460200;
        case 0x460204u: goto label_460204;
        case 0x460208u: goto label_460208;
        case 0x46020cu: goto label_46020c;
        case 0x460210u: goto label_460210;
        case 0x460214u: goto label_460214;
        case 0x460218u: goto label_460218;
        case 0x46021cu: goto label_46021c;
        case 0x460220u: goto label_460220;
        case 0x460224u: goto label_460224;
        case 0x460228u: goto label_460228;
        case 0x46022cu: goto label_46022c;
        case 0x460230u: goto label_460230;
        case 0x460234u: goto label_460234;
        case 0x460238u: goto label_460238;
        case 0x46023cu: goto label_46023c;
        case 0x460240u: goto label_460240;
        case 0x460244u: goto label_460244;
        case 0x460248u: goto label_460248;
        case 0x46024cu: goto label_46024c;
        case 0x460250u: goto label_460250;
        case 0x460254u: goto label_460254;
        case 0x460258u: goto label_460258;
        case 0x46025cu: goto label_46025c;
        case 0x460260u: goto label_460260;
        case 0x460264u: goto label_460264;
        case 0x460268u: goto label_460268;
        case 0x46026cu: goto label_46026c;
        case 0x460270u: goto label_460270;
        case 0x460274u: goto label_460274;
        case 0x460278u: goto label_460278;
        case 0x46027cu: goto label_46027c;
        case 0x460280u: goto label_460280;
        case 0x460284u: goto label_460284;
        case 0x460288u: goto label_460288;
        case 0x46028cu: goto label_46028c;
        case 0x460290u: goto label_460290;
        case 0x460294u: goto label_460294;
        case 0x460298u: goto label_460298;
        case 0x46029cu: goto label_46029c;
        case 0x4602a0u: goto label_4602a0;
        case 0x4602a4u: goto label_4602a4;
        case 0x4602a8u: goto label_4602a8;
        case 0x4602acu: goto label_4602ac;
        case 0x4602b0u: goto label_4602b0;
        case 0x4602b4u: goto label_4602b4;
        case 0x4602b8u: goto label_4602b8;
        case 0x4602bcu: goto label_4602bc;
        case 0x4602c0u: goto label_4602c0;
        case 0x4602c4u: goto label_4602c4;
        case 0x4602c8u: goto label_4602c8;
        case 0x4602ccu: goto label_4602cc;
        case 0x4602d0u: goto label_4602d0;
        case 0x4602d4u: goto label_4602d4;
        case 0x4602d8u: goto label_4602d8;
        case 0x4602dcu: goto label_4602dc;
        case 0x4602e0u: goto label_4602e0;
        case 0x4602e4u: goto label_4602e4;
        case 0x4602e8u: goto label_4602e8;
        case 0x4602ecu: goto label_4602ec;
        case 0x4602f0u: goto label_4602f0;
        case 0x4602f4u: goto label_4602f4;
        case 0x4602f8u: goto label_4602f8;
        case 0x4602fcu: goto label_4602fc;
        case 0x460300u: goto label_460300;
        case 0x460304u: goto label_460304;
        case 0x460308u: goto label_460308;
        case 0x46030cu: goto label_46030c;
        case 0x460310u: goto label_460310;
        case 0x460314u: goto label_460314;
        case 0x460318u: goto label_460318;
        case 0x46031cu: goto label_46031c;
        case 0x460320u: goto label_460320;
        case 0x460324u: goto label_460324;
        case 0x460328u: goto label_460328;
        case 0x46032cu: goto label_46032c;
        case 0x460330u: goto label_460330;
        case 0x460334u: goto label_460334;
        case 0x460338u: goto label_460338;
        case 0x46033cu: goto label_46033c;
        case 0x460340u: goto label_460340;
        case 0x460344u: goto label_460344;
        case 0x460348u: goto label_460348;
        case 0x46034cu: goto label_46034c;
        case 0x460350u: goto label_460350;
        case 0x460354u: goto label_460354;
        case 0x460358u: goto label_460358;
        case 0x46035cu: goto label_46035c;
        case 0x460360u: goto label_460360;
        case 0x460364u: goto label_460364;
        case 0x460368u: goto label_460368;
        case 0x46036cu: goto label_46036c;
        case 0x460370u: goto label_460370;
        case 0x460374u: goto label_460374;
        case 0x460378u: goto label_460378;
        case 0x46037cu: goto label_46037c;
        case 0x460380u: goto label_460380;
        case 0x460384u: goto label_460384;
        case 0x460388u: goto label_460388;
        case 0x46038cu: goto label_46038c;
        case 0x460390u: goto label_460390;
        case 0x460394u: goto label_460394;
        case 0x460398u: goto label_460398;
        case 0x46039cu: goto label_46039c;
        case 0x4603a0u: goto label_4603a0;
        case 0x4603a4u: goto label_4603a4;
        case 0x4603a8u: goto label_4603a8;
        case 0x4603acu: goto label_4603ac;
        case 0x4603b0u: goto label_4603b0;
        case 0x4603b4u: goto label_4603b4;
        case 0x4603b8u: goto label_4603b8;
        case 0x4603bcu: goto label_4603bc;
        case 0x4603c0u: goto label_4603c0;
        case 0x4603c4u: goto label_4603c4;
        case 0x4603c8u: goto label_4603c8;
        case 0x4603ccu: goto label_4603cc;
        case 0x4603d0u: goto label_4603d0;
        case 0x4603d4u: goto label_4603d4;
        case 0x4603d8u: goto label_4603d8;
        case 0x4603dcu: goto label_4603dc;
        case 0x4603e0u: goto label_4603e0;
        case 0x4603e4u: goto label_4603e4;
        case 0x4603e8u: goto label_4603e8;
        case 0x4603ecu: goto label_4603ec;
        case 0x4603f0u: goto label_4603f0;
        case 0x4603f4u: goto label_4603f4;
        case 0x4603f8u: goto label_4603f8;
        case 0x4603fcu: goto label_4603fc;
        case 0x460400u: goto label_460400;
        case 0x460404u: goto label_460404;
        case 0x460408u: goto label_460408;
        case 0x46040cu: goto label_46040c;
        case 0x460410u: goto label_460410;
        case 0x460414u: goto label_460414;
        case 0x460418u: goto label_460418;
        case 0x46041cu: goto label_46041c;
        case 0x460420u: goto label_460420;
        case 0x460424u: goto label_460424;
        case 0x460428u: goto label_460428;
        case 0x46042cu: goto label_46042c;
        case 0x460430u: goto label_460430;
        case 0x460434u: goto label_460434;
        case 0x460438u: goto label_460438;
        case 0x46043cu: goto label_46043c;
        case 0x460440u: goto label_460440;
        case 0x460444u: goto label_460444;
        case 0x460448u: goto label_460448;
        case 0x46044cu: goto label_46044c;
        case 0x460450u: goto label_460450;
        case 0x460454u: goto label_460454;
        case 0x460458u: goto label_460458;
        case 0x46045cu: goto label_46045c;
        case 0x460460u: goto label_460460;
        case 0x460464u: goto label_460464;
        case 0x460468u: goto label_460468;
        case 0x46046cu: goto label_46046c;
        case 0x460470u: goto label_460470;
        case 0x460474u: goto label_460474;
        case 0x460478u: goto label_460478;
        case 0x46047cu: goto label_46047c;
        case 0x460480u: goto label_460480;
        case 0x460484u: goto label_460484;
        case 0x460488u: goto label_460488;
        case 0x46048cu: goto label_46048c;
        case 0x460490u: goto label_460490;
        case 0x460494u: goto label_460494;
        case 0x460498u: goto label_460498;
        case 0x46049cu: goto label_46049c;
        case 0x4604a0u: goto label_4604a0;
        case 0x4604a4u: goto label_4604a4;
        case 0x4604a8u: goto label_4604a8;
        case 0x4604acu: goto label_4604ac;
        case 0x4604b0u: goto label_4604b0;
        case 0x4604b4u: goto label_4604b4;
        case 0x4604b8u: goto label_4604b8;
        case 0x4604bcu: goto label_4604bc;
        case 0x4604c0u: goto label_4604c0;
        case 0x4604c4u: goto label_4604c4;
        case 0x4604c8u: goto label_4604c8;
        case 0x4604ccu: goto label_4604cc;
        case 0x4604d0u: goto label_4604d0;
        case 0x4604d4u: goto label_4604d4;
        case 0x4604d8u: goto label_4604d8;
        case 0x4604dcu: goto label_4604dc;
        case 0x4604e0u: goto label_4604e0;
        case 0x4604e4u: goto label_4604e4;
        case 0x4604e8u: goto label_4604e8;
        case 0x4604ecu: goto label_4604ec;
        case 0x4604f0u: goto label_4604f0;
        case 0x4604f4u: goto label_4604f4;
        case 0x4604f8u: goto label_4604f8;
        case 0x4604fcu: goto label_4604fc;
        case 0x460500u: goto label_460500;
        case 0x460504u: goto label_460504;
        case 0x460508u: goto label_460508;
        case 0x46050cu: goto label_46050c;
        case 0x460510u: goto label_460510;
        case 0x460514u: goto label_460514;
        case 0x460518u: goto label_460518;
        case 0x46051cu: goto label_46051c;
        case 0x460520u: goto label_460520;
        case 0x460524u: goto label_460524;
        case 0x460528u: goto label_460528;
        case 0x46052cu: goto label_46052c;
        case 0x460530u: goto label_460530;
        case 0x460534u: goto label_460534;
        case 0x460538u: goto label_460538;
        case 0x46053cu: goto label_46053c;
        case 0x460540u: goto label_460540;
        case 0x460544u: goto label_460544;
        case 0x460548u: goto label_460548;
        case 0x46054cu: goto label_46054c;
        case 0x460550u: goto label_460550;
        case 0x460554u: goto label_460554;
        case 0x460558u: goto label_460558;
        case 0x46055cu: goto label_46055c;
        case 0x460560u: goto label_460560;
        case 0x460564u: goto label_460564;
        case 0x460568u: goto label_460568;
        case 0x46056cu: goto label_46056c;
        case 0x460570u: goto label_460570;
        case 0x460574u: goto label_460574;
        case 0x460578u: goto label_460578;
        case 0x46057cu: goto label_46057c;
        case 0x460580u: goto label_460580;
        case 0x460584u: goto label_460584;
        case 0x460588u: goto label_460588;
        case 0x46058cu: goto label_46058c;
        case 0x460590u: goto label_460590;
        case 0x460594u: goto label_460594;
        case 0x460598u: goto label_460598;
        case 0x46059cu: goto label_46059c;
        case 0x4605a0u: goto label_4605a0;
        case 0x4605a4u: goto label_4605a4;
        case 0x4605a8u: goto label_4605a8;
        case 0x4605acu: goto label_4605ac;
        case 0x4605b0u: goto label_4605b0;
        case 0x4605b4u: goto label_4605b4;
        case 0x4605b8u: goto label_4605b8;
        case 0x4605bcu: goto label_4605bc;
        case 0x4605c0u: goto label_4605c0;
        case 0x4605c4u: goto label_4605c4;
        case 0x4605c8u: goto label_4605c8;
        case 0x4605ccu: goto label_4605cc;
        case 0x4605d0u: goto label_4605d0;
        case 0x4605d4u: goto label_4605d4;
        case 0x4605d8u: goto label_4605d8;
        case 0x4605dcu: goto label_4605dc;
        case 0x4605e0u: goto label_4605e0;
        case 0x4605e4u: goto label_4605e4;
        case 0x4605e8u: goto label_4605e8;
        case 0x4605ecu: goto label_4605ec;
        case 0x4605f0u: goto label_4605f0;
        case 0x4605f4u: goto label_4605f4;
        case 0x4605f8u: goto label_4605f8;
        case 0x4605fcu: goto label_4605fc;
        case 0x460600u: goto label_460600;
        case 0x460604u: goto label_460604;
        case 0x460608u: goto label_460608;
        case 0x46060cu: goto label_46060c;
        case 0x460610u: goto label_460610;
        case 0x460614u: goto label_460614;
        case 0x460618u: goto label_460618;
        case 0x46061cu: goto label_46061c;
        case 0x460620u: goto label_460620;
        case 0x460624u: goto label_460624;
        case 0x460628u: goto label_460628;
        case 0x46062cu: goto label_46062c;
        case 0x460630u: goto label_460630;
        case 0x460634u: goto label_460634;
        case 0x460638u: goto label_460638;
        case 0x46063cu: goto label_46063c;
        case 0x460640u: goto label_460640;
        case 0x460644u: goto label_460644;
        case 0x460648u: goto label_460648;
        case 0x46064cu: goto label_46064c;
        case 0x460650u: goto label_460650;
        case 0x460654u: goto label_460654;
        case 0x460658u: goto label_460658;
        case 0x46065cu: goto label_46065c;
        case 0x460660u: goto label_460660;
        case 0x460664u: goto label_460664;
        case 0x460668u: goto label_460668;
        case 0x46066cu: goto label_46066c;
        case 0x460670u: goto label_460670;
        case 0x460674u: goto label_460674;
        case 0x460678u: goto label_460678;
        case 0x46067cu: goto label_46067c;
        case 0x460680u: goto label_460680;
        case 0x460684u: goto label_460684;
        case 0x460688u: goto label_460688;
        case 0x46068cu: goto label_46068c;
        case 0x460690u: goto label_460690;
        case 0x460694u: goto label_460694;
        case 0x460698u: goto label_460698;
        case 0x46069cu: goto label_46069c;
        case 0x4606a0u: goto label_4606a0;
        case 0x4606a4u: goto label_4606a4;
        case 0x4606a8u: goto label_4606a8;
        case 0x4606acu: goto label_4606ac;
        case 0x4606b0u: goto label_4606b0;
        case 0x4606b4u: goto label_4606b4;
        case 0x4606b8u: goto label_4606b8;
        case 0x4606bcu: goto label_4606bc;
        case 0x4606c0u: goto label_4606c0;
        case 0x4606c4u: goto label_4606c4;
        case 0x4606c8u: goto label_4606c8;
        case 0x4606ccu: goto label_4606cc;
        case 0x4606d0u: goto label_4606d0;
        case 0x4606d4u: goto label_4606d4;
        case 0x4606d8u: goto label_4606d8;
        case 0x4606dcu: goto label_4606dc;
        case 0x4606e0u: goto label_4606e0;
        case 0x4606e4u: goto label_4606e4;
        case 0x4606e8u: goto label_4606e8;
        case 0x4606ecu: goto label_4606ec;
        case 0x4606f0u: goto label_4606f0;
        case 0x4606f4u: goto label_4606f4;
        case 0x4606f8u: goto label_4606f8;
        case 0x4606fcu: goto label_4606fc;
        case 0x460700u: goto label_460700;
        case 0x460704u: goto label_460704;
        case 0x460708u: goto label_460708;
        case 0x46070cu: goto label_46070c;
        case 0x460710u: goto label_460710;
        case 0x460714u: goto label_460714;
        case 0x460718u: goto label_460718;
        case 0x46071cu: goto label_46071c;
        case 0x460720u: goto label_460720;
        case 0x460724u: goto label_460724;
        case 0x460728u: goto label_460728;
        case 0x46072cu: goto label_46072c;
        case 0x460730u: goto label_460730;
        case 0x460734u: goto label_460734;
        case 0x460738u: goto label_460738;
        case 0x46073cu: goto label_46073c;
        case 0x460740u: goto label_460740;
        case 0x460744u: goto label_460744;
        case 0x460748u: goto label_460748;
        case 0x46074cu: goto label_46074c;
        case 0x460750u: goto label_460750;
        case 0x460754u: goto label_460754;
        case 0x460758u: goto label_460758;
        case 0x46075cu: goto label_46075c;
        case 0x460760u: goto label_460760;
        case 0x460764u: goto label_460764;
        case 0x460768u: goto label_460768;
        case 0x46076cu: goto label_46076c;
        default: break;
    }

    ctx->pc = 0x460140u;

label_460140:
    // 0x460140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x460140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_460144:
    // 0x460144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x460144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_460148:
    // 0x460148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x460148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46014c:
    // 0x46014c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_460150:
    // 0x460150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_460154:
    // 0x460154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x460154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_460158:
    // 0x460158: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x460158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_46015c:
    // 0x46015c: 0xc0c9a58  jal         func_326960
label_460160:
    if (ctx->pc == 0x460160u) {
        ctx->pc = 0x460160u;
            // 0x460160: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x460164u;
        goto label_460164;
    }
    ctx->pc = 0x46015Cu;
    SET_GPR_U32(ctx, 31, 0x460164u);
    ctx->pc = 0x460160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46015Cu;
            // 0x460160: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460164u; }
        if (ctx->pc != 0x460164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460164u; }
        if (ctx->pc != 0x460164u) { return; }
    }
    ctx->pc = 0x460164u;
label_460164:
    // 0x460164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x460164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_460168:
    // 0x460168: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x460168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_46016c:
    // 0x46016c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_460170:
    if (ctx->pc == 0x460170u) {
        ctx->pc = 0x460170u;
            // 0x460170: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x460174u;
        goto label_460174;
    }
    ctx->pc = 0x46016Cu;
    {
        const bool branch_taken_0x46016c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46016c) {
            ctx->pc = 0x460170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46016Cu;
            // 0x460170: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4601C0u;
            goto label_4601c0;
        }
    }
    ctx->pc = 0x460174u;
label_460174:
    // 0x460174: 0xc040180  jal         func_100600
label_460178:
    if (ctx->pc == 0x460178u) {
        ctx->pc = 0x460178u;
            // 0x460178: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x46017Cu;
        goto label_46017c;
    }
    ctx->pc = 0x460174u;
    SET_GPR_U32(ctx, 31, 0x46017Cu);
    ctx->pc = 0x460178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460174u;
            // 0x460178: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46017Cu; }
        if (ctx->pc != 0x46017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46017Cu; }
        if (ctx->pc != 0x46017Cu) { return; }
    }
    ctx->pc = 0x46017Cu;
label_46017c:
    // 0x46017c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_460180:
    // 0x460180: 0x50800048  beql        $a0, $zero, . + 4 + (0x48 << 2)
label_460184:
    if (ctx->pc == 0x460184u) {
        ctx->pc = 0x460184u;
            // 0x460184: 0xae040064  sw          $a0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
        ctx->pc = 0x460188u;
        goto label_460188;
    }
    ctx->pc = 0x460180u;
    {
        const bool branch_taken_0x460180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x460180) {
            ctx->pc = 0x460184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460180u;
            // 0x460184: 0xae040064  sw          $a0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4602A4u;
            goto label_4602a4;
        }
    }
    ctx->pc = 0x460188u;
label_460188:
    // 0x460188: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46018c:
    // 0x46018c: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x46018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
label_460190:
    // 0x460190: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x460190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_460194:
    // 0x460194: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x460194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_460198:
    // 0x460198: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x460198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46019c:
    // 0x46019c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x46019cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4601a0:
    // 0x4601a0: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x4601a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4601a4:
    // 0x4601a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4601a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4601a8:
    // 0x4601a8: 0xc159754  jal         func_565D50
label_4601ac:
    if (ctx->pc == 0x4601ACu) {
        ctx->pc = 0x4601ACu;
            // 0x4601ac: 0x24490004  addiu       $t1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4601B0u;
        goto label_4601b0;
    }
    ctx->pc = 0x4601A8u;
    SET_GPR_U32(ctx, 31, 0x4601B0u);
    ctx->pc = 0x4601ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4601A8u;
            // 0x4601ac: 0x24490004  addiu       $t1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4601B0u; }
        if (ctx->pc != 0x4601B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4601B0u; }
        if (ctx->pc != 0x4601B0u) { return; }
    }
    ctx->pc = 0x4601B0u;
label_4601b0:
    // 0x4601b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4601b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4601b4:
    // 0x4601b4: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4601b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_4601b8:
    // 0x4601b8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4601bc:
    if (ctx->pc == 0x4601BCu) {
        ctx->pc = 0x4601C0u;
        goto label_4601c0;
    }
    ctx->pc = 0x4601B8u;
    {
        const bool branch_taken_0x4601b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4601b8) {
            ctx->pc = 0x4602A4u;
            goto label_4602a4;
        }
    }
    ctx->pc = 0x4601C0u;
label_4601c0:
    // 0x4601c0: 0xc123328  jal         func_48CCA0
label_4601c4:
    if (ctx->pc == 0x4601C4u) {
        ctx->pc = 0x4601C4u;
            // 0x4601c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4601C8u;
        goto label_4601c8;
    }
    ctx->pc = 0x4601C0u;
    SET_GPR_U32(ctx, 31, 0x4601C8u);
    ctx->pc = 0x4601C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4601C0u;
            // 0x4601c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4601C8u; }
        if (ctx->pc != 0x4601C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4601C8u; }
        if (ctx->pc != 0x4601C8u) { return; }
    }
    ctx->pc = 0x4601C8u;
label_4601c8:
    // 0x4601c8: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x4601c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_4601cc:
    // 0x4601cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4601ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4601d0:
    // 0x4601d0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4601d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4601d4:
    // 0x4601d4: 0x320f809  jalr        $t9
label_4601d8:
    if (ctx->pc == 0x4601D8u) {
        ctx->pc = 0x4601D8u;
            // 0x4601d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4601DCu;
        goto label_4601dc;
    }
    ctx->pc = 0x4601D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4601DCu);
        ctx->pc = 0x4601D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4601D4u;
            // 0x4601d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4601DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4601DCu; }
            if (ctx->pc != 0x4601DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4601DCu;
label_4601dc:
    // 0x4601dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4601dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4601e0:
    // 0x4601e0: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
label_4601e4:
    if (ctx->pc == 0x4601E4u) {
        ctx->pc = 0x4601E4u;
            // 0x4601e4: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x4601E8u;
        goto label_4601e8;
    }
    ctx->pc = 0x4601E0u;
    {
        const bool branch_taken_0x4601e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4601e0) {
            ctx->pc = 0x4601E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4601E0u;
            // 0x4601e4: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460254u;
            goto label_460254;
        }
    }
    ctx->pc = 0x4601E8u;
label_4601e8:
    // 0x4601e8: 0x9202005c  lbu         $v0, 0x5C($s0)
    ctx->pc = 0x4601e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_4601ec:
    // 0x4601ec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4601f0:
    if (ctx->pc == 0x4601F0u) {
        ctx->pc = 0x4601F0u;
            // 0x4601f0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4601F4u;
        goto label_4601f4;
    }
    ctx->pc = 0x4601ECu;
    {
        const bool branch_taken_0x4601ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4601ec) {
            ctx->pc = 0x4601F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4601ECu;
            // 0x4601f0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46020Cu;
            goto label_46020c;
        }
    }
    ctx->pc = 0x4601F4u;
label_4601f4:
    // 0x4601f4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4601f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4601f8:
    // 0x4601f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4601f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4601fc:
    // 0x4601fc: 0xc1232d8  jal         func_48CB60
label_460200:
    if (ctx->pc == 0x460200u) {
        ctx->pc = 0x460200u;
            // 0x460200: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x460204u;
        goto label_460204;
    }
    ctx->pc = 0x4601FCu;
    SET_GPR_U32(ctx, 31, 0x460204u);
    ctx->pc = 0x460200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4601FCu;
            // 0x460200: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460204u; }
        if (ctx->pc != 0x460204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460204u; }
        if (ctx->pc != 0x460204u) { return; }
    }
    ctx->pc = 0x460204u;
label_460204:
    // 0x460204: 0x10000005  b           . + 4 + (0x5 << 2)
label_460208:
    if (ctx->pc == 0x460208u) {
        ctx->pc = 0x460208u;
            // 0x460208: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x46020Cu;
        goto label_46020c;
    }
    ctx->pc = 0x460204u;
    {
        const bool branch_taken_0x460204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460204u;
            // 0x460208: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460204) {
            ctx->pc = 0x46021Cu;
            goto label_46021c;
        }
    }
    ctx->pc = 0x46020Cu;
label_46020c:
    // 0x46020c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x46020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_460210:
    // 0x460210: 0xc1232d8  jal         func_48CB60
label_460214:
    if (ctx->pc == 0x460214u) {
        ctx->pc = 0x460214u;
            // 0x460214: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x460218u;
        goto label_460218;
    }
    ctx->pc = 0x460210u;
    SET_GPR_U32(ctx, 31, 0x460218u);
    ctx->pc = 0x460214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460210u;
            // 0x460214: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460218u; }
        if (ctx->pc != 0x460218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460218u; }
        if (ctx->pc != 0x460218u) { return; }
    }
    ctx->pc = 0x460218u;
label_460218:
    // 0x460218: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x460218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_46021c:
    // 0x46021c: 0x36260008  ori         $a2, $s1, 0x8
    ctx->pc = 0x46021cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
label_460220:
    // 0x460220: 0xc1232d8  jal         func_48CB60
label_460224:
    if (ctx->pc == 0x460224u) {
        ctx->pc = 0x460224u;
            // 0x460224: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460228u;
        goto label_460228;
    }
    ctx->pc = 0x460220u;
    SET_GPR_U32(ctx, 31, 0x460228u);
    ctx->pc = 0x460224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460220u;
            // 0x460224: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460228u; }
        if (ctx->pc != 0x460228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460228u; }
        if (ctx->pc != 0x460228u) { return; }
    }
    ctx->pc = 0x460228u;
label_460228:
    // 0x460228: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46022c:
    // 0x46022c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460230:
    // 0x460230: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x460230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_460234:
    // 0x460234: 0xa0430093  sb          $v1, 0x93($v0)
    ctx->pc = 0x460234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 147), (uint8_t)GPR_U32(ctx, 3));
label_460238:
    // 0x460238: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x460238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_46023c:
    // 0x46023c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46023cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_460240:
    // 0x460240: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x460240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_460244:
    // 0x460244: 0x320f809  jalr        $t9
label_460248:
    if (ctx->pc == 0x460248u) {
        ctx->pc = 0x46024Cu;
        goto label_46024c;
    }
    ctx->pc = 0x460244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46024Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46024Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46024Cu; }
            if (ctx->pc != 0x46024Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46024Cu;
label_46024c:
    // 0x46024c: 0x10000015  b           . + 4 + (0x15 << 2)
label_460250:
    if (ctx->pc == 0x460250u) {
        ctx->pc = 0x460250u;
            // 0x460250: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x460254u;
        goto label_460254;
    }
    ctx->pc = 0x46024Cu;
    {
        const bool branch_taken_0x46024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46024Cu;
            // 0x460250: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46024c) {
            ctx->pc = 0x4602A4u;
            goto label_4602a4;
        }
    }
    ctx->pc = 0x460254u;
label_460254:
    // 0x460254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x460254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_460258:
    // 0x460258: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x460258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_46025c:
    // 0x46025c: 0x320f809  jalr        $t9
label_460260:
    if (ctx->pc == 0x460260u) {
        ctx->pc = 0x460264u;
        goto label_460264;
    }
    ctx->pc = 0x46025Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x460264u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x460264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x460264u; }
            if (ctx->pc != 0x460264u) { return; }
        }
        }
    }
    ctx->pc = 0x460264u;
label_460264:
    // 0x460264: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x460264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_460268:
    // 0x460268: 0x1445000e  bne         $v0, $a1, . + 4 + (0xE << 2)
label_46026c:
    if (ctx->pc == 0x46026Cu) {
        ctx->pc = 0x460270u;
        goto label_460270;
    }
    ctx->pc = 0x460268u;
    {
        const bool branch_taken_0x460268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x460268) {
            ctx->pc = 0x4602A4u;
            goto label_4602a4;
        }
    }
    ctx->pc = 0x460270u;
label_460270:
    // 0x460270: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x460270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_460274:
    // 0x460274: 0xc1232d8  jal         func_48CB60
label_460278:
    if (ctx->pc == 0x460278u) {
        ctx->pc = 0x460278u;
            // 0x460278: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x46027Cu;
        goto label_46027c;
    }
    ctx->pc = 0x460274u;
    SET_GPR_U32(ctx, 31, 0x46027Cu);
    ctx->pc = 0x460278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460274u;
            // 0x460278: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46027Cu; }
        if (ctx->pc != 0x46027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46027Cu; }
        if (ctx->pc != 0x46027Cu) { return; }
    }
    ctx->pc = 0x46027Cu;
label_46027c:
    // 0x46027c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x46027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_460280:
    // 0x460280: 0x36260008  ori         $a2, $s1, 0x8
    ctx->pc = 0x460280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
label_460284:
    // 0x460284: 0xc1232d8  jal         func_48CB60
label_460288:
    if (ctx->pc == 0x460288u) {
        ctx->pc = 0x460288u;
            // 0x460288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46028Cu;
        goto label_46028c;
    }
    ctx->pc = 0x460284u;
    SET_GPR_U32(ctx, 31, 0x46028Cu);
    ctx->pc = 0x460288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460284u;
            // 0x460288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46028Cu; }
        if (ctx->pc != 0x46028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46028Cu; }
        if (ctx->pc != 0x46028Cu) { return; }
    }
    ctx->pc = 0x46028Cu;
label_46028c:
    // 0x46028c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x46028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_460290:
    // 0x460290: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x460290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_460294:
    // 0x460294: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x460294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_460298:
    // 0x460298: 0x320f809  jalr        $t9
label_46029c:
    if (ctx->pc == 0x46029Cu) {
        ctx->pc = 0x4602A0u;
        goto label_4602a0;
    }
    ctx->pc = 0x460298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4602A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4602A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4602A0u; }
            if (ctx->pc != 0x4602A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4602A0u;
label_4602a0:
    // 0x4602a0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x4602a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_4602a4:
    // 0x4602a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4602a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4602a8:
    // 0x4602a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4602a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4602ac:
    // 0x4602ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4602acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4602b0:
    // 0x4602b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4602b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4602b4:
    // 0x4602b4: 0x3e00008  jr          $ra
label_4602b8:
    if (ctx->pc == 0x4602B8u) {
        ctx->pc = 0x4602B8u;
            // 0x4602b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4602BCu;
        goto label_4602bc;
    }
    ctx->pc = 0x4602B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4602B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4602B4u;
            // 0x4602b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4602BCu;
label_4602bc:
    // 0x4602bc: 0x0  nop
    ctx->pc = 0x4602bcu;
    // NOP
label_4602c0:
    // 0x4602c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4602c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4602c4:
    // 0x4602c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4602c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4602c8:
    // 0x4602c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4602c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4602cc:
    // 0x4602cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4602ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4602d0:
    // 0x4602d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4602d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4602d4:
    // 0x4602d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4602d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4602d8:
    // 0x4602d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4602d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4602dc:
    // 0x4602dc: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x4602dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4602e0:
    // 0x4602e0: 0x10670117  beq         $v1, $a3, . + 4 + (0x117 << 2)
label_4602e4:
    if (ctx->pc == 0x4602E4u) {
        ctx->pc = 0x4602E4u;
            // 0x4602e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4602E8u;
        goto label_4602e8;
    }
    ctx->pc = 0x4602E0u;
    {
        const bool branch_taken_0x4602e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x4602E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4602E0u;
            // 0x4602e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4602e0) {
            ctx->pc = 0x460740u;
            goto label_460740;
        }
    }
    ctx->pc = 0x4602E8u;
label_4602e8:
    // 0x4602e8: 0x50600101  beql        $v1, $zero, . + 4 + (0x101 << 2)
label_4602ec:
    if (ctx->pc == 0x4602ECu) {
        ctx->pc = 0x4602ECu;
            // 0x4602ec: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x4602F0u;
        goto label_4602f0;
    }
    ctx->pc = 0x4602E8u;
    {
        const bool branch_taken_0x4602e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4602e8) {
            ctx->pc = 0x4602ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4602E8u;
            // 0x4602ec: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4606F0u;
            goto label_4606f0;
        }
    }
    ctx->pc = 0x4602F0u;
label_4602f0:
    // 0x4602f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4602f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4602f4:
    // 0x4602f4: 0x50640084  beql        $v1, $a0, . + 4 + (0x84 << 2)
label_4602f8:
    if (ctx->pc == 0x4602F8u) {
        ctx->pc = 0x4602F8u;
            // 0x4602f8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x4602FCu;
        goto label_4602fc;
    }
    ctx->pc = 0x4602F4u;
    {
        const bool branch_taken_0x4602f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4602f4) {
            ctx->pc = 0x4602F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4602F4u;
            // 0x4602f8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460508u;
            goto label_460508;
        }
    }
    ctx->pc = 0x4602FCu;
label_4602fc:
    // 0x4602fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4602fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_460300:
    // 0x460300: 0x50650003  beql        $v1, $a1, . + 4 + (0x3 << 2)
label_460304:
    if (ctx->pc == 0x460304u) {
        ctx->pc = 0x460304u;
            // 0x460304: 0x92060058  lbu         $a2, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x460308u;
        goto label_460308;
    }
    ctx->pc = 0x460300u;
    {
        const bool branch_taken_0x460300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x460300) {
            ctx->pc = 0x460304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460300u;
            // 0x460304: 0x92060058  lbu         $a2, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460310u;
            goto label_460310;
        }
    }
    ctx->pc = 0x460308u;
label_460308:
    // 0x460308: 0x10000113  b           . + 4 + (0x113 << 2)
label_46030c:
    if (ctx->pc == 0x46030Cu) {
        ctx->pc = 0x46030Cu;
            // 0x46030c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x460310u;
        goto label_460310;
    }
    ctx->pc = 0x460308u;
    {
        const bool branch_taken_0x460308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460308u;
            // 0x46030c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460308) {
            ctx->pc = 0x460758u;
            goto label_460758;
        }
    }
    ctx->pc = 0x460310u;
label_460310:
    // 0x460310: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x460310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_460314:
    // 0x460314: 0x50c3003a  beql        $a2, $v1, . + 4 + (0x3A << 2)
label_460318:
    if (ctx->pc == 0x460318u) {
        ctx->pc = 0x460318u;
            // 0x460318: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x46031Cu;
        goto label_46031c;
    }
    ctx->pc = 0x460314u;
    {
        const bool branch_taken_0x460314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x460314) {
            ctx->pc = 0x460318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460314u;
            // 0x460318: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460400u;
            goto label_460400;
        }
    }
    ctx->pc = 0x46031Cu;
label_46031c:
    // 0x46031c: 0x50c4002b  beql        $a2, $a0, . + 4 + (0x2B << 2)
label_460320:
    if (ctx->pc == 0x460320u) {
        ctx->pc = 0x460320u;
            // 0x460320: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x460324u;
        goto label_460324;
    }
    ctx->pc = 0x46031Cu;
    {
        const bool branch_taken_0x46031c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x46031c) {
            ctx->pc = 0x460320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46031Cu;
            // 0x460320: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4603CCu;
            goto label_4603cc;
        }
    }
    ctx->pc = 0x460324u;
label_460324:
    // 0x460324: 0x50c5001e  beql        $a2, $a1, . + 4 + (0x1E << 2)
label_460328:
    if (ctx->pc == 0x460328u) {
        ctx->pc = 0x460328u;
            // 0x460328: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x46032Cu;
        goto label_46032c;
    }
    ctx->pc = 0x460324u;
    {
        const bool branch_taken_0x460324 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x460324) {
            ctx->pc = 0x460328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460324u;
            // 0x460328: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4603A0u;
            goto label_4603a0;
        }
    }
    ctx->pc = 0x46032Cu;
label_46032c:
    // 0x46032c: 0x50c70010  beql        $a2, $a3, . + 4 + (0x10 << 2)
label_460330:
    if (ctx->pc == 0x460330u) {
        ctx->pc = 0x460330u;
            // 0x460330: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x460334u;
        goto label_460334;
    }
    ctx->pc = 0x46032Cu;
    {
        const bool branch_taken_0x46032c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x46032c) {
            ctx->pc = 0x460330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46032Cu;
            // 0x460330: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460370u;
            goto label_460370;
        }
    }
    ctx->pc = 0x460334u;
label_460334:
    // 0x460334: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_460338:
    if (ctx->pc == 0x460338u) {
        ctx->pc = 0x460338u;
            // 0x460338: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x46033Cu;
        goto label_46033c;
    }
    ctx->pc = 0x460334u;
    {
        const bool branch_taken_0x460334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x460334) {
            ctx->pc = 0x460338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460334u;
            // 0x460338: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460344u;
            goto label_460344;
        }
    }
    ctx->pc = 0x46033Cu;
label_46033c:
    // 0x46033c: 0x10000105  b           . + 4 + (0x105 << 2)
label_460340:
    if (ctx->pc == 0x460340u) {
        ctx->pc = 0x460344u;
        goto label_460344;
    }
    ctx->pc = 0x46033Cu;
    {
        const bool branch_taken_0x46033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46033c) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x460344u;
label_460344:
    // 0x460344: 0xc0ca008  jal         func_328020
label_460348:
    if (ctx->pc == 0x460348u) {
        ctx->pc = 0x46034Cu;
        goto label_46034c;
    }
    ctx->pc = 0x460344u;
    SET_GPR_U32(ctx, 31, 0x46034Cu);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46034Cu; }
        if (ctx->pc != 0x46034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46034Cu; }
        if (ctx->pc != 0x46034Cu) { return; }
    }
    ctx->pc = 0x46034Cu;
label_46034c:
    // 0x46034c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_460350:
    if (ctx->pc == 0x460350u) {
        ctx->pc = 0x460354u;
        goto label_460354;
    }
    ctx->pc = 0x46034Cu;
    {
        const bool branch_taken_0x46034c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46034c) {
            ctx->pc = 0x46036Cu;
            goto label_46036c;
        }
    }
    ctx->pc = 0x460354u;
label_460354:
    // 0x460354: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460358:
    // 0x460358: 0xc0c9ec0  jal         func_327B00
label_46035c:
    if (ctx->pc == 0x46035Cu) {
        ctx->pc = 0x46035Cu;
            // 0x46035c: 0x3405cb43  ori         $a1, $zero, 0xCB43 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52035);
        ctx->pc = 0x460360u;
        goto label_460360;
    }
    ctx->pc = 0x460358u;
    SET_GPR_U32(ctx, 31, 0x460360u);
    ctx->pc = 0x46035Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460358u;
            // 0x46035c: 0x3405cb43  ori         $a1, $zero, 0xCB43 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52035);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460360u; }
        if (ctx->pc != 0x460360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460360u; }
        if (ctx->pc != 0x460360u) { return; }
    }
    ctx->pc = 0x460360u;
label_460360:
    // 0x460360: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x460360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_460364:
    // 0x460364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x460364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_460368:
    // 0x460368: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x460368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
label_46036c:
    // 0x46036c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x46036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460370:
    // 0x460370: 0x92060058  lbu         $a2, 0x58($s0)
    ctx->pc = 0x460370u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_460374:
    // 0x460374: 0xc0ca008  jal         func_328020
label_460378:
    if (ctx->pc == 0x460378u) {
        ctx->pc = 0x460378u;
            // 0x460378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46037Cu;
        goto label_46037c;
    }
    ctx->pc = 0x460374u;
    SET_GPR_U32(ctx, 31, 0x46037Cu);
    ctx->pc = 0x460378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460374u;
            // 0x460378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46037Cu; }
        if (ctx->pc != 0x46037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46037Cu; }
        if (ctx->pc != 0x46037Cu) { return; }
    }
    ctx->pc = 0x46037Cu;
label_46037c:
    // 0x46037c: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
label_460380:
    if (ctx->pc == 0x460380u) {
        ctx->pc = 0x460384u;
        goto label_460384;
    }
    ctx->pc = 0x46037Cu;
    {
        const bool branch_taken_0x46037c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46037c) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x460384u;
label_460384:
    // 0x460384: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460388:
    // 0x460388: 0xc0c9ec0  jal         func_327B00
label_46038c:
    if (ctx->pc == 0x46038Cu) {
        ctx->pc = 0x46038Cu;
            // 0x46038c: 0x3405cb39  ori         $a1, $zero, 0xCB39 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52025);
        ctx->pc = 0x460390u;
        goto label_460390;
    }
    ctx->pc = 0x460388u;
    SET_GPR_U32(ctx, 31, 0x460390u);
    ctx->pc = 0x46038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460388u;
            // 0x46038c: 0x3405cb39  ori         $a1, $zero, 0xCB39 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460390u; }
        if (ctx->pc != 0x460390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460390u; }
        if (ctx->pc != 0x460390u) { return; }
    }
    ctx->pc = 0x460390u;
label_460390:
    // 0x460390: 0x92030058  lbu         $v1, 0x58($s0)
    ctx->pc = 0x460390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_460394:
    // 0x460394: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x460394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_460398:
    // 0x460398: 0x100000ee  b           . + 4 + (0xEE << 2)
label_46039c:
    if (ctx->pc == 0x46039Cu) {
        ctx->pc = 0x46039Cu;
            // 0x46039c: 0xa2030058  sb          $v1, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4603A0u;
        goto label_4603a0;
    }
    ctx->pc = 0x460398u;
    {
        const bool branch_taken_0x460398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460398u;
            // 0x46039c: 0xa2030058  sb          $v1, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460398) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4603A0u;
label_4603a0:
    // 0x4603a0: 0xc0ca008  jal         func_328020
label_4603a4:
    if (ctx->pc == 0x4603A4u) {
        ctx->pc = 0x4603A8u;
        goto label_4603a8;
    }
    ctx->pc = 0x4603A0u;
    SET_GPR_U32(ctx, 31, 0x4603A8u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603A8u; }
        if (ctx->pc != 0x4603A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603A8u; }
        if (ctx->pc != 0x4603A8u) { return; }
    }
    ctx->pc = 0x4603A8u;
label_4603a8:
    // 0x4603a8: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
label_4603ac:
    if (ctx->pc == 0x4603ACu) {
        ctx->pc = 0x4603B0u;
        goto label_4603b0;
    }
    ctx->pc = 0x4603A8u;
    {
        const bool branch_taken_0x4603a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4603a8) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4603B0u;
label_4603b0:
    // 0x4603b0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4603b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4603b4:
    // 0x4603b4: 0xc0c9ec0  jal         func_327B00
label_4603b8:
    if (ctx->pc == 0x4603B8u) {
        ctx->pc = 0x4603B8u;
            // 0x4603b8: 0x3405cb98  ori         $a1, $zero, 0xCB98 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52120);
        ctx->pc = 0x4603BCu;
        goto label_4603bc;
    }
    ctx->pc = 0x4603B4u;
    SET_GPR_U32(ctx, 31, 0x4603BCu);
    ctx->pc = 0x4603B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4603B4u;
            // 0x4603b8: 0x3405cb98  ori         $a1, $zero, 0xCB98 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52120);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603BCu; }
        if (ctx->pc != 0x4603BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603BCu; }
        if (ctx->pc != 0x4603BCu) { return; }
    }
    ctx->pc = 0x4603BCu;
label_4603bc:
    // 0x4603bc: 0x92030058  lbu         $v1, 0x58($s0)
    ctx->pc = 0x4603bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_4603c0:
    // 0x4603c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4603c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4603c4:
    // 0x4603c4: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_4603c8:
    if (ctx->pc == 0x4603C8u) {
        ctx->pc = 0x4603C8u;
            // 0x4603c8: 0xa2030058  sb          $v1, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4603CCu;
        goto label_4603cc;
    }
    ctx->pc = 0x4603C4u;
    {
        const bool branch_taken_0x4603c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4603C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4603C4u;
            // 0x4603c8: 0xa2030058  sb          $v1, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4603c4) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4603CCu;
label_4603cc:
    // 0x4603cc: 0xc0ca008  jal         func_328020
label_4603d0:
    if (ctx->pc == 0x4603D0u) {
        ctx->pc = 0x4603D4u;
        goto label_4603d4;
    }
    ctx->pc = 0x4603CCu;
    SET_GPR_U32(ctx, 31, 0x4603D4u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603D4u; }
        if (ctx->pc != 0x4603D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603D4u; }
        if (ctx->pc != 0x4603D4u) { return; }
    }
    ctx->pc = 0x4603D4u;
label_4603d4:
    // 0x4603d4: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_4603d8:
    if (ctx->pc == 0x4603D8u) {
        ctx->pc = 0x4603DCu;
        goto label_4603dc;
    }
    ctx->pc = 0x4603D4u;
    {
        const bool branch_taken_0x4603d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4603d4) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4603DCu;
label_4603dc:
    // 0x4603dc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4603dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4603e0:
    // 0x4603e0: 0xc0c9ec0  jal         func_327B00
label_4603e4:
    if (ctx->pc == 0x4603E4u) {
        ctx->pc = 0x4603E4u;
            // 0x4603e4: 0x3405cb3e  ori         $a1, $zero, 0xCB3E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52030);
        ctx->pc = 0x4603E8u;
        goto label_4603e8;
    }
    ctx->pc = 0x4603E0u;
    SET_GPR_U32(ctx, 31, 0x4603E8u);
    ctx->pc = 0x4603E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4603E0u;
            // 0x4603e4: 0x3405cb3e  ori         $a1, $zero, 0xCB3E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52030);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603E8u; }
        if (ctx->pc != 0x4603E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603E8u; }
        if (ctx->pc != 0x4603E8u) { return; }
    }
    ctx->pc = 0x4603E8u;
label_4603e8:
    // 0x4603e8: 0xc075268  jal         func_1D49A0
label_4603ec:
    if (ctx->pc == 0x4603ECu) {
        ctx->pc = 0x4603F0u;
        goto label_4603f0;
    }
    ctx->pc = 0x4603E8u;
    SET_GPR_U32(ctx, 31, 0x4603F0u);
    ctx->pc = 0x1D49A0u;
    if (runtime->hasFunction(0x1D49A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D49A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603F0u; }
        if (ctx->pc != 0x4603F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D49A0_0x1d49a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4603F0u; }
        if (ctx->pc != 0x4603F0u) { return; }
    }
    ctx->pc = 0x4603F0u;
label_4603f0:
    // 0x4603f0: 0x92030058  lbu         $v1, 0x58($s0)
    ctx->pc = 0x4603f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_4603f4:
    // 0x4603f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4603f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4603f8:
    // 0x4603f8: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_4603fc:
    if (ctx->pc == 0x4603FCu) {
        ctx->pc = 0x4603FCu;
            // 0x4603fc: 0xa2030058  sb          $v1, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x460400u;
        goto label_460400;
    }
    ctx->pc = 0x4603F8u;
    {
        const bool branch_taken_0x4603f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4603FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4603F8u;
            // 0x4603fc: 0xa2030058  sb          $v1, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4603f8) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x460400u;
label_460400:
    // 0x460400: 0xc0ca008  jal         func_328020
label_460404:
    if (ctx->pc == 0x460404u) {
        ctx->pc = 0x460408u;
        goto label_460408;
    }
    ctx->pc = 0x460400u;
    SET_GPR_U32(ctx, 31, 0x460408u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460408u; }
        if (ctx->pc != 0x460408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460408u; }
        if (ctx->pc != 0x460408u) { return; }
    }
    ctx->pc = 0x460408u;
label_460408:
    // 0x460408: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_46040c:
    if (ctx->pc == 0x46040Cu) {
        ctx->pc = 0x460410u;
        goto label_460410;
    }
    ctx->pc = 0x460408u;
    {
        const bool branch_taken_0x460408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460408) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x460410u;
label_460410:
    // 0x460410: 0xc075214  jal         func_1D4850
label_460414:
    if (ctx->pc == 0x460414u) {
        ctx->pc = 0x460418u;
        goto label_460418;
    }
    ctx->pc = 0x460410u;
    SET_GPR_U32(ctx, 31, 0x460418u);
    ctx->pc = 0x1D4850u;
    if (runtime->hasFunction(0x1D4850u)) {
        auto targetFn = runtime->lookupFunction(0x1D4850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460418u; }
        if (ctx->pc != 0x460418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4850_0x1d4850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460418u; }
        if (ctx->pc != 0x460418u) { return; }
    }
    ctx->pc = 0x460418u;
label_460418:
    // 0x460418: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_46041c:
    // 0x46041c: 0xc0c9a60  jal         func_326980
label_460420:
    if (ctx->pc == 0x460420u) {
        ctx->pc = 0x460420u;
            // 0x460420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x460424u;
        goto label_460424;
    }
    ctx->pc = 0x46041Cu;
    SET_GPR_U32(ctx, 31, 0x460424u);
    ctx->pc = 0x460420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46041Cu;
            // 0x460420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326980u;
    if (runtime->hasFunction(0x326980u)) {
        auto targetFn = runtime->lookupFunction(0x326980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460424u; }
        if (ctx->pc != 0x460424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326980_0x326980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460424u; }
        if (ctx->pc != 0x460424u) { return; }
    }
    ctx->pc = 0x460424u;
label_460424:
    // 0x460424: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460428:
    // 0x460428: 0xc0c9a60  jal         func_326980
label_46042c:
    if (ctx->pc == 0x46042Cu) {
        ctx->pc = 0x46042Cu;
            // 0x46042c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x460430u;
        goto label_460430;
    }
    ctx->pc = 0x460428u;
    SET_GPR_U32(ctx, 31, 0x460430u);
    ctx->pc = 0x46042Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460428u;
            // 0x46042c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326980u;
    if (runtime->hasFunction(0x326980u)) {
        auto targetFn = runtime->lookupFunction(0x326980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460430u; }
        if (ctx->pc != 0x460430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326980_0x326980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460430u; }
        if (ctx->pc != 0x460430u) { return; }
    }
    ctx->pc = 0x460430u;
label_460430:
    // 0x460430: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460434:
    // 0x460434: 0xc0c9a60  jal         func_326980
label_460438:
    if (ctx->pc == 0x460438u) {
        ctx->pc = 0x460438u;
            // 0x460438: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46043Cu;
        goto label_46043c;
    }
    ctx->pc = 0x460434u;
    SET_GPR_U32(ctx, 31, 0x46043Cu);
    ctx->pc = 0x460438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460434u;
            // 0x460438: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326980u;
    if (runtime->hasFunction(0x326980u)) {
        auto targetFn = runtime->lookupFunction(0x326980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46043Cu; }
        if (ctx->pc != 0x46043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326980_0x326980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46043Cu; }
        if (ctx->pc != 0x46043Cu) { return; }
    }
    ctx->pc = 0x46043Cu;
label_46043c:
    // 0x46043c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_460440:
    // 0x460440: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x460440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_460444:
    // 0x460444: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x460444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
label_460448:
    // 0x460448: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_46044c:
    // 0x46044c: 0xc0c9a58  jal         func_326960
label_460450:
    if (ctx->pc == 0x460450u) {
        ctx->pc = 0x460450u;
            // 0x460450: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x460454u;
        goto label_460454;
    }
    ctx->pc = 0x46044Cu;
    SET_GPR_U32(ctx, 31, 0x460454u);
    ctx->pc = 0x460450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46044Cu;
            // 0x460450: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460454u; }
        if (ctx->pc != 0x460454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460454u; }
        if (ctx->pc != 0x460454u) { return; }
    }
    ctx->pc = 0x460454u;
label_460454:
    // 0x460454: 0xc1182a8  jal         func_460AA0
label_460458:
    if (ctx->pc == 0x460458u) {
        ctx->pc = 0x460458u;
            // 0x460458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46045Cu;
        goto label_46045c;
    }
    ctx->pc = 0x460454u;
    SET_GPR_U32(ctx, 31, 0x46045Cu);
    ctx->pc = 0x460458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460454u;
            // 0x460458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460AA0u;
    if (runtime->hasFunction(0x460AA0u)) {
        auto targetFn = runtime->lookupFunction(0x460AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46045Cu; }
        if (ctx->pc != 0x46045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460AA0_0x460aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46045Cu; }
        if (ctx->pc != 0x46045Cu) { return; }
    }
    ctx->pc = 0x46045Cu;
label_46045c:
    // 0x46045c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x46045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460460:
    // 0x460460: 0xc0c9a58  jal         func_326960
label_460464:
    if (ctx->pc == 0x460464u) {
        ctx->pc = 0x460464u;
            // 0x460464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x460468u;
        goto label_460468;
    }
    ctx->pc = 0x460460u;
    SET_GPR_U32(ctx, 31, 0x460468u);
    ctx->pc = 0x460464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460460u;
            // 0x460464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460468u; }
        if (ctx->pc != 0x460468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460468u; }
        if (ctx->pc != 0x460468u) { return; }
    }
    ctx->pc = 0x460468u;
label_460468:
    // 0x460468: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x460468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_46046c:
    // 0x46046c: 0xc074a24  jal         func_1D2890
label_460470:
    if (ctx->pc == 0x460470u) {
        ctx->pc = 0x460470u;
            // 0x460470: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x460474u;
        goto label_460474;
    }
    ctx->pc = 0x46046Cu;
    SET_GPR_U32(ctx, 31, 0x460474u);
    ctx->pc = 0x460470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46046Cu;
            // 0x460470: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2890u;
    if (runtime->hasFunction(0x1D2890u)) {
        auto targetFn = runtime->lookupFunction(0x1D2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460474u; }
        if (ctx->pc != 0x460474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2890_0x1d2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460474u; }
        if (ctx->pc != 0x460474u) { return; }
    }
    ctx->pc = 0x460474u;
label_460474:
    // 0x460474: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_460478:
    // 0x460478: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x460478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46047c:
    // 0x46047c: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x46047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_460480:
    // 0x460480: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x460480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_460484:
    // 0x460484: 0xc05d85a  jal         func_176168
label_460488:
    if (ctx->pc == 0x460488u) {
        ctx->pc = 0x460488u;
            // 0x460488: 0x24a5e510  addiu       $a1, $a1, -0x1AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960400));
        ctx->pc = 0x46048Cu;
        goto label_46048c;
    }
    ctx->pc = 0x460484u;
    SET_GPR_U32(ctx, 31, 0x46048Cu);
    ctx->pc = 0x460488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460484u;
            // 0x460488: 0x24a5e510  addiu       $a1, $a1, -0x1AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46048Cu; }
        if (ctx->pc != 0x46048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46048Cu; }
        if (ctx->pc != 0x46048Cu) { return; }
    }
    ctx->pc = 0x46048Cu;
label_46048c:
    // 0x46048c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_460490:
    // 0x460490: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x460490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_460494:
    // 0x460494: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x460494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_460498:
    // 0x460498: 0x601827  not         $v1, $v1
    ctx->pc = 0x460498u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_46049c:
    // 0x46049c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x46049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_4604a0:
    // 0x4604a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4604a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4604a4:
    // 0x4604a4: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x4604a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_4604a8:
    // 0x4604a8: 0xc0c9d80  jal         func_327600
label_4604ac:
    if (ctx->pc == 0x4604ACu) {
        ctx->pc = 0x4604ACu;
            // 0x4604ac: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x4604B0u;
        goto label_4604b0;
    }
    ctx->pc = 0x4604A8u;
    SET_GPR_U32(ctx, 31, 0x4604B0u);
    ctx->pc = 0x4604ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4604A8u;
            // 0x4604ac: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327600u;
    if (runtime->hasFunction(0x327600u)) {
        auto targetFn = runtime->lookupFunction(0x327600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4604B0u; }
        if (ctx->pc != 0x4604B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327600_0x327600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4604B0u; }
        if (ctx->pc != 0x4604B0u) { return; }
    }
    ctx->pc = 0x4604B0u;
label_4604b0:
    // 0x4604b0: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
label_4604b4:
    if (ctx->pc == 0x4604B4u) {
        ctx->pc = 0x4604B8u;
        goto label_4604b8;
    }
    ctx->pc = 0x4604B0u;
    {
        const bool branch_taken_0x4604b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4604b0) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4604B8u;
label_4604b8:
    // 0x4604b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4604b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4604bc:
    // 0x4604bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4604bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4604c0:
    // 0x4604c0: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x4604c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4604c4:
    // 0x4604c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4604c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4604c8:
    // 0x4604c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4604c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4604cc:
    // 0x4604cc: 0xc0fd020  jal         func_3F4080
label_4604d0:
    if (ctx->pc == 0x4604D0u) {
        ctx->pc = 0x4604D0u;
            // 0x4604d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4604D4u;
        goto label_4604d4;
    }
    ctx->pc = 0x4604CCu;
    SET_GPR_U32(ctx, 31, 0x4604D4u);
    ctx->pc = 0x4604D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4604CCu;
            // 0x4604d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4604D4u; }
        if (ctx->pc != 0x4604D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4604D4u; }
        if (ctx->pc != 0x4604D4u) { return; }
    }
    ctx->pc = 0x4604D4u;
label_4604d4:
    // 0x4604d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4604d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4604d8:
    // 0x4604d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4604d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4604dc:
    // 0x4604dc: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x4604dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4604e0:
    // 0x4604e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4604e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4604e4:
    // 0x4604e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4604e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4604e8:
    // 0x4604e8: 0xc0fd020  jal         func_3F4080
label_4604ec:
    if (ctx->pc == 0x4604ECu) {
        ctx->pc = 0x4604ECu;
            // 0x4604ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4604F0u;
        goto label_4604f0;
    }
    ctx->pc = 0x4604E8u;
    SET_GPR_U32(ctx, 31, 0x4604F0u);
    ctx->pc = 0x4604ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4604E8u;
            // 0x4604ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4604F0u; }
        if (ctx->pc != 0x4604F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4604F0u; }
        if (ctx->pc != 0x4604F0u) { return; }
    }
    ctx->pc = 0x4604F0u;
label_4604f0:
    // 0x4604f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4604f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4604f4:
    // 0x4604f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4604f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4604f8:
    // 0x4604f8: 0x320f809  jalr        $t9
label_4604fc:
    if (ctx->pc == 0x4604FCu) {
        ctx->pc = 0x4604FCu;
            // 0x4604fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460500u;
        goto label_460500;
    }
    ctx->pc = 0x4604F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x460500u);
        ctx->pc = 0x4604FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4604F8u;
            // 0x4604fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x460500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x460500u; }
            if (ctx->pc != 0x460500u) { return; }
        }
        }
    }
    ctx->pc = 0x460500u;
label_460500:
    // 0x460500: 0x10000094  b           . + 4 + (0x94 << 2)
label_460504:
    if (ctx->pc == 0x460504u) {
        ctx->pc = 0x460508u;
        goto label_460508;
    }
    ctx->pc = 0x460500u;
    {
        const bool branch_taken_0x460500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460500) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x460508u;
label_460508:
    // 0x460508: 0xc0c91d4  jal         func_324750
label_46050c:
    if (ctx->pc == 0x46050Cu) {
        ctx->pc = 0x46050Cu;
            // 0x46050c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x460510u;
        goto label_460510;
    }
    ctx->pc = 0x460508u;
    SET_GPR_U32(ctx, 31, 0x460510u);
    ctx->pc = 0x46050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460508u;
            // 0x46050c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (runtime->hasFunction(0x324750u)) {
        auto targetFn = runtime->lookupFunction(0x324750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460510u; }
        if (ctx->pc != 0x460510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324750_0x324750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460510u; }
        if (ctx->pc != 0x460510u) { return; }
    }
    ctx->pc = 0x460510u;
label_460510:
    // 0x460510: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460514:
    // 0x460514: 0xc0c916c  jal         func_3245B0
label_460518:
    if (ctx->pc == 0x460518u) {
        ctx->pc = 0x460518u;
            // 0x460518: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46051Cu;
        goto label_46051c;
    }
    ctx->pc = 0x460514u;
    SET_GPR_U32(ctx, 31, 0x46051Cu);
    ctx->pc = 0x460518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460514u;
            // 0x460518: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46051Cu; }
        if (ctx->pc != 0x46051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46051Cu; }
        if (ctx->pc != 0x46051Cu) { return; }
    }
    ctx->pc = 0x46051Cu;
label_46051c:
    // 0x46051c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x46051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460520:
    // 0x460520: 0xc0c916c  jal         func_3245B0
label_460524:
    if (ctx->pc == 0x460524u) {
        ctx->pc = 0x460524u;
            // 0x460524: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x460528u;
        goto label_460528;
    }
    ctx->pc = 0x460520u;
    SET_GPR_U32(ctx, 31, 0x460528u);
    ctx->pc = 0x460524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460520u;
            // 0x460524: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460528u; }
        if (ctx->pc != 0x460528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460528u; }
        if (ctx->pc != 0x460528u) { return; }
    }
    ctx->pc = 0x460528u;
label_460528:
    // 0x460528: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_46052c:
    // 0x46052c: 0xc0c916c  jal         func_3245B0
label_460530:
    if (ctx->pc == 0x460530u) {
        ctx->pc = 0x460530u;
            // 0x460530: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x460534u;
        goto label_460534;
    }
    ctx->pc = 0x46052Cu;
    SET_GPR_U32(ctx, 31, 0x460534u);
    ctx->pc = 0x460530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46052Cu;
            // 0x460530: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460534u; }
        if (ctx->pc != 0x460534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460534u; }
        if (ctx->pc != 0x460534u) { return; }
    }
    ctx->pc = 0x460534u;
label_460534:
    // 0x460534: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460538:
    // 0x460538: 0xc0c916c  jal         func_3245B0
label_46053c:
    if (ctx->pc == 0x46053Cu) {
        ctx->pc = 0x46053Cu;
            // 0x46053c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460540u;
        goto label_460540;
    }
    ctx->pc = 0x460538u;
    SET_GPR_U32(ctx, 31, 0x460540u);
    ctx->pc = 0x46053Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460538u;
            // 0x46053c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460540u; }
        if (ctx->pc != 0x460540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460540u; }
        if (ctx->pc != 0x460540u) { return; }
    }
    ctx->pc = 0x460540u;
label_460540:
    // 0x460540: 0x9202005b  lbu         $v0, 0x5B($s0)
    ctx->pc = 0x460540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 91)));
label_460544:
    // 0x460544: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_460548:
    if (ctx->pc == 0x460548u) {
        ctx->pc = 0x460548u;
            // 0x460548: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x46054Cu;
        goto label_46054c;
    }
    ctx->pc = 0x460544u;
    {
        const bool branch_taken_0x460544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460544) {
            ctx->pc = 0x460548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460544u;
            // 0x460548: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460558u;
            goto label_460558;
        }
    }
    ctx->pc = 0x46054Cu;
label_46054c:
    // 0x46054c: 0xc118050  jal         func_460140
label_460550:
    if (ctx->pc == 0x460550u) {
        ctx->pc = 0x460550u;
            // 0x460550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460554u;
        goto label_460554;
    }
    ctx->pc = 0x46054Cu;
    SET_GPR_U32(ctx, 31, 0x460554u);
    ctx->pc = 0x460550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46054Cu;
            // 0x460550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460140u;
    goto label_460140;
    ctx->pc = 0x460554u;
label_460554:
    // 0x460554: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460558:
    // 0x460558: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x460558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46055c:
    // 0x46055c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x46055cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460560:
    // 0x460560: 0xc0c9a58  jal         func_326960
label_460564:
    if (ctx->pc == 0x460564u) {
        ctx->pc = 0x460564u;
            // 0x460564: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460568u;
        goto label_460568;
    }
    ctx->pc = 0x460560u;
    SET_GPR_U32(ctx, 31, 0x460568u);
    ctx->pc = 0x460564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460560u;
            // 0x460564: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460568u; }
        if (ctx->pc != 0x460568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460568u; }
        if (ctx->pc != 0x460568u) { return; }
    }
    ctx->pc = 0x460568u;
label_460568:
    // 0x460568: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_46056c:
    // 0x46056c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46056cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_460570:
    // 0x460570: 0xc0c9a54  jal         func_326950
label_460574:
    if (ctx->pc == 0x460574u) {
        ctx->pc = 0x460574u;
            // 0x460574: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460578u;
        goto label_460578;
    }
    ctx->pc = 0x460570u;
    SET_GPR_U32(ctx, 31, 0x460578u);
    ctx->pc = 0x460574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460570u;
            // 0x460574: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326950u;
    if (runtime->hasFunction(0x326950u)) {
        auto targetFn = runtime->lookupFunction(0x326950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460578u; }
        if (ctx->pc != 0x460578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326950_0x326950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460578u; }
        if (ctx->pc != 0x460578u) { return; }
    }
    ctx->pc = 0x460578u;
label_460578:
    // 0x460578: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_46057c:
    // 0x46057c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x46057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_460580:
    // 0x460580: 0xc0c9a54  jal         func_326950
label_460584:
    if (ctx->pc == 0x460584u) {
        ctx->pc = 0x460584u;
            // 0x460584: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x460588u;
        goto label_460588;
    }
    ctx->pc = 0x460580u;
    SET_GPR_U32(ctx, 31, 0x460588u);
    ctx->pc = 0x460584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460580u;
            // 0x460584: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326950u;
    if (runtime->hasFunction(0x326950u)) {
        auto targetFn = runtime->lookupFunction(0x326950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460588u; }
        if (ctx->pc != 0x460588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326950_0x326950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460588u; }
        if (ctx->pc != 0x460588u) { return; }
    }
    ctx->pc = 0x460588u;
label_460588:
    // 0x460588: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_46058c:
    // 0x46058c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x46058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_460590:
    // 0x460590: 0xc0c9a54  jal         func_326950
label_460594:
    if (ctx->pc == 0x460594u) {
        ctx->pc = 0x460594u;
            // 0x460594: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x460598u;
        goto label_460598;
    }
    ctx->pc = 0x460590u;
    SET_GPR_U32(ctx, 31, 0x460598u);
    ctx->pc = 0x460594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460590u;
            // 0x460594: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326950u;
    if (runtime->hasFunction(0x326950u)) {
        auto targetFn = runtime->lookupFunction(0x326950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460598u; }
        if (ctx->pc != 0x460598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326950_0x326950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460598u; }
        if (ctx->pc != 0x460598u) { return; }
    }
    ctx->pc = 0x460598u;
label_460598:
    // 0x460598: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x460598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46059c:
    // 0x46059c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4605a0:
    // 0x4605a0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4605a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4605a4:
    // 0x4605a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4605a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4605a8:
    // 0x4605a8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4605a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4605ac:
    // 0x4605ac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4605acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4605b0:
    // 0x4605b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4605b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4605b4:
    // 0x4605b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4605b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4605b8:
    // 0x4605b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4605b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4605bc:
    // 0x4605bc: 0x94420046  lhu         $v0, 0x46($v0)
    ctx->pc = 0x4605bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_4605c0:
    // 0x4605c0: 0x54440014  bnel        $v0, $a0, . + 4 + (0x14 << 2)
label_4605c4:
    if (ctx->pc == 0x4605C4u) {
        ctx->pc = 0x4605C4u;
            // 0x4605c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4605C8u;
        goto label_4605c8;
    }
    ctx->pc = 0x4605C0u;
    {
        const bool branch_taken_0x4605c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4605c0) {
            ctx->pc = 0x4605C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4605C0u;
            // 0x4605c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460614u;
            goto label_460614;
        }
    }
    ctx->pc = 0x4605C8u;
label_4605c8:
    // 0x4605c8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x4605c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4605cc:
    // 0x4605cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4605ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4605d0:
    // 0x4605d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4605d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4605d4:
    // 0x4605d4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4605d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4605d8:
    // 0x4605d8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4605d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4605dc:
    // 0x4605dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4605dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4605e0:
    // 0x4605e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4605e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4605e4:
    // 0x4605e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4605e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4605e8:
    // 0x4605e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4605e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4605ec:
    // 0x4605ec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4605ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4605f0:
    // 0x4605f0: 0x320f809  jalr        $t9
label_4605f4:
    if (ctx->pc == 0x4605F4u) {
        ctx->pc = 0x4605F4u;
            // 0x4605f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4605F8u;
        goto label_4605f8;
    }
    ctx->pc = 0x4605F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4605F8u);
        ctx->pc = 0x4605F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4605F0u;
            // 0x4605f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4605F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4605F8u; }
            if (ctx->pc != 0x4605F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4605F8u;
label_4605f8:
    // 0x4605f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4605f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4605fc:
    // 0x4605fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4605fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_460600:
    // 0x460600: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x460600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_460604:
    // 0x460604: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_460608:
    if (ctx->pc == 0x460608u) {
        ctx->pc = 0x460608u;
            // 0x460608: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x46060Cu;
        goto label_46060c;
    }
    ctx->pc = 0x460604u;
    {
        const bool branch_taken_0x460604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x460608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460604u;
            // 0x460608: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460604) {
            ctx->pc = 0x4605CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4605cc;
        }
    }
    ctx->pc = 0x46060Cu;
label_46060c:
    // 0x46060c: 0x10000024  b           . + 4 + (0x24 << 2)
label_460610:
    if (ctx->pc == 0x460610u) {
        ctx->pc = 0x460610u;
            // 0x460610: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x460614u;
        goto label_460614;
    }
    ctx->pc = 0x46060Cu;
    {
        const bool branch_taken_0x46060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46060Cu;
            // 0x460610: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46060c) {
            ctx->pc = 0x4606A0u;
            goto label_4606a0;
        }
    }
    ctx->pc = 0x460614u;
label_460614:
    // 0x460614: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x460614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_460618:
    // 0x460618: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x460618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46061c:
    // 0x46061c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_460620:
    // 0x460620: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x460620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_460624:
    // 0x460624: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x460624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_460628:
    // 0x460628: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x460628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46062c:
    // 0x46062c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_460630:
    // 0x460630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x460630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_460634:
    // 0x460634: 0x94420046  lhu         $v0, 0x46($v0)
    ctx->pc = 0x460634u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_460638:
    // 0x460638: 0x54440015  bnel        $v0, $a0, . + 4 + (0x15 << 2)
label_46063c:
    if (ctx->pc == 0x46063Cu) {
        ctx->pc = 0x46063Cu;
            // 0x46063c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x460640u;
        goto label_460640;
    }
    ctx->pc = 0x460638u;
    {
        const bool branch_taken_0x460638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x460638) {
            ctx->pc = 0x46063Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460638u;
            // 0x46063c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460690u;
            goto label_460690;
        }
    }
    ctx->pc = 0x460640u;
label_460640:
    // 0x460640: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x460640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460644:
    // 0x460644: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x460644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_460648:
    // 0x460648: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x460648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46064c:
    // 0x46064c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_460650:
    // 0x460650: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x460650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_460654:
    // 0x460654: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x460654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_460658:
    // 0x460658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x460658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46065c:
    // 0x46065c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_460660:
    // 0x460660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x460660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_460664:
    // 0x460664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x460664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_460668:
    // 0x460668: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x460668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_46066c:
    // 0x46066c: 0x320f809  jalr        $t9
label_460670:
    if (ctx->pc == 0x460670u) {
        ctx->pc = 0x460670u;
            // 0x460670: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460674u;
        goto label_460674;
    }
    ctx->pc = 0x46066Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x460674u);
        ctx->pc = 0x460670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46066Cu;
            // 0x460670: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x460674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x460674u; }
            if (ctx->pc != 0x460674u) { return; }
        }
        }
    }
    ctx->pc = 0x460674u;
label_460674:
    // 0x460674: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x460674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_460678:
    // 0x460678: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x460678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46067c:
    // 0x46067c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x46067cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_460680:
    // 0x460680: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_460684:
    if (ctx->pc == 0x460684u) {
        ctx->pc = 0x460684u;
            // 0x460684: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x460688u;
        goto label_460688;
    }
    ctx->pc = 0x460680u;
    {
        const bool branch_taken_0x460680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x460684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460680u;
            // 0x460684: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460680) {
            ctx->pc = 0x460648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460648;
        }
    }
    ctx->pc = 0x460688u;
label_460688:
    // 0x460688: 0x10000005  b           . + 4 + (0x5 << 2)
label_46068c:
    if (ctx->pc == 0x46068Cu) {
        ctx->pc = 0x46068Cu;
            // 0x46068c: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x460690u;
        goto label_460690;
    }
    ctx->pc = 0x460688u;
    {
        const bool branch_taken_0x460688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460688u;
            // 0x46068c: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x460688) {
            ctx->pc = 0x4606A0u;
            goto label_4606a0;
        }
    }
    ctx->pc = 0x460690u;
label_460690:
    // 0x460690: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x460690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_460694:
    // 0x460694: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_460698:
    if (ctx->pc == 0x460698u) {
        ctx->pc = 0x460698u;
            // 0x460698: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x46069Cu;
        goto label_46069c;
    }
    ctx->pc = 0x460694u;
    {
        const bool branch_taken_0x460694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x460698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460694u;
            // 0x460698: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460694) {
            ctx->pc = 0x460614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460614;
        }
    }
    ctx->pc = 0x46069Cu;
label_46069c:
    // 0x46069c: 0x0  nop
    ctx->pc = 0x46069cu;
    // NOP
label_4606a0:
    // 0x4606a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4606a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4606a4:
    // 0x4606a4: 0xc0fcfe0  jal         func_3F3F80
label_4606a8:
    if (ctx->pc == 0x4606A8u) {
        ctx->pc = 0x4606A8u;
            // 0x4606a8: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x4606ACu;
        goto label_4606ac;
    }
    ctx->pc = 0x4606A4u;
    SET_GPR_U32(ctx, 31, 0x4606ACu);
    ctx->pc = 0x4606A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4606A4u;
            // 0x4606a8: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4606ACu; }
        if (ctx->pc != 0x4606ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4606ACu; }
        if (ctx->pc != 0x4606ACu) { return; }
    }
    ctx->pc = 0x4606ACu;
label_4606ac:
    // 0x4606ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_4606b0:
    if (ctx->pc == 0x4606B0u) {
        ctx->pc = 0x4606B4u;
        goto label_4606b4;
    }
    ctx->pc = 0x4606ACu;
    {
        const bool branch_taken_0x4606ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4606ac) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4606B4u;
label_4606b4:
    // 0x4606b4: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
label_4606b8:
    if (ctx->pc == 0x4606B8u) {
        ctx->pc = 0x4606BCu;
        goto label_4606bc;
    }
    ctx->pc = 0x4606B4u;
    {
        const bool branch_taken_0x4606b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4606b4) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4606BCu;
label_4606bc:
    // 0x4606bc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4606bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4606c0:
    // 0x4606c0: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x4606c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_4606c4:
    // 0x4606c4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x4606c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_4606c8:
    // 0x4606c8: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x4606c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_4606cc:
    // 0x4606cc: 0xc1181dc  jal         func_460770
label_4606d0:
    if (ctx->pc == 0x4606D0u) {
        ctx->pc = 0x4606D0u;
            // 0x4606d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4606D4u;
        goto label_4606d4;
    }
    ctx->pc = 0x4606CCu;
    SET_GPR_U32(ctx, 31, 0x4606D4u);
    ctx->pc = 0x4606D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4606CCu;
            // 0x4606d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460770u;
    if (runtime->hasFunction(0x460770u)) {
        auto targetFn = runtime->lookupFunction(0x460770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4606D4u; }
        if (ctx->pc != 0x4606D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460770_0x460770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4606D4u; }
        if (ctx->pc != 0x4606D4u) { return; }
    }
    ctx->pc = 0x4606D4u;
label_4606d4:
    // 0x4606d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4606d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4606d8:
    // 0x4606d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4606d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4606dc:
    // 0x4606dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4606dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4606e0:
    // 0x4606e0: 0x320f809  jalr        $t9
label_4606e4:
    if (ctx->pc == 0x4606E4u) {
        ctx->pc = 0x4606E4u;
            // 0x4606e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4606E8u;
        goto label_4606e8;
    }
    ctx->pc = 0x4606E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4606E8u);
        ctx->pc = 0x4606E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4606E0u;
            // 0x4606e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4606E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4606E8u; }
            if (ctx->pc != 0x4606E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4606E8u;
label_4606e8:
    // 0x4606e8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4606ec:
    if (ctx->pc == 0x4606ECu) {
        ctx->pc = 0x4606F0u;
        goto label_4606f0;
    }
    ctx->pc = 0x4606E8u;
    {
        const bool branch_taken_0x4606e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4606e8) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x4606F0u;
label_4606f0:
    // 0x4606f0: 0xc0c91d4  jal         func_324750
label_4606f4:
    if (ctx->pc == 0x4606F4u) {
        ctx->pc = 0x4606F4u;
            // 0x4606f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4606F8u;
        goto label_4606f8;
    }
    ctx->pc = 0x4606F0u;
    SET_GPR_U32(ctx, 31, 0x4606F8u);
    ctx->pc = 0x4606F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4606F0u;
            // 0x4606f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (runtime->hasFunction(0x324750u)) {
        auto targetFn = runtime->lookupFunction(0x324750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4606F8u; }
        if (ctx->pc != 0x4606F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324750_0x324750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4606F8u; }
        if (ctx->pc != 0x4606F8u) { return; }
    }
    ctx->pc = 0x4606F8u;
label_4606f8:
    // 0x4606f8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4606f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4606fc:
    // 0x4606fc: 0xc0c916c  jal         func_3245B0
label_460700:
    if (ctx->pc == 0x460700u) {
        ctx->pc = 0x460700u;
            // 0x460700: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x460704u;
        goto label_460704;
    }
    ctx->pc = 0x4606FCu;
    SET_GPR_U32(ctx, 31, 0x460704u);
    ctx->pc = 0x460700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4606FCu;
            // 0x460700: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460704u; }
        if (ctx->pc != 0x460704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460704u; }
        if (ctx->pc != 0x460704u) { return; }
    }
    ctx->pc = 0x460704u;
label_460704:
    // 0x460704: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460708:
    // 0x460708: 0xc0c916c  jal         func_3245B0
label_46070c:
    if (ctx->pc == 0x46070Cu) {
        ctx->pc = 0x46070Cu;
            // 0x46070c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x460710u;
        goto label_460710;
    }
    ctx->pc = 0x460708u;
    SET_GPR_U32(ctx, 31, 0x460710u);
    ctx->pc = 0x46070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460708u;
            // 0x46070c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460710u; }
        if (ctx->pc != 0x460710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460710u; }
        if (ctx->pc != 0x460710u) { return; }
    }
    ctx->pc = 0x460710u;
label_460710:
    // 0x460710: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x460710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460714:
    // 0x460714: 0xc0c916c  jal         func_3245B0
label_460718:
    if (ctx->pc == 0x460718u) {
        ctx->pc = 0x460718u;
            // 0x460718: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x46071Cu;
        goto label_46071c;
    }
    ctx->pc = 0x460714u;
    SET_GPR_U32(ctx, 31, 0x46071Cu);
    ctx->pc = 0x460718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460714u;
            // 0x460718: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46071Cu; }
        if (ctx->pc != 0x46071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46071Cu; }
        if (ctx->pc != 0x46071Cu) { return; }
    }
    ctx->pc = 0x46071Cu;
label_46071c:
    // 0x46071c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x46071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_460720:
    // 0x460720: 0xc0c916c  jal         func_3245B0
label_460724:
    if (ctx->pc == 0x460724u) {
        ctx->pc = 0x460724u;
            // 0x460724: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460728u;
        goto label_460728;
    }
    ctx->pc = 0x460720u;
    SET_GPR_U32(ctx, 31, 0x460728u);
    ctx->pc = 0x460724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460720u;
            // 0x460724: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245B0u;
    if (runtime->hasFunction(0x3245B0u)) {
        auto targetFn = runtime->lookupFunction(0x3245B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460728u; }
        if (ctx->pc != 0x460728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245B0_0x3245b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460728u; }
        if (ctx->pc != 0x460728u) { return; }
    }
    ctx->pc = 0x460728u;
label_460728:
    // 0x460728: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x460728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46072c:
    // 0x46072c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46072cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_460730:
    // 0x460730: 0x320f809  jalr        $t9
label_460734:
    if (ctx->pc == 0x460734u) {
        ctx->pc = 0x460734u;
            // 0x460734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460738u;
        goto label_460738;
    }
    ctx->pc = 0x460730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x460738u);
        ctx->pc = 0x460734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460730u;
            // 0x460734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x460738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x460738u; }
            if (ctx->pc != 0x460738u) { return; }
        }
        }
    }
    ctx->pc = 0x460738u;
label_460738:
    // 0x460738: 0x10000006  b           . + 4 + (0x6 << 2)
label_46073c:
    if (ctx->pc == 0x46073Cu) {
        ctx->pc = 0x460740u;
        goto label_460740;
    }
    ctx->pc = 0x460738u;
    {
        const bool branch_taken_0x460738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460738) {
            ctx->pc = 0x460754u;
            goto label_460754;
        }
    }
    ctx->pc = 0x460740u;
label_460740:
    // 0x460740: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x460740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_460744:
    // 0x460744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x460744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_460748:
    // 0x460748: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x460748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_46074c:
    // 0x46074c: 0xc057b7c  jal         func_15EDF0
label_460750:
    if (ctx->pc == 0x460750u) {
        ctx->pc = 0x460750u;
            // 0x460750: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x460754u;
        goto label_460754;
    }
    ctx->pc = 0x46074Cu;
    SET_GPR_U32(ctx, 31, 0x460754u);
    ctx->pc = 0x460750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46074Cu;
            // 0x460750: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460754u; }
        if (ctx->pc != 0x460754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460754u; }
        if (ctx->pc != 0x460754u) { return; }
    }
    ctx->pc = 0x460754u;
label_460754:
    // 0x460754: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x460754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_460758:
    // 0x460758: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x460758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46075c:
    // 0x46075c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46075cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_460760:
    // 0x460760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x460760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_460764:
    // 0x460764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x460764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_460768:
    // 0x460768: 0x3e00008  jr          $ra
label_46076c:
    if (ctx->pc == 0x46076Cu) {
        ctx->pc = 0x46076Cu;
            // 0x46076c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x460770u;
        goto label_fallthrough_0x460768;
    }
    ctx->pc = 0x460768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460768u;
            // 0x46076c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x460768:
    ctx->pc = 0x460770u;
}
