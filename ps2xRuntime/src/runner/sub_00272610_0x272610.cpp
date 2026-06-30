#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00272610
// Address: 0x272610 - 0x272af0
void sub_00272610_0x272610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272610_0x272610");
#endif

    switch (ctx->pc) {
        case 0x272610u: goto label_272610;
        case 0x272614u: goto label_272614;
        case 0x272618u: goto label_272618;
        case 0x27261cu: goto label_27261c;
        case 0x272620u: goto label_272620;
        case 0x272624u: goto label_272624;
        case 0x272628u: goto label_272628;
        case 0x27262cu: goto label_27262c;
        case 0x272630u: goto label_272630;
        case 0x272634u: goto label_272634;
        case 0x272638u: goto label_272638;
        case 0x27263cu: goto label_27263c;
        case 0x272640u: goto label_272640;
        case 0x272644u: goto label_272644;
        case 0x272648u: goto label_272648;
        case 0x27264cu: goto label_27264c;
        case 0x272650u: goto label_272650;
        case 0x272654u: goto label_272654;
        case 0x272658u: goto label_272658;
        case 0x27265cu: goto label_27265c;
        case 0x272660u: goto label_272660;
        case 0x272664u: goto label_272664;
        case 0x272668u: goto label_272668;
        case 0x27266cu: goto label_27266c;
        case 0x272670u: goto label_272670;
        case 0x272674u: goto label_272674;
        case 0x272678u: goto label_272678;
        case 0x27267cu: goto label_27267c;
        case 0x272680u: goto label_272680;
        case 0x272684u: goto label_272684;
        case 0x272688u: goto label_272688;
        case 0x27268cu: goto label_27268c;
        case 0x272690u: goto label_272690;
        case 0x272694u: goto label_272694;
        case 0x272698u: goto label_272698;
        case 0x27269cu: goto label_27269c;
        case 0x2726a0u: goto label_2726a0;
        case 0x2726a4u: goto label_2726a4;
        case 0x2726a8u: goto label_2726a8;
        case 0x2726acu: goto label_2726ac;
        case 0x2726b0u: goto label_2726b0;
        case 0x2726b4u: goto label_2726b4;
        case 0x2726b8u: goto label_2726b8;
        case 0x2726bcu: goto label_2726bc;
        case 0x2726c0u: goto label_2726c0;
        case 0x2726c4u: goto label_2726c4;
        case 0x2726c8u: goto label_2726c8;
        case 0x2726ccu: goto label_2726cc;
        case 0x2726d0u: goto label_2726d0;
        case 0x2726d4u: goto label_2726d4;
        case 0x2726d8u: goto label_2726d8;
        case 0x2726dcu: goto label_2726dc;
        case 0x2726e0u: goto label_2726e0;
        case 0x2726e4u: goto label_2726e4;
        case 0x2726e8u: goto label_2726e8;
        case 0x2726ecu: goto label_2726ec;
        case 0x2726f0u: goto label_2726f0;
        case 0x2726f4u: goto label_2726f4;
        case 0x2726f8u: goto label_2726f8;
        case 0x2726fcu: goto label_2726fc;
        case 0x272700u: goto label_272700;
        case 0x272704u: goto label_272704;
        case 0x272708u: goto label_272708;
        case 0x27270cu: goto label_27270c;
        case 0x272710u: goto label_272710;
        case 0x272714u: goto label_272714;
        case 0x272718u: goto label_272718;
        case 0x27271cu: goto label_27271c;
        case 0x272720u: goto label_272720;
        case 0x272724u: goto label_272724;
        case 0x272728u: goto label_272728;
        case 0x27272cu: goto label_27272c;
        case 0x272730u: goto label_272730;
        case 0x272734u: goto label_272734;
        case 0x272738u: goto label_272738;
        case 0x27273cu: goto label_27273c;
        case 0x272740u: goto label_272740;
        case 0x272744u: goto label_272744;
        case 0x272748u: goto label_272748;
        case 0x27274cu: goto label_27274c;
        case 0x272750u: goto label_272750;
        case 0x272754u: goto label_272754;
        case 0x272758u: goto label_272758;
        case 0x27275cu: goto label_27275c;
        case 0x272760u: goto label_272760;
        case 0x272764u: goto label_272764;
        case 0x272768u: goto label_272768;
        case 0x27276cu: goto label_27276c;
        case 0x272770u: goto label_272770;
        case 0x272774u: goto label_272774;
        case 0x272778u: goto label_272778;
        case 0x27277cu: goto label_27277c;
        case 0x272780u: goto label_272780;
        case 0x272784u: goto label_272784;
        case 0x272788u: goto label_272788;
        case 0x27278cu: goto label_27278c;
        case 0x272790u: goto label_272790;
        case 0x272794u: goto label_272794;
        case 0x272798u: goto label_272798;
        case 0x27279cu: goto label_27279c;
        case 0x2727a0u: goto label_2727a0;
        case 0x2727a4u: goto label_2727a4;
        case 0x2727a8u: goto label_2727a8;
        case 0x2727acu: goto label_2727ac;
        case 0x2727b0u: goto label_2727b0;
        case 0x2727b4u: goto label_2727b4;
        case 0x2727b8u: goto label_2727b8;
        case 0x2727bcu: goto label_2727bc;
        case 0x2727c0u: goto label_2727c0;
        case 0x2727c4u: goto label_2727c4;
        case 0x2727c8u: goto label_2727c8;
        case 0x2727ccu: goto label_2727cc;
        case 0x2727d0u: goto label_2727d0;
        case 0x2727d4u: goto label_2727d4;
        case 0x2727d8u: goto label_2727d8;
        case 0x2727dcu: goto label_2727dc;
        case 0x2727e0u: goto label_2727e0;
        case 0x2727e4u: goto label_2727e4;
        case 0x2727e8u: goto label_2727e8;
        case 0x2727ecu: goto label_2727ec;
        case 0x2727f0u: goto label_2727f0;
        case 0x2727f4u: goto label_2727f4;
        case 0x2727f8u: goto label_2727f8;
        case 0x2727fcu: goto label_2727fc;
        case 0x272800u: goto label_272800;
        case 0x272804u: goto label_272804;
        case 0x272808u: goto label_272808;
        case 0x27280cu: goto label_27280c;
        case 0x272810u: goto label_272810;
        case 0x272814u: goto label_272814;
        case 0x272818u: goto label_272818;
        case 0x27281cu: goto label_27281c;
        case 0x272820u: goto label_272820;
        case 0x272824u: goto label_272824;
        case 0x272828u: goto label_272828;
        case 0x27282cu: goto label_27282c;
        case 0x272830u: goto label_272830;
        case 0x272834u: goto label_272834;
        case 0x272838u: goto label_272838;
        case 0x27283cu: goto label_27283c;
        case 0x272840u: goto label_272840;
        case 0x272844u: goto label_272844;
        case 0x272848u: goto label_272848;
        case 0x27284cu: goto label_27284c;
        case 0x272850u: goto label_272850;
        case 0x272854u: goto label_272854;
        case 0x272858u: goto label_272858;
        case 0x27285cu: goto label_27285c;
        case 0x272860u: goto label_272860;
        case 0x272864u: goto label_272864;
        case 0x272868u: goto label_272868;
        case 0x27286cu: goto label_27286c;
        case 0x272870u: goto label_272870;
        case 0x272874u: goto label_272874;
        case 0x272878u: goto label_272878;
        case 0x27287cu: goto label_27287c;
        case 0x272880u: goto label_272880;
        case 0x272884u: goto label_272884;
        case 0x272888u: goto label_272888;
        case 0x27288cu: goto label_27288c;
        case 0x272890u: goto label_272890;
        case 0x272894u: goto label_272894;
        case 0x272898u: goto label_272898;
        case 0x27289cu: goto label_27289c;
        case 0x2728a0u: goto label_2728a0;
        case 0x2728a4u: goto label_2728a4;
        case 0x2728a8u: goto label_2728a8;
        case 0x2728acu: goto label_2728ac;
        case 0x2728b0u: goto label_2728b0;
        case 0x2728b4u: goto label_2728b4;
        case 0x2728b8u: goto label_2728b8;
        case 0x2728bcu: goto label_2728bc;
        case 0x2728c0u: goto label_2728c0;
        case 0x2728c4u: goto label_2728c4;
        case 0x2728c8u: goto label_2728c8;
        case 0x2728ccu: goto label_2728cc;
        case 0x2728d0u: goto label_2728d0;
        case 0x2728d4u: goto label_2728d4;
        case 0x2728d8u: goto label_2728d8;
        case 0x2728dcu: goto label_2728dc;
        case 0x2728e0u: goto label_2728e0;
        case 0x2728e4u: goto label_2728e4;
        case 0x2728e8u: goto label_2728e8;
        case 0x2728ecu: goto label_2728ec;
        case 0x2728f0u: goto label_2728f0;
        case 0x2728f4u: goto label_2728f4;
        case 0x2728f8u: goto label_2728f8;
        case 0x2728fcu: goto label_2728fc;
        case 0x272900u: goto label_272900;
        case 0x272904u: goto label_272904;
        case 0x272908u: goto label_272908;
        case 0x27290cu: goto label_27290c;
        case 0x272910u: goto label_272910;
        case 0x272914u: goto label_272914;
        case 0x272918u: goto label_272918;
        case 0x27291cu: goto label_27291c;
        case 0x272920u: goto label_272920;
        case 0x272924u: goto label_272924;
        case 0x272928u: goto label_272928;
        case 0x27292cu: goto label_27292c;
        case 0x272930u: goto label_272930;
        case 0x272934u: goto label_272934;
        case 0x272938u: goto label_272938;
        case 0x27293cu: goto label_27293c;
        case 0x272940u: goto label_272940;
        case 0x272944u: goto label_272944;
        case 0x272948u: goto label_272948;
        case 0x27294cu: goto label_27294c;
        case 0x272950u: goto label_272950;
        case 0x272954u: goto label_272954;
        case 0x272958u: goto label_272958;
        case 0x27295cu: goto label_27295c;
        case 0x272960u: goto label_272960;
        case 0x272964u: goto label_272964;
        case 0x272968u: goto label_272968;
        case 0x27296cu: goto label_27296c;
        case 0x272970u: goto label_272970;
        case 0x272974u: goto label_272974;
        case 0x272978u: goto label_272978;
        case 0x27297cu: goto label_27297c;
        case 0x272980u: goto label_272980;
        case 0x272984u: goto label_272984;
        case 0x272988u: goto label_272988;
        case 0x27298cu: goto label_27298c;
        case 0x272990u: goto label_272990;
        case 0x272994u: goto label_272994;
        case 0x272998u: goto label_272998;
        case 0x27299cu: goto label_27299c;
        case 0x2729a0u: goto label_2729a0;
        case 0x2729a4u: goto label_2729a4;
        case 0x2729a8u: goto label_2729a8;
        case 0x2729acu: goto label_2729ac;
        case 0x2729b0u: goto label_2729b0;
        case 0x2729b4u: goto label_2729b4;
        case 0x2729b8u: goto label_2729b8;
        case 0x2729bcu: goto label_2729bc;
        case 0x2729c0u: goto label_2729c0;
        case 0x2729c4u: goto label_2729c4;
        case 0x2729c8u: goto label_2729c8;
        case 0x2729ccu: goto label_2729cc;
        case 0x2729d0u: goto label_2729d0;
        case 0x2729d4u: goto label_2729d4;
        case 0x2729d8u: goto label_2729d8;
        case 0x2729dcu: goto label_2729dc;
        case 0x2729e0u: goto label_2729e0;
        case 0x2729e4u: goto label_2729e4;
        case 0x2729e8u: goto label_2729e8;
        case 0x2729ecu: goto label_2729ec;
        case 0x2729f0u: goto label_2729f0;
        case 0x2729f4u: goto label_2729f4;
        case 0x2729f8u: goto label_2729f8;
        case 0x2729fcu: goto label_2729fc;
        case 0x272a00u: goto label_272a00;
        case 0x272a04u: goto label_272a04;
        case 0x272a08u: goto label_272a08;
        case 0x272a0cu: goto label_272a0c;
        case 0x272a10u: goto label_272a10;
        case 0x272a14u: goto label_272a14;
        case 0x272a18u: goto label_272a18;
        case 0x272a1cu: goto label_272a1c;
        case 0x272a20u: goto label_272a20;
        case 0x272a24u: goto label_272a24;
        case 0x272a28u: goto label_272a28;
        case 0x272a2cu: goto label_272a2c;
        case 0x272a30u: goto label_272a30;
        case 0x272a34u: goto label_272a34;
        case 0x272a38u: goto label_272a38;
        case 0x272a3cu: goto label_272a3c;
        case 0x272a40u: goto label_272a40;
        case 0x272a44u: goto label_272a44;
        case 0x272a48u: goto label_272a48;
        case 0x272a4cu: goto label_272a4c;
        case 0x272a50u: goto label_272a50;
        case 0x272a54u: goto label_272a54;
        case 0x272a58u: goto label_272a58;
        case 0x272a5cu: goto label_272a5c;
        case 0x272a60u: goto label_272a60;
        case 0x272a64u: goto label_272a64;
        case 0x272a68u: goto label_272a68;
        case 0x272a6cu: goto label_272a6c;
        case 0x272a70u: goto label_272a70;
        case 0x272a74u: goto label_272a74;
        case 0x272a78u: goto label_272a78;
        case 0x272a7cu: goto label_272a7c;
        case 0x272a80u: goto label_272a80;
        case 0x272a84u: goto label_272a84;
        case 0x272a88u: goto label_272a88;
        case 0x272a8cu: goto label_272a8c;
        case 0x272a90u: goto label_272a90;
        case 0x272a94u: goto label_272a94;
        case 0x272a98u: goto label_272a98;
        case 0x272a9cu: goto label_272a9c;
        case 0x272aa0u: goto label_272aa0;
        case 0x272aa4u: goto label_272aa4;
        case 0x272aa8u: goto label_272aa8;
        case 0x272aacu: goto label_272aac;
        case 0x272ab0u: goto label_272ab0;
        case 0x272ab4u: goto label_272ab4;
        case 0x272ab8u: goto label_272ab8;
        case 0x272abcu: goto label_272abc;
        case 0x272ac0u: goto label_272ac0;
        case 0x272ac4u: goto label_272ac4;
        case 0x272ac8u: goto label_272ac8;
        case 0x272accu: goto label_272acc;
        case 0x272ad0u: goto label_272ad0;
        case 0x272ad4u: goto label_272ad4;
        case 0x272ad8u: goto label_272ad8;
        case 0x272adcu: goto label_272adc;
        case 0x272ae0u: goto label_272ae0;
        case 0x272ae4u: goto label_272ae4;
        case 0x272ae8u: goto label_272ae8;
        case 0x272aecu: goto label_272aec;
        default: break;
    }

    ctx->pc = 0x272610u;

label_272610:
    // 0x272610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_272614:
    // 0x272614: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x272614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_272618:
    // 0x272618: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x272618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27261c:
    // 0x27261c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_272620:
    // 0x272620: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x272620u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_272624:
    // 0x272624: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x272624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_272628:
    // 0x272628: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x272628u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27262c:
    // 0x27262c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_272630:
    // 0x272630: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x272630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272634:
    // 0x272634: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x272634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_272638:
    // 0x272638: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x272638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27263c:
    // 0x27263c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_272640:
    // 0x272640: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x272640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_272644:
    // 0x272644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_272648:
    // 0x272648: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x272648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27264c:
    // 0x27264c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27264cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_272650:
    // 0x272650: 0x320f809  jalr        $t9
label_272654:
    if (ctx->pc == 0x272654u) {
        ctx->pc = 0x272654u;
            // 0x272654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272658u;
        goto label_272658;
    }
    ctx->pc = 0x272650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272658u);
        ctx->pc = 0x272654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272650u;
            // 0x272654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272658u; }
            if (ctx->pc != 0x272658u) { return; }
        }
        }
    }
    ctx->pc = 0x272658u;
label_272658:
    // 0x272658: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x272658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27265c:
    // 0x27265c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27265cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272660:
    // 0x272660: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x272660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_272664:
    // 0x272664: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x272664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_272668:
    // 0x272668: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x272668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_27266c:
    // 0x27266c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_272670:
    // 0x272670: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x272670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_272674:
    // 0x272674: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x272674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_272678:
    // 0x272678: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x272678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27267c:
    // 0x27267c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x27267cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_272680:
    // 0x272680: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x272680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_272684:
    // 0x272684: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_272688:
    if (ctx->pc == 0x272688u) {
        ctx->pc = 0x27268Cu;
        goto label_27268c;
    }
    ctx->pc = 0x272684u;
    {
        const bool branch_taken_0x272684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x272684) {
            ctx->pc = 0x272698u;
            goto label_272698;
        }
    }
    ctx->pc = 0x27268Cu;
label_27268c:
    // 0x27268c: 0x10000008  b           . + 4 + (0x8 << 2)
label_272690:
    if (ctx->pc == 0x272690u) {
        ctx->pc = 0x272690u;
            // 0x272690: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x272694u;
        goto label_272694;
    }
    ctx->pc = 0x27268Cu;
    {
        const bool branch_taken_0x27268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27268Cu;
            // 0x272690: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27268c) {
            ctx->pc = 0x2726B0u;
            goto label_2726b0;
        }
    }
    ctx->pc = 0x272694u;
label_272694:
    // 0x272694: 0x0  nop
    ctx->pc = 0x272694u;
    // NOP
label_272698:
    // 0x272698: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27269c:
    // 0x27269c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27269cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2726a0:
    // 0x2726a0: 0x320f809  jalr        $t9
label_2726a4:
    if (ctx->pc == 0x2726A4u) {
        ctx->pc = 0x2726A8u;
        goto label_2726a8;
    }
    ctx->pc = 0x2726A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2726A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2726A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2726A8u; }
            if (ctx->pc != 0x2726A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2726A8u;
label_2726a8:
    // 0x2726a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2726a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2726ac:
    // 0x2726ac: 0x0  nop
    ctx->pc = 0x2726acu;
    // NOP
label_2726b0:
    // 0x2726b0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2726b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2726b4:
    // 0x2726b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2726b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2726b8:
    // 0x2726b8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2726b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2726bc:
    // 0x2726bc: 0x320f809  jalr        $t9
label_2726c0:
    if (ctx->pc == 0x2726C0u) {
        ctx->pc = 0x2726C0u;
            // 0x2726c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2726C4u;
        goto label_2726c4;
    }
    ctx->pc = 0x2726BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2726C4u);
        ctx->pc = 0x2726C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726BCu;
            // 0x2726c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2726C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2726C4u; }
            if (ctx->pc != 0x2726C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2726C4u;
label_2726c4:
    // 0x2726c4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x2726c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2726c8:
    // 0x2726c8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x2726c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2726cc:
    // 0x2726cc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2726ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2726d0:
    // 0x2726d0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2726d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2726d4:
    // 0x2726d4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2726d8:
    if (ctx->pc == 0x2726D8u) {
        ctx->pc = 0x2726D8u;
            // 0x2726d8: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x2726DCu;
        goto label_2726dc;
    }
    ctx->pc = 0x2726D4u;
    {
        const bool branch_taken_0x2726d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2726D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726D4u;
            // 0x2726d8: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726d4) {
            ctx->pc = 0x2726E8u;
            goto label_2726e8;
        }
    }
    ctx->pc = 0x2726DCu;
label_2726dc:
    // 0x2726dc: 0xc0a728c  jal         func_29CA30
label_2726e0:
    if (ctx->pc == 0x2726E0u) {
        ctx->pc = 0x2726E0u;
            // 0x2726e0: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x2726E4u;
        goto label_2726e4;
    }
    ctx->pc = 0x2726DCu;
    SET_GPR_U32(ctx, 31, 0x2726E4u);
    ctx->pc = 0x2726E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2726DCu;
            // 0x2726e0: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726E4u; }
        if (ctx->pc != 0x2726E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726E4u; }
        if (ctx->pc != 0x2726E4u) { return; }
    }
    ctx->pc = 0x2726E4u;
label_2726e4:
    // 0x2726e4: 0x0  nop
    ctx->pc = 0x2726e4u;
    // NOP
label_2726e8:
    // 0x2726e8: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x2726e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2726ec:
    // 0x2726ec: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2726ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2726f0:
    // 0x2726f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2726f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2726f4:
    // 0x2726f4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2726f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2726f8:
    // 0x2726f8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2726f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2726fc:
    // 0x2726fc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_272700:
    // 0x272700: 0xaea5000c  sw          $a1, 0xC($s5)
    ctx->pc = 0x272700u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 5));
label_272704:
    // 0x272704: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x272704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_272708:
    // 0x272708: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x272708u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_27270c:
    // 0x27270c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x27270cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_272710:
    // 0x272710: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x272710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_272714:
    // 0x272714: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x272714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_272718:
    // 0x272718: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_27271c:
    if (ctx->pc == 0x27271Cu) {
        ctx->pc = 0x27271Cu;
            // 0x27271c: 0xad360000  sw          $s6, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 22));
        ctx->pc = 0x272720u;
        goto label_272720;
    }
    ctx->pc = 0x272718u;
    {
        const bool branch_taken_0x272718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272718u;
            // 0x27271c: 0xad360000  sw          $s6, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272718) {
            ctx->pc = 0x272818u;
            goto label_272818;
        }
    }
    ctx->pc = 0x272720u;
label_272720:
    // 0x272720: 0x27a80084  addiu       $t0, $sp, 0x84
    ctx->pc = 0x272720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_272724:
    // 0x272724: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x272724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_272728:
    // 0x272728: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x272728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_27272c:
    // 0x27272c: 0x0  nop
    ctx->pc = 0x27272cu;
    // NOP
label_272730:
    // 0x272730: 0x1a20002d  blez        $s1, . + 4 + (0x2D << 2)
label_272734:
    if (ctx->pc == 0x272734u) {
        ctx->pc = 0x272738u;
        goto label_272738;
    }
    ctx->pc = 0x272730u;
    {
        const bool branch_taken_0x272730 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x272730) {
            ctx->pc = 0x2727E8u;
            goto label_2727e8;
        }
    }
    ctx->pc = 0x272738u;
label_272738:
    // 0x272738: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x272738u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_27273c:
    // 0x27273c: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x27273cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_272740:
    // 0x272740: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x272740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272744:
    // 0x272744: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x272744u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_272748:
    // 0x272748: 0xc5060000  lwc1        $f6, 0x0($t0)
    ctx->pc = 0x272748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27274c:
    // 0x27274c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x27274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272750:
    // 0x272750: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x272750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_272754:
    // 0x272754: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x272754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_272758:
    // 0x272758: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x272758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27275c:
    // 0x27275c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272760:
    // 0x272760: 0xc607000c  lwc1        $f7, 0xC($s0)
    ctx->pc = 0x272760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_272764:
    // 0x272764: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x272764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_272768:
    // 0x272768: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x272768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27276c:
    // 0x27276c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x27276cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_272770:
    // 0x272770: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x272770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_272774:
    // 0x272774: 0x46070201  sub.s       $f8, $f0, $f7
    ctx->pc = 0x272774u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_272778:
    // 0x272778: 0xc7a50080  lwc1        $f5, 0x80($sp)
    ctx->pc = 0x272778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27277c:
    // 0x27277c: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_272780:
    if (ctx->pc == 0x272780u) {
        ctx->pc = 0x272780u;
            // 0x272780: 0x460701c0  add.s       $f7, $f0, $f7 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
        ctx->pc = 0x272784u;
        goto label_272784;
    }
    ctx->pc = 0x27277Cu;
    {
        const bool branch_taken_0x27277c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x272780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27277Cu;
            // 0x272780: 0x460701c0  add.s       $f7, $f0, $f7 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27277c) {
            ctx->pc = 0x2727F8u;
            goto label_2727f8;
        }
    }
    ctx->pc = 0x272784u;
label_272784:
    // 0x272784: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x272784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_272788:
    // 0x272788: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x272788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27278c:
    // 0x27278c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x27278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272790:
    // 0x272790: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x272790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272794:
    // 0x272794: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x272794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_272798:
    // 0x272798: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x272798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_27279c:
    // 0x27279c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x27279cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_2727a0:
    // 0x2727a0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2727a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2727a4:
    // 0x2727a4: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x2727a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_2727a8:
    // 0x2727a8: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x2727a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2727ac:
    // 0x2727ac: 0x46080834  c.lt.s      $f1, $f8
    ctx->pc = 0x2727acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2727b0:
    // 0x2727b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2727b4:
    if (ctx->pc == 0x2727B4u) {
        ctx->pc = 0x2727B4u;
            // 0x2727b4: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x2727B8u;
        goto label_2727b8;
    }
    ctx->pc = 0x2727B0u;
    {
        const bool branch_taken_0x2727b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2727B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727B0u;
            // 0x2727b4: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727b0) {
            ctx->pc = 0x2727C0u;
            goto label_2727c0;
        }
    }
    ctx->pc = 0x2727B8u;
label_2727b8:
    // 0x2727b8: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x2727b8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
label_2727bc:
    // 0x2727bc: 0x0  nop
    ctx->pc = 0x2727bcu;
    // NOP
label_2727c0:
    // 0x2727c0: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x2727c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2727c4:
    // 0x2727c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2727c8:
    if (ctx->pc == 0x2727C8u) {
        ctx->pc = 0x2727CCu;
        goto label_2727cc;
    }
    ctx->pc = 0x2727C4u;
    {
        const bool branch_taken_0x2727c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2727c4) {
            ctx->pc = 0x2727D0u;
            goto label_2727d0;
        }
    }
    ctx->pc = 0x2727CCu;
label_2727cc:
    // 0x2727cc: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x2727ccu;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
label_2727d0:
    // 0x2727d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2727d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2727d4:
    // 0x2727d4: 0x151202a  slt         $a0, $t2, $s1
    ctx->pc = 0x2727d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2727d8:
    // 0x2727d8: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
label_2727dc:
    if (ctx->pc == 0x2727DCu) {
        ctx->pc = 0x2727DCu;
            // 0x2727dc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x2727E0u;
        goto label_2727e0;
    }
    ctx->pc = 0x2727D8u;
    {
        const bool branch_taken_0x2727d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2727DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727D8u;
            // 0x2727dc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727d8) {
            ctx->pc = 0x272788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272788;
        }
    }
    ctx->pc = 0x2727E0u;
label_2727e0:
    // 0x2727e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2727e4:
    if (ctx->pc == 0x2727E4u) {
        ctx->pc = 0x2727E8u;
        goto label_2727e8;
    }
    ctx->pc = 0x2727E0u;
    {
        const bool branch_taken_0x2727e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2727e0) {
            ctx->pc = 0x2727F8u;
            goto label_2727f8;
        }
    }
    ctx->pc = 0x2727E8u;
label_2727e8:
    // 0x2727e8: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x2727e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2727ec:
    // 0x2727ec: 0x0  nop
    ctx->pc = 0x2727ecu;
    // NOP
label_2727f0:
    // 0x2727f0: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x2727f0u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
label_2727f4:
    // 0x2727f4: 0x0  nop
    ctx->pc = 0x2727f4u;
    // NOP
label_2727f8:
    // 0x2727f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2727f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2727fc:
    // 0x2727fc: 0xe5280004  swc1        $f8, 0x4($t1)
    ctx->pc = 0x2727fcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_272800:
    // 0x272800: 0x72202a  slt         $a0, $v1, $s2
    ctx->pc = 0x272800u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_272804:
    // 0x272804: 0xe5270008  swc1        $f7, 0x8($t1)
    ctx->pc = 0x272804u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_272808:
    // 0x272808: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x272808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_27280c:
    // 0x27280c: 0x1480ffc8  bnez        $a0, . + 4 + (-0x38 << 2)
label_272810:
    if (ctx->pc == 0x272810u) {
        ctx->pc = 0x272810u;
            // 0x272810: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->pc = 0x272814u;
        goto label_272814;
    }
    ctx->pc = 0x27280Cu;
    {
        const bool branch_taken_0x27280c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x272810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27280Cu;
            // 0x272810: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27280c) {
            ctx->pc = 0x272730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272730;
        }
    }
    ctx->pc = 0x272814u;
label_272814:
    // 0x272814: 0x0  nop
    ctx->pc = 0x272814u;
    // NOP
label_272818:
    // 0x272818: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27281c:
    // 0x27281c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27281cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_272820:
    // 0x272820: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x272820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
label_272824:
    // 0x272824: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x272824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_272828:
    // 0x272828: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_27282c:
    if (ctx->pc == 0x27282Cu) {
        ctx->pc = 0x272830u;
        goto label_272830;
    }
    ctx->pc = 0x272828u;
    {
        const bool branch_taken_0x272828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x272828) {
            ctx->pc = 0x272840u;
            goto label_272840;
        }
    }
    ctx->pc = 0x272830u;
label_272830:
    // 0x272830: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272834:
    // 0x272834: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x272834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_272838:
    // 0x272838: 0x320f809  jalr        $t9
label_27283c:
    if (ctx->pc == 0x27283Cu) {
        ctx->pc = 0x27283Cu;
            // 0x27283c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272840u;
        goto label_272840;
    }
    ctx->pc = 0x272838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272840u);
        ctx->pc = 0x27283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272838u;
            // 0x27283c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272840u; }
            if (ctx->pc != 0x272840u) { return; }
        }
        }
    }
    ctx->pc = 0x272840u;
label_272840:
    // 0x272840: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x272840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_272844:
    // 0x272844: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x272844u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_272848:
    // 0x272848: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x272848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27284c:
    // 0x27284c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27284cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_272850:
    // 0x272850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x272850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_272854:
    // 0x272854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_272858:
    // 0x272858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27285c:
    // 0x27285c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27285cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_272860:
    // 0x272860: 0x3e00008  jr          $ra
label_272864:
    if (ctx->pc == 0x272864u) {
        ctx->pc = 0x272864u;
            // 0x272864: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x272868u;
        goto label_272868;
    }
    ctx->pc = 0x272860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272860u;
            // 0x272864: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272868u;
label_272868:
    // 0x272868: 0x0  nop
    ctx->pc = 0x272868u;
    // NOP
label_27286c:
    // 0x27286c: 0x0  nop
    ctx->pc = 0x27286cu;
    // NOP
label_272870:
    // 0x272870: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x272870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_272874:
    // 0x272874: 0x3e00008  jr          $ra
label_272878:
    if (ctx->pc == 0x272878u) {
        ctx->pc = 0x272878u;
            // 0x272878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27287Cu;
        goto label_27287c;
    }
    ctx->pc = 0x272874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272874u;
            // 0x272878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27287Cu;
label_27287c:
    // 0x27287c: 0x0  nop
    ctx->pc = 0x27287cu;
    // NOP
label_272880:
    // 0x272880: 0x8cec0004  lw          $t4, 0x4($a3)
    ctx->pc = 0x272880u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_272884:
    // 0x272884: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x272884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_272888:
    // 0x272888: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x272888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_27288c:
    // 0x27288c: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x27288cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_272890:
    // 0x272890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x272890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272894:
    // 0x272894: 0xc58c0  sll         $t3, $t4, 3
    ctx->pc = 0x272894u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_272898:
    // 0x272898: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x272898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_27289c:
    // 0x27289c: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x27289cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_2728a0:
    // 0x2728a0: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x2728a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_2728a4:
    // 0x2728a4: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x2728a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_2728a8:
    // 0x2728a8: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x2728a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_2728ac:
    // 0x2728ac: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2728acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2728b0:
    // 0x2728b0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2728b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2728b4:
    // 0x2728b4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2728b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2728b8:
    // 0x2728b8: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x2728b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2728bc:
    // 0x2728bc: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_2728c0:
    if (ctx->pc == 0x2728C0u) {
        ctx->pc = 0x2728C0u;
            // 0x2728c0: 0xe4e3000c  swc1        $f3, 0xC($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->pc = 0x2728C4u;
        goto label_2728c4;
    }
    ctx->pc = 0x2728BCu;
    {
        const bool branch_taken_0x2728bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2728C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728BCu;
            // 0x2728c0: 0xe4e3000c  swc1        $f3, 0xC($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728bc) {
            ctx->pc = 0x272938u;
            goto label_272938;
        }
    }
    ctx->pc = 0x2728C4u;
label_2728c4:
    // 0x2728c4: 0x24ec0014  addiu       $t4, $a3, 0x14
    ctx->pc = 0x2728c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_2728c8:
    // 0x2728c8: 0x8d8b0004  lw          $t3, 0x4($t4)
    ctx->pc = 0x2728c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_2728cc:
    // 0x2728cc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2728ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2728d0:
    // 0x2728d0: 0xb38c0  sll         $a3, $t3, 3
    ctx->pc = 0x2728d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_2728d4:
    // 0x2728d4: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_2728d8:
    // 0x2728d8: 0xb3880  sll         $a3, $t3, 2
    ctx->pc = 0x2728d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_2728dc:
    // 0x2728dc: 0xeb3823  subu        $a3, $a3, $t3
    ctx->pc = 0x2728dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_2728e0:
    // 0x2728e0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2728e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2728e4:
    // 0x2728e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2728e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2728e8:
    // 0x2728e8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2728e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2728ec:
    // 0x2728ec: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2728ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2728f0:
    // 0x2728f0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2728f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2728f4:
    // 0x2728f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2728f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2728f8:
    // 0x2728f8: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x2728f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_2728fc:
    // 0x2728fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_272900:
    if (ctx->pc == 0x272900u) {
        ctx->pc = 0x272900u;
            // 0x272900: 0xe580000c  swc1        $f0, 0xC($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
        ctx->pc = 0x272904u;
        goto label_272904;
    }
    ctx->pc = 0x2728FCu;
    {
        const bool branch_taken_0x2728fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728FCu;
            // 0x272900: 0xe580000c  swc1        $f0, 0xC($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728fc) {
            ctx->pc = 0x27290Cu;
            goto label_27290c;
        }
    }
    ctx->pc = 0x272904u;
label_272904:
    // 0x272904: 0x10000002  b           . + 4 + (0x2 << 2)
label_272908:
    if (ctx->pc == 0x272908u) {
        ctx->pc = 0x27290Cu;
        goto label_27290c;
    }
    ctx->pc = 0x272904u;
    {
        const bool branch_taken_0x272904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272904) {
            ctx->pc = 0x272910u;
            goto label_272910;
        }
    }
    ctx->pc = 0x27290Cu;
label_27290c:
    // 0x27290c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27290cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_272910:
    // 0x272910: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x272910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272914:
    // 0x272914: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_272918:
    if (ctx->pc == 0x272918u) {
        ctx->pc = 0x27291Cu;
        goto label_27291c;
    }
    ctx->pc = 0x272914u;
    {
        const bool branch_taken_0x272914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272914) {
            ctx->pc = 0x272924u;
            goto label_272924;
        }
    }
    ctx->pc = 0x27291Cu;
label_27291c:
    // 0x27291c: 0x10000003  b           . + 4 + (0x3 << 2)
label_272920:
    if (ctx->pc == 0x272920u) {
        ctx->pc = 0x272920u;
            // 0x272920: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x272924u;
        goto label_272924;
    }
    ctx->pc = 0x27291Cu;
    {
        const bool branch_taken_0x27291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27291Cu;
            // 0x272920: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27291c) {
            ctx->pc = 0x27292Cu;
            goto label_27292c;
        }
    }
    ctx->pc = 0x272924u;
label_272924:
    // 0x272924: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x272924u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_272928:
    // 0x272928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x272928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27292c:
    // 0x27292c: 0xa8302a  slt         $a2, $a1, $t0
    ctx->pc = 0x27292cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_272930:
    // 0x272930: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
label_272934:
    if (ctx->pc == 0x272934u) {
        ctx->pc = 0x272934u;
            // 0x272934: 0x258c0014  addiu       $t4, $t4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
        ctx->pc = 0x272938u;
        goto label_272938;
    }
    ctx->pc = 0x272930u;
    {
        const bool branch_taken_0x272930 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x272934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272930u;
            // 0x272934: 0x258c0014  addiu       $t4, $t4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272930) {
            ctx->pc = 0x2728C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2728c8;
        }
    }
    ctx->pc = 0x272938u;
label_272938:
    // 0x272938: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x272938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_27293c:
    // 0x27293c: 0x3e00008  jr          $ra
label_272940:
    if (ctx->pc == 0x272940u) {
        ctx->pc = 0x272940u;
            // 0x272940: 0xe5430000  swc1        $f3, 0x0($t2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x272944u;
        goto label_272944;
    }
    ctx->pc = 0x27293Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27293Cu;
            // 0x272940: 0xe5430000  swc1        $f3, 0x0($t2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272944u;
label_272944:
    // 0x272944: 0x0  nop
    ctx->pc = 0x272944u;
    // NOP
label_272948:
    // 0x272948: 0x0  nop
    ctx->pc = 0x272948u;
    // NOP
label_27294c:
    // 0x27294c: 0x0  nop
    ctx->pc = 0x27294cu;
    // NOP
label_272950:
    // 0x272950: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x272950u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_272954:
    // 0x272954: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x272954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_272958:
    // 0x272958: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x272958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_27295c:
    // 0x27295c: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x27295cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_272960:
    // 0x272960: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x272960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_272964:
    // 0x272964: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x272964u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_272968:
    // 0x272968: 0xb3080  sll         $a2, $t3, 2
    ctx->pc = 0x272968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_27296c:
    // 0x27296c: 0xcb3023  subu        $a2, $a2, $t3
    ctx->pc = 0x27296cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_272970:
    // 0x272970: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_272974:
    // 0x272974: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x272974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_272978:
    // 0x272978: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x272978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_27297c:
    // 0x27297c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x27297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272980:
    // 0x272980: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x272980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272984:
    // 0x272984: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_272988:
    if (ctx->pc == 0x272988u) {
        ctx->pc = 0x272988u;
            // 0x272988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27298Cu;
        goto label_27298c;
    }
    ctx->pc = 0x272984u;
    {
        const bool branch_taken_0x272984 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x272988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272984u;
            // 0x272988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272984) {
            ctx->pc = 0x2729F8u;
            goto label_2729f8;
        }
    }
    ctx->pc = 0x27298Cu;
label_27298c:
    // 0x27298c: 0x24eb0014  addiu       $t3, $a3, 0x14
    ctx->pc = 0x27298cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_272990:
    // 0x272990: 0x8d670004  lw          $a3, 0x4($t3)
    ctx->pc = 0x272990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_272994:
    // 0x272994: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x272994u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_272998:
    // 0x272998: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x272998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_27299c:
    // 0x27299c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x27299cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2729a0:
    // 0x2729a0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x2729a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2729a4:
    // 0x2729a4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2729a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2729a8:
    // 0x2729a8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2729a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2729ac:
    // 0x2729ac: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2729acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2729b0:
    // 0x2729b0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2729b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2729b4:
    // 0x2729b4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2729b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2729b8:
    // 0x2729b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2729bc:
    if (ctx->pc == 0x2729BCu) {
        ctx->pc = 0x2729BCu;
            // 0x2729bc: 0xc4c30008  lwc1        $f3, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x2729C0u;
        goto label_2729c0;
    }
    ctx->pc = 0x2729B8u;
    {
        const bool branch_taken_0x2729b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2729BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729B8u;
            // 0x2729bc: 0xc4c30008  lwc1        $f3, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729b8) {
            ctx->pc = 0x2729C8u;
            goto label_2729c8;
        }
    }
    ctx->pc = 0x2729C0u;
label_2729c0:
    // 0x2729c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2729c4:
    if (ctx->pc == 0x2729C4u) {
        ctx->pc = 0x2729C8u;
        goto label_2729c8;
    }
    ctx->pc = 0x2729C0u;
    {
        const bool branch_taken_0x2729c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2729c0) {
            ctx->pc = 0x2729CCu;
            goto label_2729cc;
        }
    }
    ctx->pc = 0x2729C8u;
label_2729c8:
    // 0x2729c8: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2729c8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2729cc:
    // 0x2729cc: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2729ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2729d0:
    // 0x2729d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2729d4:
    if (ctx->pc == 0x2729D4u) {
        ctx->pc = 0x2729D8u;
        goto label_2729d8;
    }
    ctx->pc = 0x2729D0u;
    {
        const bool branch_taken_0x2729d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2729d0) {
            ctx->pc = 0x2729E0u;
            goto label_2729e0;
        }
    }
    ctx->pc = 0x2729D8u;
label_2729d8:
    // 0x2729d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2729dc:
    if (ctx->pc == 0x2729DCu) {
        ctx->pc = 0x2729DCu;
            // 0x2729dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2729E0u;
        goto label_2729e0;
    }
    ctx->pc = 0x2729D8u;
    {
        const bool branch_taken_0x2729d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729D8u;
            // 0x2729dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729d8) {
            ctx->pc = 0x2729E8u;
            goto label_2729e8;
        }
    }
    ctx->pc = 0x2729E0u;
label_2729e0:
    // 0x2729e0: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x2729e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_2729e4:
    // 0x2729e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2729e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2729e8:
    // 0x2729e8: 0xa8302a  slt         $a2, $a1, $t0
    ctx->pc = 0x2729e8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2729ec:
    // 0x2729ec: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
label_2729f0:
    if (ctx->pc == 0x2729F0u) {
        ctx->pc = 0x2729F0u;
            // 0x2729f0: 0x256b0014  addiu       $t3, $t3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
        ctx->pc = 0x2729F4u;
        goto label_2729f4;
    }
    ctx->pc = 0x2729ECu;
    {
        const bool branch_taken_0x2729ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2729F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729ECu;
            // 0x2729f0: 0x256b0014  addiu       $t3, $t3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729ec) {
            ctx->pc = 0x272990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272990;
        }
    }
    ctx->pc = 0x2729F4u;
label_2729f4:
    // 0x2729f4: 0x0  nop
    ctx->pc = 0x2729f4u;
    // NOP
label_2729f8:
    // 0x2729f8: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x2729f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2729fc:
    // 0x2729fc: 0x3e00008  jr          $ra
label_272a00:
    if (ctx->pc == 0x272A00u) {
        ctx->pc = 0x272A00u;
            // 0x272a00: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->pc = 0x272A04u;
        goto label_272a04;
    }
    ctx->pc = 0x2729FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2729FCu;
            // 0x272a00: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272A04u;
label_272a04:
    // 0x272a04: 0x0  nop
    ctx->pc = 0x272a04u;
    // NOP
label_272a08:
    // 0x272a08: 0x0  nop
    ctx->pc = 0x272a08u;
    // NOP
label_272a0c:
    // 0x272a0c: 0x0  nop
    ctx->pc = 0x272a0cu;
    // NOP
label_272a10:
    // 0x272a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x272a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_272a14:
    // 0x272a14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x272a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_272a18:
    // 0x272a18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x272a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_272a1c:
    // 0x272a1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x272a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_272a20:
    // 0x272a20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x272a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272a24:
    // 0x272a24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_272a28:
    // 0x272a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_272a2c:
    // 0x272a2c: 0x8c910018  lw          $s1, 0x18($a0)
    ctx->pc = 0x272a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_272a30:
    // 0x272a30: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x272a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_272a34:
    // 0x272a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272a38:
    // 0x272a38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272a3c:
    // 0x272a3c: 0x320f809  jalr        $t9
label_272a40:
    if (ctx->pc == 0x272A40u) {
        ctx->pc = 0x272A40u;
            // 0x272a40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272A44u;
        goto label_272a44;
    }
    ctx->pc = 0x272A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272A44u);
        ctx->pc = 0x272A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A3Cu;
            // 0x272a40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272A44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272A44u; }
            if (ctx->pc != 0x272A44u) { return; }
        }
        }
    }
    ctx->pc = 0x272A44u;
label_272a44:
    // 0x272a44: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x272a44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_272a48:
    // 0x272a48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272a4c:
    // 0x272a4c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_272a50:
    if (ctx->pc == 0x272A50u) {
        ctx->pc = 0x272A50u;
            // 0x272a50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272A54u;
        goto label_272a54;
    }
    ctx->pc = 0x272A4Cu;
    {
        const bool branch_taken_0x272a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A4Cu;
            // 0x272a50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a4c) {
            ctx->pc = 0x272A88u;
            goto label_272a88;
        }
    }
    ctx->pc = 0x272A54u;
label_272a54:
    // 0x272a54: 0x0  nop
    ctx->pc = 0x272a54u;
    // NOP
label_272a58:
    // 0x272a58: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x272a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_272a5c:
    // 0x272a5c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x272a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_272a60:
    // 0x272a60: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x272a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_272a64:
    // 0x272a64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272a68:
    // 0x272a68: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x272a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_272a6c:
    // 0x272a6c: 0x320f809  jalr        $t9
label_272a70:
    if (ctx->pc == 0x272A70u) {
        ctx->pc = 0x272A70u;
            // 0x272a70: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x272A74u;
        goto label_272a74;
    }
    ctx->pc = 0x272A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272A74u);
        ctx->pc = 0x272A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A6Cu;
            // 0x272a70: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272A74u; }
            if (ctx->pc != 0x272A74u) { return; }
        }
        }
    }
    ctx->pc = 0x272A74u;
label_272a74:
    // 0x272a74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x272a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_272a78:
    // 0x272a78: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x272a78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_272a7c:
    // 0x272a7c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_272a80:
    if (ctx->pc == 0x272A80u) {
        ctx->pc = 0x272A80u;
            // 0x272a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272A84u;
        goto label_272a84;
    }
    ctx->pc = 0x272A7Cu;
    {
        const bool branch_taken_0x272a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A7Cu;
            // 0x272a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a7c) {
            ctx->pc = 0x272A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272a58;
        }
    }
    ctx->pc = 0x272A84u;
label_272a84:
    // 0x272a84: 0x0  nop
    ctx->pc = 0x272a84u;
    // NOP
label_272a88:
    // 0x272a88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x272a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_272a8c:
    // 0x272a8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x272a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_272a90:
    // 0x272a90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_272a94:
    // 0x272a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_272a98:
    // 0x272a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_272a9c:
    // 0x272a9c: 0x3e00008  jr          $ra
label_272aa0:
    if (ctx->pc == 0x272AA0u) {
        ctx->pc = 0x272AA0u;
            // 0x272aa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x272AA4u;
        goto label_272aa4;
    }
    ctx->pc = 0x272A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A9Cu;
            // 0x272aa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272AA4u;
label_272aa4:
    // 0x272aa4: 0x0  nop
    ctx->pc = 0x272aa4u;
    // NOP
label_272aa8:
    // 0x272aa8: 0x0  nop
    ctx->pc = 0x272aa8u;
    // NOP
label_272aac:
    // 0x272aac: 0x0  nop
    ctx->pc = 0x272aacu;
    // NOP
label_272ab0:
    // 0x272ab0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x272ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_272ab4:
    // 0x272ab4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x272ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_272ab8:
    // 0x272ab8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x272ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_272abc:
    // 0x272abc: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x272abcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_272ac0:
    // 0x272ac0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x272ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272ac4:
    // 0x272ac4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x272ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272ac8:
    // 0x272ac8: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x272ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_272acc:
    // 0x272acc: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x272accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_272ad0:
    // 0x272ad0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x272ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_272ad4:
    // 0x272ad4: 0x3e00008  jr          $ra
label_272ad8:
    if (ctx->pc == 0x272AD8u) {
        ctx->pc = 0x272AD8u;
            // 0x272ad8: 0xad030010  sw          $v1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x272ADCu;
        goto label_272adc;
    }
    ctx->pc = 0x272AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AD4u;
            // 0x272ad8: 0xad030010  sw          $v1, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272ADCu;
label_272adc:
    // 0x272adc: 0x0  nop
    ctx->pc = 0x272adcu;
    // NOP
label_272ae0:
    // 0x272ae0: 0x3e00008  jr          $ra
label_272ae4:
    if (ctx->pc == 0x272AE4u) {
        ctx->pc = 0x272AE4u;
            // 0x272ae4: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->pc = 0x272AE8u;
        goto label_272ae8;
    }
    ctx->pc = 0x272AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272AE0u;
            // 0x272ae4: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272AE8u;
label_272ae8:
    // 0x272ae8: 0x0  nop
    ctx->pc = 0x272ae8u;
    // NOP
label_272aec:
    // 0x272aec: 0x0  nop
    ctx->pc = 0x272aecu;
    // NOP
}
