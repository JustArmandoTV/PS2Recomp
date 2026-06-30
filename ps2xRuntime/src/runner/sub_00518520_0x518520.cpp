#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00518520
// Address: 0x518520 - 0x518940
void sub_00518520_0x518520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00518520_0x518520");
#endif

    switch (ctx->pc) {
        case 0x518520u: goto label_518520;
        case 0x518524u: goto label_518524;
        case 0x518528u: goto label_518528;
        case 0x51852cu: goto label_51852c;
        case 0x518530u: goto label_518530;
        case 0x518534u: goto label_518534;
        case 0x518538u: goto label_518538;
        case 0x51853cu: goto label_51853c;
        case 0x518540u: goto label_518540;
        case 0x518544u: goto label_518544;
        case 0x518548u: goto label_518548;
        case 0x51854cu: goto label_51854c;
        case 0x518550u: goto label_518550;
        case 0x518554u: goto label_518554;
        case 0x518558u: goto label_518558;
        case 0x51855cu: goto label_51855c;
        case 0x518560u: goto label_518560;
        case 0x518564u: goto label_518564;
        case 0x518568u: goto label_518568;
        case 0x51856cu: goto label_51856c;
        case 0x518570u: goto label_518570;
        case 0x518574u: goto label_518574;
        case 0x518578u: goto label_518578;
        case 0x51857cu: goto label_51857c;
        case 0x518580u: goto label_518580;
        case 0x518584u: goto label_518584;
        case 0x518588u: goto label_518588;
        case 0x51858cu: goto label_51858c;
        case 0x518590u: goto label_518590;
        case 0x518594u: goto label_518594;
        case 0x518598u: goto label_518598;
        case 0x51859cu: goto label_51859c;
        case 0x5185a0u: goto label_5185a0;
        case 0x5185a4u: goto label_5185a4;
        case 0x5185a8u: goto label_5185a8;
        case 0x5185acu: goto label_5185ac;
        case 0x5185b0u: goto label_5185b0;
        case 0x5185b4u: goto label_5185b4;
        case 0x5185b8u: goto label_5185b8;
        case 0x5185bcu: goto label_5185bc;
        case 0x5185c0u: goto label_5185c0;
        case 0x5185c4u: goto label_5185c4;
        case 0x5185c8u: goto label_5185c8;
        case 0x5185ccu: goto label_5185cc;
        case 0x5185d0u: goto label_5185d0;
        case 0x5185d4u: goto label_5185d4;
        case 0x5185d8u: goto label_5185d8;
        case 0x5185dcu: goto label_5185dc;
        case 0x5185e0u: goto label_5185e0;
        case 0x5185e4u: goto label_5185e4;
        case 0x5185e8u: goto label_5185e8;
        case 0x5185ecu: goto label_5185ec;
        case 0x5185f0u: goto label_5185f0;
        case 0x5185f4u: goto label_5185f4;
        case 0x5185f8u: goto label_5185f8;
        case 0x5185fcu: goto label_5185fc;
        case 0x518600u: goto label_518600;
        case 0x518604u: goto label_518604;
        case 0x518608u: goto label_518608;
        case 0x51860cu: goto label_51860c;
        case 0x518610u: goto label_518610;
        case 0x518614u: goto label_518614;
        case 0x518618u: goto label_518618;
        case 0x51861cu: goto label_51861c;
        case 0x518620u: goto label_518620;
        case 0x518624u: goto label_518624;
        case 0x518628u: goto label_518628;
        case 0x51862cu: goto label_51862c;
        case 0x518630u: goto label_518630;
        case 0x518634u: goto label_518634;
        case 0x518638u: goto label_518638;
        case 0x51863cu: goto label_51863c;
        case 0x518640u: goto label_518640;
        case 0x518644u: goto label_518644;
        case 0x518648u: goto label_518648;
        case 0x51864cu: goto label_51864c;
        case 0x518650u: goto label_518650;
        case 0x518654u: goto label_518654;
        case 0x518658u: goto label_518658;
        case 0x51865cu: goto label_51865c;
        case 0x518660u: goto label_518660;
        case 0x518664u: goto label_518664;
        case 0x518668u: goto label_518668;
        case 0x51866cu: goto label_51866c;
        case 0x518670u: goto label_518670;
        case 0x518674u: goto label_518674;
        case 0x518678u: goto label_518678;
        case 0x51867cu: goto label_51867c;
        case 0x518680u: goto label_518680;
        case 0x518684u: goto label_518684;
        case 0x518688u: goto label_518688;
        case 0x51868cu: goto label_51868c;
        case 0x518690u: goto label_518690;
        case 0x518694u: goto label_518694;
        case 0x518698u: goto label_518698;
        case 0x51869cu: goto label_51869c;
        case 0x5186a0u: goto label_5186a0;
        case 0x5186a4u: goto label_5186a4;
        case 0x5186a8u: goto label_5186a8;
        case 0x5186acu: goto label_5186ac;
        case 0x5186b0u: goto label_5186b0;
        case 0x5186b4u: goto label_5186b4;
        case 0x5186b8u: goto label_5186b8;
        case 0x5186bcu: goto label_5186bc;
        case 0x5186c0u: goto label_5186c0;
        case 0x5186c4u: goto label_5186c4;
        case 0x5186c8u: goto label_5186c8;
        case 0x5186ccu: goto label_5186cc;
        case 0x5186d0u: goto label_5186d0;
        case 0x5186d4u: goto label_5186d4;
        case 0x5186d8u: goto label_5186d8;
        case 0x5186dcu: goto label_5186dc;
        case 0x5186e0u: goto label_5186e0;
        case 0x5186e4u: goto label_5186e4;
        case 0x5186e8u: goto label_5186e8;
        case 0x5186ecu: goto label_5186ec;
        case 0x5186f0u: goto label_5186f0;
        case 0x5186f4u: goto label_5186f4;
        case 0x5186f8u: goto label_5186f8;
        case 0x5186fcu: goto label_5186fc;
        case 0x518700u: goto label_518700;
        case 0x518704u: goto label_518704;
        case 0x518708u: goto label_518708;
        case 0x51870cu: goto label_51870c;
        case 0x518710u: goto label_518710;
        case 0x518714u: goto label_518714;
        case 0x518718u: goto label_518718;
        case 0x51871cu: goto label_51871c;
        case 0x518720u: goto label_518720;
        case 0x518724u: goto label_518724;
        case 0x518728u: goto label_518728;
        case 0x51872cu: goto label_51872c;
        case 0x518730u: goto label_518730;
        case 0x518734u: goto label_518734;
        case 0x518738u: goto label_518738;
        case 0x51873cu: goto label_51873c;
        case 0x518740u: goto label_518740;
        case 0x518744u: goto label_518744;
        case 0x518748u: goto label_518748;
        case 0x51874cu: goto label_51874c;
        case 0x518750u: goto label_518750;
        case 0x518754u: goto label_518754;
        case 0x518758u: goto label_518758;
        case 0x51875cu: goto label_51875c;
        case 0x518760u: goto label_518760;
        case 0x518764u: goto label_518764;
        case 0x518768u: goto label_518768;
        case 0x51876cu: goto label_51876c;
        case 0x518770u: goto label_518770;
        case 0x518774u: goto label_518774;
        case 0x518778u: goto label_518778;
        case 0x51877cu: goto label_51877c;
        case 0x518780u: goto label_518780;
        case 0x518784u: goto label_518784;
        case 0x518788u: goto label_518788;
        case 0x51878cu: goto label_51878c;
        case 0x518790u: goto label_518790;
        case 0x518794u: goto label_518794;
        case 0x518798u: goto label_518798;
        case 0x51879cu: goto label_51879c;
        case 0x5187a0u: goto label_5187a0;
        case 0x5187a4u: goto label_5187a4;
        case 0x5187a8u: goto label_5187a8;
        case 0x5187acu: goto label_5187ac;
        case 0x5187b0u: goto label_5187b0;
        case 0x5187b4u: goto label_5187b4;
        case 0x5187b8u: goto label_5187b8;
        case 0x5187bcu: goto label_5187bc;
        case 0x5187c0u: goto label_5187c0;
        case 0x5187c4u: goto label_5187c4;
        case 0x5187c8u: goto label_5187c8;
        case 0x5187ccu: goto label_5187cc;
        case 0x5187d0u: goto label_5187d0;
        case 0x5187d4u: goto label_5187d4;
        case 0x5187d8u: goto label_5187d8;
        case 0x5187dcu: goto label_5187dc;
        case 0x5187e0u: goto label_5187e0;
        case 0x5187e4u: goto label_5187e4;
        case 0x5187e8u: goto label_5187e8;
        case 0x5187ecu: goto label_5187ec;
        case 0x5187f0u: goto label_5187f0;
        case 0x5187f4u: goto label_5187f4;
        case 0x5187f8u: goto label_5187f8;
        case 0x5187fcu: goto label_5187fc;
        case 0x518800u: goto label_518800;
        case 0x518804u: goto label_518804;
        case 0x518808u: goto label_518808;
        case 0x51880cu: goto label_51880c;
        case 0x518810u: goto label_518810;
        case 0x518814u: goto label_518814;
        case 0x518818u: goto label_518818;
        case 0x51881cu: goto label_51881c;
        case 0x518820u: goto label_518820;
        case 0x518824u: goto label_518824;
        case 0x518828u: goto label_518828;
        case 0x51882cu: goto label_51882c;
        case 0x518830u: goto label_518830;
        case 0x518834u: goto label_518834;
        case 0x518838u: goto label_518838;
        case 0x51883cu: goto label_51883c;
        case 0x518840u: goto label_518840;
        case 0x518844u: goto label_518844;
        case 0x518848u: goto label_518848;
        case 0x51884cu: goto label_51884c;
        case 0x518850u: goto label_518850;
        case 0x518854u: goto label_518854;
        case 0x518858u: goto label_518858;
        case 0x51885cu: goto label_51885c;
        case 0x518860u: goto label_518860;
        case 0x518864u: goto label_518864;
        case 0x518868u: goto label_518868;
        case 0x51886cu: goto label_51886c;
        case 0x518870u: goto label_518870;
        case 0x518874u: goto label_518874;
        case 0x518878u: goto label_518878;
        case 0x51887cu: goto label_51887c;
        case 0x518880u: goto label_518880;
        case 0x518884u: goto label_518884;
        case 0x518888u: goto label_518888;
        case 0x51888cu: goto label_51888c;
        case 0x518890u: goto label_518890;
        case 0x518894u: goto label_518894;
        case 0x518898u: goto label_518898;
        case 0x51889cu: goto label_51889c;
        case 0x5188a0u: goto label_5188a0;
        case 0x5188a4u: goto label_5188a4;
        case 0x5188a8u: goto label_5188a8;
        case 0x5188acu: goto label_5188ac;
        case 0x5188b0u: goto label_5188b0;
        case 0x5188b4u: goto label_5188b4;
        case 0x5188b8u: goto label_5188b8;
        case 0x5188bcu: goto label_5188bc;
        case 0x5188c0u: goto label_5188c0;
        case 0x5188c4u: goto label_5188c4;
        case 0x5188c8u: goto label_5188c8;
        case 0x5188ccu: goto label_5188cc;
        case 0x5188d0u: goto label_5188d0;
        case 0x5188d4u: goto label_5188d4;
        case 0x5188d8u: goto label_5188d8;
        case 0x5188dcu: goto label_5188dc;
        case 0x5188e0u: goto label_5188e0;
        case 0x5188e4u: goto label_5188e4;
        case 0x5188e8u: goto label_5188e8;
        case 0x5188ecu: goto label_5188ec;
        case 0x5188f0u: goto label_5188f0;
        case 0x5188f4u: goto label_5188f4;
        case 0x5188f8u: goto label_5188f8;
        case 0x5188fcu: goto label_5188fc;
        case 0x518900u: goto label_518900;
        case 0x518904u: goto label_518904;
        case 0x518908u: goto label_518908;
        case 0x51890cu: goto label_51890c;
        case 0x518910u: goto label_518910;
        case 0x518914u: goto label_518914;
        case 0x518918u: goto label_518918;
        case 0x51891cu: goto label_51891c;
        case 0x518920u: goto label_518920;
        case 0x518924u: goto label_518924;
        case 0x518928u: goto label_518928;
        case 0x51892cu: goto label_51892c;
        case 0x518930u: goto label_518930;
        case 0x518934u: goto label_518934;
        case 0x518938u: goto label_518938;
        case 0x51893cu: goto label_51893c;
        default: break;
    }

    ctx->pc = 0x518520u;

label_518520:
    // 0x518520: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x518520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_518524:
    // 0x518524: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x518524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_518528:
    // 0x518528: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x518528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_51852c:
    // 0x51852c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51852cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_518530:
    // 0x518530: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x518530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_518534:
    // 0x518534: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x518534u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_518538:
    // 0x518538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x518538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51853c:
    // 0x51853c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x51853cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_518540:
    // 0x518540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x518540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_518544:
    // 0x518544: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x518544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_518548:
    // 0x518548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x518548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51854c:
    // 0x51854c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x51854cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_518550:
    // 0x518550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518554:
    // 0x518554: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x518554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_518558:
    // 0x518558: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x518558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51855c:
    // 0x51855c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x51855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_518560:
    // 0x518560: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x518560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_518564:
    // 0x518564: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x518564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_518568:
    // 0x518568: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x518568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_51856c:
    // 0x51856c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x51856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_518570:
    // 0x518570: 0xa7a20114  sh          $v0, 0x114($sp)
    ctx->pc = 0x518570u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 276), (uint16_t)GPR_U32(ctx, 2));
label_518574:
    // 0x518574: 0xa7a00110  sh          $zero, 0x110($sp)
    ctx->pc = 0x518574u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 0));
label_518578:
    // 0x518578: 0xa7a00112  sh          $zero, 0x112($sp)
    ctx->pc = 0x518578u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 274), (uint16_t)GPR_U32(ctx, 0));
label_51857c:
    // 0x51857c: 0xc04cbd8  jal         func_132F60
label_518580:
    if (ctx->pc == 0x518580u) {
        ctx->pc = 0x518580u;
            // 0x518580: 0xa7a00116  sh          $zero, 0x116($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x518584u;
        goto label_518584;
    }
    ctx->pc = 0x51857Cu;
    SET_GPR_U32(ctx, 31, 0x518584u);
    ctx->pc = 0x518580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51857Cu;
            // 0x518580: 0xa7a00116  sh          $zero, 0x116($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518584u; }
        if (ctx->pc != 0x518584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518584u; }
        if (ctx->pc != 0x518584u) { return; }
    }
    ctx->pc = 0x518584u;
label_518584:
    // 0x518584: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x518584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_518588:
    // 0x518588: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x518588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_51858c:
    // 0x51858c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51858cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_518590:
    // 0x518590: 0xc04cbd8  jal         func_132F60
label_518594:
    if (ctx->pc == 0x518594u) {
        ctx->pc = 0x518594u;
            // 0x518594: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x518598u;
        goto label_518598;
    }
    ctx->pc = 0x518590u;
    SET_GPR_U32(ctx, 31, 0x518598u);
    ctx->pc = 0x518594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518590u;
            // 0x518594: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518598u; }
        if (ctx->pc != 0x518598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518598u; }
        if (ctx->pc != 0x518598u) { return; }
    }
    ctx->pc = 0x518598u;
label_518598:
    // 0x518598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x518598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51859c:
    // 0x51859c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x51859cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5185a0:
    // 0x5185a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5185a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5185a4:
    // 0x5185a4: 0xc04cbd8  jal         func_132F60
label_5185a8:
    if (ctx->pc == 0x5185A8u) {
        ctx->pc = 0x5185A8u;
            // 0x5185a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5185ACu;
        goto label_5185ac;
    }
    ctx->pc = 0x5185A4u;
    SET_GPR_U32(ctx, 31, 0x5185ACu);
    ctx->pc = 0x5185A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5185A4u;
            // 0x5185a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5185ACu; }
        if (ctx->pc != 0x5185ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5185ACu; }
        if (ctx->pc != 0x5185ACu) { return; }
    }
    ctx->pc = 0x5185ACu;
label_5185ac:
    // 0x5185ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5185acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5185b0:
    // 0x5185b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5185b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5185b4:
    // 0x5185b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5185b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5185b8:
    // 0x5185b8: 0xc04cbd8  jal         func_132F60
label_5185bc:
    if (ctx->pc == 0x5185BCu) {
        ctx->pc = 0x5185BCu;
            // 0x5185bc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5185C0u;
        goto label_5185c0;
    }
    ctx->pc = 0x5185B8u;
    SET_GPR_U32(ctx, 31, 0x5185C0u);
    ctx->pc = 0x5185BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5185B8u;
            // 0x5185bc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5185C0u; }
        if (ctx->pc != 0x5185C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5185C0u; }
        if (ctx->pc != 0x5185C0u) { return; }
    }
    ctx->pc = 0x5185C0u;
label_5185c0:
    // 0x5185c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5185c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5185c4:
    // 0x5185c4: 0x8e030cb4  lw          $v1, 0xCB4($s0)
    ctx->pc = 0x5185c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3252)));
label_5185c8:
    // 0x5185c8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x5185c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_5185cc:
    // 0x5185cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x5185ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_5185d0:
    // 0x5185d0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_5185d4:
    if (ctx->pc == 0x5185D4u) {
        ctx->pc = 0x5185D4u;
            // 0x5185d4: 0x8c90012c  lw          $s0, 0x12C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
        ctx->pc = 0x5185D8u;
        goto label_5185d8;
    }
    ctx->pc = 0x5185D0u;
    {
        const bool branch_taken_0x5185d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x5185D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5185D0u;
            // 0x5185d4: 0x8c90012c  lw          $s0, 0x12C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5185d0) {
            ctx->pc = 0x518600u;
            goto label_518600;
        }
    }
    ctx->pc = 0x5185D8u;
label_5185d8:
    // 0x5185d8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x5185d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5185dc:
    // 0x5185dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5185dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5185e0:
    // 0x5185e0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x5185e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_5185e4:
    // 0x5185e4: 0x320f809  jalr        $t9
label_5185e8:
    if (ctx->pc == 0x5185E8u) {
        ctx->pc = 0x5185E8u;
            // 0x5185e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5185ECu;
        goto label_5185ec;
    }
    ctx->pc = 0x5185E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5185ECu);
        ctx->pc = 0x5185E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5185E4u;
            // 0x5185e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5185ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5185ECu; }
            if (ctx->pc != 0x5185ECu) { return; }
        }
        }
    }
    ctx->pc = 0x5185ECu;
label_5185ec:
    // 0x5185ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5185ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5185f0:
    // 0x5185f0: 0xc077cb4  jal         func_1DF2D0
label_5185f4:
    if (ctx->pc == 0x5185F4u) {
        ctx->pc = 0x5185F4u;
            // 0x5185f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5185F8u;
        goto label_5185f8;
    }
    ctx->pc = 0x5185F0u;
    SET_GPR_U32(ctx, 31, 0x5185F8u);
    ctx->pc = 0x5185F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5185F0u;
            // 0x5185f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF2D0u;
    if (runtime->hasFunction(0x1DF2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DF2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5185F8u; }
        if (ctx->pc != 0x5185F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF2D0_0x1df2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5185F8u; }
        if (ctx->pc != 0x5185F8u) { return; }
    }
    ctx->pc = 0x5185F8u;
label_5185f8:
    // 0x5185f8: 0x10000027  b           . + 4 + (0x27 << 2)
label_5185fc:
    if (ctx->pc == 0x5185FCu) {
        ctx->pc = 0x518600u;
        goto label_518600;
    }
    ctx->pc = 0x5185F8u;
    {
        const bool branch_taken_0x5185f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5185f8) {
            ctx->pc = 0x518698u;
            goto label_518698;
        }
    }
    ctx->pc = 0x518600u;
label_518600:
    // 0x518600: 0x266402d0  addiu       $a0, $s3, 0x2D0
    ctx->pc = 0x518600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 720));
label_518604:
    // 0x518604: 0xc04cc04  jal         func_133010
label_518608:
    if (ctx->pc == 0x518608u) {
        ctx->pc = 0x518608u;
            // 0x518608: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x51860Cu;
        goto label_51860c;
    }
    ctx->pc = 0x518604u;
    SET_GPR_U32(ctx, 31, 0x51860Cu);
    ctx->pc = 0x518608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518604u;
            // 0x518608: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51860Cu; }
        if (ctx->pc != 0x51860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51860Cu; }
        if (ctx->pc != 0x51860Cu) { return; }
    }
    ctx->pc = 0x51860Cu;
label_51860c:
    // 0x51860c: 0x266402c0  addiu       $a0, $s3, 0x2C0
    ctx->pc = 0x51860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_518610:
    // 0x518610: 0xc04cc04  jal         func_133010
label_518614:
    if (ctx->pc == 0x518614u) {
        ctx->pc = 0x518614u;
            // 0x518614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518618u;
        goto label_518618;
    }
    ctx->pc = 0x518610u;
    SET_GPR_U32(ctx, 31, 0x518618u);
    ctx->pc = 0x518614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518610u;
            // 0x518614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518618u; }
        if (ctx->pc != 0x518618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518618u; }
        if (ctx->pc != 0x518618u) { return; }
    }
    ctx->pc = 0x518618u;
label_518618:
    // 0x518618: 0x8e740d74  lw          $s4, 0xD74($s3)
    ctx->pc = 0x518618u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_51861c:
    // 0x51861c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x51861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_518620:
    // 0x518620: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x518620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_518624:
    // 0x518624: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x518624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518628:
    // 0x518628: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x518628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_51862c:
    // 0x51862c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x51862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_518630:
    // 0x518630: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x518630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_518634:
    // 0x518634: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x518634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_518638:
    // 0x518638: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x518638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_51863c:
    // 0x51863c: 0xc0a5444  jal         func_295110
label_518640:
    if (ctx->pc == 0x518640u) {
        ctx->pc = 0x518640u;
            // 0x518640: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x518644u;
        goto label_518644;
    }
    ctx->pc = 0x51863Cu;
    SET_GPR_U32(ctx, 31, 0x518644u);
    ctx->pc = 0x518640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51863Cu;
            // 0x518640: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518644u; }
        if (ctx->pc != 0x518644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518644u; }
        if (ctx->pc != 0x518644u) { return; }
    }
    ctx->pc = 0x518644u;
label_518644:
    // 0x518644: 0xae8002d0  sw          $zero, 0x2D0($s4)
    ctx->pc = 0x518644u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 0));
label_518648:
    // 0x518648: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x518648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_51864c:
    // 0x51864c: 0xae8002d4  sw          $zero, 0x2D4($s4)
    ctx->pc = 0x51864cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 0));
label_518650:
    // 0x518650: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x518650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_518654:
    // 0x518654: 0xae8002d8  sw          $zero, 0x2D8($s4)
    ctx->pc = 0x518654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 0));
label_518658:
    // 0x518658: 0xc075318  jal         func_1D4C60
label_51865c:
    if (ctx->pc == 0x51865Cu) {
        ctx->pc = 0x51865Cu;
            // 0x51865c: 0xae8002dc  sw          $zero, 0x2DC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 732), GPR_U32(ctx, 0));
        ctx->pc = 0x518660u;
        goto label_518660;
    }
    ctx->pc = 0x518658u;
    SET_GPR_U32(ctx, 31, 0x518660u);
    ctx->pc = 0x51865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518658u;
            // 0x51865c: 0xae8002dc  sw          $zero, 0x2DC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518660u; }
        if (ctx->pc != 0x518660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518660u; }
        if (ctx->pc != 0x518660u) { return; }
    }
    ctx->pc = 0x518660u;
label_518660:
    // 0x518660: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x518660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_518664:
    // 0x518664: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x518664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
label_518668:
    // 0x518668: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x518668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51866c:
    // 0x51866c: 0xc0c753c  jal         func_31D4F0
label_518670:
    if (ctx->pc == 0x518670u) {
        ctx->pc = 0x518670u;
            // 0x518670: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x518674u;
        goto label_518674;
    }
    ctx->pc = 0x51866Cu;
    SET_GPR_U32(ctx, 31, 0x518674u);
    ctx->pc = 0x518670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51866Cu;
            // 0x518670: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518674u; }
        if (ctx->pc != 0x518674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518674u; }
        if (ctx->pc != 0x518674u) { return; }
    }
    ctx->pc = 0x518674u;
label_518674:
    // 0x518674: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x518674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_518678:
    // 0x518678: 0x2664092c  addiu       $a0, $s3, 0x92C
    ctx->pc = 0x518678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
label_51867c:
    // 0x51867c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x51867cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_518680:
    // 0x518680: 0xc0c753c  jal         func_31D4F0
label_518684:
    if (ctx->pc == 0x518684u) {
        ctx->pc = 0x518684u;
            // 0x518684: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x518688u;
        goto label_518688;
    }
    ctx->pc = 0x518680u;
    SET_GPR_U32(ctx, 31, 0x518688u);
    ctx->pc = 0x518684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518680u;
            // 0x518684: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518688u; }
        if (ctx->pc != 0x518688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518688u; }
        if (ctx->pc != 0x518688u) { return; }
    }
    ctx->pc = 0x518688u;
label_518688:
    // 0x518688: 0xc0b9210  jal         func_2E4840
label_51868c:
    if (ctx->pc == 0x51868Cu) {
        ctx->pc = 0x51868Cu;
            // 0x51868c: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->pc = 0x518690u;
        goto label_518690;
    }
    ctx->pc = 0x518688u;
    SET_GPR_U32(ctx, 31, 0x518690u);
    ctx->pc = 0x51868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518688u;
            // 0x51868c: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518690u; }
        if (ctx->pc != 0x518690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518690u; }
        if (ctx->pc != 0x518690u) { return; }
    }
    ctx->pc = 0x518690u;
label_518690:
    // 0x518690: 0xc0b9210  jal         func_2E4840
label_518694:
    if (ctx->pc == 0x518694u) {
        ctx->pc = 0x518694u;
            // 0x518694: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->pc = 0x518698u;
        goto label_518698;
    }
    ctx->pc = 0x518690u;
    SET_GPR_U32(ctx, 31, 0x518698u);
    ctx->pc = 0x518694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518690u;
            // 0x518694: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518698u; }
        if (ctx->pc != 0x518698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518698u; }
        if (ctx->pc != 0x518698u) { return; }
    }
    ctx->pc = 0x518698u;
label_518698:
    // 0x518698: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
label_51869c:
    if (ctx->pc == 0x51869Cu) {
        ctx->pc = 0x51869Cu;
            // 0x51869c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5186A0u;
        goto label_5186a0;
    }
    ctx->pc = 0x518698u;
    {
        const bool branch_taken_0x518698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x518698) {
            ctx->pc = 0x51869Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518698u;
            // 0x51869c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5186C4u;
            goto label_5186c4;
        }
    }
    ctx->pc = 0x5186A0u;
label_5186a0:
    // 0x5186a0: 0xc0761d4  jal         func_1D8750
label_5186a4:
    if (ctx->pc == 0x5186A4u) {
        ctx->pc = 0x5186A4u;
            // 0x5186a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5186A8u;
        goto label_5186a8;
    }
    ctx->pc = 0x5186A0u;
    SET_GPR_U32(ctx, 31, 0x5186A8u);
    ctx->pc = 0x5186A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5186A0u;
            // 0x5186a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186A8u; }
        if (ctx->pc != 0x5186A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186A8u; }
        if (ctx->pc != 0x5186A8u) { return; }
    }
    ctx->pc = 0x5186A8u;
label_5186a8:
    // 0x5186a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5186a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5186ac:
    // 0x5186ac: 0xc07626c  jal         func_1D89B0
label_5186b0:
    if (ctx->pc == 0x5186B0u) {
        ctx->pc = 0x5186B0u;
            // 0x5186b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5186B4u;
        goto label_5186b4;
    }
    ctx->pc = 0x5186ACu;
    SET_GPR_U32(ctx, 31, 0x5186B4u);
    ctx->pc = 0x5186B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5186ACu;
            // 0x5186b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186B4u; }
        if (ctx->pc != 0x5186B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186B4u; }
        if (ctx->pc != 0x5186B4u) { return; }
    }
    ctx->pc = 0x5186B4u;
label_5186b4:
    // 0x5186b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5186b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5186b8:
    // 0x5186b8: 0xc07626c  jal         func_1D89B0
label_5186bc:
    if (ctx->pc == 0x5186BCu) {
        ctx->pc = 0x5186BCu;
            // 0x5186bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5186C0u;
        goto label_5186c0;
    }
    ctx->pc = 0x5186B8u;
    SET_GPR_U32(ctx, 31, 0x5186C0u);
    ctx->pc = 0x5186BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5186B8u;
            // 0x5186bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186C0u; }
        if (ctx->pc != 0x5186C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186C0u; }
        if (ctx->pc != 0x5186C0u) { return; }
    }
    ctx->pc = 0x5186C0u;
label_5186c0:
    // 0x5186c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5186c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5186c4:
    // 0x5186c4: 0x26640410  addiu       $a0, $s3, 0x410
    ctx->pc = 0x5186c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1040));
label_5186c8:
    // 0x5186c8: 0xc04a508  jal         func_129420
label_5186cc:
    if (ctx->pc == 0x5186CCu) {
        ctx->pc = 0x5186CCu;
            // 0x5186cc: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x5186D0u;
        goto label_5186d0;
    }
    ctx->pc = 0x5186C8u;
    SET_GPR_U32(ctx, 31, 0x5186D0u);
    ctx->pc = 0x5186CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5186C8u;
            // 0x5186cc: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186D0u; }
        if (ctx->pc != 0x5186D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186D0u; }
        if (ctx->pc != 0x5186D0u) { return; }
    }
    ctx->pc = 0x5186D0u;
label_5186d0:
    // 0x5186d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5186d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5186d4:
    // 0x5186d4: 0x26650c6c  addiu       $a1, $s3, 0xC6C
    ctx->pc = 0x5186d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3180));
label_5186d8:
    // 0x5186d8: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x5186d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_5186dc:
    // 0x5186dc: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x5186dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_5186e0:
    // 0x5186e0: 0x26670820  addiu       $a3, $s3, 0x820
    ctx->pc = 0x5186e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_5186e4:
    // 0x5186e4: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x5186e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_5186e8:
    // 0x5186e8: 0xc0c614c  jal         func_318530
label_5186ec:
    if (ctx->pc == 0x5186ECu) {
        ctx->pc = 0x5186ECu;
            // 0x5186ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5186F0u;
        goto label_5186f0;
    }
    ctx->pc = 0x5186E8u;
    SET_GPR_U32(ctx, 31, 0x5186F0u);
    ctx->pc = 0x5186ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5186E8u;
            // 0x5186ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186F0u; }
        if (ctx->pc != 0x5186F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5186F0u; }
        if (ctx->pc != 0x5186F0u) { return; }
    }
    ctx->pc = 0x5186F0u;
label_5186f0:
    // 0x5186f0: 0x96630c7e  lhu         $v1, 0xC7E($s3)
    ctx->pc = 0x5186f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3198)));
label_5186f4:
    // 0x5186f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5186f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5186f8:
    // 0x5186f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5186f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5186fc:
    // 0x5186fc: 0xa663119c  sh          $v1, 0x119C($s3)
    ctx->pc = 0x5186fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4508), (uint16_t)GPR_U32(ctx, 3));
label_518700:
    // 0x518700: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x518700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_518704:
    // 0x518704: 0x9665119c  lhu         $a1, 0x119C($s3)
    ctx->pc = 0x518704u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4508)));
label_518708:
    // 0x518708: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x518708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_51870c:
    // 0x51870c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x51870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_518710:
    // 0x518710: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x518710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_518714:
    // 0x518714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x518714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_518718:
    // 0x518718: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x518718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_51871c:
    // 0x51871c: 0xa3a3012f  sb          $v1, 0x12F($sp)
    ctx->pc = 0x51871cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 3));
label_518720:
    // 0x518720: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x518720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_518724:
    // 0x518724: 0x93a6012f  lbu         $a2, 0x12F($sp)
    ctx->pc = 0x518724u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 303)));
label_518728:
    // 0x518728: 0xc0b89e4  jal         func_2E2790
label_51872c:
    if (ctx->pc == 0x51872Cu) {
        ctx->pc = 0x51872Cu;
            // 0x51872c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x518730u;
        goto label_518730;
    }
    ctx->pc = 0x518728u;
    SET_GPR_U32(ctx, 31, 0x518730u);
    ctx->pc = 0x51872Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518728u;
            // 0x51872c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518730u; }
        if (ctx->pc != 0x518730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518730u; }
        if (ctx->pc != 0x518730u) { return; }
    }
    ctx->pc = 0x518730u;
label_518730:
    // 0x518730: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x518730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_518734:
    // 0x518734: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x518734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_518738:
    // 0x518738: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x518738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51873c:
    // 0x51873c: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x51873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_518740:
    // 0x518740: 0xc0b82c4  jal         func_2E0B10
label_518744:
    if (ctx->pc == 0x518744u) {
        ctx->pc = 0x518744u;
            // 0x518744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518748u;
        goto label_518748;
    }
    ctx->pc = 0x518740u;
    SET_GPR_U32(ctx, 31, 0x518748u);
    ctx->pc = 0x518744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518740u;
            // 0x518744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518748u; }
        if (ctx->pc != 0x518748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518748u; }
        if (ctx->pc != 0x518748u) { return; }
    }
    ctx->pc = 0x518748u;
label_518748:
    // 0x518748: 0x97a20116  lhu         $v0, 0x116($sp)
    ctx->pc = 0x518748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 278)));
label_51874c:
    // 0x51874c: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_518750:
    if (ctx->pc == 0x518750u) {
        ctx->pc = 0x518750u;
            // 0x518750: 0x8e640d78  lw          $a0, 0xD78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
        ctx->pc = 0x518754u;
        goto label_518754;
    }
    ctx->pc = 0x51874Cu;
    {
        const bool branch_taken_0x51874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51874c) {
            ctx->pc = 0x518750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51874Cu;
            // 0x518750: 0x8e640d78  lw          $a0, 0xD78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51888Cu;
            goto label_51888c;
        }
    }
    ctx->pc = 0x518754u;
label_518754:
    // 0x518754: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x518754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_518758:
    // 0x518758: 0xc04cc04  jal         func_133010
label_51875c:
    if (ctx->pc == 0x51875Cu) {
        ctx->pc = 0x51875Cu;
            // 0x51875c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x518760u;
        goto label_518760;
    }
    ctx->pc = 0x518758u;
    SET_GPR_U32(ctx, 31, 0x518760u);
    ctx->pc = 0x51875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518758u;
            // 0x51875c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518760u; }
        if (ctx->pc != 0x518760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518760u; }
        if (ctx->pc != 0x518760u) { return; }
    }
    ctx->pc = 0x518760u;
label_518760:
    // 0x518760: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x518760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_518764:
    // 0x518764: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x518764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_518768:
    // 0x518768: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x518768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51876c:
    // 0x51876c: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x51876cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_518770:
    // 0x518770: 0xc04cc7c  jal         func_1331F0
label_518774:
    if (ctx->pc == 0x518774u) {
        ctx->pc = 0x518774u;
            // 0x518774: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x518778u;
        goto label_518778;
    }
    ctx->pc = 0x518770u;
    SET_GPR_U32(ctx, 31, 0x518778u);
    ctx->pc = 0x518774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518770u;
            // 0x518774: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518778u; }
        if (ctx->pc != 0x518778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518778u; }
        if (ctx->pc != 0x518778u) { return; }
    }
    ctx->pc = 0x518778u;
label_518778:
    // 0x518778: 0x3c024118  lui         $v0, 0x4118
    ctx->pc = 0x518778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16664 << 16));
label_51877c:
    // 0x51877c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x51877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_518780:
    // 0x518780: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x518780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_518784:
    // 0x518784: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x518784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_518788:
    // 0x518788: 0xc04cc7c  jal         func_1331F0
label_51878c:
    if (ctx->pc == 0x51878Cu) {
        ctx->pc = 0x51878Cu;
            // 0x51878c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518790u;
        goto label_518790;
    }
    ctx->pc = 0x518788u;
    SET_GPR_U32(ctx, 31, 0x518790u);
    ctx->pc = 0x51878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518788u;
            // 0x51878c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518790u; }
        if (ctx->pc != 0x518790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518790u; }
        if (ctx->pc != 0x518790u) { return; }
    }
    ctx->pc = 0x518790u;
label_518790:
    // 0x518790: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x518790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_518794:
    // 0x518794: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x518794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_518798:
    // 0x518798: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x518798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_51879c:
    // 0x51879c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x51879cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_5187a0:
    // 0x5187a0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x5187a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5187a4:
    // 0x5187a4: 0xc0d16dc  jal         func_345B70
label_5187a8:
    if (ctx->pc == 0x5187A8u) {
        ctx->pc = 0x5187A8u;
            // 0x5187a8: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x5187ACu;
        goto label_5187ac;
    }
    ctx->pc = 0x5187A4u;
    SET_GPR_U32(ctx, 31, 0x5187ACu);
    ctx->pc = 0x5187A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5187A4u;
            // 0x5187a8: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5187ACu; }
        if (ctx->pc != 0x5187ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5187ACu; }
        if (ctx->pc != 0x5187ACu) { return; }
    }
    ctx->pc = 0x5187ACu;
label_5187ac:
    // 0x5187ac: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x5187acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_5187b0:
    // 0x5187b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x5187b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_5187b4:
    // 0x5187b4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_5187b8:
    if (ctx->pc == 0x5187B8u) {
        ctx->pc = 0x5187BCu;
        goto label_5187bc;
    }
    ctx->pc = 0x5187B4u;
    {
        const bool branch_taken_0x5187b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5187b4) {
            ctx->pc = 0x518888u;
            goto label_518888;
        }
    }
    ctx->pc = 0x5187BCu;
label_5187bc:
    // 0x5187bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x5187bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_5187c0:
    // 0x5187c0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_5187c4:
    if (ctx->pc == 0x5187C4u) {
        ctx->pc = 0x5187C8u;
        goto label_5187c8;
    }
    ctx->pc = 0x5187C0u;
    {
        const bool branch_taken_0x5187c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5187c0) {
            ctx->pc = 0x518888u;
            goto label_518888;
        }
    }
    ctx->pc = 0x5187C8u;
label_5187c8:
    // 0x5187c8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x5187c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_5187cc:
    // 0x5187cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5187ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5187d0:
    // 0x5187d0: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_5187d4:
    if (ctx->pc == 0x5187D4u) {
        ctx->pc = 0x5187D8u;
        goto label_5187d8;
    }
    ctx->pc = 0x5187D0u;
    {
        const bool branch_taken_0x5187d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5187d0) {
            ctx->pc = 0x518888u;
            goto label_518888;
        }
    }
    ctx->pc = 0x5187D8u;
label_5187d8:
    // 0x5187d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5187d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5187dc:
    // 0x5187dc: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_5187e0:
    if (ctx->pc == 0x5187E0u) {
        ctx->pc = 0x5187E4u;
        goto label_5187e4;
    }
    ctx->pc = 0x5187DCu;
    {
        const bool branch_taken_0x5187dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5187dc) {
            ctx->pc = 0x518888u;
            goto label_518888;
        }
    }
    ctx->pc = 0x5187E4u;
label_5187e4:
    // 0x5187e4: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x5187e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_5187e8:
    // 0x5187e8: 0xc075318  jal         func_1D4C60
label_5187ec:
    if (ctx->pc == 0x5187ECu) {
        ctx->pc = 0x5187ECu;
            // 0x5187ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5187F0u;
        goto label_5187f0;
    }
    ctx->pc = 0x5187E8u;
    SET_GPR_U32(ctx, 31, 0x5187F0u);
    ctx->pc = 0x5187ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5187E8u;
            // 0x5187ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5187F0u; }
        if (ctx->pc != 0x5187F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5187F0u; }
        if (ctx->pc != 0x5187F0u) { return; }
    }
    ctx->pc = 0x5187F0u;
label_5187f0:
    // 0x5187f0: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x5187f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_5187f4:
    // 0x5187f4: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x5187f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_5187f8:
    // 0x5187f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5187f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5187fc:
    // 0x5187fc: 0xc0c6250  jal         func_318940
label_518800:
    if (ctx->pc == 0x518800u) {
        ctx->pc = 0x518800u;
            // 0x518800: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518804u;
        goto label_518804;
    }
    ctx->pc = 0x5187FCu;
    SET_GPR_U32(ctx, 31, 0x518804u);
    ctx->pc = 0x518800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5187FCu;
            // 0x518800: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518804u; }
        if (ctx->pc != 0x518804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518804u; }
        if (ctx->pc != 0x518804u) { return; }
    }
    ctx->pc = 0x518804u;
label_518804:
    // 0x518804: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x518804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_518808:
    // 0x518808: 0x266408f0  addiu       $a0, $s3, 0x8F0
    ctx->pc = 0x518808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2288));
label_51880c:
    // 0x51880c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51880cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_518810:
    // 0x518810: 0xc0c6250  jal         func_318940
label_518814:
    if (ctx->pc == 0x518814u) {
        ctx->pc = 0x518814u;
            // 0x518814: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518818u;
        goto label_518818;
    }
    ctx->pc = 0x518810u;
    SET_GPR_U32(ctx, 31, 0x518818u);
    ctx->pc = 0x518814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518810u;
            // 0x518814: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518818u; }
        if (ctx->pc != 0x518818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518818u; }
        if (ctx->pc != 0x518818u) { return; }
    }
    ctx->pc = 0x518818u;
label_518818:
    // 0x518818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x518818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51881c:
    // 0x51881c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x51881cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_518820:
    // 0x518820: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x518820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_518824:
    // 0x518824: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x518824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_518828:
    // 0x518828: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x518828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51882c:
    // 0x51882c: 0x266405f0  addiu       $a0, $s3, 0x5F0
    ctx->pc = 0x51882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1520));
label_518830:
    // 0x518830: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x518830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_518834:
    // 0x518834: 0x26670820  addiu       $a3, $s3, 0x820
    ctx->pc = 0x518834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_518838:
    // 0x518838: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x518838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_51883c:
    // 0x51883c: 0x27a9012f  addiu       $t1, $sp, 0x12F
    ctx->pc = 0x51883cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 303));
label_518840:
    // 0x518840: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x518840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_518844:
    // 0x518844: 0xc0b8704  jal         func_2E1C10
label_518848:
    if (ctx->pc == 0x518848u) {
        ctx->pc = 0x518848u;
            // 0x518848: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51884Cu;
        goto label_51884c;
    }
    ctx->pc = 0x518844u;
    SET_GPR_U32(ctx, 31, 0x51884Cu);
    ctx->pc = 0x518848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518844u;
            // 0x518848: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51884Cu; }
        if (ctx->pc != 0x51884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51884Cu; }
        if (ctx->pc != 0x51884Cu) { return; }
    }
    ctx->pc = 0x51884Cu;
label_51884c:
    // 0x51884c: 0x26710560  addiu       $s1, $s3, 0x560
    ctx->pc = 0x51884cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_518850:
    // 0x518850: 0x26700580  addiu       $s0, $s3, 0x580
    ctx->pc = 0x518850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_518854:
    // 0x518854: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x518854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_518858:
    // 0x518858: 0xc04c74c  jal         func_131D30
label_51885c:
    if (ctx->pc == 0x51885Cu) {
        ctx->pc = 0x51885Cu;
            // 0x51885c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518860u;
        goto label_518860;
    }
    ctx->pc = 0x518858u;
    SET_GPR_U32(ctx, 31, 0x518860u);
    ctx->pc = 0x51885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518858u;
            // 0x51885c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518860u; }
        if (ctx->pc != 0x518860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518860u; }
        if (ctx->pc != 0x518860u) { return; }
    }
    ctx->pc = 0x518860u;
label_518860:
    // 0x518860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x518860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518864:
    // 0x518864: 0xc04f278  jal         func_13C9E0
label_518868:
    if (ctx->pc == 0x518868u) {
        ctx->pc = 0x518868u;
            // 0x518868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51886Cu;
        goto label_51886c;
    }
    ctx->pc = 0x518864u;
    SET_GPR_U32(ctx, 31, 0x51886Cu);
    ctx->pc = 0x518868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518864u;
            // 0x518868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51886Cu; }
        if (ctx->pc != 0x51886Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51886Cu; }
        if (ctx->pc != 0x51886Cu) { return; }
    }
    ctx->pc = 0x51886Cu;
label_51886c:
    // 0x51886c: 0xc0b9210  jal         func_2E4840
label_518870:
    if (ctx->pc == 0x518870u) {
        ctx->pc = 0x518870u;
            // 0x518870: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->pc = 0x518874u;
        goto label_518874;
    }
    ctx->pc = 0x51886Cu;
    SET_GPR_U32(ctx, 31, 0x518874u);
    ctx->pc = 0x518870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51886Cu;
            // 0x518870: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518874u; }
        if (ctx->pc != 0x518874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518874u; }
        if (ctx->pc != 0x518874u) { return; }
    }
    ctx->pc = 0x518874u;
label_518874:
    // 0x518874: 0xc0b9210  jal         func_2E4840
label_518878:
    if (ctx->pc == 0x518878u) {
        ctx->pc = 0x518878u;
            // 0x518878: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->pc = 0x51887Cu;
        goto label_51887c;
    }
    ctx->pc = 0x518874u;
    SET_GPR_U32(ctx, 31, 0x51887Cu);
    ctx->pc = 0x518878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518874u;
            // 0x518878: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51887Cu; }
        if (ctx->pc != 0x51887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51887Cu; }
        if (ctx->pc != 0x51887Cu) { return; }
    }
    ctx->pc = 0x51887Cu;
label_51887c:
    // 0x51887c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518880:
    // 0x518880: 0xc0ab808  jal         func_2AE020
label_518884:
    if (ctx->pc == 0x518884u) {
        ctx->pc = 0x518884u;
            // 0x518884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x518888u;
        goto label_518888;
    }
    ctx->pc = 0x518880u;
    SET_GPR_U32(ctx, 31, 0x518888u);
    ctx->pc = 0x518884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518880u;
            // 0x518884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518888u; }
        if (ctx->pc != 0x518888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518888u; }
        if (ctx->pc != 0x518888u) { return; }
    }
    ctx->pc = 0x518888u;
label_518888:
    // 0x518888: 0x8e640d78  lw          $a0, 0xD78($s3)
    ctx->pc = 0x518888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_51888c:
    // 0x51888c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51888cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_518890:
    // 0x518890: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x518890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_518894:
    // 0x518894: 0x320f809  jalr        $t9
label_518898:
    if (ctx->pc == 0x518898u) {
        ctx->pc = 0x51889Cu;
        goto label_51889c;
    }
    ctx->pc = 0x518894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51889Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51889Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51889Cu; }
            if (ctx->pc != 0x51889Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51889Cu;
label_51889c:
    // 0x51889c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51889cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5188a0:
    // 0x5188a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5188a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5188a4:
    // 0x5188a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5188a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5188a8:
    // 0x5188a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5188a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5188ac:
    // 0x5188ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5188acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5188b0:
    // 0x5188b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5188b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5188b4:
    // 0x5188b4: 0x3e00008  jr          $ra
label_5188b8:
    if (ctx->pc == 0x5188B8u) {
        ctx->pc = 0x5188B8u;
            // 0x5188b8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x5188BCu;
        goto label_5188bc;
    }
    ctx->pc = 0x5188B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5188B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5188B4u;
            // 0x5188b8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5188BCu;
label_5188bc:
    // 0x5188bc: 0x0  nop
    ctx->pc = 0x5188bcu;
    // NOP
label_5188c0:
    // 0x5188c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5188c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5188c4:
    // 0x5188c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5188c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5188c8:
    // 0x5188c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5188c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5188cc:
    // 0x5188cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5188ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5188d0:
    // 0x5188d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5188d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5188d4:
    // 0x5188d4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_5188d8:
    if (ctx->pc == 0x5188D8u) {
        ctx->pc = 0x5188D8u;
            // 0x5188d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5188DCu;
        goto label_5188dc;
    }
    ctx->pc = 0x5188D4u;
    {
        const bool branch_taken_0x5188d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5188D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5188D4u;
            // 0x5188d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5188d4) {
            ctx->pc = 0x518914u;
            goto label_518914;
        }
    }
    ctx->pc = 0x5188DCu;
label_5188dc:
    // 0x5188dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5188dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5188e0:
    // 0x5188e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5188e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5188e4:
    // 0x5188e4: 0x24635650  addiu       $v1, $v1, 0x5650
    ctx->pc = 0x5188e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22096));
label_5188e8:
    // 0x5188e8: 0x24425678  addiu       $v0, $v0, 0x5678
    ctx->pc = 0x5188e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22136));
label_5188ec:
    // 0x5188ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5188ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_5188f0:
    // 0x5188f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5188f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5188f4:
    // 0x5188f4: 0xc07861c  jal         func_1E1870
label_5188f8:
    if (ctx->pc == 0x5188F8u) {
        ctx->pc = 0x5188F8u;
            // 0x5188f8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x5188FCu;
        goto label_5188fc;
    }
    ctx->pc = 0x5188F4u;
    SET_GPR_U32(ctx, 31, 0x5188FCu);
    ctx->pc = 0x5188F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5188F4u;
            // 0x5188f8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1870u;
    if (runtime->hasFunction(0x1E1870u)) {
        auto targetFn = runtime->lookupFunction(0x1E1870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5188FCu; }
        if (ctx->pc != 0x5188FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1870_0x1e1870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5188FCu; }
        if (ctx->pc != 0x5188FCu) { return; }
    }
    ctx->pc = 0x5188FCu;
label_5188fc:
    // 0x5188fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5188fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_518900:
    // 0x518900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x518900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_518904:
    // 0x518904: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_518908:
    if (ctx->pc == 0x518908u) {
        ctx->pc = 0x518908u;
            // 0x518908: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51890Cu;
        goto label_51890c;
    }
    ctx->pc = 0x518904u;
    {
        const bool branch_taken_0x518904 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x518904) {
            ctx->pc = 0x518908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518904u;
            // 0x518908: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518918u;
            goto label_518918;
        }
    }
    ctx->pc = 0x51890Cu;
label_51890c:
    // 0x51890c: 0xc0400a8  jal         func_1002A0
label_518910:
    if (ctx->pc == 0x518910u) {
        ctx->pc = 0x518910u;
            // 0x518910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518914u;
        goto label_518914;
    }
    ctx->pc = 0x51890Cu;
    SET_GPR_U32(ctx, 31, 0x518914u);
    ctx->pc = 0x518910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51890Cu;
            // 0x518910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518914u; }
        if (ctx->pc != 0x518914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518914u; }
        if (ctx->pc != 0x518914u) { return; }
    }
    ctx->pc = 0x518914u;
label_518914:
    // 0x518914: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x518914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_518918:
    // 0x518918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x518918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_51891c:
    // 0x51891c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51891cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_518920:
    // 0x518920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_518924:
    // 0x518924: 0x3e00008  jr          $ra
label_518928:
    if (ctx->pc == 0x518928u) {
        ctx->pc = 0x518928u;
            // 0x518928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51892Cu;
        goto label_51892c;
    }
    ctx->pc = 0x518924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518924u;
            // 0x518928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51892Cu;
label_51892c:
    // 0x51892c: 0x0  nop
    ctx->pc = 0x51892cu;
    // NOP
label_518930:
    // 0x518930: 0x8146230  j           func_5188C0
label_518934:
    if (ctx->pc == 0x518934u) {
        ctx->pc = 0x518934u;
            // 0x518934: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x518938u;
        goto label_518938;
    }
    ctx->pc = 0x518930u;
    ctx->pc = 0x518934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518930u;
            // 0x518934: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5188C0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_5188c0;
    ctx->pc = 0x518938u;
label_518938:
    // 0x518938: 0x0  nop
    ctx->pc = 0x518938u;
    // NOP
label_51893c:
    // 0x51893c: 0x0  nop
    ctx->pc = 0x51893cu;
    // NOP
}
