#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00523350
// Address: 0x523350 - 0x5237f0
void sub_00523350_0x523350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00523350_0x523350");
#endif

    switch (ctx->pc) {
        case 0x523350u: goto label_523350;
        case 0x523354u: goto label_523354;
        case 0x523358u: goto label_523358;
        case 0x52335cu: goto label_52335c;
        case 0x523360u: goto label_523360;
        case 0x523364u: goto label_523364;
        case 0x523368u: goto label_523368;
        case 0x52336cu: goto label_52336c;
        case 0x523370u: goto label_523370;
        case 0x523374u: goto label_523374;
        case 0x523378u: goto label_523378;
        case 0x52337cu: goto label_52337c;
        case 0x523380u: goto label_523380;
        case 0x523384u: goto label_523384;
        case 0x523388u: goto label_523388;
        case 0x52338cu: goto label_52338c;
        case 0x523390u: goto label_523390;
        case 0x523394u: goto label_523394;
        case 0x523398u: goto label_523398;
        case 0x52339cu: goto label_52339c;
        case 0x5233a0u: goto label_5233a0;
        case 0x5233a4u: goto label_5233a4;
        case 0x5233a8u: goto label_5233a8;
        case 0x5233acu: goto label_5233ac;
        case 0x5233b0u: goto label_5233b0;
        case 0x5233b4u: goto label_5233b4;
        case 0x5233b8u: goto label_5233b8;
        case 0x5233bcu: goto label_5233bc;
        case 0x5233c0u: goto label_5233c0;
        case 0x5233c4u: goto label_5233c4;
        case 0x5233c8u: goto label_5233c8;
        case 0x5233ccu: goto label_5233cc;
        case 0x5233d0u: goto label_5233d0;
        case 0x5233d4u: goto label_5233d4;
        case 0x5233d8u: goto label_5233d8;
        case 0x5233dcu: goto label_5233dc;
        case 0x5233e0u: goto label_5233e0;
        case 0x5233e4u: goto label_5233e4;
        case 0x5233e8u: goto label_5233e8;
        case 0x5233ecu: goto label_5233ec;
        case 0x5233f0u: goto label_5233f0;
        case 0x5233f4u: goto label_5233f4;
        case 0x5233f8u: goto label_5233f8;
        case 0x5233fcu: goto label_5233fc;
        case 0x523400u: goto label_523400;
        case 0x523404u: goto label_523404;
        case 0x523408u: goto label_523408;
        case 0x52340cu: goto label_52340c;
        case 0x523410u: goto label_523410;
        case 0x523414u: goto label_523414;
        case 0x523418u: goto label_523418;
        case 0x52341cu: goto label_52341c;
        case 0x523420u: goto label_523420;
        case 0x523424u: goto label_523424;
        case 0x523428u: goto label_523428;
        case 0x52342cu: goto label_52342c;
        case 0x523430u: goto label_523430;
        case 0x523434u: goto label_523434;
        case 0x523438u: goto label_523438;
        case 0x52343cu: goto label_52343c;
        case 0x523440u: goto label_523440;
        case 0x523444u: goto label_523444;
        case 0x523448u: goto label_523448;
        case 0x52344cu: goto label_52344c;
        case 0x523450u: goto label_523450;
        case 0x523454u: goto label_523454;
        case 0x523458u: goto label_523458;
        case 0x52345cu: goto label_52345c;
        case 0x523460u: goto label_523460;
        case 0x523464u: goto label_523464;
        case 0x523468u: goto label_523468;
        case 0x52346cu: goto label_52346c;
        case 0x523470u: goto label_523470;
        case 0x523474u: goto label_523474;
        case 0x523478u: goto label_523478;
        case 0x52347cu: goto label_52347c;
        case 0x523480u: goto label_523480;
        case 0x523484u: goto label_523484;
        case 0x523488u: goto label_523488;
        case 0x52348cu: goto label_52348c;
        case 0x523490u: goto label_523490;
        case 0x523494u: goto label_523494;
        case 0x523498u: goto label_523498;
        case 0x52349cu: goto label_52349c;
        case 0x5234a0u: goto label_5234a0;
        case 0x5234a4u: goto label_5234a4;
        case 0x5234a8u: goto label_5234a8;
        case 0x5234acu: goto label_5234ac;
        case 0x5234b0u: goto label_5234b0;
        case 0x5234b4u: goto label_5234b4;
        case 0x5234b8u: goto label_5234b8;
        case 0x5234bcu: goto label_5234bc;
        case 0x5234c0u: goto label_5234c0;
        case 0x5234c4u: goto label_5234c4;
        case 0x5234c8u: goto label_5234c8;
        case 0x5234ccu: goto label_5234cc;
        case 0x5234d0u: goto label_5234d0;
        case 0x5234d4u: goto label_5234d4;
        case 0x5234d8u: goto label_5234d8;
        case 0x5234dcu: goto label_5234dc;
        case 0x5234e0u: goto label_5234e0;
        case 0x5234e4u: goto label_5234e4;
        case 0x5234e8u: goto label_5234e8;
        case 0x5234ecu: goto label_5234ec;
        case 0x5234f0u: goto label_5234f0;
        case 0x5234f4u: goto label_5234f4;
        case 0x5234f8u: goto label_5234f8;
        case 0x5234fcu: goto label_5234fc;
        case 0x523500u: goto label_523500;
        case 0x523504u: goto label_523504;
        case 0x523508u: goto label_523508;
        case 0x52350cu: goto label_52350c;
        case 0x523510u: goto label_523510;
        case 0x523514u: goto label_523514;
        case 0x523518u: goto label_523518;
        case 0x52351cu: goto label_52351c;
        case 0x523520u: goto label_523520;
        case 0x523524u: goto label_523524;
        case 0x523528u: goto label_523528;
        case 0x52352cu: goto label_52352c;
        case 0x523530u: goto label_523530;
        case 0x523534u: goto label_523534;
        case 0x523538u: goto label_523538;
        case 0x52353cu: goto label_52353c;
        case 0x523540u: goto label_523540;
        case 0x523544u: goto label_523544;
        case 0x523548u: goto label_523548;
        case 0x52354cu: goto label_52354c;
        case 0x523550u: goto label_523550;
        case 0x523554u: goto label_523554;
        case 0x523558u: goto label_523558;
        case 0x52355cu: goto label_52355c;
        case 0x523560u: goto label_523560;
        case 0x523564u: goto label_523564;
        case 0x523568u: goto label_523568;
        case 0x52356cu: goto label_52356c;
        case 0x523570u: goto label_523570;
        case 0x523574u: goto label_523574;
        case 0x523578u: goto label_523578;
        case 0x52357cu: goto label_52357c;
        case 0x523580u: goto label_523580;
        case 0x523584u: goto label_523584;
        case 0x523588u: goto label_523588;
        case 0x52358cu: goto label_52358c;
        case 0x523590u: goto label_523590;
        case 0x523594u: goto label_523594;
        case 0x523598u: goto label_523598;
        case 0x52359cu: goto label_52359c;
        case 0x5235a0u: goto label_5235a0;
        case 0x5235a4u: goto label_5235a4;
        case 0x5235a8u: goto label_5235a8;
        case 0x5235acu: goto label_5235ac;
        case 0x5235b0u: goto label_5235b0;
        case 0x5235b4u: goto label_5235b4;
        case 0x5235b8u: goto label_5235b8;
        case 0x5235bcu: goto label_5235bc;
        case 0x5235c0u: goto label_5235c0;
        case 0x5235c4u: goto label_5235c4;
        case 0x5235c8u: goto label_5235c8;
        case 0x5235ccu: goto label_5235cc;
        case 0x5235d0u: goto label_5235d0;
        case 0x5235d4u: goto label_5235d4;
        case 0x5235d8u: goto label_5235d8;
        case 0x5235dcu: goto label_5235dc;
        case 0x5235e0u: goto label_5235e0;
        case 0x5235e4u: goto label_5235e4;
        case 0x5235e8u: goto label_5235e8;
        case 0x5235ecu: goto label_5235ec;
        case 0x5235f0u: goto label_5235f0;
        case 0x5235f4u: goto label_5235f4;
        case 0x5235f8u: goto label_5235f8;
        case 0x5235fcu: goto label_5235fc;
        case 0x523600u: goto label_523600;
        case 0x523604u: goto label_523604;
        case 0x523608u: goto label_523608;
        case 0x52360cu: goto label_52360c;
        case 0x523610u: goto label_523610;
        case 0x523614u: goto label_523614;
        case 0x523618u: goto label_523618;
        case 0x52361cu: goto label_52361c;
        case 0x523620u: goto label_523620;
        case 0x523624u: goto label_523624;
        case 0x523628u: goto label_523628;
        case 0x52362cu: goto label_52362c;
        case 0x523630u: goto label_523630;
        case 0x523634u: goto label_523634;
        case 0x523638u: goto label_523638;
        case 0x52363cu: goto label_52363c;
        case 0x523640u: goto label_523640;
        case 0x523644u: goto label_523644;
        case 0x523648u: goto label_523648;
        case 0x52364cu: goto label_52364c;
        case 0x523650u: goto label_523650;
        case 0x523654u: goto label_523654;
        case 0x523658u: goto label_523658;
        case 0x52365cu: goto label_52365c;
        case 0x523660u: goto label_523660;
        case 0x523664u: goto label_523664;
        case 0x523668u: goto label_523668;
        case 0x52366cu: goto label_52366c;
        case 0x523670u: goto label_523670;
        case 0x523674u: goto label_523674;
        case 0x523678u: goto label_523678;
        case 0x52367cu: goto label_52367c;
        case 0x523680u: goto label_523680;
        case 0x523684u: goto label_523684;
        case 0x523688u: goto label_523688;
        case 0x52368cu: goto label_52368c;
        case 0x523690u: goto label_523690;
        case 0x523694u: goto label_523694;
        case 0x523698u: goto label_523698;
        case 0x52369cu: goto label_52369c;
        case 0x5236a0u: goto label_5236a0;
        case 0x5236a4u: goto label_5236a4;
        case 0x5236a8u: goto label_5236a8;
        case 0x5236acu: goto label_5236ac;
        case 0x5236b0u: goto label_5236b0;
        case 0x5236b4u: goto label_5236b4;
        case 0x5236b8u: goto label_5236b8;
        case 0x5236bcu: goto label_5236bc;
        case 0x5236c0u: goto label_5236c0;
        case 0x5236c4u: goto label_5236c4;
        case 0x5236c8u: goto label_5236c8;
        case 0x5236ccu: goto label_5236cc;
        case 0x5236d0u: goto label_5236d0;
        case 0x5236d4u: goto label_5236d4;
        case 0x5236d8u: goto label_5236d8;
        case 0x5236dcu: goto label_5236dc;
        case 0x5236e0u: goto label_5236e0;
        case 0x5236e4u: goto label_5236e4;
        case 0x5236e8u: goto label_5236e8;
        case 0x5236ecu: goto label_5236ec;
        case 0x5236f0u: goto label_5236f0;
        case 0x5236f4u: goto label_5236f4;
        case 0x5236f8u: goto label_5236f8;
        case 0x5236fcu: goto label_5236fc;
        case 0x523700u: goto label_523700;
        case 0x523704u: goto label_523704;
        case 0x523708u: goto label_523708;
        case 0x52370cu: goto label_52370c;
        case 0x523710u: goto label_523710;
        case 0x523714u: goto label_523714;
        case 0x523718u: goto label_523718;
        case 0x52371cu: goto label_52371c;
        case 0x523720u: goto label_523720;
        case 0x523724u: goto label_523724;
        case 0x523728u: goto label_523728;
        case 0x52372cu: goto label_52372c;
        case 0x523730u: goto label_523730;
        case 0x523734u: goto label_523734;
        case 0x523738u: goto label_523738;
        case 0x52373cu: goto label_52373c;
        case 0x523740u: goto label_523740;
        case 0x523744u: goto label_523744;
        case 0x523748u: goto label_523748;
        case 0x52374cu: goto label_52374c;
        case 0x523750u: goto label_523750;
        case 0x523754u: goto label_523754;
        case 0x523758u: goto label_523758;
        case 0x52375cu: goto label_52375c;
        case 0x523760u: goto label_523760;
        case 0x523764u: goto label_523764;
        case 0x523768u: goto label_523768;
        case 0x52376cu: goto label_52376c;
        case 0x523770u: goto label_523770;
        case 0x523774u: goto label_523774;
        case 0x523778u: goto label_523778;
        case 0x52377cu: goto label_52377c;
        case 0x523780u: goto label_523780;
        case 0x523784u: goto label_523784;
        case 0x523788u: goto label_523788;
        case 0x52378cu: goto label_52378c;
        case 0x523790u: goto label_523790;
        case 0x523794u: goto label_523794;
        case 0x523798u: goto label_523798;
        case 0x52379cu: goto label_52379c;
        case 0x5237a0u: goto label_5237a0;
        case 0x5237a4u: goto label_5237a4;
        case 0x5237a8u: goto label_5237a8;
        case 0x5237acu: goto label_5237ac;
        case 0x5237b0u: goto label_5237b0;
        case 0x5237b4u: goto label_5237b4;
        case 0x5237b8u: goto label_5237b8;
        case 0x5237bcu: goto label_5237bc;
        case 0x5237c0u: goto label_5237c0;
        case 0x5237c4u: goto label_5237c4;
        case 0x5237c8u: goto label_5237c8;
        case 0x5237ccu: goto label_5237cc;
        case 0x5237d0u: goto label_5237d0;
        case 0x5237d4u: goto label_5237d4;
        case 0x5237d8u: goto label_5237d8;
        case 0x5237dcu: goto label_5237dc;
        case 0x5237e0u: goto label_5237e0;
        case 0x5237e4u: goto label_5237e4;
        case 0x5237e8u: goto label_5237e8;
        case 0x5237ecu: goto label_5237ec;
        default: break;
    }

    ctx->pc = 0x523350u;

label_523350:
    // 0x523350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x523350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_523354:
    // 0x523354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x523354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_523358:
    // 0x523358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52335c:
    // 0x52335c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523360:
    // 0x523360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x523360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_523364:
    // 0x523364: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_523368:
    if (ctx->pc == 0x523368u) {
        ctx->pc = 0x523368u;
            // 0x523368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52336Cu;
        goto label_52336c;
    }
    ctx->pc = 0x523364u;
    {
        const bool branch_taken_0x523364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x523368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523364u;
            // 0x523368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523364) {
            ctx->pc = 0x523498u;
            goto label_523498;
        }
    }
    ctx->pc = 0x52336Cu;
label_52336c:
    // 0x52336c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52336cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_523370:
    // 0x523370: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_523374:
    // 0x523374: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x523374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
label_523378:
    // 0x523378: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x523378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_52337c:
    // 0x52337c: 0x24426198  addiu       $v0, $v0, 0x6198
    ctx->pc = 0x52337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24984));
label_523380:
    // 0x523380: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x523380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_523384:
    // 0x523384: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x523384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_523388:
    // 0x523388: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x523388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_52338c:
    // 0x52338c: 0xc0407c0  jal         func_101F00
label_523390:
    if (ctx->pc == 0x523390u) {
        ctx->pc = 0x523390u;
            // 0x523390: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
        ctx->pc = 0x523394u;
        goto label_523394;
    }
    ctx->pc = 0x52338Cu;
    SET_GPR_U32(ctx, 31, 0x523394u);
    ctx->pc = 0x523390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52338Cu;
            // 0x523390: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523394u; }
        if (ctx->pc != 0x523394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523394u; }
        if (ctx->pc != 0x523394u) { return; }
    }
    ctx->pc = 0x523394u;
label_523394:
    // 0x523394: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x523394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_523398:
    // 0x523398: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_52339c:
    if (ctx->pc == 0x52339Cu) {
        ctx->pc = 0x52339Cu;
            // 0x52339c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x5233A0u;
        goto label_5233a0;
    }
    ctx->pc = 0x523398u;
    {
        const bool branch_taken_0x523398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x523398) {
            ctx->pc = 0x52339Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523398u;
            // 0x52339c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5233ACu;
            goto label_5233ac;
        }
    }
    ctx->pc = 0x5233A0u;
label_5233a0:
    // 0x5233a0: 0xc07507c  jal         func_1D41F0
label_5233a4:
    if (ctx->pc == 0x5233A4u) {
        ctx->pc = 0x5233A4u;
            // 0x5233a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x5233A8u;
        goto label_5233a8;
    }
    ctx->pc = 0x5233A0u;
    SET_GPR_U32(ctx, 31, 0x5233A8u);
    ctx->pc = 0x5233A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5233A0u;
            // 0x5233a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5233A8u; }
        if (ctx->pc != 0x5233A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5233A8u; }
        if (ctx->pc != 0x5233A8u) { return; }
    }
    ctx->pc = 0x5233A8u;
label_5233a8:
    // 0x5233a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x5233a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_5233ac:
    // 0x5233ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_5233b0:
    if (ctx->pc == 0x5233B0u) {
        ctx->pc = 0x5233B0u;
            // 0x5233b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x5233B4u;
        goto label_5233b4;
    }
    ctx->pc = 0x5233ACu;
    {
        const bool branch_taken_0x5233ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233ac) {
            ctx->pc = 0x5233B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5233ACu;
            // 0x5233b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5233DCu;
            goto label_5233dc;
        }
    }
    ctx->pc = 0x5233B4u;
label_5233b4:
    // 0x5233b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_5233b8:
    if (ctx->pc == 0x5233B8u) {
        ctx->pc = 0x5233BCu;
        goto label_5233bc;
    }
    ctx->pc = 0x5233B4u;
    {
        const bool branch_taken_0x5233b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233b4) {
            ctx->pc = 0x5233D8u;
            goto label_5233d8;
        }
    }
    ctx->pc = 0x5233BCu;
label_5233bc:
    // 0x5233bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5233c0:
    if (ctx->pc == 0x5233C0u) {
        ctx->pc = 0x5233C4u;
        goto label_5233c4;
    }
    ctx->pc = 0x5233BCu;
    {
        const bool branch_taken_0x5233bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233bc) {
            ctx->pc = 0x5233D8u;
            goto label_5233d8;
        }
    }
    ctx->pc = 0x5233C4u;
label_5233c4:
    // 0x5233c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x5233c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_5233c8:
    // 0x5233c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5233cc:
    if (ctx->pc == 0x5233CCu) {
        ctx->pc = 0x5233D0u;
        goto label_5233d0;
    }
    ctx->pc = 0x5233C8u;
    {
        const bool branch_taken_0x5233c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233c8) {
            ctx->pc = 0x5233D8u;
            goto label_5233d8;
        }
    }
    ctx->pc = 0x5233D0u;
label_5233d0:
    // 0x5233d0: 0xc0400a8  jal         func_1002A0
label_5233d4:
    if (ctx->pc == 0x5233D4u) {
        ctx->pc = 0x5233D8u;
        goto label_5233d8;
    }
    ctx->pc = 0x5233D0u;
    SET_GPR_U32(ctx, 31, 0x5233D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5233D8u; }
        if (ctx->pc != 0x5233D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5233D8u; }
        if (ctx->pc != 0x5233D8u) { return; }
    }
    ctx->pc = 0x5233D8u;
label_5233d8:
    // 0x5233d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x5233d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_5233dc:
    // 0x5233dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_5233e0:
    if (ctx->pc == 0x5233E0u) {
        ctx->pc = 0x5233E0u;
            // 0x5233e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x5233E4u;
        goto label_5233e4;
    }
    ctx->pc = 0x5233DCu;
    {
        const bool branch_taken_0x5233dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233dc) {
            ctx->pc = 0x5233E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5233DCu;
            // 0x5233e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52340Cu;
            goto label_52340c;
        }
    }
    ctx->pc = 0x5233E4u;
label_5233e4:
    // 0x5233e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_5233e8:
    if (ctx->pc == 0x5233E8u) {
        ctx->pc = 0x5233ECu;
        goto label_5233ec;
    }
    ctx->pc = 0x5233E4u;
    {
        const bool branch_taken_0x5233e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233e4) {
            ctx->pc = 0x523408u;
            goto label_523408;
        }
    }
    ctx->pc = 0x5233ECu;
label_5233ec:
    // 0x5233ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5233f0:
    if (ctx->pc == 0x5233F0u) {
        ctx->pc = 0x5233F4u;
        goto label_5233f4;
    }
    ctx->pc = 0x5233ECu;
    {
        const bool branch_taken_0x5233ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233ec) {
            ctx->pc = 0x523408u;
            goto label_523408;
        }
    }
    ctx->pc = 0x5233F4u;
label_5233f4:
    // 0x5233f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x5233f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_5233f8:
    // 0x5233f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5233fc:
    if (ctx->pc == 0x5233FCu) {
        ctx->pc = 0x523400u;
        goto label_523400;
    }
    ctx->pc = 0x5233F8u;
    {
        const bool branch_taken_0x5233f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5233f8) {
            ctx->pc = 0x523408u;
            goto label_523408;
        }
    }
    ctx->pc = 0x523400u;
label_523400:
    // 0x523400: 0xc0400a8  jal         func_1002A0
label_523404:
    if (ctx->pc == 0x523404u) {
        ctx->pc = 0x523408u;
        goto label_523408;
    }
    ctx->pc = 0x523400u;
    SET_GPR_U32(ctx, 31, 0x523408u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523408u; }
        if (ctx->pc != 0x523408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523408u; }
        if (ctx->pc != 0x523408u) { return; }
    }
    ctx->pc = 0x523408u;
label_523408:
    // 0x523408: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x523408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_52340c:
    // 0x52340c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_523410:
    if (ctx->pc == 0x523410u) {
        ctx->pc = 0x523414u;
        goto label_523414;
    }
    ctx->pc = 0x52340Cu;
    {
        const bool branch_taken_0x52340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52340c) {
            ctx->pc = 0x523428u;
            goto label_523428;
        }
    }
    ctx->pc = 0x523414u;
label_523414:
    // 0x523414: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x523414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_523418:
    // 0x523418: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x523418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52341c:
    // 0x52341c: 0x24636148  addiu       $v1, $v1, 0x6148
    ctx->pc = 0x52341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24904));
label_523420:
    // 0x523420: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x523420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_523424:
    // 0x523424: 0xac40ab58  sw          $zero, -0x54A8($v0)
    ctx->pc = 0x523424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945624), GPR_U32(ctx, 0));
label_523428:
    // 0x523428: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_52342c:
    if (ctx->pc == 0x52342Cu) {
        ctx->pc = 0x52342Cu;
            // 0x52342c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x523430u;
        goto label_523430;
    }
    ctx->pc = 0x523428u;
    {
        const bool branch_taken_0x523428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x523428) {
            ctx->pc = 0x52342Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523428u;
            // 0x52342c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523484u;
            goto label_523484;
        }
    }
    ctx->pc = 0x523430u;
label_523430:
    // 0x523430: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x523430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_523434:
    // 0x523434: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x523434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_523438:
    // 0x523438: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x523438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52343c:
    // 0x52343c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x52343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_523440:
    // 0x523440: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_523444:
    if (ctx->pc == 0x523444u) {
        ctx->pc = 0x523444u;
            // 0x523444: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x523448u;
        goto label_523448;
    }
    ctx->pc = 0x523440u;
    {
        const bool branch_taken_0x523440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x523440) {
            ctx->pc = 0x523444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523440u;
            // 0x523444: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52345Cu;
            goto label_52345c;
        }
    }
    ctx->pc = 0x523448u;
label_523448:
    // 0x523448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x523448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52344c:
    // 0x52344c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52344cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_523450:
    // 0x523450: 0x320f809  jalr        $t9
label_523454:
    if (ctx->pc == 0x523454u) {
        ctx->pc = 0x523454u;
            // 0x523454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x523458u;
        goto label_523458;
    }
    ctx->pc = 0x523450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x523458u);
        ctx->pc = 0x523454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523450u;
            // 0x523454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x523458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x523458u; }
            if (ctx->pc != 0x523458u) { return; }
        }
        }
    }
    ctx->pc = 0x523458u;
label_523458:
    // 0x523458: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x523458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_52345c:
    // 0x52345c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_523460:
    if (ctx->pc == 0x523460u) {
        ctx->pc = 0x523460u;
            // 0x523460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523464u;
        goto label_523464;
    }
    ctx->pc = 0x52345Cu;
    {
        const bool branch_taken_0x52345c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52345c) {
            ctx->pc = 0x523460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52345Cu;
            // 0x523460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523478u;
            goto label_523478;
        }
    }
    ctx->pc = 0x523464u;
label_523464:
    // 0x523464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x523464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_523468:
    // 0x523468: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x523468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52346c:
    // 0x52346c: 0x320f809  jalr        $t9
label_523470:
    if (ctx->pc == 0x523470u) {
        ctx->pc = 0x523470u;
            // 0x523470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x523474u;
        goto label_523474;
    }
    ctx->pc = 0x52346Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x523474u);
        ctx->pc = 0x523470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52346Cu;
            // 0x523470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x523474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x523474u; }
            if (ctx->pc != 0x523474u) { return; }
        }
        }
    }
    ctx->pc = 0x523474u;
label_523474:
    // 0x523474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x523474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_523478:
    // 0x523478: 0xc075bf8  jal         func_1D6FE0
label_52347c:
    if (ctx->pc == 0x52347Cu) {
        ctx->pc = 0x52347Cu;
            // 0x52347c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523480u;
        goto label_523480;
    }
    ctx->pc = 0x523478u;
    SET_GPR_U32(ctx, 31, 0x523480u);
    ctx->pc = 0x52347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523478u;
            // 0x52347c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523480u; }
        if (ctx->pc != 0x523480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523480u; }
        if (ctx->pc != 0x523480u) { return; }
    }
    ctx->pc = 0x523480u;
label_523480:
    // 0x523480: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x523480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_523484:
    // 0x523484: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x523484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_523488:
    // 0x523488: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52348c:
    if (ctx->pc == 0x52348Cu) {
        ctx->pc = 0x52348Cu;
            // 0x52348c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523490u;
        goto label_523490;
    }
    ctx->pc = 0x523488u;
    {
        const bool branch_taken_0x523488 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x523488) {
            ctx->pc = 0x52348Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523488u;
            // 0x52348c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52349Cu;
            goto label_52349c;
        }
    }
    ctx->pc = 0x523490u;
label_523490:
    // 0x523490: 0xc0400a8  jal         func_1002A0
label_523494:
    if (ctx->pc == 0x523494u) {
        ctx->pc = 0x523494u;
            // 0x523494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523498u;
        goto label_523498;
    }
    ctx->pc = 0x523490u;
    SET_GPR_U32(ctx, 31, 0x523498u);
    ctx->pc = 0x523494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523490u;
            // 0x523494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523498u; }
        if (ctx->pc != 0x523498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523498u; }
        if (ctx->pc != 0x523498u) { return; }
    }
    ctx->pc = 0x523498u;
label_523498:
    // 0x523498: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x523498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52349c:
    // 0x52349c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5234a0:
    // 0x5234a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5234a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5234a4:
    // 0x5234a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5234a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5234a8:
    // 0x5234a8: 0x3e00008  jr          $ra
label_5234ac:
    if (ctx->pc == 0x5234ACu) {
        ctx->pc = 0x5234ACu;
            // 0x5234ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5234B0u;
        goto label_5234b0;
    }
    ctx->pc = 0x5234A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5234ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5234A8u;
            // 0x5234ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5234B0u;
label_5234b0:
    // 0x5234b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5234b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5234b4:
    // 0x5234b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5234b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5234b8:
    // 0x5234b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5234b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5234bc:
    // 0x5234bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5234bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5234c0:
    // 0x5234c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5234c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5234c4:
    // 0x5234c4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_5234c8:
    if (ctx->pc == 0x5234C8u) {
        ctx->pc = 0x5234C8u;
            // 0x5234c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5234CCu;
        goto label_5234cc;
    }
    ctx->pc = 0x5234C4u;
    {
        const bool branch_taken_0x5234c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5234C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5234C4u;
            // 0x5234c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5234c4) {
            ctx->pc = 0x523520u;
            goto label_523520;
        }
    }
    ctx->pc = 0x5234CCu;
label_5234cc:
    // 0x5234cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5234ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5234d0:
    // 0x5234d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5234d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5234d4:
    // 0x5234d4: 0x24636200  addiu       $v1, $v1, 0x6200
    ctx->pc = 0x5234d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_5234d8:
    // 0x5234d8: 0x24426240  addiu       $v0, $v0, 0x6240
    ctx->pc = 0x5234d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
label_5234dc:
    // 0x5234dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5234dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5234e0:
    // 0x5234e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_5234e4:
    if (ctx->pc == 0x5234E4u) {
        ctx->pc = 0x5234E4u;
            // 0x5234e4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x5234E8u;
        goto label_5234e8;
    }
    ctx->pc = 0x5234E0u;
    {
        const bool branch_taken_0x5234e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5234E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5234E0u;
            // 0x5234e4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5234e0) {
            ctx->pc = 0x523508u;
            goto label_523508;
        }
    }
    ctx->pc = 0x5234E8u;
label_5234e8:
    // 0x5234e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5234e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5234ec:
    // 0x5234ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5234f0:
    // 0x5234f0: 0x24635bb0  addiu       $v1, $v1, 0x5BB0
    ctx->pc = 0x5234f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23472));
label_5234f4:
    // 0x5234f4: 0x24425bf0  addiu       $v0, $v0, 0x5BF0
    ctx->pc = 0x5234f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
label_5234f8:
    // 0x5234f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5234f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5234fc:
    // 0x5234fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5234fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523500:
    // 0x523500: 0xc0b1974  jal         func_2C65D0
label_523504:
    if (ctx->pc == 0x523504u) {
        ctx->pc = 0x523504u;
            // 0x523504: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x523508u;
        goto label_523508;
    }
    ctx->pc = 0x523500u;
    SET_GPR_U32(ctx, 31, 0x523508u);
    ctx->pc = 0x523504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523500u;
            // 0x523504: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C65D0u;
    if (runtime->hasFunction(0x2C65D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C65D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523508u; }
        if (ctx->pc != 0x523508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C65D0_0x2c65d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523508u; }
        if (ctx->pc != 0x523508u) { return; }
    }
    ctx->pc = 0x523508u;
label_523508:
    // 0x523508: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x523508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_52350c:
    // 0x52350c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52350cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_523510:
    // 0x523510: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_523514:
    if (ctx->pc == 0x523514u) {
        ctx->pc = 0x523514u;
            // 0x523514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523518u;
        goto label_523518;
    }
    ctx->pc = 0x523510u;
    {
        const bool branch_taken_0x523510 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x523510) {
            ctx->pc = 0x523514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523510u;
            // 0x523514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523524u;
            goto label_523524;
        }
    }
    ctx->pc = 0x523518u;
label_523518:
    // 0x523518: 0xc0400a8  jal         func_1002A0
label_52351c:
    if (ctx->pc == 0x52351Cu) {
        ctx->pc = 0x52351Cu;
            // 0x52351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523520u;
        goto label_523520;
    }
    ctx->pc = 0x523518u;
    SET_GPR_U32(ctx, 31, 0x523520u);
    ctx->pc = 0x52351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523518u;
            // 0x52351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523520u; }
        if (ctx->pc != 0x523520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523520u; }
        if (ctx->pc != 0x523520u) { return; }
    }
    ctx->pc = 0x523520u;
label_523520:
    // 0x523520: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x523520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_523524:
    // 0x523524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x523524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_523528:
    // 0x523528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x523528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52352c:
    // 0x52352c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52352cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523530:
    // 0x523530: 0x3e00008  jr          $ra
label_523534:
    if (ctx->pc == 0x523534u) {
        ctx->pc = 0x523534u;
            // 0x523534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x523538u;
        goto label_523538;
    }
    ctx->pc = 0x523530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523530u;
            // 0x523534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523538u;
label_523538:
    // 0x523538: 0x0  nop
    ctx->pc = 0x523538u;
    // NOP
label_52353c:
    // 0x52353c: 0x0  nop
    ctx->pc = 0x52353cu;
    // NOP
label_523540:
    // 0x523540: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x523540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_523544:
    // 0x523544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x523544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_523548:
    // 0x523548: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x523548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_52354c:
    // 0x52354c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x52354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_523550:
    // 0x523550: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x523550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_523554:
    // 0x523554: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x523554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_523558:
    // 0x523558: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x523558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_52355c:
    // 0x52355c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x52355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_523560:
    // 0x523560: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x523560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_523564:
    // 0x523564: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x523564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_523568:
    // 0x523568: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x523568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_52356c:
    // 0x52356c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_523570:
    // 0x523570: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x523570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_523574:
    // 0x523574: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x523574u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_523578:
    // 0x523578: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_52357c:
    if (ctx->pc == 0x52357Cu) {
        ctx->pc = 0x52357Cu;
            // 0x52357c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523580u;
        goto label_523580;
    }
    ctx->pc = 0x523578u;
    {
        const bool branch_taken_0x523578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523578u;
            // 0x52357c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523578) {
            ctx->pc = 0x5235C8u;
            goto label_5235c8;
        }
    }
    ctx->pc = 0x523580u;
label_523580:
    // 0x523580: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x523580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_523584:
    // 0x523584: 0x10a3008a  beq         $a1, $v1, . + 4 + (0x8A << 2)
label_523588:
    if (ctx->pc == 0x523588u) {
        ctx->pc = 0x52358Cu;
        goto label_52358c;
    }
    ctx->pc = 0x523584u;
    {
        const bool branch_taken_0x523584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x523584) {
            ctx->pc = 0x5237B0u;
            goto label_5237b0;
        }
    }
    ctx->pc = 0x52358Cu;
label_52358c:
    // 0x52358c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52358cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_523590:
    // 0x523590: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_523594:
    if (ctx->pc == 0x523594u) {
        ctx->pc = 0x523598u;
        goto label_523598;
    }
    ctx->pc = 0x523590u;
    {
        const bool branch_taken_0x523590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x523590) {
            ctx->pc = 0x5235A0u;
            goto label_5235a0;
        }
    }
    ctx->pc = 0x523598u;
label_523598:
    // 0x523598: 0x10000085  b           . + 4 + (0x85 << 2)
label_52359c:
    if (ctx->pc == 0x52359Cu) {
        ctx->pc = 0x5235A0u;
        goto label_5235a0;
    }
    ctx->pc = 0x523598u;
    {
        const bool branch_taken_0x523598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x523598) {
            ctx->pc = 0x5237B0u;
            goto label_5237b0;
        }
    }
    ctx->pc = 0x5235A0u;
label_5235a0:
    // 0x5235a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5235a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5235a4:
    // 0x5235a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5235a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5235a8:
    // 0x5235a8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5235a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5235ac:
    // 0x5235ac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5235acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5235b0:
    // 0x5235b0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x5235b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_5235b4:
    // 0x5235b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5235b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_5235b8:
    // 0x5235b8: 0x320f809  jalr        $t9
label_5235bc:
    if (ctx->pc == 0x5235BCu) {
        ctx->pc = 0x5235BCu;
            // 0x5235bc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5235C0u;
        goto label_5235c0;
    }
    ctx->pc = 0x5235B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5235C0u);
        ctx->pc = 0x5235BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5235B8u;
            // 0x5235bc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5235C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5235C0u; }
            if (ctx->pc != 0x5235C0u) { return; }
        }
        }
    }
    ctx->pc = 0x5235C0u;
label_5235c0:
    // 0x5235c0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_5235c4:
    if (ctx->pc == 0x5235C4u) {
        ctx->pc = 0x5235C8u;
        goto label_5235c8;
    }
    ctx->pc = 0x5235C0u;
    {
        const bool branch_taken_0x5235c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5235c0) {
            ctx->pc = 0x5237B0u;
            goto label_5237b0;
        }
    }
    ctx->pc = 0x5235C8u;
label_5235c8:
    // 0x5235c8: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x5235c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_5235cc:
    // 0x5235cc: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_5235d0:
    if (ctx->pc == 0x5235D0u) {
        ctx->pc = 0x5235D0u;
            // 0x5235d0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x5235D4u;
        goto label_5235d4;
    }
    ctx->pc = 0x5235CCu;
    {
        const bool branch_taken_0x5235cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5235D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5235CCu;
            // 0x5235d0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5235cc) {
            ctx->pc = 0x5237B0u;
            goto label_5237b0;
        }
    }
    ctx->pc = 0x5235D4u;
label_5235d4:
    // 0x5235d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5235d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5235d8:
    // 0x5235d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5235d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5235dc:
    // 0x5235dc: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x5235dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5235e0:
    // 0x5235e0: 0x27d30084  addiu       $s3, $fp, 0x84
    ctx->pc = 0x5235e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_5235e4:
    // 0x5235e4: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x5235e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_5235e8:
    // 0x5235e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5235e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5235ec:
    // 0x5235ec: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x5235ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_5235f0:
    // 0x5235f0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5235f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5235f4:
    // 0x5235f4: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x5235f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_5235f8:
    // 0x5235f8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x5235f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_5235fc:
    // 0x5235fc: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x5235fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_523600:
    // 0x523600: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x523600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_523604:
    // 0x523604: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x523604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_523608:
    // 0x523608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x523608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52360c:
    // 0x52360c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x52360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_523610:
    // 0x523610: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x523610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_523614:
    // 0x523614: 0xc04e738  jal         func_139CE0
label_523618:
    if (ctx->pc == 0x523618u) {
        ctx->pc = 0x523618u;
            // 0x523618: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x52361Cu;
        goto label_52361c;
    }
    ctx->pc = 0x523614u;
    SET_GPR_U32(ctx, 31, 0x52361Cu);
    ctx->pc = 0x523618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523614u;
            // 0x523618: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52361Cu; }
        if (ctx->pc != 0x52361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52361Cu; }
        if (ctx->pc != 0x52361Cu) { return; }
    }
    ctx->pc = 0x52361Cu;
label_52361c:
    // 0x52361c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x52361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_523620:
    // 0x523620: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x523620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523624:
    // 0x523624: 0xc454c7e0  lwc1        $f20, -0x3820($v0)
    ctx->pc = 0x523624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_523628:
    // 0x523628: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x523628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52362c:
    // 0x52362c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_523630:
    // 0x523630: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x523630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_523634:
    // 0x523634: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x523634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_523638:
    // 0x523638: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x523638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_52363c:
    // 0x52363c: 0x8c960130  lw          $s6, 0x130($a0)
    ctx->pc = 0x52363cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_523640:
    // 0x523640: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x523640u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_523644:
    // 0x523644: 0xc0d639c  jal         func_358E70
label_523648:
    if (ctx->pc == 0x523648u) {
        ctx->pc = 0x523648u;
            // 0x523648: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x52364Cu;
        goto label_52364c;
    }
    ctx->pc = 0x523644u;
    SET_GPR_U32(ctx, 31, 0x52364Cu);
    ctx->pc = 0x523648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523644u;
            // 0x523648: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52364Cu; }
        if (ctx->pc != 0x52364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52364Cu; }
        if (ctx->pc != 0x52364Cu) { return; }
    }
    ctx->pc = 0x52364Cu;
label_52364c:
    // 0x52364c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_523650:
    if (ctx->pc == 0x523650u) {
        ctx->pc = 0x523654u;
        goto label_523654;
    }
    ctx->pc = 0x52364Cu;
    {
        const bool branch_taken_0x52364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52364c) {
            ctx->pc = 0x523798u;
            goto label_523798;
        }
    }
    ctx->pc = 0x523654u;
label_523654:
    // 0x523654: 0xc0d1c14  jal         func_347050
label_523658:
    if (ctx->pc == 0x523658u) {
        ctx->pc = 0x523658u;
            // 0x523658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52365Cu;
        goto label_52365c;
    }
    ctx->pc = 0x523654u;
    SET_GPR_U32(ctx, 31, 0x52365Cu);
    ctx->pc = 0x523658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523654u;
            // 0x523658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52365Cu; }
        if (ctx->pc != 0x52365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52365Cu; }
        if (ctx->pc != 0x52365Cu) { return; }
    }
    ctx->pc = 0x52365Cu;
label_52365c:
    // 0x52365c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52365cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_523660:
    // 0x523660: 0xc04f278  jal         func_13C9E0
label_523664:
    if (ctx->pc == 0x523664u) {
        ctx->pc = 0x523664u;
            // 0x523664: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x523668u;
        goto label_523668;
    }
    ctx->pc = 0x523660u;
    SET_GPR_U32(ctx, 31, 0x523668u);
    ctx->pc = 0x523664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523660u;
            // 0x523664: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523668u; }
        if (ctx->pc != 0x523668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523668u; }
        if (ctx->pc != 0x523668u) { return; }
    }
    ctx->pc = 0x523668u;
label_523668:
    // 0x523668: 0xc0d1c10  jal         func_347040
label_52366c:
    if (ctx->pc == 0x52366Cu) {
        ctx->pc = 0x52366Cu;
            // 0x52366c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523670u;
        goto label_523670;
    }
    ctx->pc = 0x523668u;
    SET_GPR_U32(ctx, 31, 0x523670u);
    ctx->pc = 0x52366Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523668u;
            // 0x52366c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523670u; }
        if (ctx->pc != 0x523670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523670u; }
        if (ctx->pc != 0x523670u) { return; }
    }
    ctx->pc = 0x523670u;
label_523670:
    // 0x523670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x523670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_523674:
    // 0x523674: 0xc04ce80  jal         func_133A00
label_523678:
    if (ctx->pc == 0x523678u) {
        ctx->pc = 0x523678u;
            // 0x523678: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x52367Cu;
        goto label_52367c;
    }
    ctx->pc = 0x523674u;
    SET_GPR_U32(ctx, 31, 0x52367Cu);
    ctx->pc = 0x523678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523674u;
            // 0x523678: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52367Cu; }
        if (ctx->pc != 0x52367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52367Cu; }
        if (ctx->pc != 0x52367Cu) { return; }
    }
    ctx->pc = 0x52367Cu;
label_52367c:
    // 0x52367c: 0xc0d4108  jal         func_350420
label_523680:
    if (ctx->pc == 0x523680u) {
        ctx->pc = 0x523684u;
        goto label_523684;
    }
    ctx->pc = 0x52367Cu;
    SET_GPR_U32(ctx, 31, 0x523684u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523684u; }
        if (ctx->pc != 0x523684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523684u; }
        if (ctx->pc != 0x523684u) { return; }
    }
    ctx->pc = 0x523684u;
label_523684:
    // 0x523684: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x523684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_523688:
    // 0x523688: 0xc0d4104  jal         func_350410
label_52368c:
    if (ctx->pc == 0x52368Cu) {
        ctx->pc = 0x52368Cu;
            // 0x52368c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523690u;
        goto label_523690;
    }
    ctx->pc = 0x523688u;
    SET_GPR_U32(ctx, 31, 0x523690u);
    ctx->pc = 0x52368Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523688u;
            // 0x52368c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523690u; }
        if (ctx->pc != 0x523690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523690u; }
        if (ctx->pc != 0x523690u) { return; }
    }
    ctx->pc = 0x523690u;
label_523690:
    // 0x523690: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x523690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_523694:
    // 0x523694: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x523694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_523698:
    // 0x523698: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x523698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_52369c:
    // 0x52369c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x52369cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5236a0:
    // 0x5236a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x5236a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5236a4:
    // 0x5236a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5236a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5236a8:
    // 0x5236a8: 0xc0d40ac  jal         func_3502B0
label_5236ac:
    if (ctx->pc == 0x5236ACu) {
        ctx->pc = 0x5236ACu;
            // 0x5236ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5236B0u;
        goto label_5236b0;
    }
    ctx->pc = 0x5236A8u;
    SET_GPR_U32(ctx, 31, 0x5236B0u);
    ctx->pc = 0x5236ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5236A8u;
            // 0x5236ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5236B0u; }
        if (ctx->pc != 0x5236B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5236B0u; }
        if (ctx->pc != 0x5236B0u) { return; }
    }
    ctx->pc = 0x5236B0u;
label_5236b0:
    // 0x5236b0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x5236b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_5236b4:
    // 0x5236b4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_5236b8:
    if (ctx->pc == 0x5236B8u) {
        ctx->pc = 0x5236B8u;
            // 0x5236b8: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x5236BCu;
        goto label_5236bc;
    }
    ctx->pc = 0x5236B4u;
    {
        const bool branch_taken_0x5236b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5236B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5236B4u;
            // 0x5236b8: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5236b4) {
            ctx->pc = 0x523798u;
            goto label_523798;
        }
    }
    ctx->pc = 0x5236BCu;
label_5236bc:
    // 0x5236bc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x5236bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_5236c0:
    // 0x5236c0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x5236c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5236c4:
    // 0x5236c4: 0xc04cd60  jal         func_133580
label_5236c8:
    if (ctx->pc == 0x5236C8u) {
        ctx->pc = 0x5236C8u;
            // 0x5236c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5236CCu;
        goto label_5236cc;
    }
    ctx->pc = 0x5236C4u;
    SET_GPR_U32(ctx, 31, 0x5236CCu);
    ctx->pc = 0x5236C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5236C4u;
            // 0x5236c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5236CCu; }
        if (ctx->pc != 0x5236CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5236CCu; }
        if (ctx->pc != 0x5236CCu) { return; }
    }
    ctx->pc = 0x5236CCu;
label_5236cc:
    // 0x5236cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5236ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5236d0:
    // 0x5236d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5236d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5236d4:
    // 0x5236d4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x5236d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_5236d8:
    // 0x5236d8: 0xc04e4a4  jal         func_139290
label_5236dc:
    if (ctx->pc == 0x5236DCu) {
        ctx->pc = 0x5236DCu;
            // 0x5236dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5236E0u;
        goto label_5236e0;
    }
    ctx->pc = 0x5236D8u;
    SET_GPR_U32(ctx, 31, 0x5236E0u);
    ctx->pc = 0x5236DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5236D8u;
            // 0x5236dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5236E0u; }
        if (ctx->pc != 0x5236E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5236E0u; }
        if (ctx->pc != 0x5236E0u) { return; }
    }
    ctx->pc = 0x5236E0u;
label_5236e0:
    // 0x5236e0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x5236e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_5236e4:
    // 0x5236e4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x5236e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_5236e8:
    // 0x5236e8: 0xaea0001c  sw          $zero, 0x1C($s5)
    ctx->pc = 0x5236e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
label_5236ec:
    // 0x5236ec: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x5236ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_5236f0:
    // 0x5236f0: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x5236f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_5236f4:
    // 0x5236f4: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x5236f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
label_5236f8:
    // 0x5236f8: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x5236f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_5236fc:
    // 0x5236fc: 0xaea00030  sw          $zero, 0x30($s5)
    ctx->pc = 0x5236fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 0));
label_523700:
    // 0x523700: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x523700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_523704:
    // 0x523704: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_523708:
    if (ctx->pc == 0x523708u) {
        ctx->pc = 0x52370Cu;
        goto label_52370c;
    }
    ctx->pc = 0x523704u;
    {
        const bool branch_taken_0x523704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x523704) {
            ctx->pc = 0x523760u;
            goto label_523760;
        }
    }
    ctx->pc = 0x52370Cu;
label_52370c:
    // 0x52370c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x52370cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_523710:
    // 0x523710: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x523710u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_523714:
    // 0x523714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x523714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_523718:
    // 0x523718: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x523718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52371c:
    // 0x52371c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x52371cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_523720:
    // 0x523720: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x523720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_523724:
    // 0x523724: 0xc04cfcc  jal         func_133F30
label_523728:
    if (ctx->pc == 0x523728u) {
        ctx->pc = 0x523728u;
            // 0x523728: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52372Cu;
        goto label_52372c;
    }
    ctx->pc = 0x523724u;
    SET_GPR_U32(ctx, 31, 0x52372Cu);
    ctx->pc = 0x523728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523724u;
            // 0x523728: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52372Cu; }
        if (ctx->pc != 0x52372Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52372Cu; }
        if (ctx->pc != 0x52372Cu) { return; }
    }
    ctx->pc = 0x52372Cu;
label_52372c:
    // 0x52372c: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x52372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_523730:
    // 0x523730: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x523730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_523734:
    // 0x523734: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x523734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_523738:
    // 0x523738: 0xc054bbc  jal         func_152EF0
label_52373c:
    if (ctx->pc == 0x52373Cu) {
        ctx->pc = 0x52373Cu;
            // 0x52373c: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x523740u;
        goto label_523740;
    }
    ctx->pc = 0x523738u;
    SET_GPR_U32(ctx, 31, 0x523740u);
    ctx->pc = 0x52373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523738u;
            // 0x52373c: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523740u; }
        if (ctx->pc != 0x523740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523740u; }
        if (ctx->pc != 0x523740u) { return; }
    }
    ctx->pc = 0x523740u;
label_523740:
    // 0x523740: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x523740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_523744:
    // 0x523744: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x523744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_523748:
    // 0x523748: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x523748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52374c:
    // 0x52374c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x52374cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_523750:
    // 0x523750: 0xc054c2c  jal         func_1530B0
label_523754:
    if (ctx->pc == 0x523754u) {
        ctx->pc = 0x523754u;
            // 0x523754: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523758u;
        goto label_523758;
    }
    ctx->pc = 0x523750u;
    SET_GPR_U32(ctx, 31, 0x523758u);
    ctx->pc = 0x523754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523750u;
            // 0x523754: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523758u; }
        if (ctx->pc != 0x523758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523758u; }
        if (ctx->pc != 0x523758u) { return; }
    }
    ctx->pc = 0x523758u;
label_523758:
    // 0x523758: 0x1000000f  b           . + 4 + (0xF << 2)
label_52375c:
    if (ctx->pc == 0x52375Cu) {
        ctx->pc = 0x523760u;
        goto label_523760;
    }
    ctx->pc = 0x523758u;
    {
        const bool branch_taken_0x523758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x523758) {
            ctx->pc = 0x523798u;
            goto label_523798;
        }
    }
    ctx->pc = 0x523760u;
label_523760:
    // 0x523760: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x523760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_523764:
    // 0x523764: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x523764u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_523768:
    // 0x523768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x523768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52376c:
    // 0x52376c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x52376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_523770:
    // 0x523770: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x523770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_523774:
    // 0x523774: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x523774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_523778:
    // 0x523778: 0xc04cfcc  jal         func_133F30
label_52377c:
    if (ctx->pc == 0x52377Cu) {
        ctx->pc = 0x52377Cu;
            // 0x52377c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523780u;
        goto label_523780;
    }
    ctx->pc = 0x523778u;
    SET_GPR_U32(ctx, 31, 0x523780u);
    ctx->pc = 0x52377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523778u;
            // 0x52377c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523780u; }
        if (ctx->pc != 0x523780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523780u; }
        if (ctx->pc != 0x523780u) { return; }
    }
    ctx->pc = 0x523780u;
label_523780:
    // 0x523780: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x523780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_523784:
    // 0x523784: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x523784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_523788:
    // 0x523788: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x523788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52378c:
    // 0x52378c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x52378cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_523790:
    // 0x523790: 0xc148dfc  jal         func_5237F0
label_523794:
    if (ctx->pc == 0x523794u) {
        ctx->pc = 0x523794u;
            // 0x523794: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523798u;
        goto label_523798;
    }
    ctx->pc = 0x523790u;
    SET_GPR_U32(ctx, 31, 0x523798u);
    ctx->pc = 0x523794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523790u;
            // 0x523794: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5237F0u;
    if (runtime->hasFunction(0x5237F0u)) {
        auto targetFn = runtime->lookupFunction(0x5237F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523798u; }
        if (ctx->pc != 0x523798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005237F0_0x5237f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523798u; }
        if (ctx->pc != 0x523798u) { return; }
    }
    ctx->pc = 0x523798u;
label_523798:
    // 0x523798: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x523798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_52379c:
    // 0x52379c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52379cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5237a0:
    // 0x5237a0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x5237a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5237a4:
    // 0x5237a4: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
label_5237a8:
    if (ctx->pc == 0x5237A8u) {
        ctx->pc = 0x5237A8u;
            // 0x5237a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x5237ACu;
        goto label_5237ac;
    }
    ctx->pc = 0x5237A4u;
    {
        const bool branch_taken_0x5237a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5237A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5237A4u;
            // 0x5237a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5237a4) {
            ctx->pc = 0x52362Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52362c;
        }
    }
    ctx->pc = 0x5237ACu;
label_5237ac:
    // 0x5237ac: 0x0  nop
    ctx->pc = 0x5237acu;
    // NOP
label_5237b0:
    // 0x5237b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x5237b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_5237b4:
    // 0x5237b4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x5237b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_5237b8:
    // 0x5237b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5237b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5237bc:
    // 0x5237bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x5237bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5237c0:
    // 0x5237c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x5237c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5237c4:
    // 0x5237c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x5237c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5237c8:
    // 0x5237c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5237c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5237cc:
    // 0x5237cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5237ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5237d0:
    // 0x5237d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5237d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5237d4:
    // 0x5237d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5237d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5237d8:
    // 0x5237d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5237d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5237dc:
    // 0x5237dc: 0x3e00008  jr          $ra
label_5237e0:
    if (ctx->pc == 0x5237E0u) {
        ctx->pc = 0x5237E0u;
            // 0x5237e0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x5237E4u;
        goto label_5237e4;
    }
    ctx->pc = 0x5237DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5237E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5237DCu;
            // 0x5237e0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5237E4u;
label_5237e4:
    // 0x5237e4: 0x0  nop
    ctx->pc = 0x5237e4u;
    // NOP
label_5237e8:
    // 0x5237e8: 0x0  nop
    ctx->pc = 0x5237e8u;
    // NOP
label_5237ec:
    // 0x5237ec: 0x0  nop
    ctx->pc = 0x5237ecu;
    // NOP
}
