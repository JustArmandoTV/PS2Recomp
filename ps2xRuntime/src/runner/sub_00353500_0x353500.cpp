#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353500
// Address: 0x353500 - 0x353910
void sub_00353500_0x353500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353500_0x353500");
#endif

    switch (ctx->pc) {
        case 0x353500u: goto label_353500;
        case 0x353504u: goto label_353504;
        case 0x353508u: goto label_353508;
        case 0x35350cu: goto label_35350c;
        case 0x353510u: goto label_353510;
        case 0x353514u: goto label_353514;
        case 0x353518u: goto label_353518;
        case 0x35351cu: goto label_35351c;
        case 0x353520u: goto label_353520;
        case 0x353524u: goto label_353524;
        case 0x353528u: goto label_353528;
        case 0x35352cu: goto label_35352c;
        case 0x353530u: goto label_353530;
        case 0x353534u: goto label_353534;
        case 0x353538u: goto label_353538;
        case 0x35353cu: goto label_35353c;
        case 0x353540u: goto label_353540;
        case 0x353544u: goto label_353544;
        case 0x353548u: goto label_353548;
        case 0x35354cu: goto label_35354c;
        case 0x353550u: goto label_353550;
        case 0x353554u: goto label_353554;
        case 0x353558u: goto label_353558;
        case 0x35355cu: goto label_35355c;
        case 0x353560u: goto label_353560;
        case 0x353564u: goto label_353564;
        case 0x353568u: goto label_353568;
        case 0x35356cu: goto label_35356c;
        case 0x353570u: goto label_353570;
        case 0x353574u: goto label_353574;
        case 0x353578u: goto label_353578;
        case 0x35357cu: goto label_35357c;
        case 0x353580u: goto label_353580;
        case 0x353584u: goto label_353584;
        case 0x353588u: goto label_353588;
        case 0x35358cu: goto label_35358c;
        case 0x353590u: goto label_353590;
        case 0x353594u: goto label_353594;
        case 0x353598u: goto label_353598;
        case 0x35359cu: goto label_35359c;
        case 0x3535a0u: goto label_3535a0;
        case 0x3535a4u: goto label_3535a4;
        case 0x3535a8u: goto label_3535a8;
        case 0x3535acu: goto label_3535ac;
        case 0x3535b0u: goto label_3535b0;
        case 0x3535b4u: goto label_3535b4;
        case 0x3535b8u: goto label_3535b8;
        case 0x3535bcu: goto label_3535bc;
        case 0x3535c0u: goto label_3535c0;
        case 0x3535c4u: goto label_3535c4;
        case 0x3535c8u: goto label_3535c8;
        case 0x3535ccu: goto label_3535cc;
        case 0x3535d0u: goto label_3535d0;
        case 0x3535d4u: goto label_3535d4;
        case 0x3535d8u: goto label_3535d8;
        case 0x3535dcu: goto label_3535dc;
        case 0x3535e0u: goto label_3535e0;
        case 0x3535e4u: goto label_3535e4;
        case 0x3535e8u: goto label_3535e8;
        case 0x3535ecu: goto label_3535ec;
        case 0x3535f0u: goto label_3535f0;
        case 0x3535f4u: goto label_3535f4;
        case 0x3535f8u: goto label_3535f8;
        case 0x3535fcu: goto label_3535fc;
        case 0x353600u: goto label_353600;
        case 0x353604u: goto label_353604;
        case 0x353608u: goto label_353608;
        case 0x35360cu: goto label_35360c;
        case 0x353610u: goto label_353610;
        case 0x353614u: goto label_353614;
        case 0x353618u: goto label_353618;
        case 0x35361cu: goto label_35361c;
        case 0x353620u: goto label_353620;
        case 0x353624u: goto label_353624;
        case 0x353628u: goto label_353628;
        case 0x35362cu: goto label_35362c;
        case 0x353630u: goto label_353630;
        case 0x353634u: goto label_353634;
        case 0x353638u: goto label_353638;
        case 0x35363cu: goto label_35363c;
        case 0x353640u: goto label_353640;
        case 0x353644u: goto label_353644;
        case 0x353648u: goto label_353648;
        case 0x35364cu: goto label_35364c;
        case 0x353650u: goto label_353650;
        case 0x353654u: goto label_353654;
        case 0x353658u: goto label_353658;
        case 0x35365cu: goto label_35365c;
        case 0x353660u: goto label_353660;
        case 0x353664u: goto label_353664;
        case 0x353668u: goto label_353668;
        case 0x35366cu: goto label_35366c;
        case 0x353670u: goto label_353670;
        case 0x353674u: goto label_353674;
        case 0x353678u: goto label_353678;
        case 0x35367cu: goto label_35367c;
        case 0x353680u: goto label_353680;
        case 0x353684u: goto label_353684;
        case 0x353688u: goto label_353688;
        case 0x35368cu: goto label_35368c;
        case 0x353690u: goto label_353690;
        case 0x353694u: goto label_353694;
        case 0x353698u: goto label_353698;
        case 0x35369cu: goto label_35369c;
        case 0x3536a0u: goto label_3536a0;
        case 0x3536a4u: goto label_3536a4;
        case 0x3536a8u: goto label_3536a8;
        case 0x3536acu: goto label_3536ac;
        case 0x3536b0u: goto label_3536b0;
        case 0x3536b4u: goto label_3536b4;
        case 0x3536b8u: goto label_3536b8;
        case 0x3536bcu: goto label_3536bc;
        case 0x3536c0u: goto label_3536c0;
        case 0x3536c4u: goto label_3536c4;
        case 0x3536c8u: goto label_3536c8;
        case 0x3536ccu: goto label_3536cc;
        case 0x3536d0u: goto label_3536d0;
        case 0x3536d4u: goto label_3536d4;
        case 0x3536d8u: goto label_3536d8;
        case 0x3536dcu: goto label_3536dc;
        case 0x3536e0u: goto label_3536e0;
        case 0x3536e4u: goto label_3536e4;
        case 0x3536e8u: goto label_3536e8;
        case 0x3536ecu: goto label_3536ec;
        case 0x3536f0u: goto label_3536f0;
        case 0x3536f4u: goto label_3536f4;
        case 0x3536f8u: goto label_3536f8;
        case 0x3536fcu: goto label_3536fc;
        case 0x353700u: goto label_353700;
        case 0x353704u: goto label_353704;
        case 0x353708u: goto label_353708;
        case 0x35370cu: goto label_35370c;
        case 0x353710u: goto label_353710;
        case 0x353714u: goto label_353714;
        case 0x353718u: goto label_353718;
        case 0x35371cu: goto label_35371c;
        case 0x353720u: goto label_353720;
        case 0x353724u: goto label_353724;
        case 0x353728u: goto label_353728;
        case 0x35372cu: goto label_35372c;
        case 0x353730u: goto label_353730;
        case 0x353734u: goto label_353734;
        case 0x353738u: goto label_353738;
        case 0x35373cu: goto label_35373c;
        case 0x353740u: goto label_353740;
        case 0x353744u: goto label_353744;
        case 0x353748u: goto label_353748;
        case 0x35374cu: goto label_35374c;
        case 0x353750u: goto label_353750;
        case 0x353754u: goto label_353754;
        case 0x353758u: goto label_353758;
        case 0x35375cu: goto label_35375c;
        case 0x353760u: goto label_353760;
        case 0x353764u: goto label_353764;
        case 0x353768u: goto label_353768;
        case 0x35376cu: goto label_35376c;
        case 0x353770u: goto label_353770;
        case 0x353774u: goto label_353774;
        case 0x353778u: goto label_353778;
        case 0x35377cu: goto label_35377c;
        case 0x353780u: goto label_353780;
        case 0x353784u: goto label_353784;
        case 0x353788u: goto label_353788;
        case 0x35378cu: goto label_35378c;
        case 0x353790u: goto label_353790;
        case 0x353794u: goto label_353794;
        case 0x353798u: goto label_353798;
        case 0x35379cu: goto label_35379c;
        case 0x3537a0u: goto label_3537a0;
        case 0x3537a4u: goto label_3537a4;
        case 0x3537a8u: goto label_3537a8;
        case 0x3537acu: goto label_3537ac;
        case 0x3537b0u: goto label_3537b0;
        case 0x3537b4u: goto label_3537b4;
        case 0x3537b8u: goto label_3537b8;
        case 0x3537bcu: goto label_3537bc;
        case 0x3537c0u: goto label_3537c0;
        case 0x3537c4u: goto label_3537c4;
        case 0x3537c8u: goto label_3537c8;
        case 0x3537ccu: goto label_3537cc;
        case 0x3537d0u: goto label_3537d0;
        case 0x3537d4u: goto label_3537d4;
        case 0x3537d8u: goto label_3537d8;
        case 0x3537dcu: goto label_3537dc;
        case 0x3537e0u: goto label_3537e0;
        case 0x3537e4u: goto label_3537e4;
        case 0x3537e8u: goto label_3537e8;
        case 0x3537ecu: goto label_3537ec;
        case 0x3537f0u: goto label_3537f0;
        case 0x3537f4u: goto label_3537f4;
        case 0x3537f8u: goto label_3537f8;
        case 0x3537fcu: goto label_3537fc;
        case 0x353800u: goto label_353800;
        case 0x353804u: goto label_353804;
        case 0x353808u: goto label_353808;
        case 0x35380cu: goto label_35380c;
        case 0x353810u: goto label_353810;
        case 0x353814u: goto label_353814;
        case 0x353818u: goto label_353818;
        case 0x35381cu: goto label_35381c;
        case 0x353820u: goto label_353820;
        case 0x353824u: goto label_353824;
        case 0x353828u: goto label_353828;
        case 0x35382cu: goto label_35382c;
        case 0x353830u: goto label_353830;
        case 0x353834u: goto label_353834;
        case 0x353838u: goto label_353838;
        case 0x35383cu: goto label_35383c;
        case 0x353840u: goto label_353840;
        case 0x353844u: goto label_353844;
        case 0x353848u: goto label_353848;
        case 0x35384cu: goto label_35384c;
        case 0x353850u: goto label_353850;
        case 0x353854u: goto label_353854;
        case 0x353858u: goto label_353858;
        case 0x35385cu: goto label_35385c;
        case 0x353860u: goto label_353860;
        case 0x353864u: goto label_353864;
        case 0x353868u: goto label_353868;
        case 0x35386cu: goto label_35386c;
        case 0x353870u: goto label_353870;
        case 0x353874u: goto label_353874;
        case 0x353878u: goto label_353878;
        case 0x35387cu: goto label_35387c;
        case 0x353880u: goto label_353880;
        case 0x353884u: goto label_353884;
        case 0x353888u: goto label_353888;
        case 0x35388cu: goto label_35388c;
        case 0x353890u: goto label_353890;
        case 0x353894u: goto label_353894;
        case 0x353898u: goto label_353898;
        case 0x35389cu: goto label_35389c;
        case 0x3538a0u: goto label_3538a0;
        case 0x3538a4u: goto label_3538a4;
        case 0x3538a8u: goto label_3538a8;
        case 0x3538acu: goto label_3538ac;
        case 0x3538b0u: goto label_3538b0;
        case 0x3538b4u: goto label_3538b4;
        case 0x3538b8u: goto label_3538b8;
        case 0x3538bcu: goto label_3538bc;
        case 0x3538c0u: goto label_3538c0;
        case 0x3538c4u: goto label_3538c4;
        case 0x3538c8u: goto label_3538c8;
        case 0x3538ccu: goto label_3538cc;
        case 0x3538d0u: goto label_3538d0;
        case 0x3538d4u: goto label_3538d4;
        case 0x3538d8u: goto label_3538d8;
        case 0x3538dcu: goto label_3538dc;
        case 0x3538e0u: goto label_3538e0;
        case 0x3538e4u: goto label_3538e4;
        case 0x3538e8u: goto label_3538e8;
        case 0x3538ecu: goto label_3538ec;
        case 0x3538f0u: goto label_3538f0;
        case 0x3538f4u: goto label_3538f4;
        case 0x3538f8u: goto label_3538f8;
        case 0x3538fcu: goto label_3538fc;
        case 0x353900u: goto label_353900;
        case 0x353904u: goto label_353904;
        case 0x353908u: goto label_353908;
        case 0x35390cu: goto label_35390c;
        default: break;
    }

    ctx->pc = 0x353500u;

label_353500:
    // 0x353500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_353504:
    // 0x353504: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x353504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_353508:
    // 0x353508: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x353508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_35350c:
    // 0x35350c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_353510:
    // 0x353510: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x353510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_353514:
    // 0x353514: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x353514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_353518:
    // 0x353518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35351c:
    // 0x35351c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35351cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_353520:
    // 0x353520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x353520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_353524:
    // 0x353524: 0xc0aeaf4  jal         func_2BABD0
label_353528:
    if (ctx->pc == 0x353528u) {
        ctx->pc = 0x353528u;
            // 0x353528: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x35352Cu;
        goto label_35352c;
    }
    ctx->pc = 0x353524u;
    SET_GPR_U32(ctx, 31, 0x35352Cu);
    ctx->pc = 0x353528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353524u;
            // 0x353528: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35352Cu; }
        if (ctx->pc != 0x35352Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35352Cu; }
        if (ctx->pc != 0x35352Cu) { return; }
    }
    ctx->pc = 0x35352Cu;
label_35352c:
    // 0x35352c: 0xc0d4ef4  jal         func_353BD0
label_353530:
    if (ctx->pc == 0x353530u) {
        ctx->pc = 0x353530u;
            // 0x353530: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x353534u;
        goto label_353534;
    }
    ctx->pc = 0x35352Cu;
    SET_GPR_U32(ctx, 31, 0x353534u);
    ctx->pc = 0x353530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35352Cu;
            // 0x353530: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353BD0u;
    if (runtime->hasFunction(0x353BD0u)) {
        auto targetFn = runtime->lookupFunction(0x353BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353534u; }
        if (ctx->pc != 0x353534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353BD0_0x353bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353534u; }
        if (ctx->pc != 0x353534u) { return; }
    }
    ctx->pc = 0x353534u;
label_353534:
    // 0x353534: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x353534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_353538:
    // 0x353538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x353538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35353c:
    // 0x35353c: 0x24635e70  addiu       $v1, $v1, 0x5E70
    ctx->pc = 0x35353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24176));
label_353540:
    // 0x353540: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x353540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
label_353544:
    // 0x353544: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x353544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_353548:
    // 0x353548: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x353548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_35354c:
    // 0x35354c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x35354cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_353550:
    // 0x353550: 0xc0d4eec  jal         func_353BB0
label_353554:
    if (ctx->pc == 0x353554u) {
        ctx->pc = 0x353554u;
            // 0x353554: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x353558u;
        goto label_353558;
    }
    ctx->pc = 0x353550u;
    SET_GPR_U32(ctx, 31, 0x353558u);
    ctx->pc = 0x353554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353550u;
            // 0x353554: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353BB0u;
    if (runtime->hasFunction(0x353BB0u)) {
        auto targetFn = runtime->lookupFunction(0x353BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353558u; }
        if (ctx->pc != 0x353558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353BB0_0x353bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353558u; }
        if (ctx->pc != 0x353558u) { return; }
    }
    ctx->pc = 0x353558u;
label_353558:
    // 0x353558: 0xc0d4eec  jal         func_353BB0
label_35355c:
    if (ctx->pc == 0x35355Cu) {
        ctx->pc = 0x35355Cu;
            // 0x35355c: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x353560u;
        goto label_353560;
    }
    ctx->pc = 0x353558u;
    SET_GPR_U32(ctx, 31, 0x353560u);
    ctx->pc = 0x35355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353558u;
            // 0x35355c: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353BB0u;
    if (runtime->hasFunction(0x353BB0u)) {
        auto targetFn = runtime->lookupFunction(0x353BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353560u; }
        if (ctx->pc != 0x353560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353BB0_0x353bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353560u; }
        if (ctx->pc != 0x353560u) { return; }
    }
    ctx->pc = 0x353560u;
label_353560:
    // 0x353560: 0xc0d4edc  jal         func_353B70
label_353564:
    if (ctx->pc == 0x353564u) {
        ctx->pc = 0x353564u;
            // 0x353564: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x353568u;
        goto label_353568;
    }
    ctx->pc = 0x353560u;
    SET_GPR_U32(ctx, 31, 0x353568u);
    ctx->pc = 0x353564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353560u;
            // 0x353564: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353B70u;
    if (runtime->hasFunction(0x353B70u)) {
        auto targetFn = runtime->lookupFunction(0x353B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353568u; }
        if (ctx->pc != 0x353568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353B70_0x353b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353568u; }
        if (ctx->pc != 0x353568u) { return; }
    }
    ctx->pc = 0x353568u;
label_353568:
    // 0x353568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x353568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35356c:
    // 0x35356c: 0xc0aeac0  jal         func_2BAB00
label_353570:
    if (ctx->pc == 0x353570u) {
        ctx->pc = 0x353570u;
            // 0x353570: 0xae4000b0  sw          $zero, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x353574u;
        goto label_353574;
    }
    ctx->pc = 0x35356Cu;
    SET_GPR_U32(ctx, 31, 0x353574u);
    ctx->pc = 0x353570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35356Cu;
            // 0x353570: 0xae4000b0  sw          $zero, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353574u; }
        if (ctx->pc != 0x353574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353574u; }
        if (ctx->pc != 0x353574u) { return; }
    }
    ctx->pc = 0x353574u;
label_353574:
    // 0x353574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_353578:
    // 0x353578: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_35357c:
    if (ctx->pc == 0x35357Cu) {
        ctx->pc = 0x353580u;
        goto label_353580;
    }
    ctx->pc = 0x353578u;
    {
        const bool branch_taken_0x353578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x353578) {
            ctx->pc = 0x3535F8u;
            goto label_3535f8;
        }
    }
    ctx->pc = 0x353580u;
label_353580:
    // 0x353580: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x353580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_353584:
    // 0x353584: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x353584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_353588:
    // 0x353588: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x353588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_35358c:
    // 0x35358c: 0xc040138  jal         func_1004E0
label_353590:
    if (ctx->pc == 0x353590u) {
        ctx->pc = 0x353590u;
            // 0x353590: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x353594u;
        goto label_353594;
    }
    ctx->pc = 0x35358Cu;
    SET_GPR_U32(ctx, 31, 0x353594u);
    ctx->pc = 0x353590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35358Cu;
            // 0x353590: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353594u; }
        if (ctx->pc != 0x353594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353594u; }
        if (ctx->pc != 0x353594u) { return; }
    }
    ctx->pc = 0x353594u;
label_353594:
    // 0x353594: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x353594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_353598:
    // 0x353598: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x353598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_35359c:
    // 0x35359c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3535a0:
    // 0x3535a0: 0x24a53a80  addiu       $a1, $a1, 0x3A80
    ctx->pc = 0x3535a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14976));
label_3535a4:
    // 0x3535a4: 0x24c62430  addiu       $a2, $a2, 0x2430
    ctx->pc = 0x3535a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9264));
label_3535a8:
    // 0x3535a8: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x3535a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_3535ac:
    // 0x3535ac: 0xc040840  jal         func_102100
label_3535b0:
    if (ctx->pc == 0x3535B0u) {
        ctx->pc = 0x3535B0u;
            // 0x3535b0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3535B4u;
        goto label_3535b4;
    }
    ctx->pc = 0x3535ACu;
    SET_GPR_U32(ctx, 31, 0x3535B4u);
    ctx->pc = 0x3535B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3535ACu;
            // 0x3535b0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535B4u; }
        if (ctx->pc != 0x3535B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535B4u; }
        if (ctx->pc != 0x3535B4u) { return; }
    }
    ctx->pc = 0x3535B4u;
label_3535b4:
    // 0x3535b4: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x3535b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_3535b8:
    // 0x3535b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3535b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3535bc:
    // 0x3535bc: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x3535bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_3535c0:
    // 0x3535c0: 0xc0d4e9c  jal         func_353A70
label_3535c4:
    if (ctx->pc == 0x3535C4u) {
        ctx->pc = 0x3535C4u;
            // 0x3535c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3535C8u;
        goto label_3535c8;
    }
    ctx->pc = 0x3535C0u;
    SET_GPR_U32(ctx, 31, 0x3535C8u);
    ctx->pc = 0x3535C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3535C0u;
            // 0x3535c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353A70u;
    if (runtime->hasFunction(0x353A70u)) {
        auto targetFn = runtime->lookupFunction(0x353A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535C8u; }
        if (ctx->pc != 0x3535C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353A70_0x353a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535C8u; }
        if (ctx->pc != 0x3535C8u) { return; }
    }
    ctx->pc = 0x3535C8u;
label_3535c8:
    // 0x3535c8: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x3535c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_3535cc:
    // 0x3535cc: 0xc0d4e9c  jal         func_353A70
label_3535d0:
    if (ctx->pc == 0x3535D0u) {
        ctx->pc = 0x3535D0u;
            // 0x3535d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3535D4u;
        goto label_3535d4;
    }
    ctx->pc = 0x3535CCu;
    SET_GPR_U32(ctx, 31, 0x3535D4u);
    ctx->pc = 0x3535D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3535CCu;
            // 0x3535d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353A70u;
    if (runtime->hasFunction(0x353A70u)) {
        auto targetFn = runtime->lookupFunction(0x353A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535D4u; }
        if (ctx->pc != 0x3535D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353A70_0x353a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535D4u; }
        if (ctx->pc != 0x3535D4u) { return; }
    }
    ctx->pc = 0x3535D4u;
label_3535d4:
    // 0x3535d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3535d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3535d8:
    // 0x3535d8: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x3535d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_3535dc:
    // 0x3535dc: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x3535dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_3535e0:
    // 0x3535e0: 0xc0d4e94  jal         func_353A50
label_3535e4:
    if (ctx->pc == 0x3535E4u) {
        ctx->pc = 0x3535E4u;
            // 0x3535e4: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->pc = 0x3535E8u;
        goto label_3535e8;
    }
    ctx->pc = 0x3535E0u;
    SET_GPR_U32(ctx, 31, 0x3535E8u);
    ctx->pc = 0x3535E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3535E0u;
            // 0x3535e4: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353A50u;
    if (runtime->hasFunction(0x353A50u)) {
        auto targetFn = runtime->lookupFunction(0x353A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535E8u; }
        if (ctx->pc != 0x3535E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353A50_0x353a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3535E8u; }
        if (ctx->pc != 0x3535E8u) { return; }
    }
    ctx->pc = 0x3535E8u;
label_3535e8:
    // 0x3535e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3535e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3535ec:
    // 0x3535ec: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x3535ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3535f0:
    // 0x3535f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3535f4:
    if (ctx->pc == 0x3535F4u) {
        ctx->pc = 0x3535F4u;
            // 0x3535f4: 0x269400a0  addiu       $s4, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->pc = 0x3535F8u;
        goto label_3535f8;
    }
    ctx->pc = 0x3535F0u;
    {
        const bool branch_taken_0x3535f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3535F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3535F0u;
            // 0x3535f4: 0x269400a0  addiu       $s4, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3535f0) {
            ctx->pc = 0x3535D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3535d8;
        }
    }
    ctx->pc = 0x3535F8u;
label_3535f8:
    // 0x3535f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3535f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3535fc:
    // 0x3535fc: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3535fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_353600:
    // 0x353600: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x353600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_353604:
    // 0x353604: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x353604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_353608:
    // 0x353608: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x353608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_35360c:
    // 0x35360c: 0x24e7c4f0  addiu       $a3, $a3, -0x3B10
    ctx->pc = 0x35360cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952176));
label_353610:
    // 0x353610: 0x24c65e20  addiu       $a2, $a2, 0x5E20
    ctx->pc = 0x353610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24096));
label_353614:
    // 0x353614: 0x8c680968  lw          $t0, 0x968($v1)
    ctx->pc = 0x353614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_353618:
    // 0x353618: 0x24a55e58  addiu       $a1, $a1, 0x5E58
    ctx->pc = 0x353618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
label_35361c:
    // 0x35361c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353620:
    // 0x353620: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x353620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_353624:
    // 0x353624: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x353624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_353628:
    // 0x353628: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x353628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_35362c:
    // 0x35362c: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x35362cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_353630:
    // 0x353630: 0xa24700b4  sb          $a3, 0xB4($s2)
    ctx->pc = 0x353630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 180), (uint8_t)GPR_U32(ctx, 7));
label_353634:
    // 0x353634: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x353634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
label_353638:
    // 0x353638: 0xae450064  sw          $a1, 0x64($s2)
    ctx->pc = 0x353638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 5));
label_35363c:
    // 0x35363c: 0xae5100c8  sw          $s1, 0xC8($s2)
    ctx->pc = 0x35363cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 17));
label_353640:
    // 0x353640: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x353640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_353644:
    // 0x353644: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x353644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
label_353648:
    // 0x353648: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x353648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_35364c:
    // 0x35364c: 0xa24400e5  sb          $a0, 0xE5($s2)
    ctx->pc = 0x35364cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 229), (uint8_t)GPR_U32(ctx, 4));
label_353650:
    // 0x353650: 0xa24400e4  sb          $a0, 0xE4($s2)
    ctx->pc = 0x353650u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 228), (uint8_t)GPR_U32(ctx, 4));
label_353654:
    // 0x353654: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x353654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_353658:
    // 0x353658: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x353658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_35365c:
    // 0x35365c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_353660:
    if (ctx->pc == 0x353660u) {
        ctx->pc = 0x353664u;
        goto label_353664;
    }
    ctx->pc = 0x35365Cu;
    {
        const bool branch_taken_0x35365c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35365c) {
            ctx->pc = 0x353688u;
            goto label_353688;
        }
    }
    ctx->pc = 0x353664u;
label_353664:
    // 0x353664: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x353664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_353668:
    // 0x353668: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_35366c:
    if (ctx->pc == 0x35366Cu) {
        ctx->pc = 0x353670u;
        goto label_353670;
    }
    ctx->pc = 0x353668u;
    {
        const bool branch_taken_0x353668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x353668) {
            ctx->pc = 0x353678u;
            goto label_353678;
        }
    }
    ctx->pc = 0x353670u;
label_353670:
    // 0x353670: 0x1000000a  b           . + 4 + (0xA << 2)
label_353674:
    if (ctx->pc == 0x353674u) {
        ctx->pc = 0x353674u;
            // 0x353674: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x353678u;
        goto label_353678;
    }
    ctx->pc = 0x353670u;
    {
        const bool branch_taken_0x353670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353670u;
            // 0x353674: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353670) {
            ctx->pc = 0x35369Cu;
            goto label_35369c;
        }
    }
    ctx->pc = 0x353678u;
label_353678:
    // 0x353678: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x353678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_35367c:
    // 0x35367c: 0xc440caa0  lwc1        $f0, -0x3560($v0)
    ctx->pc = 0x35367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353680:
    // 0x353680: 0x10000007  b           . + 4 + (0x7 << 2)
label_353684:
    if (ctx->pc == 0x353684u) {
        ctx->pc = 0x353684u;
            // 0x353684: 0xe64000cc  swc1        $f0, 0xCC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
        ctx->pc = 0x353688u;
        goto label_353688;
    }
    ctx->pc = 0x353680u;
    {
        const bool branch_taken_0x353680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353680u;
            // 0x353684: 0xe64000cc  swc1        $f0, 0xCC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353680) {
            ctx->pc = 0x3536A0u;
            goto label_3536a0;
        }
    }
    ctx->pc = 0x353688u;
label_353688:
    // 0x353688: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x353688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_35368c:
    // 0x35368c: 0xc4408838  lwc1        $f0, -0x77C8($v0)
    ctx->pc = 0x35368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353690:
    // 0x353690: 0xe64000cc  swc1        $f0, 0xCC($s2)
    ctx->pc = 0x353690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
label_353694:
    // 0x353694: 0x10000002  b           . + 4 + (0x2 << 2)
label_353698:
    if (ctx->pc == 0x353698u) {
        ctx->pc = 0x353698u;
            // 0x353698: 0xa24000e4  sb          $zero, 0xE4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 228), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x35369Cu;
        goto label_35369c;
    }
    ctx->pc = 0x353694u;
    {
        const bool branch_taken_0x353694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353694u;
            // 0x353698: 0xa24000e4  sb          $zero, 0xE4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 228), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353694) {
            ctx->pc = 0x3536A0u;
            goto label_3536a0;
        }
    }
    ctx->pc = 0x35369Cu;
label_35369c:
    // 0x35369c: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x35369cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_3536a0:
    // 0x3536a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3536a4:
    // 0x3536a4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3536a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3536a8:
    // 0x3536a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3536a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3536ac:
    // 0x3536ac: 0xc0a7a88  jal         func_29EA20
label_3536b0:
    if (ctx->pc == 0x3536B0u) {
        ctx->pc = 0x3536B0u;
            // 0x3536b0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3536B4u;
        goto label_3536b4;
    }
    ctx->pc = 0x3536ACu;
    SET_GPR_U32(ctx, 31, 0x3536B4u);
    ctx->pc = 0x3536B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3536ACu;
            // 0x3536b0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3536B4u; }
        if (ctx->pc != 0x3536B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3536B4u; }
        if (ctx->pc != 0x3536B4u) { return; }
    }
    ctx->pc = 0x3536B4u;
label_3536b4:
    // 0x3536b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3536b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3536b8:
    // 0x3536b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3536b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3536bc:
    // 0x3536bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3536c0:
    if (ctx->pc == 0x3536C0u) {
        ctx->pc = 0x3536C0u;
            // 0x3536c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3536C4u;
        goto label_3536c4;
    }
    ctx->pc = 0x3536BCu;
    {
        const bool branch_taken_0x3536bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3536BCu;
            // 0x3536c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536bc) {
            ctx->pc = 0x3536D0u;
            goto label_3536d0;
        }
    }
    ctx->pc = 0x3536C4u;
label_3536c4:
    // 0x3536c4: 0xc0827ac  jal         func_209EB0
label_3536c8:
    if (ctx->pc == 0x3536C8u) {
        ctx->pc = 0x3536C8u;
            // 0x3536c8: 0xc64c00cc  lwc1        $f12, 0xCC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3536CCu;
        goto label_3536cc;
    }
    ctx->pc = 0x3536C4u;
    SET_GPR_U32(ctx, 31, 0x3536CCu);
    ctx->pc = 0x3536C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3536C4u;
            // 0x3536c8: 0xc64c00cc  lwc1        $f12, 0xCC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3536CCu; }
        if (ctx->pc != 0x3536CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3536CCu; }
        if (ctx->pc != 0x3536CCu) { return; }
    }
    ctx->pc = 0x3536CCu;
label_3536cc:
    // 0x3536cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3536ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3536d0:
    // 0x3536d0: 0xae4400d0  sw          $a0, 0xD0($s2)
    ctx->pc = 0x3536d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 4));
label_3536d4:
    // 0x3536d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3536d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3536d8:
    // 0x3536d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3536d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3536dc:
    // 0x3536dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3536dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3536e0:
    // 0x3536e0: 0xc0a7a88  jal         func_29EA20
label_3536e4:
    if (ctx->pc == 0x3536E4u) {
        ctx->pc = 0x3536E4u;
            // 0x3536e4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3536E8u;
        goto label_3536e8;
    }
    ctx->pc = 0x3536E0u;
    SET_GPR_U32(ctx, 31, 0x3536E8u);
    ctx->pc = 0x3536E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3536E0u;
            // 0x3536e4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3536E8u; }
        if (ctx->pc != 0x3536E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3536E8u; }
        if (ctx->pc != 0x3536E8u) { return; }
    }
    ctx->pc = 0x3536E8u;
label_3536e8:
    // 0x3536e8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3536e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3536ec:
    // 0x3536ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3536ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3536f0:
    // 0x3536f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3536f4:
    if (ctx->pc == 0x3536F4u) {
        ctx->pc = 0x3536F4u;
            // 0x3536f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3536F8u;
        goto label_3536f8;
    }
    ctx->pc = 0x3536F0u;
    {
        const bool branch_taken_0x3536f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3536F0u;
            // 0x3536f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536f0) {
            ctx->pc = 0x353710u;
            goto label_353710;
        }
    }
    ctx->pc = 0x3536F8u;
label_3536f8:
    // 0x3536f8: 0xc64000cc  lwc1        $f0, 0xCC($s2)
    ctx->pc = 0x3536f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3536fc:
    // 0x3536fc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3536fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_353700:
    // 0x353700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x353700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353704:
    // 0x353704: 0xc0827ac  jal         func_209EB0
label_353708:
    if (ctx->pc == 0x353708u) {
        ctx->pc = 0x353708u;
            // 0x353708: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35370Cu;
        goto label_35370c;
    }
    ctx->pc = 0x353704u;
    SET_GPR_U32(ctx, 31, 0x35370Cu);
    ctx->pc = 0x353708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353704u;
            // 0x353708: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35370Cu; }
        if (ctx->pc != 0x35370Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35370Cu; }
        if (ctx->pc != 0x35370Cu) { return; }
    }
    ctx->pc = 0x35370Cu;
label_35370c:
    // 0x35370c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_353710:
    // 0x353710: 0xae4400d4  sw          $a0, 0xD4($s2)
    ctx->pc = 0x353710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 4));
label_353714:
    // 0x353714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353718:
    // 0x353718: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x353718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_35371c:
    // 0x35371c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x35371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_353720:
    // 0x353720: 0xc0a7a88  jal         func_29EA20
label_353724:
    if (ctx->pc == 0x353724u) {
        ctx->pc = 0x353724u;
            // 0x353724: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x353728u;
        goto label_353728;
    }
    ctx->pc = 0x353720u;
    SET_GPR_U32(ctx, 31, 0x353728u);
    ctx->pc = 0x353724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353720u;
            // 0x353724: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353728u; }
        if (ctx->pc != 0x353728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353728u; }
        if (ctx->pc != 0x353728u) { return; }
    }
    ctx->pc = 0x353728u;
label_353728:
    // 0x353728: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x353728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_35372c:
    // 0x35372c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35372cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_353730:
    // 0x353730: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_353734:
    if (ctx->pc == 0x353734u) {
        ctx->pc = 0x353734u;
            // 0x353734: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x353738u;
        goto label_353738;
    }
    ctx->pc = 0x353730u;
    {
        const bool branch_taken_0x353730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x353734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353730u;
            // 0x353734: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353730) {
            ctx->pc = 0x35374Cu;
            goto label_35374c;
        }
    }
    ctx->pc = 0x353738u;
label_353738:
    // 0x353738: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x353738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_35373c:
    // 0x35373c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35373cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_353740:
    // 0x353740: 0xc0827ac  jal         func_209EB0
label_353744:
    if (ctx->pc == 0x353744u) {
        ctx->pc = 0x353748u;
        goto label_353748;
    }
    ctx->pc = 0x353740u;
    SET_GPR_U32(ctx, 31, 0x353748u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353748u; }
        if (ctx->pc != 0x353748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353748u; }
        if (ctx->pc != 0x353748u) { return; }
    }
    ctx->pc = 0x353748u;
label_353748:
    // 0x353748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x353748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35374c:
    // 0x35374c: 0xae4400d8  sw          $a0, 0xD8($s2)
    ctx->pc = 0x35374cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 4));
label_353750:
    // 0x353750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_353754:
    // 0x353754: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x353754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_353758:
    // 0x353758: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x353758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_35375c:
    // 0x35375c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_353760:
    // 0x353760: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_353764:
    if (ctx->pc == 0x353764u) {
        ctx->pc = 0x353764u;
            // 0x353764: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353768u;
        goto label_353768;
    }
    ctx->pc = 0x353760u;
    {
        const bool branch_taken_0x353760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353760) {
            ctx->pc = 0x353764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353760u;
            // 0x353764: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353770u;
            goto label_353770;
        }
    }
    ctx->pc = 0x353768u;
label_353768:
    // 0x353768: 0xa24000e5  sb          $zero, 0xE5($s2)
    ctx->pc = 0x353768u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 229), (uint8_t)GPR_U32(ctx, 0));
label_35376c:
    // 0x35376c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x35376cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_353770:
    // 0x353770: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x353770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_353774:
    // 0x353774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x353774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_353778:
    // 0x353778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x353778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35377c:
    // 0x35377c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35377cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_353780:
    // 0x353780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353784:
    // 0x353784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_353788:
    // 0x353788: 0x3e00008  jr          $ra
label_35378c:
    if (ctx->pc == 0x35378Cu) {
        ctx->pc = 0x35378Cu;
            // 0x35378c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x353790u;
        goto label_353790;
    }
    ctx->pc = 0x353788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353788u;
            // 0x35378c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x353790u;
label_353790:
    // 0x353790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_353794:
    // 0x353794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_353798:
    // 0x353798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35379c:
    // 0x35379c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3537a0:
    // 0x3537a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3537a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3537a4:
    // 0x3537a4: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
label_3537a8:
    if (ctx->pc == 0x3537A8u) {
        ctx->pc = 0x3537A8u;
            // 0x3537a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3537ACu;
        goto label_3537ac;
    }
    ctx->pc = 0x3537A4u;
    {
        const bool branch_taken_0x3537a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3537A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3537A4u;
            // 0x3537a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3537a4) {
            ctx->pc = 0x3538F8u;
            goto label_3538f8;
        }
    }
    ctx->pc = 0x3537ACu;
label_3537ac:
    // 0x3537ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3537acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3537b0:
    // 0x3537b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3537b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3537b4:
    // 0x3537b4: 0x24635e70  addiu       $v1, $v1, 0x5E70
    ctx->pc = 0x3537b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24176));
label_3537b8:
    // 0x3537b8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3537b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_3537bc:
    // 0x3537bc: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x3537bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
label_3537c0:
    // 0x3537c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3537c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3537c4:
    // 0x3537c4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3537c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3537c8:
    // 0x3537c8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3537c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3537cc:
    // 0x3537cc: 0xc0407c0  jal         func_101F00
label_3537d0:
    if (ctx->pc == 0x3537D0u) {
        ctx->pc = 0x3537D0u;
            // 0x3537d0: 0x24a52430  addiu       $a1, $a1, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9264));
        ctx->pc = 0x3537D4u;
        goto label_3537d4;
    }
    ctx->pc = 0x3537CCu;
    SET_GPR_U32(ctx, 31, 0x3537D4u);
    ctx->pc = 0x3537D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3537CCu;
            // 0x3537d0: 0x24a52430  addiu       $a1, $a1, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3537D4u; }
        if (ctx->pc != 0x3537D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3537D4u; }
        if (ctx->pc != 0x3537D4u) { return; }
    }
    ctx->pc = 0x3537D4u;
label_3537d4:
    // 0x3537d4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3537d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3537d8:
    // 0x3537d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3537dc:
    if (ctx->pc == 0x3537DCu) {
        ctx->pc = 0x3537DCu;
            // 0x3537dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3537E0u;
        goto label_3537e0;
    }
    ctx->pc = 0x3537D8u;
    {
        const bool branch_taken_0x3537d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3537d8) {
            ctx->pc = 0x3537DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3537D8u;
            // 0x3537dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35380Cu;
            goto label_35380c;
        }
    }
    ctx->pc = 0x3537E0u;
label_3537e0:
    // 0x3537e0: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x3537e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_3537e4:
    // 0x3537e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3537e8:
    if (ctx->pc == 0x3537E8u) {
        ctx->pc = 0x3537E8u;
            // 0x3537e8: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x3537ECu;
        goto label_3537ec;
    }
    ctx->pc = 0x3537E4u;
    {
        const bool branch_taken_0x3537e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3537e4) {
            ctx->pc = 0x3537E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3537E4u;
            // 0x3537e8: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3537F8u;
            goto label_3537f8;
        }
    }
    ctx->pc = 0x3537ECu;
label_3537ec:
    // 0x3537ec: 0xc07507c  jal         func_1D41F0
label_3537f0:
    if (ctx->pc == 0x3537F0u) {
        ctx->pc = 0x3537F0u;
            // 0x3537f0: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x3537F4u;
        goto label_3537f4;
    }
    ctx->pc = 0x3537ECu;
    SET_GPR_U32(ctx, 31, 0x3537F4u);
    ctx->pc = 0x3537F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3537ECu;
            // 0x3537f0: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3537F4u; }
        if (ctx->pc != 0x3537F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3537F4u; }
        if (ctx->pc != 0x3537F4u) { return; }
    }
    ctx->pc = 0x3537F4u;
label_3537f4:
    // 0x3537f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3537f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3537f8:
    // 0x3537f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3537fc:
    if (ctx->pc == 0x3537FCu) {
        ctx->pc = 0x353800u;
        goto label_353800;
    }
    ctx->pc = 0x3537F8u;
    {
        const bool branch_taken_0x3537f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3537f8) {
            ctx->pc = 0x353808u;
            goto label_353808;
        }
    }
    ctx->pc = 0x353800u;
label_353800:
    // 0x353800: 0xc07507c  jal         func_1D41F0
label_353804:
    if (ctx->pc == 0x353804u) {
        ctx->pc = 0x353804u;
            // 0x353804: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x353808u;
        goto label_353808;
    }
    ctx->pc = 0x353800u;
    SET_GPR_U32(ctx, 31, 0x353808u);
    ctx->pc = 0x353804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353800u;
            // 0x353804: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353808u; }
        if (ctx->pc != 0x353808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353808u; }
        if (ctx->pc != 0x353808u) { return; }
    }
    ctx->pc = 0x353808u;
label_353808:
    // 0x353808: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x353808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_35380c:
    // 0x35380c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_353810:
    if (ctx->pc == 0x353810u) {
        ctx->pc = 0x353810u;
            // 0x353810: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x353814u;
        goto label_353814;
    }
    ctx->pc = 0x35380Cu;
    {
        const bool branch_taken_0x35380c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35380c) {
            ctx->pc = 0x353810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35380Cu;
            // 0x353810: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35383Cu;
            goto label_35383c;
        }
    }
    ctx->pc = 0x353814u;
label_353814:
    // 0x353814: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_353818:
    if (ctx->pc == 0x353818u) {
        ctx->pc = 0x35381Cu;
        goto label_35381c;
    }
    ctx->pc = 0x353814u;
    {
        const bool branch_taken_0x353814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353814) {
            ctx->pc = 0x353838u;
            goto label_353838;
        }
    }
    ctx->pc = 0x35381Cu;
label_35381c:
    // 0x35381c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_353820:
    if (ctx->pc == 0x353820u) {
        ctx->pc = 0x353824u;
        goto label_353824;
    }
    ctx->pc = 0x35381Cu;
    {
        const bool branch_taken_0x35381c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35381c) {
            ctx->pc = 0x353838u;
            goto label_353838;
        }
    }
    ctx->pc = 0x353824u;
label_353824:
    // 0x353824: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x353824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_353828:
    // 0x353828: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_35382c:
    if (ctx->pc == 0x35382Cu) {
        ctx->pc = 0x353830u;
        goto label_353830;
    }
    ctx->pc = 0x353828u;
    {
        const bool branch_taken_0x353828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353828) {
            ctx->pc = 0x353838u;
            goto label_353838;
        }
    }
    ctx->pc = 0x353830u;
label_353830:
    // 0x353830: 0xc0400a8  jal         func_1002A0
label_353834:
    if (ctx->pc == 0x353834u) {
        ctx->pc = 0x353838u;
        goto label_353838;
    }
    ctx->pc = 0x353830u;
    SET_GPR_U32(ctx, 31, 0x353838u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353838u; }
        if (ctx->pc != 0x353838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353838u; }
        if (ctx->pc != 0x353838u) { return; }
    }
    ctx->pc = 0x353838u;
label_353838:
    // 0x353838: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x353838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_35383c:
    // 0x35383c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_353840:
    if (ctx->pc == 0x353840u) {
        ctx->pc = 0x353840u;
            // 0x353840: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x353844u;
        goto label_353844;
    }
    ctx->pc = 0x35383Cu;
    {
        const bool branch_taken_0x35383c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35383c) {
            ctx->pc = 0x353840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35383Cu;
            // 0x353840: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35386Cu;
            goto label_35386c;
        }
    }
    ctx->pc = 0x353844u;
label_353844:
    // 0x353844: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_353848:
    if (ctx->pc == 0x353848u) {
        ctx->pc = 0x35384Cu;
        goto label_35384c;
    }
    ctx->pc = 0x353844u;
    {
        const bool branch_taken_0x353844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353844) {
            ctx->pc = 0x353868u;
            goto label_353868;
        }
    }
    ctx->pc = 0x35384Cu;
label_35384c:
    // 0x35384c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_353850:
    if (ctx->pc == 0x353850u) {
        ctx->pc = 0x353854u;
        goto label_353854;
    }
    ctx->pc = 0x35384Cu;
    {
        const bool branch_taken_0x35384c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35384c) {
            ctx->pc = 0x353868u;
            goto label_353868;
        }
    }
    ctx->pc = 0x353854u;
label_353854:
    // 0x353854: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x353854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_353858:
    // 0x353858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_35385c:
    if (ctx->pc == 0x35385Cu) {
        ctx->pc = 0x353860u;
        goto label_353860;
    }
    ctx->pc = 0x353858u;
    {
        const bool branch_taken_0x353858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353858) {
            ctx->pc = 0x353868u;
            goto label_353868;
        }
    }
    ctx->pc = 0x353860u;
label_353860:
    // 0x353860: 0xc0400a8  jal         func_1002A0
label_353864:
    if (ctx->pc == 0x353864u) {
        ctx->pc = 0x353868u;
        goto label_353868;
    }
    ctx->pc = 0x353860u;
    SET_GPR_U32(ctx, 31, 0x353868u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353868u; }
        if (ctx->pc != 0x353868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353868u; }
        if (ctx->pc != 0x353868u) { return; }
    }
    ctx->pc = 0x353868u;
label_353868:
    // 0x353868: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x353868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_35386c:
    // 0x35386c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_353870:
    if (ctx->pc == 0x353870u) {
        ctx->pc = 0x353874u;
        goto label_353874;
    }
    ctx->pc = 0x35386Cu;
    {
        const bool branch_taken_0x35386c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35386c) {
            ctx->pc = 0x353888u;
            goto label_353888;
        }
    }
    ctx->pc = 0x353874u;
label_353874:
    // 0x353874: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x353874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_353878:
    // 0x353878: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x353878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35387c:
    // 0x35387c: 0x24635e10  addiu       $v1, $v1, 0x5E10
    ctx->pc = 0x35387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24080));
label_353880:
    // 0x353880: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x353880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_353884:
    // 0x353884: 0xac403ff0  sw          $zero, 0x3FF0($v0)
    ctx->pc = 0x353884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16368), GPR_U32(ctx, 0));
label_353888:
    // 0x353888: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_35388c:
    if (ctx->pc == 0x35388Cu) {
        ctx->pc = 0x35388Cu;
            // 0x35388c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x353890u;
        goto label_353890;
    }
    ctx->pc = 0x353888u;
    {
        const bool branch_taken_0x353888 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x353888) {
            ctx->pc = 0x35388Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353888u;
            // 0x35388c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3538E4u;
            goto label_3538e4;
        }
    }
    ctx->pc = 0x353890u;
label_353890:
    // 0x353890: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x353890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_353894:
    // 0x353894: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x353894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_353898:
    // 0x353898: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x353898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_35389c:
    // 0x35389c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x35389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3538a0:
    // 0x3538a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3538a4:
    if (ctx->pc == 0x3538A4u) {
        ctx->pc = 0x3538A4u;
            // 0x3538a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3538A8u;
        goto label_3538a8;
    }
    ctx->pc = 0x3538A0u;
    {
        const bool branch_taken_0x3538a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538a0) {
            ctx->pc = 0x3538A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3538A0u;
            // 0x3538a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3538BCu;
            goto label_3538bc;
        }
    }
    ctx->pc = 0x3538A8u;
label_3538a8:
    // 0x3538a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3538a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3538ac:
    // 0x3538ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3538acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3538b0:
    // 0x3538b0: 0x320f809  jalr        $t9
label_3538b4:
    if (ctx->pc == 0x3538B4u) {
        ctx->pc = 0x3538B4u;
            // 0x3538b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3538B8u;
        goto label_3538b8;
    }
    ctx->pc = 0x3538B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3538B8u);
        ctx->pc = 0x3538B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3538B0u;
            // 0x3538b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3538B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3538B8u; }
            if (ctx->pc != 0x3538B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3538B8u;
label_3538b8:
    // 0x3538b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3538b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3538bc:
    // 0x3538bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3538c0:
    if (ctx->pc == 0x3538C0u) {
        ctx->pc = 0x3538C0u;
            // 0x3538c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3538C4u;
        goto label_3538c4;
    }
    ctx->pc = 0x3538BCu;
    {
        const bool branch_taken_0x3538bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538bc) {
            ctx->pc = 0x3538C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3538BCu;
            // 0x3538c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3538D8u;
            goto label_3538d8;
        }
    }
    ctx->pc = 0x3538C4u;
label_3538c4:
    // 0x3538c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3538c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3538c8:
    // 0x3538c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3538c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3538cc:
    // 0x3538cc: 0x320f809  jalr        $t9
label_3538d0:
    if (ctx->pc == 0x3538D0u) {
        ctx->pc = 0x3538D0u;
            // 0x3538d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3538D4u;
        goto label_3538d4;
    }
    ctx->pc = 0x3538CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3538D4u);
        ctx->pc = 0x3538D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3538CCu;
            // 0x3538d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3538D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3538D4u; }
            if (ctx->pc != 0x3538D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3538D4u;
label_3538d4:
    // 0x3538d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3538d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3538d8:
    // 0x3538d8: 0xc075bf8  jal         func_1D6FE0
label_3538dc:
    if (ctx->pc == 0x3538DCu) {
        ctx->pc = 0x3538DCu;
            // 0x3538dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3538E0u;
        goto label_3538e0;
    }
    ctx->pc = 0x3538D8u;
    SET_GPR_U32(ctx, 31, 0x3538E0u);
    ctx->pc = 0x3538DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3538D8u;
            // 0x3538dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3538E0u; }
        if (ctx->pc != 0x3538E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3538E0u; }
        if (ctx->pc != 0x3538E0u) { return; }
    }
    ctx->pc = 0x3538E0u;
label_3538e0:
    // 0x3538e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3538e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3538e4:
    // 0x3538e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3538e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3538e8:
    // 0x3538e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3538ec:
    if (ctx->pc == 0x3538ECu) {
        ctx->pc = 0x3538ECu;
            // 0x3538ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3538F0u;
        goto label_3538f0;
    }
    ctx->pc = 0x3538E8u;
    {
        const bool branch_taken_0x3538e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3538e8) {
            ctx->pc = 0x3538ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3538E8u;
            // 0x3538ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3538FCu;
            goto label_3538fc;
        }
    }
    ctx->pc = 0x3538F0u;
label_3538f0:
    // 0x3538f0: 0xc0400a8  jal         func_1002A0
label_3538f4:
    if (ctx->pc == 0x3538F4u) {
        ctx->pc = 0x3538F4u;
            // 0x3538f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3538F8u;
        goto label_3538f8;
    }
    ctx->pc = 0x3538F0u;
    SET_GPR_U32(ctx, 31, 0x3538F8u);
    ctx->pc = 0x3538F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3538F0u;
            // 0x3538f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3538F8u; }
        if (ctx->pc != 0x3538F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3538F8u; }
        if (ctx->pc != 0x3538F8u) { return; }
    }
    ctx->pc = 0x3538F8u;
label_3538f8:
    // 0x3538f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3538f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3538fc:
    // 0x3538fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3538fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_353900:
    // 0x353900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353904:
    // 0x353904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_353908:
    // 0x353908: 0x3e00008  jr          $ra
label_35390c:
    if (ctx->pc == 0x35390Cu) {
        ctx->pc = 0x35390Cu;
            // 0x35390c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x353910u;
        goto label_fallthrough_0x353908;
    }
    ctx->pc = 0x353908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353908u;
            // 0x35390c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x353908:
    ctx->pc = 0x353910u;
}
