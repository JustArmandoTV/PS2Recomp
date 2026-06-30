#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00449500
// Address: 0x449500 - 0x449af0
void sub_00449500_0x449500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449500_0x449500");
#endif

    switch (ctx->pc) {
        case 0x449500u: goto label_449500;
        case 0x449504u: goto label_449504;
        case 0x449508u: goto label_449508;
        case 0x44950cu: goto label_44950c;
        case 0x449510u: goto label_449510;
        case 0x449514u: goto label_449514;
        case 0x449518u: goto label_449518;
        case 0x44951cu: goto label_44951c;
        case 0x449520u: goto label_449520;
        case 0x449524u: goto label_449524;
        case 0x449528u: goto label_449528;
        case 0x44952cu: goto label_44952c;
        case 0x449530u: goto label_449530;
        case 0x449534u: goto label_449534;
        case 0x449538u: goto label_449538;
        case 0x44953cu: goto label_44953c;
        case 0x449540u: goto label_449540;
        case 0x449544u: goto label_449544;
        case 0x449548u: goto label_449548;
        case 0x44954cu: goto label_44954c;
        case 0x449550u: goto label_449550;
        case 0x449554u: goto label_449554;
        case 0x449558u: goto label_449558;
        case 0x44955cu: goto label_44955c;
        case 0x449560u: goto label_449560;
        case 0x449564u: goto label_449564;
        case 0x449568u: goto label_449568;
        case 0x44956cu: goto label_44956c;
        case 0x449570u: goto label_449570;
        case 0x449574u: goto label_449574;
        case 0x449578u: goto label_449578;
        case 0x44957cu: goto label_44957c;
        case 0x449580u: goto label_449580;
        case 0x449584u: goto label_449584;
        case 0x449588u: goto label_449588;
        case 0x44958cu: goto label_44958c;
        case 0x449590u: goto label_449590;
        case 0x449594u: goto label_449594;
        case 0x449598u: goto label_449598;
        case 0x44959cu: goto label_44959c;
        case 0x4495a0u: goto label_4495a0;
        case 0x4495a4u: goto label_4495a4;
        case 0x4495a8u: goto label_4495a8;
        case 0x4495acu: goto label_4495ac;
        case 0x4495b0u: goto label_4495b0;
        case 0x4495b4u: goto label_4495b4;
        case 0x4495b8u: goto label_4495b8;
        case 0x4495bcu: goto label_4495bc;
        case 0x4495c0u: goto label_4495c0;
        case 0x4495c4u: goto label_4495c4;
        case 0x4495c8u: goto label_4495c8;
        case 0x4495ccu: goto label_4495cc;
        case 0x4495d0u: goto label_4495d0;
        case 0x4495d4u: goto label_4495d4;
        case 0x4495d8u: goto label_4495d8;
        case 0x4495dcu: goto label_4495dc;
        case 0x4495e0u: goto label_4495e0;
        case 0x4495e4u: goto label_4495e4;
        case 0x4495e8u: goto label_4495e8;
        case 0x4495ecu: goto label_4495ec;
        case 0x4495f0u: goto label_4495f0;
        case 0x4495f4u: goto label_4495f4;
        case 0x4495f8u: goto label_4495f8;
        case 0x4495fcu: goto label_4495fc;
        case 0x449600u: goto label_449600;
        case 0x449604u: goto label_449604;
        case 0x449608u: goto label_449608;
        case 0x44960cu: goto label_44960c;
        case 0x449610u: goto label_449610;
        case 0x449614u: goto label_449614;
        case 0x449618u: goto label_449618;
        case 0x44961cu: goto label_44961c;
        case 0x449620u: goto label_449620;
        case 0x449624u: goto label_449624;
        case 0x449628u: goto label_449628;
        case 0x44962cu: goto label_44962c;
        case 0x449630u: goto label_449630;
        case 0x449634u: goto label_449634;
        case 0x449638u: goto label_449638;
        case 0x44963cu: goto label_44963c;
        case 0x449640u: goto label_449640;
        case 0x449644u: goto label_449644;
        case 0x449648u: goto label_449648;
        case 0x44964cu: goto label_44964c;
        case 0x449650u: goto label_449650;
        case 0x449654u: goto label_449654;
        case 0x449658u: goto label_449658;
        case 0x44965cu: goto label_44965c;
        case 0x449660u: goto label_449660;
        case 0x449664u: goto label_449664;
        case 0x449668u: goto label_449668;
        case 0x44966cu: goto label_44966c;
        case 0x449670u: goto label_449670;
        case 0x449674u: goto label_449674;
        case 0x449678u: goto label_449678;
        case 0x44967cu: goto label_44967c;
        case 0x449680u: goto label_449680;
        case 0x449684u: goto label_449684;
        case 0x449688u: goto label_449688;
        case 0x44968cu: goto label_44968c;
        case 0x449690u: goto label_449690;
        case 0x449694u: goto label_449694;
        case 0x449698u: goto label_449698;
        case 0x44969cu: goto label_44969c;
        case 0x4496a0u: goto label_4496a0;
        case 0x4496a4u: goto label_4496a4;
        case 0x4496a8u: goto label_4496a8;
        case 0x4496acu: goto label_4496ac;
        case 0x4496b0u: goto label_4496b0;
        case 0x4496b4u: goto label_4496b4;
        case 0x4496b8u: goto label_4496b8;
        case 0x4496bcu: goto label_4496bc;
        case 0x4496c0u: goto label_4496c0;
        case 0x4496c4u: goto label_4496c4;
        case 0x4496c8u: goto label_4496c8;
        case 0x4496ccu: goto label_4496cc;
        case 0x4496d0u: goto label_4496d0;
        case 0x4496d4u: goto label_4496d4;
        case 0x4496d8u: goto label_4496d8;
        case 0x4496dcu: goto label_4496dc;
        case 0x4496e0u: goto label_4496e0;
        case 0x4496e4u: goto label_4496e4;
        case 0x4496e8u: goto label_4496e8;
        case 0x4496ecu: goto label_4496ec;
        case 0x4496f0u: goto label_4496f0;
        case 0x4496f4u: goto label_4496f4;
        case 0x4496f8u: goto label_4496f8;
        case 0x4496fcu: goto label_4496fc;
        case 0x449700u: goto label_449700;
        case 0x449704u: goto label_449704;
        case 0x449708u: goto label_449708;
        case 0x44970cu: goto label_44970c;
        case 0x449710u: goto label_449710;
        case 0x449714u: goto label_449714;
        case 0x449718u: goto label_449718;
        case 0x44971cu: goto label_44971c;
        case 0x449720u: goto label_449720;
        case 0x449724u: goto label_449724;
        case 0x449728u: goto label_449728;
        case 0x44972cu: goto label_44972c;
        case 0x449730u: goto label_449730;
        case 0x449734u: goto label_449734;
        case 0x449738u: goto label_449738;
        case 0x44973cu: goto label_44973c;
        case 0x449740u: goto label_449740;
        case 0x449744u: goto label_449744;
        case 0x449748u: goto label_449748;
        case 0x44974cu: goto label_44974c;
        case 0x449750u: goto label_449750;
        case 0x449754u: goto label_449754;
        case 0x449758u: goto label_449758;
        case 0x44975cu: goto label_44975c;
        case 0x449760u: goto label_449760;
        case 0x449764u: goto label_449764;
        case 0x449768u: goto label_449768;
        case 0x44976cu: goto label_44976c;
        case 0x449770u: goto label_449770;
        case 0x449774u: goto label_449774;
        case 0x449778u: goto label_449778;
        case 0x44977cu: goto label_44977c;
        case 0x449780u: goto label_449780;
        case 0x449784u: goto label_449784;
        case 0x449788u: goto label_449788;
        case 0x44978cu: goto label_44978c;
        case 0x449790u: goto label_449790;
        case 0x449794u: goto label_449794;
        case 0x449798u: goto label_449798;
        case 0x44979cu: goto label_44979c;
        case 0x4497a0u: goto label_4497a0;
        case 0x4497a4u: goto label_4497a4;
        case 0x4497a8u: goto label_4497a8;
        case 0x4497acu: goto label_4497ac;
        case 0x4497b0u: goto label_4497b0;
        case 0x4497b4u: goto label_4497b4;
        case 0x4497b8u: goto label_4497b8;
        case 0x4497bcu: goto label_4497bc;
        case 0x4497c0u: goto label_4497c0;
        case 0x4497c4u: goto label_4497c4;
        case 0x4497c8u: goto label_4497c8;
        case 0x4497ccu: goto label_4497cc;
        case 0x4497d0u: goto label_4497d0;
        case 0x4497d4u: goto label_4497d4;
        case 0x4497d8u: goto label_4497d8;
        case 0x4497dcu: goto label_4497dc;
        case 0x4497e0u: goto label_4497e0;
        case 0x4497e4u: goto label_4497e4;
        case 0x4497e8u: goto label_4497e8;
        case 0x4497ecu: goto label_4497ec;
        case 0x4497f0u: goto label_4497f0;
        case 0x4497f4u: goto label_4497f4;
        case 0x4497f8u: goto label_4497f8;
        case 0x4497fcu: goto label_4497fc;
        case 0x449800u: goto label_449800;
        case 0x449804u: goto label_449804;
        case 0x449808u: goto label_449808;
        case 0x44980cu: goto label_44980c;
        case 0x449810u: goto label_449810;
        case 0x449814u: goto label_449814;
        case 0x449818u: goto label_449818;
        case 0x44981cu: goto label_44981c;
        case 0x449820u: goto label_449820;
        case 0x449824u: goto label_449824;
        case 0x449828u: goto label_449828;
        case 0x44982cu: goto label_44982c;
        case 0x449830u: goto label_449830;
        case 0x449834u: goto label_449834;
        case 0x449838u: goto label_449838;
        case 0x44983cu: goto label_44983c;
        case 0x449840u: goto label_449840;
        case 0x449844u: goto label_449844;
        case 0x449848u: goto label_449848;
        case 0x44984cu: goto label_44984c;
        case 0x449850u: goto label_449850;
        case 0x449854u: goto label_449854;
        case 0x449858u: goto label_449858;
        case 0x44985cu: goto label_44985c;
        case 0x449860u: goto label_449860;
        case 0x449864u: goto label_449864;
        case 0x449868u: goto label_449868;
        case 0x44986cu: goto label_44986c;
        case 0x449870u: goto label_449870;
        case 0x449874u: goto label_449874;
        case 0x449878u: goto label_449878;
        case 0x44987cu: goto label_44987c;
        case 0x449880u: goto label_449880;
        case 0x449884u: goto label_449884;
        case 0x449888u: goto label_449888;
        case 0x44988cu: goto label_44988c;
        case 0x449890u: goto label_449890;
        case 0x449894u: goto label_449894;
        case 0x449898u: goto label_449898;
        case 0x44989cu: goto label_44989c;
        case 0x4498a0u: goto label_4498a0;
        case 0x4498a4u: goto label_4498a4;
        case 0x4498a8u: goto label_4498a8;
        case 0x4498acu: goto label_4498ac;
        case 0x4498b0u: goto label_4498b0;
        case 0x4498b4u: goto label_4498b4;
        case 0x4498b8u: goto label_4498b8;
        case 0x4498bcu: goto label_4498bc;
        case 0x4498c0u: goto label_4498c0;
        case 0x4498c4u: goto label_4498c4;
        case 0x4498c8u: goto label_4498c8;
        case 0x4498ccu: goto label_4498cc;
        case 0x4498d0u: goto label_4498d0;
        case 0x4498d4u: goto label_4498d4;
        case 0x4498d8u: goto label_4498d8;
        case 0x4498dcu: goto label_4498dc;
        case 0x4498e0u: goto label_4498e0;
        case 0x4498e4u: goto label_4498e4;
        case 0x4498e8u: goto label_4498e8;
        case 0x4498ecu: goto label_4498ec;
        case 0x4498f0u: goto label_4498f0;
        case 0x4498f4u: goto label_4498f4;
        case 0x4498f8u: goto label_4498f8;
        case 0x4498fcu: goto label_4498fc;
        case 0x449900u: goto label_449900;
        case 0x449904u: goto label_449904;
        case 0x449908u: goto label_449908;
        case 0x44990cu: goto label_44990c;
        case 0x449910u: goto label_449910;
        case 0x449914u: goto label_449914;
        case 0x449918u: goto label_449918;
        case 0x44991cu: goto label_44991c;
        case 0x449920u: goto label_449920;
        case 0x449924u: goto label_449924;
        case 0x449928u: goto label_449928;
        case 0x44992cu: goto label_44992c;
        case 0x449930u: goto label_449930;
        case 0x449934u: goto label_449934;
        case 0x449938u: goto label_449938;
        case 0x44993cu: goto label_44993c;
        case 0x449940u: goto label_449940;
        case 0x449944u: goto label_449944;
        case 0x449948u: goto label_449948;
        case 0x44994cu: goto label_44994c;
        case 0x449950u: goto label_449950;
        case 0x449954u: goto label_449954;
        case 0x449958u: goto label_449958;
        case 0x44995cu: goto label_44995c;
        case 0x449960u: goto label_449960;
        case 0x449964u: goto label_449964;
        case 0x449968u: goto label_449968;
        case 0x44996cu: goto label_44996c;
        case 0x449970u: goto label_449970;
        case 0x449974u: goto label_449974;
        case 0x449978u: goto label_449978;
        case 0x44997cu: goto label_44997c;
        case 0x449980u: goto label_449980;
        case 0x449984u: goto label_449984;
        case 0x449988u: goto label_449988;
        case 0x44998cu: goto label_44998c;
        case 0x449990u: goto label_449990;
        case 0x449994u: goto label_449994;
        case 0x449998u: goto label_449998;
        case 0x44999cu: goto label_44999c;
        case 0x4499a0u: goto label_4499a0;
        case 0x4499a4u: goto label_4499a4;
        case 0x4499a8u: goto label_4499a8;
        case 0x4499acu: goto label_4499ac;
        case 0x4499b0u: goto label_4499b0;
        case 0x4499b4u: goto label_4499b4;
        case 0x4499b8u: goto label_4499b8;
        case 0x4499bcu: goto label_4499bc;
        case 0x4499c0u: goto label_4499c0;
        case 0x4499c4u: goto label_4499c4;
        case 0x4499c8u: goto label_4499c8;
        case 0x4499ccu: goto label_4499cc;
        case 0x4499d0u: goto label_4499d0;
        case 0x4499d4u: goto label_4499d4;
        case 0x4499d8u: goto label_4499d8;
        case 0x4499dcu: goto label_4499dc;
        case 0x4499e0u: goto label_4499e0;
        case 0x4499e4u: goto label_4499e4;
        case 0x4499e8u: goto label_4499e8;
        case 0x4499ecu: goto label_4499ec;
        case 0x4499f0u: goto label_4499f0;
        case 0x4499f4u: goto label_4499f4;
        case 0x4499f8u: goto label_4499f8;
        case 0x4499fcu: goto label_4499fc;
        case 0x449a00u: goto label_449a00;
        case 0x449a04u: goto label_449a04;
        case 0x449a08u: goto label_449a08;
        case 0x449a0cu: goto label_449a0c;
        case 0x449a10u: goto label_449a10;
        case 0x449a14u: goto label_449a14;
        case 0x449a18u: goto label_449a18;
        case 0x449a1cu: goto label_449a1c;
        case 0x449a20u: goto label_449a20;
        case 0x449a24u: goto label_449a24;
        case 0x449a28u: goto label_449a28;
        case 0x449a2cu: goto label_449a2c;
        case 0x449a30u: goto label_449a30;
        case 0x449a34u: goto label_449a34;
        case 0x449a38u: goto label_449a38;
        case 0x449a3cu: goto label_449a3c;
        case 0x449a40u: goto label_449a40;
        case 0x449a44u: goto label_449a44;
        case 0x449a48u: goto label_449a48;
        case 0x449a4cu: goto label_449a4c;
        case 0x449a50u: goto label_449a50;
        case 0x449a54u: goto label_449a54;
        case 0x449a58u: goto label_449a58;
        case 0x449a5cu: goto label_449a5c;
        case 0x449a60u: goto label_449a60;
        case 0x449a64u: goto label_449a64;
        case 0x449a68u: goto label_449a68;
        case 0x449a6cu: goto label_449a6c;
        case 0x449a70u: goto label_449a70;
        case 0x449a74u: goto label_449a74;
        case 0x449a78u: goto label_449a78;
        case 0x449a7cu: goto label_449a7c;
        case 0x449a80u: goto label_449a80;
        case 0x449a84u: goto label_449a84;
        case 0x449a88u: goto label_449a88;
        case 0x449a8cu: goto label_449a8c;
        case 0x449a90u: goto label_449a90;
        case 0x449a94u: goto label_449a94;
        case 0x449a98u: goto label_449a98;
        case 0x449a9cu: goto label_449a9c;
        case 0x449aa0u: goto label_449aa0;
        case 0x449aa4u: goto label_449aa4;
        case 0x449aa8u: goto label_449aa8;
        case 0x449aacu: goto label_449aac;
        case 0x449ab0u: goto label_449ab0;
        case 0x449ab4u: goto label_449ab4;
        case 0x449ab8u: goto label_449ab8;
        case 0x449abcu: goto label_449abc;
        case 0x449ac0u: goto label_449ac0;
        case 0x449ac4u: goto label_449ac4;
        case 0x449ac8u: goto label_449ac8;
        case 0x449accu: goto label_449acc;
        case 0x449ad0u: goto label_449ad0;
        case 0x449ad4u: goto label_449ad4;
        case 0x449ad8u: goto label_449ad8;
        case 0x449adcu: goto label_449adc;
        case 0x449ae0u: goto label_449ae0;
        case 0x449ae4u: goto label_449ae4;
        case 0x449ae8u: goto label_449ae8;
        case 0x449aecu: goto label_449aec;
        default: break;
    }

    ctx->pc = 0x449500u;

label_449500:
    // 0x449500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x449500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_449504:
    // 0x449504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x449504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_449508:
    // 0x449508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44950c:
    // 0x44950c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_449510:
    // 0x449510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x449510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449514:
    // 0x449514: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_449518:
    if (ctx->pc == 0x449518u) {
        ctx->pc = 0x449518u;
            // 0x449518: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44951Cu;
        goto label_44951c;
    }
    ctx->pc = 0x449514u;
    {
        const bool branch_taken_0x449514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x449518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449514u;
            // 0x449518: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449514) {
            ctx->pc = 0x449648u;
            goto label_449648;
        }
    }
    ctx->pc = 0x44951Cu;
label_44951c:
    // 0x44951c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44951cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_449520:
    // 0x449520: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_449524:
    // 0x449524: 0x2463d7d0  addiu       $v1, $v1, -0x2830
    ctx->pc = 0x449524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957008));
label_449528:
    // 0x449528: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x449528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44952c:
    // 0x44952c: 0x2442d808  addiu       $v0, $v0, -0x27F8
    ctx->pc = 0x44952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957064));
label_449530:
    // 0x449530: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x449530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_449534:
    // 0x449534: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x449534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_449538:
    // 0x449538: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x449538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_44953c:
    // 0x44953c: 0xc0407c0  jal         func_101F00
label_449540:
    if (ctx->pc == 0x449540u) {
        ctx->pc = 0x449540u;
            // 0x449540: 0x24a59660  addiu       $a1, $a1, -0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940256));
        ctx->pc = 0x449544u;
        goto label_449544;
    }
    ctx->pc = 0x44953Cu;
    SET_GPR_U32(ctx, 31, 0x449544u);
    ctx->pc = 0x449540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44953Cu;
            // 0x449540: 0x24a59660  addiu       $a1, $a1, -0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449544u; }
        if (ctx->pc != 0x449544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449544u; }
        if (ctx->pc != 0x449544u) { return; }
    }
    ctx->pc = 0x449544u;
label_449544:
    // 0x449544: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x449544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_449548:
    // 0x449548: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_44954c:
    if (ctx->pc == 0x44954Cu) {
        ctx->pc = 0x44954Cu;
            // 0x44954c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x449550u;
        goto label_449550;
    }
    ctx->pc = 0x449548u;
    {
        const bool branch_taken_0x449548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449548) {
            ctx->pc = 0x44954Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449548u;
            // 0x44954c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44955Cu;
            goto label_44955c;
        }
    }
    ctx->pc = 0x449550u;
label_449550:
    // 0x449550: 0xc07507c  jal         func_1D41F0
label_449554:
    if (ctx->pc == 0x449554u) {
        ctx->pc = 0x449554u;
            // 0x449554: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x449558u;
        goto label_449558;
    }
    ctx->pc = 0x449550u;
    SET_GPR_U32(ctx, 31, 0x449558u);
    ctx->pc = 0x449554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449550u;
            // 0x449554: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449558u; }
        if (ctx->pc != 0x449558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449558u; }
        if (ctx->pc != 0x449558u) { return; }
    }
    ctx->pc = 0x449558u;
label_449558:
    // 0x449558: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x449558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_44955c:
    // 0x44955c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_449560:
    if (ctx->pc == 0x449560u) {
        ctx->pc = 0x449560u;
            // 0x449560: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x449564u;
        goto label_449564;
    }
    ctx->pc = 0x44955Cu;
    {
        const bool branch_taken_0x44955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44955c) {
            ctx->pc = 0x449560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44955Cu;
            // 0x449560: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44958Cu;
            goto label_44958c;
        }
    }
    ctx->pc = 0x449564u;
label_449564:
    // 0x449564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_449568:
    if (ctx->pc == 0x449568u) {
        ctx->pc = 0x44956Cu;
        goto label_44956c;
    }
    ctx->pc = 0x449564u;
    {
        const bool branch_taken_0x449564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449564) {
            ctx->pc = 0x449588u;
            goto label_449588;
        }
    }
    ctx->pc = 0x44956Cu;
label_44956c:
    // 0x44956c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_449570:
    if (ctx->pc == 0x449570u) {
        ctx->pc = 0x449574u;
        goto label_449574;
    }
    ctx->pc = 0x44956Cu;
    {
        const bool branch_taken_0x44956c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44956c) {
            ctx->pc = 0x449588u;
            goto label_449588;
        }
    }
    ctx->pc = 0x449574u;
label_449574:
    // 0x449574: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x449574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_449578:
    // 0x449578: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44957c:
    if (ctx->pc == 0x44957Cu) {
        ctx->pc = 0x449580u;
        goto label_449580;
    }
    ctx->pc = 0x449578u;
    {
        const bool branch_taken_0x449578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x449578) {
            ctx->pc = 0x449588u;
            goto label_449588;
        }
    }
    ctx->pc = 0x449580u;
label_449580:
    // 0x449580: 0xc0400a8  jal         func_1002A0
label_449584:
    if (ctx->pc == 0x449584u) {
        ctx->pc = 0x449588u;
        goto label_449588;
    }
    ctx->pc = 0x449580u;
    SET_GPR_U32(ctx, 31, 0x449588u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449588u; }
        if (ctx->pc != 0x449588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449588u; }
        if (ctx->pc != 0x449588u) { return; }
    }
    ctx->pc = 0x449588u;
label_449588:
    // 0x449588: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x449588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_44958c:
    // 0x44958c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_449590:
    if (ctx->pc == 0x449590u) {
        ctx->pc = 0x449590u;
            // 0x449590: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x449594u;
        goto label_449594;
    }
    ctx->pc = 0x44958Cu;
    {
        const bool branch_taken_0x44958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44958c) {
            ctx->pc = 0x449590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44958Cu;
            // 0x449590: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4495BCu;
            goto label_4495bc;
        }
    }
    ctx->pc = 0x449594u;
label_449594:
    // 0x449594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_449598:
    if (ctx->pc == 0x449598u) {
        ctx->pc = 0x44959Cu;
        goto label_44959c;
    }
    ctx->pc = 0x449594u;
    {
        const bool branch_taken_0x449594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449594) {
            ctx->pc = 0x4495B8u;
            goto label_4495b8;
        }
    }
    ctx->pc = 0x44959Cu;
label_44959c:
    // 0x44959c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4495a0:
    if (ctx->pc == 0x4495A0u) {
        ctx->pc = 0x4495A4u;
        goto label_4495a4;
    }
    ctx->pc = 0x44959Cu;
    {
        const bool branch_taken_0x44959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44959c) {
            ctx->pc = 0x4495B8u;
            goto label_4495b8;
        }
    }
    ctx->pc = 0x4495A4u;
label_4495a4:
    // 0x4495a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4495a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4495a8:
    // 0x4495a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4495ac:
    if (ctx->pc == 0x4495ACu) {
        ctx->pc = 0x4495B0u;
        goto label_4495b0;
    }
    ctx->pc = 0x4495A8u;
    {
        const bool branch_taken_0x4495a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4495a8) {
            ctx->pc = 0x4495B8u;
            goto label_4495b8;
        }
    }
    ctx->pc = 0x4495B0u;
label_4495b0:
    // 0x4495b0: 0xc0400a8  jal         func_1002A0
label_4495b4:
    if (ctx->pc == 0x4495B4u) {
        ctx->pc = 0x4495B8u;
        goto label_4495b8;
    }
    ctx->pc = 0x4495B0u;
    SET_GPR_U32(ctx, 31, 0x4495B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4495B8u; }
        if (ctx->pc != 0x4495B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4495B8u; }
        if (ctx->pc != 0x4495B8u) { return; }
    }
    ctx->pc = 0x4495B8u;
label_4495b8:
    // 0x4495b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4495b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4495bc:
    // 0x4495bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4495c0:
    if (ctx->pc == 0x4495C0u) {
        ctx->pc = 0x4495C4u;
        goto label_4495c4;
    }
    ctx->pc = 0x4495BCu;
    {
        const bool branch_taken_0x4495bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4495bc) {
            ctx->pc = 0x4495D8u;
            goto label_4495d8;
        }
    }
    ctx->pc = 0x4495C4u;
label_4495c4:
    // 0x4495c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4495c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4495c8:
    // 0x4495c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4495c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4495cc:
    // 0x4495cc: 0x2463d7c0  addiu       $v1, $v1, -0x2840
    ctx->pc = 0x4495ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956992));
label_4495d0:
    // 0x4495d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4495d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4495d4:
    // 0x4495d4: 0xac407540  sw          $zero, 0x7540($v0)
    ctx->pc = 0x4495d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30016), GPR_U32(ctx, 0));
label_4495d8:
    // 0x4495d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4495dc:
    if (ctx->pc == 0x4495DCu) {
        ctx->pc = 0x4495DCu;
            // 0x4495dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4495E0u;
        goto label_4495e0;
    }
    ctx->pc = 0x4495D8u;
    {
        const bool branch_taken_0x4495d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4495d8) {
            ctx->pc = 0x4495DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4495D8u;
            // 0x4495dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449634u;
            goto label_449634;
        }
    }
    ctx->pc = 0x4495E0u;
label_4495e0:
    // 0x4495e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4495e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4495e4:
    // 0x4495e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4495e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4495e8:
    // 0x4495e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4495e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4495ec:
    // 0x4495ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4495ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4495f0:
    // 0x4495f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4495f4:
    if (ctx->pc == 0x4495F4u) {
        ctx->pc = 0x4495F4u;
            // 0x4495f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4495F8u;
        goto label_4495f8;
    }
    ctx->pc = 0x4495F0u;
    {
        const bool branch_taken_0x4495f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4495f0) {
            ctx->pc = 0x4495F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4495F0u;
            // 0x4495f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44960Cu;
            goto label_44960c;
        }
    }
    ctx->pc = 0x4495F8u;
label_4495f8:
    // 0x4495f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4495f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4495fc:
    // 0x4495fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4495fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_449600:
    // 0x449600: 0x320f809  jalr        $t9
label_449604:
    if (ctx->pc == 0x449604u) {
        ctx->pc = 0x449604u;
            // 0x449604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x449608u;
        goto label_449608;
    }
    ctx->pc = 0x449600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x449608u);
        ctx->pc = 0x449604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449600u;
            // 0x449604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x449608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x449608u; }
            if (ctx->pc != 0x449608u) { return; }
        }
        }
    }
    ctx->pc = 0x449608u;
label_449608:
    // 0x449608: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x449608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_44960c:
    // 0x44960c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_449610:
    if (ctx->pc == 0x449610u) {
        ctx->pc = 0x449610u;
            // 0x449610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449614u;
        goto label_449614;
    }
    ctx->pc = 0x44960Cu;
    {
        const bool branch_taken_0x44960c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44960c) {
            ctx->pc = 0x449610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44960Cu;
            // 0x449610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449628u;
            goto label_449628;
        }
    }
    ctx->pc = 0x449614u;
label_449614:
    // 0x449614: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x449614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449618:
    // 0x449618: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x449618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44961c:
    // 0x44961c: 0x320f809  jalr        $t9
label_449620:
    if (ctx->pc == 0x449620u) {
        ctx->pc = 0x449620u;
            // 0x449620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x449624u;
        goto label_449624;
    }
    ctx->pc = 0x44961Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x449624u);
        ctx->pc = 0x449620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44961Cu;
            // 0x449620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x449624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x449624u; }
            if (ctx->pc != 0x449624u) { return; }
        }
        }
    }
    ctx->pc = 0x449624u;
label_449624:
    // 0x449624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x449624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_449628:
    // 0x449628: 0xc075bf8  jal         func_1D6FE0
label_44962c:
    if (ctx->pc == 0x44962Cu) {
        ctx->pc = 0x44962Cu;
            // 0x44962c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449630u;
        goto label_449630;
    }
    ctx->pc = 0x449628u;
    SET_GPR_U32(ctx, 31, 0x449630u);
    ctx->pc = 0x44962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449628u;
            // 0x44962c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449630u; }
        if (ctx->pc != 0x449630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449630u; }
        if (ctx->pc != 0x449630u) { return; }
    }
    ctx->pc = 0x449630u;
label_449630:
    // 0x449630: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x449630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_449634:
    // 0x449634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x449634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_449638:
    // 0x449638: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44963c:
    if (ctx->pc == 0x44963Cu) {
        ctx->pc = 0x44963Cu;
            // 0x44963c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449640u;
        goto label_449640;
    }
    ctx->pc = 0x449638u;
    {
        const bool branch_taken_0x449638 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x449638) {
            ctx->pc = 0x44963Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449638u;
            // 0x44963c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44964Cu;
            goto label_44964c;
        }
    }
    ctx->pc = 0x449640u;
label_449640:
    // 0x449640: 0xc0400a8  jal         func_1002A0
label_449644:
    if (ctx->pc == 0x449644u) {
        ctx->pc = 0x449644u;
            // 0x449644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449648u;
        goto label_449648;
    }
    ctx->pc = 0x449640u;
    SET_GPR_U32(ctx, 31, 0x449648u);
    ctx->pc = 0x449644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449640u;
            // 0x449644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449648u; }
        if (ctx->pc != 0x449648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449648u; }
        if (ctx->pc != 0x449648u) { return; }
    }
    ctx->pc = 0x449648u;
label_449648:
    // 0x449648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x449648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44964c:
    // 0x44964c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44964cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_449650:
    // 0x449650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449654:
    // 0x449654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_449658:
    // 0x449658: 0x3e00008  jr          $ra
label_44965c:
    if (ctx->pc == 0x44965Cu) {
        ctx->pc = 0x44965Cu;
            // 0x44965c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x449660u;
        goto label_449660;
    }
    ctx->pc = 0x449658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449658u;
            // 0x44965c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449660u;
label_449660:
    // 0x449660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x449660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_449664:
    // 0x449664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x449664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_449668:
    // 0x449668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44966c:
    // 0x44966c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_449670:
    // 0x449670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449674:
    // 0x449674: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_449678:
    if (ctx->pc == 0x449678u) {
        ctx->pc = 0x449678u;
            // 0x449678: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44967Cu;
        goto label_44967c;
    }
    ctx->pc = 0x449674u;
    {
        const bool branch_taken_0x449674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449674u;
            // 0x449678: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449674) {
            ctx->pc = 0x44973Cu;
            goto label_44973c;
        }
    }
    ctx->pc = 0x44967Cu;
label_44967c:
    // 0x44967c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44967cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_449680:
    // 0x449680: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_449684:
    // 0x449684: 0x2463d720  addiu       $v1, $v1, -0x28E0
    ctx->pc = 0x449684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956832));
label_449688:
    // 0x449688: 0x2442d760  addiu       $v0, $v0, -0x28A0
    ctx->pc = 0x449688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956896));
label_44968c:
    // 0x44968c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44968cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_449690:
    // 0x449690: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x449690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_449694:
    // 0x449694: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x449694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449698:
    // 0x449698: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x449698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_44969c:
    // 0x44969c: 0x320f809  jalr        $t9
label_4496a0:
    if (ctx->pc == 0x4496A0u) {
        ctx->pc = 0x4496A4u;
        goto label_4496a4;
    }
    ctx->pc = 0x44969Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4496A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4496A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4496A4u; }
            if (ctx->pc != 0x4496A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4496A4u;
label_4496a4:
    // 0x4496a4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4496a8:
    if (ctx->pc == 0x4496A8u) {
        ctx->pc = 0x4496A8u;
            // 0x4496a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4496ACu;
        goto label_4496ac;
    }
    ctx->pc = 0x4496A4u;
    {
        const bool branch_taken_0x4496a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4496a4) {
            ctx->pc = 0x4496A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4496A4u;
            // 0x4496a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449728u;
            goto label_449728;
        }
    }
    ctx->pc = 0x4496ACu;
label_4496ac:
    // 0x4496ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4496acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4496b0:
    // 0x4496b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4496b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4496b4:
    // 0x4496b4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4496b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4496b8:
    // 0x4496b8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4496b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4496bc:
    // 0x4496bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4496bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4496c0:
    // 0x4496c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4496c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4496c4:
    // 0x4496c4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4496c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4496c8:
    // 0x4496c8: 0xc0aecc4  jal         func_2BB310
label_4496cc:
    if (ctx->pc == 0x4496CCu) {
        ctx->pc = 0x4496CCu;
            // 0x4496cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4496D0u;
        goto label_4496d0;
    }
    ctx->pc = 0x4496C8u;
    SET_GPR_U32(ctx, 31, 0x4496D0u);
    ctx->pc = 0x4496CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4496C8u;
            // 0x4496cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4496D0u; }
        if (ctx->pc != 0x4496D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4496D0u; }
        if (ctx->pc != 0x4496D0u) { return; }
    }
    ctx->pc = 0x4496D0u;
label_4496d0:
    // 0x4496d0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4496d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4496d4:
    // 0x4496d4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4496d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4496d8:
    // 0x4496d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4496dc:
    if (ctx->pc == 0x4496DCu) {
        ctx->pc = 0x4496DCu;
            // 0x4496dc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4496E0u;
        goto label_4496e0;
    }
    ctx->pc = 0x4496D8u;
    {
        const bool branch_taken_0x4496d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4496d8) {
            ctx->pc = 0x4496DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4496D8u;
            // 0x4496dc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4496F4u;
            goto label_4496f4;
        }
    }
    ctx->pc = 0x4496E0u;
label_4496e0:
    // 0x4496e0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4496e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4496e4:
    // 0x4496e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4496e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4496e8:
    // 0x4496e8: 0x320f809  jalr        $t9
label_4496ec:
    if (ctx->pc == 0x4496ECu) {
        ctx->pc = 0x4496ECu;
            // 0x4496ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4496F0u;
        goto label_4496f0;
    }
    ctx->pc = 0x4496E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4496F0u);
        ctx->pc = 0x4496ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4496E8u;
            // 0x4496ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4496F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4496F0u; }
            if (ctx->pc != 0x4496F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4496F0u;
label_4496f0:
    // 0x4496f0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4496f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4496f4:
    // 0x4496f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4496f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4496f8:
    // 0x4496f8: 0xc0aec9c  jal         func_2BB270
label_4496fc:
    if (ctx->pc == 0x4496FCu) {
        ctx->pc = 0x4496FCu;
            // 0x4496fc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x449700u;
        goto label_449700;
    }
    ctx->pc = 0x4496F8u;
    SET_GPR_U32(ctx, 31, 0x449700u);
    ctx->pc = 0x4496FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4496F8u;
            // 0x4496fc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449700u; }
        if (ctx->pc != 0x449700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449700u; }
        if (ctx->pc != 0x449700u) { return; }
    }
    ctx->pc = 0x449700u;
label_449700:
    // 0x449700: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x449700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_449704:
    // 0x449704: 0xc0aec88  jal         func_2BB220
label_449708:
    if (ctx->pc == 0x449708u) {
        ctx->pc = 0x449708u;
            // 0x449708: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x44970Cu;
        goto label_44970c;
    }
    ctx->pc = 0x449704u;
    SET_GPR_U32(ctx, 31, 0x44970Cu);
    ctx->pc = 0x449708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449704u;
            // 0x449708: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44970Cu; }
        if (ctx->pc != 0x44970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44970Cu; }
        if (ctx->pc != 0x44970Cu) { return; }
    }
    ctx->pc = 0x44970Cu;
label_44970c:
    // 0x44970c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x44970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_449710:
    // 0x449710: 0xc0aec0c  jal         func_2BB030
label_449714:
    if (ctx->pc == 0x449714u) {
        ctx->pc = 0x449714u;
            // 0x449714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449718u;
        goto label_449718;
    }
    ctx->pc = 0x449710u;
    SET_GPR_U32(ctx, 31, 0x449718u);
    ctx->pc = 0x449714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449710u;
            // 0x449714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449718u; }
        if (ctx->pc != 0x449718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449718u; }
        if (ctx->pc != 0x449718u) { return; }
    }
    ctx->pc = 0x449718u;
label_449718:
    // 0x449718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44971c:
    // 0x44971c: 0xc0aeaa8  jal         func_2BAAA0
label_449720:
    if (ctx->pc == 0x449720u) {
        ctx->pc = 0x449720u;
            // 0x449720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449724u;
        goto label_449724;
    }
    ctx->pc = 0x44971Cu;
    SET_GPR_U32(ctx, 31, 0x449724u);
    ctx->pc = 0x449720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44971Cu;
            // 0x449720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449724u; }
        if (ctx->pc != 0x449724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449724u; }
        if (ctx->pc != 0x449724u) { return; }
    }
    ctx->pc = 0x449724u;
label_449724:
    // 0x449724: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x449724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_449728:
    // 0x449728: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x449728u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44972c:
    // 0x44972c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_449730:
    if (ctx->pc == 0x449730u) {
        ctx->pc = 0x449730u;
            // 0x449730: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449734u;
        goto label_449734;
    }
    ctx->pc = 0x44972Cu;
    {
        const bool branch_taken_0x44972c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44972c) {
            ctx->pc = 0x449730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44972Cu;
            // 0x449730: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449740u;
            goto label_449740;
        }
    }
    ctx->pc = 0x449734u;
label_449734:
    // 0x449734: 0xc0400a8  jal         func_1002A0
label_449738:
    if (ctx->pc == 0x449738u) {
        ctx->pc = 0x449738u;
            // 0x449738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44973Cu;
        goto label_44973c;
    }
    ctx->pc = 0x449734u;
    SET_GPR_U32(ctx, 31, 0x44973Cu);
    ctx->pc = 0x449738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449734u;
            // 0x449738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44973Cu; }
        if (ctx->pc != 0x44973Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44973Cu; }
        if (ctx->pc != 0x44973Cu) { return; }
    }
    ctx->pc = 0x44973Cu;
label_44973c:
    // 0x44973c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44973cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449740:
    // 0x449740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x449740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_449744:
    // 0x449744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449748:
    // 0x449748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44974c:
    // 0x44974c: 0x3e00008  jr          $ra
label_449750:
    if (ctx->pc == 0x449750u) {
        ctx->pc = 0x449750u;
            // 0x449750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x449754u;
        goto label_449754;
    }
    ctx->pc = 0x44974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44974Cu;
            // 0x449750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449754u;
label_449754:
    // 0x449754: 0x0  nop
    ctx->pc = 0x449754u;
    // NOP
label_449758:
    // 0x449758: 0x0  nop
    ctx->pc = 0x449758u;
    // NOP
label_44975c:
    // 0x44975c: 0x0  nop
    ctx->pc = 0x44975cu;
    // NOP
label_449760:
    // 0x449760: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x449760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_449764:
    // 0x449764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x449764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_449768:
    // 0x449768: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x449768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_44976c:
    // 0x44976c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x44976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_449770:
    // 0x449770: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x449770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_449774:
    // 0x449774: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x449774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_449778:
    // 0x449778: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x449778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_44977c:
    // 0x44977c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x44977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_449780:
    // 0x449780: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x449780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_449784:
    // 0x449784: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x449784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_449788:
    // 0x449788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x449788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44978c:
    // 0x44978c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_449790:
    // 0x449790: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x449790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_449794:
    // 0x449794: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x449794u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_449798:
    // 0x449798: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_44979c:
    if (ctx->pc == 0x44979Cu) {
        ctx->pc = 0x44979Cu;
            // 0x44979c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4497A0u;
        goto label_4497a0;
    }
    ctx->pc = 0x449798u;
    {
        const bool branch_taken_0x449798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449798u;
            // 0x44979c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449798) {
            ctx->pc = 0x4497E8u;
            goto label_4497e8;
        }
    }
    ctx->pc = 0x4497A0u;
label_4497a0:
    // 0x4497a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4497a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4497a4:
    // 0x4497a4: 0x50a300c6  beql        $a1, $v1, . + 4 + (0xC6 << 2)
label_4497a8:
    if (ctx->pc == 0x4497A8u) {
        ctx->pc = 0x4497A8u;
            // 0x4497a8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4497ACu;
        goto label_4497ac;
    }
    ctx->pc = 0x4497A4u;
    {
        const bool branch_taken_0x4497a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4497a4) {
            ctx->pc = 0x4497A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4497A4u;
            // 0x4497a8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449AC0u;
            goto label_449ac0;
        }
    }
    ctx->pc = 0x4497ACu;
label_4497ac:
    // 0x4497ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4497acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4497b0:
    // 0x4497b0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4497b4:
    if (ctx->pc == 0x4497B4u) {
        ctx->pc = 0x4497B8u;
        goto label_4497b8;
    }
    ctx->pc = 0x4497B0u;
    {
        const bool branch_taken_0x4497b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4497b0) {
            ctx->pc = 0x4497C0u;
            goto label_4497c0;
        }
    }
    ctx->pc = 0x4497B8u;
label_4497b8:
    // 0x4497b8: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_4497bc:
    if (ctx->pc == 0x4497BCu) {
        ctx->pc = 0x4497C0u;
        goto label_4497c0;
    }
    ctx->pc = 0x4497B8u;
    {
        const bool branch_taken_0x4497b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4497b8) {
            ctx->pc = 0x449ABCu;
            goto label_449abc;
        }
    }
    ctx->pc = 0x4497C0u;
label_4497c0:
    // 0x4497c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4497c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4497c4:
    // 0x4497c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4497c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4497c8:
    // 0x4497c8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4497c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4497cc:
    // 0x4497cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4497ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4497d0:
    // 0x4497d0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4497d4:
    // 0x4497d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4497d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4497d8:
    // 0x4497d8: 0x320f809  jalr        $t9
label_4497dc:
    if (ctx->pc == 0x4497DCu) {
        ctx->pc = 0x4497DCu;
            // 0x4497dc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4497E0u;
        goto label_4497e0;
    }
    ctx->pc = 0x4497D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4497E0u);
        ctx->pc = 0x4497DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4497D8u;
            // 0x4497dc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4497E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4497E0u; }
            if (ctx->pc != 0x4497E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4497E0u;
label_4497e0:
    // 0x4497e0: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_4497e4:
    if (ctx->pc == 0x4497E4u) {
        ctx->pc = 0x4497E8u;
        goto label_4497e8;
    }
    ctx->pc = 0x4497E0u;
    {
        const bool branch_taken_0x4497e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4497e0) {
            ctx->pc = 0x449ABCu;
            goto label_449abc;
        }
    }
    ctx->pc = 0x4497E8u;
label_4497e8:
    // 0x4497e8: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x4497e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4497ec:
    // 0x4497ec: 0x12e000b3  beqz        $s7, . + 4 + (0xB3 << 2)
label_4497f0:
    if (ctx->pc == 0x4497F0u) {
        ctx->pc = 0x4497F4u;
        goto label_4497f4;
    }
    ctx->pc = 0x4497ECu;
    {
        const bool branch_taken_0x4497ec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4497ec) {
            ctx->pc = 0x449ABCu;
            goto label_449abc;
        }
    }
    ctx->pc = 0x4497F4u;
label_4497f4:
    // 0x4497f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4497f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4497f8:
    // 0x4497f8: 0x26be0084  addiu       $fp, $s5, 0x84
    ctx->pc = 0x4497f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4497fc:
    // 0x4497fc: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x4497fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_449800:
    // 0x449800: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x449800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_449804:
    // 0x449804: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x449804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_449808:
    // 0x449808: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x449808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_44980c:
    // 0x44980c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_449810:
    // 0x449810: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x449810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_449814:
    // 0x449814: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x449814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_449818:
    // 0x449818: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x449818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_44981c:
    // 0x44981c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x44981cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_449820:
    // 0x449820: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x449820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_449824:
    // 0x449824: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x449824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_449828:
    // 0x449828: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x449828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_44982c:
    // 0x44982c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x44982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_449830:
    // 0x449830: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449834:
    // 0x449834: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x449834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_449838:
    // 0x449838: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x449838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_44983c:
    // 0x44983c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44983cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_449840:
    // 0x449840: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x449840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_449844:
    // 0x449844: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x449844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_449848:
    // 0x449848: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x449848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_44984c:
    // 0x44984c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x44984cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_449850:
    // 0x449850: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x449850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_449854:
    // 0x449854: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x449854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_449858:
    // 0x449858: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x449858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_44985c:
    // 0x44985c: 0xc04e738  jal         func_139CE0
label_449860:
    if (ctx->pc == 0x449860u) {
        ctx->pc = 0x449860u;
            // 0x449860: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x449864u;
        goto label_449864;
    }
    ctx->pc = 0x44985Cu;
    SET_GPR_U32(ctx, 31, 0x449864u);
    ctx->pc = 0x449860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44985Cu;
            // 0x449860: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449864u; }
        if (ctx->pc != 0x449864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449864u; }
        if (ctx->pc != 0x449864u) { return; }
    }
    ctx->pc = 0x449864u;
label_449864:
    // 0x449864: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x449864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_449868:
    // 0x449868: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x449868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44986c:
    // 0x44986c: 0xc454d770  lwc1        $f20, -0x2890($v0)
    ctx->pc = 0x44986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_449870:
    // 0x449870: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x449870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449874:
    // 0x449874: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x449874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_449878:
    // 0x449878: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x449878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44987c:
    // 0x44987c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x44987cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_449880:
    // 0x449880: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x449880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_449884:
    // 0x449884: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x449884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_449888:
    // 0x449888: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x449888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_44988c:
    // 0x44988c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x44988cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_449890:
    // 0x449890: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x449890u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_449894:
    // 0x449894: 0xc0d639c  jal         func_358E70
label_449898:
    if (ctx->pc == 0x449898u) {
        ctx->pc = 0x449898u;
            // 0x449898: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x44989Cu;
        goto label_44989c;
    }
    ctx->pc = 0x449894u;
    SET_GPR_U32(ctx, 31, 0x44989Cu);
    ctx->pc = 0x449898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449894u;
            // 0x449898: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44989Cu; }
        if (ctx->pc != 0x44989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44989Cu; }
        if (ctx->pc != 0x44989Cu) { return; }
    }
    ctx->pc = 0x44989Cu;
label_44989c:
    // 0x44989c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_4498a0:
    if (ctx->pc == 0x4498A0u) {
        ctx->pc = 0x4498A4u;
        goto label_4498a4;
    }
    ctx->pc = 0x44989Cu;
    {
        const bool branch_taken_0x44989c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44989c) {
            ctx->pc = 0x449A18u;
            goto label_449a18;
        }
    }
    ctx->pc = 0x4498A4u;
label_4498a4:
    // 0x4498a4: 0xc0d1c14  jal         func_347050
label_4498a8:
    if (ctx->pc == 0x4498A8u) {
        ctx->pc = 0x4498A8u;
            // 0x4498a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4498ACu;
        goto label_4498ac;
    }
    ctx->pc = 0x4498A4u;
    SET_GPR_U32(ctx, 31, 0x4498ACu);
    ctx->pc = 0x4498A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498A4u;
            // 0x4498a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498ACu; }
        if (ctx->pc != 0x4498ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498ACu; }
        if (ctx->pc != 0x4498ACu) { return; }
    }
    ctx->pc = 0x4498ACu;
label_4498ac:
    // 0x4498ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4498acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4498b0:
    // 0x4498b0: 0xc04f278  jal         func_13C9E0
label_4498b4:
    if (ctx->pc == 0x4498B4u) {
        ctx->pc = 0x4498B4u;
            // 0x4498b4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4498B8u;
        goto label_4498b8;
    }
    ctx->pc = 0x4498B0u;
    SET_GPR_U32(ctx, 31, 0x4498B8u);
    ctx->pc = 0x4498B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498B0u;
            // 0x4498b4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498B8u; }
        if (ctx->pc != 0x4498B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498B8u; }
        if (ctx->pc != 0x4498B8u) { return; }
    }
    ctx->pc = 0x4498B8u;
label_4498b8:
    // 0x4498b8: 0x8e6600e8  lw          $a2, 0xE8($s3)
    ctx->pc = 0x4498b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_4498bc:
    // 0x4498bc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4498bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4498c0:
    // 0x4498c0: 0xc04cdd0  jal         func_133740
label_4498c4:
    if (ctx->pc == 0x4498C4u) {
        ctx->pc = 0x4498C4u;
            // 0x4498c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4498C8u;
        goto label_4498c8;
    }
    ctx->pc = 0x4498C0u;
    SET_GPR_U32(ctx, 31, 0x4498C8u);
    ctx->pc = 0x4498C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498C0u;
            // 0x4498c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498C8u; }
        if (ctx->pc != 0x4498C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498C8u; }
        if (ctx->pc != 0x4498C8u) { return; }
    }
    ctx->pc = 0x4498C8u;
label_4498c8:
    // 0x4498c8: 0xc0d1c10  jal         func_347040
label_4498cc:
    if (ctx->pc == 0x4498CCu) {
        ctx->pc = 0x4498CCu;
            // 0x4498cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4498D0u;
        goto label_4498d0;
    }
    ctx->pc = 0x4498C8u;
    SET_GPR_U32(ctx, 31, 0x4498D0u);
    ctx->pc = 0x4498CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498C8u;
            // 0x4498cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498D0u; }
        if (ctx->pc != 0x4498D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498D0u; }
        if (ctx->pc != 0x4498D0u) { return; }
    }
    ctx->pc = 0x4498D0u;
label_4498d0:
    // 0x4498d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4498d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4498d4:
    // 0x4498d4: 0xc04ce80  jal         func_133A00
label_4498d8:
    if (ctx->pc == 0x4498D8u) {
        ctx->pc = 0x4498D8u;
            // 0x4498d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4498DCu;
        goto label_4498dc;
    }
    ctx->pc = 0x4498D4u;
    SET_GPR_U32(ctx, 31, 0x4498DCu);
    ctx->pc = 0x4498D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498D4u;
            // 0x4498d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498DCu; }
        if (ctx->pc != 0x4498DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498DCu; }
        if (ctx->pc != 0x4498DCu) { return; }
    }
    ctx->pc = 0x4498DCu;
label_4498dc:
    // 0x4498dc: 0xc0d4108  jal         func_350420
label_4498e0:
    if (ctx->pc == 0x4498E0u) {
        ctx->pc = 0x4498E4u;
        goto label_4498e4;
    }
    ctx->pc = 0x4498DCu;
    SET_GPR_U32(ctx, 31, 0x4498E4u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498E4u; }
        if (ctx->pc != 0x4498E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498E4u; }
        if (ctx->pc != 0x4498E4u) { return; }
    }
    ctx->pc = 0x4498E4u;
label_4498e4:
    // 0x4498e4: 0xc0b36b4  jal         func_2CDAD0
label_4498e8:
    if (ctx->pc == 0x4498E8u) {
        ctx->pc = 0x4498E8u;
            // 0x4498e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4498ECu;
        goto label_4498ec;
    }
    ctx->pc = 0x4498E4u;
    SET_GPR_U32(ctx, 31, 0x4498ECu);
    ctx->pc = 0x4498E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498E4u;
            // 0x4498e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498ECu; }
        if (ctx->pc != 0x4498ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498ECu; }
        if (ctx->pc != 0x4498ECu) { return; }
    }
    ctx->pc = 0x4498ECu;
label_4498ec:
    // 0x4498ec: 0xc0b9c64  jal         func_2E7190
label_4498f0:
    if (ctx->pc == 0x4498F0u) {
        ctx->pc = 0x4498F0u;
            // 0x4498f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4498F4u;
        goto label_4498f4;
    }
    ctx->pc = 0x4498ECu;
    SET_GPR_U32(ctx, 31, 0x4498F4u);
    ctx->pc = 0x4498F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498ECu;
            // 0x4498f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498F4u; }
        if (ctx->pc != 0x4498F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4498F4u; }
        if (ctx->pc != 0x4498F4u) { return; }
    }
    ctx->pc = 0x4498F4u;
label_4498f4:
    // 0x4498f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4498f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4498f8:
    // 0x4498f8: 0xc0d4104  jal         func_350410
label_4498fc:
    if (ctx->pc == 0x4498FCu) {
        ctx->pc = 0x4498FCu;
            // 0x4498fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449900u;
        goto label_449900;
    }
    ctx->pc = 0x4498F8u;
    SET_GPR_U32(ctx, 31, 0x449900u);
    ctx->pc = 0x4498FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4498F8u;
            // 0x4498fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449900u; }
        if (ctx->pc != 0x449900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449900u; }
        if (ctx->pc != 0x449900u) { return; }
    }
    ctx->pc = 0x449900u;
label_449900:
    // 0x449900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449904:
    // 0x449904: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x449904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_449908:
    // 0x449908: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x449908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44990c:
    // 0x44990c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x44990cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_449910:
    // 0x449910: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x449910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_449914:
    // 0x449914: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x449914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449918:
    // 0x449918: 0xc0d40ac  jal         func_3502B0
label_44991c:
    if (ctx->pc == 0x44991Cu) {
        ctx->pc = 0x44991Cu;
            // 0x44991c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x449920u;
        goto label_449920;
    }
    ctx->pc = 0x449918u;
    SET_GPR_U32(ctx, 31, 0x449920u);
    ctx->pc = 0x44991Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449918u;
            // 0x44991c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449920u; }
        if (ctx->pc != 0x449920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449920u; }
        if (ctx->pc != 0x449920u) { return; }
    }
    ctx->pc = 0x449920u;
label_449920:
    // 0x449920: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x449920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_449924:
    // 0x449924: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_449928:
    if (ctx->pc == 0x449928u) {
        ctx->pc = 0x449928u;
            // 0x449928: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x44992Cu;
        goto label_44992c;
    }
    ctx->pc = 0x449924u;
    {
        const bool branch_taken_0x449924 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x449928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449924u;
            // 0x449928: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449924) {
            ctx->pc = 0x449938u;
            goto label_449938;
        }
    }
    ctx->pc = 0x44992Cu;
label_44992c:
    // 0x44992c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_449930:
    if (ctx->pc == 0x449930u) {
        ctx->pc = 0x449930u;
            // 0x449930: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449934u;
        goto label_449934;
    }
    ctx->pc = 0x44992Cu;
    {
        const bool branch_taken_0x44992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44992Cu;
            // 0x449930: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44992c) {
            ctx->pc = 0x449A20u;
            goto label_449a20;
        }
    }
    ctx->pc = 0x449934u;
label_449934:
    // 0x449934: 0x0  nop
    ctx->pc = 0x449934u;
    // NOP
label_449938:
    // 0x449938: 0xc0dd4bc  jal         func_3752F0
label_44993c:
    if (ctx->pc == 0x44993Cu) {
        ctx->pc = 0x44993Cu;
            // 0x44993c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449940u;
        goto label_449940;
    }
    ctx->pc = 0x449938u;
    SET_GPR_U32(ctx, 31, 0x449940u);
    ctx->pc = 0x44993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449938u;
            // 0x44993c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449940u; }
        if (ctx->pc != 0x449940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449940u; }
        if (ctx->pc != 0x449940u) { return; }
    }
    ctx->pc = 0x449940u;
label_449940:
    // 0x449940: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_449944:
    if (ctx->pc == 0x449944u) {
        ctx->pc = 0x449948u;
        goto label_449948;
    }
    ctx->pc = 0x449940u;
    {
        const bool branch_taken_0x449940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449940) {
            ctx->pc = 0x4499B8u;
            goto label_4499b8;
        }
    }
    ctx->pc = 0x449948u;
label_449948:
    // 0x449948: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x449948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_44994c:
    // 0x44994c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x44994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_449950:
    // 0x449950: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x449950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_449954:
    // 0x449954: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_449958:
    if (ctx->pc == 0x449958u) {
        ctx->pc = 0x449958u;
            // 0x449958: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x44995Cu;
        goto label_44995c;
    }
    ctx->pc = 0x449954u;
    {
        const bool branch_taken_0x449954 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x449954) {
            ctx->pc = 0x449958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449954u;
            // 0x449958: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449968u;
            goto label_449968;
        }
    }
    ctx->pc = 0x44995Cu;
label_44995c:
    // 0x44995c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x44995cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_449960:
    // 0x449960: 0x10000007  b           . + 4 + (0x7 << 2)
label_449964:
    if (ctx->pc == 0x449964u) {
        ctx->pc = 0x449964u;
            // 0x449964: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x449968u;
        goto label_449968;
    }
    ctx->pc = 0x449960u;
    {
        const bool branch_taken_0x449960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449960u;
            // 0x449964: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x449960) {
            ctx->pc = 0x449980u;
            goto label_449980;
        }
    }
    ctx->pc = 0x449968u;
label_449968:
    // 0x449968: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x449968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_44996c:
    // 0x44996c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x44996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_449970:
    // 0x449970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x449970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_449974:
    // 0x449974: 0x0  nop
    ctx->pc = 0x449974u;
    // NOP
label_449978:
    // 0x449978: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x449978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_44997c:
    // 0x44997c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x44997cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_449980:
    // 0x449980: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x449980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_449984:
    // 0x449984: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x449984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_449988:
    // 0x449988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x449988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44998c:
    // 0x44998c: 0xc0477a8  jal         func_11DEA0
label_449990:
    if (ctx->pc == 0x449990u) {
        ctx->pc = 0x449990u;
            // 0x449990: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x449994u;
        goto label_449994;
    }
    ctx->pc = 0x44998Cu;
    SET_GPR_U32(ctx, 31, 0x449994u);
    ctx->pc = 0x449990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44998Cu;
            // 0x449990: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449994u; }
        if (ctx->pc != 0x449994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449994u; }
        if (ctx->pc != 0x449994u) { return; }
    }
    ctx->pc = 0x449994u;
label_449994:
    // 0x449994: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x449994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_449998:
    // 0x449998: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x449998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_44999c:
    // 0x44999c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x44999cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4499a0:
    // 0x4499a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4499a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4499a4:
    // 0x4499a4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x4499a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4499a8:
    // 0x4499a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4499a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4499ac:
    // 0x4499ac: 0xc04ce64  jal         func_133990
label_4499b0:
    if (ctx->pc == 0x4499B0u) {
        ctx->pc = 0x4499B0u;
            // 0x4499b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4499B4u;
        goto label_4499b4;
    }
    ctx->pc = 0x4499ACu;
    SET_GPR_U32(ctx, 31, 0x4499B4u);
    ctx->pc = 0x4499B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4499ACu;
            // 0x4499b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499B4u; }
        if (ctx->pc != 0x4499B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499B4u; }
        if (ctx->pc != 0x4499B4u) { return; }
    }
    ctx->pc = 0x4499B4u;
label_4499b4:
    // 0x4499b4: 0x0  nop
    ctx->pc = 0x4499b4u;
    // NOP
label_4499b8:
    // 0x4499b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4499b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4499bc:
    // 0x4499bc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4499bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4499c0:
    // 0x4499c0: 0xc1126bc  jal         func_449AF0
label_4499c4:
    if (ctx->pc == 0x4499C4u) {
        ctx->pc = 0x4499C4u;
            // 0x4499c4: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->pc = 0x4499C8u;
        goto label_4499c8;
    }
    ctx->pc = 0x4499C0u;
    SET_GPR_U32(ctx, 31, 0x4499C8u);
    ctx->pc = 0x4499C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4499C0u;
            // 0x4499c4: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449AF0u;
    if (runtime->hasFunction(0x449AF0u)) {
        auto targetFn = runtime->lookupFunction(0x449AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499C8u; }
        if (ctx->pc != 0x4499C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00449AF0_0x449af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499C8u; }
        if (ctx->pc != 0x4499C8u) { return; }
    }
    ctx->pc = 0x4499C8u;
label_4499c8:
    // 0x4499c8: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4499c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_4499cc:
    // 0x4499cc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x4499ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4499d0:
    // 0x4499d0: 0xc04e4a4  jal         func_139290
label_4499d4:
    if (ctx->pc == 0x4499D4u) {
        ctx->pc = 0x4499D4u;
            // 0x4499d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4499D8u;
        goto label_4499d8;
    }
    ctx->pc = 0x4499D0u;
    SET_GPR_U32(ctx, 31, 0x4499D8u);
    ctx->pc = 0x4499D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4499D0u;
            // 0x4499d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499D8u; }
        if (ctx->pc != 0x4499D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499D8u; }
        if (ctx->pc != 0x4499D8u) { return; }
    }
    ctx->pc = 0x4499D8u;
label_4499d8:
    // 0x4499d8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4499d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4499dc:
    // 0x4499dc: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x4499dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4499e0:
    // 0x4499e0: 0xc04cd60  jal         func_133580
label_4499e4:
    if (ctx->pc == 0x4499E4u) {
        ctx->pc = 0x4499E4u;
            // 0x4499e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4499E8u;
        goto label_4499e8;
    }
    ctx->pc = 0x4499E0u;
    SET_GPR_U32(ctx, 31, 0x4499E8u);
    ctx->pc = 0x4499E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4499E0u;
            // 0x4499e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499E8u; }
        if (ctx->pc != 0x4499E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4499E8u; }
        if (ctx->pc != 0x4499E8u) { return; }
    }
    ctx->pc = 0x4499E8u;
label_4499e8:
    // 0x4499e8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4499e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4499ec:
    // 0x4499ec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4499ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4499f0:
    // 0x4499f0: 0x320f809  jalr        $t9
label_4499f4:
    if (ctx->pc == 0x4499F4u) {
        ctx->pc = 0x4499F4u;
            // 0x4499f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4499F8u;
        goto label_4499f8;
    }
    ctx->pc = 0x4499F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4499F8u);
        ctx->pc = 0x4499F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4499F0u;
            // 0x4499f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4499F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4499F8u; }
            if (ctx->pc != 0x4499F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4499F8u;
label_4499f8:
    // 0x4499f8: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4499f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_4499fc:
    // 0x4499fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4499fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_449a00:
    // 0x449a00: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x449a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_449a04:
    // 0x449a04: 0xc054fd4  jal         func_153F50
label_449a08:
    if (ctx->pc == 0x449A08u) {
        ctx->pc = 0x449A08u;
            // 0x449a08: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449A0Cu;
        goto label_449a0c;
    }
    ctx->pc = 0x449A04u;
    SET_GPR_U32(ctx, 31, 0x449A0Cu);
    ctx->pc = 0x449A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449A04u;
            // 0x449a08: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449A0Cu; }
        if (ctx->pc != 0x449A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449A0Cu; }
        if (ctx->pc != 0x449A0Cu) { return; }
    }
    ctx->pc = 0x449A0Cu;
label_449a0c:
    // 0x449a0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_449a10:
    if (ctx->pc == 0x449A10u) {
        ctx->pc = 0x449A10u;
            // 0x449a10: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x449A14u;
        goto label_449a14;
    }
    ctx->pc = 0x449A0Cu;
    {
        const bool branch_taken_0x449a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449A0Cu;
            // 0x449a10: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a0c) {
            ctx->pc = 0x449A20u;
            goto label_449a20;
        }
    }
    ctx->pc = 0x449A14u;
label_449a14:
    // 0x449a14: 0x0  nop
    ctx->pc = 0x449a14u;
    // NOP
label_449a18:
    // 0x449a18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x449a18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449a1c:
    // 0x449a1c: 0x0  nop
    ctx->pc = 0x449a1cu;
    // NOP
label_449a20:
    // 0x449a20: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_449a24:
    if (ctx->pc == 0x449A24u) {
        ctx->pc = 0x449A28u;
        goto label_449a28;
    }
    ctx->pc = 0x449A20u;
    {
        const bool branch_taken_0x449a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x449a20) {
            ctx->pc = 0x449A78u;
            goto label_449a78;
        }
    }
    ctx->pc = 0x449A28u;
label_449a28:
    // 0x449a28: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x449a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_449a2c:
    // 0x449a2c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x449a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_449a30:
    // 0x449a30: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x449a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_449a34:
    // 0x449a34: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x449a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_449a38:
    // 0x449a38: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x449a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_449a3c:
    // 0x449a3c: 0xc04cce8  jal         func_1333A0
label_449a40:
    if (ctx->pc == 0x449A40u) {
        ctx->pc = 0x449A40u;
            // 0x449a40: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x449A44u;
        goto label_449a44;
    }
    ctx->pc = 0x449A3Cu;
    SET_GPR_U32(ctx, 31, 0x449A44u);
    ctx->pc = 0x449A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449A3Cu;
            // 0x449a40: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449A44u; }
        if (ctx->pc != 0x449A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449A44u; }
        if (ctx->pc != 0x449A44u) { return; }
    }
    ctx->pc = 0x449A44u;
label_449a44:
    // 0x449a44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x449a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_449a48:
    // 0x449a48: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x449a48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_449a4c:
    // 0x449a4c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x449a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_449a50:
    // 0x449a50: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x449a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_449a54:
    // 0x449a54: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x449a54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_449a58:
    // 0x449a58: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x449a58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_449a5c:
    // 0x449a5c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x449a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_449a60:
    // 0x449a60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x449a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_449a64:
    // 0x449a64: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x449a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_449a68:
    // 0x449a68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x449a68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_449a6c:
    // 0x449a6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x449a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_449a70:
    // 0x449a70: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x449a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_449a74:
    // 0x449a74: 0x0  nop
    ctx->pc = 0x449a74u;
    // NOP
label_449a78:
    // 0x449a78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x449a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_449a7c:
    // 0x449a7c: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x449a7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_449a80:
    // 0x449a80: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
label_449a84:
    if (ctx->pc == 0x449A84u) {
        ctx->pc = 0x449A84u;
            // 0x449a84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x449A88u;
        goto label_449a88;
    }
    ctx->pc = 0x449A80u;
    {
        const bool branch_taken_0x449a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x449A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449A80u;
            // 0x449a84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a80) {
            ctx->pc = 0x449874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_449874;
        }
    }
    ctx->pc = 0x449A88u;
label_449a88:
    // 0x449a88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449a8c:
    // 0x449a8c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x449a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_449a90:
    // 0x449a90: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_449a94:
    if (ctx->pc == 0x449A94u) {
        ctx->pc = 0x449A94u;
            // 0x449a94: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x449A98u;
        goto label_449a98;
    }
    ctx->pc = 0x449A90u;
    {
        const bool branch_taken_0x449a90 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x449A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449A90u;
            // 0x449a94: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a90) {
            ctx->pc = 0x449ABCu;
            goto label_449abc;
        }
    }
    ctx->pc = 0x449A98u;
label_449a98:
    // 0x449a98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x449a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_449a9c:
    // 0x449a9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449aa0:
    // 0x449aa0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x449aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_449aa4:
    // 0x449aa4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x449aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_449aa8:
    // 0x449aa8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x449aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_449aac:
    // 0x449aac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x449aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449ab0:
    // 0x449ab0: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x449ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_449ab4:
    // 0x449ab4: 0xc055ea8  jal         func_157AA0
label_449ab8:
    if (ctx->pc == 0x449AB8u) {
        ctx->pc = 0x449AB8u;
            // 0x449ab8: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x449ABCu;
        goto label_449abc;
    }
    ctx->pc = 0x449AB4u;
    SET_GPR_U32(ctx, 31, 0x449ABCu);
    ctx->pc = 0x449AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449AB4u;
            // 0x449ab8: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449ABCu; }
        if (ctx->pc != 0x449ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449ABCu; }
        if (ctx->pc != 0x449ABCu) { return; }
    }
    ctx->pc = 0x449ABCu;
label_449abc:
    // 0x449abc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x449abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_449ac0:
    // 0x449ac0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x449ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_449ac4:
    // 0x449ac4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x449ac4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_449ac8:
    // 0x449ac8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x449ac8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_449acc:
    // 0x449acc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x449accu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_449ad0:
    // 0x449ad0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x449ad0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_449ad4:
    // 0x449ad4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x449ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_449ad8:
    // 0x449ad8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x449ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_449adc:
    // 0x449adc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x449adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_449ae0:
    // 0x449ae0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x449ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_449ae4:
    // 0x449ae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x449ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449ae8:
    // 0x449ae8: 0x3e00008  jr          $ra
label_449aec:
    if (ctx->pc == 0x449AECu) {
        ctx->pc = 0x449AECu;
            // 0x449aec: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x449AF0u;
        goto label_fallthrough_0x449ae8;
    }
    ctx->pc = 0x449AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449AE8u;
            // 0x449aec: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x449ae8:
    ctx->pc = 0x449AF0u;
}
