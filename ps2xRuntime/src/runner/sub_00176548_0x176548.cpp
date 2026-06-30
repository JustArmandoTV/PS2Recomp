#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176548
// Address: 0x176548 - 0x1768e0
void sub_00176548_0x176548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176548_0x176548");
#endif

    switch (ctx->pc) {
        case 0x176548u: goto label_176548;
        case 0x17654cu: goto label_17654c;
        case 0x176550u: goto label_176550;
        case 0x176554u: goto label_176554;
        case 0x176558u: goto label_176558;
        case 0x17655cu: goto label_17655c;
        case 0x176560u: goto label_176560;
        case 0x176564u: goto label_176564;
        case 0x176568u: goto label_176568;
        case 0x17656cu: goto label_17656c;
        case 0x176570u: goto label_176570;
        case 0x176574u: goto label_176574;
        case 0x176578u: goto label_176578;
        case 0x17657cu: goto label_17657c;
        case 0x176580u: goto label_176580;
        case 0x176584u: goto label_176584;
        case 0x176588u: goto label_176588;
        case 0x17658cu: goto label_17658c;
        case 0x176590u: goto label_176590;
        case 0x176594u: goto label_176594;
        case 0x176598u: goto label_176598;
        case 0x17659cu: goto label_17659c;
        case 0x1765a0u: goto label_1765a0;
        case 0x1765a4u: goto label_1765a4;
        case 0x1765a8u: goto label_1765a8;
        case 0x1765acu: goto label_1765ac;
        case 0x1765b0u: goto label_1765b0;
        case 0x1765b4u: goto label_1765b4;
        case 0x1765b8u: goto label_1765b8;
        case 0x1765bcu: goto label_1765bc;
        case 0x1765c0u: goto label_1765c0;
        case 0x1765c4u: goto label_1765c4;
        case 0x1765c8u: goto label_1765c8;
        case 0x1765ccu: goto label_1765cc;
        case 0x1765d0u: goto label_1765d0;
        case 0x1765d4u: goto label_1765d4;
        case 0x1765d8u: goto label_1765d8;
        case 0x1765dcu: goto label_1765dc;
        case 0x1765e0u: goto label_1765e0;
        case 0x1765e4u: goto label_1765e4;
        case 0x1765e8u: goto label_1765e8;
        case 0x1765ecu: goto label_1765ec;
        case 0x1765f0u: goto label_1765f0;
        case 0x1765f4u: goto label_1765f4;
        case 0x1765f8u: goto label_1765f8;
        case 0x1765fcu: goto label_1765fc;
        case 0x176600u: goto label_176600;
        case 0x176604u: goto label_176604;
        case 0x176608u: goto label_176608;
        case 0x17660cu: goto label_17660c;
        case 0x176610u: goto label_176610;
        case 0x176614u: goto label_176614;
        case 0x176618u: goto label_176618;
        case 0x17661cu: goto label_17661c;
        case 0x176620u: goto label_176620;
        case 0x176624u: goto label_176624;
        case 0x176628u: goto label_176628;
        case 0x17662cu: goto label_17662c;
        case 0x176630u: goto label_176630;
        case 0x176634u: goto label_176634;
        case 0x176638u: goto label_176638;
        case 0x17663cu: goto label_17663c;
        case 0x176640u: goto label_176640;
        case 0x176644u: goto label_176644;
        case 0x176648u: goto label_176648;
        case 0x17664cu: goto label_17664c;
        case 0x176650u: goto label_176650;
        case 0x176654u: goto label_176654;
        case 0x176658u: goto label_176658;
        case 0x17665cu: goto label_17665c;
        case 0x176660u: goto label_176660;
        case 0x176664u: goto label_176664;
        case 0x176668u: goto label_176668;
        case 0x17666cu: goto label_17666c;
        case 0x176670u: goto label_176670;
        case 0x176674u: goto label_176674;
        case 0x176678u: goto label_176678;
        case 0x17667cu: goto label_17667c;
        case 0x176680u: goto label_176680;
        case 0x176684u: goto label_176684;
        case 0x176688u: goto label_176688;
        case 0x17668cu: goto label_17668c;
        case 0x176690u: goto label_176690;
        case 0x176694u: goto label_176694;
        case 0x176698u: goto label_176698;
        case 0x17669cu: goto label_17669c;
        case 0x1766a0u: goto label_1766a0;
        case 0x1766a4u: goto label_1766a4;
        case 0x1766a8u: goto label_1766a8;
        case 0x1766acu: goto label_1766ac;
        case 0x1766b0u: goto label_1766b0;
        case 0x1766b4u: goto label_1766b4;
        case 0x1766b8u: goto label_1766b8;
        case 0x1766bcu: goto label_1766bc;
        case 0x1766c0u: goto label_1766c0;
        case 0x1766c4u: goto label_1766c4;
        case 0x1766c8u: goto label_1766c8;
        case 0x1766ccu: goto label_1766cc;
        case 0x1766d0u: goto label_1766d0;
        case 0x1766d4u: goto label_1766d4;
        case 0x1766d8u: goto label_1766d8;
        case 0x1766dcu: goto label_1766dc;
        case 0x1766e0u: goto label_1766e0;
        case 0x1766e4u: goto label_1766e4;
        case 0x1766e8u: goto label_1766e8;
        case 0x1766ecu: goto label_1766ec;
        case 0x1766f0u: goto label_1766f0;
        case 0x1766f4u: goto label_1766f4;
        case 0x1766f8u: goto label_1766f8;
        case 0x1766fcu: goto label_1766fc;
        case 0x176700u: goto label_176700;
        case 0x176704u: goto label_176704;
        case 0x176708u: goto label_176708;
        case 0x17670cu: goto label_17670c;
        case 0x176710u: goto label_176710;
        case 0x176714u: goto label_176714;
        case 0x176718u: goto label_176718;
        case 0x17671cu: goto label_17671c;
        case 0x176720u: goto label_176720;
        case 0x176724u: goto label_176724;
        case 0x176728u: goto label_176728;
        case 0x17672cu: goto label_17672c;
        case 0x176730u: goto label_176730;
        case 0x176734u: goto label_176734;
        case 0x176738u: goto label_176738;
        case 0x17673cu: goto label_17673c;
        case 0x176740u: goto label_176740;
        case 0x176744u: goto label_176744;
        case 0x176748u: goto label_176748;
        case 0x17674cu: goto label_17674c;
        case 0x176750u: goto label_176750;
        case 0x176754u: goto label_176754;
        case 0x176758u: goto label_176758;
        case 0x17675cu: goto label_17675c;
        case 0x176760u: goto label_176760;
        case 0x176764u: goto label_176764;
        case 0x176768u: goto label_176768;
        case 0x17676cu: goto label_17676c;
        case 0x176770u: goto label_176770;
        case 0x176774u: goto label_176774;
        case 0x176778u: goto label_176778;
        case 0x17677cu: goto label_17677c;
        case 0x176780u: goto label_176780;
        case 0x176784u: goto label_176784;
        case 0x176788u: goto label_176788;
        case 0x17678cu: goto label_17678c;
        case 0x176790u: goto label_176790;
        case 0x176794u: goto label_176794;
        case 0x176798u: goto label_176798;
        case 0x17679cu: goto label_17679c;
        case 0x1767a0u: goto label_1767a0;
        case 0x1767a4u: goto label_1767a4;
        case 0x1767a8u: goto label_1767a8;
        case 0x1767acu: goto label_1767ac;
        case 0x1767b0u: goto label_1767b0;
        case 0x1767b4u: goto label_1767b4;
        case 0x1767b8u: goto label_1767b8;
        case 0x1767bcu: goto label_1767bc;
        case 0x1767c0u: goto label_1767c0;
        case 0x1767c4u: goto label_1767c4;
        case 0x1767c8u: goto label_1767c8;
        case 0x1767ccu: goto label_1767cc;
        case 0x1767d0u: goto label_1767d0;
        case 0x1767d4u: goto label_1767d4;
        case 0x1767d8u: goto label_1767d8;
        case 0x1767dcu: goto label_1767dc;
        case 0x1767e0u: goto label_1767e0;
        case 0x1767e4u: goto label_1767e4;
        case 0x1767e8u: goto label_1767e8;
        case 0x1767ecu: goto label_1767ec;
        case 0x1767f0u: goto label_1767f0;
        case 0x1767f4u: goto label_1767f4;
        case 0x1767f8u: goto label_1767f8;
        case 0x1767fcu: goto label_1767fc;
        case 0x176800u: goto label_176800;
        case 0x176804u: goto label_176804;
        case 0x176808u: goto label_176808;
        case 0x17680cu: goto label_17680c;
        case 0x176810u: goto label_176810;
        case 0x176814u: goto label_176814;
        case 0x176818u: goto label_176818;
        case 0x17681cu: goto label_17681c;
        case 0x176820u: goto label_176820;
        case 0x176824u: goto label_176824;
        case 0x176828u: goto label_176828;
        case 0x17682cu: goto label_17682c;
        case 0x176830u: goto label_176830;
        case 0x176834u: goto label_176834;
        case 0x176838u: goto label_176838;
        case 0x17683cu: goto label_17683c;
        case 0x176840u: goto label_176840;
        case 0x176844u: goto label_176844;
        case 0x176848u: goto label_176848;
        case 0x17684cu: goto label_17684c;
        case 0x176850u: goto label_176850;
        case 0x176854u: goto label_176854;
        case 0x176858u: goto label_176858;
        case 0x17685cu: goto label_17685c;
        case 0x176860u: goto label_176860;
        case 0x176864u: goto label_176864;
        case 0x176868u: goto label_176868;
        case 0x17686cu: goto label_17686c;
        case 0x176870u: goto label_176870;
        case 0x176874u: goto label_176874;
        case 0x176878u: goto label_176878;
        case 0x17687cu: goto label_17687c;
        case 0x176880u: goto label_176880;
        case 0x176884u: goto label_176884;
        case 0x176888u: goto label_176888;
        case 0x17688cu: goto label_17688c;
        case 0x176890u: goto label_176890;
        case 0x176894u: goto label_176894;
        case 0x176898u: goto label_176898;
        case 0x17689cu: goto label_17689c;
        case 0x1768a0u: goto label_1768a0;
        case 0x1768a4u: goto label_1768a4;
        case 0x1768a8u: goto label_1768a8;
        case 0x1768acu: goto label_1768ac;
        case 0x1768b0u: goto label_1768b0;
        case 0x1768b4u: goto label_1768b4;
        case 0x1768b8u: goto label_1768b8;
        case 0x1768bcu: goto label_1768bc;
        case 0x1768c0u: goto label_1768c0;
        case 0x1768c4u: goto label_1768c4;
        case 0x1768c8u: goto label_1768c8;
        case 0x1768ccu: goto label_1768cc;
        case 0x1768d0u: goto label_1768d0;
        case 0x1768d4u: goto label_1768d4;
        case 0x1768d8u: goto label_1768d8;
        case 0x1768dcu: goto label_1768dc;
        default: break;
    }

    ctx->pc = 0x176548u;

label_176548:
    // 0x176548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17654c:
    // 0x17654c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176550:
    // 0x176550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176554:
    // 0x176554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_176558:
    // 0x176558: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x176558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17655c:
    // 0x17655c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_176560:
    // 0x176560: 0xc05d872  jal         func_1761C8
label_176564:
    if (ctx->pc == 0x176564u) {
        ctx->pc = 0x176564u;
            // 0x176564: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176568u;
        goto label_176568;
    }
    ctx->pc = 0x176560u;
    SET_GPR_U32(ctx, 31, 0x176568u);
    ctx->pc = 0x176564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176560u;
            // 0x176564: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1761C8u;
    if (runtime->hasFunction(0x1761C8u)) {
        auto targetFn = runtime->lookupFunction(0x1761C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176568u; }
        if (ctx->pc != 0x176568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001761C8_0x1761c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176568u; }
        if (ctx->pc != 0x176568u) { return; }
    }
    ctx->pc = 0x176568u;
label_176568:
    // 0x176568: 0xc05d772  jal         func_175DC8
label_17656c:
    if (ctx->pc == 0x17656Cu) {
        ctx->pc = 0x17656Cu;
            // 0x17656c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176570u;
        goto label_176570;
    }
    ctx->pc = 0x176568u;
    SET_GPR_U32(ctx, 31, 0x176570u);
    ctx->pc = 0x17656Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176568u;
            // 0x17656c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DC8u;
    if (runtime->hasFunction(0x175DC8u)) {
        auto targetFn = runtime->lookupFunction(0x175DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176570u; }
        if (ctx->pc != 0x176570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175DC8_0x175dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176570u; }
        if (ctx->pc != 0x176570u) { return; }
    }
    ctx->pc = 0x176570u;
label_176570:
    // 0x176570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x176570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176574:
    // 0x176574: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_176578:
    if (ctx->pc == 0x176578u) {
        ctx->pc = 0x176578u;
            // 0x176578: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x17657Cu;
        goto label_17657c;
    }
    ctx->pc = 0x176574u;
    {
        const bool branch_taken_0x176574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176574u;
            // 0x176578: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176574) {
            ctx->pc = 0x1765A8u;
            goto label_1765a8;
        }
    }
    ctx->pc = 0x17657Cu;
label_17657c:
    // 0x17657c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x17657cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_176580:
    // 0x176580: 0xc05ba8e  jal         func_16EA38
label_176584:
    if (ctx->pc == 0x176584u) {
        ctx->pc = 0x176584u;
            // 0x176584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176588u;
        goto label_176588;
    }
    ctx->pc = 0x176580u;
    SET_GPR_U32(ctx, 31, 0x176588u);
    ctx->pc = 0x176584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176580u;
            // 0x176584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EA38u;
    if (runtime->hasFunction(0x16EA38u)) {
        auto targetFn = runtime->lookupFunction(0x16EA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176588u; }
        if (ctx->pc != 0x176588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA38_0x16ea38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176588u; }
        if (ctx->pc != 0x176588u) { return; }
    }
    ctx->pc = 0x176588u;
label_176588:
    // 0x176588: 0x50530008  beql        $v0, $s3, . + 4 + (0x8 << 2)
label_17658c:
    if (ctx->pc == 0x17658Cu) {
        ctx->pc = 0x17658Cu;
            // 0x17658c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x176590u;
        goto label_176590;
    }
    ctx->pc = 0x176588u;
    {
        const bool branch_taken_0x176588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x176588) {
            ctx->pc = 0x17658Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176588u;
            // 0x17658c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176590u;
label_176590:
    // 0x176590: 0xc05d2aa  jal         func_174AA8
label_176594:
    if (ctx->pc == 0x176594u) {
        ctx->pc = 0x176598u;
        goto label_176598;
    }
    ctx->pc = 0x176590u;
    SET_GPR_U32(ctx, 31, 0x176598u);
    ctx->pc = 0x174AA8u;
    if (runtime->hasFunction(0x174AA8u)) {
        auto targetFn = runtime->lookupFunction(0x174AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176598u; }
        if (ctx->pc != 0x176598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174AA8_0x174aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176598u; }
        if (ctx->pc != 0x176598u) { return; }
    }
    ctx->pc = 0x176598u;
label_176598:
    // 0x176598: 0xc05ccc0  jal         func_173300
label_17659c:
    if (ctx->pc == 0x17659Cu) {
        ctx->pc = 0x17659Cu;
            // 0x17659c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1765A0u;
        goto label_1765a0;
    }
    ctx->pc = 0x176598u;
    SET_GPR_U32(ctx, 31, 0x1765A0u);
    ctx->pc = 0x17659Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176598u;
            // 0x17659c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765A0u; }
        if (ctx->pc != 0x1765A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765A0u; }
        if (ctx->pc != 0x1765A0u) { return; }
    }
    ctx->pc = 0x1765A0u;
label_1765a0:
    // 0x1765a0: 0x1452fff7  bne         $v0, $s2, . + 4 + (-0x9 << 2)
label_1765a4:
    if (ctx->pc == 0x1765A4u) {
        ctx->pc = 0x1765A8u;
        goto label_1765a8;
    }
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x176580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176580;
        }
    }
    ctx->pc = 0x1765A8u;
label_1765a8:
    // 0x1765a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1765a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1765ac:
    // 0x1765ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1765acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1765b0:
    // 0x1765b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1765b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1765b4:
    // 0x1765b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1765b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1765b8:
    // 0x1765b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1765b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1765bc:
    // 0x1765bc: 0x3e00008  jr          $ra
label_1765c0:
    if (ctx->pc == 0x1765C0u) {
        ctx->pc = 0x1765C0u;
            // 0x1765c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1765C4u;
        goto label_1765c4;
    }
    ctx->pc = 0x1765BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1765C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1765BCu;
            // 0x1765c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1765C4u;
label_1765c4:
    // 0x1765c4: 0x0  nop
    ctx->pc = 0x1765c4u;
    // NOP
label_1765c8:
    // 0x1765c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1765c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1765cc:
    // 0x1765cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1765ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1765d0:
    // 0x1765d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1765d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1765d4:
    // 0x1765d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1765d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1765d8:
    // 0x1765d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1765d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1765dc:
    // 0x1765dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1765dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1765e0:
    // 0x1765e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1765e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1765e4:
    // 0x1765e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1765e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1765e8:
    // 0x1765e8: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1765e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1765ec:
    // 0x1765ec: 0xc05c07c  jal         func_1701F0
label_1765f0:
    if (ctx->pc == 0x1765F0u) {
        ctx->pc = 0x1765F0u;
            // 0x1765f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1765F4u;
        goto label_1765f4;
    }
    ctx->pc = 0x1765ECu;
    SET_GPR_U32(ctx, 31, 0x1765F4u);
    ctx->pc = 0x1765F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765ECu;
            // 0x1765f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701F0u;
    if (runtime->hasFunction(0x1701F0u)) {
        auto targetFn = runtime->lookupFunction(0x1701F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765F4u; }
        if (ctx->pc != 0x1765F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701F0_0x1701f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765F4u; }
        if (ctx->pc != 0x1765F4u) { return; }
    }
    ctx->pc = 0x1765F4u;
label_1765f4:
    // 0x1765f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1765f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1765f8:
    // 0x1765f8: 0xc05c082  jal         func_170208
label_1765fc:
    if (ctx->pc == 0x1765FCu) {
        ctx->pc = 0x1765FCu;
            // 0x1765fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176600u;
        goto label_176600;
    }
    ctx->pc = 0x1765F8u;
    SET_GPR_U32(ctx, 31, 0x176600u);
    ctx->pc = 0x1765FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765F8u;
            // 0x1765fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170208u;
    if (runtime->hasFunction(0x170208u)) {
        auto targetFn = runtime->lookupFunction(0x170208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176600u; }
        if (ctx->pc != 0x176600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170208_0x170208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176600u; }
        if (ctx->pc != 0x176600u) { return; }
    }
    ctx->pc = 0x176600u;
label_176600:
    // 0x176600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176604:
    // 0x176604: 0xc05c08e  jal         func_170238
label_176608:
    if (ctx->pc == 0x176608u) {
        ctx->pc = 0x176608u;
            // 0x176608: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17660Cu;
        goto label_17660c;
    }
    ctx->pc = 0x176604u;
    SET_GPR_U32(ctx, 31, 0x17660Cu);
    ctx->pc = 0x176608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176604u;
            // 0x176608: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170238u;
    if (runtime->hasFunction(0x170238u)) {
        auto targetFn = runtime->lookupFunction(0x170238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17660Cu; }
        if (ctx->pc != 0x17660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170238_0x170238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17660Cu; }
        if (ctx->pc != 0x17660Cu) { return; }
    }
    ctx->pc = 0x17660Cu;
label_17660c:
    // 0x17660c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176610:
    // 0x176610: 0xc05c0f0  jal         func_1703C0
label_176614:
    if (ctx->pc == 0x176614u) {
        ctx->pc = 0x176614u;
            // 0x176614: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176618u;
        goto label_176618;
    }
    ctx->pc = 0x176610u;
    SET_GPR_U32(ctx, 31, 0x176618u);
    ctx->pc = 0x176614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176610u;
            // 0x176614: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1703C0u;
    if (runtime->hasFunction(0x1703C0u)) {
        auto targetFn = runtime->lookupFunction(0x1703C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176618u; }
        if (ctx->pc != 0x176618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001703C0_0x1703c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176618u; }
        if (ctx->pc != 0x176618u) { return; }
    }
    ctx->pc = 0x176618u;
label_176618:
    // 0x176618: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x176618u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_17661c:
    // 0x17661c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176620:
    // 0x176620: 0xc05c038  jal         func_1700E0
label_176624:
    if (ctx->pc == 0x176624u) {
        ctx->pc = 0x176624u;
            // 0x176624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176628u;
        goto label_176628;
    }
    ctx->pc = 0x176620u;
    SET_GPR_U32(ctx, 31, 0x176628u);
    ctx->pc = 0x176624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176620u;
            // 0x176624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700E0u;
    if (runtime->hasFunction(0x1700E0u)) {
        auto targetFn = runtime->lookupFunction(0x1700E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176628u; }
        if (ctx->pc != 0x176628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700E0_0x1700e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176628u; }
        if (ctx->pc != 0x176628u) { return; }
    }
    ctx->pc = 0x176628u;
label_176628:
    // 0x176628: 0xae500090  sw          $s0, 0x90($s2)
    ctx->pc = 0x176628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
label_17662c:
    // 0x17662c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176630:
    // 0x176630: 0xc05c034  jal         func_1700D0
label_176634:
    if (ctx->pc == 0x176634u) {
        ctx->pc = 0x176634u;
            // 0x176634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176638u;
        goto label_176638;
    }
    ctx->pc = 0x176630u;
    SET_GPR_U32(ctx, 31, 0x176638u);
    ctx->pc = 0x176634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176630u;
            // 0x176634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176638u; }
        if (ctx->pc != 0x176638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176638u; }
        if (ctx->pc != 0x176638u) { return; }
    }
    ctx->pc = 0x176638u;
label_176638:
    // 0x176638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17663c:
    // 0x17663c: 0xc05c03c  jal         func_1700F0
label_176640:
    if (ctx->pc == 0x176640u) {
        ctx->pc = 0x176640u;
            // 0x176640: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176644u;
        goto label_176644;
    }
    ctx->pc = 0x17663Cu;
    SET_GPR_U32(ctx, 31, 0x176644u);
    ctx->pc = 0x176640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17663Cu;
            // 0x176640: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700F0u;
    if (runtime->hasFunction(0x1700F0u)) {
        auto targetFn = runtime->lookupFunction(0x1700F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176644u; }
        if (ctx->pc != 0x176644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700F0_0x1700f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176644u; }
        if (ctx->pc != 0x176644u) { return; }
    }
    ctx->pc = 0x176644u;
label_176644:
    // 0x176644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176648:
    // 0x176648: 0xc05bfe8  jal         func_16FFA0
label_17664c:
    if (ctx->pc == 0x17664Cu) {
        ctx->pc = 0x17664Cu;
            // 0x17664c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176650u;
        goto label_176650;
    }
    ctx->pc = 0x176648u;
    SET_GPR_U32(ctx, 31, 0x176650u);
    ctx->pc = 0x17664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176648u;
            // 0x17664c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFA0u;
    if (runtime->hasFunction(0x16FFA0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176650u; }
        if (ctx->pc != 0x176650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FFA0_0x16ffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176650u; }
        if (ctx->pc != 0x176650u) { return; }
    }
    ctx->pc = 0x176650u;
label_176650:
    // 0x176650: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x176650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
label_176654:
    // 0x176654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176658:
    // 0x176658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17665c:
    // 0x17665c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17665cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176660:
    // 0x176660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176664:
    // 0x176664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176668:
    // 0x176668: 0x24a56680  addiu       $a1, $a1, 0x6680
    ctx->pc = 0x176668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26240));
label_17666c:
    // 0x17666c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17666cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_176670:
    // 0x176670: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x176670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_176674:
    // 0x176674: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x176674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_176678:
    // 0x176678: 0x805c030  j           func_1700C0
label_17667c:
    if (ctx->pc == 0x17667Cu) {
        ctx->pc = 0x17667Cu;
            // 0x17667c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x176680u;
        goto label_176680;
    }
    ctx->pc = 0x176678u;
    ctx->pc = 0x17667Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176678u;
            // 0x17667c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700C0u;
    if (runtime->hasFunction(0x1700C0u)) {
        auto targetFn = runtime->lookupFunction(0x1700C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001700C0_0x1700c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176680u;
label_176680:
    // 0x176680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x176680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_176684:
    // 0x176684: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x176684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_176688:
    // 0x176688: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17668c:
    // 0x17668c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_176690:
    // 0x176690: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x176690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_176694:
    // 0x176694: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x176694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_176698:
    // 0x176698: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x176698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_17669c:
    // 0x17669c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1766a0:
    // 0x1766a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1766a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1766a4:
    // 0x1766a4: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1766a8:
    // 0x1766a8: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1766ac:
    // 0x1766ac: 0xc05c07c  jal         func_1701F0
label_1766b0:
    if (ctx->pc == 0x1766B0u) {
        ctx->pc = 0x1766B0u;
            // 0x1766b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1766B4u;
        goto label_1766b4;
    }
    ctx->pc = 0x1766ACu;
    SET_GPR_U32(ctx, 31, 0x1766B4u);
    ctx->pc = 0x1766B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766ACu;
            // 0x1766b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701F0u;
    if (runtime->hasFunction(0x1701F0u)) {
        auto targetFn = runtime->lookupFunction(0x1701F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766B4u; }
        if (ctx->pc != 0x1766B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701F0_0x1701f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766B4u; }
        if (ctx->pc != 0x1766B4u) { return; }
    }
    ctx->pc = 0x1766B4u;
label_1766b4:
    // 0x1766b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1766b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1766b8:
    // 0x1766b8: 0xc05c082  jal         func_170208
label_1766bc:
    if (ctx->pc == 0x1766BCu) {
        ctx->pc = 0x1766BCu;
            // 0x1766bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1766C0u;
        goto label_1766c0;
    }
    ctx->pc = 0x1766B8u;
    SET_GPR_U32(ctx, 31, 0x1766C0u);
    ctx->pc = 0x1766BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766B8u;
            // 0x1766bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170208u;
    if (runtime->hasFunction(0x170208u)) {
        auto targetFn = runtime->lookupFunction(0x170208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766C0u; }
        if (ctx->pc != 0x1766C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170208_0x170208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766C0u; }
        if (ctx->pc != 0x1766C0u) { return; }
    }
    ctx->pc = 0x1766C0u;
label_1766c0:
    // 0x1766c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1766c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1766c4:
    // 0x1766c4: 0xc05c08e  jal         func_170238
label_1766c8:
    if (ctx->pc == 0x1766C8u) {
        ctx->pc = 0x1766C8u;
            // 0x1766c8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1766CCu;
        goto label_1766cc;
    }
    ctx->pc = 0x1766C4u;
    SET_GPR_U32(ctx, 31, 0x1766CCu);
    ctx->pc = 0x1766C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766C4u;
            // 0x1766c8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170238u;
    if (runtime->hasFunction(0x170238u)) {
        auto targetFn = runtime->lookupFunction(0x170238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766CCu; }
        if (ctx->pc != 0x1766CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170238_0x170238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766CCu; }
        if (ctx->pc != 0x1766CCu) { return; }
    }
    ctx->pc = 0x1766CCu;
label_1766cc:
    // 0x1766cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1766ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1766d0:
    // 0x1766d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1766d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1766d4:
    // 0x1766d4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1766d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1766d8:
    // 0x1766d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1766dc:
    // 0x1766dc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1766e0:
    // 0x1766e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1766e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1766e4:
    // 0x1766e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1766e8:
    if (ctx->pc == 0x1766E8u) {
        ctx->pc = 0x1766E8u;
            // 0x1766e8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1766ECu;
        goto label_1766ec;
    }
    ctx->pc = 0x1766E4u;
    {
        const bool branch_taken_0x1766e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1766E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1766E4u;
            // 0x1766e8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766e4) {
            ctx->pc = 0x176710u;
            goto label_176710;
        }
    }
    ctx->pc = 0x1766ECu;
label_1766ec:
    // 0x1766ec: 0x8222006c  lb          $v0, 0x6C($s1)
    ctx->pc = 0x1766ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_1766f0:
    // 0x1766f0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1766f4:
    if (ctx->pc == 0x1766F4u) {
        ctx->pc = 0x1766F4u;
            // 0x1766f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1766F8u;
        goto label_1766f8;
    }
    ctx->pc = 0x1766F0u;
    {
        const bool branch_taken_0x1766f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1766f0) {
            ctx->pc = 0x1766F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1766F0u;
            // 0x1766f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176714u;
            goto label_176714;
        }
    }
    ctx->pc = 0x1766F8u;
label_1766f8:
    // 0x1766f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1766f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1766fc:
    // 0x1766fc: 0xc05c034  jal         func_1700D0
label_176700:
    if (ctx->pc == 0x176700u) {
        ctx->pc = 0x176700u;
            // 0x176700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x176704u;
        goto label_176704;
    }
    ctx->pc = 0x1766FCu;
    SET_GPR_U32(ctx, 31, 0x176704u);
    ctx->pc = 0x176700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766FCu;
            // 0x176700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176704u; }
        if (ctx->pc != 0x176704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176704u; }
        if (ctx->pc != 0x176704u) { return; }
    }
    ctx->pc = 0x176704u;
label_176704:
    // 0x176704: 0x1000003c  b           . + 4 + (0x3C << 2)
label_176708:
    if (ctx->pc == 0x176708u) {
        ctx->pc = 0x176708u;
            // 0x176708: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x17670Cu;
        goto label_17670c;
    }
    ctx->pc = 0x176704u;
    {
        const bool branch_taken_0x176704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176704u;
            // 0x176708: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176704) {
            ctx->pc = 0x1767F8u;
            goto label_1767f8;
        }
    }
    ctx->pc = 0x17670Cu;
label_17670c:
    // 0x17670c: 0x0  nop
    ctx->pc = 0x17670cu;
    // NOP
label_176710:
    // 0x176710: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_176714:
    // 0x176714: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_176718:
    // 0x176718: 0x40f809  jalr        $v0
label_17671c:
    if (ctx->pc == 0x17671Cu) {
        ctx->pc = 0x17671Cu;
            // 0x17671c: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x176720u;
        goto label_176720;
    }
    ctx->pc = 0x176718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176720u);
        ctx->pc = 0x17671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176718u;
            // 0x17671c: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176720u; }
            if (ctx->pc != 0x176720u) { return; }
        }
        }
    }
    ctx->pc = 0x176720u;
label_176720:
    // 0x176720: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x176720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_176724:
    // 0x176724: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x176724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_176728:
    // 0x176728: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x176728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_17672c:
    // 0x17672c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17672cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_176730:
    // 0x176730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_176734:
    if (ctx->pc == 0x176734u) {
        ctx->pc = 0x176734u;
            // 0x176734: 0x24844a20  addiu       $a0, $a0, 0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18976));
        ctx->pc = 0x176738u;
        goto label_176738;
    }
    ctx->pc = 0x176730u;
    {
        const bool branch_taken_0x176730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176730u;
            // 0x176734: 0x24844a20  addiu       $a0, $a0, 0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176730) {
            ctx->pc = 0x176740u;
            goto label_176740;
        }
    }
    ctx->pc = 0x176738u;
label_176738:
    // 0x176738: 0xc059f4e  jal         func_167D38
label_17673c:
    if (ctx->pc == 0x17673Cu) {
        ctx->pc = 0x176740u;
        goto label_176740;
    }
    ctx->pc = 0x176738u;
    SET_GPR_U32(ctx, 31, 0x176740u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176740u; }
        if (ctx->pc != 0x176740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176740u; }
        if (ctx->pc != 0x176740u) { return; }
    }
    ctx->pc = 0x176740u;
label_176740:
    // 0x176740: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x176740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_176744:
    // 0x176744: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x176744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176748:
    // 0x176748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17674c:
    // 0x17674c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_176750:
    // 0x176750: 0x40f809  jalr        $v0
label_176754:
    if (ctx->pc == 0x176754u) {
        ctx->pc = 0x176754u;
            // 0x176754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176758u;
        goto label_176758;
    }
    ctx->pc = 0x176750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176758u);
        ctx->pc = 0x176754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176750u;
            // 0x176754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x176758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176758u; }
            if (ctx->pc != 0x176758u) { return; }
        }
        }
    }
    ctx->pc = 0x176758u;
label_176758:
    // 0x176758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17675c:
    // 0x17675c: 0xc05c038  jal         func_1700E0
label_176760:
    if (ctx->pc == 0x176760u) {
        ctx->pc = 0x176760u;
            // 0x176760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176764u;
        goto label_176764;
    }
    ctx->pc = 0x17675Cu;
    SET_GPR_U32(ctx, 31, 0x176764u);
    ctx->pc = 0x176760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17675Cu;
            // 0x176760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700E0u;
    if (runtime->hasFunction(0x1700E0u)) {
        auto targetFn = runtime->lookupFunction(0x1700E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176764u; }
        if (ctx->pc != 0x176764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700E0_0x1700e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176764u; }
        if (ctx->pc != 0x176764u) { return; }
    }
    ctx->pc = 0x176764u;
label_176764:
    // 0x176764: 0x2932823  subu        $a1, $s4, $s3
    ctx->pc = 0x176764u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_176768:
    // 0x176768: 0xae250090  sw          $a1, 0x90($s1)
    ctx->pc = 0x176768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 5));
label_17676c:
    // 0x17676c: 0xc05c034  jal         func_1700D0
label_176770:
    if (ctx->pc == 0x176770u) {
        ctx->pc = 0x176770u;
            // 0x176770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176774u;
        goto label_176774;
    }
    ctx->pc = 0x17676Cu;
    SET_GPR_U32(ctx, 31, 0x176774u);
    ctx->pc = 0x176770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17676Cu;
            // 0x176770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176774u; }
        if (ctx->pc != 0x176774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176774u; }
        if (ctx->pc != 0x176774u) { return; }
    }
    ctx->pc = 0x176774u;
label_176774:
    // 0x176774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176778:
    // 0x176778: 0xc05c03c  jal         func_1700F0
label_17677c:
    if (ctx->pc == 0x17677Cu) {
        ctx->pc = 0x17677Cu;
            // 0x17677c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176780u;
        goto label_176780;
    }
    ctx->pc = 0x176778u;
    SET_GPR_U32(ctx, 31, 0x176780u);
    ctx->pc = 0x17677Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176778u;
            // 0x17677c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700F0u;
    if (runtime->hasFunction(0x1700F0u)) {
        auto targetFn = runtime->lookupFunction(0x1700F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176780u; }
        if (ctx->pc != 0x176780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700F0_0x1700f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176780u; }
        if (ctx->pc != 0x176780u) { return; }
    }
    ctx->pc = 0x176780u;
label_176780:
    // 0x176780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176784:
    // 0x176784: 0xc05bfe8  jal         func_16FFA0
label_176788:
    if (ctx->pc == 0x176788u) {
        ctx->pc = 0x176788u;
            // 0x176788: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17678Cu;
        goto label_17678c;
    }
    ctx->pc = 0x176784u;
    SET_GPR_U32(ctx, 31, 0x17678Cu);
    ctx->pc = 0x176788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176784u;
            // 0x176788: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFA0u;
    if (runtime->hasFunction(0x16FFA0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17678Cu; }
        if (ctx->pc != 0x17678Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FFA0_0x16ffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17678Cu; }
        if (ctx->pc != 0x17678Cu) { return; }
    }
    ctx->pc = 0x17678Cu;
label_17678c:
    // 0x17678c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17678cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_176790:
    // 0x176790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176794:
    // 0x176794: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_176798:
    if (ctx->pc == 0x176798u) {
        ctx->pc = 0x176798u;
            // 0x176798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17679Cu;
        goto label_17679c;
    }
    ctx->pc = 0x176794u;
    {
        const bool branch_taken_0x176794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x176798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176794u;
            // 0x176798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176794) {
            ctx->pc = 0x1767E0u;
            goto label_1767e0;
        }
    }
    ctx->pc = 0x17679Cu;
label_17679c:
    // 0x17679c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1767a0:
    // 0x1767a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1767a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1767a4:
    // 0x1767a4: 0x60f809  jalr        $v1
label_1767a8:
    if (ctx->pc == 0x1767A8u) {
        ctx->pc = 0x1767ACu;
        goto label_1767ac;
    }
    ctx->pc = 0x1767A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1767ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1767ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1767ACu; }
            if (ctx->pc != 0x1767ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1767ACu;
label_1767ac:
    // 0x1767ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1767acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1767b0:
    // 0x1767b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1767b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1767b4:
    // 0x1767b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1767b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1767b8:
    // 0x1767b8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1767b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1767bc:
    // 0x1767bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1767bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1767c0:
    // 0x1767c0: 0x60f809  jalr        $v1
label_1767c4:
    if (ctx->pc == 0x1767C4u) {
        ctx->pc = 0x1767C4u;
            // 0x1767c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1767C8u;
        goto label_1767c8;
    }
    ctx->pc = 0x1767C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1767C8u);
        ctx->pc = 0x1767C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1767C0u;
            // 0x1767c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1767C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1767C8u; }
            if (ctx->pc != 0x1767C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1767C8u;
label_1767c8:
    // 0x1767c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1767c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1767cc:
    // 0x1767cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1767ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1767d0:
    // 0x1767d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1767d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1767d4:
    // 0x1767d4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1767d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_1767d8:
    // 0x1767d8: 0x40f809  jalr        $v0
label_1767dc:
    if (ctx->pc == 0x1767DCu) {
        ctx->pc = 0x1767DCu;
            // 0x1767dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1767E0u;
        goto label_1767e0;
    }
    ctx->pc = 0x1767D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1767E0u);
        ctx->pc = 0x1767DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1767D8u;
            // 0x1767dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1767E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1767E0u; }
            if (ctx->pc != 0x1767E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1767E0u;
label_1767e0:
    // 0x1767e0: 0xc05c0f6  jal         func_1703D8
label_1767e4:
    if (ctx->pc == 0x1767E4u) {
        ctx->pc = 0x1767E4u;
            // 0x1767e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1767E8u;
        goto label_1767e8;
    }
    ctx->pc = 0x1767E0u;
    SET_GPR_U32(ctx, 31, 0x1767E8u);
    ctx->pc = 0x1767E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767E0u;
            // 0x1767e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1703D8u;
    if (runtime->hasFunction(0x1703D8u)) {
        auto targetFn = runtime->lookupFunction(0x1703D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767E8u; }
        if (ctx->pc != 0x1767E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001703D8_0x1703d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767E8u; }
        if (ctx->pc != 0x1767E8u) { return; }
    }
    ctx->pc = 0x1767E8u;
label_1767e8:
    // 0x1767e8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1767ec:
    // 0x1767ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1767f0:
    // 0x1767f0: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1767f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1767f4:
    // 0x1767f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1767f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1767f8:
    // 0x1767f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1767f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1767fc:
    // 0x1767fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1767fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_176800:
    // 0x176800: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x176800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_176804:
    // 0x176804: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x176804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_176808:
    // 0x176808: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x176808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_17680c:
    // 0x17680c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17680cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_176810:
    // 0x176810: 0x3e00008  jr          $ra
label_176814:
    if (ctx->pc == 0x176814u) {
        ctx->pc = 0x176814u;
            // 0x176814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x176818u;
        goto label_176818;
    }
    ctx->pc = 0x176810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176810u;
            // 0x176814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176818u;
label_176818:
    // 0x176818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17681c:
    // 0x17681c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176820:
    // 0x176820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176824:
    // 0x176824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176828:
    // 0x176828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17682c:
    // 0x17682c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_176830:
    // 0x176830: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_176834:
    if (ctx->pc == 0x176834u) {
        ctx->pc = 0x176834u;
            // 0x176834: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x176838u;
        goto label_176838;
    }
    ctx->pc = 0x176830u;
    {
        const bool branch_taken_0x176830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x176834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176830u;
            // 0x176834: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176830) {
            ctx->pc = 0x1768CCu;
            goto label_1768cc;
        }
    }
    ctx->pc = 0x176838u;
label_176838:
    // 0x176838: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
label_17683c:
    if (ctx->pc == 0x17683Cu) {
        ctx->pc = 0x17683Cu;
            // 0x17683c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x176840u;
        goto label_176840;
    }
    ctx->pc = 0x176838u;
    {
        const bool branch_taken_0x176838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176838) {
            ctx->pc = 0x17683Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176838u;
            // 0x17683c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1768D0u;
            goto label_1768d0;
        }
    }
    ctx->pc = 0x176840u;
label_176840:
    // 0x176840: 0xc05c082  jal         func_170208
label_176844:
    if (ctx->pc == 0x176844u) {
        ctx->pc = 0x176848u;
        goto label_176848;
    }
    ctx->pc = 0x176840u;
    SET_GPR_U32(ctx, 31, 0x176848u);
    ctx->pc = 0x170208u;
    if (runtime->hasFunction(0x170208u)) {
        auto targetFn = runtime->lookupFunction(0x170208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176848u; }
        if (ctx->pc != 0x176848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170208_0x170208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176848u; }
        if (ctx->pc != 0x176848u) { return; }
    }
    ctx->pc = 0x176848u;
label_176848:
    // 0x176848: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x176848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_17684c:
    // 0x17684c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_176850:
    // 0x176850: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176854:
    // 0x176854: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_176858:
    // 0x176858: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_17685c:
    if (ctx->pc == 0x17685Cu) {
        ctx->pc = 0x17685Cu;
            // 0x17685c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x176860u;
        goto label_176860;
    }
    ctx->pc = 0x176858u;
    {
        const bool branch_taken_0x176858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176858u;
            // 0x17685c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176858) {
            ctx->pc = 0x176870u;
            goto label_176870;
        }
    }
    ctx->pc = 0x176860u;
label_176860:
    // 0x176860: 0xc05c3ce  jal         func_170F38
label_176864:
    if (ctx->pc == 0x176864u) {
        ctx->pc = 0x176864u;
            // 0x176864: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x176868u;
        goto label_176868;
    }
    ctx->pc = 0x176860u;
    SET_GPR_U32(ctx, 31, 0x176868u);
    ctx->pc = 0x176864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176860u;
            // 0x176864: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176868u; }
        if (ctx->pc != 0x176868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F38_0x170f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176868u; }
        if (ctx->pc != 0x176868u) { return; }
    }
    ctx->pc = 0x176868u;
label_176868:
    // 0x176868: 0x10000019  b           . + 4 + (0x19 << 2)
label_17686c:
    if (ctx->pc == 0x17686Cu) {
        ctx->pc = 0x17686Cu;
            // 0x17686c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x176870u;
        goto label_176870;
    }
    ctx->pc = 0x176868u;
    {
        const bool branch_taken_0x176868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176868u;
            // 0x17686c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176868) {
            ctx->pc = 0x1768D0u;
            goto label_1768d0;
        }
    }
    ctx->pc = 0x176870u;
label_176870:
    // 0x176870: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_176874:
    // 0x176874: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_176878:
    if (ctx->pc == 0x176878u) {
        ctx->pc = 0x176878u;
            // 0x176878: 0x24c307ff  addiu       $v1, $a2, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
        ctx->pc = 0x17687Cu;
        goto label_17687c;
    }
    ctx->pc = 0x176874u;
    {
        const bool branch_taken_0x176874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176874u;
            // 0x176878: 0x24c307ff  addiu       $v1, $a2, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176874) {
            ctx->pc = 0x1768B8u;
            goto label_1768b8;
        }
    }
    ctx->pc = 0x17687Cu;
label_17687c:
    // 0x17687c: 0xc05bfde  jal         func_16FF78
label_176880:
    if (ctx->pc == 0x176880u) {
        ctx->pc = 0x176880u;
            // 0x176880: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x176884u;
        goto label_176884;
    }
    ctx->pc = 0x17687Cu;
    SET_GPR_U32(ctx, 31, 0x176884u);
    ctx->pc = 0x176880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17687Cu;
            // 0x176880: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF78u;
    if (runtime->hasFunction(0x16FF78u)) {
        auto targetFn = runtime->lookupFunction(0x16FF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176884u; }
        if (ctx->pc != 0x176884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FF78_0x16ff78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176884u; }
        if (ctx->pc != 0x176884u) { return; }
    }
    ctx->pc = 0x176884u;
label_176884:
    // 0x176884: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_176888:
    // 0x176888: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x176888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17688c:
    // 0x17688c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_176890:
    if (ctx->pc == 0x176890u) {
        ctx->pc = 0x176890u;
            // 0x176890: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x176894u;
        goto label_176894;
    }
    ctx->pc = 0x17688Cu;
    {
        const bool branch_taken_0x17688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17688Cu;
            // 0x176890: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17688c) {
            ctx->pc = 0x17689Cu;
            goto label_17689c;
        }
    }
    ctx->pc = 0x176894u;
label_176894:
    // 0x176894: 0xc05c034  jal         func_1700D0
label_176898:
    if (ctx->pc == 0x176898u) {
        ctx->pc = 0x176898u;
            // 0x176898: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x17689Cu;
        goto label_17689c;
    }
    ctx->pc = 0x176894u;
    SET_GPR_U32(ctx, 31, 0x17689Cu);
    ctx->pc = 0x176898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176894u;
            // 0x176898: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17689Cu; }
        if (ctx->pc != 0x17689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17689Cu; }
        if (ctx->pc != 0x17689Cu) { return; }
    }
    ctx->pc = 0x17689Cu;
label_17689c:
    // 0x17689c: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_1768a0:
    // 0x1768a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1768a4:
    // 0x1768a4: 0xc05c3ce  jal         func_170F38
label_1768a8:
    if (ctx->pc == 0x1768A8u) {
        ctx->pc = 0x1768A8u;
            // 0x1768a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1768ACu;
        goto label_1768ac;
    }
    ctx->pc = 0x1768A4u;
    SET_GPR_U32(ctx, 31, 0x1768ACu);
    ctx->pc = 0x1768A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768A4u;
            // 0x1768a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768ACu; }
        if (ctx->pc != 0x1768ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F38_0x170f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768ACu; }
        if (ctx->pc != 0x1768ACu) { return; }
    }
    ctx->pc = 0x1768ACu;
label_1768ac:
    // 0x1768ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1768b0:
    if (ctx->pc == 0x1768B0u) {
        ctx->pc = 0x1768B0u;
            // 0x1768b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1768B4u;
        goto label_1768b4;
    }
    ctx->pc = 0x1768ACu;
    {
        const bool branch_taken_0x1768ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1768B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1768ACu;
            // 0x1768b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768ac) {
            ctx->pc = 0x1768D0u;
            goto label_1768d0;
        }
    }
    ctx->pc = 0x1768B4u;
label_1768b4:
    // 0x1768b4: 0x0  nop
    ctx->pc = 0x1768b4u;
    // NOP
label_1768b8:
    // 0x1768b8: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x1768b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
label_1768bc:
    // 0x1768bc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1768bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1768c0:
    // 0x1768c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1768c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1768c4:
    // 0x1768c4: 0xc05c2f2  jal         func_170BC8
label_1768c8:
    if (ctx->pc == 0x1768C8u) {
        ctx->pc = 0x1768C8u;
            // 0x1768c8: 0x62ac3  sra         $a1, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
        ctx->pc = 0x1768CCu;
        goto label_1768cc;
    }
    ctx->pc = 0x1768C4u;
    SET_GPR_U32(ctx, 31, 0x1768CCu);
    ctx->pc = 0x1768C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768C4u;
            // 0x1768c8: 0x62ac3  sra         $a1, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768CCu; }
        if (ctx->pc != 0x1768CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768CCu; }
        if (ctx->pc != 0x1768CCu) { return; }
    }
    ctx->pc = 0x1768CCu;
label_1768cc:
    // 0x1768cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1768ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1768d0:
    // 0x1768d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1768d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1768d4:
    // 0x1768d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1768d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1768d8:
    // 0x1768d8: 0x3e00008  jr          $ra
label_1768dc:
    if (ctx->pc == 0x1768DCu) {
        ctx->pc = 0x1768DCu;
            // 0x1768dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1768E0u;
        goto label_fallthrough_0x1768d8;
    }
    ctx->pc = 0x1768D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1768DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1768D8u;
            // 0x1768dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1768d8:
    ctx->pc = 0x1768E0u;
}
