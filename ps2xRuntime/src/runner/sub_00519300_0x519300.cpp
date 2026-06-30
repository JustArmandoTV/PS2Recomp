#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00519300
// Address: 0x519300 - 0x519770
void sub_00519300_0x519300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00519300_0x519300");
#endif

    switch (ctx->pc) {
        case 0x519300u: goto label_519300;
        case 0x519304u: goto label_519304;
        case 0x519308u: goto label_519308;
        case 0x51930cu: goto label_51930c;
        case 0x519310u: goto label_519310;
        case 0x519314u: goto label_519314;
        case 0x519318u: goto label_519318;
        case 0x51931cu: goto label_51931c;
        case 0x519320u: goto label_519320;
        case 0x519324u: goto label_519324;
        case 0x519328u: goto label_519328;
        case 0x51932cu: goto label_51932c;
        case 0x519330u: goto label_519330;
        case 0x519334u: goto label_519334;
        case 0x519338u: goto label_519338;
        case 0x51933cu: goto label_51933c;
        case 0x519340u: goto label_519340;
        case 0x519344u: goto label_519344;
        case 0x519348u: goto label_519348;
        case 0x51934cu: goto label_51934c;
        case 0x519350u: goto label_519350;
        case 0x519354u: goto label_519354;
        case 0x519358u: goto label_519358;
        case 0x51935cu: goto label_51935c;
        case 0x519360u: goto label_519360;
        case 0x519364u: goto label_519364;
        case 0x519368u: goto label_519368;
        case 0x51936cu: goto label_51936c;
        case 0x519370u: goto label_519370;
        case 0x519374u: goto label_519374;
        case 0x519378u: goto label_519378;
        case 0x51937cu: goto label_51937c;
        case 0x519380u: goto label_519380;
        case 0x519384u: goto label_519384;
        case 0x519388u: goto label_519388;
        case 0x51938cu: goto label_51938c;
        case 0x519390u: goto label_519390;
        case 0x519394u: goto label_519394;
        case 0x519398u: goto label_519398;
        case 0x51939cu: goto label_51939c;
        case 0x5193a0u: goto label_5193a0;
        case 0x5193a4u: goto label_5193a4;
        case 0x5193a8u: goto label_5193a8;
        case 0x5193acu: goto label_5193ac;
        case 0x5193b0u: goto label_5193b0;
        case 0x5193b4u: goto label_5193b4;
        case 0x5193b8u: goto label_5193b8;
        case 0x5193bcu: goto label_5193bc;
        case 0x5193c0u: goto label_5193c0;
        case 0x5193c4u: goto label_5193c4;
        case 0x5193c8u: goto label_5193c8;
        case 0x5193ccu: goto label_5193cc;
        case 0x5193d0u: goto label_5193d0;
        case 0x5193d4u: goto label_5193d4;
        case 0x5193d8u: goto label_5193d8;
        case 0x5193dcu: goto label_5193dc;
        case 0x5193e0u: goto label_5193e0;
        case 0x5193e4u: goto label_5193e4;
        case 0x5193e8u: goto label_5193e8;
        case 0x5193ecu: goto label_5193ec;
        case 0x5193f0u: goto label_5193f0;
        case 0x5193f4u: goto label_5193f4;
        case 0x5193f8u: goto label_5193f8;
        case 0x5193fcu: goto label_5193fc;
        case 0x519400u: goto label_519400;
        case 0x519404u: goto label_519404;
        case 0x519408u: goto label_519408;
        case 0x51940cu: goto label_51940c;
        case 0x519410u: goto label_519410;
        case 0x519414u: goto label_519414;
        case 0x519418u: goto label_519418;
        case 0x51941cu: goto label_51941c;
        case 0x519420u: goto label_519420;
        case 0x519424u: goto label_519424;
        case 0x519428u: goto label_519428;
        case 0x51942cu: goto label_51942c;
        case 0x519430u: goto label_519430;
        case 0x519434u: goto label_519434;
        case 0x519438u: goto label_519438;
        case 0x51943cu: goto label_51943c;
        case 0x519440u: goto label_519440;
        case 0x519444u: goto label_519444;
        case 0x519448u: goto label_519448;
        case 0x51944cu: goto label_51944c;
        case 0x519450u: goto label_519450;
        case 0x519454u: goto label_519454;
        case 0x519458u: goto label_519458;
        case 0x51945cu: goto label_51945c;
        case 0x519460u: goto label_519460;
        case 0x519464u: goto label_519464;
        case 0x519468u: goto label_519468;
        case 0x51946cu: goto label_51946c;
        case 0x519470u: goto label_519470;
        case 0x519474u: goto label_519474;
        case 0x519478u: goto label_519478;
        case 0x51947cu: goto label_51947c;
        case 0x519480u: goto label_519480;
        case 0x519484u: goto label_519484;
        case 0x519488u: goto label_519488;
        case 0x51948cu: goto label_51948c;
        case 0x519490u: goto label_519490;
        case 0x519494u: goto label_519494;
        case 0x519498u: goto label_519498;
        case 0x51949cu: goto label_51949c;
        case 0x5194a0u: goto label_5194a0;
        case 0x5194a4u: goto label_5194a4;
        case 0x5194a8u: goto label_5194a8;
        case 0x5194acu: goto label_5194ac;
        case 0x5194b0u: goto label_5194b0;
        case 0x5194b4u: goto label_5194b4;
        case 0x5194b8u: goto label_5194b8;
        case 0x5194bcu: goto label_5194bc;
        case 0x5194c0u: goto label_5194c0;
        case 0x5194c4u: goto label_5194c4;
        case 0x5194c8u: goto label_5194c8;
        case 0x5194ccu: goto label_5194cc;
        case 0x5194d0u: goto label_5194d0;
        case 0x5194d4u: goto label_5194d4;
        case 0x5194d8u: goto label_5194d8;
        case 0x5194dcu: goto label_5194dc;
        case 0x5194e0u: goto label_5194e0;
        case 0x5194e4u: goto label_5194e4;
        case 0x5194e8u: goto label_5194e8;
        case 0x5194ecu: goto label_5194ec;
        case 0x5194f0u: goto label_5194f0;
        case 0x5194f4u: goto label_5194f4;
        case 0x5194f8u: goto label_5194f8;
        case 0x5194fcu: goto label_5194fc;
        case 0x519500u: goto label_519500;
        case 0x519504u: goto label_519504;
        case 0x519508u: goto label_519508;
        case 0x51950cu: goto label_51950c;
        case 0x519510u: goto label_519510;
        case 0x519514u: goto label_519514;
        case 0x519518u: goto label_519518;
        case 0x51951cu: goto label_51951c;
        case 0x519520u: goto label_519520;
        case 0x519524u: goto label_519524;
        case 0x519528u: goto label_519528;
        case 0x51952cu: goto label_51952c;
        case 0x519530u: goto label_519530;
        case 0x519534u: goto label_519534;
        case 0x519538u: goto label_519538;
        case 0x51953cu: goto label_51953c;
        case 0x519540u: goto label_519540;
        case 0x519544u: goto label_519544;
        case 0x519548u: goto label_519548;
        case 0x51954cu: goto label_51954c;
        case 0x519550u: goto label_519550;
        case 0x519554u: goto label_519554;
        case 0x519558u: goto label_519558;
        case 0x51955cu: goto label_51955c;
        case 0x519560u: goto label_519560;
        case 0x519564u: goto label_519564;
        case 0x519568u: goto label_519568;
        case 0x51956cu: goto label_51956c;
        case 0x519570u: goto label_519570;
        case 0x519574u: goto label_519574;
        case 0x519578u: goto label_519578;
        case 0x51957cu: goto label_51957c;
        case 0x519580u: goto label_519580;
        case 0x519584u: goto label_519584;
        case 0x519588u: goto label_519588;
        case 0x51958cu: goto label_51958c;
        case 0x519590u: goto label_519590;
        case 0x519594u: goto label_519594;
        case 0x519598u: goto label_519598;
        case 0x51959cu: goto label_51959c;
        case 0x5195a0u: goto label_5195a0;
        case 0x5195a4u: goto label_5195a4;
        case 0x5195a8u: goto label_5195a8;
        case 0x5195acu: goto label_5195ac;
        case 0x5195b0u: goto label_5195b0;
        case 0x5195b4u: goto label_5195b4;
        case 0x5195b8u: goto label_5195b8;
        case 0x5195bcu: goto label_5195bc;
        case 0x5195c0u: goto label_5195c0;
        case 0x5195c4u: goto label_5195c4;
        case 0x5195c8u: goto label_5195c8;
        case 0x5195ccu: goto label_5195cc;
        case 0x5195d0u: goto label_5195d0;
        case 0x5195d4u: goto label_5195d4;
        case 0x5195d8u: goto label_5195d8;
        case 0x5195dcu: goto label_5195dc;
        case 0x5195e0u: goto label_5195e0;
        case 0x5195e4u: goto label_5195e4;
        case 0x5195e8u: goto label_5195e8;
        case 0x5195ecu: goto label_5195ec;
        case 0x5195f0u: goto label_5195f0;
        case 0x5195f4u: goto label_5195f4;
        case 0x5195f8u: goto label_5195f8;
        case 0x5195fcu: goto label_5195fc;
        case 0x519600u: goto label_519600;
        case 0x519604u: goto label_519604;
        case 0x519608u: goto label_519608;
        case 0x51960cu: goto label_51960c;
        case 0x519610u: goto label_519610;
        case 0x519614u: goto label_519614;
        case 0x519618u: goto label_519618;
        case 0x51961cu: goto label_51961c;
        case 0x519620u: goto label_519620;
        case 0x519624u: goto label_519624;
        case 0x519628u: goto label_519628;
        case 0x51962cu: goto label_51962c;
        case 0x519630u: goto label_519630;
        case 0x519634u: goto label_519634;
        case 0x519638u: goto label_519638;
        case 0x51963cu: goto label_51963c;
        case 0x519640u: goto label_519640;
        case 0x519644u: goto label_519644;
        case 0x519648u: goto label_519648;
        case 0x51964cu: goto label_51964c;
        case 0x519650u: goto label_519650;
        case 0x519654u: goto label_519654;
        case 0x519658u: goto label_519658;
        case 0x51965cu: goto label_51965c;
        case 0x519660u: goto label_519660;
        case 0x519664u: goto label_519664;
        case 0x519668u: goto label_519668;
        case 0x51966cu: goto label_51966c;
        case 0x519670u: goto label_519670;
        case 0x519674u: goto label_519674;
        case 0x519678u: goto label_519678;
        case 0x51967cu: goto label_51967c;
        case 0x519680u: goto label_519680;
        case 0x519684u: goto label_519684;
        case 0x519688u: goto label_519688;
        case 0x51968cu: goto label_51968c;
        case 0x519690u: goto label_519690;
        case 0x519694u: goto label_519694;
        case 0x519698u: goto label_519698;
        case 0x51969cu: goto label_51969c;
        case 0x5196a0u: goto label_5196a0;
        case 0x5196a4u: goto label_5196a4;
        case 0x5196a8u: goto label_5196a8;
        case 0x5196acu: goto label_5196ac;
        case 0x5196b0u: goto label_5196b0;
        case 0x5196b4u: goto label_5196b4;
        case 0x5196b8u: goto label_5196b8;
        case 0x5196bcu: goto label_5196bc;
        case 0x5196c0u: goto label_5196c0;
        case 0x5196c4u: goto label_5196c4;
        case 0x5196c8u: goto label_5196c8;
        case 0x5196ccu: goto label_5196cc;
        case 0x5196d0u: goto label_5196d0;
        case 0x5196d4u: goto label_5196d4;
        case 0x5196d8u: goto label_5196d8;
        case 0x5196dcu: goto label_5196dc;
        case 0x5196e0u: goto label_5196e0;
        case 0x5196e4u: goto label_5196e4;
        case 0x5196e8u: goto label_5196e8;
        case 0x5196ecu: goto label_5196ec;
        case 0x5196f0u: goto label_5196f0;
        case 0x5196f4u: goto label_5196f4;
        case 0x5196f8u: goto label_5196f8;
        case 0x5196fcu: goto label_5196fc;
        case 0x519700u: goto label_519700;
        case 0x519704u: goto label_519704;
        case 0x519708u: goto label_519708;
        case 0x51970cu: goto label_51970c;
        case 0x519710u: goto label_519710;
        case 0x519714u: goto label_519714;
        case 0x519718u: goto label_519718;
        case 0x51971cu: goto label_51971c;
        case 0x519720u: goto label_519720;
        case 0x519724u: goto label_519724;
        case 0x519728u: goto label_519728;
        case 0x51972cu: goto label_51972c;
        case 0x519730u: goto label_519730;
        case 0x519734u: goto label_519734;
        case 0x519738u: goto label_519738;
        case 0x51973cu: goto label_51973c;
        case 0x519740u: goto label_519740;
        case 0x519744u: goto label_519744;
        case 0x519748u: goto label_519748;
        case 0x51974cu: goto label_51974c;
        case 0x519750u: goto label_519750;
        case 0x519754u: goto label_519754;
        case 0x519758u: goto label_519758;
        case 0x51975cu: goto label_51975c;
        case 0x519760u: goto label_519760;
        case 0x519764u: goto label_519764;
        case 0x519768u: goto label_519768;
        case 0x51976cu: goto label_51976c;
        default: break;
    }

    ctx->pc = 0x519300u;

label_519300:
    // 0x519300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x519300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_519304:
    // 0x519304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x519304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_519308:
    // 0x519308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x519308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51930c:
    // 0x51930c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_519310:
    // 0x519310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x519310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_519314:
    // 0x519314: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_519318:
    if (ctx->pc == 0x519318u) {
        ctx->pc = 0x519318u;
            // 0x519318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51931Cu;
        goto label_51931c;
    }
    ctx->pc = 0x519314u;
    {
        const bool branch_taken_0x519314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x519318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519314u;
            // 0x519318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519314) {
            ctx->pc = 0x519448u;
            goto label_519448;
        }
    }
    ctx->pc = 0x51931Cu;
label_51931c:
    // 0x51931c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51931cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_519320:
    // 0x519320: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x519320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_519324:
    // 0x519324: 0x246357a0  addiu       $v1, $v1, 0x57A0
    ctx->pc = 0x519324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22432));
label_519328:
    // 0x519328: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x519328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_51932c:
    // 0x51932c: 0x244257d8  addiu       $v0, $v0, 0x57D8
    ctx->pc = 0x51932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22488));
label_519330:
    // 0x519330: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x519330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_519334:
    // 0x519334: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x519334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_519338:
    // 0x519338: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x519338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_51933c:
    // 0x51933c: 0xc0407c0  jal         func_101F00
label_519340:
    if (ctx->pc == 0x519340u) {
        ctx->pc = 0x519340u;
            // 0x519340: 0x24a59460  addiu       $a1, $a1, -0x6BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
        ctx->pc = 0x519344u;
        goto label_519344;
    }
    ctx->pc = 0x51933Cu;
    SET_GPR_U32(ctx, 31, 0x519344u);
    ctx->pc = 0x519340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51933Cu;
            // 0x519340: 0x24a59460  addiu       $a1, $a1, -0x6BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519344u; }
        if (ctx->pc != 0x519344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519344u; }
        if (ctx->pc != 0x519344u) { return; }
    }
    ctx->pc = 0x519344u;
label_519344:
    // 0x519344: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x519344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_519348:
    // 0x519348: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51934c:
    if (ctx->pc == 0x51934Cu) {
        ctx->pc = 0x51934Cu;
            // 0x51934c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x519350u;
        goto label_519350;
    }
    ctx->pc = 0x519348u;
    {
        const bool branch_taken_0x519348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x519348) {
            ctx->pc = 0x51934Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519348u;
            // 0x51934c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51935Cu;
            goto label_51935c;
        }
    }
    ctx->pc = 0x519350u;
label_519350:
    // 0x519350: 0xc07507c  jal         func_1D41F0
label_519354:
    if (ctx->pc == 0x519354u) {
        ctx->pc = 0x519354u;
            // 0x519354: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x519358u;
        goto label_519358;
    }
    ctx->pc = 0x519350u;
    SET_GPR_U32(ctx, 31, 0x519358u);
    ctx->pc = 0x519354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519350u;
            // 0x519354: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519358u; }
        if (ctx->pc != 0x519358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519358u; }
        if (ctx->pc != 0x519358u) { return; }
    }
    ctx->pc = 0x519358u;
label_519358:
    // 0x519358: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x519358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_51935c:
    // 0x51935c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_519360:
    if (ctx->pc == 0x519360u) {
        ctx->pc = 0x519360u;
            // 0x519360: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x519364u;
        goto label_519364;
    }
    ctx->pc = 0x51935Cu;
    {
        const bool branch_taken_0x51935c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51935c) {
            ctx->pc = 0x519360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51935Cu;
            // 0x519360: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51938Cu;
            goto label_51938c;
        }
    }
    ctx->pc = 0x519364u;
label_519364:
    // 0x519364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_519368:
    if (ctx->pc == 0x519368u) {
        ctx->pc = 0x51936Cu;
        goto label_51936c;
    }
    ctx->pc = 0x519364u;
    {
        const bool branch_taken_0x519364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x519364) {
            ctx->pc = 0x519388u;
            goto label_519388;
        }
    }
    ctx->pc = 0x51936Cu;
label_51936c:
    // 0x51936c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_519370:
    if (ctx->pc == 0x519370u) {
        ctx->pc = 0x519374u;
        goto label_519374;
    }
    ctx->pc = 0x51936Cu;
    {
        const bool branch_taken_0x51936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51936c) {
            ctx->pc = 0x519388u;
            goto label_519388;
        }
    }
    ctx->pc = 0x519374u;
label_519374:
    // 0x519374: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x519374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_519378:
    // 0x519378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_51937c:
    if (ctx->pc == 0x51937Cu) {
        ctx->pc = 0x519380u;
        goto label_519380;
    }
    ctx->pc = 0x519378u;
    {
        const bool branch_taken_0x519378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x519378) {
            ctx->pc = 0x519388u;
            goto label_519388;
        }
    }
    ctx->pc = 0x519380u;
label_519380:
    // 0x519380: 0xc0400a8  jal         func_1002A0
label_519384:
    if (ctx->pc == 0x519384u) {
        ctx->pc = 0x519388u;
        goto label_519388;
    }
    ctx->pc = 0x519380u;
    SET_GPR_U32(ctx, 31, 0x519388u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519388u; }
        if (ctx->pc != 0x519388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519388u; }
        if (ctx->pc != 0x519388u) { return; }
    }
    ctx->pc = 0x519388u;
label_519388:
    // 0x519388: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x519388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_51938c:
    // 0x51938c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_519390:
    if (ctx->pc == 0x519390u) {
        ctx->pc = 0x519390u;
            // 0x519390: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x519394u;
        goto label_519394;
    }
    ctx->pc = 0x51938Cu;
    {
        const bool branch_taken_0x51938c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51938c) {
            ctx->pc = 0x519390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51938Cu;
            // 0x519390: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5193BCu;
            goto label_5193bc;
        }
    }
    ctx->pc = 0x519394u;
label_519394:
    // 0x519394: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_519398:
    if (ctx->pc == 0x519398u) {
        ctx->pc = 0x51939Cu;
        goto label_51939c;
    }
    ctx->pc = 0x519394u;
    {
        const bool branch_taken_0x519394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x519394) {
            ctx->pc = 0x5193B8u;
            goto label_5193b8;
        }
    }
    ctx->pc = 0x51939Cu;
label_51939c:
    // 0x51939c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5193a0:
    if (ctx->pc == 0x5193A0u) {
        ctx->pc = 0x5193A4u;
        goto label_5193a4;
    }
    ctx->pc = 0x51939Cu;
    {
        const bool branch_taken_0x51939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51939c) {
            ctx->pc = 0x5193B8u;
            goto label_5193b8;
        }
    }
    ctx->pc = 0x5193A4u;
label_5193a4:
    // 0x5193a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x5193a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_5193a8:
    // 0x5193a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5193ac:
    if (ctx->pc == 0x5193ACu) {
        ctx->pc = 0x5193B0u;
        goto label_5193b0;
    }
    ctx->pc = 0x5193A8u;
    {
        const bool branch_taken_0x5193a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5193a8) {
            ctx->pc = 0x5193B8u;
            goto label_5193b8;
        }
    }
    ctx->pc = 0x5193B0u;
label_5193b0:
    // 0x5193b0: 0xc0400a8  jal         func_1002A0
label_5193b4:
    if (ctx->pc == 0x5193B4u) {
        ctx->pc = 0x5193B8u;
        goto label_5193b8;
    }
    ctx->pc = 0x5193B0u;
    SET_GPR_U32(ctx, 31, 0x5193B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5193B8u; }
        if (ctx->pc != 0x5193B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5193B8u; }
        if (ctx->pc != 0x5193B8u) { return; }
    }
    ctx->pc = 0x5193B8u;
label_5193b8:
    // 0x5193b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x5193b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_5193bc:
    // 0x5193bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5193c0:
    if (ctx->pc == 0x5193C0u) {
        ctx->pc = 0x5193C4u;
        goto label_5193c4;
    }
    ctx->pc = 0x5193BCu;
    {
        const bool branch_taken_0x5193bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5193bc) {
            ctx->pc = 0x5193D8u;
            goto label_5193d8;
        }
    }
    ctx->pc = 0x5193C4u;
label_5193c4:
    // 0x5193c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5193c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5193c8:
    // 0x5193c8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5193c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5193cc:
    // 0x5193cc: 0x24635788  addiu       $v1, $v1, 0x5788
    ctx->pc = 0x5193ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22408));
label_5193d0:
    // 0x5193d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x5193d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_5193d4:
    // 0x5193d4: 0xac40ab10  sw          $zero, -0x54F0($v0)
    ctx->pc = 0x5193d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945552), GPR_U32(ctx, 0));
label_5193d8:
    // 0x5193d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_5193dc:
    if (ctx->pc == 0x5193DCu) {
        ctx->pc = 0x5193DCu;
            // 0x5193dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5193E0u;
        goto label_5193e0;
    }
    ctx->pc = 0x5193D8u;
    {
        const bool branch_taken_0x5193d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5193d8) {
            ctx->pc = 0x5193DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5193D8u;
            // 0x5193dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519434u;
            goto label_519434;
        }
    }
    ctx->pc = 0x5193E0u;
label_5193e0:
    // 0x5193e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5193e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5193e4:
    // 0x5193e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x5193e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_5193e8:
    // 0x5193e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5193e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5193ec:
    // 0x5193ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x5193ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_5193f0:
    // 0x5193f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5193f4:
    if (ctx->pc == 0x5193F4u) {
        ctx->pc = 0x5193F4u;
            // 0x5193f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x5193F8u;
        goto label_5193f8;
    }
    ctx->pc = 0x5193F0u;
    {
        const bool branch_taken_0x5193f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5193f0) {
            ctx->pc = 0x5193F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5193F0u;
            // 0x5193f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51940Cu;
            goto label_51940c;
        }
    }
    ctx->pc = 0x5193F8u;
label_5193f8:
    // 0x5193f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5193f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5193fc:
    // 0x5193fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5193fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_519400:
    // 0x519400: 0x320f809  jalr        $t9
label_519404:
    if (ctx->pc == 0x519404u) {
        ctx->pc = 0x519404u;
            // 0x519404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x519408u;
        goto label_519408;
    }
    ctx->pc = 0x519400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x519408u);
        ctx->pc = 0x519404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519400u;
            // 0x519404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x519408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x519408u; }
            if (ctx->pc != 0x519408u) { return; }
        }
        }
    }
    ctx->pc = 0x519408u;
label_519408:
    // 0x519408: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x519408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_51940c:
    // 0x51940c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_519410:
    if (ctx->pc == 0x519410u) {
        ctx->pc = 0x519410u;
            // 0x519410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519414u;
        goto label_519414;
    }
    ctx->pc = 0x51940Cu;
    {
        const bool branch_taken_0x51940c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51940c) {
            ctx->pc = 0x519410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51940Cu;
            // 0x519410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519428u;
            goto label_519428;
        }
    }
    ctx->pc = 0x519414u;
label_519414:
    // 0x519414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x519414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_519418:
    // 0x519418: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x519418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51941c:
    // 0x51941c: 0x320f809  jalr        $t9
label_519420:
    if (ctx->pc == 0x519420u) {
        ctx->pc = 0x519420u;
            // 0x519420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x519424u;
        goto label_519424;
    }
    ctx->pc = 0x51941Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x519424u);
        ctx->pc = 0x519420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51941Cu;
            // 0x519420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x519424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x519424u; }
            if (ctx->pc != 0x519424u) { return; }
        }
        }
    }
    ctx->pc = 0x519424u;
label_519424:
    // 0x519424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x519424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_519428:
    // 0x519428: 0xc075bf8  jal         func_1D6FE0
label_51942c:
    if (ctx->pc == 0x51942Cu) {
        ctx->pc = 0x51942Cu;
            // 0x51942c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519430u;
        goto label_519430;
    }
    ctx->pc = 0x519428u;
    SET_GPR_U32(ctx, 31, 0x519430u);
    ctx->pc = 0x51942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519428u;
            // 0x51942c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519430u; }
        if (ctx->pc != 0x519430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519430u; }
        if (ctx->pc != 0x519430u) { return; }
    }
    ctx->pc = 0x519430u;
label_519430:
    // 0x519430: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x519430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_519434:
    // 0x519434: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x519434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_519438:
    // 0x519438: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51943c:
    if (ctx->pc == 0x51943Cu) {
        ctx->pc = 0x51943Cu;
            // 0x51943c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519440u;
        goto label_519440;
    }
    ctx->pc = 0x519438u;
    {
        const bool branch_taken_0x519438 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x519438) {
            ctx->pc = 0x51943Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519438u;
            // 0x51943c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51944Cu;
            goto label_51944c;
        }
    }
    ctx->pc = 0x519440u;
label_519440:
    // 0x519440: 0xc0400a8  jal         func_1002A0
label_519444:
    if (ctx->pc == 0x519444u) {
        ctx->pc = 0x519444u;
            // 0x519444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519448u;
        goto label_519448;
    }
    ctx->pc = 0x519440u;
    SET_GPR_U32(ctx, 31, 0x519448u);
    ctx->pc = 0x519444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519440u;
            // 0x519444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519448u; }
        if (ctx->pc != 0x519448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519448u; }
        if (ctx->pc != 0x519448u) { return; }
    }
    ctx->pc = 0x519448u;
label_519448:
    // 0x519448: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x519448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51944c:
    // 0x51944c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_519450:
    // 0x519450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x519450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_519454:
    // 0x519454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_519458:
    // 0x519458: 0x3e00008  jr          $ra
label_51945c:
    if (ctx->pc == 0x51945Cu) {
        ctx->pc = 0x51945Cu;
            // 0x51945c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x519460u;
        goto label_519460;
    }
    ctx->pc = 0x519458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519458u;
            // 0x51945c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519460u;
label_519460:
    // 0x519460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x519460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_519464:
    // 0x519464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x519464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_519468:
    // 0x519468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x519468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51946c:
    // 0x51946c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_519470:
    // 0x519470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x519470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_519474:
    // 0x519474: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_519478:
    if (ctx->pc == 0x519478u) {
        ctx->pc = 0x519478u;
            // 0x519478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51947Cu;
        goto label_51947c;
    }
    ctx->pc = 0x519474u;
    {
        const bool branch_taken_0x519474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x519478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519474u;
            // 0x519478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519474) {
            ctx->pc = 0x5194C8u;
            goto label_5194c8;
        }
    }
    ctx->pc = 0x51947Cu;
label_51947c:
    // 0x51947c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_519480:
    // 0x519480: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x519480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_519484:
    // 0x519484: 0x24635840  addiu       $v1, $v1, 0x5840
    ctx->pc = 0x519484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22592));
label_519488:
    // 0x519488: 0x24425880  addiu       $v0, $v0, 0x5880
    ctx->pc = 0x519488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
label_51948c:
    // 0x51948c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x51948cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_519490:
    // 0x519490: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x519490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_519494:
    // 0x519494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x519494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_519498:
    // 0x519498: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x519498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_51949c:
    // 0x51949c: 0x320f809  jalr        $t9
label_5194a0:
    if (ctx->pc == 0x5194A0u) {
        ctx->pc = 0x5194A4u;
        goto label_5194a4;
    }
    ctx->pc = 0x51949Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5194A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5194A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5194A4u; }
            if (ctx->pc != 0x5194A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5194A4u;
label_5194a4:
    // 0x5194a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5194a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5194a8:
    // 0x5194a8: 0xc12e684  jal         func_4B9A10
label_5194ac:
    if (ctx->pc == 0x5194ACu) {
        ctx->pc = 0x5194ACu;
            // 0x5194ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5194B0u;
        goto label_5194b0;
    }
    ctx->pc = 0x5194A8u;
    SET_GPR_U32(ctx, 31, 0x5194B0u);
    ctx->pc = 0x5194ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5194A8u;
            // 0x5194ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5194B0u; }
        if (ctx->pc != 0x5194B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5194B0u; }
        if (ctx->pc != 0x5194B0u) { return; }
    }
    ctx->pc = 0x5194B0u;
label_5194b0:
    // 0x5194b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5194b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5194b4:
    // 0x5194b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5194b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5194b8:
    // 0x5194b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5194bc:
    if (ctx->pc == 0x5194BCu) {
        ctx->pc = 0x5194BCu;
            // 0x5194bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5194C0u;
        goto label_5194c0;
    }
    ctx->pc = 0x5194B8u;
    {
        const bool branch_taken_0x5194b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5194b8) {
            ctx->pc = 0x5194BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5194B8u;
            // 0x5194bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5194CCu;
            goto label_5194cc;
        }
    }
    ctx->pc = 0x5194C0u;
label_5194c0:
    // 0x5194c0: 0xc0400a8  jal         func_1002A0
label_5194c4:
    if (ctx->pc == 0x5194C4u) {
        ctx->pc = 0x5194C4u;
            // 0x5194c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5194C8u;
        goto label_5194c8;
    }
    ctx->pc = 0x5194C0u;
    SET_GPR_U32(ctx, 31, 0x5194C8u);
    ctx->pc = 0x5194C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5194C0u;
            // 0x5194c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5194C8u; }
        if (ctx->pc != 0x5194C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5194C8u; }
        if (ctx->pc != 0x5194C8u) { return; }
    }
    ctx->pc = 0x5194C8u;
label_5194c8:
    // 0x5194c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5194c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5194cc:
    // 0x5194cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5194ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5194d0:
    // 0x5194d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5194d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5194d4:
    // 0x5194d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5194d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5194d8:
    // 0x5194d8: 0x3e00008  jr          $ra
label_5194dc:
    if (ctx->pc == 0x5194DCu) {
        ctx->pc = 0x5194DCu;
            // 0x5194dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5194E0u;
        goto label_5194e0;
    }
    ctx->pc = 0x5194D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5194DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5194D8u;
            // 0x5194dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5194E0u;
label_5194e0:
    // 0x5194e0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x5194e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_5194e4:
    // 0x5194e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5194e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5194e8:
    // 0x5194e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x5194e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_5194ec:
    // 0x5194ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x5194ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_5194f0:
    // 0x5194f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x5194f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_5194f4:
    // 0x5194f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x5194f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_5194f8:
    // 0x5194f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x5194f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_5194fc:
    // 0x5194fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x5194fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_519500:
    // 0x519500: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x519500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_519504:
    // 0x519504: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x519504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_519508:
    // 0x519508: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x519508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51950c:
    // 0x51950c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_519510:
    // 0x519510: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x519510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_519514:
    // 0x519514: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x519514u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_519518:
    // 0x519518: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_51951c:
    if (ctx->pc == 0x51951Cu) {
        ctx->pc = 0x51951Cu;
            // 0x51951c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519520u;
        goto label_519520;
    }
    ctx->pc = 0x519518u;
    {
        const bool branch_taken_0x519518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x51951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519518u;
            // 0x51951c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519518) {
            ctx->pc = 0x51957Cu;
            goto label_51957c;
        }
    }
    ctx->pc = 0x519520u;
label_519520:
    // 0x519520: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x519520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_519524:
    // 0x519524: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_519528:
    if (ctx->pc == 0x519528u) {
        ctx->pc = 0x519528u;
            // 0x519528: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x51952Cu;
        goto label_51952c;
    }
    ctx->pc = 0x519524u;
    {
        const bool branch_taken_0x519524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x519524) {
            ctx->pc = 0x519528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519524u;
            // 0x519528: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519568u;
            goto label_519568;
        }
    }
    ctx->pc = 0x51952Cu;
label_51952c:
    // 0x51952c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x51952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_519530:
    // 0x519530: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_519534:
    if (ctx->pc == 0x519534u) {
        ctx->pc = 0x519538u;
        goto label_519538;
    }
    ctx->pc = 0x519530u;
    {
        const bool branch_taken_0x519530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x519530) {
            ctx->pc = 0x519540u;
            goto label_519540;
        }
    }
    ctx->pc = 0x519538u;
label_519538:
    // 0x519538: 0x1000007f  b           . + 4 + (0x7F << 2)
label_51953c:
    if (ctx->pc == 0x51953Cu) {
        ctx->pc = 0x51953Cu;
            // 0x51953c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x519540u;
        goto label_519540;
    }
    ctx->pc = 0x519538u;
    {
        const bool branch_taken_0x519538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519538u;
            // 0x51953c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519538) {
            ctx->pc = 0x519738u;
            goto label_519738;
        }
    }
    ctx->pc = 0x519540u;
label_519540:
    // 0x519540: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x519540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_519544:
    // 0x519544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x519544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_519548:
    // 0x519548: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x519548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51954c:
    // 0x51954c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x51954cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_519550:
    // 0x519550: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x519550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_519554:
    // 0x519554: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x519554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_519558:
    // 0x519558: 0x320f809  jalr        $t9
label_51955c:
    if (ctx->pc == 0x51955Cu) {
        ctx->pc = 0x51955Cu;
            // 0x51955c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x519560u;
        goto label_519560;
    }
    ctx->pc = 0x519558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x519560u);
        ctx->pc = 0x51955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519558u;
            // 0x51955c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x519560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x519560u; }
            if (ctx->pc != 0x519560u) { return; }
        }
        }
    }
    ctx->pc = 0x519560u;
label_519560:
    // 0x519560: 0x10000074  b           . + 4 + (0x74 << 2)
label_519564:
    if (ctx->pc == 0x519564u) {
        ctx->pc = 0x519568u;
        goto label_519568;
    }
    ctx->pc = 0x519560u;
    {
        const bool branch_taken_0x519560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x519560) {
            ctx->pc = 0x519734u;
            goto label_519734;
        }
    }
    ctx->pc = 0x519568u;
label_519568:
    // 0x519568: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x519568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_51956c:
    // 0x51956c: 0x320f809  jalr        $t9
label_519570:
    if (ctx->pc == 0x519570u) {
        ctx->pc = 0x519574u;
        goto label_519574;
    }
    ctx->pc = 0x51956Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x519574u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x519574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x519574u; }
            if (ctx->pc != 0x519574u) { return; }
        }
        }
    }
    ctx->pc = 0x519574u;
label_519574:
    // 0x519574: 0x1000006f  b           . + 4 + (0x6F << 2)
label_519578:
    if (ctx->pc == 0x519578u) {
        ctx->pc = 0x51957Cu;
        goto label_51957c;
    }
    ctx->pc = 0x519574u;
    {
        const bool branch_taken_0x519574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x519574) {
            ctx->pc = 0x519734u;
            goto label_519734;
        }
    }
    ctx->pc = 0x51957Cu;
label_51957c:
    // 0x51957c: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x51957cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_519580:
    // 0x519580: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_519584:
    if (ctx->pc == 0x519584u) {
        ctx->pc = 0x519588u;
        goto label_519588;
    }
    ctx->pc = 0x519580u;
    {
        const bool branch_taken_0x519580 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x519580) {
            ctx->pc = 0x519734u;
            goto label_519734;
        }
    }
    ctx->pc = 0x519588u;
label_519588:
    // 0x519588: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x519588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_51958c:
    // 0x51958c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x51958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_519590:
    // 0x519590: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x519590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_519594:
    // 0x519594: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x519594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_519598:
    // 0x519598: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x519598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_51959c:
    // 0x51959c: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x51959cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_5195a0:
    // 0x5195a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x5195a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5195a4:
    // 0x5195a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5195a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5195a8:
    // 0x5195a8: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x5195a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_5195ac:
    // 0x5195ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5195acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5195b0:
    // 0x5195b0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x5195b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_5195b4:
    // 0x5195b4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5195b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5195b8:
    // 0x5195b8: 0xc454c3e0  lwc1        $f20, -0x3C20($v0)
    ctx->pc = 0x5195b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5195bc:
    // 0x5195bc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x5195bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5195c0:
    // 0x5195c0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x5195c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_5195c4:
    // 0x5195c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5195c8:
    // 0x5195c8: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x5195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_5195cc:
    // 0x5195cc: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x5195ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_5195d0:
    // 0x5195d0: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x5195d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_5195d4:
    // 0x5195d4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x5195d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_5195d8:
    // 0x5195d8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x5195d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_5195dc:
    // 0x5195dc: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x5195dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_5195e0:
    // 0x5195e0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x5195e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_5195e4:
    // 0x5195e4: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x5195e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_5195e8:
    // 0x5195e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x5195e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_5195ec:
    // 0x5195ec: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x5195ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5195f0:
    // 0x5195f0: 0xc0d639c  jal         func_358E70
label_5195f4:
    if (ctx->pc == 0x5195F4u) {
        ctx->pc = 0x5195F4u;
            // 0x5195f4: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x5195F8u;
        goto label_5195f8;
    }
    ctx->pc = 0x5195F0u;
    SET_GPR_U32(ctx, 31, 0x5195F8u);
    ctx->pc = 0x5195F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5195F0u;
            // 0x5195f4: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5195F8u; }
        if (ctx->pc != 0x5195F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5195F8u; }
        if (ctx->pc != 0x5195F8u) { return; }
    }
    ctx->pc = 0x5195F8u;
label_5195f8:
    // 0x5195f8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_5195fc:
    if (ctx->pc == 0x5195FCu) {
        ctx->pc = 0x519600u;
        goto label_519600;
    }
    ctx->pc = 0x5195F8u;
    {
        const bool branch_taken_0x5195f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5195f8) {
            ctx->pc = 0x5196E0u;
            goto label_5196e0;
        }
    }
    ctx->pc = 0x519600u;
label_519600:
    // 0x519600: 0xc0d1c14  jal         func_347050
label_519604:
    if (ctx->pc == 0x519604u) {
        ctx->pc = 0x519604u;
            // 0x519604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519608u;
        goto label_519608;
    }
    ctx->pc = 0x519600u;
    SET_GPR_U32(ctx, 31, 0x519608u);
    ctx->pc = 0x519604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519600u;
            // 0x519604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519608u; }
        if (ctx->pc != 0x519608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519608u; }
        if (ctx->pc != 0x519608u) { return; }
    }
    ctx->pc = 0x519608u;
label_519608:
    // 0x519608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x519608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51960c:
    // 0x51960c: 0xc04f278  jal         func_13C9E0
label_519610:
    if (ctx->pc == 0x519610u) {
        ctx->pc = 0x519610u;
            // 0x519610: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x519614u;
        goto label_519614;
    }
    ctx->pc = 0x51960Cu;
    SET_GPR_U32(ctx, 31, 0x519614u);
    ctx->pc = 0x519610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51960Cu;
            // 0x519610: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519614u; }
        if (ctx->pc != 0x519614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519614u; }
        if (ctx->pc != 0x519614u) { return; }
    }
    ctx->pc = 0x519614u;
label_519614:
    // 0x519614: 0xc0d1c10  jal         func_347040
label_519618:
    if (ctx->pc == 0x519618u) {
        ctx->pc = 0x519618u;
            // 0x519618: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51961Cu;
        goto label_51961c;
    }
    ctx->pc = 0x519614u;
    SET_GPR_U32(ctx, 31, 0x51961Cu);
    ctx->pc = 0x519618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519614u;
            // 0x519618: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51961Cu; }
        if (ctx->pc != 0x51961Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51961Cu; }
        if (ctx->pc != 0x51961Cu) { return; }
    }
    ctx->pc = 0x51961Cu;
label_51961c:
    // 0x51961c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51961cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519620:
    // 0x519620: 0xc04ce80  jal         func_133A00
label_519624:
    if (ctx->pc == 0x519624u) {
        ctx->pc = 0x519624u;
            // 0x519624: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x519628u;
        goto label_519628;
    }
    ctx->pc = 0x519620u;
    SET_GPR_U32(ctx, 31, 0x519628u);
    ctx->pc = 0x519624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519620u;
            // 0x519624: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519628u; }
        if (ctx->pc != 0x519628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519628u; }
        if (ctx->pc != 0x519628u) { return; }
    }
    ctx->pc = 0x519628u;
label_519628:
    // 0x519628: 0xc0d4108  jal         func_350420
label_51962c:
    if (ctx->pc == 0x51962Cu) {
        ctx->pc = 0x519630u;
        goto label_519630;
    }
    ctx->pc = 0x519628u;
    SET_GPR_U32(ctx, 31, 0x519630u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519630u; }
        if (ctx->pc != 0x519630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519630u; }
        if (ctx->pc != 0x519630u) { return; }
    }
    ctx->pc = 0x519630u;
label_519630:
    // 0x519630: 0xc0b36b4  jal         func_2CDAD0
label_519634:
    if (ctx->pc == 0x519634u) {
        ctx->pc = 0x519634u;
            // 0x519634: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519638u;
        goto label_519638;
    }
    ctx->pc = 0x519630u;
    SET_GPR_U32(ctx, 31, 0x519638u);
    ctx->pc = 0x519634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519630u;
            // 0x519634: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519638u; }
        if (ctx->pc != 0x519638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519638u; }
        if (ctx->pc != 0x519638u) { return; }
    }
    ctx->pc = 0x519638u;
label_519638:
    // 0x519638: 0xc0b9c64  jal         func_2E7190
label_51963c:
    if (ctx->pc == 0x51963Cu) {
        ctx->pc = 0x51963Cu;
            // 0x51963c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519640u;
        goto label_519640;
    }
    ctx->pc = 0x519638u;
    SET_GPR_U32(ctx, 31, 0x519640u);
    ctx->pc = 0x51963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519638u;
            // 0x51963c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519640u; }
        if (ctx->pc != 0x519640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519640u; }
        if (ctx->pc != 0x519640u) { return; }
    }
    ctx->pc = 0x519640u;
label_519640:
    // 0x519640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x519640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519644:
    // 0x519644: 0xc0d4104  jal         func_350410
label_519648:
    if (ctx->pc == 0x519648u) {
        ctx->pc = 0x519648u;
            // 0x519648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51964Cu;
        goto label_51964c;
    }
    ctx->pc = 0x519644u;
    SET_GPR_U32(ctx, 31, 0x51964Cu);
    ctx->pc = 0x519648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519644u;
            // 0x519648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51964Cu; }
        if (ctx->pc != 0x51964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51964Cu; }
        if (ctx->pc != 0x51964Cu) { return; }
    }
    ctx->pc = 0x51964Cu;
label_51964c:
    // 0x51964c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x51964cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_519650:
    // 0x519650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x519650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_519654:
    // 0x519654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x519654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_519658:
    // 0x519658: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x519658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_51965c:
    // 0x51965c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x51965cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_519660:
    // 0x519660: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x519660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519664:
    // 0x519664: 0xc0d40ac  jal         func_3502B0
label_519668:
    if (ctx->pc == 0x519668u) {
        ctx->pc = 0x519668u;
            // 0x519668: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x51966Cu;
        goto label_51966c;
    }
    ctx->pc = 0x519664u;
    SET_GPR_U32(ctx, 31, 0x51966Cu);
    ctx->pc = 0x519668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519664u;
            // 0x519668: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51966Cu; }
        if (ctx->pc != 0x51966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51966Cu; }
        if (ctx->pc != 0x51966Cu) { return; }
    }
    ctx->pc = 0x51966Cu;
label_51966c:
    // 0x51966c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x51966cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_519670:
    // 0x519670: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_519674:
    if (ctx->pc == 0x519674u) {
        ctx->pc = 0x519674u;
            // 0x519674: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x519678u;
        goto label_519678;
    }
    ctx->pc = 0x519670u;
    {
        const bool branch_taken_0x519670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x519674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519670u;
            // 0x519674: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519670) {
            ctx->pc = 0x5196E0u;
            goto label_5196e0;
        }
    }
    ctx->pc = 0x519678u;
label_519678:
    // 0x519678: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x519678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51967c:
    // 0x51967c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x51967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_519680:
    // 0x519680: 0xc1465dc  jal         func_519770
label_519684:
    if (ctx->pc == 0x519684u) {
        ctx->pc = 0x519684u;
            // 0x519684: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x519688u;
        goto label_519688;
    }
    ctx->pc = 0x519680u;
    SET_GPR_U32(ctx, 31, 0x519688u);
    ctx->pc = 0x519684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519680u;
            // 0x519684: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x519770u;
    if (runtime->hasFunction(0x519770u)) {
        auto targetFn = runtime->lookupFunction(0x519770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519688u; }
        if (ctx->pc != 0x519688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00519770_0x519770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519688u; }
        if (ctx->pc != 0x519688u) { return; }
    }
    ctx->pc = 0x519688u;
label_519688:
    // 0x519688: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x519688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_51968c:
    // 0x51968c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x51968cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_519690:
    // 0x519690: 0xc04cd60  jal         func_133580
label_519694:
    if (ctx->pc == 0x519694u) {
        ctx->pc = 0x519694u;
            // 0x519694: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x519698u;
        goto label_519698;
    }
    ctx->pc = 0x519690u;
    SET_GPR_U32(ctx, 31, 0x519698u);
    ctx->pc = 0x519694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519690u;
            // 0x519694: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519698u; }
        if (ctx->pc != 0x519698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519698u; }
        if (ctx->pc != 0x519698u) { return; }
    }
    ctx->pc = 0x519698u;
label_519698:
    // 0x519698: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x519698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51969c:
    // 0x51969c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x51969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_5196a0:
    // 0x5196a0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x5196a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_5196a4:
    // 0x5196a4: 0xc04e4a4  jal         func_139290
label_5196a8:
    if (ctx->pc == 0x5196A8u) {
        ctx->pc = 0x5196A8u;
            // 0x5196a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5196ACu;
        goto label_5196ac;
    }
    ctx->pc = 0x5196A4u;
    SET_GPR_U32(ctx, 31, 0x5196ACu);
    ctx->pc = 0x5196A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5196A4u;
            // 0x5196a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5196ACu; }
        if (ctx->pc != 0x5196ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5196ACu; }
        if (ctx->pc != 0x5196ACu) { return; }
    }
    ctx->pc = 0x5196ACu;
label_5196ac:
    // 0x5196ac: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x5196acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_5196b0:
    // 0x5196b0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x5196b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_5196b4:
    // 0x5196b4: 0x320f809  jalr        $t9
label_5196b8:
    if (ctx->pc == 0x5196B8u) {
        ctx->pc = 0x5196B8u;
            // 0x5196b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5196BCu;
        goto label_5196bc;
    }
    ctx->pc = 0x5196B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5196BCu);
        ctx->pc = 0x5196B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5196B4u;
            // 0x5196b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5196BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5196BCu; }
            if (ctx->pc != 0x5196BCu) { return; }
        }
        }
    }
    ctx->pc = 0x5196BCu;
label_5196bc:
    // 0x5196bc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x5196bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_5196c0:
    // 0x5196c0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x5196c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_5196c4:
    // 0x5196c4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x5196c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_5196c8:
    // 0x5196c8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x5196c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5196cc:
    // 0x5196cc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x5196ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5196d0:
    // 0x5196d0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x5196d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_5196d4:
    // 0x5196d4: 0xc04cfcc  jal         func_133F30
label_5196d8:
    if (ctx->pc == 0x5196D8u) {
        ctx->pc = 0x5196D8u;
            // 0x5196d8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5196DCu;
        goto label_5196dc;
    }
    ctx->pc = 0x5196D4u;
    SET_GPR_U32(ctx, 31, 0x5196DCu);
    ctx->pc = 0x5196D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5196D4u;
            // 0x5196d8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5196DCu; }
        if (ctx->pc != 0x5196DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5196DCu; }
        if (ctx->pc != 0x5196DCu) { return; }
    }
    ctx->pc = 0x5196DCu;
label_5196dc:
    // 0x5196dc: 0x0  nop
    ctx->pc = 0x5196dcu;
    // NOP
label_5196e0:
    // 0x5196e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x5196e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_5196e4:
    // 0x5196e4: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x5196e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_5196e8:
    // 0x5196e8: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_5196ec:
    if (ctx->pc == 0x5196ECu) {
        ctx->pc = 0x5196ECu;
            // 0x5196ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x5196F0u;
        goto label_5196f0;
    }
    ctx->pc = 0x5196E8u;
    {
        const bool branch_taken_0x5196e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5196ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5196E8u;
            // 0x5196ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5196e8) {
            ctx->pc = 0x5195D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5195d4;
        }
    }
    ctx->pc = 0x5196F0u;
label_5196f0:
    // 0x5196f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5196f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5196f4:
    // 0x5196f4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x5196f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5196f8:
    // 0x5196f8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_5196fc:
    if (ctx->pc == 0x5196FCu) {
        ctx->pc = 0x519700u;
        goto label_519700;
    }
    ctx->pc = 0x5196F8u;
    {
        const bool branch_taken_0x5196f8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x5196f8) {
            ctx->pc = 0x519734u;
            goto label_519734;
        }
    }
    ctx->pc = 0x519700u;
label_519700:
    // 0x519700: 0xc04e738  jal         func_139CE0
label_519704:
    if (ctx->pc == 0x519704u) {
        ctx->pc = 0x519704u;
            // 0x519704: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x519708u;
        goto label_519708;
    }
    ctx->pc = 0x519700u;
    SET_GPR_U32(ctx, 31, 0x519708u);
    ctx->pc = 0x519704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519700u;
            // 0x519704: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519708u; }
        if (ctx->pc != 0x519708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519708u; }
        if (ctx->pc != 0x519708u) { return; }
    }
    ctx->pc = 0x519708u;
label_519708:
    // 0x519708: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x519708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51970c:
    // 0x51970c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x51970cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_519710:
    // 0x519710: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x519710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_519714:
    // 0x519714: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x519714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_519718:
    // 0x519718: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x519718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51971c:
    // 0x51971c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_519720:
    // 0x519720: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x519720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_519724:
    // 0x519724: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x519724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_519728:
    // 0x519728: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x519728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_51972c:
    // 0x51972c: 0xc055d28  jal         func_1574A0
label_519730:
    if (ctx->pc == 0x519730u) {
        ctx->pc = 0x519730u;
            // 0x519730: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519734u;
        goto label_519734;
    }
    ctx->pc = 0x51972Cu;
    SET_GPR_U32(ctx, 31, 0x519734u);
    ctx->pc = 0x519730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51972Cu;
            // 0x519730: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519734u; }
        if (ctx->pc != 0x519734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519734u; }
        if (ctx->pc != 0x519734u) { return; }
    }
    ctx->pc = 0x519734u;
label_519734:
    // 0x519734: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x519734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_519738:
    // 0x519738: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x519738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51973c:
    // 0x51973c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x51973cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_519740:
    // 0x519740: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x519740u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_519744:
    // 0x519744: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x519744u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_519748:
    // 0x519748: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x519748u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_51974c:
    // 0x51974c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x51974cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_519750:
    // 0x519750: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x519750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_519754:
    // 0x519754: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x519754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_519758:
    // 0x519758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x519758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51975c:
    // 0x51975c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51975cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_519760:
    // 0x519760: 0x3e00008  jr          $ra
label_519764:
    if (ctx->pc == 0x519764u) {
        ctx->pc = 0x519764u;
            // 0x519764: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x519768u;
        goto label_519768;
    }
    ctx->pc = 0x519760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519760u;
            // 0x519764: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519768u;
label_519768:
    // 0x519768: 0x0  nop
    ctx->pc = 0x519768u;
    // NOP
label_51976c:
    // 0x51976c: 0x0  nop
    ctx->pc = 0x51976cu;
    // NOP
}
