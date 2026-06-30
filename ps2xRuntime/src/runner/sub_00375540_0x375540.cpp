#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00375540
// Address: 0x375540 - 0x375870
void sub_00375540_0x375540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375540_0x375540");
#endif

    switch (ctx->pc) {
        case 0x375540u: goto label_375540;
        case 0x375544u: goto label_375544;
        case 0x375548u: goto label_375548;
        case 0x37554cu: goto label_37554c;
        case 0x375550u: goto label_375550;
        case 0x375554u: goto label_375554;
        case 0x375558u: goto label_375558;
        case 0x37555cu: goto label_37555c;
        case 0x375560u: goto label_375560;
        case 0x375564u: goto label_375564;
        case 0x375568u: goto label_375568;
        case 0x37556cu: goto label_37556c;
        case 0x375570u: goto label_375570;
        case 0x375574u: goto label_375574;
        case 0x375578u: goto label_375578;
        case 0x37557cu: goto label_37557c;
        case 0x375580u: goto label_375580;
        case 0x375584u: goto label_375584;
        case 0x375588u: goto label_375588;
        case 0x37558cu: goto label_37558c;
        case 0x375590u: goto label_375590;
        case 0x375594u: goto label_375594;
        case 0x375598u: goto label_375598;
        case 0x37559cu: goto label_37559c;
        case 0x3755a0u: goto label_3755a0;
        case 0x3755a4u: goto label_3755a4;
        case 0x3755a8u: goto label_3755a8;
        case 0x3755acu: goto label_3755ac;
        case 0x3755b0u: goto label_3755b0;
        case 0x3755b4u: goto label_3755b4;
        case 0x3755b8u: goto label_3755b8;
        case 0x3755bcu: goto label_3755bc;
        case 0x3755c0u: goto label_3755c0;
        case 0x3755c4u: goto label_3755c4;
        case 0x3755c8u: goto label_3755c8;
        case 0x3755ccu: goto label_3755cc;
        case 0x3755d0u: goto label_3755d0;
        case 0x3755d4u: goto label_3755d4;
        case 0x3755d8u: goto label_3755d8;
        case 0x3755dcu: goto label_3755dc;
        case 0x3755e0u: goto label_3755e0;
        case 0x3755e4u: goto label_3755e4;
        case 0x3755e8u: goto label_3755e8;
        case 0x3755ecu: goto label_3755ec;
        case 0x3755f0u: goto label_3755f0;
        case 0x3755f4u: goto label_3755f4;
        case 0x3755f8u: goto label_3755f8;
        case 0x3755fcu: goto label_3755fc;
        case 0x375600u: goto label_375600;
        case 0x375604u: goto label_375604;
        case 0x375608u: goto label_375608;
        case 0x37560cu: goto label_37560c;
        case 0x375610u: goto label_375610;
        case 0x375614u: goto label_375614;
        case 0x375618u: goto label_375618;
        case 0x37561cu: goto label_37561c;
        case 0x375620u: goto label_375620;
        case 0x375624u: goto label_375624;
        case 0x375628u: goto label_375628;
        case 0x37562cu: goto label_37562c;
        case 0x375630u: goto label_375630;
        case 0x375634u: goto label_375634;
        case 0x375638u: goto label_375638;
        case 0x37563cu: goto label_37563c;
        case 0x375640u: goto label_375640;
        case 0x375644u: goto label_375644;
        case 0x375648u: goto label_375648;
        case 0x37564cu: goto label_37564c;
        case 0x375650u: goto label_375650;
        case 0x375654u: goto label_375654;
        case 0x375658u: goto label_375658;
        case 0x37565cu: goto label_37565c;
        case 0x375660u: goto label_375660;
        case 0x375664u: goto label_375664;
        case 0x375668u: goto label_375668;
        case 0x37566cu: goto label_37566c;
        case 0x375670u: goto label_375670;
        case 0x375674u: goto label_375674;
        case 0x375678u: goto label_375678;
        case 0x37567cu: goto label_37567c;
        case 0x375680u: goto label_375680;
        case 0x375684u: goto label_375684;
        case 0x375688u: goto label_375688;
        case 0x37568cu: goto label_37568c;
        case 0x375690u: goto label_375690;
        case 0x375694u: goto label_375694;
        case 0x375698u: goto label_375698;
        case 0x37569cu: goto label_37569c;
        case 0x3756a0u: goto label_3756a0;
        case 0x3756a4u: goto label_3756a4;
        case 0x3756a8u: goto label_3756a8;
        case 0x3756acu: goto label_3756ac;
        case 0x3756b0u: goto label_3756b0;
        case 0x3756b4u: goto label_3756b4;
        case 0x3756b8u: goto label_3756b8;
        case 0x3756bcu: goto label_3756bc;
        case 0x3756c0u: goto label_3756c0;
        case 0x3756c4u: goto label_3756c4;
        case 0x3756c8u: goto label_3756c8;
        case 0x3756ccu: goto label_3756cc;
        case 0x3756d0u: goto label_3756d0;
        case 0x3756d4u: goto label_3756d4;
        case 0x3756d8u: goto label_3756d8;
        case 0x3756dcu: goto label_3756dc;
        case 0x3756e0u: goto label_3756e0;
        case 0x3756e4u: goto label_3756e4;
        case 0x3756e8u: goto label_3756e8;
        case 0x3756ecu: goto label_3756ec;
        case 0x3756f0u: goto label_3756f0;
        case 0x3756f4u: goto label_3756f4;
        case 0x3756f8u: goto label_3756f8;
        case 0x3756fcu: goto label_3756fc;
        case 0x375700u: goto label_375700;
        case 0x375704u: goto label_375704;
        case 0x375708u: goto label_375708;
        case 0x37570cu: goto label_37570c;
        case 0x375710u: goto label_375710;
        case 0x375714u: goto label_375714;
        case 0x375718u: goto label_375718;
        case 0x37571cu: goto label_37571c;
        case 0x375720u: goto label_375720;
        case 0x375724u: goto label_375724;
        case 0x375728u: goto label_375728;
        case 0x37572cu: goto label_37572c;
        case 0x375730u: goto label_375730;
        case 0x375734u: goto label_375734;
        case 0x375738u: goto label_375738;
        case 0x37573cu: goto label_37573c;
        case 0x375740u: goto label_375740;
        case 0x375744u: goto label_375744;
        case 0x375748u: goto label_375748;
        case 0x37574cu: goto label_37574c;
        case 0x375750u: goto label_375750;
        case 0x375754u: goto label_375754;
        case 0x375758u: goto label_375758;
        case 0x37575cu: goto label_37575c;
        case 0x375760u: goto label_375760;
        case 0x375764u: goto label_375764;
        case 0x375768u: goto label_375768;
        case 0x37576cu: goto label_37576c;
        case 0x375770u: goto label_375770;
        case 0x375774u: goto label_375774;
        case 0x375778u: goto label_375778;
        case 0x37577cu: goto label_37577c;
        case 0x375780u: goto label_375780;
        case 0x375784u: goto label_375784;
        case 0x375788u: goto label_375788;
        case 0x37578cu: goto label_37578c;
        case 0x375790u: goto label_375790;
        case 0x375794u: goto label_375794;
        case 0x375798u: goto label_375798;
        case 0x37579cu: goto label_37579c;
        case 0x3757a0u: goto label_3757a0;
        case 0x3757a4u: goto label_3757a4;
        case 0x3757a8u: goto label_3757a8;
        case 0x3757acu: goto label_3757ac;
        case 0x3757b0u: goto label_3757b0;
        case 0x3757b4u: goto label_3757b4;
        case 0x3757b8u: goto label_3757b8;
        case 0x3757bcu: goto label_3757bc;
        case 0x3757c0u: goto label_3757c0;
        case 0x3757c4u: goto label_3757c4;
        case 0x3757c8u: goto label_3757c8;
        case 0x3757ccu: goto label_3757cc;
        case 0x3757d0u: goto label_3757d0;
        case 0x3757d4u: goto label_3757d4;
        case 0x3757d8u: goto label_3757d8;
        case 0x3757dcu: goto label_3757dc;
        case 0x3757e0u: goto label_3757e0;
        case 0x3757e4u: goto label_3757e4;
        case 0x3757e8u: goto label_3757e8;
        case 0x3757ecu: goto label_3757ec;
        case 0x3757f0u: goto label_3757f0;
        case 0x3757f4u: goto label_3757f4;
        case 0x3757f8u: goto label_3757f8;
        case 0x3757fcu: goto label_3757fc;
        case 0x375800u: goto label_375800;
        case 0x375804u: goto label_375804;
        case 0x375808u: goto label_375808;
        case 0x37580cu: goto label_37580c;
        case 0x375810u: goto label_375810;
        case 0x375814u: goto label_375814;
        case 0x375818u: goto label_375818;
        case 0x37581cu: goto label_37581c;
        case 0x375820u: goto label_375820;
        case 0x375824u: goto label_375824;
        case 0x375828u: goto label_375828;
        case 0x37582cu: goto label_37582c;
        case 0x375830u: goto label_375830;
        case 0x375834u: goto label_375834;
        case 0x375838u: goto label_375838;
        case 0x37583cu: goto label_37583c;
        case 0x375840u: goto label_375840;
        case 0x375844u: goto label_375844;
        case 0x375848u: goto label_375848;
        case 0x37584cu: goto label_37584c;
        case 0x375850u: goto label_375850;
        case 0x375854u: goto label_375854;
        case 0x375858u: goto label_375858;
        case 0x37585cu: goto label_37585c;
        case 0x375860u: goto label_375860;
        case 0x375864u: goto label_375864;
        case 0x375868u: goto label_375868;
        case 0x37586cu: goto label_37586c;
        default: break;
    }

    ctx->pc = 0x375540u;

label_375540:
    // 0x375540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x375540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_375544:
    // 0x375544: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x375544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_375548:
    // 0x375548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x375548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37554c:
    // 0x37554c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x37554cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_375550:
    // 0x375550: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x375550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_375554:
    // 0x375554: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x375554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_375558:
    // 0x375558: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x375558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37555c:
    // 0x37555c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_375560:
    // 0x375560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x375560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_375564:
    // 0x375564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x375564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_375568:
    // 0x375568: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x375568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37556c:
    // 0x37556c: 0xc0aeaf4  jal         func_2BABD0
label_375570:
    if (ctx->pc == 0x375570u) {
        ctx->pc = 0x375570u;
            // 0x375570: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x375574u;
        goto label_375574;
    }
    ctx->pc = 0x37556Cu;
    SET_GPR_U32(ctx, 31, 0x375574u);
    ctx->pc = 0x375570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37556Cu;
            // 0x375570: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375574u; }
        if (ctx->pc != 0x375574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375574u; }
        if (ctx->pc != 0x375574u) { return; }
    }
    ctx->pc = 0x375574u;
label_375574:
    // 0x375574: 0xc0dd6b0  jal         func_375AC0
label_375578:
    if (ctx->pc == 0x375578u) {
        ctx->pc = 0x375578u;
            // 0x375578: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x37557Cu;
        goto label_37557c;
    }
    ctx->pc = 0x375574u;
    SET_GPR_U32(ctx, 31, 0x37557Cu);
    ctx->pc = 0x375578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375574u;
            // 0x375578: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375AC0u;
    if (runtime->hasFunction(0x375AC0u)) {
        auto targetFn = runtime->lookupFunction(0x375AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37557Cu; }
        if (ctx->pc != 0x37557Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00375AC0_0x375ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37557Cu; }
        if (ctx->pc != 0x37557Cu) { return; }
    }
    ctx->pc = 0x37557Cu;
label_37557c:
    // 0x37557c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37557cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_375580:
    // 0x375580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_375584:
    // 0x375584: 0x24636fd0  addiu       $v1, $v1, 0x6FD0
    ctx->pc = 0x375584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28624));
label_375588:
    // 0x375588: 0x24427008  addiu       $v0, $v0, 0x7008
    ctx->pc = 0x375588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
label_37558c:
    // 0x37558c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x37558cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_375590:
    // 0x375590: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x375590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_375594:
    // 0x375594: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x375594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_375598:
    // 0x375598: 0xc0dd6a8  jal         func_375AA0
label_37559c:
    if (ctx->pc == 0x37559Cu) {
        ctx->pc = 0x37559Cu;
            // 0x37559c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x3755A0u;
        goto label_3755a0;
    }
    ctx->pc = 0x375598u;
    SET_GPR_U32(ctx, 31, 0x3755A0u);
    ctx->pc = 0x37559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375598u;
            // 0x37559c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375AA0u;
    if (runtime->hasFunction(0x375AA0u)) {
        auto targetFn = runtime->lookupFunction(0x375AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755A0u; }
        if (ctx->pc != 0x3755A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00375AA0_0x375aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755A0u; }
        if (ctx->pc != 0x3755A0u) { return; }
    }
    ctx->pc = 0x3755A0u;
label_3755a0:
    // 0x3755a0: 0xc0dd6a8  jal         func_375AA0
label_3755a4:
    if (ctx->pc == 0x3755A4u) {
        ctx->pc = 0x3755A4u;
            // 0x3755a4: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x3755A8u;
        goto label_3755a8;
    }
    ctx->pc = 0x3755A0u;
    SET_GPR_U32(ctx, 31, 0x3755A8u);
    ctx->pc = 0x3755A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3755A0u;
            // 0x3755a4: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375AA0u;
    if (runtime->hasFunction(0x375AA0u)) {
        auto targetFn = runtime->lookupFunction(0x375AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755A8u; }
        if (ctx->pc != 0x3755A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00375AA0_0x375aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755A8u; }
        if (ctx->pc != 0x3755A8u) { return; }
    }
    ctx->pc = 0x3755A8u;
label_3755a8:
    // 0x3755a8: 0xc0a8d10  jal         func_2A3440
label_3755ac:
    if (ctx->pc == 0x3755ACu) {
        ctx->pc = 0x3755ACu;
            // 0x3755ac: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x3755B0u;
        goto label_3755b0;
    }
    ctx->pc = 0x3755A8u;
    SET_GPR_U32(ctx, 31, 0x3755B0u);
    ctx->pc = 0x3755ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3755A8u;
            // 0x3755ac: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755B0u; }
        if (ctx->pc != 0x3755B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755B0u; }
        if (ctx->pc != 0x3755B0u) { return; }
    }
    ctx->pc = 0x3755B0u;
label_3755b0:
    // 0x3755b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3755b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3755b4:
    // 0x3755b4: 0xc0aeac0  jal         func_2BAB00
label_3755b8:
    if (ctx->pc == 0x3755B8u) {
        ctx->pc = 0x3755B8u;
            // 0x3755b8: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x3755BCu;
        goto label_3755bc;
    }
    ctx->pc = 0x3755B4u;
    SET_GPR_U32(ctx, 31, 0x3755BCu);
    ctx->pc = 0x3755B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3755B4u;
            // 0x3755b8: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755BCu; }
        if (ctx->pc != 0x3755BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755BCu; }
        if (ctx->pc != 0x3755BCu) { return; }
    }
    ctx->pc = 0x3755BCu;
label_3755bc:
    // 0x3755bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3755bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3755c0:
    // 0x3755c0: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_3755c4:
    if (ctx->pc == 0x3755C4u) {
        ctx->pc = 0x3755C8u;
        goto label_3755c8;
    }
    ctx->pc = 0x3755C0u;
    {
        const bool branch_taken_0x3755c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3755c0) {
            ctx->pc = 0x375648u;
            goto label_375648;
        }
    }
    ctx->pc = 0x3755C8u;
label_3755c8:
    // 0x3755c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3755c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3755cc:
    // 0x3755cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3755ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3755d0:
    // 0x3755d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3755d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3755d4:
    // 0x3755d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3755d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3755d8:
    // 0x3755d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3755d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3755dc:
    // 0x3755dc: 0xc040138  jal         func_1004E0
label_3755e0:
    if (ctx->pc == 0x3755E0u) {
        ctx->pc = 0x3755E0u;
            // 0x3755e0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3755E4u;
        goto label_3755e4;
    }
    ctx->pc = 0x3755DCu;
    SET_GPR_U32(ctx, 31, 0x3755E4u);
    ctx->pc = 0x3755E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3755DCu;
            // 0x3755e0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755E4u; }
        if (ctx->pc != 0x3755E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755E4u; }
        if (ctx->pc != 0x3755E4u) { return; }
    }
    ctx->pc = 0x3755E4u;
label_3755e4:
    // 0x3755e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3755e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3755e8:
    // 0x3755e8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x3755e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_3755ec:
    // 0x3755ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3755ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3755f0:
    // 0x3755f0: 0x24a558a0  addiu       $a1, $a1, 0x58A0
    ctx->pc = 0x3755f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22688));
label_3755f4:
    // 0x3755f4: 0x24c64d30  addiu       $a2, $a2, 0x4D30
    ctx->pc = 0x3755f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19760));
label_3755f8:
    // 0x3755f8: 0x240702c0  addiu       $a3, $zero, 0x2C0
    ctx->pc = 0x3755f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
label_3755fc:
    // 0x3755fc: 0xc040840  jal         func_102100
label_375600:
    if (ctx->pc == 0x375600u) {
        ctx->pc = 0x375600u;
            // 0x375600: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375604u;
        goto label_375604;
    }
    ctx->pc = 0x3755FCu;
    SET_GPR_U32(ctx, 31, 0x375604u);
    ctx->pc = 0x375600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3755FCu;
            // 0x375600: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375604u; }
        if (ctx->pc != 0x375604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375604u; }
        if (ctx->pc != 0x375604u) { return; }
    }
    ctx->pc = 0x375604u;
label_375604:
    // 0x375604: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x375604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_375608:
    // 0x375608: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37560c:
    // 0x37560c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x37560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_375610:
    // 0x375610: 0xc0dd624  jal         func_375890
label_375614:
    if (ctx->pc == 0x375614u) {
        ctx->pc = 0x375614u;
            // 0x375614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375618u;
        goto label_375618;
    }
    ctx->pc = 0x375610u;
    SET_GPR_U32(ctx, 31, 0x375618u);
    ctx->pc = 0x375614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375610u;
            // 0x375614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375890u;
    if (runtime->hasFunction(0x375890u)) {
        auto targetFn = runtime->lookupFunction(0x375890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375618u; }
        if (ctx->pc != 0x375618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00375890_0x375890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375618u; }
        if (ctx->pc != 0x375618u) { return; }
    }
    ctx->pc = 0x375618u;
label_375618:
    // 0x375618: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x375618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_37561c:
    // 0x37561c: 0xc0dd624  jal         func_375890
label_375620:
    if (ctx->pc == 0x375620u) {
        ctx->pc = 0x375620u;
            // 0x375620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375624u;
        goto label_375624;
    }
    ctx->pc = 0x37561Cu;
    SET_GPR_U32(ctx, 31, 0x375624u);
    ctx->pc = 0x375620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37561Cu;
            // 0x375620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375890u;
    if (runtime->hasFunction(0x375890u)) {
        auto targetFn = runtime->lookupFunction(0x375890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375624u; }
        if (ctx->pc != 0x375624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00375890_0x375890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375624u; }
        if (ctx->pc != 0x375624u) { return; }
    }
    ctx->pc = 0x375624u;
label_375624:
    // 0x375624: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x375624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375628:
    // 0x375628: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x375628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_37562c:
    // 0x37562c: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x37562cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_375630:
    // 0x375630: 0xc0dd61c  jal         func_375870
label_375634:
    if (ctx->pc == 0x375634u) {
        ctx->pc = 0x375634u;
            // 0x375634: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->pc = 0x375638u;
        goto label_375638;
    }
    ctx->pc = 0x375630u;
    SET_GPR_U32(ctx, 31, 0x375638u);
    ctx->pc = 0x375634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375630u;
            // 0x375634: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375870u;
    if (runtime->hasFunction(0x375870u)) {
        auto targetFn = runtime->lookupFunction(0x375870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375638u; }
        if (ctx->pc != 0x375638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00375870_0x375870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375638u; }
        if (ctx->pc != 0x375638u) { return; }
    }
    ctx->pc = 0x375638u;
label_375638:
    // 0x375638: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x375638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37563c:
    // 0x37563c: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x37563cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_375640:
    // 0x375640: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_375644:
    if (ctx->pc == 0x375644u) {
        ctx->pc = 0x375644u;
            // 0x375644: 0x269402c0  addiu       $s4, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->pc = 0x375648u;
        goto label_375648;
    }
    ctx->pc = 0x375640u;
    {
        const bool branch_taken_0x375640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375640u;
            // 0x375644: 0x269402c0  addiu       $s4, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375640) {
            ctx->pc = 0x375628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_375628;
        }
    }
    ctx->pc = 0x375648u;
label_375648:
    // 0x375648: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37564c:
    // 0x37564c: 0x24426f70  addiu       $v0, $v0, 0x6F70
    ctx->pc = 0x37564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
label_375650:
    // 0x375650: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x375650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_375654:
    // 0x375654: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x375654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_375658:
    // 0x375658: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37565c:
    // 0x37565c: 0x24426fa8  addiu       $v0, $v0, 0x6FA8
    ctx->pc = 0x37565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28584));
label_375660:
    // 0x375660: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x375660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_375664:
    // 0x375664: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x375664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_375668:
    // 0x375668: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x375668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_37566c:
    // 0x37566c: 0xc0a7a88  jal         func_29EA20
label_375670:
    if (ctx->pc == 0x375670u) {
        ctx->pc = 0x375670u;
            // 0x375670: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x375674u;
        goto label_375674;
    }
    ctx->pc = 0x37566Cu;
    SET_GPR_U32(ctx, 31, 0x375674u);
    ctx->pc = 0x375670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37566Cu;
            // 0x375670: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375674u; }
        if (ctx->pc != 0x375674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375674u; }
        if (ctx->pc != 0x375674u) { return; }
    }
    ctx->pc = 0x375674u;
label_375674:
    // 0x375674: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x375674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_375678:
    // 0x375678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x375678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37567c:
    // 0x37567c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_375680:
    if (ctx->pc == 0x375680u) {
        ctx->pc = 0x375680u;
            // 0x375680: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x375684u;
        goto label_375684;
    }
    ctx->pc = 0x37567Cu;
    {
        const bool branch_taken_0x37567c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x375680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37567Cu;
            // 0x375680: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37567c) {
            ctx->pc = 0x375698u;
            goto label_375698;
        }
    }
    ctx->pc = 0x375684u;
label_375684:
    // 0x375684: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x375684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_375688:
    // 0x375688: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37568c:
    // 0x37568c: 0xc0827ac  jal         func_209EB0
label_375690:
    if (ctx->pc == 0x375690u) {
        ctx->pc = 0x375694u;
        goto label_375694;
    }
    ctx->pc = 0x37568Cu;
    SET_GPR_U32(ctx, 31, 0x375694u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375694u; }
        if (ctx->pc != 0x375694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375694u; }
        if (ctx->pc != 0x375694u) { return; }
    }
    ctx->pc = 0x375694u;
label_375694:
    // 0x375694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x375694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375698:
    // 0x375698: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x375698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_37569c:
    // 0x37569c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3756a0:
    // 0x3756a0: 0x8c433fd0  lw          $v1, 0x3FD0($v0)
    ctx->pc = 0x3756a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16336)));
label_3756a4:
    // 0x3756a4: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x3756a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_3756a8:
    // 0x3756a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3756a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3756ac:
    // 0x3756ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3756acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3756b0:
    // 0x3756b0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3756b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3756b4:
    // 0x3756b4: 0x24700084  addiu       $s0, $v1, 0x84
    ctx->pc = 0x3756b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3756b8:
    // 0x3756b8: 0xc040140  jal         func_100500
label_3756bc:
    if (ctx->pc == 0x3756BCu) {
        ctx->pc = 0x3756BCu;
            // 0x3756bc: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3756C0u;
        goto label_3756c0;
    }
    ctx->pc = 0x3756B8u;
    SET_GPR_U32(ctx, 31, 0x3756C0u);
    ctx->pc = 0x3756BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3756B8u;
            // 0x3756bc: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3756C0u; }
        if (ctx->pc != 0x3756C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3756C0u; }
        if (ctx->pc != 0x3756C0u) { return; }
    }
    ctx->pc = 0x3756C0u;
label_3756c0:
    // 0x3756c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3756c4:
    if (ctx->pc == 0x3756C4u) {
        ctx->pc = 0x3756C4u;
            // 0x3756c4: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x3756C8u;
        goto label_3756c8;
    }
    ctx->pc = 0x3756C0u;
    {
        const bool branch_taken_0x3756c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3756c0) {
            ctx->pc = 0x3756C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3756C0u;
            // 0x3756c4: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3756E0u;
            goto label_3756e0;
        }
    }
    ctx->pc = 0x3756C8u;
label_3756c8:
    // 0x3756c8: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x3756c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3756cc:
    // 0x3756cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3756ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3756d0:
    // 0x3756d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3756d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3756d4:
    // 0x3756d4: 0xc0b4554  jal         func_2D1550
label_3756d8:
    if (ctx->pc == 0x3756D8u) {
        ctx->pc = 0x3756D8u;
            // 0x3756d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3756DCu;
        goto label_3756dc;
    }
    ctx->pc = 0x3756D4u;
    SET_GPR_U32(ctx, 31, 0x3756DCu);
    ctx->pc = 0x3756D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3756D4u;
            // 0x3756d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3756DCu; }
        if (ctx->pc != 0x3756DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3756DCu; }
        if (ctx->pc != 0x3756DCu) { return; }
    }
    ctx->pc = 0x3756DCu;
label_3756dc:
    // 0x3756dc: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x3756dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_3756e0:
    // 0x3756e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3756e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3756e4:
    // 0x3756e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3756e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3756e8:
    // 0x3756e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3756e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3756ec:
    // 0x3756ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3756ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3756f0:
    // 0x3756f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3756f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3756f4:
    // 0x3756f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3756f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3756f8:
    // 0x3756f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3756f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3756fc:
    // 0x3756fc: 0x3e00008  jr          $ra
label_375700:
    if (ctx->pc == 0x375700u) {
        ctx->pc = 0x375700u;
            // 0x375700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x375704u;
        goto label_375704;
    }
    ctx->pc = 0x3756FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3756FCu;
            // 0x375700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x375704u;
label_375704:
    // 0x375704: 0x0  nop
    ctx->pc = 0x375704u;
    // NOP
label_375708:
    // 0x375708: 0x0  nop
    ctx->pc = 0x375708u;
    // NOP
label_37570c:
    // 0x37570c: 0x0  nop
    ctx->pc = 0x37570cu;
    // NOP
label_375710:
    // 0x375710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x375710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_375714:
    // 0x375714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x375714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_375718:
    // 0x375718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x375718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37571c:
    // 0x37571c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37571cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_375720:
    // 0x375720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_375724:
    // 0x375724: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_375728:
    if (ctx->pc == 0x375728u) {
        ctx->pc = 0x375728u;
            // 0x375728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37572Cu;
        goto label_37572c;
    }
    ctx->pc = 0x375724u;
    {
        const bool branch_taken_0x375724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x375728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375724u;
            // 0x375728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375724) {
            ctx->pc = 0x375858u;
            goto label_375858;
        }
    }
    ctx->pc = 0x37572Cu;
label_37572c:
    // 0x37572c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_375730:
    // 0x375730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_375734:
    // 0x375734: 0x24636fd0  addiu       $v1, $v1, 0x6FD0
    ctx->pc = 0x375734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28624));
label_375738:
    // 0x375738: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x375738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_37573c:
    // 0x37573c: 0x24427008  addiu       $v0, $v0, 0x7008
    ctx->pc = 0x37573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
label_375740:
    // 0x375740: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x375740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_375744:
    // 0x375744: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x375744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_375748:
    // 0x375748: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x375748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_37574c:
    // 0x37574c: 0xc0407c0  jal         func_101F00
label_375750:
    if (ctx->pc == 0x375750u) {
        ctx->pc = 0x375750u;
            // 0x375750: 0x24a54d30  addiu       $a1, $a1, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
        ctx->pc = 0x375754u;
        goto label_375754;
    }
    ctx->pc = 0x37574Cu;
    SET_GPR_U32(ctx, 31, 0x375754u);
    ctx->pc = 0x375750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37574Cu;
            // 0x375750: 0x24a54d30  addiu       $a1, $a1, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375754u; }
        if (ctx->pc != 0x375754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375754u; }
        if (ctx->pc != 0x375754u) { return; }
    }
    ctx->pc = 0x375754u;
label_375754:
    // 0x375754: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x375754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_375758:
    // 0x375758: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_37575c:
    if (ctx->pc == 0x37575Cu) {
        ctx->pc = 0x37575Cu;
            // 0x37575c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x375760u;
        goto label_375760;
    }
    ctx->pc = 0x375758u;
    {
        const bool branch_taken_0x375758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x375758) {
            ctx->pc = 0x37575Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375758u;
            // 0x37575c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37576Cu;
            goto label_37576c;
        }
    }
    ctx->pc = 0x375760u;
label_375760:
    // 0x375760: 0xc07507c  jal         func_1D41F0
label_375764:
    if (ctx->pc == 0x375764u) {
        ctx->pc = 0x375764u;
            // 0x375764: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x375768u;
        goto label_375768;
    }
    ctx->pc = 0x375760u;
    SET_GPR_U32(ctx, 31, 0x375768u);
    ctx->pc = 0x375764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375760u;
            // 0x375764: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375768u; }
        if (ctx->pc != 0x375768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375768u; }
        if (ctx->pc != 0x375768u) { return; }
    }
    ctx->pc = 0x375768u;
label_375768:
    // 0x375768: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x375768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_37576c:
    // 0x37576c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_375770:
    if (ctx->pc == 0x375770u) {
        ctx->pc = 0x375770u;
            // 0x375770: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x375774u;
        goto label_375774;
    }
    ctx->pc = 0x37576Cu;
    {
        const bool branch_taken_0x37576c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37576c) {
            ctx->pc = 0x375770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37576Cu;
            // 0x375770: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37579Cu;
            goto label_37579c;
        }
    }
    ctx->pc = 0x375774u;
label_375774:
    // 0x375774: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_375778:
    if (ctx->pc == 0x375778u) {
        ctx->pc = 0x37577Cu;
        goto label_37577c;
    }
    ctx->pc = 0x375774u;
    {
        const bool branch_taken_0x375774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x375774) {
            ctx->pc = 0x375798u;
            goto label_375798;
        }
    }
    ctx->pc = 0x37577Cu;
label_37577c:
    // 0x37577c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_375780:
    if (ctx->pc == 0x375780u) {
        ctx->pc = 0x375784u;
        goto label_375784;
    }
    ctx->pc = 0x37577Cu;
    {
        const bool branch_taken_0x37577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37577c) {
            ctx->pc = 0x375798u;
            goto label_375798;
        }
    }
    ctx->pc = 0x375784u;
label_375784:
    // 0x375784: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x375784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_375788:
    // 0x375788: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_37578c:
    if (ctx->pc == 0x37578Cu) {
        ctx->pc = 0x375790u;
        goto label_375790;
    }
    ctx->pc = 0x375788u;
    {
        const bool branch_taken_0x375788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375788) {
            ctx->pc = 0x375798u;
            goto label_375798;
        }
    }
    ctx->pc = 0x375790u;
label_375790:
    // 0x375790: 0xc0400a8  jal         func_1002A0
label_375794:
    if (ctx->pc == 0x375794u) {
        ctx->pc = 0x375798u;
        goto label_375798;
    }
    ctx->pc = 0x375790u;
    SET_GPR_U32(ctx, 31, 0x375798u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375798u; }
        if (ctx->pc != 0x375798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375798u; }
        if (ctx->pc != 0x375798u) { return; }
    }
    ctx->pc = 0x375798u;
label_375798:
    // 0x375798: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x375798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_37579c:
    // 0x37579c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3757a0:
    if (ctx->pc == 0x3757A0u) {
        ctx->pc = 0x3757A0u;
            // 0x3757a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3757A4u;
        goto label_3757a4;
    }
    ctx->pc = 0x37579Cu;
    {
        const bool branch_taken_0x37579c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37579c) {
            ctx->pc = 0x3757A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37579Cu;
            // 0x3757a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3757CCu;
            goto label_3757cc;
        }
    }
    ctx->pc = 0x3757A4u;
label_3757a4:
    // 0x3757a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3757a8:
    if (ctx->pc == 0x3757A8u) {
        ctx->pc = 0x3757ACu;
        goto label_3757ac;
    }
    ctx->pc = 0x3757A4u;
    {
        const bool branch_taken_0x3757a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3757a4) {
            ctx->pc = 0x3757C8u;
            goto label_3757c8;
        }
    }
    ctx->pc = 0x3757ACu;
label_3757ac:
    // 0x3757ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3757b0:
    if (ctx->pc == 0x3757B0u) {
        ctx->pc = 0x3757B4u;
        goto label_3757b4;
    }
    ctx->pc = 0x3757ACu;
    {
        const bool branch_taken_0x3757ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3757ac) {
            ctx->pc = 0x3757C8u;
            goto label_3757c8;
        }
    }
    ctx->pc = 0x3757B4u;
label_3757b4:
    // 0x3757b4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3757b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3757b8:
    // 0x3757b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3757bc:
    if (ctx->pc == 0x3757BCu) {
        ctx->pc = 0x3757C0u;
        goto label_3757c0;
    }
    ctx->pc = 0x3757B8u;
    {
        const bool branch_taken_0x3757b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3757b8) {
            ctx->pc = 0x3757C8u;
            goto label_3757c8;
        }
    }
    ctx->pc = 0x3757C0u;
label_3757c0:
    // 0x3757c0: 0xc0400a8  jal         func_1002A0
label_3757c4:
    if (ctx->pc == 0x3757C4u) {
        ctx->pc = 0x3757C8u;
        goto label_3757c8;
    }
    ctx->pc = 0x3757C0u;
    SET_GPR_U32(ctx, 31, 0x3757C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3757C8u; }
        if (ctx->pc != 0x3757C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3757C8u; }
        if (ctx->pc != 0x3757C8u) { return; }
    }
    ctx->pc = 0x3757C8u;
label_3757c8:
    // 0x3757c8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3757c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3757cc:
    // 0x3757cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3757d0:
    if (ctx->pc == 0x3757D0u) {
        ctx->pc = 0x3757D4u;
        goto label_3757d4;
    }
    ctx->pc = 0x3757CCu;
    {
        const bool branch_taken_0x3757cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3757cc) {
            ctx->pc = 0x3757E8u;
            goto label_3757e8;
        }
    }
    ctx->pc = 0x3757D4u;
label_3757d4:
    // 0x3757d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3757d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3757d8:
    // 0x3757d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3757d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3757dc:
    // 0x3757dc: 0x24636fb8  addiu       $v1, $v1, 0x6FB8
    ctx->pc = 0x3757dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28600));
label_3757e0:
    // 0x3757e0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3757e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3757e4:
    // 0x3757e4: 0xac406070  sw          $zero, 0x6070($v0)
    ctx->pc = 0x3757e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24688), GPR_U32(ctx, 0));
label_3757e8:
    // 0x3757e8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3757ec:
    if (ctx->pc == 0x3757ECu) {
        ctx->pc = 0x3757ECu;
            // 0x3757ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3757F0u;
        goto label_3757f0;
    }
    ctx->pc = 0x3757E8u;
    {
        const bool branch_taken_0x3757e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3757e8) {
            ctx->pc = 0x3757ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3757E8u;
            // 0x3757ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375844u;
            goto label_375844;
        }
    }
    ctx->pc = 0x3757F0u;
label_3757f0:
    // 0x3757f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3757f4:
    // 0x3757f4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3757f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3757f8:
    // 0x3757f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3757f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3757fc:
    // 0x3757fc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3757fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_375800:
    // 0x375800: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_375804:
    if (ctx->pc == 0x375804u) {
        ctx->pc = 0x375804u;
            // 0x375804: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x375808u;
        goto label_375808;
    }
    ctx->pc = 0x375800u;
    {
        const bool branch_taken_0x375800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375800) {
            ctx->pc = 0x375804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375800u;
            // 0x375804: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37581Cu;
            goto label_37581c;
        }
    }
    ctx->pc = 0x375808u;
label_375808:
    // 0x375808: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x375808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37580c:
    // 0x37580c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37580cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_375810:
    // 0x375810: 0x320f809  jalr        $t9
label_375814:
    if (ctx->pc == 0x375814u) {
        ctx->pc = 0x375814u;
            // 0x375814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x375818u;
        goto label_375818;
    }
    ctx->pc = 0x375810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375818u);
        ctx->pc = 0x375814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375810u;
            // 0x375814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x375818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375818u; }
            if (ctx->pc != 0x375818u) { return; }
        }
        }
    }
    ctx->pc = 0x375818u;
label_375818:
    // 0x375818: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x375818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_37581c:
    // 0x37581c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_375820:
    if (ctx->pc == 0x375820u) {
        ctx->pc = 0x375820u;
            // 0x375820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375824u;
        goto label_375824;
    }
    ctx->pc = 0x37581Cu;
    {
        const bool branch_taken_0x37581c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37581c) {
            ctx->pc = 0x375820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37581Cu;
            // 0x375820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375838u;
            goto label_375838;
        }
    }
    ctx->pc = 0x375824u;
label_375824:
    // 0x375824: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x375824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_375828:
    // 0x375828: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x375828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37582c:
    // 0x37582c: 0x320f809  jalr        $t9
label_375830:
    if (ctx->pc == 0x375830u) {
        ctx->pc = 0x375830u;
            // 0x375830: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x375834u;
        goto label_375834;
    }
    ctx->pc = 0x37582Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375834u);
        ctx->pc = 0x375830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37582Cu;
            // 0x375830: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x375834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375834u; }
            if (ctx->pc != 0x375834u) { return; }
        }
        }
    }
    ctx->pc = 0x375834u;
label_375834:
    // 0x375834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_375838:
    // 0x375838: 0xc075bf8  jal         func_1D6FE0
label_37583c:
    if (ctx->pc == 0x37583Cu) {
        ctx->pc = 0x37583Cu;
            // 0x37583c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375840u;
        goto label_375840;
    }
    ctx->pc = 0x375838u;
    SET_GPR_U32(ctx, 31, 0x375840u);
    ctx->pc = 0x37583Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375838u;
            // 0x37583c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375840u; }
        if (ctx->pc != 0x375840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375840u; }
        if (ctx->pc != 0x375840u) { return; }
    }
    ctx->pc = 0x375840u;
label_375840:
    // 0x375840: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x375840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_375844:
    // 0x375844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x375844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_375848:
    // 0x375848: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37584c:
    if (ctx->pc == 0x37584Cu) {
        ctx->pc = 0x37584Cu;
            // 0x37584c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375850u;
        goto label_375850;
    }
    ctx->pc = 0x375848u;
    {
        const bool branch_taken_0x375848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x375848) {
            ctx->pc = 0x37584Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375848u;
            // 0x37584c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37585Cu;
            goto label_37585c;
        }
    }
    ctx->pc = 0x375850u;
label_375850:
    // 0x375850: 0xc0400a8  jal         func_1002A0
label_375854:
    if (ctx->pc == 0x375854u) {
        ctx->pc = 0x375854u;
            // 0x375854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375858u;
        goto label_375858;
    }
    ctx->pc = 0x375850u;
    SET_GPR_U32(ctx, 31, 0x375858u);
    ctx->pc = 0x375854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375850u;
            // 0x375854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375858u; }
        if (ctx->pc != 0x375858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375858u; }
        if (ctx->pc != 0x375858u) { return; }
    }
    ctx->pc = 0x375858u;
label_375858:
    // 0x375858: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x375858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37585c:
    // 0x37585c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37585cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_375860:
    // 0x375860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x375860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_375864:
    // 0x375864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_375868:
    // 0x375868: 0x3e00008  jr          $ra
label_37586c:
    if (ctx->pc == 0x37586Cu) {
        ctx->pc = 0x37586Cu;
            // 0x37586c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x375870u;
        goto label_fallthrough_0x375868;
    }
    ctx->pc = 0x375868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375868u;
            // 0x37586c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x375868:
    ctx->pc = 0x375870u;
}
