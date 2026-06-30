#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005625D0
// Address: 0x5625d0 - 0x5629e0
void sub_005625D0_0x5625d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005625D0_0x5625d0");
#endif

    switch (ctx->pc) {
        case 0x5625d0u: goto label_5625d0;
        case 0x5625d4u: goto label_5625d4;
        case 0x5625d8u: goto label_5625d8;
        case 0x5625dcu: goto label_5625dc;
        case 0x5625e0u: goto label_5625e0;
        case 0x5625e4u: goto label_5625e4;
        case 0x5625e8u: goto label_5625e8;
        case 0x5625ecu: goto label_5625ec;
        case 0x5625f0u: goto label_5625f0;
        case 0x5625f4u: goto label_5625f4;
        case 0x5625f8u: goto label_5625f8;
        case 0x5625fcu: goto label_5625fc;
        case 0x562600u: goto label_562600;
        case 0x562604u: goto label_562604;
        case 0x562608u: goto label_562608;
        case 0x56260cu: goto label_56260c;
        case 0x562610u: goto label_562610;
        case 0x562614u: goto label_562614;
        case 0x562618u: goto label_562618;
        case 0x56261cu: goto label_56261c;
        case 0x562620u: goto label_562620;
        case 0x562624u: goto label_562624;
        case 0x562628u: goto label_562628;
        case 0x56262cu: goto label_56262c;
        case 0x562630u: goto label_562630;
        case 0x562634u: goto label_562634;
        case 0x562638u: goto label_562638;
        case 0x56263cu: goto label_56263c;
        case 0x562640u: goto label_562640;
        case 0x562644u: goto label_562644;
        case 0x562648u: goto label_562648;
        case 0x56264cu: goto label_56264c;
        case 0x562650u: goto label_562650;
        case 0x562654u: goto label_562654;
        case 0x562658u: goto label_562658;
        case 0x56265cu: goto label_56265c;
        case 0x562660u: goto label_562660;
        case 0x562664u: goto label_562664;
        case 0x562668u: goto label_562668;
        case 0x56266cu: goto label_56266c;
        case 0x562670u: goto label_562670;
        case 0x562674u: goto label_562674;
        case 0x562678u: goto label_562678;
        case 0x56267cu: goto label_56267c;
        case 0x562680u: goto label_562680;
        case 0x562684u: goto label_562684;
        case 0x562688u: goto label_562688;
        case 0x56268cu: goto label_56268c;
        case 0x562690u: goto label_562690;
        case 0x562694u: goto label_562694;
        case 0x562698u: goto label_562698;
        case 0x56269cu: goto label_56269c;
        case 0x5626a0u: goto label_5626a0;
        case 0x5626a4u: goto label_5626a4;
        case 0x5626a8u: goto label_5626a8;
        case 0x5626acu: goto label_5626ac;
        case 0x5626b0u: goto label_5626b0;
        case 0x5626b4u: goto label_5626b4;
        case 0x5626b8u: goto label_5626b8;
        case 0x5626bcu: goto label_5626bc;
        case 0x5626c0u: goto label_5626c0;
        case 0x5626c4u: goto label_5626c4;
        case 0x5626c8u: goto label_5626c8;
        case 0x5626ccu: goto label_5626cc;
        case 0x5626d0u: goto label_5626d0;
        case 0x5626d4u: goto label_5626d4;
        case 0x5626d8u: goto label_5626d8;
        case 0x5626dcu: goto label_5626dc;
        case 0x5626e0u: goto label_5626e0;
        case 0x5626e4u: goto label_5626e4;
        case 0x5626e8u: goto label_5626e8;
        case 0x5626ecu: goto label_5626ec;
        case 0x5626f0u: goto label_5626f0;
        case 0x5626f4u: goto label_5626f4;
        case 0x5626f8u: goto label_5626f8;
        case 0x5626fcu: goto label_5626fc;
        case 0x562700u: goto label_562700;
        case 0x562704u: goto label_562704;
        case 0x562708u: goto label_562708;
        case 0x56270cu: goto label_56270c;
        case 0x562710u: goto label_562710;
        case 0x562714u: goto label_562714;
        case 0x562718u: goto label_562718;
        case 0x56271cu: goto label_56271c;
        case 0x562720u: goto label_562720;
        case 0x562724u: goto label_562724;
        case 0x562728u: goto label_562728;
        case 0x56272cu: goto label_56272c;
        case 0x562730u: goto label_562730;
        case 0x562734u: goto label_562734;
        case 0x562738u: goto label_562738;
        case 0x56273cu: goto label_56273c;
        case 0x562740u: goto label_562740;
        case 0x562744u: goto label_562744;
        case 0x562748u: goto label_562748;
        case 0x56274cu: goto label_56274c;
        case 0x562750u: goto label_562750;
        case 0x562754u: goto label_562754;
        case 0x562758u: goto label_562758;
        case 0x56275cu: goto label_56275c;
        case 0x562760u: goto label_562760;
        case 0x562764u: goto label_562764;
        case 0x562768u: goto label_562768;
        case 0x56276cu: goto label_56276c;
        case 0x562770u: goto label_562770;
        case 0x562774u: goto label_562774;
        case 0x562778u: goto label_562778;
        case 0x56277cu: goto label_56277c;
        case 0x562780u: goto label_562780;
        case 0x562784u: goto label_562784;
        case 0x562788u: goto label_562788;
        case 0x56278cu: goto label_56278c;
        case 0x562790u: goto label_562790;
        case 0x562794u: goto label_562794;
        case 0x562798u: goto label_562798;
        case 0x56279cu: goto label_56279c;
        case 0x5627a0u: goto label_5627a0;
        case 0x5627a4u: goto label_5627a4;
        case 0x5627a8u: goto label_5627a8;
        case 0x5627acu: goto label_5627ac;
        case 0x5627b0u: goto label_5627b0;
        case 0x5627b4u: goto label_5627b4;
        case 0x5627b8u: goto label_5627b8;
        case 0x5627bcu: goto label_5627bc;
        case 0x5627c0u: goto label_5627c0;
        case 0x5627c4u: goto label_5627c4;
        case 0x5627c8u: goto label_5627c8;
        case 0x5627ccu: goto label_5627cc;
        case 0x5627d0u: goto label_5627d0;
        case 0x5627d4u: goto label_5627d4;
        case 0x5627d8u: goto label_5627d8;
        case 0x5627dcu: goto label_5627dc;
        case 0x5627e0u: goto label_5627e0;
        case 0x5627e4u: goto label_5627e4;
        case 0x5627e8u: goto label_5627e8;
        case 0x5627ecu: goto label_5627ec;
        case 0x5627f0u: goto label_5627f0;
        case 0x5627f4u: goto label_5627f4;
        case 0x5627f8u: goto label_5627f8;
        case 0x5627fcu: goto label_5627fc;
        case 0x562800u: goto label_562800;
        case 0x562804u: goto label_562804;
        case 0x562808u: goto label_562808;
        case 0x56280cu: goto label_56280c;
        case 0x562810u: goto label_562810;
        case 0x562814u: goto label_562814;
        case 0x562818u: goto label_562818;
        case 0x56281cu: goto label_56281c;
        case 0x562820u: goto label_562820;
        case 0x562824u: goto label_562824;
        case 0x562828u: goto label_562828;
        case 0x56282cu: goto label_56282c;
        case 0x562830u: goto label_562830;
        case 0x562834u: goto label_562834;
        case 0x562838u: goto label_562838;
        case 0x56283cu: goto label_56283c;
        case 0x562840u: goto label_562840;
        case 0x562844u: goto label_562844;
        case 0x562848u: goto label_562848;
        case 0x56284cu: goto label_56284c;
        case 0x562850u: goto label_562850;
        case 0x562854u: goto label_562854;
        case 0x562858u: goto label_562858;
        case 0x56285cu: goto label_56285c;
        case 0x562860u: goto label_562860;
        case 0x562864u: goto label_562864;
        case 0x562868u: goto label_562868;
        case 0x56286cu: goto label_56286c;
        case 0x562870u: goto label_562870;
        case 0x562874u: goto label_562874;
        case 0x562878u: goto label_562878;
        case 0x56287cu: goto label_56287c;
        case 0x562880u: goto label_562880;
        case 0x562884u: goto label_562884;
        case 0x562888u: goto label_562888;
        case 0x56288cu: goto label_56288c;
        case 0x562890u: goto label_562890;
        case 0x562894u: goto label_562894;
        case 0x562898u: goto label_562898;
        case 0x56289cu: goto label_56289c;
        case 0x5628a0u: goto label_5628a0;
        case 0x5628a4u: goto label_5628a4;
        case 0x5628a8u: goto label_5628a8;
        case 0x5628acu: goto label_5628ac;
        case 0x5628b0u: goto label_5628b0;
        case 0x5628b4u: goto label_5628b4;
        case 0x5628b8u: goto label_5628b8;
        case 0x5628bcu: goto label_5628bc;
        case 0x5628c0u: goto label_5628c0;
        case 0x5628c4u: goto label_5628c4;
        case 0x5628c8u: goto label_5628c8;
        case 0x5628ccu: goto label_5628cc;
        case 0x5628d0u: goto label_5628d0;
        case 0x5628d4u: goto label_5628d4;
        case 0x5628d8u: goto label_5628d8;
        case 0x5628dcu: goto label_5628dc;
        case 0x5628e0u: goto label_5628e0;
        case 0x5628e4u: goto label_5628e4;
        case 0x5628e8u: goto label_5628e8;
        case 0x5628ecu: goto label_5628ec;
        case 0x5628f0u: goto label_5628f0;
        case 0x5628f4u: goto label_5628f4;
        case 0x5628f8u: goto label_5628f8;
        case 0x5628fcu: goto label_5628fc;
        case 0x562900u: goto label_562900;
        case 0x562904u: goto label_562904;
        case 0x562908u: goto label_562908;
        case 0x56290cu: goto label_56290c;
        case 0x562910u: goto label_562910;
        case 0x562914u: goto label_562914;
        case 0x562918u: goto label_562918;
        case 0x56291cu: goto label_56291c;
        case 0x562920u: goto label_562920;
        case 0x562924u: goto label_562924;
        case 0x562928u: goto label_562928;
        case 0x56292cu: goto label_56292c;
        case 0x562930u: goto label_562930;
        case 0x562934u: goto label_562934;
        case 0x562938u: goto label_562938;
        case 0x56293cu: goto label_56293c;
        case 0x562940u: goto label_562940;
        case 0x562944u: goto label_562944;
        case 0x562948u: goto label_562948;
        case 0x56294cu: goto label_56294c;
        case 0x562950u: goto label_562950;
        case 0x562954u: goto label_562954;
        case 0x562958u: goto label_562958;
        case 0x56295cu: goto label_56295c;
        case 0x562960u: goto label_562960;
        case 0x562964u: goto label_562964;
        case 0x562968u: goto label_562968;
        case 0x56296cu: goto label_56296c;
        case 0x562970u: goto label_562970;
        case 0x562974u: goto label_562974;
        case 0x562978u: goto label_562978;
        case 0x56297cu: goto label_56297c;
        case 0x562980u: goto label_562980;
        case 0x562984u: goto label_562984;
        case 0x562988u: goto label_562988;
        case 0x56298cu: goto label_56298c;
        case 0x562990u: goto label_562990;
        case 0x562994u: goto label_562994;
        case 0x562998u: goto label_562998;
        case 0x56299cu: goto label_56299c;
        case 0x5629a0u: goto label_5629a0;
        case 0x5629a4u: goto label_5629a4;
        case 0x5629a8u: goto label_5629a8;
        case 0x5629acu: goto label_5629ac;
        case 0x5629b0u: goto label_5629b0;
        case 0x5629b4u: goto label_5629b4;
        case 0x5629b8u: goto label_5629b8;
        case 0x5629bcu: goto label_5629bc;
        case 0x5629c0u: goto label_5629c0;
        case 0x5629c4u: goto label_5629c4;
        case 0x5629c8u: goto label_5629c8;
        case 0x5629ccu: goto label_5629cc;
        case 0x5629d0u: goto label_5629d0;
        case 0x5629d4u: goto label_5629d4;
        case 0x5629d8u: goto label_5629d8;
        case 0x5629dcu: goto label_5629dc;
        default: break;
    }

    ctx->pc = 0x5625d0u;

label_5625d0:
    // 0x5625d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5625d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_5625d4:
    // 0x5625d4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x5625d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_5625d8:
    // 0x5625d8: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x5625d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_5625dc:
    // 0x5625dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5625dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_5625e0:
    // 0x5625e0: 0xc075128  jal         func_1D44A0
label_5625e4:
    if (ctx->pc == 0x5625E4u) {
        ctx->pc = 0x5625E4u;
            // 0x5625e4: 0x2484b860  addiu       $a0, $a0, -0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948960));
        ctx->pc = 0x5625E8u;
        goto label_5625e8;
    }
    ctx->pc = 0x5625E0u;
    SET_GPR_U32(ctx, 31, 0x5625E8u);
    ctx->pc = 0x5625E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5625E0u;
            // 0x5625e4: 0x2484b860  addiu       $a0, $a0, -0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5625E8u; }
        if (ctx->pc != 0x5625E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5625E8u; }
        if (ctx->pc != 0x5625E8u) { return; }
    }
    ctx->pc = 0x5625E8u;
label_5625e8:
    // 0x5625e8: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x5625e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_5625ec:
    // 0x5625ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5625ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5625f0:
    // 0x5625f0: 0x8c86b860  lw          $a2, -0x47A0($a0)
    ctx->pc = 0x5625f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948960)));
label_5625f4:
    // 0x5625f4: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x5625f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_5625f8:
    // 0x5625f8: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x5625f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_5625fc:
    // 0x5625fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5625fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_562600:
    // 0x562600: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_562604:
    if (ctx->pc == 0x562604u) {
        ctx->pc = 0x562608u;
        goto label_562608;
    }
    ctx->pc = 0x562600u;
    {
        const bool branch_taken_0x562600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x562600) {
            ctx->pc = 0x562610u;
            goto label_562610;
        }
    }
    ctx->pc = 0x562608u;
label_562608:
    // 0x562608: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56260c:
    // 0x56260c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x56260cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_562610:
    // 0x562610: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_562614:
    // 0x562614: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x562614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_562618:
    // 0x562618: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x562618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_56261c:
    // 0x56261c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56261cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_562620:
    // 0x562620: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_562624:
    if (ctx->pc == 0x562624u) {
        ctx->pc = 0x562624u;
            // 0x562624: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x562628u;
        goto label_562628;
    }
    ctx->pc = 0x562620u;
    {
        const bool branch_taken_0x562620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x562624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562620u;
            // 0x562624: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562620) {
            ctx->pc = 0x562630u;
            goto label_562630;
        }
    }
    ctx->pc = 0x562628u;
label_562628:
    // 0x562628: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56262c:
    // 0x56262c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x56262cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_562630:
    // 0x562630: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_562634:
    // 0x562634: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x562634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_562638:
    // 0x562638: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x562638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_56263c:
    // 0x56263c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56263cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_562640:
    // 0x562640: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_562644:
    if (ctx->pc == 0x562644u) {
        ctx->pc = 0x562648u;
        goto label_562648;
    }
    ctx->pc = 0x562640u;
    {
        const bool branch_taken_0x562640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x562640) {
            ctx->pc = 0x562650u;
            goto label_562650;
        }
    }
    ctx->pc = 0x562648u;
label_562648:
    // 0x562648: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56264c:
    // 0x56264c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x56264cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_562650:
    // 0x562650: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_562654:
    // 0x562654: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x562654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_562658:
    // 0x562658: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x562658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_56265c:
    // 0x56265c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56265cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_562660:
    // 0x562660: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_562664:
    if (ctx->pc == 0x562664u) {
        ctx->pc = 0x562664u;
            // 0x562664: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x562668u;
        goto label_562668;
    }
    ctx->pc = 0x562660u;
    {
        const bool branch_taken_0x562660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x562660) {
            ctx->pc = 0x562664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562660u;
            // 0x562664: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562674u;
            goto label_562674;
        }
    }
    ctx->pc = 0x562668u;
label_562668:
    // 0x562668: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x562668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56266c:
    // 0x56266c: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x56266cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_562670:
    // 0x562670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x562670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_562674:
    // 0x562674: 0x3e00008  jr          $ra
label_562678:
    if (ctx->pc == 0x562678u) {
        ctx->pc = 0x562678u;
            // 0x562678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x56267Cu;
        goto label_56267c;
    }
    ctx->pc = 0x562674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562674u;
            // 0x562678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56267Cu;
label_56267c:
    // 0x56267c: 0x0  nop
    ctx->pc = 0x56267cu;
    // NOP
label_562680:
    // 0x562680: 0x3e00008  jr          $ra
label_562684:
    if (ctx->pc == 0x562684u) {
        ctx->pc = 0x562684u;
            // 0x562684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562688u;
        goto label_562688;
    }
    ctx->pc = 0x562680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562680u;
            // 0x562684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562688u;
label_562688:
    // 0x562688: 0x0  nop
    ctx->pc = 0x562688u;
    // NOP
label_56268c:
    // 0x56268c: 0x0  nop
    ctx->pc = 0x56268cu;
    // NOP
label_562690:
    // 0x562690: 0x3e00008  jr          $ra
label_562694:
    if (ctx->pc == 0x562694u) {
        ctx->pc = 0x562694u;
            // 0x562694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562698u;
        goto label_562698;
    }
    ctx->pc = 0x562690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562690u;
            // 0x562694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562698u;
label_562698:
    // 0x562698: 0x0  nop
    ctx->pc = 0x562698u;
    // NOP
label_56269c:
    // 0x56269c: 0x0  nop
    ctx->pc = 0x56269cu;
    // NOP
label_5626a0:
    // 0x5626a0: 0x3e00008  jr          $ra
label_5626a4:
    if (ctx->pc == 0x5626A4u) {
        ctx->pc = 0x5626A4u;
            // 0x5626a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5626A8u;
        goto label_5626a8;
    }
    ctx->pc = 0x5626A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5626A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5626A0u;
            // 0x5626a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5626A8u;
label_5626a8:
    // 0x5626a8: 0x0  nop
    ctx->pc = 0x5626a8u;
    // NOP
label_5626ac:
    // 0x5626ac: 0x0  nop
    ctx->pc = 0x5626acu;
    // NOP
label_5626b0:
    // 0x5626b0: 0x3e00008  jr          $ra
label_5626b4:
    if (ctx->pc == 0x5626B4u) {
        ctx->pc = 0x5626B4u;
            // 0x5626b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5626B8u;
        goto label_5626b8;
    }
    ctx->pc = 0x5626B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5626B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5626B0u;
            // 0x5626b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5626B8u;
label_5626b8:
    // 0x5626b8: 0x0  nop
    ctx->pc = 0x5626b8u;
    // NOP
label_5626bc:
    // 0x5626bc: 0x0  nop
    ctx->pc = 0x5626bcu;
    // NOP
label_5626c0:
    // 0x5626c0: 0x3e00008  jr          $ra
label_5626c4:
    if (ctx->pc == 0x5626C4u) {
        ctx->pc = 0x5626C4u;
            // 0x5626c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5626C8u;
        goto label_5626c8;
    }
    ctx->pc = 0x5626C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5626C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5626C0u;
            // 0x5626c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5626C8u;
label_5626c8:
    // 0x5626c8: 0x0  nop
    ctx->pc = 0x5626c8u;
    // NOP
label_5626cc:
    // 0x5626cc: 0x0  nop
    ctx->pc = 0x5626ccu;
    // NOP
label_5626d0:
    // 0x5626d0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x5626d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_5626d4:
    // 0x5626d4: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x5626d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_5626d8:
    // 0x5626d8: 0x3200008  jr          $t9
label_5626dc:
    if (ctx->pc == 0x5626DCu) {
        ctx->pc = 0x5626E0u;
        goto label_5626e0;
    }
    ctx->pc = 0x5626D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5626E0u;
label_5626e0:
    // 0x5626e0: 0x3e00008  jr          $ra
label_5626e4:
    if (ctx->pc == 0x5626E4u) {
        ctx->pc = 0x5626E4u;
            // 0x5626e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5626E8u;
        goto label_5626e8;
    }
    ctx->pc = 0x5626E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5626E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5626E0u;
            // 0x5626e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5626E8u;
label_5626e8:
    // 0x5626e8: 0x0  nop
    ctx->pc = 0x5626e8u;
    // NOP
label_5626ec:
    // 0x5626ec: 0x0  nop
    ctx->pc = 0x5626ecu;
    // NOP
label_5626f0:
    // 0x5626f0: 0x3e00008  jr          $ra
label_5626f4:
    if (ctx->pc == 0x5626F4u) {
        ctx->pc = 0x5626F4u;
            // 0x5626f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5626F8u;
        goto label_5626f8;
    }
    ctx->pc = 0x5626F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5626F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5626F0u;
            // 0x5626f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5626F8u;
label_5626f8:
    // 0x5626f8: 0x0  nop
    ctx->pc = 0x5626f8u;
    // NOP
label_5626fc:
    // 0x5626fc: 0x0  nop
    ctx->pc = 0x5626fcu;
    // NOP
label_562700:
    // 0x562700: 0x3e00008  jr          $ra
label_562704:
    if (ctx->pc == 0x562704u) {
        ctx->pc = 0x562704u;
            // 0x562704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562708u;
        goto label_562708;
    }
    ctx->pc = 0x562700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562700u;
            // 0x562704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562708u;
label_562708:
    // 0x562708: 0x0  nop
    ctx->pc = 0x562708u;
    // NOP
label_56270c:
    // 0x56270c: 0x0  nop
    ctx->pc = 0x56270cu;
    // NOP
label_562710:
    // 0x562710: 0x3e00008  jr          $ra
label_562714:
    if (ctx->pc == 0x562714u) {
        ctx->pc = 0x562714u;
            // 0x562714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562718u;
        goto label_562718;
    }
    ctx->pc = 0x562710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562710u;
            // 0x562714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562718u;
label_562718:
    // 0x562718: 0x0  nop
    ctx->pc = 0x562718u;
    // NOP
label_56271c:
    // 0x56271c: 0x0  nop
    ctx->pc = 0x56271cu;
    // NOP
label_562720:
    // 0x562720: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x562720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_562724:
    // 0x562724: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x562724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_562728:
    // 0x562728: 0x3200008  jr          $t9
label_56272c:
    if (ctx->pc == 0x56272Cu) {
        ctx->pc = 0x562730u;
        goto label_562730;
    }
    ctx->pc = 0x562728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562730u;
label_562730:
    // 0x562730: 0x3e00008  jr          $ra
label_562734:
    if (ctx->pc == 0x562734u) {
        ctx->pc = 0x562734u;
            // 0x562734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562738u;
        goto label_562738;
    }
    ctx->pc = 0x562730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562730u;
            // 0x562734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562738u;
label_562738:
    // 0x562738: 0x0  nop
    ctx->pc = 0x562738u;
    // NOP
label_56273c:
    // 0x56273c: 0x0  nop
    ctx->pc = 0x56273cu;
    // NOP
label_562740:
    // 0x562740: 0x3e00008  jr          $ra
label_562744:
    if (ctx->pc == 0x562744u) {
        ctx->pc = 0x562744u;
            // 0x562744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562748u;
        goto label_562748;
    }
    ctx->pc = 0x562740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562740u;
            // 0x562744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562748u;
label_562748:
    // 0x562748: 0x0  nop
    ctx->pc = 0x562748u;
    // NOP
label_56274c:
    // 0x56274c: 0x0  nop
    ctx->pc = 0x56274cu;
    // NOP
label_562750:
    // 0x562750: 0x3e00008  jr          $ra
label_562754:
    if (ctx->pc == 0x562754u) {
        ctx->pc = 0x562754u;
            // 0x562754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562758u;
        goto label_562758;
    }
    ctx->pc = 0x562750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562750u;
            // 0x562754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562758u;
label_562758:
    // 0x562758: 0x0  nop
    ctx->pc = 0x562758u;
    // NOP
label_56275c:
    // 0x56275c: 0x0  nop
    ctx->pc = 0x56275cu;
    // NOP
label_562760:
    // 0x562760: 0x3e00008  jr          $ra
label_562764:
    if (ctx->pc == 0x562764u) {
        ctx->pc = 0x562764u;
            // 0x562764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562768u;
        goto label_562768;
    }
    ctx->pc = 0x562760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562760u;
            // 0x562764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562768u;
label_562768:
    // 0x562768: 0x0  nop
    ctx->pc = 0x562768u;
    // NOP
label_56276c:
    // 0x56276c: 0x0  nop
    ctx->pc = 0x56276cu;
    // NOP
label_562770:
    // 0x562770: 0x3e00008  jr          $ra
label_562774:
    if (ctx->pc == 0x562774u) {
        ctx->pc = 0x562774u;
            // 0x562774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562778u;
        goto label_562778;
    }
    ctx->pc = 0x562770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562770u;
            // 0x562774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562778u;
label_562778:
    // 0x562778: 0x0  nop
    ctx->pc = 0x562778u;
    // NOP
label_56277c:
    // 0x56277c: 0x0  nop
    ctx->pc = 0x56277cu;
    // NOP
label_562780:
    // 0x562780: 0x3e00008  jr          $ra
label_562784:
    if (ctx->pc == 0x562784u) {
        ctx->pc = 0x562784u;
            // 0x562784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562788u;
        goto label_562788;
    }
    ctx->pc = 0x562780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562780u;
            // 0x562784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562788u;
label_562788:
    // 0x562788: 0x0  nop
    ctx->pc = 0x562788u;
    // NOP
label_56278c:
    // 0x56278c: 0x0  nop
    ctx->pc = 0x56278cu;
    // NOP
label_562790:
    // 0x562790: 0x3e00008  jr          $ra
label_562794:
    if (ctx->pc == 0x562794u) {
        ctx->pc = 0x562794u;
            // 0x562794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562798u;
        goto label_562798;
    }
    ctx->pc = 0x562790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562790u;
            // 0x562794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562798u;
label_562798:
    // 0x562798: 0x0  nop
    ctx->pc = 0x562798u;
    // NOP
label_56279c:
    // 0x56279c: 0x0  nop
    ctx->pc = 0x56279cu;
    // NOP
label_5627a0:
    // 0x5627a0: 0x3e00008  jr          $ra
label_5627a4:
    if (ctx->pc == 0x5627A4u) {
        ctx->pc = 0x5627A4u;
            // 0x5627a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5627A8u;
        goto label_5627a8;
    }
    ctx->pc = 0x5627A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5627A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5627A0u;
            // 0x5627a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5627A8u;
label_5627a8:
    // 0x5627a8: 0x0  nop
    ctx->pc = 0x5627a8u;
    // NOP
label_5627ac:
    // 0x5627ac: 0x0  nop
    ctx->pc = 0x5627acu;
    // NOP
label_5627b0:
    // 0x5627b0: 0x3e00008  jr          $ra
label_5627b4:
    if (ctx->pc == 0x5627B4u) {
        ctx->pc = 0x5627B4u;
            // 0x5627b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5627B8u;
        goto label_5627b8;
    }
    ctx->pc = 0x5627B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5627B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5627B0u;
            // 0x5627b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5627B8u;
label_5627b8:
    // 0x5627b8: 0x0  nop
    ctx->pc = 0x5627b8u;
    // NOP
label_5627bc:
    // 0x5627bc: 0x0  nop
    ctx->pc = 0x5627bcu;
    // NOP
label_5627c0:
    // 0x5627c0: 0x3e00008  jr          $ra
label_5627c4:
    if (ctx->pc == 0x5627C4u) {
        ctx->pc = 0x5627C4u;
            // 0x5627c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5627C8u;
        goto label_5627c8;
    }
    ctx->pc = 0x5627C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5627C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5627C0u;
            // 0x5627c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5627C8u;
label_5627c8:
    // 0x5627c8: 0x0  nop
    ctx->pc = 0x5627c8u;
    // NOP
label_5627cc:
    // 0x5627cc: 0x0  nop
    ctx->pc = 0x5627ccu;
    // NOP
label_5627d0:
    // 0x5627d0: 0x3e00008  jr          $ra
label_5627d4:
    if (ctx->pc == 0x5627D4u) {
        ctx->pc = 0x5627D4u;
            // 0x5627d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5627D8u;
        goto label_5627d8;
    }
    ctx->pc = 0x5627D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5627D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5627D0u;
            // 0x5627d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5627D8u;
label_5627d8:
    // 0x5627d8: 0x0  nop
    ctx->pc = 0x5627d8u;
    // NOP
label_5627dc:
    // 0x5627dc: 0x0  nop
    ctx->pc = 0x5627dcu;
    // NOP
label_5627e0:
    // 0x5627e0: 0x3e00008  jr          $ra
label_5627e4:
    if (ctx->pc == 0x5627E4u) {
        ctx->pc = 0x5627E4u;
            // 0x5627e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5627E8u;
        goto label_5627e8;
    }
    ctx->pc = 0x5627E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5627E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5627E0u;
            // 0x5627e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5627E8u;
label_5627e8:
    // 0x5627e8: 0x0  nop
    ctx->pc = 0x5627e8u;
    // NOP
label_5627ec:
    // 0x5627ec: 0x0  nop
    ctx->pc = 0x5627ecu;
    // NOP
label_5627f0:
    // 0x5627f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5627f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5627f4:
    // 0x5627f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5627f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5627f8:
    // 0x5627f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5627f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5627fc:
    // 0x5627fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x5627fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_562800:
    // 0x562800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x562800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_562804:
    // 0x562804: 0xc04a576  jal         func_1295D8
label_562808:
    if (ctx->pc == 0x562808u) {
        ctx->pc = 0x562808u;
            // 0x562808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56280Cu;
        goto label_56280c;
    }
    ctx->pc = 0x562804u;
    SET_GPR_U32(ctx, 31, 0x56280Cu);
    ctx->pc = 0x562808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562804u;
            // 0x562808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56280Cu; }
        if (ctx->pc != 0x56280Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56280Cu; }
        if (ctx->pc != 0x56280Cu) { return; }
    }
    ctx->pc = 0x56280Cu;
label_56280c:
    // 0x56280c: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x56280cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_562810:
    // 0x562810: 0x163c  dsll32      $v0, $zero, 24
    ctx->pc = 0x562810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 24));
label_562814:
    // 0x562814: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x562814u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_562818:
    // 0x562818: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x562818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_56281c:
    // 0x56281c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x56281cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_562820:
    // 0x562820: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x562820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_562824:
    // 0x562824: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x562824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_562828:
    // 0x562828: 0xc13ef98  jal         func_4FBE60
label_56282c:
    if (ctx->pc == 0x56282Cu) {
        ctx->pc = 0x56282Cu;
            // 0x56282c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x562830u;
        goto label_562830;
    }
    ctx->pc = 0x562828u;
    SET_GPR_U32(ctx, 31, 0x562830u);
    ctx->pc = 0x56282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562828u;
            // 0x56282c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE60u;
    if (runtime->hasFunction(0x4FBE60u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562830u; }
        if (ctx->pc != 0x562830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE60_0x4fbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562830u; }
        if (ctx->pc != 0x562830u) { return; }
    }
    ctx->pc = 0x562830u;
label_562830:
    // 0x562830: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x562830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_562834:
    // 0x562834: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x562834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_562838:
    // 0x562838: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x562838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_56283c:
    // 0x56283c: 0xc04cbd8  jal         func_132F60
label_562840:
    if (ctx->pc == 0x562840u) {
        ctx->pc = 0x562840u;
            // 0x562840: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x562844u;
        goto label_562844;
    }
    ctx->pc = 0x56283Cu;
    SET_GPR_U32(ctx, 31, 0x562844u);
    ctx->pc = 0x562840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56283Cu;
            // 0x562840: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562844u; }
        if (ctx->pc != 0x562844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562844u; }
        if (ctx->pc != 0x562844u) { return; }
    }
    ctx->pc = 0x562844u;
label_562844:
    // 0x562844: 0xa2000164  sb          $zero, 0x164($s0)
    ctx->pc = 0x562844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 0));
label_562848:
    // 0x562848: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x562848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_56284c:
    // 0x56284c: 0xa2000165  sb          $zero, 0x165($s0)
    ctx->pc = 0x56284cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 357), (uint8_t)GPR_U32(ctx, 0));
label_562850:
    // 0x562850: 0xa2000188  sb          $zero, 0x188($s0)
    ctx->pc = 0x562850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 392), (uint8_t)GPR_U32(ctx, 0));
label_562854:
    // 0x562854: 0xa2000124  sb          $zero, 0x124($s0)
    ctx->pc = 0x562854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 292), (uint8_t)GPR_U32(ctx, 0));
label_562858:
    // 0x562858: 0xa2000166  sb          $zero, 0x166($s0)
    ctx->pc = 0x562858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 358), (uint8_t)GPR_U32(ctx, 0));
label_56285c:
    // 0x56285c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x56285cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_562860:
    // 0x562860: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x562860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_562864:
    // 0x562864: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x562864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_562868:
    // 0x562868: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x562868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_56286c:
    // 0x56286c: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x56286cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_562870:
    // 0x562870: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x562870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_562874:
    // 0x562874: 0xa2000169  sb          $zero, 0x169($s0)
    ctx->pc = 0x562874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 361), (uint8_t)GPR_U32(ctx, 0));
label_562878:
    // 0x562878: 0xa2000167  sb          $zero, 0x167($s0)
    ctx->pc = 0x562878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 359), (uint8_t)GPR_U32(ctx, 0));
label_56287c:
    // 0x56287c: 0xc074740  jal         func_1D1D00
label_562880:
    if (ctx->pc == 0x562880u) {
        ctx->pc = 0x562880u;
            // 0x562880: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x562884u;
        goto label_562884;
    }
    ctx->pc = 0x56287Cu;
    SET_GPR_U32(ctx, 31, 0x562884u);
    ctx->pc = 0x562880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56287Cu;
            // 0x562880: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562884u; }
        if (ctx->pc != 0x562884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562884u; }
        if (ctx->pc != 0x562884u) { return; }
    }
    ctx->pc = 0x562884u;
label_562884:
    // 0x562884: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_562888:
    if (ctx->pc == 0x562888u) {
        ctx->pc = 0x562888u;
            // 0x562888: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x56288Cu;
        goto label_56288c;
    }
    ctx->pc = 0x562884u;
    {
        const bool branch_taken_0x562884 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x562884) {
            ctx->pc = 0x562888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562884u;
            // 0x562888: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562898u;
            goto label_562898;
        }
    }
    ctx->pc = 0x56288Cu;
label_56288c:
    // 0x56288c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56288cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_562890:
    // 0x562890: 0x10000007  b           . + 4 + (0x7 << 2)
label_562894:
    if (ctx->pc == 0x562894u) {
        ctx->pc = 0x562894u;
            // 0x562894: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x562898u;
        goto label_562898;
    }
    ctx->pc = 0x562890u;
    {
        const bool branch_taken_0x562890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562890u;
            // 0x562894: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x562890) {
            ctx->pc = 0x5628B0u;
            goto label_5628b0;
        }
    }
    ctx->pc = 0x562898u;
label_562898:
    // 0x562898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x562898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_56289c:
    // 0x56289c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x56289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5628a0:
    // 0x5628a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5628a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5628a4:
    // 0x5628a4: 0x0  nop
    ctx->pc = 0x5628a4u;
    // NOP
label_5628a8:
    // 0x5628a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5628a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5628ac:
    // 0x5628ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x5628acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_5628b0:
    // 0x5628b0: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x5628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_5628b4:
    // 0x5628b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x5628b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_5628b8:
    // 0x5628b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5628b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5628bc:
    // 0x5628bc: 0x0  nop
    ctx->pc = 0x5628bcu;
    // NOP
label_5628c0:
    // 0x5628c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x5628c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5628c4:
    // 0x5628c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5628c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5628c8:
    // 0x5628c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5628c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5628cc:
    // 0x5628cc: 0x0  nop
    ctx->pc = 0x5628ccu;
    // NOP
label_5628d0:
    // 0x5628d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5628d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5628d4:
    // 0x5628d4: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x5628d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
label_5628d8:
    // 0x5628d8: 0xc074740  jal         func_1D1D00
label_5628dc:
    if (ctx->pc == 0x5628DCu) {
        ctx->pc = 0x5628DCu;
            // 0x5628dc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x5628E0u;
        goto label_5628e0;
    }
    ctx->pc = 0x5628D8u;
    SET_GPR_U32(ctx, 31, 0x5628E0u);
    ctx->pc = 0x5628DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5628D8u;
            // 0x5628dc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5628E0u; }
        if (ctx->pc != 0x5628E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5628E0u; }
        if (ctx->pc != 0x5628E0u) { return; }
    }
    ctx->pc = 0x5628E0u;
label_5628e0:
    // 0x5628e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5628e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5628e4:
    // 0x5628e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5628e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5628e8:
    // 0x5628e8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x5628e8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_5628ec:
    // 0x5628ec: 0x1010  mfhi        $v0
    ctx->pc = 0x5628ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5628f0:
    // 0x5628f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5628f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_5628f4:
    // 0x5628f4: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x5628f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_5628f8:
    // 0x5628f8: 0xc074740  jal         func_1D1D00
label_5628fc:
    if (ctx->pc == 0x5628FCu) {
        ctx->pc = 0x5628FCu;
            // 0x5628fc: 0x8c64a2e0  lw          $a0, -0x5D20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
        ctx->pc = 0x562900u;
        goto label_562900;
    }
    ctx->pc = 0x5628F8u;
    SET_GPR_U32(ctx, 31, 0x562900u);
    ctx->pc = 0x5628FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5628F8u;
            // 0x5628fc: 0x8c64a2e0  lw          $a0, -0x5D20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562900u; }
        if (ctx->pc != 0x562900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562900u; }
        if (ctx->pc != 0x562900u) { return; }
    }
    ctx->pc = 0x562900u;
label_562900:
    // 0x562900: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x562900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_562904:
    // 0x562904: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x562904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_562908:
    // 0x562908: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x562908u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_56290c:
    // 0x56290c: 0x1010  mfhi        $v0
    ctx->pc = 0x56290cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_562910:
    // 0x562910: 0xc13df30  jal         func_4F7CC0
label_562914:
    if (ctx->pc == 0x562914u) {
        ctx->pc = 0x562914u;
            // 0x562914: 0xa2020168  sb          $v0, 0x168($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 360), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x562918u;
        goto label_562918;
    }
    ctx->pc = 0x562910u;
    SET_GPR_U32(ctx, 31, 0x562918u);
    ctx->pc = 0x562914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562910u;
            // 0x562914: 0xa2020168  sb          $v0, 0x168($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 360), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7CC0u;
    if (runtime->hasFunction(0x4F7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x4F7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562918u; }
        if (ctx->pc != 0x562918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7CC0_0x4f7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562918u; }
        if (ctx->pc != 0x562918u) { return; }
    }
    ctx->pc = 0x562918u;
label_562918:
    // 0x562918: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x562918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_56291c:
    // 0x56291c: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x56291cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
label_562920:
    // 0x562920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x562920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_562924:
    // 0x562924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x562924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_562928:
    // 0x562928: 0x3e00008  jr          $ra
label_56292c:
    if (ctx->pc == 0x56292Cu) {
        ctx->pc = 0x56292Cu;
            // 0x56292c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x562930u;
        goto label_562930;
    }
    ctx->pc = 0x562928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562928u;
            // 0x56292c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562930u;
label_562930:
    // 0x562930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x562930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_562934:
    // 0x562934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x562934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_562938:
    // 0x562938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x562938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56293c:
    // 0x56293c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_562940:
    // 0x562940: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_562944:
    if (ctx->pc == 0x562944u) {
        ctx->pc = 0x562944u;
            // 0x562944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x562948u;
        goto label_562948;
    }
    ctx->pc = 0x562940u;
    {
        const bool branch_taken_0x562940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x562940) {
            ctx->pc = 0x562944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562940u;
            // 0x562944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5629C0u;
            goto label_5629c0;
        }
    }
    ctx->pc = 0x562948u;
label_562948:
    // 0x562948: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x562948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_56294c:
    // 0x56294c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x56294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_562950:
    // 0x562950: 0x24637df0  addiu       $v1, $v1, 0x7DF0
    ctx->pc = 0x562950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32240));
label_562954:
    // 0x562954: 0x24427e18  addiu       $v0, $v0, 0x7E18
    ctx->pc = 0x562954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32280));
label_562958:
    // 0x562958: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x562958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_56295c:
    // 0x56295c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_562960:
    if (ctx->pc == 0x562960u) {
        ctx->pc = 0x562960u;
            // 0x562960: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x562964u;
        goto label_562964;
    }
    ctx->pc = 0x56295Cu;
    {
        const bool branch_taken_0x56295c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x562960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56295Cu;
            // 0x562960: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56295c) {
            ctx->pc = 0x5629A4u;
            goto label_5629a4;
        }
    }
    ctx->pc = 0x562964u;
label_562964:
    // 0x562964: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x562964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_562968:
    // 0x562968: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x562968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_56296c:
    // 0x56296c: 0x244244b0  addiu       $v0, $v0, 0x44B0
    ctx->pc = 0x56296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17584));
label_562970:
    // 0x562970: 0x246344d8  addiu       $v1, $v1, 0x44D8
    ctx->pc = 0x562970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17624));
label_562974:
    // 0x562974: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x562974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_562978:
    // 0x562978: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x562978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_56297c:
    // 0x56297c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_562980:
    if (ctx->pc == 0x562980u) {
        ctx->pc = 0x562980u;
            // 0x562980: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x562984u;
        goto label_562984;
    }
    ctx->pc = 0x56297Cu;
    {
        const bool branch_taken_0x56297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x562980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56297Cu;
            // 0x562980: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56297c) {
            ctx->pc = 0x562990u;
            goto label_562990;
        }
    }
    ctx->pc = 0x562984u;
label_562984:
    // 0x562984: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x562984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_562988:
    // 0x562988: 0x2442d0d0  addiu       $v0, $v0, -0x2F30
    ctx->pc = 0x562988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955216));
label_56298c:
    // 0x56298c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x56298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_562990:
    // 0x562990: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_562994:
    if (ctx->pc == 0x562994u) {
        ctx->pc = 0x562994u;
            // 0x562994: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x562998u;
        goto label_562998;
    }
    ctx->pc = 0x562990u;
    {
        const bool branch_taken_0x562990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x562990) {
            ctx->pc = 0x562994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562990u;
            // 0x562994: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5629A8u;
            goto label_5629a8;
        }
    }
    ctx->pc = 0x562998u;
label_562998:
    // 0x562998: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x562998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_56299c:
    // 0x56299c: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x56299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_5629a0:
    // 0x5629a0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x5629a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_5629a4:
    // 0x5629a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x5629a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_5629a8:
    // 0x5629a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5629a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5629ac:
    // 0x5629ac: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_5629b0:
    if (ctx->pc == 0x5629B0u) {
        ctx->pc = 0x5629B4u;
        goto label_5629b4;
    }
    ctx->pc = 0x5629ACu;
    {
        const bool branch_taken_0x5629ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5629ac) {
            ctx->pc = 0x5629BCu;
            goto label_5629bc;
        }
    }
    ctx->pc = 0x5629B4u;
label_5629b4:
    // 0x5629b4: 0xc0400a8  jal         func_1002A0
label_5629b8:
    if (ctx->pc == 0x5629B8u) {
        ctx->pc = 0x5629B8u;
            // 0x5629b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5629BCu;
        goto label_5629bc;
    }
    ctx->pc = 0x5629B4u;
    SET_GPR_U32(ctx, 31, 0x5629BCu);
    ctx->pc = 0x5629B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5629B4u;
            // 0x5629b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5629BCu; }
        if (ctx->pc != 0x5629BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5629BCu; }
        if (ctx->pc != 0x5629BCu) { return; }
    }
    ctx->pc = 0x5629BCu;
label_5629bc:
    // 0x5629bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5629bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5629c0:
    // 0x5629c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5629c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5629c4:
    // 0x5629c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5629c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5629c8:
    // 0x5629c8: 0x3e00008  jr          $ra
label_5629cc:
    if (ctx->pc == 0x5629CCu) {
        ctx->pc = 0x5629CCu;
            // 0x5629cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5629D0u;
        goto label_5629d0;
    }
    ctx->pc = 0x5629C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5629CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5629C8u;
            // 0x5629cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5629D0u;
label_5629d0:
    // 0x5629d0: 0x3e00008  jr          $ra
label_5629d4:
    if (ctx->pc == 0x5629D4u) {
        ctx->pc = 0x5629D4u;
            // 0x5629d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5629D8u;
        goto label_5629d8;
    }
    ctx->pc = 0x5629D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5629D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5629D0u;
            // 0x5629d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5629D8u;
label_5629d8:
    // 0x5629d8: 0x0  nop
    ctx->pc = 0x5629d8u;
    // NOP
label_5629dc:
    // 0x5629dc: 0x0  nop
    ctx->pc = 0x5629dcu;
    // NOP
}
