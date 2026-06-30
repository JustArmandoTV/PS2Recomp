#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333870
// Address: 0x333870 - 0x333a10
void sub_00333870_0x333870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333870_0x333870");
#endif

    switch (ctx->pc) {
        case 0x333870u: goto label_333870;
        case 0x333874u: goto label_333874;
        case 0x333878u: goto label_333878;
        case 0x33387cu: goto label_33387c;
        case 0x333880u: goto label_333880;
        case 0x333884u: goto label_333884;
        case 0x333888u: goto label_333888;
        case 0x33388cu: goto label_33388c;
        case 0x333890u: goto label_333890;
        case 0x333894u: goto label_333894;
        case 0x333898u: goto label_333898;
        case 0x33389cu: goto label_33389c;
        case 0x3338a0u: goto label_3338a0;
        case 0x3338a4u: goto label_3338a4;
        case 0x3338a8u: goto label_3338a8;
        case 0x3338acu: goto label_3338ac;
        case 0x3338b0u: goto label_3338b0;
        case 0x3338b4u: goto label_3338b4;
        case 0x3338b8u: goto label_3338b8;
        case 0x3338bcu: goto label_3338bc;
        case 0x3338c0u: goto label_3338c0;
        case 0x3338c4u: goto label_3338c4;
        case 0x3338c8u: goto label_3338c8;
        case 0x3338ccu: goto label_3338cc;
        case 0x3338d0u: goto label_3338d0;
        case 0x3338d4u: goto label_3338d4;
        case 0x3338d8u: goto label_3338d8;
        case 0x3338dcu: goto label_3338dc;
        case 0x3338e0u: goto label_3338e0;
        case 0x3338e4u: goto label_3338e4;
        case 0x3338e8u: goto label_3338e8;
        case 0x3338ecu: goto label_3338ec;
        case 0x3338f0u: goto label_3338f0;
        case 0x3338f4u: goto label_3338f4;
        case 0x3338f8u: goto label_3338f8;
        case 0x3338fcu: goto label_3338fc;
        case 0x333900u: goto label_333900;
        case 0x333904u: goto label_333904;
        case 0x333908u: goto label_333908;
        case 0x33390cu: goto label_33390c;
        case 0x333910u: goto label_333910;
        case 0x333914u: goto label_333914;
        case 0x333918u: goto label_333918;
        case 0x33391cu: goto label_33391c;
        case 0x333920u: goto label_333920;
        case 0x333924u: goto label_333924;
        case 0x333928u: goto label_333928;
        case 0x33392cu: goto label_33392c;
        case 0x333930u: goto label_333930;
        case 0x333934u: goto label_333934;
        case 0x333938u: goto label_333938;
        case 0x33393cu: goto label_33393c;
        case 0x333940u: goto label_333940;
        case 0x333944u: goto label_333944;
        case 0x333948u: goto label_333948;
        case 0x33394cu: goto label_33394c;
        case 0x333950u: goto label_333950;
        case 0x333954u: goto label_333954;
        case 0x333958u: goto label_333958;
        case 0x33395cu: goto label_33395c;
        case 0x333960u: goto label_333960;
        case 0x333964u: goto label_333964;
        case 0x333968u: goto label_333968;
        case 0x33396cu: goto label_33396c;
        case 0x333970u: goto label_333970;
        case 0x333974u: goto label_333974;
        case 0x333978u: goto label_333978;
        case 0x33397cu: goto label_33397c;
        case 0x333980u: goto label_333980;
        case 0x333984u: goto label_333984;
        case 0x333988u: goto label_333988;
        case 0x33398cu: goto label_33398c;
        case 0x333990u: goto label_333990;
        case 0x333994u: goto label_333994;
        case 0x333998u: goto label_333998;
        case 0x33399cu: goto label_33399c;
        case 0x3339a0u: goto label_3339a0;
        case 0x3339a4u: goto label_3339a4;
        case 0x3339a8u: goto label_3339a8;
        case 0x3339acu: goto label_3339ac;
        case 0x3339b0u: goto label_3339b0;
        case 0x3339b4u: goto label_3339b4;
        case 0x3339b8u: goto label_3339b8;
        case 0x3339bcu: goto label_3339bc;
        case 0x3339c0u: goto label_3339c0;
        case 0x3339c4u: goto label_3339c4;
        case 0x3339c8u: goto label_3339c8;
        case 0x3339ccu: goto label_3339cc;
        case 0x3339d0u: goto label_3339d0;
        case 0x3339d4u: goto label_3339d4;
        case 0x3339d8u: goto label_3339d8;
        case 0x3339dcu: goto label_3339dc;
        case 0x3339e0u: goto label_3339e0;
        case 0x3339e4u: goto label_3339e4;
        case 0x3339e8u: goto label_3339e8;
        case 0x3339ecu: goto label_3339ec;
        case 0x3339f0u: goto label_3339f0;
        case 0x3339f4u: goto label_3339f4;
        case 0x3339f8u: goto label_3339f8;
        case 0x3339fcu: goto label_3339fc;
        case 0x333a00u: goto label_333a00;
        case 0x333a04u: goto label_333a04;
        case 0x333a08u: goto label_333a08;
        case 0x333a0cu: goto label_333a0c;
        default: break;
    }

    ctx->pc = 0x333870u;

label_333870:
    // 0x333870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x333870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_333874:
    // 0x333874: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333878:
    // 0x333878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x333878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_33387c:
    // 0x33387c: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x33387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_333880:
    // 0x333880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_333884:
    // 0x333884: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x333884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_333888:
    // 0x333888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33388c:
    // 0x33388c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33388cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_333890:
    // 0x333890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_333894:
    // 0x333894: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x333894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333898:
    // 0x333898: 0x8c427378  lw          $v0, 0x7378($v0)
    ctx->pc = 0x333898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_33389c:
    // 0x33389c: 0xc0cd4bc  jal         func_3352F0
label_3338a0:
    if (ctx->pc == 0x3338A0u) {
        ctx->pc = 0x3338A0u;
            // 0x3338a0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3338A4u;
        goto label_3338a4;
    }
    ctx->pc = 0x33389Cu;
    SET_GPR_U32(ctx, 31, 0x3338A4u);
    ctx->pc = 0x3338A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33389Cu;
            // 0x3338a0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3352F0u;
    if (runtime->hasFunction(0x3352F0u)) {
        auto targetFn = runtime->lookupFunction(0x3352F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338A4u; }
        if (ctx->pc != 0x3338A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003352F0_0x3352f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338A4u; }
        if (ctx->pc != 0x3338A4u) { return; }
    }
    ctx->pc = 0x3338A4u;
label_3338a4:
    // 0x3338a4: 0x264407c8  addiu       $a0, $s2, 0x7C8
    ctx->pc = 0x3338a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1992));
label_3338a8:
    // 0x3338a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3338a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3338ac:
    // 0x3338ac: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x3338acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_3338b0:
    // 0x3338b0: 0xc04a576  jal         func_1295D8
label_3338b4:
    if (ctx->pc == 0x3338B4u) {
        ctx->pc = 0x3338B4u;
            // 0x3338b4: 0xae4007c4  sw          $zero, 0x7C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1988), GPR_U32(ctx, 0));
        ctx->pc = 0x3338B8u;
        goto label_3338b8;
    }
    ctx->pc = 0x3338B0u;
    SET_GPR_U32(ctx, 31, 0x3338B8u);
    ctx->pc = 0x3338B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3338B0u;
            // 0x3338b4: 0xae4007c4  sw          $zero, 0x7C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338B8u; }
        if (ctx->pc != 0x3338B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338B8u; }
        if (ctx->pc != 0x3338B8u) { return; }
    }
    ctx->pc = 0x3338B8u;
label_3338b8:
    // 0x3338b8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3338b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3338bc:
    // 0x3338bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3338bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3338c0:
    // 0x3338c0: 0x2484f570  addiu       $a0, $a0, -0xA90
    ctx->pc = 0x3338c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964592));
label_3338c4:
    // 0x3338c4: 0xc04a576  jal         func_1295D8
label_3338c8:
    if (ctx->pc == 0x3338C8u) {
        ctx->pc = 0x3338C8u;
            // 0x3338c8: 0x24060558  addiu       $a2, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->pc = 0x3338CCu;
        goto label_3338cc;
    }
    ctx->pc = 0x3338C4u;
    SET_GPR_U32(ctx, 31, 0x3338CCu);
    ctx->pc = 0x3338C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3338C4u;
            // 0x3338c8: 0x24060558  addiu       $a2, $zero, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338CCu; }
        if (ctx->pc != 0x3338CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338CCu; }
        if (ctx->pc != 0x3338CCu) { return; }
    }
    ctx->pc = 0x3338CCu;
label_3338cc:
    // 0x3338cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3338ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3338d0:
    // 0x3338d0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3338d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3338d4:
    // 0x3338d4: 0xc078cdc  jal         func_1E3370
label_3338d8:
    if (ctx->pc == 0x3338D8u) {
        ctx->pc = 0x3338D8u;
            // 0x3338d8: 0x92040759  lbu         $a0, 0x759($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1881)));
        ctx->pc = 0x3338DCu;
        goto label_3338dc;
    }
    ctx->pc = 0x3338D4u;
    SET_GPR_U32(ctx, 31, 0x3338DCu);
    ctx->pc = 0x3338D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3338D4u;
            // 0x3338d8: 0x92040759  lbu         $a0, 0x759($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1881)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3370u;
    if (runtime->hasFunction(0x1E3370u)) {
        auto targetFn = runtime->lookupFunction(0x1E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338DCu; }
        if (ctx->pc != 0x3338DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3370_0x1e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338DCu; }
        if (ctx->pc != 0x3338DCu) { return; }
    }
    ctx->pc = 0x3338DCu;
label_3338dc:
    // 0x3338dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3338e0:
    // 0x3338e0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x3338e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_3338e4:
    // 0x3338e4: 0x92020758  lbu         $v0, 0x758($s0)
    ctx->pc = 0x3338e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1880)));
label_3338e8:
    // 0x3338e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3338e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3338ec:
    // 0x3338ec: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x3338ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_3338f0:
    // 0x3338f0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3338f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3338f4:
    // 0x3338f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3338f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3338f8:
    // 0x3338f8: 0xc0cd2e8  jal         func_334BA0
label_3338fc:
    if (ctx->pc == 0x3338FCu) {
        ctx->pc = 0x3338FCu;
            // 0x3338fc: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x333900u;
        goto label_333900;
    }
    ctx->pc = 0x3338F8u;
    SET_GPR_U32(ctx, 31, 0x333900u);
    ctx->pc = 0x3338FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3338F8u;
            // 0x3338fc: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334BA0u;
    if (runtime->hasFunction(0x334BA0u)) {
        auto targetFn = runtime->lookupFunction(0x334BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333900u; }
        if (ctx->pc != 0x333900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334BA0_0x334ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333900u; }
        if (ctx->pc != 0x333900u) { return; }
    }
    ctx->pc = 0x333900u;
label_333900:
    // 0x333900: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x333900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_333904:
    // 0x333904: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x333904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_333908:
    // 0x333908: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_33390c:
    if (ctx->pc == 0x33390Cu) {
        ctx->pc = 0x333910u;
        goto label_333910;
    }
    ctx->pc = 0x333908u;
    {
        const bool branch_taken_0x333908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333908) {
            ctx->pc = 0x333920u;
            goto label_333920;
        }
    }
    ctx->pc = 0x333910u;
label_333910:
    // 0x333910: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x333910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_333914:
    // 0x333914: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x333914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333918:
    // 0x333918: 0xc0cd48c  jal         func_335230
label_33391c:
    if (ctx->pc == 0x33391Cu) {
        ctx->pc = 0x33391Cu;
            // 0x33391c: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x333920u;
        goto label_333920;
    }
    ctx->pc = 0x333918u;
    SET_GPR_U32(ctx, 31, 0x333920u);
    ctx->pc = 0x33391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333918u;
            // 0x33391c: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335230u;
    if (runtime->hasFunction(0x335230u)) {
        auto targetFn = runtime->lookupFunction(0x335230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333920u; }
        if (ctx->pc != 0x333920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335230_0x335230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333920u; }
        if (ctx->pc != 0x333920u) { return; }
    }
    ctx->pc = 0x333920u;
label_333920:
    // 0x333920: 0x8e42077c  lw          $v0, 0x77C($s2)
    ctx->pc = 0x333920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_333924:
    // 0x333924: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x333924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_333928:
    // 0x333928: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x333928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33392c:
    // 0x33392c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_333930:
    if (ctx->pc == 0x333930u) {
        ctx->pc = 0x333930u;
            // 0x333930: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x333934u;
        goto label_333934;
    }
    ctx->pc = 0x33392Cu;
    {
        const bool branch_taken_0x33392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33392Cu;
            // 0x333930: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33392c) {
            ctx->pc = 0x3338D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3338d4;
        }
    }
    ctx->pc = 0x333934u;
label_333934:
    // 0x333934: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x333934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_333938:
    // 0x333938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33393c:
    // 0x33393c: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x33393cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_333940:
    // 0x333940: 0x320f809  jalr        $t9
label_333944:
    if (ctx->pc == 0x333944u) {
        ctx->pc = 0x333944u;
            // 0x333944: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x333948u;
        goto label_333948;
    }
    ctx->pc = 0x333940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333948u);
        ctx->pc = 0x333944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333940u;
            // 0x333944: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x333948u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x333948u; }
            if (ctx->pc != 0x333948u) { return; }
        }
        }
    }
    ctx->pc = 0x333948u;
label_333948:
    // 0x333948: 0xae4007bc  sw          $zero, 0x7BC($s2)
    ctx->pc = 0x333948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1980), GPR_U32(ctx, 0));
label_33394c:
    // 0x33394c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_333950:
    // 0x333950: 0x8c50a348  lw          $s0, -0x5CB8($v0)
    ctx->pc = 0x333950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_333954:
    // 0x333954: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333958:
    // 0x333958: 0x8c510ed0  lw          $s1, 0xED0($v0)
    ctx->pc = 0x333958u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_33395c:
    // 0x33395c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x33395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_333960:
    // 0x333960: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x333960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_333964:
    // 0x333964: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x333964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_333968:
    // 0x333968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33396c:
    // 0x33396c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33396cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333970:
    // 0x333970: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x333970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_333974:
    // 0x333974: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x333974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_333978:
    // 0x333978: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x333978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33397c:
    // 0x33397c: 0x8e480780  lw          $t0, 0x780($s2)
    ctx->pc = 0x33397cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1920)));
label_333980:
    // 0x333980: 0xc0b3a28  jal         func_2CE8A0
label_333984:
    if (ctx->pc == 0x333984u) {
        ctx->pc = 0x333984u;
            // 0x333984: 0x23c02  srl         $a3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x333988u;
        goto label_333988;
    }
    ctx->pc = 0x333980u;
    SET_GPR_U32(ctx, 31, 0x333988u);
    ctx->pc = 0x333984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333980u;
            // 0x333984: 0x23c02  srl         $a3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333988u; }
        if (ctx->pc != 0x333988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333988u; }
        if (ctx->pc != 0x333988u) { return; }
    }
    ctx->pc = 0x333988u;
label_333988:
    // 0x333988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33398c:
    // 0x33398c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x33398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_333990:
    // 0x333990: 0x8e4207c4  lw          $v0, 0x7C4($s2)
    ctx->pc = 0x333990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1988)));
label_333994:
    // 0x333994: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x333994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_333998:
    // 0x333998: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x333998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33399c:
    // 0x33399c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33399cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3339a0:
    // 0x3339a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3339a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3339a4:
    // 0x3339a4: 0xc0aa5d8  jal         func_2A9760
label_3339a8:
    if (ctx->pc == 0x3339A8u) {
        ctx->pc = 0x3339A8u;
            // 0x3339a8: 0x24460790  addiu       $a2, $v0, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
        ctx->pc = 0x3339ACu;
        goto label_3339ac;
    }
    ctx->pc = 0x3339A4u;
    SET_GPR_U32(ctx, 31, 0x3339ACu);
    ctx->pc = 0x3339A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3339A4u;
            // 0x3339a8: 0x24460790  addiu       $a2, $v0, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3339ACu; }
        if (ctx->pc != 0x3339ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3339ACu; }
        if (ctx->pc != 0x3339ACu) { return; }
    }
    ctx->pc = 0x3339ACu;
label_3339ac:
    // 0x3339ac: 0x8e4207c4  lw          $v0, 0x7C4($s2)
    ctx->pc = 0x3339acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1988)));
label_3339b0:
    // 0x3339b0: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x3339b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_3339b4:
    // 0x3339b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3339b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3339b8:
    // 0x3339b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3339b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3339bc:
    // 0x3339bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3339c0:
    // 0x3339c0: 0xac4307c8  sw          $v1, 0x7C8($v0)
    ctx->pc = 0x3339c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1992), GPR_U32(ctx, 3));
label_3339c4:
    // 0x3339c4: 0x8e4207c4  lw          $v0, 0x7C4($s2)
    ctx->pc = 0x3339c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1988)));
label_3339c8:
    // 0x3339c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3339c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3339cc:
    // 0x3339cc: 0xc057fa4  jal         func_15FE90
label_3339d0:
    if (ctx->pc == 0x3339D0u) {
        ctx->pc = 0x3339D0u;
            // 0x3339d0: 0xae4207c4  sw          $v0, 0x7C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1988), GPR_U32(ctx, 2));
        ctx->pc = 0x3339D4u;
        goto label_3339d4;
    }
    ctx->pc = 0x3339CCu;
    SET_GPR_U32(ctx, 31, 0x3339D4u);
    ctx->pc = 0x3339D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3339CCu;
            // 0x3339d0: 0xae4207c4  sw          $v0, 0x7C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1988), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE90u;
    if (runtime->hasFunction(0x15FE90u)) {
        auto targetFn = runtime->lookupFunction(0x15FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3339D4u; }
        if (ctx->pc != 0x3339D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE90_0x15fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3339D4u; }
        if (ctx->pc != 0x3339D4u) { return; }
    }
    ctx->pc = 0x3339D4u;
label_3339d4:
    // 0x3339d4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x3339d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_3339d8:
    // 0x3339d8: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x3339d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_3339dc:
    // 0x3339dc: 0x5483ffe2  bnel        $a0, $v1, . + 4 + (-0x1E << 2)
label_3339e0:
    if (ctx->pc == 0x3339E0u) {
        ctx->pc = 0x3339E0u;
            // 0x3339e0: 0x8fa2007c  lw          $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->pc = 0x3339E4u;
        goto label_3339e4;
    }
    ctx->pc = 0x3339DCu;
    {
        const bool branch_taken_0x3339dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3339dc) {
            ctx->pc = 0x3339E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3339DCu;
            // 0x3339e0: 0x8fa2007c  lw          $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_333968;
        }
    }
    ctx->pc = 0x3339E4u;
label_3339e4:
    // 0x3339e4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3339e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3339e8:
    // 0x3339e8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_3339ec:
    if (ctx->pc == 0x3339ECu) {
        ctx->pc = 0x3339ECu;
            // 0x3339ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3339F0u;
        goto label_3339f0;
    }
    ctx->pc = 0x3339E8u;
    {
        const bool branch_taken_0x3339e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3339e8) {
            ctx->pc = 0x3339ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3339E8u;
            // 0x3339ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3339FCu;
            goto label_3339fc;
        }
    }
    ctx->pc = 0x3339F0u;
label_3339f0:
    // 0x3339f0: 0xc0cd3d4  jal         func_334F50
label_3339f4:
    if (ctx->pc == 0x3339F4u) {
        ctx->pc = 0x3339F4u;
            // 0x3339f4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3339F8u;
        goto label_3339f8;
    }
    ctx->pc = 0x3339F0u;
    SET_GPR_U32(ctx, 31, 0x3339F8u);
    ctx->pc = 0x3339F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3339F0u;
            // 0x3339f4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    if (runtime->hasFunction(0x334F50u)) {
        auto targetFn = runtime->lookupFunction(0x334F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3339F8u; }
        if (ctx->pc != 0x3339F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334F50_0x334f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3339F8u; }
        if (ctx->pc != 0x3339F8u) { return; }
    }
    ctx->pc = 0x3339F8u;
label_3339f8:
    // 0x3339f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3339f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3339fc:
    // 0x3339fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3339fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_333a00:
    // 0x333a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_333a04:
    // 0x333a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_333a08:
    // 0x333a08: 0x3e00008  jr          $ra
label_333a0c:
    if (ctx->pc == 0x333A0Cu) {
        ctx->pc = 0x333A0Cu;
            // 0x333a0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x333A10u;
        goto label_fallthrough_0x333a08;
    }
    ctx->pc = 0x333A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333A08u;
            // 0x333a0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x333a08:
    ctx->pc = 0x333A10u;
}
