#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A94E0
// Address: 0x1a94e0 - 0x1a9898
void sub_001A94E0_0x1a94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A94E0_0x1a94e0");
#endif

    switch (ctx->pc) {
        case 0x1a94e0u: goto label_1a94e0;
        case 0x1a94e4u: goto label_1a94e4;
        case 0x1a94e8u: goto label_1a94e8;
        case 0x1a94ecu: goto label_1a94ec;
        case 0x1a94f0u: goto label_1a94f0;
        case 0x1a94f4u: goto label_1a94f4;
        case 0x1a94f8u: goto label_1a94f8;
        case 0x1a94fcu: goto label_1a94fc;
        case 0x1a9500u: goto label_1a9500;
        case 0x1a9504u: goto label_1a9504;
        case 0x1a9508u: goto label_1a9508;
        case 0x1a950cu: goto label_1a950c;
        case 0x1a9510u: goto label_1a9510;
        case 0x1a9514u: goto label_1a9514;
        case 0x1a9518u: goto label_1a9518;
        case 0x1a951cu: goto label_1a951c;
        case 0x1a9520u: goto label_1a9520;
        case 0x1a9524u: goto label_1a9524;
        case 0x1a9528u: goto label_1a9528;
        case 0x1a952cu: goto label_1a952c;
        case 0x1a9530u: goto label_1a9530;
        case 0x1a9534u: goto label_1a9534;
        case 0x1a9538u: goto label_1a9538;
        case 0x1a953cu: goto label_1a953c;
        case 0x1a9540u: goto label_1a9540;
        case 0x1a9544u: goto label_1a9544;
        case 0x1a9548u: goto label_1a9548;
        case 0x1a954cu: goto label_1a954c;
        case 0x1a9550u: goto label_1a9550;
        case 0x1a9554u: goto label_1a9554;
        case 0x1a9558u: goto label_1a9558;
        case 0x1a955cu: goto label_1a955c;
        case 0x1a9560u: goto label_1a9560;
        case 0x1a9564u: goto label_1a9564;
        case 0x1a9568u: goto label_1a9568;
        case 0x1a956cu: goto label_1a956c;
        case 0x1a9570u: goto label_1a9570;
        case 0x1a9574u: goto label_1a9574;
        case 0x1a9578u: goto label_1a9578;
        case 0x1a957cu: goto label_1a957c;
        case 0x1a9580u: goto label_1a9580;
        case 0x1a9584u: goto label_1a9584;
        case 0x1a9588u: goto label_1a9588;
        case 0x1a958cu: goto label_1a958c;
        case 0x1a9590u: goto label_1a9590;
        case 0x1a9594u: goto label_1a9594;
        case 0x1a9598u: goto label_1a9598;
        case 0x1a959cu: goto label_1a959c;
        case 0x1a95a0u: goto label_1a95a0;
        case 0x1a95a4u: goto label_1a95a4;
        case 0x1a95a8u: goto label_1a95a8;
        case 0x1a95acu: goto label_1a95ac;
        case 0x1a95b0u: goto label_1a95b0;
        case 0x1a95b4u: goto label_1a95b4;
        case 0x1a95b8u: goto label_1a95b8;
        case 0x1a95bcu: goto label_1a95bc;
        case 0x1a95c0u: goto label_1a95c0;
        case 0x1a95c4u: goto label_1a95c4;
        case 0x1a95c8u: goto label_1a95c8;
        case 0x1a95ccu: goto label_1a95cc;
        case 0x1a95d0u: goto label_1a95d0;
        case 0x1a95d4u: goto label_1a95d4;
        case 0x1a95d8u: goto label_1a95d8;
        case 0x1a95dcu: goto label_1a95dc;
        case 0x1a95e0u: goto label_1a95e0;
        case 0x1a95e4u: goto label_1a95e4;
        case 0x1a95e8u: goto label_1a95e8;
        case 0x1a95ecu: goto label_1a95ec;
        case 0x1a95f0u: goto label_1a95f0;
        case 0x1a95f4u: goto label_1a95f4;
        case 0x1a95f8u: goto label_1a95f8;
        case 0x1a95fcu: goto label_1a95fc;
        case 0x1a9600u: goto label_1a9600;
        case 0x1a9604u: goto label_1a9604;
        case 0x1a9608u: goto label_1a9608;
        case 0x1a960cu: goto label_1a960c;
        case 0x1a9610u: goto label_1a9610;
        case 0x1a9614u: goto label_1a9614;
        case 0x1a9618u: goto label_1a9618;
        case 0x1a961cu: goto label_1a961c;
        case 0x1a9620u: goto label_1a9620;
        case 0x1a9624u: goto label_1a9624;
        case 0x1a9628u: goto label_1a9628;
        case 0x1a962cu: goto label_1a962c;
        case 0x1a9630u: goto label_1a9630;
        case 0x1a9634u: goto label_1a9634;
        case 0x1a9638u: goto label_1a9638;
        case 0x1a963cu: goto label_1a963c;
        case 0x1a9640u: goto label_1a9640;
        case 0x1a9644u: goto label_1a9644;
        case 0x1a9648u: goto label_1a9648;
        case 0x1a964cu: goto label_1a964c;
        case 0x1a9650u: goto label_1a9650;
        case 0x1a9654u: goto label_1a9654;
        case 0x1a9658u: goto label_1a9658;
        case 0x1a965cu: goto label_1a965c;
        case 0x1a9660u: goto label_1a9660;
        case 0x1a9664u: goto label_1a9664;
        case 0x1a9668u: goto label_1a9668;
        case 0x1a966cu: goto label_1a966c;
        case 0x1a9670u: goto label_1a9670;
        case 0x1a9674u: goto label_1a9674;
        case 0x1a9678u: goto label_1a9678;
        case 0x1a967cu: goto label_1a967c;
        case 0x1a9680u: goto label_1a9680;
        case 0x1a9684u: goto label_1a9684;
        case 0x1a9688u: goto label_1a9688;
        case 0x1a968cu: goto label_1a968c;
        case 0x1a9690u: goto label_1a9690;
        case 0x1a9694u: goto label_1a9694;
        case 0x1a9698u: goto label_1a9698;
        case 0x1a969cu: goto label_1a969c;
        case 0x1a96a0u: goto label_1a96a0;
        case 0x1a96a4u: goto label_1a96a4;
        case 0x1a96a8u: goto label_1a96a8;
        case 0x1a96acu: goto label_1a96ac;
        case 0x1a96b0u: goto label_1a96b0;
        case 0x1a96b4u: goto label_1a96b4;
        case 0x1a96b8u: goto label_1a96b8;
        case 0x1a96bcu: goto label_1a96bc;
        case 0x1a96c0u: goto label_1a96c0;
        case 0x1a96c4u: goto label_1a96c4;
        case 0x1a96c8u: goto label_1a96c8;
        case 0x1a96ccu: goto label_1a96cc;
        case 0x1a96d0u: goto label_1a96d0;
        case 0x1a96d4u: goto label_1a96d4;
        case 0x1a96d8u: goto label_1a96d8;
        case 0x1a96dcu: goto label_1a96dc;
        case 0x1a96e0u: goto label_1a96e0;
        case 0x1a96e4u: goto label_1a96e4;
        case 0x1a96e8u: goto label_1a96e8;
        case 0x1a96ecu: goto label_1a96ec;
        case 0x1a96f0u: goto label_1a96f0;
        case 0x1a96f4u: goto label_1a96f4;
        case 0x1a96f8u: goto label_1a96f8;
        case 0x1a96fcu: goto label_1a96fc;
        case 0x1a9700u: goto label_1a9700;
        case 0x1a9704u: goto label_1a9704;
        case 0x1a9708u: goto label_1a9708;
        case 0x1a970cu: goto label_1a970c;
        case 0x1a9710u: goto label_1a9710;
        case 0x1a9714u: goto label_1a9714;
        case 0x1a9718u: goto label_1a9718;
        case 0x1a971cu: goto label_1a971c;
        case 0x1a9720u: goto label_1a9720;
        case 0x1a9724u: goto label_1a9724;
        case 0x1a9728u: goto label_1a9728;
        case 0x1a972cu: goto label_1a972c;
        case 0x1a9730u: goto label_1a9730;
        case 0x1a9734u: goto label_1a9734;
        case 0x1a9738u: goto label_1a9738;
        case 0x1a973cu: goto label_1a973c;
        case 0x1a9740u: goto label_1a9740;
        case 0x1a9744u: goto label_1a9744;
        case 0x1a9748u: goto label_1a9748;
        case 0x1a974cu: goto label_1a974c;
        case 0x1a9750u: goto label_1a9750;
        case 0x1a9754u: goto label_1a9754;
        case 0x1a9758u: goto label_1a9758;
        case 0x1a975cu: goto label_1a975c;
        case 0x1a9760u: goto label_1a9760;
        case 0x1a9764u: goto label_1a9764;
        case 0x1a9768u: goto label_1a9768;
        case 0x1a976cu: goto label_1a976c;
        case 0x1a9770u: goto label_1a9770;
        case 0x1a9774u: goto label_1a9774;
        case 0x1a9778u: goto label_1a9778;
        case 0x1a977cu: goto label_1a977c;
        case 0x1a9780u: goto label_1a9780;
        case 0x1a9784u: goto label_1a9784;
        case 0x1a9788u: goto label_1a9788;
        case 0x1a978cu: goto label_1a978c;
        case 0x1a9790u: goto label_1a9790;
        case 0x1a9794u: goto label_1a9794;
        case 0x1a9798u: goto label_1a9798;
        case 0x1a979cu: goto label_1a979c;
        case 0x1a97a0u: goto label_1a97a0;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97a8u: goto label_1a97a8;
        case 0x1a97acu: goto label_1a97ac;
        case 0x1a97b0u: goto label_1a97b0;
        case 0x1a97b4u: goto label_1a97b4;
        case 0x1a97b8u: goto label_1a97b8;
        case 0x1a97bcu: goto label_1a97bc;
        case 0x1a97c0u: goto label_1a97c0;
        case 0x1a97c4u: goto label_1a97c4;
        case 0x1a97c8u: goto label_1a97c8;
        case 0x1a97ccu: goto label_1a97cc;
        case 0x1a97d0u: goto label_1a97d0;
        case 0x1a97d4u: goto label_1a97d4;
        case 0x1a97d8u: goto label_1a97d8;
        case 0x1a97dcu: goto label_1a97dc;
        case 0x1a97e0u: goto label_1a97e0;
        case 0x1a97e4u: goto label_1a97e4;
        case 0x1a97e8u: goto label_1a97e8;
        case 0x1a97ecu: goto label_1a97ec;
        case 0x1a97f0u: goto label_1a97f0;
        case 0x1a97f4u: goto label_1a97f4;
        case 0x1a97f8u: goto label_1a97f8;
        case 0x1a97fcu: goto label_1a97fc;
        case 0x1a9800u: goto label_1a9800;
        case 0x1a9804u: goto label_1a9804;
        case 0x1a9808u: goto label_1a9808;
        case 0x1a980cu: goto label_1a980c;
        case 0x1a9810u: goto label_1a9810;
        case 0x1a9814u: goto label_1a9814;
        case 0x1a9818u: goto label_1a9818;
        case 0x1a981cu: goto label_1a981c;
        case 0x1a9820u: goto label_1a9820;
        case 0x1a9824u: goto label_1a9824;
        case 0x1a9828u: goto label_1a9828;
        case 0x1a982cu: goto label_1a982c;
        case 0x1a9830u: goto label_1a9830;
        case 0x1a9834u: goto label_1a9834;
        case 0x1a9838u: goto label_1a9838;
        case 0x1a983cu: goto label_1a983c;
        case 0x1a9840u: goto label_1a9840;
        case 0x1a9844u: goto label_1a9844;
        case 0x1a9848u: goto label_1a9848;
        case 0x1a984cu: goto label_1a984c;
        case 0x1a9850u: goto label_1a9850;
        case 0x1a9854u: goto label_1a9854;
        case 0x1a9858u: goto label_1a9858;
        case 0x1a985cu: goto label_1a985c;
        case 0x1a9860u: goto label_1a9860;
        case 0x1a9864u: goto label_1a9864;
        case 0x1a9868u: goto label_1a9868;
        case 0x1a986cu: goto label_1a986c;
        case 0x1a9870u: goto label_1a9870;
        case 0x1a9874u: goto label_1a9874;
        case 0x1a9878u: goto label_1a9878;
        case 0x1a987cu: goto label_1a987c;
        case 0x1a9880u: goto label_1a9880;
        case 0x1a9884u: goto label_1a9884;
        case 0x1a9888u: goto label_1a9888;
        case 0x1a988cu: goto label_1a988c;
        case 0x1a9890u: goto label_1a9890;
        case 0x1a9894u: goto label_1a9894;
        default: break;
    }

    ctx->pc = 0x1a94e0u;

label_1a94e0:
    // 0x1a94e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a94e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a94e4:
    // 0x1a94e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a94e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a94e8:
    // 0x1a94e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a94e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a94ec:
    // 0x1a94ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1a94f0:
    // 0x1a94f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a94f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a94f4:
    // 0x1a94f4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1a94f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a94f8:
    // 0x1a94f8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1a94f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a94fc:
    // 0x1a94fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a94fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a9500:
    // 0x1a9500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a9504:
    // 0x1a9504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a9508:
    // 0x1a9508: 0xc06a6a6  jal         func_1A9A98
label_1a950c:
    if (ctx->pc == 0x1A950Cu) {
        ctx->pc = 0x1A950Cu;
            // 0x1a950c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9510u;
        goto label_1a9510;
    }
    ctx->pc = 0x1A9508u;
    SET_GPR_U32(ctx, 31, 0x1A9510u);
    ctx->pc = 0x1A950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9508u;
            // 0x1a950c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9A98u;
    if (runtime->hasFunction(0x1A9A98u)) {
        auto targetFn = runtime->lookupFunction(0x1A9A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9510u; }
        if (ctx->pc != 0x1A9510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9A98_0x1a9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9510u; }
        if (ctx->pc != 0x1A9510u) { return; }
    }
    ctx->pc = 0x1A9510u;
label_1a9510:
    // 0x1a9510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9514:
    // 0x1a9514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9518:
    // 0x1a9518: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_1a951c:
    if (ctx->pc == 0x1A951Cu) {
        ctx->pc = 0x1A951Cu;
            // 0x1a951c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9520u;
        goto label_1a9520;
    }
    ctx->pc = 0x1A9518u;
    {
        const bool branch_taken_0x1a9518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9518) {
            ctx->pc = 0x1A951Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9518u;
            // 0x1a951c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9534u;
            goto label_1a9534;
        }
    }
    ctx->pc = 0x1A9520u;
label_1a9520:
    // 0x1a9520: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1a9524:
    if (ctx->pc == 0x1A9524u) {
        ctx->pc = 0x1A9524u;
            // 0x1a9524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9528u;
        goto label_1a9528;
    }
    ctx->pc = 0x1A9520u;
    {
        const bool branch_taken_0x1a9520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9520u;
            // 0x1a9524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9520) {
            ctx->pc = 0x1A9530u;
            goto label_1a9530;
        }
    }
    ctx->pc = 0x1A9528u;
label_1a9528:
    // 0x1a9528: 0x240f809  jalr        $s2
label_1a952c:
    if (ctx->pc == 0x1A952Cu) {
        ctx->pc = 0x1A952Cu;
            // 0x1a952c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9530u;
        goto label_1a9530;
    }
    ctx->pc = 0x1A9528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1A9530u);
        ctx->pc = 0x1A952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9528u;
            // 0x1a952c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9530u; }
            if (ctx->pc != 0x1A9530u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9530u;
label_1a9530:
    // 0x1a9530: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9534:
    // 0x1a9534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9538:
    // 0x1a9538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a953c:
    // 0x1a953c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a953cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9540:
    // 0x1a9540: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9544:
    // 0x1a9544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9548:
    // 0x1a9548: 0x3e00008  jr          $ra
label_1a954c:
    if (ctx->pc == 0x1A954Cu) {
        ctx->pc = 0x1A954Cu;
            // 0x1a954c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A9550u;
        goto label_1a9550;
    }
    ctx->pc = 0x1A9548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9548u;
            // 0x1a954c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9550u;
label_1a9550:
    // 0x1a9550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a9554:
    // 0x1a9554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a9558:
    // 0x1a9558: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a955c:
    // 0x1a955c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a9560:
    // 0x1a9560: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1a9564:
    // 0x1a9564: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a9564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1a9568:
    // 0x1a9568: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a9568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a956c:
    // 0x1a956c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1a9570:
    // 0x1a9570: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1a9570u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9574:
    // 0x1a9574: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1a9574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1a9578:
    // 0x1a9578: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1a9578u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a957c:
    // 0x1a957c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a9580:
    // 0x1a9580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a9584:
    // 0x1a9584: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1a9588:
    // 0x1a9588: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a9588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1a958c:
    // 0x1a958c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1a9590:
    // 0x1a9590: 0xc06d81c  jal         func_1B6070
label_1a9594:
    if (ctx->pc == 0x1A9594u) {
        ctx->pc = 0x1A9594u;
            // 0x1a9594: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9598u;
        goto label_1a9598;
    }
    ctx->pc = 0x1A9590u;
    SET_GPR_U32(ctx, 31, 0x1A9598u);
    ctx->pc = 0x1A9594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9590u;
            // 0x1a9594: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9598u; }
        if (ctx->pc != 0x1A9598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9598u; }
        if (ctx->pc != 0x1A9598u) { return; }
    }
    ctx->pc = 0x1A9598u;
label_1a9598:
    // 0x1a9598: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a959c:
    if (ctx->pc == 0x1A959Cu) {
        ctx->pc = 0x1A959Cu;
            // 0x1a959c: 0x26b61fe4  addiu       $s6, $s5, 0x1FE4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8164));
        ctx->pc = 0x1A95A0u;
        goto label_1a95a0;
    }
    ctx->pc = 0x1A9598u;
    {
        const bool branch_taken_0x1a9598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9598u;
            // 0x1a959c: 0x26b61fe4  addiu       $s6, $s5, 0x1FE4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9598) {
            ctx->pc = 0x1A95A8u;
            goto label_1a95a8;
        }
    }
    ctx->pc = 0x1A95A0u;
label_1a95a0:
    // 0x1a95a0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1a95a4:
    if (ctx->pc == 0x1A95A4u) {
        ctx->pc = 0x1A95A4u;
            // 0x1a95a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A95A8u;
        goto label_1a95a8;
    }
    ctx->pc = 0x1A95A0u;
    {
        const bool branch_taken_0x1a95a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95A0u;
            // 0x1a95a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95a0) {
            ctx->pc = 0x1A9690u;
            goto label_1a9690;
        }
    }
    ctx->pc = 0x1A95A8u;
label_1a95a8:
    // 0x1a95a8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1a95a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a95ac:
    // 0x1a95ac: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x1a95acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1a95b0:
    // 0x1a95b0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a95b4:
    // 0x1a95b4: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_1a95b8:
    if (ctx->pc == 0x1A95B8u) {
        ctx->pc = 0x1A95B8u;
            // 0x1a95b8: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->pc = 0x1A95BCu;
        goto label_1a95bc;
    }
    ctx->pc = 0x1A95B4u;
    {
        const bool branch_taken_0x1a95b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1a95b4) {
            ctx->pc = 0x1A95B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95B4u;
            // 0x1a95b8: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A95BCu;
            goto label_1a95bc;
        }
    }
    ctx->pc = 0x1A95BCu;
label_1a95bc:
    // 0x1a95bc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1a95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1a95c0:
    // 0x1a95c0: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_1a95c4:
    if (ctx->pc == 0x1A95C4u) {
        ctx->pc = 0x1A95C4u;
            // 0x1a95c4: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->pc = 0x1A95C8u;
        goto label_1a95c8;
    }
    ctx->pc = 0x1A95C0u;
    {
        const bool branch_taken_0x1a95c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1a95c0) {
            ctx->pc = 0x1A95C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95C0u;
            // 0x1a95c4: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A95C8u;
            goto label_1a95c8;
        }
    }
    ctx->pc = 0x1A95C8u;
label_1a95c8:
    // 0x1a95c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a95c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a95cc:
    // 0x1a95cc: 0xc06d81c  jal         func_1B6070
label_1a95d0:
    if (ctx->pc == 0x1A95D0u) {
        ctx->pc = 0x1A95D0u;
            // 0x1a95d0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1A95D4u;
        goto label_1a95d4;
    }
    ctx->pc = 0x1A95CCu;
    SET_GPR_U32(ctx, 31, 0x1A95D4u);
    ctx->pc = 0x1A95D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95CCu;
            // 0x1a95d0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95D4u; }
        if (ctx->pc != 0x1A95D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95D4u; }
        if (ctx->pc != 0x1A95D4u) { return; }
    }
    ctx->pc = 0x1A95D4u;
label_1a95d4:
    // 0x1a95d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a95d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a95d8:
    // 0x1a95d8: 0x1292000e  beq         $s4, $s2, . + 4 + (0xE << 2)
label_1a95dc:
    if (ctx->pc == 0x1A95DCu) {
        ctx->pc = 0x1A95DCu;
            // 0x1a95dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A95E0u;
        goto label_1a95e0;
    }
    ctx->pc = 0x1A95D8u;
    {
        const bool branch_taken_0x1a95d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A95DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95D8u;
            // 0x1a95dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95d8) {
            ctx->pc = 0x1A9614u;
            goto label_1a9614;
        }
    }
    ctx->pc = 0x1A95E0u;
label_1a95e0:
    // 0x1a95e0: 0xc06d81c  jal         func_1B6070
label_1a95e4:
    if (ctx->pc == 0x1A95E4u) {
        ctx->pc = 0x1A95E4u;
            // 0x1a95e4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x1A95E8u;
        goto label_1a95e8;
    }
    ctx->pc = 0x1A95E0u;
    SET_GPR_U32(ctx, 31, 0x1A95E8u);
    ctx->pc = 0x1A95E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95E0u;
            // 0x1a95e4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95E8u; }
        if (ctx->pc != 0x1A95E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95E8u; }
        if (ctx->pc != 0x1A95E8u) { return; }
    }
    ctx->pc = 0x1A95E8u;
label_1a95e8:
    // 0x1a95e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1a95ec:
    if (ctx->pc == 0x1A95ECu) {
        ctx->pc = 0x1A95ECu;
            // 0x1a95ec: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1A95F0u;
        goto label_1a95f0;
    }
    ctx->pc = 0x1A95E8u;
    {
        const bool branch_taken_0x1a95e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a95e8) {
            ctx->pc = 0x1A95ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95E8u;
            // 0x1a95ec: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9608u;
            goto label_1a9608;
        }
    }
    ctx->pc = 0x1A95F0u;
label_1a95f0:
    // 0x1a95f0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a95f4:
    // 0x1a95f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a95f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a95f8:
    // 0x1a95f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1a95fc:
    if (ctx->pc == 0x1A95FCu) {
        ctx->pc = 0x1A95FCu;
            // 0x1a95fc: 0xae140038  sw          $s4, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
        ctx->pc = 0x1A9600u;
        goto label_1a9600;
    }
    ctx->pc = 0x1A95F8u;
    {
        const bool branch_taken_0x1a95f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a95f8) {
            ctx->pc = 0x1A95FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A95F8u;
            // 0x1a95fc: 0xae140038  sw          $s4, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9614u;
            goto label_1a9614;
        }
    }
    ctx->pc = 0x1A9600u;
label_1a9600:
    // 0x1a9600: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a9604:
    if (ctx->pc == 0x1A9604u) {
        ctx->pc = 0x1A9604u;
            // 0x1a9604: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1A9608u;
        goto label_1a9608;
    }
    ctx->pc = 0x1A9600u;
    {
        const bool branch_taken_0x1a9600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9600u;
            // 0x1a9604: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9600) {
            ctx->pc = 0x1A9618u;
            goto label_1a9618;
        }
    }
    ctx->pc = 0x1A9608u;
label_1a9608:
    // 0x1a9608: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
label_1a960c:
    if (ctx->pc == 0x1A960Cu) {
        ctx->pc = 0x1A960Cu;
            // 0x1a960c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1A9610u;
        goto label_1a9610;
    }
    ctx->pc = 0x1A9608u;
    {
        const bool branch_taken_0x1a9608 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9608) {
            ctx->pc = 0x1A960Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9608u;
            // 0x1a960c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9618u;
            goto label_1a9618;
        }
    }
    ctx->pc = 0x1A9610u;
label_1a9610:
    // 0x1a9610: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x1a9610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
label_1a9614:
    // 0x1a9614: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1a9614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a9618:
    // 0x1a9618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a961c:
    // 0x1a961c: 0x1471001c  bne         $v1, $s1, . + 4 + (0x1C << 2)
label_1a9620:
    if (ctx->pc == 0x1A9620u) {
        ctx->pc = 0x1A9620u;
            // 0x1a9620: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->pc = 0x1A9624u;
        goto label_1a9624;
    }
    ctx->pc = 0x1A961Cu;
    {
        const bool branch_taken_0x1a961c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A9620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A961Cu;
            // 0x1a9620: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a961c) {
            ctx->pc = 0x1A9690u;
            goto label_1a9690;
        }
    }
    ctx->pc = 0x1A9624u;
label_1a9624:
    // 0x1a9624: 0x662000a  bltzl       $s3, . + 4 + (0xA << 2)
label_1a9628:
    if (ctx->pc == 0x1A9628u) {
        ctx->pc = 0x1A9628u;
            // 0x1a9628: 0x8ec50018  lw          $a1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->pc = 0x1A962Cu;
        goto label_1a962c;
    }
    ctx->pc = 0x1A9624u;
    {
        const bool branch_taken_0x1a9624 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1a9624) {
            ctx->pc = 0x1A9628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9624u;
            // 0x1a9628: 0x8ec50018  lw          $a1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9650u;
            goto label_1a9650;
        }
    }
    ctx->pc = 0x1A962Cu;
label_1a962c:
    // 0x1a962c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1a962cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1a9630:
    // 0x1a9630: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1a9630u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1a9634:
    // 0x1a9634: 0x262202a  slt         $a0, $s3, $v0
    ctx->pc = 0x1a9634u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a9638:
    // 0x1a9638: 0x263282a  slt         $a1, $s3, $v1
    ctx->pc = 0x1a9638u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a963c:
    // 0x1a963c: 0x264100b  movn        $v0, $s3, $a0
    ctx->pc = 0x1a963cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
label_1a9640:
    // 0x1a9640: 0x265180b  movn        $v1, $s3, $a1
    ctx->pc = 0x1a9640u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
label_1a9644:
    // 0x1a9644: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1a9644u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_1a9648:
    // 0x1a9648: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1a9648u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
label_1a964c:
    // 0x1a964c: 0x8ec50018  lw          $a1, 0x18($s6)
    ctx->pc = 0x1a964cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_1a9650:
    // 0x1a9650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a9654:
    // 0x1a9654: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a9654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a9658:
    // 0x1a9658: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a9658u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a965c:
    // 0x1a965c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1a965cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9660:
    // 0x1a9660: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1a9660u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9664:
    // 0x1a9664: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1a9664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a9668:
    // 0x1a9668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a966c:
    // 0x1a966c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a966cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9670:
    // 0x1a9670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9674:
    // 0x1a9674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9678:
    // 0x1a9678: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a9678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a967c:
    // 0x1a967c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a967cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9680:
    // 0x1a9680: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a9680u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9684:
    // 0x1a9684: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a9684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a9688:
    // 0x1a9688: 0x806a6ee  j           func_1A9BB8
label_1a968c:
    if (ctx->pc == 0x1A968Cu) {
        ctx->pc = 0x1A968Cu;
            // 0x1a968c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A9690u;
        goto label_1a9690;
    }
    ctx->pc = 0x1A9688u;
    ctx->pc = 0x1A968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9688u;
            // 0x1a968c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BB8u;
    if (runtime->hasFunction(0x1A9BB8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BB8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A9BB8_0x1a9bb8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A9690u;
label_1a9690:
    // 0x1a9690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9694:
    // 0x1a9694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9698:
    // 0x1a9698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a969c:
    // 0x1a969c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a969cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a96a0:
    // 0x1a96a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a96a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a96a4:
    // 0x1a96a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a96a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a96a8:
    // 0x1a96a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a96a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a96ac:
    // 0x1a96ac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a96acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a96b0:
    // 0x1a96b0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1a96b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a96b4:
    // 0x1a96b4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a96b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a96b8:
    // 0x1a96b8: 0x3e00008  jr          $ra
label_1a96bc:
    if (ctx->pc == 0x1A96BCu) {
        ctx->pc = 0x1A96BCu;
            // 0x1a96bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A96C0u;
        goto label_1a96c0;
    }
    ctx->pc = 0x1A96B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A96BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A96B8u;
            // 0x1a96bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A96C0u;
label_1a96c0:
    // 0x1a96c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a96c4:
    // 0x1a96c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1a96c8:
    // 0x1a96c8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a96c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a96cc:
    // 0x1a96cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a96ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a96d0:
    // 0x1a96d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a96d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a96d4:
    // 0x1a96d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a96d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1a96d8:
    // 0x1a96d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a96d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a96dc:
    // 0x1a96dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a96dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1a96e0:
    // 0x1a96e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a96e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a96e4:
    // 0x1a96e4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1a96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1a96e8:
    // 0x1a96e8: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1a96e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a96ec:
    // 0x1a96ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a96ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a96f0:
    // 0x1a96f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a96f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a96f4:
    // 0x1a96f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a96f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1a96f8:
    // 0x1a96f8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a96f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1a96fc:
    // 0x1a96fc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a96fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1a9700:
    // 0x1a9700: 0xc06d81c  jal         func_1B6070
label_1a9704:
    if (ctx->pc == 0x1A9704u) {
        ctx->pc = 0x1A9704u;
            // 0x1a9704: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9708u;
        goto label_1a9708;
    }
    ctx->pc = 0x1A9700u;
    SET_GPR_U32(ctx, 31, 0x1A9708u);
    ctx->pc = 0x1A9704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9700u;
            // 0x1a9704: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9708u; }
        if (ctx->pc != 0x1A9708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9708u; }
        if (ctx->pc != 0x1A9708u) { return; }
    }
    ctx->pc = 0x1A9708u;
label_1a9708:
    // 0x1a9708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a970c:
    if (ctx->pc == 0x1A970Cu) {
        ctx->pc = 0x1A970Cu;
            // 0x1a970c: 0x26371fe4  addiu       $s7, $s1, 0x1FE4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8164));
        ctx->pc = 0x1A9710u;
        goto label_1a9710;
    }
    ctx->pc = 0x1A9708u;
    {
        const bool branch_taken_0x1a9708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9708u;
            // 0x1a970c: 0x26371fe4  addiu       $s7, $s1, 0x1FE4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9708) {
            ctx->pc = 0x1A9718u;
            goto label_1a9718;
        }
    }
    ctx->pc = 0x1A9710u;
label_1a9710:
    // 0x1a9710: 0x10000055  b           . + 4 + (0x55 << 2)
label_1a9714:
    if (ctx->pc == 0x1A9714u) {
        ctx->pc = 0x1A9714u;
            // 0x1a9714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A9718u;
        goto label_1a9718;
    }
    ctx->pc = 0x1A9710u;
    {
        const bool branch_taken_0x1a9710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9710u;
            // 0x1a9714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9710) {
            ctx->pc = 0x1A9868u;
            goto label_1a9868;
        }
    }
    ctx->pc = 0x1A9718u;
label_1a9718:
    // 0x1a9718: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1a9718u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a971c:
    // 0x1a971c: 0x8ef00008  lw          $s0, 0x8($s7)
    ctx->pc = 0x1a971cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_1a9720:
    // 0x1a9720: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1a9724:
    // 0x1a9724: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
label_1a9728:
    if (ctx->pc == 0x1A9728u) {
        ctx->pc = 0x1A9728u;
            // 0x1a9728: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1A972Cu;
        goto label_1a972c;
    }
    ctx->pc = 0x1A9724u;
    {
        const bool branch_taken_0x1a9724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1a9724) {
            ctx->pc = 0x1A9728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9724u;
            // 0x1a9728: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9740u;
            goto label_1a9740;
        }
    }
    ctx->pc = 0x1A972Cu;
label_1a972c:
    // 0x1a972c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9730:
    // 0x1a9730: 0xc06a626  jal         func_1A9898
label_1a9734:
    if (ctx->pc == 0x1A9734u) {
        ctx->pc = 0x1A9734u;
            // 0x1a9734: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9738u;
        goto label_1a9738;
    }
    ctx->pc = 0x1A9730u;
    SET_GPR_U32(ctx, 31, 0x1A9738u);
    ctx->pc = 0x1A9734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9730u;
            // 0x1a9734: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9898u;
    if (runtime->hasFunction(0x1A9898u)) {
        auto targetFn = runtime->lookupFunction(0x1A9898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9738u; }
        if (ctx->pc != 0x1A9738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9898_0x1a9898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9738u; }
        if (ctx->pc != 0x1A9738u) { return; }
    }
    ctx->pc = 0x1A9738u;
label_1a9738:
    // 0x1a9738: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1a9738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1a973c:
    // 0x1a973c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1a9740:
    // 0x1a9740: 0x50550001  beql        $v0, $s5, . + 4 + (0x1 << 2)
label_1a9744:
    if (ctx->pc == 0x1A9744u) {
        ctx->pc = 0x1A9744u;
            // 0x1a9744: 0xae16002c  sw          $s6, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
        ctx->pc = 0x1A9748u;
        goto label_1a9748;
    }
    ctx->pc = 0x1A9740u;
    {
        const bool branch_taken_0x1a9740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1a9740) {
            ctx->pc = 0x1A9744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9740u;
            // 0x1a9744: 0xae16002c  sw          $s6, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9748u;
            goto label_1a9748;
        }
    }
    ctx->pc = 0x1A9748u;
label_1a9748:
    // 0x1a9748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a974c:
    // 0x1a974c: 0xc06d81c  jal         func_1B6070
label_1a9750:
    if (ctx->pc == 0x1A9750u) {
        ctx->pc = 0x1A9750u;
            // 0x1a9750: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1A9754u;
        goto label_1a9754;
    }
    ctx->pc = 0x1A974Cu;
    SET_GPR_U32(ctx, 31, 0x1A9754u);
    ctx->pc = 0x1A9750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A974Cu;
            // 0x1a9750: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9754u; }
        if (ctx->pc != 0x1A9754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9754u; }
        if (ctx->pc != 0x1A9754u) { return; }
    }
    ctx->pc = 0x1A9754u;
label_1a9754:
    // 0x1a9754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a9754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9758:
    // 0x1a9758: 0x12550025  beq         $s2, $s5, . + 4 + (0x25 << 2)
label_1a975c:
    if (ctx->pc == 0x1A975Cu) {
        ctx->pc = 0x1A975Cu;
            // 0x1a975c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9760u;
        goto label_1a9760;
    }
    ctx->pc = 0x1A9758u;
    {
        const bool branch_taken_0x1a9758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x1A975Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9758u;
            // 0x1a975c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9758) {
            ctx->pc = 0x1A97F0u;
            goto label_1a97f0;
        }
    }
    ctx->pc = 0x1A9760u;
label_1a9760:
    // 0x1a9760: 0xc06d81c  jal         func_1B6070
label_1a9764:
    if (ctx->pc == 0x1A9764u) {
        ctx->pc = 0x1A9764u;
            // 0x1a9764: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x1A9768u;
        goto label_1a9768;
    }
    ctx->pc = 0x1A9760u;
    SET_GPR_U32(ctx, 31, 0x1A9768u);
    ctx->pc = 0x1A9764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9760u;
            // 0x1a9764: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9768u; }
        if (ctx->pc != 0x1A9768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9768u; }
        if (ctx->pc != 0x1A9768u) { return; }
    }
    ctx->pc = 0x1A9768u;
label_1a9768:
    // 0x1a9768: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1a976c:
    if (ctx->pc == 0x1A976Cu) {
        ctx->pc = 0x1A976Cu;
            // 0x1a976c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1A9770u;
        goto label_1a9770;
    }
    ctx->pc = 0x1A9768u;
    {
        const bool branch_taken_0x1a9768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9768) {
            ctx->pc = 0x1A976Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9768u;
            // 0x1a976c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9788u;
            goto label_1a9788;
        }
    }
    ctx->pc = 0x1A9770u;
label_1a9770:
    // 0x1a9770: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a9770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9774:
    // 0x1a9774: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1a9774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a9778:
    // 0x1a9778: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a977c:
    if (ctx->pc == 0x1A977Cu) {
        ctx->pc = 0x1A977Cu;
            // 0x1a977c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x1A9780u;
        goto label_1a9780;
    }
    ctx->pc = 0x1A9778u;
    {
        const bool branch_taken_0x1a9778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9778u;
            // 0x1a977c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9778) {
            ctx->pc = 0x1A9790u;
            goto label_1a9790;
        }
    }
    ctx->pc = 0x1A9780u;
label_1a9780:
    // 0x1a9780: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a9784:
    if (ctx->pc == 0x1A9784u) {
        ctx->pc = 0x1A9784u;
            // 0x1a9784: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1A9788u;
        goto label_1a9788;
    }
    ctx->pc = 0x1A9780u;
    {
        const bool branch_taken_0x1a9780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9780u;
            // 0x1a9784: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9780) {
            ctx->pc = 0x1A97F8u;
            goto label_1a97f8;
        }
    }
    ctx->pc = 0x1A9788u;
label_1a9788:
    // 0x1a9788: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
label_1a978c:
    if (ctx->pc == 0x1A978Cu) {
        ctx->pc = 0x1A978Cu;
            // 0x1a978c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x1A9790u;
        goto label_1a9790;
    }
    ctx->pc = 0x1A9788u;
    {
        const bool branch_taken_0x1a9788 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9788u;
            // 0x1a978c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9788) {
            ctx->pc = 0x1A97F4u;
            goto label_1a97f4;
        }
    }
    ctx->pc = 0x1A9790u;
label_1a9790:
    // 0x1a9790: 0x10920018  beq         $a0, $s2, . + 4 + (0x18 << 2)
label_1a9794:
    if (ctx->pc == 0x1A9794u) {
        ctx->pc = 0x1A9794u;
            // 0x1a9794: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x1A9798u;
        goto label_1a9798;
    }
    ctx->pc = 0x1A9790u;
    {
        const bool branch_taken_0x1a9790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A9794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9790u;
            // 0x1a9794: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9790) {
            ctx->pc = 0x1A97F4u;
            goto label_1a97f4;
        }
    }
    ctx->pc = 0x1A9798u;
label_1a9798:
    // 0x1a9798: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1a979c:
    if (ctx->pc == 0x1A979Cu) {
        ctx->pc = 0x1A979Cu;
            // 0x1a979c: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1A97A0u;
        goto label_1a97a0;
    }
    ctx->pc = 0x1A9798u;
    {
        const bool branch_taken_0x1a9798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9798) {
            ctx->pc = 0x1A979Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9798u;
            // 0x1a979c: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A97F8u;
            goto label_1a97f8;
        }
    }
    ctx->pc = 0x1A97A0u;
label_1a97a0:
    // 0x1a97a0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1a97a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1a97a4:
    // 0x1a97a4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_1a97a8:
    if (ctx->pc == 0x1A97A8u) {
        ctx->pc = 0x1A97A8u;
            // 0x1a97a8: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1A97ACu;
        goto label_1a97ac;
    }
    ctx->pc = 0x1A97A4u;
    {
        const bool branch_taken_0x1a97a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a97a4) {
            ctx->pc = 0x1A97A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97A4u;
            // 0x1a97a8: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A97F8u;
            goto label_1a97f8;
        }
    }
    ctx->pc = 0x1A97ACu;
label_1a97ac:
    // 0x1a97ac: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x1a97acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1a97b0:
    // 0x1a97b0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1a97b4:
    if (ctx->pc == 0x1A97B4u) {
        ctx->pc = 0x1A97B4u;
            // 0x1a97b4: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1A97B8u;
        goto label_1a97b8;
    }
    ctx->pc = 0x1A97B0u;
    {
        const bool branch_taken_0x1a97b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a97b0) {
            ctx->pc = 0x1A97B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97B0u;
            // 0x1a97b4: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A97F8u;
            goto label_1a97f8;
        }
    }
    ctx->pc = 0x1A97B8u;
label_1a97b8:
    // 0x1a97b8: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x1a97b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1a97bc:
    // 0x1a97bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a97c0:
    // 0x1a97c0: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1a97c4:
    if (ctx->pc == 0x1A97C4u) {
        ctx->pc = 0x1A97C4u;
            // 0x1a97c4: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1A97C8u;
        goto label_1a97c8;
    }
    ctx->pc = 0x1A97C0u;
    {
        const bool branch_taken_0x1a97c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a97c0) {
            ctx->pc = 0x1A97C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97C0u;
            // 0x1a97c4: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A97F8u;
            goto label_1a97f8;
        }
    }
    ctx->pc = 0x1A97C8u;
label_1a97c8:
    // 0x1a97c8: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x1a97c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_1a97cc:
    // 0x1a97cc: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x1a97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_1a97d0:
    // 0x1a97d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a97d4:
    if (ctx->pc == 0x1A97D4u) {
        ctx->pc = 0x1A97D4u;
            // 0x1a97d4: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->pc = 0x1A97D8u;
        goto label_1a97d8;
    }
    ctx->pc = 0x1A97D0u;
    {
        const bool branch_taken_0x1a97d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A97D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97D0u;
            // 0x1a97d4: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97d0) {
            ctx->pc = 0x1A97E0u;
            goto label_1a97e0;
        }
    }
    ctx->pc = 0x1A97D8u;
label_1a97d8:
    // 0x1a97d8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_1a97dc:
    if (ctx->pc == 0x1A97DCu) {
        ctx->pc = 0x1A97DCu;
            // 0x1a97dc: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1A97E0u;
        goto label_1a97e0;
    }
    ctx->pc = 0x1A97D8u;
    {
        const bool branch_taken_0x1a97d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a97d8) {
            ctx->pc = 0x1A97DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97D8u;
            // 0x1a97dc: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A97F8u;
            goto label_1a97f8;
        }
    }
    ctx->pc = 0x1A97E0u;
label_1a97e0:
    // 0x1a97e0: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x1a97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
label_1a97e4:
    // 0x1a97e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a97e8:
    if (ctx->pc == 0x1A97E8u) {
        ctx->pc = 0x1A97E8u;
            // 0x1a97e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A97ECu;
        goto label_1a97ec;
    }
    ctx->pc = 0x1A97E4u;
    {
        const bool branch_taken_0x1a97e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A97E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97E4u;
            // 0x1a97e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97e4) {
            ctx->pc = 0x1A97F4u;
            goto label_1a97f4;
        }
    }
    ctx->pc = 0x1A97ECu;
label_1a97ec:
    // 0x1a97ec: 0x0  nop
    ctx->pc = 0x1a97ecu;
    // NOP
label_1a97f0:
    // 0x1a97f0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1a97f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1a97f4:
    // 0x1a97f4: 0xae160024  sw          $s6, 0x24($s0)
    ctx->pc = 0x1a97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
label_1a97f8:
    // 0x1a97f8: 0x1496001b  bne         $a0, $s6, . + 4 + (0x1B << 2)
label_1a97fc:
    if (ctx->pc == 0x1A97FCu) {
        ctx->pc = 0x1A97FCu;
            // 0x1a97fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A9800u;
        goto label_1a9800;
    }
    ctx->pc = 0x1A97F8u;
    {
        const bool branch_taken_0x1a97f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x1A97FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97F8u;
            // 0x1a97fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97f8) {
            ctx->pc = 0x1A9868u;
            goto label_1a9868;
        }
    }
    ctx->pc = 0x1A9800u;
label_1a9800:
    // 0x1a9800: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a9800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a9804:
    // 0x1a9804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9808:
    // 0x1a9808: 0xc06c6a0  jal         func_1B1A80
label_1a980c:
    if (ctx->pc == 0x1A980Cu) {
        ctx->pc = 0x1A980Cu;
            // 0x1a980c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9810u;
        goto label_1a9810;
    }
    ctx->pc = 0x1A9808u;
    SET_GPR_U32(ctx, 31, 0x1A9810u);
    ctx->pc = 0x1A980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9808u;
            // 0x1a980c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A80u;
    if (runtime->hasFunction(0x1B1A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B1A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9810u; }
        if (ctx->pc != 0x1A9810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1A80_0x1b1a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9810u; }
        if (ctx->pc != 0x1A9810u) { return; }
    }
    ctx->pc = 0x1A9810u;
label_1a9810:
    // 0x1a9810: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a9810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9814:
    // 0x1a9814: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
label_1a9818:
    if (ctx->pc == 0x1A9818u) {
        ctx->pc = 0x1A9818u;
            // 0x1a9818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A981Cu;
        goto label_1a981c;
    }
    ctx->pc = 0x1A9814u;
    {
        const bool branch_taken_0x1a9814 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A9818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9814u;
            // 0x1a9818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9814) {
            ctx->pc = 0x1A9868u;
            goto label_1a9868;
        }
    }
    ctx->pc = 0x1A981Cu;
label_1a981c:
    // 0x1a981c: 0x8ee50014  lw          $a1, 0x14($s7)
    ctx->pc = 0x1a981cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_1a9820:
    // 0x1a9820: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1a9820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9824:
    // 0x1a9824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9828:
    // 0x1a9828: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a9828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a982c:
    // 0x1a982c: 0xc06a6ee  jal         func_1A9BB8
label_1a9830:
    if (ctx->pc == 0x1A9830u) {
        ctx->pc = 0x1A9830u;
            // 0x1a9830: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9834u;
        goto label_1a9834;
    }
    ctx->pc = 0x1A982Cu;
    SET_GPR_U32(ctx, 31, 0x1A9834u);
    ctx->pc = 0x1A9830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A982Cu;
            // 0x1a9830: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BB8u;
    if (runtime->hasFunction(0x1A9BB8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9834u; }
        if (ctx->pc != 0x1A9834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9BB8_0x1a9bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9834u; }
        if (ctx->pc != 0x1A9834u) { return; }
    }
    ctx->pc = 0x1A9834u;
label_1a9834:
    // 0x1a9834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9838:
    // 0x1a9838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a983c:
    // 0x1a983c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_1a9840:
    if (ctx->pc == 0x1A9840u) {
        ctx->pc = 0x1A9840u;
            // 0x1a9840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9844u;
        goto label_1a9844;
    }
    ctx->pc = 0x1A983Cu;
    {
        const bool branch_taken_0x1a983c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A983Cu;
            // 0x1a9840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a983c) {
            ctx->pc = 0x1A9858u;
            goto label_1a9858;
        }
    }
    ctx->pc = 0x1A9844u;
label_1a9844:
    // 0x1a9844: 0xc06c6bc  jal         func_1B1AF0
label_1a9848:
    if (ctx->pc == 0x1A9848u) {
        ctx->pc = 0x1A9848u;
            // 0x1a9848: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A984Cu;
        goto label_1a984c;
    }
    ctx->pc = 0x1A9844u;
    SET_GPR_U32(ctx, 31, 0x1A984Cu);
    ctx->pc = 0x1A9848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9844u;
            // 0x1a9848: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AF0u;
    if (runtime->hasFunction(0x1B1AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A984Cu; }
        if (ctx->pc != 0x1A984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AF0_0x1b1af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A984Cu; }
        if (ctx->pc != 0x1A984Cu) { return; }
    }
    ctx->pc = 0x1A984Cu;
label_1a984c:
    // 0x1a984c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9850:
    if (ctx->pc == 0x1A9850u) {
        ctx->pc = 0x1A9850u;
            // 0x1a9850: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9854u;
        goto label_1a9854;
    }
    ctx->pc = 0x1A984Cu;
    {
        const bool branch_taken_0x1a984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A984Cu;
            // 0x1a9850: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a984c) {
            ctx->pc = 0x1A9868u;
            goto label_1a9868;
        }
    }
    ctx->pc = 0x1A9854u;
label_1a9854:
    // 0x1a9854: 0x0  nop
    ctx->pc = 0x1a9854u;
    // NOP
label_1a9858:
    // 0x1a9858: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a9858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a985c:
    // 0x1a985c: 0xc06c78c  jal         func_1B1E30
label_1a9860:
    if (ctx->pc == 0x1A9860u) {
        ctx->pc = 0x1A9860u;
            // 0x1a9860: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9864u;
        goto label_1a9864;
    }
    ctx->pc = 0x1A985Cu;
    SET_GPR_U32(ctx, 31, 0x1A9864u);
    ctx->pc = 0x1A9860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A985Cu;
            // 0x1a9860: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1E30u;
    if (runtime->hasFunction(0x1B1E30u)) {
        auto targetFn = runtime->lookupFunction(0x1B1E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9864u; }
        if (ctx->pc != 0x1A9864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1E30_0x1b1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9864u; }
        if (ctx->pc != 0x1A9864u) { return; }
    }
    ctx->pc = 0x1A9864u;
label_1a9864:
    // 0x1a9864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9868:
    // 0x1a9868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a986c:
    // 0x1a986c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a986cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9870:
    // 0x1a9870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9874:
    // 0x1a9874: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9878:
    // 0x1a9878: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a9878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a987c:
    // 0x1a987c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a987cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9880:
    // 0x1a9880: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a9880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9884:
    // 0x1a9884: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a9884u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a9888:
    // 0x1a9888: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1a9888u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a988c:
    // 0x1a988c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a988cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a9890:
    // 0x1a9890: 0x3e00008  jr          $ra
label_1a9894:
    if (ctx->pc == 0x1A9894u) {
        ctx->pc = 0x1A9894u;
            // 0x1a9894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A9898u;
        goto label_fallthrough_0x1a9890;
    }
    ctx->pc = 0x1A9890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9890u;
            // 0x1a9894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a9890:
    ctx->pc = 0x1A9898u;
}
