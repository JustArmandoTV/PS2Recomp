#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00536740
// Address: 0x536740 - 0x5369f0
void sub_00536740_0x536740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00536740_0x536740");
#endif

    switch (ctx->pc) {
        case 0x536740u: goto label_536740;
        case 0x536744u: goto label_536744;
        case 0x536748u: goto label_536748;
        case 0x53674cu: goto label_53674c;
        case 0x536750u: goto label_536750;
        case 0x536754u: goto label_536754;
        case 0x536758u: goto label_536758;
        case 0x53675cu: goto label_53675c;
        case 0x536760u: goto label_536760;
        case 0x536764u: goto label_536764;
        case 0x536768u: goto label_536768;
        case 0x53676cu: goto label_53676c;
        case 0x536770u: goto label_536770;
        case 0x536774u: goto label_536774;
        case 0x536778u: goto label_536778;
        case 0x53677cu: goto label_53677c;
        case 0x536780u: goto label_536780;
        case 0x536784u: goto label_536784;
        case 0x536788u: goto label_536788;
        case 0x53678cu: goto label_53678c;
        case 0x536790u: goto label_536790;
        case 0x536794u: goto label_536794;
        case 0x536798u: goto label_536798;
        case 0x53679cu: goto label_53679c;
        case 0x5367a0u: goto label_5367a0;
        case 0x5367a4u: goto label_5367a4;
        case 0x5367a8u: goto label_5367a8;
        case 0x5367acu: goto label_5367ac;
        case 0x5367b0u: goto label_5367b0;
        case 0x5367b4u: goto label_5367b4;
        case 0x5367b8u: goto label_5367b8;
        case 0x5367bcu: goto label_5367bc;
        case 0x5367c0u: goto label_5367c0;
        case 0x5367c4u: goto label_5367c4;
        case 0x5367c8u: goto label_5367c8;
        case 0x5367ccu: goto label_5367cc;
        case 0x5367d0u: goto label_5367d0;
        case 0x5367d4u: goto label_5367d4;
        case 0x5367d8u: goto label_5367d8;
        case 0x5367dcu: goto label_5367dc;
        case 0x5367e0u: goto label_5367e0;
        case 0x5367e4u: goto label_5367e4;
        case 0x5367e8u: goto label_5367e8;
        case 0x5367ecu: goto label_5367ec;
        case 0x5367f0u: goto label_5367f0;
        case 0x5367f4u: goto label_5367f4;
        case 0x5367f8u: goto label_5367f8;
        case 0x5367fcu: goto label_5367fc;
        case 0x536800u: goto label_536800;
        case 0x536804u: goto label_536804;
        case 0x536808u: goto label_536808;
        case 0x53680cu: goto label_53680c;
        case 0x536810u: goto label_536810;
        case 0x536814u: goto label_536814;
        case 0x536818u: goto label_536818;
        case 0x53681cu: goto label_53681c;
        case 0x536820u: goto label_536820;
        case 0x536824u: goto label_536824;
        case 0x536828u: goto label_536828;
        case 0x53682cu: goto label_53682c;
        case 0x536830u: goto label_536830;
        case 0x536834u: goto label_536834;
        case 0x536838u: goto label_536838;
        case 0x53683cu: goto label_53683c;
        case 0x536840u: goto label_536840;
        case 0x536844u: goto label_536844;
        case 0x536848u: goto label_536848;
        case 0x53684cu: goto label_53684c;
        case 0x536850u: goto label_536850;
        case 0x536854u: goto label_536854;
        case 0x536858u: goto label_536858;
        case 0x53685cu: goto label_53685c;
        case 0x536860u: goto label_536860;
        case 0x536864u: goto label_536864;
        case 0x536868u: goto label_536868;
        case 0x53686cu: goto label_53686c;
        case 0x536870u: goto label_536870;
        case 0x536874u: goto label_536874;
        case 0x536878u: goto label_536878;
        case 0x53687cu: goto label_53687c;
        case 0x536880u: goto label_536880;
        case 0x536884u: goto label_536884;
        case 0x536888u: goto label_536888;
        case 0x53688cu: goto label_53688c;
        case 0x536890u: goto label_536890;
        case 0x536894u: goto label_536894;
        case 0x536898u: goto label_536898;
        case 0x53689cu: goto label_53689c;
        case 0x5368a0u: goto label_5368a0;
        case 0x5368a4u: goto label_5368a4;
        case 0x5368a8u: goto label_5368a8;
        case 0x5368acu: goto label_5368ac;
        case 0x5368b0u: goto label_5368b0;
        case 0x5368b4u: goto label_5368b4;
        case 0x5368b8u: goto label_5368b8;
        case 0x5368bcu: goto label_5368bc;
        case 0x5368c0u: goto label_5368c0;
        case 0x5368c4u: goto label_5368c4;
        case 0x5368c8u: goto label_5368c8;
        case 0x5368ccu: goto label_5368cc;
        case 0x5368d0u: goto label_5368d0;
        case 0x5368d4u: goto label_5368d4;
        case 0x5368d8u: goto label_5368d8;
        case 0x5368dcu: goto label_5368dc;
        case 0x5368e0u: goto label_5368e0;
        case 0x5368e4u: goto label_5368e4;
        case 0x5368e8u: goto label_5368e8;
        case 0x5368ecu: goto label_5368ec;
        case 0x5368f0u: goto label_5368f0;
        case 0x5368f4u: goto label_5368f4;
        case 0x5368f8u: goto label_5368f8;
        case 0x5368fcu: goto label_5368fc;
        case 0x536900u: goto label_536900;
        case 0x536904u: goto label_536904;
        case 0x536908u: goto label_536908;
        case 0x53690cu: goto label_53690c;
        case 0x536910u: goto label_536910;
        case 0x536914u: goto label_536914;
        case 0x536918u: goto label_536918;
        case 0x53691cu: goto label_53691c;
        case 0x536920u: goto label_536920;
        case 0x536924u: goto label_536924;
        case 0x536928u: goto label_536928;
        case 0x53692cu: goto label_53692c;
        case 0x536930u: goto label_536930;
        case 0x536934u: goto label_536934;
        case 0x536938u: goto label_536938;
        case 0x53693cu: goto label_53693c;
        case 0x536940u: goto label_536940;
        case 0x536944u: goto label_536944;
        case 0x536948u: goto label_536948;
        case 0x53694cu: goto label_53694c;
        case 0x536950u: goto label_536950;
        case 0x536954u: goto label_536954;
        case 0x536958u: goto label_536958;
        case 0x53695cu: goto label_53695c;
        case 0x536960u: goto label_536960;
        case 0x536964u: goto label_536964;
        case 0x536968u: goto label_536968;
        case 0x53696cu: goto label_53696c;
        case 0x536970u: goto label_536970;
        case 0x536974u: goto label_536974;
        case 0x536978u: goto label_536978;
        case 0x53697cu: goto label_53697c;
        case 0x536980u: goto label_536980;
        case 0x536984u: goto label_536984;
        case 0x536988u: goto label_536988;
        case 0x53698cu: goto label_53698c;
        case 0x536990u: goto label_536990;
        case 0x536994u: goto label_536994;
        case 0x536998u: goto label_536998;
        case 0x53699cu: goto label_53699c;
        case 0x5369a0u: goto label_5369a0;
        case 0x5369a4u: goto label_5369a4;
        case 0x5369a8u: goto label_5369a8;
        case 0x5369acu: goto label_5369ac;
        case 0x5369b0u: goto label_5369b0;
        case 0x5369b4u: goto label_5369b4;
        case 0x5369b8u: goto label_5369b8;
        case 0x5369bcu: goto label_5369bc;
        case 0x5369c0u: goto label_5369c0;
        case 0x5369c4u: goto label_5369c4;
        case 0x5369c8u: goto label_5369c8;
        case 0x5369ccu: goto label_5369cc;
        case 0x5369d0u: goto label_5369d0;
        case 0x5369d4u: goto label_5369d4;
        case 0x5369d8u: goto label_5369d8;
        case 0x5369dcu: goto label_5369dc;
        case 0x5369e0u: goto label_5369e0;
        case 0x5369e4u: goto label_5369e4;
        case 0x5369e8u: goto label_5369e8;
        case 0x5369ecu: goto label_5369ec;
        default: break;
    }

    ctx->pc = 0x536740u;

label_536740:
    // 0x536740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x536740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_536744:
    // 0x536744: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x536744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_536748:
    // 0x536748: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x536748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53674c:
    // 0x53674c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x53674cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_536750:
    // 0x536750: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x536750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_536754:
    // 0x536754: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x536754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_536758:
    // 0x536758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x536758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53675c:
    // 0x53675c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_536760:
    // 0x536760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x536760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_536764:
    // 0x536764: 0xc0aeaf4  jal         func_2BABD0
label_536768:
    if (ctx->pc == 0x536768u) {
        ctx->pc = 0x536768u;
            // 0x536768: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x53676Cu;
        goto label_53676c;
    }
    ctx->pc = 0x536764u;
    SET_GPR_U32(ctx, 31, 0x53676Cu);
    ctx->pc = 0x536768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536764u;
            // 0x536768: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53676Cu; }
        if (ctx->pc != 0x53676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53676Cu; }
        if (ctx->pc != 0x53676Cu) { return; }
    }
    ctx->pc = 0x53676Cu;
label_53676c:
    // 0x53676c: 0xc14dac4  jal         func_536B10
label_536770:
    if (ctx->pc == 0x536770u) {
        ctx->pc = 0x536770u;
            // 0x536770: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x536774u;
        goto label_536774;
    }
    ctx->pc = 0x53676Cu;
    SET_GPR_U32(ctx, 31, 0x536774u);
    ctx->pc = 0x536770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53676Cu;
            // 0x536770: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536B10u;
    if (runtime->hasFunction(0x536B10u)) {
        auto targetFn = runtime->lookupFunction(0x536B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536774u; }
        if (ctx->pc != 0x536774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00536B10_0x536b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536774u; }
        if (ctx->pc != 0x536774u) { return; }
    }
    ctx->pc = 0x536774u;
label_536774:
    // 0x536774: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x536774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_536778:
    // 0x536778: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x536778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53677c:
    // 0x53677c: 0x24636f20  addiu       $v1, $v1, 0x6F20
    ctx->pc = 0x53677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28448));
label_536780:
    // 0x536780: 0x24426f58  addiu       $v0, $v0, 0x6F58
    ctx->pc = 0x536780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28504));
label_536784:
    // 0x536784: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x536784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_536788:
    // 0x536788: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x536788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_53678c:
    // 0x53678c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x53678cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_536790:
    // 0x536790: 0xc14dabc  jal         func_536AF0
label_536794:
    if (ctx->pc == 0x536794u) {
        ctx->pc = 0x536794u;
            // 0x536794: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x536798u;
        goto label_536798;
    }
    ctx->pc = 0x536790u;
    SET_GPR_U32(ctx, 31, 0x536798u);
    ctx->pc = 0x536794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536790u;
            // 0x536794: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536AF0u;
    if (runtime->hasFunction(0x536AF0u)) {
        auto targetFn = runtime->lookupFunction(0x536AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536798u; }
        if (ctx->pc != 0x536798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00536AF0_0x536af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536798u; }
        if (ctx->pc != 0x536798u) { return; }
    }
    ctx->pc = 0x536798u;
label_536798:
    // 0x536798: 0xc14dabc  jal         func_536AF0
label_53679c:
    if (ctx->pc == 0x53679Cu) {
        ctx->pc = 0x53679Cu;
            // 0x53679c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x5367A0u;
        goto label_5367a0;
    }
    ctx->pc = 0x536798u;
    SET_GPR_U32(ctx, 31, 0x5367A0u);
    ctx->pc = 0x53679Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536798u;
            // 0x53679c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536AF0u;
    if (runtime->hasFunction(0x536AF0u)) {
        auto targetFn = runtime->lookupFunction(0x536AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367A0u; }
        if (ctx->pc != 0x5367A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00536AF0_0x536af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367A0u; }
        if (ctx->pc != 0x5367A0u) { return; }
    }
    ctx->pc = 0x5367A0u;
label_5367a0:
    // 0x5367a0: 0xc0aeac0  jal         func_2BAB00
label_5367a4:
    if (ctx->pc == 0x5367A4u) {
        ctx->pc = 0x5367A4u;
            // 0x5367a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5367A8u;
        goto label_5367a8;
    }
    ctx->pc = 0x5367A0u;
    SET_GPR_U32(ctx, 31, 0x5367A8u);
    ctx->pc = 0x5367A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5367A0u;
            // 0x5367a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367A8u; }
        if (ctx->pc != 0x5367A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367A8u; }
        if (ctx->pc != 0x5367A8u) { return; }
    }
    ctx->pc = 0x5367A8u;
label_5367a8:
    // 0x5367a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5367a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5367ac:
    // 0x5367ac: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_5367b0:
    if (ctx->pc == 0x5367B0u) {
        ctx->pc = 0x5367B4u;
        goto label_5367b4;
    }
    ctx->pc = 0x5367ACu;
    {
        const bool branch_taken_0x5367ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5367ac) {
            ctx->pc = 0x536830u;
            goto label_536830;
        }
    }
    ctx->pc = 0x5367B4u;
label_5367b4:
    // 0x5367b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x5367b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_5367b8:
    // 0x5367b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x5367b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5367bc:
    // 0x5367bc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x5367bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_5367c0:
    // 0x5367c0: 0xc040138  jal         func_1004E0
label_5367c4:
    if (ctx->pc == 0x5367C4u) {
        ctx->pc = 0x5367C4u;
            // 0x5367c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x5367C8u;
        goto label_5367c8;
    }
    ctx->pc = 0x5367C0u;
    SET_GPR_U32(ctx, 31, 0x5367C8u);
    ctx->pc = 0x5367C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5367C0u;
            // 0x5367c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367C8u; }
        if (ctx->pc != 0x5367C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367C8u; }
        if (ctx->pc != 0x5367C8u) { return; }
    }
    ctx->pc = 0x5367C8u;
label_5367c8:
    // 0x5367c8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x5367c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_5367cc:
    // 0x5367cc: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x5367ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_5367d0:
    // 0x5367d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5367d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5367d4:
    // 0x5367d4: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x5367d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
label_5367d8:
    // 0x5367d8: 0x24c66550  addiu       $a2, $a2, 0x6550
    ctx->pc = 0x5367d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25936));
label_5367dc:
    // 0x5367dc: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x5367dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_5367e0:
    // 0x5367e0: 0xc040840  jal         func_102100
label_5367e4:
    if (ctx->pc == 0x5367E4u) {
        ctx->pc = 0x5367E4u;
            // 0x5367e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5367E8u;
        goto label_5367e8;
    }
    ctx->pc = 0x5367E0u;
    SET_GPR_U32(ctx, 31, 0x5367E8u);
    ctx->pc = 0x5367E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5367E0u;
            // 0x5367e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367E8u; }
        if (ctx->pc != 0x5367E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367E8u; }
        if (ctx->pc != 0x5367E8u) { return; }
    }
    ctx->pc = 0x5367E8u;
label_5367e8:
    // 0x5367e8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x5367e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_5367ec:
    // 0x5367ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x5367ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5367f0:
    // 0x5367f0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x5367f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_5367f4:
    // 0x5367f4: 0xc14da84  jal         func_536A10
label_5367f8:
    if (ctx->pc == 0x5367F8u) {
        ctx->pc = 0x5367F8u;
            // 0x5367f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5367FCu;
        goto label_5367fc;
    }
    ctx->pc = 0x5367F4u;
    SET_GPR_U32(ctx, 31, 0x5367FCu);
    ctx->pc = 0x5367F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5367F4u;
            // 0x5367f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536A10u;
    if (runtime->hasFunction(0x536A10u)) {
        auto targetFn = runtime->lookupFunction(0x536A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367FCu; }
        if (ctx->pc != 0x5367FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00536A10_0x536a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5367FCu; }
        if (ctx->pc != 0x5367FCu) { return; }
    }
    ctx->pc = 0x5367FCu;
label_5367fc:
    // 0x5367fc: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x5367fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_536800:
    // 0x536800: 0xc14da84  jal         func_536A10
label_536804:
    if (ctx->pc == 0x536804u) {
        ctx->pc = 0x536804u;
            // 0x536804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536808u;
        goto label_536808;
    }
    ctx->pc = 0x536800u;
    SET_GPR_U32(ctx, 31, 0x536808u);
    ctx->pc = 0x536804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536800u;
            // 0x536804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536A10u;
    if (runtime->hasFunction(0x536A10u)) {
        auto targetFn = runtime->lookupFunction(0x536A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536808u; }
        if (ctx->pc != 0x536808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00536A10_0x536a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536808u; }
        if (ctx->pc != 0x536808u) { return; }
    }
    ctx->pc = 0x536808u;
label_536808:
    // 0x536808: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x536808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53680c:
    // 0x53680c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x53680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_536810:
    // 0x536810: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x536810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_536814:
    // 0x536814: 0xc14da7c  jal         func_5369F0
label_536818:
    if (ctx->pc == 0x536818u) {
        ctx->pc = 0x536818u;
            // 0x536818: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x53681Cu;
        goto label_53681c;
    }
    ctx->pc = 0x536814u;
    SET_GPR_U32(ctx, 31, 0x53681Cu);
    ctx->pc = 0x536818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536814u;
            // 0x536818: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5369F0u;
    if (runtime->hasFunction(0x5369F0u)) {
        auto targetFn = runtime->lookupFunction(0x5369F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53681Cu; }
        if (ctx->pc != 0x53681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005369F0_0x5369f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53681Cu; }
        if (ctx->pc != 0x53681Cu) { return; }
    }
    ctx->pc = 0x53681Cu;
label_53681c:
    // 0x53681c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x53681cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_536820:
    // 0x536820: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x536820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_536824:
    // 0x536824: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_536828:
    if (ctx->pc == 0x536828u) {
        ctx->pc = 0x536828u;
            // 0x536828: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x53682Cu;
        goto label_53682c;
    }
    ctx->pc = 0x536824u;
    {
        const bool branch_taken_0x536824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x536828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536824u;
            // 0x536828: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536824) {
            ctx->pc = 0x53680Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53680c;
        }
    }
    ctx->pc = 0x53682Cu;
label_53682c:
    // 0x53682c: 0x0  nop
    ctx->pc = 0x53682cu;
    // NOP
label_536830:
    // 0x536830: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x536830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_536834:
    // 0x536834: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x536834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_536838:
    // 0x536838: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x536838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_53683c:
    // 0x53683c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x53683cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_536840:
    // 0x536840: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x536840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_536844:
    // 0x536844: 0x24a5c4f0  addiu       $a1, $a1, -0x3B10
    ctx->pc = 0x536844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952176));
label_536848:
    // 0x536848: 0x24846e40  addiu       $a0, $a0, 0x6E40
    ctx->pc = 0x536848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28224));
label_53684c:
    // 0x53684c: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x53684cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
label_536850:
    // 0x536850: 0x24636e78  addiu       $v1, $v1, 0x6E78
    ctx->pc = 0x536850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28280));
label_536854:
    // 0x536854: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x536854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536858:
    // 0x536858: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x536858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_53685c:
    // 0x53685c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x53685cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_536860:
    // 0x536860: 0xa2250084  sb          $a1, 0x84($s1)
    ctx->pc = 0x536860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 5));
label_536864:
    // 0x536864: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x536864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_536868:
    // 0x536868: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x536868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_53686c:
    // 0x53686c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_536870:
    // 0x536870: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x536870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_536874:
    // 0x536874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x536874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_536878:
    // 0x536878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53687c:
    // 0x53687c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53687cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536880:
    // 0x536880: 0x3e00008  jr          $ra
label_536884:
    if (ctx->pc == 0x536884u) {
        ctx->pc = 0x536884u;
            // 0x536884: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x536888u;
        goto label_536888;
    }
    ctx->pc = 0x536880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536880u;
            // 0x536884: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536888u;
label_536888:
    // 0x536888: 0x0  nop
    ctx->pc = 0x536888u;
    // NOP
label_53688c:
    // 0x53688c: 0x0  nop
    ctx->pc = 0x53688cu;
    // NOP
label_536890:
    // 0x536890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x536890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_536894:
    // 0x536894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x536894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_536898:
    // 0x536898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53689c:
    // 0x53689c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5368a0:
    // 0x5368a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5368a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5368a4:
    // 0x5368a4: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_5368a8:
    if (ctx->pc == 0x5368A8u) {
        ctx->pc = 0x5368A8u;
            // 0x5368a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5368ACu;
        goto label_5368ac;
    }
    ctx->pc = 0x5368A4u;
    {
        const bool branch_taken_0x5368a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5368A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5368A4u;
            // 0x5368a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5368a4) {
            ctx->pc = 0x5369CCu;
            goto label_5369cc;
        }
    }
    ctx->pc = 0x5368ACu;
label_5368ac:
    // 0x5368ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5368acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5368b0:
    // 0x5368b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5368b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5368b4:
    // 0x5368b4: 0x24636f20  addiu       $v1, $v1, 0x6F20
    ctx->pc = 0x5368b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28448));
label_5368b8:
    // 0x5368b8: 0x24426f58  addiu       $v0, $v0, 0x6F58
    ctx->pc = 0x5368b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28504));
label_5368bc:
    // 0x5368bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5368bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_5368c0:
    // 0x5368c0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x5368c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_5368c4:
    // 0x5368c4: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x5368c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_5368c8:
    // 0x5368c8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_5368cc:
    if (ctx->pc == 0x5368CCu) {
        ctx->pc = 0x5368CCu;
            // 0x5368cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x5368D0u;
        goto label_5368d0;
    }
    ctx->pc = 0x5368C8u;
    {
        const bool branch_taken_0x5368c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5368c8) {
            ctx->pc = 0x5368CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5368C8u;
            // 0x5368cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5368E0u;
            goto label_5368e0;
        }
    }
    ctx->pc = 0x5368D0u;
label_5368d0:
    // 0x5368d0: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x5368d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_5368d4:
    // 0x5368d4: 0xc0407c0  jal         func_101F00
label_5368d8:
    if (ctx->pc == 0x5368D8u) {
        ctx->pc = 0x5368D8u;
            // 0x5368d8: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
        ctx->pc = 0x5368DCu;
        goto label_5368dc;
    }
    ctx->pc = 0x5368D4u;
    SET_GPR_U32(ctx, 31, 0x5368DCu);
    ctx->pc = 0x5368D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5368D4u;
            // 0x5368d8: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5368DCu; }
        if (ctx->pc != 0x5368DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5368DCu; }
        if (ctx->pc != 0x5368DCu) { return; }
    }
    ctx->pc = 0x5368DCu;
label_5368dc:
    // 0x5368dc: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x5368dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_5368e0:
    // 0x5368e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_5368e4:
    if (ctx->pc == 0x5368E4u) {
        ctx->pc = 0x5368E4u;
            // 0x5368e4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x5368E8u;
        goto label_5368e8;
    }
    ctx->pc = 0x5368E0u;
    {
        const bool branch_taken_0x5368e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5368e0) {
            ctx->pc = 0x5368E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5368E0u;
            // 0x5368e4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536910u;
            goto label_536910;
        }
    }
    ctx->pc = 0x5368E8u;
label_5368e8:
    // 0x5368e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_5368ec:
    if (ctx->pc == 0x5368ECu) {
        ctx->pc = 0x5368F0u;
        goto label_5368f0;
    }
    ctx->pc = 0x5368E8u;
    {
        const bool branch_taken_0x5368e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5368e8) {
            ctx->pc = 0x53690Cu;
            goto label_53690c;
        }
    }
    ctx->pc = 0x5368F0u;
label_5368f0:
    // 0x5368f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5368f4:
    if (ctx->pc == 0x5368F4u) {
        ctx->pc = 0x5368F8u;
        goto label_5368f8;
    }
    ctx->pc = 0x5368F0u;
    {
        const bool branch_taken_0x5368f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5368f0) {
            ctx->pc = 0x53690Cu;
            goto label_53690c;
        }
    }
    ctx->pc = 0x5368F8u;
label_5368f8:
    // 0x5368f8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x5368f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_5368fc:
    // 0x5368fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_536900:
    if (ctx->pc == 0x536900u) {
        ctx->pc = 0x536904u;
        goto label_536904;
    }
    ctx->pc = 0x5368FCu;
    {
        const bool branch_taken_0x5368fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5368fc) {
            ctx->pc = 0x53690Cu;
            goto label_53690c;
        }
    }
    ctx->pc = 0x536904u;
label_536904:
    // 0x536904: 0xc0400a8  jal         func_1002A0
label_536908:
    if (ctx->pc == 0x536908u) {
        ctx->pc = 0x53690Cu;
        goto label_53690c;
    }
    ctx->pc = 0x536904u;
    SET_GPR_U32(ctx, 31, 0x53690Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53690Cu; }
        if (ctx->pc != 0x53690Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53690Cu; }
        if (ctx->pc != 0x53690Cu) { return; }
    }
    ctx->pc = 0x53690Cu;
label_53690c:
    // 0x53690c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x53690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_536910:
    // 0x536910: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_536914:
    if (ctx->pc == 0x536914u) {
        ctx->pc = 0x536914u;
            // 0x536914: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x536918u;
        goto label_536918;
    }
    ctx->pc = 0x536910u;
    {
        const bool branch_taken_0x536910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x536910) {
            ctx->pc = 0x536914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536910u;
            // 0x536914: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536940u;
            goto label_536940;
        }
    }
    ctx->pc = 0x536918u;
label_536918:
    // 0x536918: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_53691c:
    if (ctx->pc == 0x53691Cu) {
        ctx->pc = 0x536920u;
        goto label_536920;
    }
    ctx->pc = 0x536918u;
    {
        const bool branch_taken_0x536918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x536918) {
            ctx->pc = 0x53693Cu;
            goto label_53693c;
        }
    }
    ctx->pc = 0x536920u;
label_536920:
    // 0x536920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_536924:
    if (ctx->pc == 0x536924u) {
        ctx->pc = 0x536928u;
        goto label_536928;
    }
    ctx->pc = 0x536920u;
    {
        const bool branch_taken_0x536920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x536920) {
            ctx->pc = 0x53693Cu;
            goto label_53693c;
        }
    }
    ctx->pc = 0x536928u;
label_536928:
    // 0x536928: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x536928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_53692c:
    // 0x53692c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_536930:
    if (ctx->pc == 0x536930u) {
        ctx->pc = 0x536934u;
        goto label_536934;
    }
    ctx->pc = 0x53692Cu;
    {
        const bool branch_taken_0x53692c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53692c) {
            ctx->pc = 0x53693Cu;
            goto label_53693c;
        }
    }
    ctx->pc = 0x536934u;
label_536934:
    // 0x536934: 0xc0400a8  jal         func_1002A0
label_536938:
    if (ctx->pc == 0x536938u) {
        ctx->pc = 0x53693Cu;
        goto label_53693c;
    }
    ctx->pc = 0x536934u;
    SET_GPR_U32(ctx, 31, 0x53693Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53693Cu; }
        if (ctx->pc != 0x53693Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53693Cu; }
        if (ctx->pc != 0x53693Cu) { return; }
    }
    ctx->pc = 0x53693Cu;
label_53693c:
    // 0x53693c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x53693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_536940:
    // 0x536940: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_536944:
    if (ctx->pc == 0x536944u) {
        ctx->pc = 0x536948u;
        goto label_536948;
    }
    ctx->pc = 0x536940u;
    {
        const bool branch_taken_0x536940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x536940) {
            ctx->pc = 0x53695Cu;
            goto label_53695c;
        }
    }
    ctx->pc = 0x536948u;
label_536948:
    // 0x536948: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x536948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53694c:
    // 0x53694c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_536950:
    // 0x536950: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x536950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
label_536954:
    // 0x536954: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x536954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_536958:
    // 0x536958: 0xac40b640  sw          $zero, -0x49C0($v0)
    ctx->pc = 0x536958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948416), GPR_U32(ctx, 0));
label_53695c:
    // 0x53695c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_536960:
    if (ctx->pc == 0x536960u) {
        ctx->pc = 0x536960u;
            // 0x536960: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x536964u;
        goto label_536964;
    }
    ctx->pc = 0x53695Cu;
    {
        const bool branch_taken_0x53695c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53695c) {
            ctx->pc = 0x536960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53695Cu;
            // 0x536960: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5369B8u;
            goto label_5369b8;
        }
    }
    ctx->pc = 0x536964u;
label_536964:
    // 0x536964: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x536964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_536968:
    // 0x536968: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x536968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_53696c:
    // 0x53696c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x53696cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_536970:
    // 0x536970: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x536970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_536974:
    // 0x536974: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_536978:
    if (ctx->pc == 0x536978u) {
        ctx->pc = 0x536978u;
            // 0x536978: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x53697Cu;
        goto label_53697c;
    }
    ctx->pc = 0x536974u;
    {
        const bool branch_taken_0x536974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x536974) {
            ctx->pc = 0x536978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536974u;
            // 0x536978: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536990u;
            goto label_536990;
        }
    }
    ctx->pc = 0x53697Cu;
label_53697c:
    // 0x53697c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53697cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_536980:
    // 0x536980: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x536980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_536984:
    // 0x536984: 0x320f809  jalr        $t9
label_536988:
    if (ctx->pc == 0x536988u) {
        ctx->pc = 0x536988u;
            // 0x536988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53698Cu;
        goto label_53698c;
    }
    ctx->pc = 0x536984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53698Cu);
        ctx->pc = 0x536988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536984u;
            // 0x536988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53698Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53698Cu; }
            if (ctx->pc != 0x53698Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53698Cu;
label_53698c:
    // 0x53698c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x53698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_536990:
    // 0x536990: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_536994:
    if (ctx->pc == 0x536994u) {
        ctx->pc = 0x536994u;
            // 0x536994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536998u;
        goto label_536998;
    }
    ctx->pc = 0x536990u;
    {
        const bool branch_taken_0x536990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x536990) {
            ctx->pc = 0x536994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536990u;
            // 0x536994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5369ACu;
            goto label_5369ac;
        }
    }
    ctx->pc = 0x536998u;
label_536998:
    // 0x536998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x536998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53699c:
    // 0x53699c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53699cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5369a0:
    // 0x5369a0: 0x320f809  jalr        $t9
label_5369a4:
    if (ctx->pc == 0x5369A4u) {
        ctx->pc = 0x5369A4u;
            // 0x5369a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5369A8u;
        goto label_5369a8;
    }
    ctx->pc = 0x5369A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5369A8u);
        ctx->pc = 0x5369A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5369A0u;
            // 0x5369a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5369A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5369A8u; }
            if (ctx->pc != 0x5369A8u) { return; }
        }
        }
    }
    ctx->pc = 0x5369A8u;
label_5369a8:
    // 0x5369a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5369a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5369ac:
    // 0x5369ac: 0xc075bf8  jal         func_1D6FE0
label_5369b0:
    if (ctx->pc == 0x5369B0u) {
        ctx->pc = 0x5369B0u;
            // 0x5369b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5369B4u;
        goto label_5369b4;
    }
    ctx->pc = 0x5369ACu;
    SET_GPR_U32(ctx, 31, 0x5369B4u);
    ctx->pc = 0x5369B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5369ACu;
            // 0x5369b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5369B4u; }
        if (ctx->pc != 0x5369B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5369B4u; }
        if (ctx->pc != 0x5369B4u) { return; }
    }
    ctx->pc = 0x5369B4u;
label_5369b4:
    // 0x5369b4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5369b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5369b8:
    // 0x5369b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5369b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5369bc:
    // 0x5369bc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5369c0:
    if (ctx->pc == 0x5369C0u) {
        ctx->pc = 0x5369C0u;
            // 0x5369c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5369C4u;
        goto label_5369c4;
    }
    ctx->pc = 0x5369BCu;
    {
        const bool branch_taken_0x5369bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5369bc) {
            ctx->pc = 0x5369C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5369BCu;
            // 0x5369c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5369D0u;
            goto label_5369d0;
        }
    }
    ctx->pc = 0x5369C4u;
label_5369c4:
    // 0x5369c4: 0xc0400a8  jal         func_1002A0
label_5369c8:
    if (ctx->pc == 0x5369C8u) {
        ctx->pc = 0x5369C8u;
            // 0x5369c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5369CCu;
        goto label_5369cc;
    }
    ctx->pc = 0x5369C4u;
    SET_GPR_U32(ctx, 31, 0x5369CCu);
    ctx->pc = 0x5369C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5369C4u;
            // 0x5369c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5369CCu; }
        if (ctx->pc != 0x5369CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5369CCu; }
        if (ctx->pc != 0x5369CCu) { return; }
    }
    ctx->pc = 0x5369CCu;
label_5369cc:
    // 0x5369cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5369ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5369d0:
    // 0x5369d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5369d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5369d4:
    // 0x5369d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5369d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5369d8:
    // 0x5369d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5369d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5369dc:
    // 0x5369dc: 0x3e00008  jr          $ra
label_5369e0:
    if (ctx->pc == 0x5369E0u) {
        ctx->pc = 0x5369E0u;
            // 0x5369e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5369E4u;
        goto label_5369e4;
    }
    ctx->pc = 0x5369DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5369E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5369DCu;
            // 0x5369e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5369E4u;
label_5369e4:
    // 0x5369e4: 0x0  nop
    ctx->pc = 0x5369e4u;
    // NOP
label_5369e8:
    // 0x5369e8: 0x0  nop
    ctx->pc = 0x5369e8u;
    // NOP
label_5369ec:
    // 0x5369ec: 0x0  nop
    ctx->pc = 0x5369ecu;
    // NOP
}
