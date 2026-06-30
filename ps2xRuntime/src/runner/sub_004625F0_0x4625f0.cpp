#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004625F0
// Address: 0x4625f0 - 0x462b60
void sub_004625F0_0x4625f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004625F0_0x4625f0");
#endif

    switch (ctx->pc) {
        case 0x4625f0u: goto label_4625f0;
        case 0x4625f4u: goto label_4625f4;
        case 0x4625f8u: goto label_4625f8;
        case 0x4625fcu: goto label_4625fc;
        case 0x462600u: goto label_462600;
        case 0x462604u: goto label_462604;
        case 0x462608u: goto label_462608;
        case 0x46260cu: goto label_46260c;
        case 0x462610u: goto label_462610;
        case 0x462614u: goto label_462614;
        case 0x462618u: goto label_462618;
        case 0x46261cu: goto label_46261c;
        case 0x462620u: goto label_462620;
        case 0x462624u: goto label_462624;
        case 0x462628u: goto label_462628;
        case 0x46262cu: goto label_46262c;
        case 0x462630u: goto label_462630;
        case 0x462634u: goto label_462634;
        case 0x462638u: goto label_462638;
        case 0x46263cu: goto label_46263c;
        case 0x462640u: goto label_462640;
        case 0x462644u: goto label_462644;
        case 0x462648u: goto label_462648;
        case 0x46264cu: goto label_46264c;
        case 0x462650u: goto label_462650;
        case 0x462654u: goto label_462654;
        case 0x462658u: goto label_462658;
        case 0x46265cu: goto label_46265c;
        case 0x462660u: goto label_462660;
        case 0x462664u: goto label_462664;
        case 0x462668u: goto label_462668;
        case 0x46266cu: goto label_46266c;
        case 0x462670u: goto label_462670;
        case 0x462674u: goto label_462674;
        case 0x462678u: goto label_462678;
        case 0x46267cu: goto label_46267c;
        case 0x462680u: goto label_462680;
        case 0x462684u: goto label_462684;
        case 0x462688u: goto label_462688;
        case 0x46268cu: goto label_46268c;
        case 0x462690u: goto label_462690;
        case 0x462694u: goto label_462694;
        case 0x462698u: goto label_462698;
        case 0x46269cu: goto label_46269c;
        case 0x4626a0u: goto label_4626a0;
        case 0x4626a4u: goto label_4626a4;
        case 0x4626a8u: goto label_4626a8;
        case 0x4626acu: goto label_4626ac;
        case 0x4626b0u: goto label_4626b0;
        case 0x4626b4u: goto label_4626b4;
        case 0x4626b8u: goto label_4626b8;
        case 0x4626bcu: goto label_4626bc;
        case 0x4626c0u: goto label_4626c0;
        case 0x4626c4u: goto label_4626c4;
        case 0x4626c8u: goto label_4626c8;
        case 0x4626ccu: goto label_4626cc;
        case 0x4626d0u: goto label_4626d0;
        case 0x4626d4u: goto label_4626d4;
        case 0x4626d8u: goto label_4626d8;
        case 0x4626dcu: goto label_4626dc;
        case 0x4626e0u: goto label_4626e0;
        case 0x4626e4u: goto label_4626e4;
        case 0x4626e8u: goto label_4626e8;
        case 0x4626ecu: goto label_4626ec;
        case 0x4626f0u: goto label_4626f0;
        case 0x4626f4u: goto label_4626f4;
        case 0x4626f8u: goto label_4626f8;
        case 0x4626fcu: goto label_4626fc;
        case 0x462700u: goto label_462700;
        case 0x462704u: goto label_462704;
        case 0x462708u: goto label_462708;
        case 0x46270cu: goto label_46270c;
        case 0x462710u: goto label_462710;
        case 0x462714u: goto label_462714;
        case 0x462718u: goto label_462718;
        case 0x46271cu: goto label_46271c;
        case 0x462720u: goto label_462720;
        case 0x462724u: goto label_462724;
        case 0x462728u: goto label_462728;
        case 0x46272cu: goto label_46272c;
        case 0x462730u: goto label_462730;
        case 0x462734u: goto label_462734;
        case 0x462738u: goto label_462738;
        case 0x46273cu: goto label_46273c;
        case 0x462740u: goto label_462740;
        case 0x462744u: goto label_462744;
        case 0x462748u: goto label_462748;
        case 0x46274cu: goto label_46274c;
        case 0x462750u: goto label_462750;
        case 0x462754u: goto label_462754;
        case 0x462758u: goto label_462758;
        case 0x46275cu: goto label_46275c;
        case 0x462760u: goto label_462760;
        case 0x462764u: goto label_462764;
        case 0x462768u: goto label_462768;
        case 0x46276cu: goto label_46276c;
        case 0x462770u: goto label_462770;
        case 0x462774u: goto label_462774;
        case 0x462778u: goto label_462778;
        case 0x46277cu: goto label_46277c;
        case 0x462780u: goto label_462780;
        case 0x462784u: goto label_462784;
        case 0x462788u: goto label_462788;
        case 0x46278cu: goto label_46278c;
        case 0x462790u: goto label_462790;
        case 0x462794u: goto label_462794;
        case 0x462798u: goto label_462798;
        case 0x46279cu: goto label_46279c;
        case 0x4627a0u: goto label_4627a0;
        case 0x4627a4u: goto label_4627a4;
        case 0x4627a8u: goto label_4627a8;
        case 0x4627acu: goto label_4627ac;
        case 0x4627b0u: goto label_4627b0;
        case 0x4627b4u: goto label_4627b4;
        case 0x4627b8u: goto label_4627b8;
        case 0x4627bcu: goto label_4627bc;
        case 0x4627c0u: goto label_4627c0;
        case 0x4627c4u: goto label_4627c4;
        case 0x4627c8u: goto label_4627c8;
        case 0x4627ccu: goto label_4627cc;
        case 0x4627d0u: goto label_4627d0;
        case 0x4627d4u: goto label_4627d4;
        case 0x4627d8u: goto label_4627d8;
        case 0x4627dcu: goto label_4627dc;
        case 0x4627e0u: goto label_4627e0;
        case 0x4627e4u: goto label_4627e4;
        case 0x4627e8u: goto label_4627e8;
        case 0x4627ecu: goto label_4627ec;
        case 0x4627f0u: goto label_4627f0;
        case 0x4627f4u: goto label_4627f4;
        case 0x4627f8u: goto label_4627f8;
        case 0x4627fcu: goto label_4627fc;
        case 0x462800u: goto label_462800;
        case 0x462804u: goto label_462804;
        case 0x462808u: goto label_462808;
        case 0x46280cu: goto label_46280c;
        case 0x462810u: goto label_462810;
        case 0x462814u: goto label_462814;
        case 0x462818u: goto label_462818;
        case 0x46281cu: goto label_46281c;
        case 0x462820u: goto label_462820;
        case 0x462824u: goto label_462824;
        case 0x462828u: goto label_462828;
        case 0x46282cu: goto label_46282c;
        case 0x462830u: goto label_462830;
        case 0x462834u: goto label_462834;
        case 0x462838u: goto label_462838;
        case 0x46283cu: goto label_46283c;
        case 0x462840u: goto label_462840;
        case 0x462844u: goto label_462844;
        case 0x462848u: goto label_462848;
        case 0x46284cu: goto label_46284c;
        case 0x462850u: goto label_462850;
        case 0x462854u: goto label_462854;
        case 0x462858u: goto label_462858;
        case 0x46285cu: goto label_46285c;
        case 0x462860u: goto label_462860;
        case 0x462864u: goto label_462864;
        case 0x462868u: goto label_462868;
        case 0x46286cu: goto label_46286c;
        case 0x462870u: goto label_462870;
        case 0x462874u: goto label_462874;
        case 0x462878u: goto label_462878;
        case 0x46287cu: goto label_46287c;
        case 0x462880u: goto label_462880;
        case 0x462884u: goto label_462884;
        case 0x462888u: goto label_462888;
        case 0x46288cu: goto label_46288c;
        case 0x462890u: goto label_462890;
        case 0x462894u: goto label_462894;
        case 0x462898u: goto label_462898;
        case 0x46289cu: goto label_46289c;
        case 0x4628a0u: goto label_4628a0;
        case 0x4628a4u: goto label_4628a4;
        case 0x4628a8u: goto label_4628a8;
        case 0x4628acu: goto label_4628ac;
        case 0x4628b0u: goto label_4628b0;
        case 0x4628b4u: goto label_4628b4;
        case 0x4628b8u: goto label_4628b8;
        case 0x4628bcu: goto label_4628bc;
        case 0x4628c0u: goto label_4628c0;
        case 0x4628c4u: goto label_4628c4;
        case 0x4628c8u: goto label_4628c8;
        case 0x4628ccu: goto label_4628cc;
        case 0x4628d0u: goto label_4628d0;
        case 0x4628d4u: goto label_4628d4;
        case 0x4628d8u: goto label_4628d8;
        case 0x4628dcu: goto label_4628dc;
        case 0x4628e0u: goto label_4628e0;
        case 0x4628e4u: goto label_4628e4;
        case 0x4628e8u: goto label_4628e8;
        case 0x4628ecu: goto label_4628ec;
        case 0x4628f0u: goto label_4628f0;
        case 0x4628f4u: goto label_4628f4;
        case 0x4628f8u: goto label_4628f8;
        case 0x4628fcu: goto label_4628fc;
        case 0x462900u: goto label_462900;
        case 0x462904u: goto label_462904;
        case 0x462908u: goto label_462908;
        case 0x46290cu: goto label_46290c;
        case 0x462910u: goto label_462910;
        case 0x462914u: goto label_462914;
        case 0x462918u: goto label_462918;
        case 0x46291cu: goto label_46291c;
        case 0x462920u: goto label_462920;
        case 0x462924u: goto label_462924;
        case 0x462928u: goto label_462928;
        case 0x46292cu: goto label_46292c;
        case 0x462930u: goto label_462930;
        case 0x462934u: goto label_462934;
        case 0x462938u: goto label_462938;
        case 0x46293cu: goto label_46293c;
        case 0x462940u: goto label_462940;
        case 0x462944u: goto label_462944;
        case 0x462948u: goto label_462948;
        case 0x46294cu: goto label_46294c;
        case 0x462950u: goto label_462950;
        case 0x462954u: goto label_462954;
        case 0x462958u: goto label_462958;
        case 0x46295cu: goto label_46295c;
        case 0x462960u: goto label_462960;
        case 0x462964u: goto label_462964;
        case 0x462968u: goto label_462968;
        case 0x46296cu: goto label_46296c;
        case 0x462970u: goto label_462970;
        case 0x462974u: goto label_462974;
        case 0x462978u: goto label_462978;
        case 0x46297cu: goto label_46297c;
        case 0x462980u: goto label_462980;
        case 0x462984u: goto label_462984;
        case 0x462988u: goto label_462988;
        case 0x46298cu: goto label_46298c;
        case 0x462990u: goto label_462990;
        case 0x462994u: goto label_462994;
        case 0x462998u: goto label_462998;
        case 0x46299cu: goto label_46299c;
        case 0x4629a0u: goto label_4629a0;
        case 0x4629a4u: goto label_4629a4;
        case 0x4629a8u: goto label_4629a8;
        case 0x4629acu: goto label_4629ac;
        case 0x4629b0u: goto label_4629b0;
        case 0x4629b4u: goto label_4629b4;
        case 0x4629b8u: goto label_4629b8;
        case 0x4629bcu: goto label_4629bc;
        case 0x4629c0u: goto label_4629c0;
        case 0x4629c4u: goto label_4629c4;
        case 0x4629c8u: goto label_4629c8;
        case 0x4629ccu: goto label_4629cc;
        case 0x4629d0u: goto label_4629d0;
        case 0x4629d4u: goto label_4629d4;
        case 0x4629d8u: goto label_4629d8;
        case 0x4629dcu: goto label_4629dc;
        case 0x4629e0u: goto label_4629e0;
        case 0x4629e4u: goto label_4629e4;
        case 0x4629e8u: goto label_4629e8;
        case 0x4629ecu: goto label_4629ec;
        case 0x4629f0u: goto label_4629f0;
        case 0x4629f4u: goto label_4629f4;
        case 0x4629f8u: goto label_4629f8;
        case 0x4629fcu: goto label_4629fc;
        case 0x462a00u: goto label_462a00;
        case 0x462a04u: goto label_462a04;
        case 0x462a08u: goto label_462a08;
        case 0x462a0cu: goto label_462a0c;
        case 0x462a10u: goto label_462a10;
        case 0x462a14u: goto label_462a14;
        case 0x462a18u: goto label_462a18;
        case 0x462a1cu: goto label_462a1c;
        case 0x462a20u: goto label_462a20;
        case 0x462a24u: goto label_462a24;
        case 0x462a28u: goto label_462a28;
        case 0x462a2cu: goto label_462a2c;
        case 0x462a30u: goto label_462a30;
        case 0x462a34u: goto label_462a34;
        case 0x462a38u: goto label_462a38;
        case 0x462a3cu: goto label_462a3c;
        case 0x462a40u: goto label_462a40;
        case 0x462a44u: goto label_462a44;
        case 0x462a48u: goto label_462a48;
        case 0x462a4cu: goto label_462a4c;
        case 0x462a50u: goto label_462a50;
        case 0x462a54u: goto label_462a54;
        case 0x462a58u: goto label_462a58;
        case 0x462a5cu: goto label_462a5c;
        case 0x462a60u: goto label_462a60;
        case 0x462a64u: goto label_462a64;
        case 0x462a68u: goto label_462a68;
        case 0x462a6cu: goto label_462a6c;
        case 0x462a70u: goto label_462a70;
        case 0x462a74u: goto label_462a74;
        case 0x462a78u: goto label_462a78;
        case 0x462a7cu: goto label_462a7c;
        case 0x462a80u: goto label_462a80;
        case 0x462a84u: goto label_462a84;
        case 0x462a88u: goto label_462a88;
        case 0x462a8cu: goto label_462a8c;
        case 0x462a90u: goto label_462a90;
        case 0x462a94u: goto label_462a94;
        case 0x462a98u: goto label_462a98;
        case 0x462a9cu: goto label_462a9c;
        case 0x462aa0u: goto label_462aa0;
        case 0x462aa4u: goto label_462aa4;
        case 0x462aa8u: goto label_462aa8;
        case 0x462aacu: goto label_462aac;
        case 0x462ab0u: goto label_462ab0;
        case 0x462ab4u: goto label_462ab4;
        case 0x462ab8u: goto label_462ab8;
        case 0x462abcu: goto label_462abc;
        case 0x462ac0u: goto label_462ac0;
        case 0x462ac4u: goto label_462ac4;
        case 0x462ac8u: goto label_462ac8;
        case 0x462accu: goto label_462acc;
        case 0x462ad0u: goto label_462ad0;
        case 0x462ad4u: goto label_462ad4;
        case 0x462ad8u: goto label_462ad8;
        case 0x462adcu: goto label_462adc;
        case 0x462ae0u: goto label_462ae0;
        case 0x462ae4u: goto label_462ae4;
        case 0x462ae8u: goto label_462ae8;
        case 0x462aecu: goto label_462aec;
        case 0x462af0u: goto label_462af0;
        case 0x462af4u: goto label_462af4;
        case 0x462af8u: goto label_462af8;
        case 0x462afcu: goto label_462afc;
        case 0x462b00u: goto label_462b00;
        case 0x462b04u: goto label_462b04;
        case 0x462b08u: goto label_462b08;
        case 0x462b0cu: goto label_462b0c;
        case 0x462b10u: goto label_462b10;
        case 0x462b14u: goto label_462b14;
        case 0x462b18u: goto label_462b18;
        case 0x462b1cu: goto label_462b1c;
        case 0x462b20u: goto label_462b20;
        case 0x462b24u: goto label_462b24;
        case 0x462b28u: goto label_462b28;
        case 0x462b2cu: goto label_462b2c;
        case 0x462b30u: goto label_462b30;
        case 0x462b34u: goto label_462b34;
        case 0x462b38u: goto label_462b38;
        case 0x462b3cu: goto label_462b3c;
        case 0x462b40u: goto label_462b40;
        case 0x462b44u: goto label_462b44;
        case 0x462b48u: goto label_462b48;
        case 0x462b4cu: goto label_462b4c;
        case 0x462b50u: goto label_462b50;
        case 0x462b54u: goto label_462b54;
        case 0x462b58u: goto label_462b58;
        case 0x462b5cu: goto label_462b5c;
        default: break;
    }

    ctx->pc = 0x4625f0u;

label_4625f0:
    // 0x4625f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4625f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4625f4:
    // 0x4625f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4625f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4625f8:
    // 0x4625f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4625f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4625fc:
    // 0x4625fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4625fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_462600:
    // 0x462600: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x462600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462604:
    // 0x462604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462608:
    // 0x462608: 0x3404fe10  ori         $a0, $zero, 0xFE10
    ctx->pc = 0x462608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65040);
label_46260c:
    // 0x46260c: 0xc040180  jal         func_100600
label_462610:
    if (ctx->pc == 0x462610u) {
        ctx->pc = 0x462610u;
            // 0x462610: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x462614u;
        goto label_462614;
    }
    ctx->pc = 0x46260Cu;
    SET_GPR_U32(ctx, 31, 0x462614u);
    ctx->pc = 0x462610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46260Cu;
            // 0x462610: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462614u; }
        if (ctx->pc != 0x462614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462614u; }
        if (ctx->pc != 0x462614u) { return; }
    }
    ctx->pc = 0x462614u;
label_462614:
    // 0x462614: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_462618:
    if (ctx->pc == 0x462618u) {
        ctx->pc = 0x462618u;
            // 0x462618: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46261Cu;
        goto label_46261c;
    }
    ctx->pc = 0x462614u;
    {
        const bool branch_taken_0x462614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462614u;
            // 0x462618: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462614) {
            ctx->pc = 0x462718u;
            goto label_462718;
        }
    }
    ctx->pc = 0x46261Cu;
label_46261c:
    // 0x46261c: 0x8e710968  lw          $s1, 0x968($s3)
    ctx->pc = 0x46261cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_462620:
    // 0x462620: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x462620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_462624:
    // 0x462624: 0x24a5e678  addiu       $a1, $a1, -0x1988
    ctx->pc = 0x462624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960760));
label_462628:
    // 0x462628: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x462628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_46262c:
    // 0x46262c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46262cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462630:
    // 0x462630: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x462630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_462634:
    // 0x462634: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x462634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_462638:
    // 0x462638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x462638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46263c:
    // 0x46263c: 0x34658706  ori         $a1, $v1, 0x8706
    ctx->pc = 0x46263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34566);
label_462640:
    // 0x462640: 0xac523e78  sw          $s2, 0x3E78($v0)
    ctx->pc = 0x462640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15992), GPR_U32(ctx, 18));
label_462644:
    // 0x462644: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x462644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_462648:
    // 0x462648: 0xc10ca68  jal         func_4329A0
label_46264c:
    if (ctx->pc == 0x46264Cu) {
        ctx->pc = 0x46264Cu;
            // 0x46264c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x462650u;
        goto label_462650;
    }
    ctx->pc = 0x462648u;
    SET_GPR_U32(ctx, 31, 0x462650u);
    ctx->pc = 0x46264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462648u;
            // 0x46264c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462650u; }
        if (ctx->pc != 0x462650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462650u; }
        if (ctx->pc != 0x462650u) { return; }
    }
    ctx->pc = 0x462650u;
label_462650:
    // 0x462650: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x462650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_462654:
    // 0x462654: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x462654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_462658:
    // 0x462658: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x462658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_46265c:
    // 0x46265c: 0x2442e630  addiu       $v0, $v0, -0x19D0
    ctx->pc = 0x46265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960688));
label_462660:
    // 0x462660: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x462660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_462664:
    // 0x462664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x462664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462668:
    // 0x462668: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x462668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_46266c:
    // 0x46266c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x46266cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_462670:
    // 0x462670: 0x2463e63c  addiu       $v1, $v1, -0x19C4
    ctx->pc = 0x462670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960700));
label_462674:
    // 0x462674: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x462674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_462678:
    // 0x462678: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x462678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_46267c:
    // 0x46267c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x46267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_462680:
    // 0x462680: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x462680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_462684:
    // 0x462684: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x462684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_462688:
    // 0x462688: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x462688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46268c:
    // 0x46268c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x46268cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_462690:
    // 0x462690: 0xa040fd84  sb          $zero, -0x27C($v0)
    ctx->pc = 0x462690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294966660), (uint8_t)GPR_U32(ctx, 0));
label_462694:
    // 0x462694: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x462694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_462698:
    // 0x462698: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x462698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_46269c:
    // 0x46269c: 0xa071fd85  sb          $s1, -0x27B($v1)
    ctx->pc = 0x46269cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966661), (uint8_t)GPR_U32(ctx, 17));
label_4626a0:
    // 0x4626a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4626a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4626a4:
    // 0x4626a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4626a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4626a8:
    // 0x4626a8: 0xac40fd90  sw          $zero, -0x270($v0)
    ctx->pc = 0x4626a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966672), GPR_U32(ctx, 0));
label_4626ac:
    // 0x4626ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4626acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4626b0:
    // 0x4626b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4626b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4626b4:
    // 0x4626b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4626b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4626b8:
    // 0x4626b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4626b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4626bc:
    // 0x4626bc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x4626bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4626c0:
    // 0x4626c0: 0xa044fd94  sb          $a0, -0x26C($v0)
    ctx->pc = 0x4626c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294966676), (uint8_t)GPR_U32(ctx, 4));
label_4626c4:
    // 0x4626c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4626c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4626c8:
    // 0x4626c8: 0xa060fd95  sb          $zero, -0x26B($v1)
    ctx->pc = 0x4626c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966677), (uint8_t)GPR_U32(ctx, 0));
label_4626cc:
    // 0x4626cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4626ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4626d0:
    // 0x4626d0: 0x3404fd40  ori         $a0, $zero, 0xFD40
    ctx->pc = 0x4626d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
label_4626d4:
    // 0x4626d4: 0xc040140  jal         func_100500
label_4626d8:
    if (ctx->pc == 0x4626D8u) {
        ctx->pc = 0x4626D8u;
            // 0x4626d8: 0xa040fd96  sb          $zero, -0x26A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294966678), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4626DCu;
        goto label_4626dc;
    }
    ctx->pc = 0x4626D4u;
    SET_GPR_U32(ctx, 31, 0x4626DCu);
    ctx->pc = 0x4626D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4626D4u;
            // 0x4626d8: 0xa040fd96  sb          $zero, -0x26A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294966678), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4626DCu; }
        if (ctx->pc != 0x4626DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4626DCu; }
        if (ctx->pc != 0x4626DCu) { return; }
    }
    ctx->pc = 0x4626DCu;
label_4626dc:
    // 0x4626dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4626dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4626e0:
    // 0x4626e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4626e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4626e4:
    // 0x4626e4: 0xac626060  sw          $v0, 0x6060($v1)
    ctx->pc = 0x4626e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24672), GPR_U32(ctx, 2));
label_4626e8:
    // 0x4626e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4626e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4626ec:
    // 0x4626ec: 0xc04a576  jal         func_1295D8
label_4626f0:
    if (ctx->pc == 0x4626F0u) {
        ctx->pc = 0x4626F0u;
            // 0x4626f0: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->pc = 0x4626F4u;
        goto label_4626f4;
    }
    ctx->pc = 0x4626ECu;
    SET_GPR_U32(ctx, 31, 0x4626F4u);
    ctx->pc = 0x4626F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4626ECu;
            // 0x4626f0: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4626F4u; }
        if (ctx->pc != 0x4626F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4626F4u; }
        if (ctx->pc != 0x4626F4u) { return; }
    }
    ctx->pc = 0x4626F4u;
label_4626f4:
    // 0x4626f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4626f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4626f8:
    // 0x4626f8: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x4626f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_4626fc:
    // 0x4626fc: 0x8c666060  lw          $a2, 0x6060($v1)
    ctx->pc = 0x4626fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24672)));
label_462700:
    // 0x462700: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x462700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_462704:
    // 0x462704: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x462704u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
label_462708:
    // 0x462708: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x462708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_46270c:
    // 0x46270c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x46270cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_462710:
    // 0x462710: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x462710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_462714:
    // 0x462714: 0xa0c3000c  sb          $v1, 0xC($a2)
    ctx->pc = 0x462714u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
label_462718:
    // 0x462718: 0xae720cbc  sw          $s2, 0xCBC($s3)
    ctx->pc = 0x462718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3260), GPR_U32(ctx, 18));
label_46271c:
    // 0x46271c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46271cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_462720:
    // 0x462720: 0x8c656058  lw          $a1, 0x6058($v1)
    ctx->pc = 0x462720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24664)));
label_462724:
    // 0x462724: 0x90a4000c  lbu         $a0, 0xC($a1)
    ctx->pc = 0x462724u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
label_462728:
    // 0x462728: 0x41efc  dsll32      $v1, $a0, 27
    ctx->pc = 0x462728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 27));
label_46272c:
    // 0x46272c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x46272cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_462730:
    // 0x462730: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_462734:
    if (ctx->pc == 0x462734u) {
        ctx->pc = 0x462734u;
            // 0x462734: 0x8e660968  lw          $a2, 0x968($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
        ctx->pc = 0x462738u;
        goto label_462738;
    }
    ctx->pc = 0x462730u;
    {
        const bool branch_taken_0x462730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x462734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462730u;
            // 0x462734: 0x8e660968  lw          $a2, 0x968($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462730) {
            ctx->pc = 0x462750u;
            goto label_462750;
        }
    }
    ctx->pc = 0x462738u;
label_462738:
    // 0x462738: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x462738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_46273c:
    // 0x46273c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x46273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_462740:
    // 0x462740: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_462744:
    if (ctx->pc == 0x462744u) {
        ctx->pc = 0x462744u;
            // 0x462744: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462748u;
        goto label_462748;
    }
    ctx->pc = 0x462740u;
    {
        const bool branch_taken_0x462740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x462740) {
            ctx->pc = 0x462744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462740u;
            // 0x462744: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462754u;
            goto label_462754;
        }
    }
    ctx->pc = 0x462748u;
label_462748:
    // 0x462748: 0x10000002  b           . + 4 + (0x2 << 2)
label_46274c:
    if (ctx->pc == 0x46274Cu) {
        ctx->pc = 0x46274Cu;
            // 0x46274c: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x462750u;
        goto label_462750;
    }
    ctx->pc = 0x462748u;
    {
        const bool branch_taken_0x462748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462748u;
            // 0x46274c: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462748) {
            ctx->pc = 0x462754u;
            goto label_462754;
        }
    }
    ctx->pc = 0x462750u;
label_462750:
    // 0x462750: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x462750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462754:
    // 0x462754: 0xae630cc0  sw          $v1, 0xCC0($s3)
    ctx->pc = 0x462754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3264), GPR_U32(ctx, 3));
label_462758:
    // 0x462758: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x462758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_46275c:
    // 0x46275c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46275cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_462760:
    // 0x462760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x462760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_462764:
    // 0x462764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x462764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462768:
    // 0x462768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46276c:
    // 0x46276c: 0x3e00008  jr          $ra
label_462770:
    if (ctx->pc == 0x462770u) {
        ctx->pc = 0x462770u;
            // 0x462770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x462774u;
        goto label_462774;
    }
    ctx->pc = 0x46276Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46276Cu;
            // 0x462770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462774u;
label_462774:
    // 0x462774: 0x0  nop
    ctx->pc = 0x462774u;
    // NOP
label_462778:
    // 0x462778: 0x0  nop
    ctx->pc = 0x462778u;
    // NOP
label_46277c:
    // 0x46277c: 0x0  nop
    ctx->pc = 0x46277cu;
    // NOP
label_462780:
    // 0x462780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x462780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_462784:
    // 0x462784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x462784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_462788:
    // 0x462788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46278c:
    // 0x46278c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46278cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462790:
    // 0x462790: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_462794:
    if (ctx->pc == 0x462794u) {
        ctx->pc = 0x462794u;
            // 0x462794: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462798u;
        goto label_462798;
    }
    ctx->pc = 0x462790u;
    {
        const bool branch_taken_0x462790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x462790) {
            ctx->pc = 0x462794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462790u;
            // 0x462794: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4627C4u;
            goto label_4627c4;
        }
    }
    ctx->pc = 0x462798u;
label_462798:
    // 0x462798: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x462798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_46279c:
    // 0x46279c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x46279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_4627a0:
    // 0x4627a0: 0x2442e678  addiu       $v0, $v0, -0x1988
    ctx->pc = 0x4627a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960760));
label_4627a4:
    // 0x4627a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4627a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4627a8:
    // 0x4627a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4627a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4627ac:
    // 0x4627ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4627acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4627b0:
    // 0x4627b0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_4627b4:
    if (ctx->pc == 0x4627B4u) {
        ctx->pc = 0x4627B4u;
            // 0x4627b4: 0xac403e78  sw          $zero, 0x3E78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15992), GPR_U32(ctx, 0));
        ctx->pc = 0x4627B8u;
        goto label_4627b8;
    }
    ctx->pc = 0x4627B0u;
    {
        const bool branch_taken_0x4627b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4627B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4627B0u;
            // 0x4627b4: 0xac403e78  sw          $zero, 0x3E78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4627b0) {
            ctx->pc = 0x4627C0u;
            goto label_4627c0;
        }
    }
    ctx->pc = 0x4627B8u;
label_4627b8:
    // 0x4627b8: 0xc0400a8  jal         func_1002A0
label_4627bc:
    if (ctx->pc == 0x4627BCu) {
        ctx->pc = 0x4627C0u;
        goto label_4627c0;
    }
    ctx->pc = 0x4627B8u;
    SET_GPR_U32(ctx, 31, 0x4627C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4627C0u; }
        if (ctx->pc != 0x4627C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4627C0u; }
        if (ctx->pc != 0x4627C0u) { return; }
    }
    ctx->pc = 0x4627C0u;
label_4627c0:
    // 0x4627c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4627c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4627c4:
    // 0x4627c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4627c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4627c8:
    // 0x4627c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4627c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4627cc:
    // 0x4627cc: 0x3e00008  jr          $ra
label_4627d0:
    if (ctx->pc == 0x4627D0u) {
        ctx->pc = 0x4627D0u;
            // 0x4627d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4627D4u;
        goto label_4627d4;
    }
    ctx->pc = 0x4627CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4627D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4627CCu;
            // 0x4627d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4627D4u;
label_4627d4:
    // 0x4627d4: 0x0  nop
    ctx->pc = 0x4627d4u;
    // NOP
label_4627d8:
    // 0x4627d8: 0x0  nop
    ctx->pc = 0x4627d8u;
    // NOP
label_4627dc:
    // 0x4627dc: 0x0  nop
    ctx->pc = 0x4627dcu;
    // NOP
label_4627e0:
    // 0x4627e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4627e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4627e4:
    // 0x4627e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4627e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4627e8:
    // 0x4627e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4627e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4627ec:
    // 0x4627ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4627ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4627f0:
    // 0x4627f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4627f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4627f4:
    // 0x4627f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4627f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4627f8:
    // 0x4627f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4627f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4627fc:
    // 0x4627fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4627fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462800:
    // 0x462800: 0xac820ca8  sw          $v0, 0xCA8($a0)
    ctx->pc = 0x462800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3240), GPR_U32(ctx, 2));
label_462804:
    // 0x462804: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x462804u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_462808:
    // 0x462808: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x462808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
label_46280c:
    // 0x46280c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x46280cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_462810:
    // 0x462810: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_462814:
    if (ctx->pc == 0x462814u) {
        ctx->pc = 0x462814u;
            // 0x462814: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462818u;
        goto label_462818;
    }
    ctx->pc = 0x462810u;
    {
        const bool branch_taken_0x462810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x462814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462810u;
            // 0x462814: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462810) {
            ctx->pc = 0x4628ECu;
            goto label_4628ec;
        }
    }
    ctx->pc = 0x462818u;
label_462818:
    // 0x462818: 0x8e63095c  lw          $v1, 0x95C($s3)
    ctx->pc = 0x462818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2396)));
label_46281c:
    // 0x46281c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462820:
    // 0x462820: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
label_462824:
    if (ctx->pc == 0x462824u) {
        ctx->pc = 0x462824u;
            // 0x462824: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x462828u;
        goto label_462828;
    }
    ctx->pc = 0x462820u;
    {
        const bool branch_taken_0x462820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x462820) {
            ctx->pc = 0x462824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462820u;
            // 0x462824: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4628F0u;
            goto label_4628f0;
        }
    }
    ctx->pc = 0x462828u;
label_462828:
    // 0x462828: 0xc040180  jal         func_100600
label_46282c:
    if (ctx->pc == 0x46282Cu) {
        ctx->pc = 0x46282Cu;
            // 0x46282c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x462830u;
        goto label_462830;
    }
    ctx->pc = 0x462828u;
    SET_GPR_U32(ctx, 31, 0x462830u);
    ctx->pc = 0x46282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462828u;
            // 0x46282c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462830u; }
        if (ctx->pc != 0x462830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462830u; }
        if (ctx->pc != 0x462830u) { return; }
    }
    ctx->pc = 0x462830u;
label_462830:
    // 0x462830: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_462834:
    if (ctx->pc == 0x462834u) {
        ctx->pc = 0x462834u;
            // 0x462834: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462838u;
        goto label_462838;
    }
    ctx->pc = 0x462830u;
    {
        const bool branch_taken_0x462830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462830u;
            // 0x462834: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462830) {
            ctx->pc = 0x4628E4u;
            goto label_4628e4;
        }
    }
    ctx->pc = 0x462838u;
label_462838:
    // 0x462838: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x462838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_46283c:
    // 0x46283c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462840:
    // 0x462840: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x462840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_462844:
    // 0x462844: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x462844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_462848:
    // 0x462848: 0xc10ca68  jal         func_4329A0
label_46284c:
    if (ctx->pc == 0x46284Cu) {
        ctx->pc = 0x46284Cu;
            // 0x46284c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462850u;
        goto label_462850;
    }
    ctx->pc = 0x462848u;
    SET_GPR_U32(ctx, 31, 0x462850u);
    ctx->pc = 0x46284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462848u;
            // 0x46284c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462850u; }
        if (ctx->pc != 0x462850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462850u; }
        if (ctx->pc != 0x462850u) { return; }
    }
    ctx->pc = 0x462850u;
label_462850:
    // 0x462850: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x462850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_462854:
    // 0x462854: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x462854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_462858:
    // 0x462858: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x462858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_46285c:
    // 0x46285c: 0x244246e0  addiu       $v0, $v0, 0x46E0
    ctx->pc = 0x46285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18144));
label_462860:
    // 0x462860: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x462860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_462864:
    // 0x462864: 0x26640ca8  addiu       $a0, $s3, 0xCA8
    ctx->pc = 0x462864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3240));
label_462868:
    // 0x462868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x462868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_46286c:
    // 0x46286c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x46286cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_462870:
    // 0x462870: 0xa2120054  sb          $s2, 0x54($s0)
    ctx->pc = 0x462870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 18));
label_462874:
    // 0x462874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x462874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462878:
    // 0x462878: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x462878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_46287c:
    // 0x46287c: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x46287cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
label_462880:
    // 0x462880: 0xa202005d  sb          $v0, 0x5D($s0)
    ctx->pc = 0x462880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 2));
label_462884:
    // 0x462884: 0xa200005e  sb          $zero, 0x5E($s0)
    ctx->pc = 0x462884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 0));
label_462888:
    // 0x462888: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x462888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_46288c:
    // 0x46288c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46288cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_462890:
    // 0x462890: 0x9202005d  lbu         $v0, 0x5D($s0)
    ctx->pc = 0x462890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_462894:
    // 0x462894: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_462898:
    if (ctx->pc == 0x462898u) {
        ctx->pc = 0x462898u;
            // 0x462898: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->pc = 0x46289Cu;
        goto label_46289c;
    }
    ctx->pc = 0x462894u;
    {
        const bool branch_taken_0x462894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462894) {
            ctx->pc = 0x462898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462894u;
            // 0x462898: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4628DCu;
            goto label_4628dc;
        }
    }
    ctx->pc = 0x46289Cu;
label_46289c:
    // 0x46289c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4628a0:
    // 0x4628a0: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x4628a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4628a4:
    // 0x4628a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4628a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4628a8:
    // 0x4628a8: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x4628a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_4628ac:
    // 0x4628ac: 0x320f809  jalr        $t9
label_4628b0:
    if (ctx->pc == 0x4628B0u) {
        ctx->pc = 0x4628B0u;
            // 0x4628b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4628B4u;
        goto label_4628b4;
    }
    ctx->pc = 0x4628ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4628B4u);
        ctx->pc = 0x4628B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4628ACu;
            // 0x4628b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4628B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4628B4u; }
            if (ctx->pc != 0x4628B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4628B4u;
label_4628b4:
    // 0x4628b4: 0xc0746e4  jal         func_1D1B90
label_4628b8:
    if (ctx->pc == 0x4628B8u) {
        ctx->pc = 0x4628B8u;
            // 0x4628b8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4628BCu;
        goto label_4628bc;
    }
    ctx->pc = 0x4628B4u;
    SET_GPR_U32(ctx, 31, 0x4628BCu);
    ctx->pc = 0x4628B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4628B4u;
            // 0x4628b8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628BCu; }
        if (ctx->pc != 0x4628BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628BCu; }
        if (ctx->pc != 0x4628BCu) { return; }
    }
    ctx->pc = 0x4628BCu;
label_4628bc:
    // 0x4628bc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4628bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4628c0:
    // 0x4628c0: 0xc073234  jal         func_1CC8D0
label_4628c4:
    if (ctx->pc == 0x4628C4u) {
        ctx->pc = 0x4628C4u;
            // 0x4628c4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4628C8u;
        goto label_4628c8;
    }
    ctx->pc = 0x4628C0u;
    SET_GPR_U32(ctx, 31, 0x4628C8u);
    ctx->pc = 0x4628C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4628C0u;
            // 0x4628c4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628C8u; }
        if (ctx->pc != 0x4628C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628C8u; }
        if (ctx->pc != 0x4628C8u) { return; }
    }
    ctx->pc = 0x4628C8u;
label_4628c8:
    // 0x4628c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4628c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4628cc:
    // 0x4628cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4628ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4628d0:
    // 0x4628d0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4628d4:
    // 0x4628d4: 0xa0430082  sb          $v1, 0x82($v0)
    ctx->pc = 0x4628d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 3));
label_4628d8:
    // 0x4628d8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4628d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4628dc:
    // 0x4628dc: 0xc073234  jal         func_1CC8D0
label_4628e0:
    if (ctx->pc == 0x4628E0u) {
        ctx->pc = 0x4628E0u;
            // 0x4628e0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4628E4u;
        goto label_4628e4;
    }
    ctx->pc = 0x4628DCu;
    SET_GPR_U32(ctx, 31, 0x4628E4u);
    ctx->pc = 0x4628E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4628DCu;
            // 0x4628e0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628E4u; }
        if (ctx->pc != 0x4628E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628E4u; }
        if (ctx->pc != 0x4628E4u) { return; }
    }
    ctx->pc = 0x4628E4u;
label_4628e4:
    // 0x4628e4: 0x10000031  b           . + 4 + (0x31 << 2)
label_4628e8:
    if (ctx->pc == 0x4628E8u) {
        ctx->pc = 0x4628E8u;
            // 0x4628e8: 0xa2600ccc  sb          $zero, 0xCCC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3276), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4628ECu;
        goto label_4628ec;
    }
    ctx->pc = 0x4628E4u;
    {
        const bool branch_taken_0x4628e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4628E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4628E4u;
            // 0x4628e8: 0xa2600ccc  sb          $zero, 0xCCC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3276), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4628e4) {
            ctx->pc = 0x4629ACu;
            goto label_4629ac;
        }
    }
    ctx->pc = 0x4628ECu;
label_4628ec:
    // 0x4628ec: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4628ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4628f0:
    // 0x4628f0: 0xc040180  jal         func_100600
label_4628f4:
    if (ctx->pc == 0x4628F4u) {
        ctx->pc = 0x4628F8u;
        goto label_4628f8;
    }
    ctx->pc = 0x4628F0u;
    SET_GPR_U32(ctx, 31, 0x4628F8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628F8u; }
        if (ctx->pc != 0x4628F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4628F8u; }
        if (ctx->pc != 0x4628F8u) { return; }
    }
    ctx->pc = 0x4628F8u;
label_4628f8:
    // 0x4628f8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_4628fc:
    if (ctx->pc == 0x4628FCu) {
        ctx->pc = 0x4628FCu;
            // 0x4628fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462900u;
        goto label_462900;
    }
    ctx->pc = 0x4628F8u;
    {
        const bool branch_taken_0x4628f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4628FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4628F8u;
            // 0x4628fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4628f8) {
            ctx->pc = 0x4629ACu;
            goto label_4629ac;
        }
    }
    ctx->pc = 0x462900u;
label_462900:
    // 0x462900: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x462900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_462904:
    // 0x462904: 0x92700ccc  lbu         $s0, 0xCCC($s3)
    ctx->pc = 0x462904u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3276)));
label_462908:
    // 0x462908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x462908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46290c:
    // 0x46290c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x46290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_462910:
    // 0x462910: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x462910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_462914:
    // 0x462914: 0xc10ca68  jal         func_4329A0
label_462918:
    if (ctx->pc == 0x462918u) {
        ctx->pc = 0x462918u;
            // 0x462918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46291Cu;
        goto label_46291c;
    }
    ctx->pc = 0x462914u;
    SET_GPR_U32(ctx, 31, 0x46291Cu);
    ctx->pc = 0x462918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462914u;
            // 0x462918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46291Cu; }
        if (ctx->pc != 0x46291Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46291Cu; }
        if (ctx->pc != 0x46291Cu) { return; }
    }
    ctx->pc = 0x46291Cu;
label_46291c:
    // 0x46291c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x46291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_462920:
    // 0x462920: 0x26620ca8  addiu       $v0, $s3, 0xCA8
    ctx->pc = 0x462920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3240));
label_462924:
    // 0x462924: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x462924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_462928:
    // 0x462928: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x462928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_46292c:
    // 0x46292c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x46292cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_462930:
    // 0x462930: 0x246346e0  addiu       $v1, $v1, 0x46E0
    ctx->pc = 0x462930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18144));
label_462934:
    // 0x462934: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x462934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_462938:
    // 0x462938: 0xa2320054  sb          $s2, 0x54($s1)
    ctx->pc = 0x462938u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 18));
label_46293c:
    // 0x46293c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x46293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_462940:
    // 0x462940: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x462940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_462944:
    // 0x462944: 0xa230005c  sb          $s0, 0x5C($s1)
    ctx->pc = 0x462944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 16));
label_462948:
    // 0x462948: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x462948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_46294c:
    // 0x46294c: 0xa220005e  sb          $zero, 0x5E($s1)
    ctx->pc = 0x46294cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 94), (uint8_t)GPR_U32(ctx, 0));
label_462950:
    // 0x462950: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x462950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_462954:
    // 0x462954: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x462954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_462958:
    // 0x462958: 0x9222005d  lbu         $v0, 0x5D($s1)
    ctx->pc = 0x462958u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
label_46295c:
    // 0x46295c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_462960:
    if (ctx->pc == 0x462960u) {
        ctx->pc = 0x462960u;
            // 0x462960: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->pc = 0x462964u;
        goto label_462964;
    }
    ctx->pc = 0x46295Cu;
    {
        const bool branch_taken_0x46295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46295c) {
            ctx->pc = 0x462960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46295Cu;
            // 0x462960: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4629A4u;
            goto label_4629a4;
        }
    }
    ctx->pc = 0x462964u;
label_462964:
    // 0x462964: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x462964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_462968:
    // 0x462968: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x462968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_46296c:
    // 0x46296c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46296cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_462970:
    // 0x462970: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x462970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_462974:
    // 0x462974: 0x320f809  jalr        $t9
label_462978:
    if (ctx->pc == 0x462978u) {
        ctx->pc = 0x462978u;
            // 0x462978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46297Cu;
        goto label_46297c;
    }
    ctx->pc = 0x462974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46297Cu);
        ctx->pc = 0x462978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462974u;
            // 0x462978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46297Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46297Cu; }
            if (ctx->pc != 0x46297Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46297Cu;
label_46297c:
    // 0x46297c: 0xc0746e4  jal         func_1D1B90
label_462980:
    if (ctx->pc == 0x462980u) {
        ctx->pc = 0x462980u;
            // 0x462980: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x462984u;
        goto label_462984;
    }
    ctx->pc = 0x46297Cu;
    SET_GPR_U32(ctx, 31, 0x462984u);
    ctx->pc = 0x462980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46297Cu;
            // 0x462980: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462984u; }
        if (ctx->pc != 0x462984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462984u; }
        if (ctx->pc != 0x462984u) { return; }
    }
    ctx->pc = 0x462984u;
label_462984:
    // 0x462984: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x462984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_462988:
    // 0x462988: 0xc073234  jal         func_1CC8D0
label_46298c:
    if (ctx->pc == 0x46298Cu) {
        ctx->pc = 0x46298Cu;
            // 0x46298c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x462990u;
        goto label_462990;
    }
    ctx->pc = 0x462988u;
    SET_GPR_U32(ctx, 31, 0x462990u);
    ctx->pc = 0x46298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462988u;
            // 0x46298c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462990u; }
        if (ctx->pc != 0x462990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462990u; }
        if (ctx->pc != 0x462990u) { return; }
    }
    ctx->pc = 0x462990u;
label_462990:
    // 0x462990: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x462990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_462994:
    // 0x462994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x462994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462998:
    // 0x462998: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x462998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_46299c:
    // 0x46299c: 0xa0430082  sb          $v1, 0x82($v0)
    ctx->pc = 0x46299cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 3));
label_4629a0:
    // 0x4629a0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4629a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4629a4:
    // 0x4629a4: 0xc073234  jal         func_1CC8D0
label_4629a8:
    if (ctx->pc == 0x4629A8u) {
        ctx->pc = 0x4629A8u;
            // 0x4629a8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4629ACu;
        goto label_4629ac;
    }
    ctx->pc = 0x4629A4u;
    SET_GPR_U32(ctx, 31, 0x4629ACu);
    ctx->pc = 0x4629A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4629A4u;
            // 0x4629a8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4629ACu; }
        if (ctx->pc != 0x4629ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4629ACu; }
        if (ctx->pc != 0x4629ACu) { return; }
    }
    ctx->pc = 0x4629ACu;
label_4629ac:
    // 0x4629ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4629acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4629b0:
    // 0x4629b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4629b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4629b4:
    // 0x4629b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4629b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4629b8:
    // 0x4629b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4629b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4629bc:
    // 0x4629bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4629bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4629c0:
    // 0x4629c0: 0x3e00008  jr          $ra
label_4629c4:
    if (ctx->pc == 0x4629C4u) {
        ctx->pc = 0x4629C4u;
            // 0x4629c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4629C8u;
        goto label_4629c8;
    }
    ctx->pc = 0x4629C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4629C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4629C0u;
            // 0x4629c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4629C8u;
label_4629c8:
    // 0x4629c8: 0x0  nop
    ctx->pc = 0x4629c8u;
    // NOP
label_4629cc:
    // 0x4629cc: 0x0  nop
    ctx->pc = 0x4629ccu;
    // NOP
label_4629d0:
    // 0x4629d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4629d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4629d4:
    // 0x4629d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4629d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4629d8:
    // 0x4629d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4629d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4629dc:
    // 0x4629dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4629dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4629e0:
    // 0x4629e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4629e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4629e4:
    // 0x4629e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4629e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4629e8:
    // 0x4629e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4629e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4629ec:
    // 0x4629ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4629ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4629f0:
    // 0x4629f0: 0xc040180  jal         func_100600
label_4629f4:
    if (ctx->pc == 0x4629F4u) {
        ctx->pc = 0x4629F4u;
            // 0x4629f4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x4629F8u;
        goto label_4629f8;
    }
    ctx->pc = 0x4629F0u;
    SET_GPR_U32(ctx, 31, 0x4629F8u);
    ctx->pc = 0x4629F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4629F0u;
            // 0x4629f4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4629F8u; }
        if (ctx->pc != 0x4629F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4629F8u; }
        if (ctx->pc != 0x4629F8u) { return; }
    }
    ctx->pc = 0x4629F8u;
label_4629f8:
    // 0x4629f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4629f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4629fc:
    // 0x4629fc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_462a00:
    if (ctx->pc == 0x462A00u) {
        ctx->pc = 0x462A00u;
            // 0x462a00: 0xac90005c  sw          $s0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 16));
        ctx->pc = 0x462A04u;
        goto label_462a04;
    }
    ctx->pc = 0x4629FCu;
    {
        const bool branch_taken_0x4629fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4629fc) {
            ctx->pc = 0x462A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4629FCu;
            // 0x462a00: 0xac90005c  sw          $s0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462A24u;
            goto label_462a24;
        }
    }
    ctx->pc = 0x462A04u;
label_462a04:
    // 0x462a04: 0x8e490968  lw          $t1, 0x968($s2)
    ctx->pc = 0x462a04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_462a08:
    // 0x462a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x462a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462a0c:
    // 0x462a0c: 0x26460ca8  addiu       $a2, $s2, 0xCA8
    ctx->pc = 0x462a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3240));
label_462a10:
    // 0x462a10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x462a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_462a14:
    // 0x462a14: 0xc0c5900  jal         func_316400
label_462a18:
    if (ctx->pc == 0x462A18u) {
        ctx->pc = 0x462A18u;
            // 0x462a18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462A1Cu;
        goto label_462a1c;
    }
    ctx->pc = 0x462A14u;
    SET_GPR_U32(ctx, 31, 0x462A1Cu);
    ctx->pc = 0x462A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462A14u;
            // 0x462a18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316400u;
    if (runtime->hasFunction(0x316400u)) {
        auto targetFn = runtime->lookupFunction(0x316400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462A1Cu; }
        if (ctx->pc != 0x462A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316400_0x316400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462A1Cu; }
        if (ctx->pc != 0x462A1Cu) { return; }
    }
    ctx->pc = 0x462A1Cu;
label_462a1c:
    // 0x462a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x462a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462a20:
    // 0x462a20: 0xac90005c  sw          $s0, 0x5C($a0)
    ctx->pc = 0x462a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 16));
label_462a24:
    // 0x462a24: 0xac900060  sw          $s0, 0x60($a0)
    ctx->pc = 0x462a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 16));
label_462a28:
    // 0x462a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x462a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_462a2c:
    // 0x462a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x462a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_462a30:
    // 0x462a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x462a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462a34:
    // 0x462a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462a38:
    // 0x462a38: 0x3e00008  jr          $ra
label_462a3c:
    if (ctx->pc == 0x462A3Cu) {
        ctx->pc = 0x462A3Cu;
            // 0x462a3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x462A40u;
        goto label_462a40;
    }
    ctx->pc = 0x462A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462A38u;
            // 0x462a3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462A40u;
label_462a40:
    // 0x462a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x462a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_462a44:
    // 0x462a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x462a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_462a48:
    // 0x462a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462a4c:
    // 0x462a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x462a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462a50:
    // 0x462a50: 0x8c840cbc  lw          $a0, 0xCBC($a0)
    ctx->pc = 0x462a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
label_462a54:
    // 0x462a54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_462a58:
    if (ctx->pc == 0x462A58u) {
        ctx->pc = 0x462A58u;
            // 0x462a58: 0xa2000ccc  sb          $zero, 0xCCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3276), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x462A5Cu;
        goto label_462a5c;
    }
    ctx->pc = 0x462A54u;
    {
        const bool branch_taken_0x462a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x462a54) {
            ctx->pc = 0x462A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462A54u;
            // 0x462a58: 0xa2000ccc  sb          $zero, 0xCCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3276), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462A68u;
            goto label_462a68;
        }
    }
    ctx->pc = 0x462A5Cu;
label_462a5c:
    // 0x462a5c: 0xc0dd02c  jal         func_3740B0
label_462a60:
    if (ctx->pc == 0x462A60u) {
        ctx->pc = 0x462A64u;
        goto label_462a64;
    }
    ctx->pc = 0x462A5Cu;
    SET_GPR_U32(ctx, 31, 0x462A64u);
    ctx->pc = 0x3740B0u;
    if (runtime->hasFunction(0x3740B0u)) {
        auto targetFn = runtime->lookupFunction(0x3740B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462A64u; }
        if (ctx->pc != 0x462A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003740B0_0x3740b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462A64u; }
        if (ctx->pc != 0x462A64u) { return; }
    }
    ctx->pc = 0x462A64u;
label_462a64:
    // 0x462a64: 0xa2000ccc  sb          $zero, 0xCCC($s0)
    ctx->pc = 0x462a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3276), (uint8_t)GPR_U32(ctx, 0));
label_462a68:
    // 0x462a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x462a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462a6c:
    // 0x462a6c: 0xae000cdc  sw          $zero, 0xCDC($s0)
    ctx->pc = 0x462a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 0));
label_462a70:
    // 0x462a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x462a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462a74:
    // 0x462a74: 0x92030ce0  lbu         $v1, 0xCE0($s0)
    ctx->pc = 0x462a74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3296)));
label_462a78:
    // 0x462a78: 0xa2030ce1  sb          $v1, 0xCE1($s0)
    ctx->pc = 0x462a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 3));
label_462a7c:
    // 0x462a7c: 0xc0cc888  jal         func_332220
label_462a80:
    if (ctx->pc == 0x462A80u) {
        ctx->pc = 0x462A80u;
            // 0x462a80: 0xa2020ce1  sb          $v0, 0xCE1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x462A84u;
        goto label_462a84;
    }
    ctx->pc = 0x462A7Cu;
    SET_GPR_U32(ctx, 31, 0x462A84u);
    ctx->pc = 0x462A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462A7Cu;
            // 0x462a80: 0xa2020ce1  sb          $v0, 0xCE1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x332220u;
    if (runtime->hasFunction(0x332220u)) {
        auto targetFn = runtime->lookupFunction(0x332220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462A84u; }
        if (ctx->pc != 0x462A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00332220_0x332220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462A84u; }
        if (ctx->pc != 0x462A84u) { return; }
    }
    ctx->pc = 0x462A84u;
label_462a84:
    // 0x462a84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x462a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_462a88:
    // 0x462a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462a8c:
    // 0x462a8c: 0x3e00008  jr          $ra
label_462a90:
    if (ctx->pc == 0x462A90u) {
        ctx->pc = 0x462A90u;
            // 0x462a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x462A94u;
        goto label_462a94;
    }
    ctx->pc = 0x462A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462A8Cu;
            // 0x462a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462A94u;
label_462a94:
    // 0x462a94: 0x0  nop
    ctx->pc = 0x462a94u;
    // NOP
label_462a98:
    // 0x462a98: 0x0  nop
    ctx->pc = 0x462a98u;
    // NOP
label_462a9c:
    // 0x462a9c: 0x0  nop
    ctx->pc = 0x462a9cu;
    // NOP
label_462aa0:
    // 0x462aa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462aa4:
    // 0x462aa4: 0x8c430e84  lw          $v1, 0xE84($v0)
    ctx->pc = 0x462aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_462aa8:
    // 0x462aa8: 0x8c820cbc  lw          $v0, 0xCBC($a0)
    ctx->pc = 0x462aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
label_462aac:
    // 0x462aac: 0x80cc978  j           func_3325E0
label_462ab0:
    if (ctx->pc == 0x462AB0u) {
        ctx->pc = 0x462AB0u;
            // 0x462ab0: 0xac43005c  sw          $v1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
        ctx->pc = 0x462AB4u;
        goto label_462ab4;
    }
    ctx->pc = 0x462AACu;
    ctx->pc = 0x462AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462AACu;
            // 0x462ab0: 0xac43005c  sw          $v1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3325E0u;
    if (runtime->hasFunction(0x3325E0u)) {
        auto targetFn = runtime->lookupFunction(0x3325E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003325E0_0x3325e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x462AB4u;
label_462ab4:
    // 0x462ab4: 0x0  nop
    ctx->pc = 0x462ab4u;
    // NOP
label_462ab8:
    // 0x462ab8: 0x0  nop
    ctx->pc = 0x462ab8u;
    // NOP
label_462abc:
    // 0x462abc: 0x0  nop
    ctx->pc = 0x462abcu;
    // NOP
label_462ac0:
    // 0x462ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x462ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_462ac4:
    // 0x462ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x462ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_462ac8:
    // 0x462ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462acc:
    // 0x462acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462ad0:
    // 0x462ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x462ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462ad4:
    // 0x462ad4: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_462ad8:
    if (ctx->pc == 0x462AD8u) {
        ctx->pc = 0x462AD8u;
            // 0x462ad8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462ADCu;
        goto label_462adc;
    }
    ctx->pc = 0x462AD4u;
    {
        const bool branch_taken_0x462ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x462AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462AD4u;
            // 0x462ad8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462ad4) {
            ctx->pc = 0x462B44u;
            goto label_462b44;
        }
    }
    ctx->pc = 0x462ADCu;
label_462adc:
    // 0x462adc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x462adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_462ae0:
    // 0x462ae0: 0x2442e570  addiu       $v0, $v0, -0x1A90
    ctx->pc = 0x462ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960496));
label_462ae4:
    // 0x462ae4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x462ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_462ae8:
    // 0x462ae8: 0x8e250cc8  lw          $a1, 0xCC8($s1)
    ctx->pc = 0x462ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3272)));
label_462aec:
    // 0x462aec: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_462af0:
    if (ctx->pc == 0x462AF0u) {
        ctx->pc = 0x462AF0u;
            // 0x462af0: 0x8e250cc4  lw          $a1, 0xCC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
        ctx->pc = 0x462AF4u;
        goto label_462af4;
    }
    ctx->pc = 0x462AECu;
    {
        const bool branch_taken_0x462aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x462aec) {
            ctx->pc = 0x462AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462AECu;
            // 0x462af0: 0x8e250cc4  lw          $a1, 0xCC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462B08u;
            goto label_462b08;
        }
    }
    ctx->pc = 0x462AF4u;
label_462af4:
    // 0x462af4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462af8:
    // 0x462af8: 0xc0fe48c  jal         func_3F9230
label_462afc:
    if (ctx->pc == 0x462AFCu) {
        ctx->pc = 0x462AFCu;
            // 0x462afc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x462B00u;
        goto label_462b00;
    }
    ctx->pc = 0x462AF8u;
    SET_GPR_U32(ctx, 31, 0x462B00u);
    ctx->pc = 0x462AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462AF8u;
            // 0x462afc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B00u; }
        if (ctx->pc != 0x462B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B00u; }
        if (ctx->pc != 0x462B00u) { return; }
    }
    ctx->pc = 0x462B00u;
label_462b00:
    // 0x462b00: 0xae200cc8  sw          $zero, 0xCC8($s1)
    ctx->pc = 0x462b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3272), GPR_U32(ctx, 0));
label_462b04:
    // 0x462b04: 0x8e250cc4  lw          $a1, 0xCC4($s1)
    ctx->pc = 0x462b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
label_462b08:
    // 0x462b08: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_462b0c:
    if (ctx->pc == 0x462B0Cu) {
        ctx->pc = 0x462B0Cu;
            // 0x462b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462B10u;
        goto label_462b10;
    }
    ctx->pc = 0x462B08u;
    {
        const bool branch_taken_0x462b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x462b08) {
            ctx->pc = 0x462B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462B08u;
            // 0x462b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462B24u;
            goto label_462b24;
        }
    }
    ctx->pc = 0x462B10u;
label_462b10:
    // 0x462b10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462b14:
    // 0x462b14: 0xc0fe48c  jal         func_3F9230
label_462b18:
    if (ctx->pc == 0x462B18u) {
        ctx->pc = 0x462B18u;
            // 0x462b18: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x462B1Cu;
        goto label_462b1c;
    }
    ctx->pc = 0x462B14u;
    SET_GPR_U32(ctx, 31, 0x462B1Cu);
    ctx->pc = 0x462B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462B14u;
            // 0x462b18: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B1Cu; }
        if (ctx->pc != 0x462B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B1Cu; }
        if (ctx->pc != 0x462B1Cu) { return; }
    }
    ctx->pc = 0x462B1Cu;
label_462b1c:
    // 0x462b1c: 0xae200cc4  sw          $zero, 0xCC4($s1)
    ctx->pc = 0x462b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3268), GPR_U32(ctx, 0));
label_462b20:
    // 0x462b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x462b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462b24:
    // 0x462b24: 0xc0ccf5c  jal         func_333D70
label_462b28:
    if (ctx->pc == 0x462B28u) {
        ctx->pc = 0x462B28u;
            // 0x462b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462B2Cu;
        goto label_462b2c;
    }
    ctx->pc = 0x462B24u;
    SET_GPR_U32(ctx, 31, 0x462B2Cu);
    ctx->pc = 0x462B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462B24u;
            // 0x462b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333D70u;
    if (runtime->hasFunction(0x333D70u)) {
        auto targetFn = runtime->lookupFunction(0x333D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B2Cu; }
        if (ctx->pc != 0x462B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333D70_0x333d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B2Cu; }
        if (ctx->pc != 0x462B2Cu) { return; }
    }
    ctx->pc = 0x462B2Cu;
label_462b2c:
    // 0x462b2c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x462b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_462b30:
    // 0x462b30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x462b30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_462b34:
    // 0x462b34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_462b38:
    if (ctx->pc == 0x462B38u) {
        ctx->pc = 0x462B38u;
            // 0x462b38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462B3Cu;
        goto label_462b3c;
    }
    ctx->pc = 0x462B34u;
    {
        const bool branch_taken_0x462b34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x462b34) {
            ctx->pc = 0x462B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462B34u;
            // 0x462b38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462B48u;
            goto label_462b48;
        }
    }
    ctx->pc = 0x462B3Cu;
label_462b3c:
    // 0x462b3c: 0xc0400a8  jal         func_1002A0
label_462b40:
    if (ctx->pc == 0x462B40u) {
        ctx->pc = 0x462B40u;
            // 0x462b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462B44u;
        goto label_462b44;
    }
    ctx->pc = 0x462B3Cu;
    SET_GPR_U32(ctx, 31, 0x462B44u);
    ctx->pc = 0x462B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462B3Cu;
            // 0x462b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B44u; }
        if (ctx->pc != 0x462B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B44u; }
        if (ctx->pc != 0x462B44u) { return; }
    }
    ctx->pc = 0x462B44u;
label_462b44:
    // 0x462b44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x462b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462b48:
    // 0x462b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x462b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_462b4c:
    // 0x462b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x462b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462b50:
    // 0x462b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462b54:
    // 0x462b54: 0x3e00008  jr          $ra
label_462b58:
    if (ctx->pc == 0x462B58u) {
        ctx->pc = 0x462B58u;
            // 0x462b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x462B5Cu;
        goto label_462b5c;
    }
    ctx->pc = 0x462B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462B54u;
            // 0x462b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462B5Cu;
label_462b5c:
    // 0x462b5c: 0x0  nop
    ctx->pc = 0x462b5cu;
    // NOP
}
