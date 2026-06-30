#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CA710
// Address: 0x4ca710 - 0x4ca9f0
void sub_004CA710_0x4ca710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA710_0x4ca710");
#endif

    switch (ctx->pc) {
        case 0x4ca710u: goto label_4ca710;
        case 0x4ca714u: goto label_4ca714;
        case 0x4ca718u: goto label_4ca718;
        case 0x4ca71cu: goto label_4ca71c;
        case 0x4ca720u: goto label_4ca720;
        case 0x4ca724u: goto label_4ca724;
        case 0x4ca728u: goto label_4ca728;
        case 0x4ca72cu: goto label_4ca72c;
        case 0x4ca730u: goto label_4ca730;
        case 0x4ca734u: goto label_4ca734;
        case 0x4ca738u: goto label_4ca738;
        case 0x4ca73cu: goto label_4ca73c;
        case 0x4ca740u: goto label_4ca740;
        case 0x4ca744u: goto label_4ca744;
        case 0x4ca748u: goto label_4ca748;
        case 0x4ca74cu: goto label_4ca74c;
        case 0x4ca750u: goto label_4ca750;
        case 0x4ca754u: goto label_4ca754;
        case 0x4ca758u: goto label_4ca758;
        case 0x4ca75cu: goto label_4ca75c;
        case 0x4ca760u: goto label_4ca760;
        case 0x4ca764u: goto label_4ca764;
        case 0x4ca768u: goto label_4ca768;
        case 0x4ca76cu: goto label_4ca76c;
        case 0x4ca770u: goto label_4ca770;
        case 0x4ca774u: goto label_4ca774;
        case 0x4ca778u: goto label_4ca778;
        case 0x4ca77cu: goto label_4ca77c;
        case 0x4ca780u: goto label_4ca780;
        case 0x4ca784u: goto label_4ca784;
        case 0x4ca788u: goto label_4ca788;
        case 0x4ca78cu: goto label_4ca78c;
        case 0x4ca790u: goto label_4ca790;
        case 0x4ca794u: goto label_4ca794;
        case 0x4ca798u: goto label_4ca798;
        case 0x4ca79cu: goto label_4ca79c;
        case 0x4ca7a0u: goto label_4ca7a0;
        case 0x4ca7a4u: goto label_4ca7a4;
        case 0x4ca7a8u: goto label_4ca7a8;
        case 0x4ca7acu: goto label_4ca7ac;
        case 0x4ca7b0u: goto label_4ca7b0;
        case 0x4ca7b4u: goto label_4ca7b4;
        case 0x4ca7b8u: goto label_4ca7b8;
        case 0x4ca7bcu: goto label_4ca7bc;
        case 0x4ca7c0u: goto label_4ca7c0;
        case 0x4ca7c4u: goto label_4ca7c4;
        case 0x4ca7c8u: goto label_4ca7c8;
        case 0x4ca7ccu: goto label_4ca7cc;
        case 0x4ca7d0u: goto label_4ca7d0;
        case 0x4ca7d4u: goto label_4ca7d4;
        case 0x4ca7d8u: goto label_4ca7d8;
        case 0x4ca7dcu: goto label_4ca7dc;
        case 0x4ca7e0u: goto label_4ca7e0;
        case 0x4ca7e4u: goto label_4ca7e4;
        case 0x4ca7e8u: goto label_4ca7e8;
        case 0x4ca7ecu: goto label_4ca7ec;
        case 0x4ca7f0u: goto label_4ca7f0;
        case 0x4ca7f4u: goto label_4ca7f4;
        case 0x4ca7f8u: goto label_4ca7f8;
        case 0x4ca7fcu: goto label_4ca7fc;
        case 0x4ca800u: goto label_4ca800;
        case 0x4ca804u: goto label_4ca804;
        case 0x4ca808u: goto label_4ca808;
        case 0x4ca80cu: goto label_4ca80c;
        case 0x4ca810u: goto label_4ca810;
        case 0x4ca814u: goto label_4ca814;
        case 0x4ca818u: goto label_4ca818;
        case 0x4ca81cu: goto label_4ca81c;
        case 0x4ca820u: goto label_4ca820;
        case 0x4ca824u: goto label_4ca824;
        case 0x4ca828u: goto label_4ca828;
        case 0x4ca82cu: goto label_4ca82c;
        case 0x4ca830u: goto label_4ca830;
        case 0x4ca834u: goto label_4ca834;
        case 0x4ca838u: goto label_4ca838;
        case 0x4ca83cu: goto label_4ca83c;
        case 0x4ca840u: goto label_4ca840;
        case 0x4ca844u: goto label_4ca844;
        case 0x4ca848u: goto label_4ca848;
        case 0x4ca84cu: goto label_4ca84c;
        case 0x4ca850u: goto label_4ca850;
        case 0x4ca854u: goto label_4ca854;
        case 0x4ca858u: goto label_4ca858;
        case 0x4ca85cu: goto label_4ca85c;
        case 0x4ca860u: goto label_4ca860;
        case 0x4ca864u: goto label_4ca864;
        case 0x4ca868u: goto label_4ca868;
        case 0x4ca86cu: goto label_4ca86c;
        case 0x4ca870u: goto label_4ca870;
        case 0x4ca874u: goto label_4ca874;
        case 0x4ca878u: goto label_4ca878;
        case 0x4ca87cu: goto label_4ca87c;
        case 0x4ca880u: goto label_4ca880;
        case 0x4ca884u: goto label_4ca884;
        case 0x4ca888u: goto label_4ca888;
        case 0x4ca88cu: goto label_4ca88c;
        case 0x4ca890u: goto label_4ca890;
        case 0x4ca894u: goto label_4ca894;
        case 0x4ca898u: goto label_4ca898;
        case 0x4ca89cu: goto label_4ca89c;
        case 0x4ca8a0u: goto label_4ca8a0;
        case 0x4ca8a4u: goto label_4ca8a4;
        case 0x4ca8a8u: goto label_4ca8a8;
        case 0x4ca8acu: goto label_4ca8ac;
        case 0x4ca8b0u: goto label_4ca8b0;
        case 0x4ca8b4u: goto label_4ca8b4;
        case 0x4ca8b8u: goto label_4ca8b8;
        case 0x4ca8bcu: goto label_4ca8bc;
        case 0x4ca8c0u: goto label_4ca8c0;
        case 0x4ca8c4u: goto label_4ca8c4;
        case 0x4ca8c8u: goto label_4ca8c8;
        case 0x4ca8ccu: goto label_4ca8cc;
        case 0x4ca8d0u: goto label_4ca8d0;
        case 0x4ca8d4u: goto label_4ca8d4;
        case 0x4ca8d8u: goto label_4ca8d8;
        case 0x4ca8dcu: goto label_4ca8dc;
        case 0x4ca8e0u: goto label_4ca8e0;
        case 0x4ca8e4u: goto label_4ca8e4;
        case 0x4ca8e8u: goto label_4ca8e8;
        case 0x4ca8ecu: goto label_4ca8ec;
        case 0x4ca8f0u: goto label_4ca8f0;
        case 0x4ca8f4u: goto label_4ca8f4;
        case 0x4ca8f8u: goto label_4ca8f8;
        case 0x4ca8fcu: goto label_4ca8fc;
        case 0x4ca900u: goto label_4ca900;
        case 0x4ca904u: goto label_4ca904;
        case 0x4ca908u: goto label_4ca908;
        case 0x4ca90cu: goto label_4ca90c;
        case 0x4ca910u: goto label_4ca910;
        case 0x4ca914u: goto label_4ca914;
        case 0x4ca918u: goto label_4ca918;
        case 0x4ca91cu: goto label_4ca91c;
        case 0x4ca920u: goto label_4ca920;
        case 0x4ca924u: goto label_4ca924;
        case 0x4ca928u: goto label_4ca928;
        case 0x4ca92cu: goto label_4ca92c;
        case 0x4ca930u: goto label_4ca930;
        case 0x4ca934u: goto label_4ca934;
        case 0x4ca938u: goto label_4ca938;
        case 0x4ca93cu: goto label_4ca93c;
        case 0x4ca940u: goto label_4ca940;
        case 0x4ca944u: goto label_4ca944;
        case 0x4ca948u: goto label_4ca948;
        case 0x4ca94cu: goto label_4ca94c;
        case 0x4ca950u: goto label_4ca950;
        case 0x4ca954u: goto label_4ca954;
        case 0x4ca958u: goto label_4ca958;
        case 0x4ca95cu: goto label_4ca95c;
        case 0x4ca960u: goto label_4ca960;
        case 0x4ca964u: goto label_4ca964;
        case 0x4ca968u: goto label_4ca968;
        case 0x4ca96cu: goto label_4ca96c;
        case 0x4ca970u: goto label_4ca970;
        case 0x4ca974u: goto label_4ca974;
        case 0x4ca978u: goto label_4ca978;
        case 0x4ca97cu: goto label_4ca97c;
        case 0x4ca980u: goto label_4ca980;
        case 0x4ca984u: goto label_4ca984;
        case 0x4ca988u: goto label_4ca988;
        case 0x4ca98cu: goto label_4ca98c;
        case 0x4ca990u: goto label_4ca990;
        case 0x4ca994u: goto label_4ca994;
        case 0x4ca998u: goto label_4ca998;
        case 0x4ca99cu: goto label_4ca99c;
        case 0x4ca9a0u: goto label_4ca9a0;
        case 0x4ca9a4u: goto label_4ca9a4;
        case 0x4ca9a8u: goto label_4ca9a8;
        case 0x4ca9acu: goto label_4ca9ac;
        case 0x4ca9b0u: goto label_4ca9b0;
        case 0x4ca9b4u: goto label_4ca9b4;
        case 0x4ca9b8u: goto label_4ca9b8;
        case 0x4ca9bcu: goto label_4ca9bc;
        case 0x4ca9c0u: goto label_4ca9c0;
        case 0x4ca9c4u: goto label_4ca9c4;
        case 0x4ca9c8u: goto label_4ca9c8;
        case 0x4ca9ccu: goto label_4ca9cc;
        case 0x4ca9d0u: goto label_4ca9d0;
        case 0x4ca9d4u: goto label_4ca9d4;
        case 0x4ca9d8u: goto label_4ca9d8;
        case 0x4ca9dcu: goto label_4ca9dc;
        case 0x4ca9e0u: goto label_4ca9e0;
        case 0x4ca9e4u: goto label_4ca9e4;
        case 0x4ca9e8u: goto label_4ca9e8;
        case 0x4ca9ecu: goto label_4ca9ec;
        default: break;
    }

    ctx->pc = 0x4ca710u;

label_4ca710:
    // 0x4ca710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4ca710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4ca714:
    // 0x4ca714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4ca714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4ca718:
    // 0x4ca718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ca718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ca71c:
    // 0x4ca71c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ca71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ca720:
    // 0x4ca720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ca720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ca724:
    // 0x4ca724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ca724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ca728:
    // 0x4ca728: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ca728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ca72c:
    // 0x4ca72c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ca72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ca730:
    // 0x4ca730: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4ca730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_4ca734:
    // 0x4ca734: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ca734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ca738:
    // 0x4ca738: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4ca738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_4ca73c:
    // 0x4ca73c: 0xc0b4adc  jal         func_2D2B70
label_4ca740:
    if (ctx->pc == 0x4CA740u) {
        ctx->pc = 0x4CA740u;
            // 0x4ca740: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x4CA744u;
        goto label_4ca744;
    }
    ctx->pc = 0x4CA73Cu;
    SET_GPR_U32(ctx, 31, 0x4CA744u);
    ctx->pc = 0x4CA740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA73Cu;
            // 0x4ca740: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA744u; }
        if (ctx->pc != 0x4CA744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2B70_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA744u; }
        if (ctx->pc != 0x4CA744u) { return; }
    }
    ctx->pc = 0x4CA744u;
label_4ca744:
    // 0x4ca744: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x4ca744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4ca748:
    // 0x4ca748: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4ca748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4ca74c:
    // 0x4ca74c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ca74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ca750:
    // 0x4ca750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ca754:
    // 0x4ca754: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4ca754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_4ca758:
    // 0x4ca758: 0xc0aeaf4  jal         func_2BABD0
label_4ca75c:
    if (ctx->pc == 0x4CA75Cu) {
        ctx->pc = 0x4CA75Cu;
            // 0x4ca75c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4CA760u;
        goto label_4ca760;
    }
    ctx->pc = 0x4CA758u;
    SET_GPR_U32(ctx, 31, 0x4CA760u);
    ctx->pc = 0x4CA75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA758u;
            // 0x4ca75c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA760u; }
        if (ctx->pc != 0x4CA760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA760u; }
        if (ctx->pc != 0x4CA760u) { return; }
    }
    ctx->pc = 0x4CA760u;
label_4ca760:
    // 0x4ca760: 0xc132ad8  jal         func_4CAB60
label_4ca764:
    if (ctx->pc == 0x4CA764u) {
        ctx->pc = 0x4CA764u;
            // 0x4ca764: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4CA768u;
        goto label_4ca768;
    }
    ctx->pc = 0x4CA760u;
    SET_GPR_U32(ctx, 31, 0x4CA768u);
    ctx->pc = 0x4CA764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA760u;
            // 0x4ca764: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CAB60u;
    if (runtime->hasFunction(0x4CAB60u)) {
        auto targetFn = runtime->lookupFunction(0x4CAB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA768u; }
        if (ctx->pc != 0x4CA768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CAB60_0x4cab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA768u; }
        if (ctx->pc != 0x4CA768u) { return; }
    }
    ctx->pc = 0x4CA768u;
label_4ca768:
    // 0x4ca768: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ca768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ca76c:
    // 0x4ca76c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ca76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ca770:
    // 0x4ca770: 0x24631b00  addiu       $v1, $v1, 0x1B00
    ctx->pc = 0x4ca770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_4ca774:
    // 0x4ca774: 0x24421b38  addiu       $v0, $v0, 0x1B38
    ctx->pc = 0x4ca774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6968));
label_4ca778:
    // 0x4ca778: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ca77c:
    // 0x4ca77c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4ca77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4ca780:
    // 0x4ca780: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4ca780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4ca784:
    // 0x4ca784: 0xc132ad0  jal         func_4CAB40
label_4ca788:
    if (ctx->pc == 0x4CA788u) {
        ctx->pc = 0x4CA788u;
            // 0x4ca788: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x4CA78Cu;
        goto label_4ca78c;
    }
    ctx->pc = 0x4CA784u;
    SET_GPR_U32(ctx, 31, 0x4CA78Cu);
    ctx->pc = 0x4CA788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA784u;
            // 0x4ca788: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CAB40u;
    if (runtime->hasFunction(0x4CAB40u)) {
        auto targetFn = runtime->lookupFunction(0x4CAB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA78Cu; }
        if (ctx->pc != 0x4CA78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CAB40_0x4cab40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA78Cu; }
        if (ctx->pc != 0x4CA78Cu) { return; }
    }
    ctx->pc = 0x4CA78Cu;
label_4ca78c:
    // 0x4ca78c: 0xc132ad0  jal         func_4CAB40
label_4ca790:
    if (ctx->pc == 0x4CA790u) {
        ctx->pc = 0x4CA790u;
            // 0x4ca790: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4CA794u;
        goto label_4ca794;
    }
    ctx->pc = 0x4CA78Cu;
    SET_GPR_U32(ctx, 31, 0x4CA794u);
    ctx->pc = 0x4CA790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA78Cu;
            // 0x4ca790: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CAB40u;
    if (runtime->hasFunction(0x4CAB40u)) {
        auto targetFn = runtime->lookupFunction(0x4CAB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA794u; }
        if (ctx->pc != 0x4CA794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CAB40_0x4cab40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA794u; }
        if (ctx->pc != 0x4CA794u) { return; }
    }
    ctx->pc = 0x4CA794u;
label_4ca794:
    // 0x4ca794: 0xc132ac4  jal         func_4CAB10
label_4ca798:
    if (ctx->pc == 0x4CA798u) {
        ctx->pc = 0x4CA798u;
            // 0x4ca798: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x4CA79Cu;
        goto label_4ca79c;
    }
    ctx->pc = 0x4CA794u;
    SET_GPR_U32(ctx, 31, 0x4CA79Cu);
    ctx->pc = 0x4CA798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA794u;
            // 0x4ca798: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CAB10u;
    if (runtime->hasFunction(0x4CAB10u)) {
        auto targetFn = runtime->lookupFunction(0x4CAB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA79Cu; }
        if (ctx->pc != 0x4CA79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CAB10_0x4cab10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA79Cu; }
        if (ctx->pc != 0x4CA79Cu) { return; }
    }
    ctx->pc = 0x4CA79Cu;
label_4ca79c:
    // 0x4ca79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ca7a0:
    // 0x4ca7a0: 0xc0aeac0  jal         func_2BAB00
label_4ca7a4:
    if (ctx->pc == 0x4CA7A4u) {
        ctx->pc = 0x4CA7A4u;
            // 0x4ca7a4: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x4CA7A8u;
        goto label_4ca7a8;
    }
    ctx->pc = 0x4CA7A0u;
    SET_GPR_U32(ctx, 31, 0x4CA7A8u);
    ctx->pc = 0x4CA7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA7A0u;
            // 0x4ca7a4: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7A8u; }
        if (ctx->pc != 0x4CA7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7A8u; }
        if (ctx->pc != 0x4CA7A8u) { return; }
    }
    ctx->pc = 0x4CA7A8u;
label_4ca7a8:
    // 0x4ca7a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ca7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca7ac:
    // 0x4ca7ac: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_4ca7b0:
    if (ctx->pc == 0x4CA7B0u) {
        ctx->pc = 0x4CA7B4u;
        goto label_4ca7b4;
    }
    ctx->pc = 0x4CA7ACu;
    {
        const bool branch_taken_0x4ca7ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca7ac) {
            ctx->pc = 0x4CA830u;
            goto label_4ca830;
        }
    }
    ctx->pc = 0x4CA7B4u;
label_4ca7b4:
    // 0x4ca7b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4ca7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4ca7b8:
    // 0x4ca7b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ca7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4ca7bc:
    // 0x4ca7bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4ca7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4ca7c0:
    // 0x4ca7c0: 0xc040138  jal         func_1004E0
label_4ca7c4:
    if (ctx->pc == 0x4CA7C4u) {
        ctx->pc = 0x4CA7C4u;
            // 0x4ca7c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4CA7C8u;
        goto label_4ca7c8;
    }
    ctx->pc = 0x4CA7C0u;
    SET_GPR_U32(ctx, 31, 0x4CA7C8u);
    ctx->pc = 0x4CA7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA7C0u;
            // 0x4ca7c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7C8u; }
        if (ctx->pc != 0x4CA7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7C8u; }
        if (ctx->pc != 0x4CA7C8u) { return; }
    }
    ctx->pc = 0x4CA7C8u;
label_4ca7c8:
    // 0x4ca7c8: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4ca7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4ca7cc:
    // 0x4ca7cc: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4ca7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4ca7d0:
    // 0x4ca7d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ca7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca7d4:
    // 0x4ca7d4: 0x24a5aa20  addiu       $a1, $a1, -0x55E0
    ctx->pc = 0x4ca7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945312));
label_4ca7d8:
    // 0x4ca7d8: 0x24c69bd0  addiu       $a2, $a2, -0x6430
    ctx->pc = 0x4ca7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941648));
label_4ca7dc:
    // 0x4ca7dc: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x4ca7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_4ca7e0:
    // 0x4ca7e0: 0xc040840  jal         func_102100
label_4ca7e4:
    if (ctx->pc == 0x4CA7E4u) {
        ctx->pc = 0x4CA7E4u;
            // 0x4ca7e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA7E8u;
        goto label_4ca7e8;
    }
    ctx->pc = 0x4CA7E0u;
    SET_GPR_U32(ctx, 31, 0x4CA7E8u);
    ctx->pc = 0x4CA7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA7E0u;
            // 0x4ca7e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7E8u; }
        if (ctx->pc != 0x4CA7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7E8u; }
        if (ctx->pc != 0x4CA7E8u) { return; }
    }
    ctx->pc = 0x4CA7E8u;
label_4ca7e8:
    // 0x4ca7e8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x4ca7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_4ca7ec:
    // 0x4ca7ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4ca7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca7f0:
    // 0x4ca7f0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4ca7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4ca7f4:
    // 0x4ca7f4: 0xc132a84  jal         func_4CAA10
label_4ca7f8:
    if (ctx->pc == 0x4CA7F8u) {
        ctx->pc = 0x4CA7F8u;
            // 0x4ca7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA7FCu;
        goto label_4ca7fc;
    }
    ctx->pc = 0x4CA7F4u;
    SET_GPR_U32(ctx, 31, 0x4CA7FCu);
    ctx->pc = 0x4CA7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA7F4u;
            // 0x4ca7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CAA10u;
    if (runtime->hasFunction(0x4CAA10u)) {
        auto targetFn = runtime->lookupFunction(0x4CAA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7FCu; }
        if (ctx->pc != 0x4CA7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CAA10_0x4caa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA7FCu; }
        if (ctx->pc != 0x4CA7FCu) { return; }
    }
    ctx->pc = 0x4CA7FCu;
label_4ca7fc:
    // 0x4ca7fc: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4ca7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4ca800:
    // 0x4ca800: 0xc132a84  jal         func_4CAA10
label_4ca804:
    if (ctx->pc == 0x4CA804u) {
        ctx->pc = 0x4CA804u;
            // 0x4ca804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA808u;
        goto label_4ca808;
    }
    ctx->pc = 0x4CA800u;
    SET_GPR_U32(ctx, 31, 0x4CA808u);
    ctx->pc = 0x4CA804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA800u;
            // 0x4ca804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CAA10u;
    if (runtime->hasFunction(0x4CAA10u)) {
        auto targetFn = runtime->lookupFunction(0x4CAA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA808u; }
        if (ctx->pc != 0x4CA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CAA10_0x4caa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA808u; }
        if (ctx->pc != 0x4CA808u) { return; }
    }
    ctx->pc = 0x4CA808u;
label_4ca808:
    // 0x4ca808: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ca808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca80c:
    // 0x4ca80c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4ca80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4ca810:
    // 0x4ca810: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x4ca810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_4ca814:
    // 0x4ca814: 0xc132a7c  jal         func_4CA9F0
label_4ca818:
    if (ctx->pc == 0x4CA818u) {
        ctx->pc = 0x4CA818u;
            // 0x4ca818: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->pc = 0x4CA81Cu;
        goto label_4ca81c;
    }
    ctx->pc = 0x4CA814u;
    SET_GPR_U32(ctx, 31, 0x4CA81Cu);
    ctx->pc = 0x4CA818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA814u;
            // 0x4ca818: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA9F0u;
    if (runtime->hasFunction(0x4CA9F0u)) {
        auto targetFn = runtime->lookupFunction(0x4CA9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA81Cu; }
        if (ctx->pc != 0x4CA81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA9F0_0x4ca9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA81Cu; }
        if (ctx->pc != 0x4CA81Cu) { return; }
    }
    ctx->pc = 0x4CA81Cu;
label_4ca81c:
    // 0x4ca81c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ca81cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ca820:
    // 0x4ca820: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x4ca820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ca824:
    // 0x4ca824: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4ca828:
    if (ctx->pc == 0x4CA828u) {
        ctx->pc = 0x4CA828u;
            // 0x4ca828: 0x26940140  addiu       $s4, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x4CA82Cu;
        goto label_4ca82c;
    }
    ctx->pc = 0x4CA824u;
    {
        const bool branch_taken_0x4ca824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA824u;
            // 0x4ca828: 0x26940140  addiu       $s4, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca824) {
            ctx->pc = 0x4CA80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ca80c;
        }
    }
    ctx->pc = 0x4CA82Cu;
label_4ca82c:
    // 0x4ca82c: 0x0  nop
    ctx->pc = 0x4ca82cu;
    // NOP
label_4ca830:
    // 0x4ca830: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ca830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ca834:
    // 0x4ca834: 0x244219e0  addiu       $v0, $v0, 0x19E0
    ctx->pc = 0x4ca834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6624));
label_4ca838:
    // 0x4ca838: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x4ca838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
label_4ca83c:
    // 0x4ca83c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ca83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ca840:
    // 0x4ca840: 0x244219e8  addiu       $v0, $v0, 0x19E8
    ctx->pc = 0x4ca840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6632));
label_4ca844:
    // 0x4ca844: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x4ca844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_4ca848:
    // 0x4ca848: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ca848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ca84c:
    // 0x4ca84c: 0x24421a20  addiu       $v0, $v0, 0x1A20
    ctx->pc = 0x4ca84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6688));
label_4ca850:
    // 0x4ca850: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x4ca850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_4ca854:
    // 0x4ca854: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x4ca854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
label_4ca858:
    // 0x4ca858: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ca858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ca85c:
    // 0x4ca85c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ca85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ca860:
    // 0x4ca860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ca860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ca864:
    // 0x4ca864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ca864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ca868:
    // 0x4ca868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ca868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ca86c:
    // 0x4ca86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ca86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ca870:
    // 0x4ca870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ca870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca874:
    // 0x4ca874: 0x3e00008  jr          $ra
label_4ca878:
    if (ctx->pc == 0x4CA878u) {
        ctx->pc = 0x4CA878u;
            // 0x4ca878: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4CA87Cu;
        goto label_4ca87c;
    }
    ctx->pc = 0x4CA874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA874u;
            // 0x4ca878: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA87Cu;
label_4ca87c:
    // 0x4ca87c: 0x0  nop
    ctx->pc = 0x4ca87cu;
    // NOP
label_4ca880:
    // 0x4ca880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ca880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ca884:
    // 0x4ca884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ca884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ca888:
    // 0x4ca888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ca888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ca88c:
    // 0x4ca88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ca88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ca890:
    // 0x4ca890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ca890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ca894:
    // 0x4ca894: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_4ca898:
    if (ctx->pc == 0x4CA898u) {
        ctx->pc = 0x4CA898u;
            // 0x4ca898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA89Cu;
        goto label_4ca89c;
    }
    ctx->pc = 0x4CA894u;
    {
        const bool branch_taken_0x4ca894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA894u;
            // 0x4ca898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca894) {
            ctx->pc = 0x4CA9D0u;
            goto label_4ca9d0;
        }
    }
    ctx->pc = 0x4CA89Cu;
label_4ca89c:
    // 0x4ca89c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ca89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ca8a0:
    // 0x4ca8a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ca8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ca8a4:
    // 0x4ca8a4: 0x24631b00  addiu       $v1, $v1, 0x1B00
    ctx->pc = 0x4ca8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_4ca8a8:
    // 0x4ca8a8: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4ca8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4ca8ac:
    // 0x4ca8ac: 0x24421b38  addiu       $v0, $v0, 0x1B38
    ctx->pc = 0x4ca8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6968));
label_4ca8b0:
    // 0x4ca8b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ca8b4:
    // 0x4ca8b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4ca8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4ca8b8:
    // 0x4ca8b8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4ca8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4ca8bc:
    // 0x4ca8bc: 0xc0407c0  jal         func_101F00
label_4ca8c0:
    if (ctx->pc == 0x4CA8C0u) {
        ctx->pc = 0x4CA8C0u;
            // 0x4ca8c0: 0x24a59bd0  addiu       $a1, $a1, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941648));
        ctx->pc = 0x4CA8C4u;
        goto label_4ca8c4;
    }
    ctx->pc = 0x4CA8BCu;
    SET_GPR_U32(ctx, 31, 0x4CA8C4u);
    ctx->pc = 0x4CA8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA8BCu;
            // 0x4ca8c0: 0x24a59bd0  addiu       $a1, $a1, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA8C4u; }
        if (ctx->pc != 0x4CA8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA8C4u; }
        if (ctx->pc != 0x4CA8C4u) { return; }
    }
    ctx->pc = 0x4CA8C4u;
label_4ca8c4:
    // 0x4ca8c4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4ca8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4ca8c8:
    // 0x4ca8c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4ca8cc:
    if (ctx->pc == 0x4CA8CCu) {
        ctx->pc = 0x4CA8CCu;
            // 0x4ca8cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4CA8D0u;
        goto label_4ca8d0;
    }
    ctx->pc = 0x4CA8C8u;
    {
        const bool branch_taken_0x4ca8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca8c8) {
            ctx->pc = 0x4CA8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA8C8u;
            // 0x4ca8cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA8E4u;
            goto label_4ca8e4;
        }
    }
    ctx->pc = 0x4CA8D0u;
label_4ca8d0:
    // 0x4ca8d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ca8d4:
    if (ctx->pc == 0x4CA8D4u) {
        ctx->pc = 0x4CA8D8u;
        goto label_4ca8d8;
    }
    ctx->pc = 0x4CA8D0u;
    {
        const bool branch_taken_0x4ca8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca8d0) {
            ctx->pc = 0x4CA8E0u;
            goto label_4ca8e0;
        }
    }
    ctx->pc = 0x4CA8D8u;
label_4ca8d8:
    // 0x4ca8d8: 0xc07507c  jal         func_1D41F0
label_4ca8dc:
    if (ctx->pc == 0x4CA8DCu) {
        ctx->pc = 0x4CA8DCu;
            // 0x4ca8dc: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4CA8E0u;
        goto label_4ca8e0;
    }
    ctx->pc = 0x4CA8D8u;
    SET_GPR_U32(ctx, 31, 0x4CA8E0u);
    ctx->pc = 0x4CA8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA8D8u;
            // 0x4ca8dc: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA8E0u; }
        if (ctx->pc != 0x4CA8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA8E0u; }
        if (ctx->pc != 0x4CA8E0u) { return; }
    }
    ctx->pc = 0x4CA8E0u;
label_4ca8e0:
    // 0x4ca8e0: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4ca8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4ca8e4:
    // 0x4ca8e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ca8e8:
    if (ctx->pc == 0x4CA8E8u) {
        ctx->pc = 0x4CA8E8u;
            // 0x4ca8e8: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4CA8ECu;
        goto label_4ca8ec;
    }
    ctx->pc = 0x4CA8E4u;
    {
        const bool branch_taken_0x4ca8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca8e4) {
            ctx->pc = 0x4CA8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA8E4u;
            // 0x4ca8e8: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA914u;
            goto label_4ca914;
        }
    }
    ctx->pc = 0x4CA8ECu;
label_4ca8ec:
    // 0x4ca8ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4ca8f0:
    if (ctx->pc == 0x4CA8F0u) {
        ctx->pc = 0x4CA8F4u;
        goto label_4ca8f4;
    }
    ctx->pc = 0x4CA8ECu;
    {
        const bool branch_taken_0x4ca8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca8ec) {
            ctx->pc = 0x4CA910u;
            goto label_4ca910;
        }
    }
    ctx->pc = 0x4CA8F4u;
label_4ca8f4:
    // 0x4ca8f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ca8f8:
    if (ctx->pc == 0x4CA8F8u) {
        ctx->pc = 0x4CA8FCu;
        goto label_4ca8fc;
    }
    ctx->pc = 0x4CA8F4u;
    {
        const bool branch_taken_0x4ca8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca8f4) {
            ctx->pc = 0x4CA910u;
            goto label_4ca910;
        }
    }
    ctx->pc = 0x4CA8FCu;
label_4ca8fc:
    // 0x4ca8fc: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4ca8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4ca900:
    // 0x4ca900: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4ca904:
    if (ctx->pc == 0x4CA904u) {
        ctx->pc = 0x4CA908u;
        goto label_4ca908;
    }
    ctx->pc = 0x4CA900u;
    {
        const bool branch_taken_0x4ca900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca900) {
            ctx->pc = 0x4CA910u;
            goto label_4ca910;
        }
    }
    ctx->pc = 0x4CA908u;
label_4ca908:
    // 0x4ca908: 0xc0400a8  jal         func_1002A0
label_4ca90c:
    if (ctx->pc == 0x4CA90Cu) {
        ctx->pc = 0x4CA910u;
        goto label_4ca910;
    }
    ctx->pc = 0x4CA908u;
    SET_GPR_U32(ctx, 31, 0x4CA910u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA910u; }
        if (ctx->pc != 0x4CA910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA910u; }
        if (ctx->pc != 0x4CA910u) { return; }
    }
    ctx->pc = 0x4CA910u;
label_4ca910:
    // 0x4ca910: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4ca910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4ca914:
    // 0x4ca914: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ca918:
    if (ctx->pc == 0x4CA918u) {
        ctx->pc = 0x4CA918u;
            // 0x4ca918: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4CA91Cu;
        goto label_4ca91c;
    }
    ctx->pc = 0x4CA914u;
    {
        const bool branch_taken_0x4ca914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca914) {
            ctx->pc = 0x4CA918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA914u;
            // 0x4ca918: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA944u;
            goto label_4ca944;
        }
    }
    ctx->pc = 0x4CA91Cu;
label_4ca91c:
    // 0x4ca91c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4ca920:
    if (ctx->pc == 0x4CA920u) {
        ctx->pc = 0x4CA924u;
        goto label_4ca924;
    }
    ctx->pc = 0x4CA91Cu;
    {
        const bool branch_taken_0x4ca91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca91c) {
            ctx->pc = 0x4CA940u;
            goto label_4ca940;
        }
    }
    ctx->pc = 0x4CA924u;
label_4ca924:
    // 0x4ca924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ca928:
    if (ctx->pc == 0x4CA928u) {
        ctx->pc = 0x4CA92Cu;
        goto label_4ca92c;
    }
    ctx->pc = 0x4CA924u;
    {
        const bool branch_taken_0x4ca924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca924) {
            ctx->pc = 0x4CA940u;
            goto label_4ca940;
        }
    }
    ctx->pc = 0x4CA92Cu;
label_4ca92c:
    // 0x4ca92c: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4ca92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4ca930:
    // 0x4ca930: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4ca934:
    if (ctx->pc == 0x4CA934u) {
        ctx->pc = 0x4CA938u;
        goto label_4ca938;
    }
    ctx->pc = 0x4CA930u;
    {
        const bool branch_taken_0x4ca930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca930) {
            ctx->pc = 0x4CA940u;
            goto label_4ca940;
        }
    }
    ctx->pc = 0x4CA938u;
label_4ca938:
    // 0x4ca938: 0xc0400a8  jal         func_1002A0
label_4ca93c:
    if (ctx->pc == 0x4CA93Cu) {
        ctx->pc = 0x4CA940u;
        goto label_4ca940;
    }
    ctx->pc = 0x4CA938u;
    SET_GPR_U32(ctx, 31, 0x4CA940u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA940u; }
        if (ctx->pc != 0x4CA940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA940u; }
        if (ctx->pc != 0x4CA940u) { return; }
    }
    ctx->pc = 0x4CA940u;
label_4ca940:
    // 0x4ca940: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4ca940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4ca944:
    // 0x4ca944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ca948:
    if (ctx->pc == 0x4CA948u) {
        ctx->pc = 0x4CA94Cu;
        goto label_4ca94c;
    }
    ctx->pc = 0x4CA944u;
    {
        const bool branch_taken_0x4ca944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca944) {
            ctx->pc = 0x4CA960u;
            goto label_4ca960;
        }
    }
    ctx->pc = 0x4CA94Cu;
label_4ca94c:
    // 0x4ca94c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ca94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ca950:
    // 0x4ca950: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4ca950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4ca954:
    // 0x4ca954: 0x24631af0  addiu       $v1, $v1, 0x1AF0
    ctx->pc = 0x4ca954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6896));
label_4ca958:
    // 0x4ca958: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4ca958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4ca95c:
    // 0x4ca95c: 0xac40aa10  sw          $zero, -0x55F0($v0)
    ctx->pc = 0x4ca95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945296), GPR_U32(ctx, 0));
label_4ca960:
    // 0x4ca960: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4ca964:
    if (ctx->pc == 0x4CA964u) {
        ctx->pc = 0x4CA964u;
            // 0x4ca964: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4CA968u;
        goto label_4ca968;
    }
    ctx->pc = 0x4CA960u;
    {
        const bool branch_taken_0x4ca960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca960) {
            ctx->pc = 0x4CA964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA960u;
            // 0x4ca964: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA9BCu;
            goto label_4ca9bc;
        }
    }
    ctx->pc = 0x4CA968u;
label_4ca968:
    // 0x4ca968: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ca968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ca96c:
    // 0x4ca96c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4ca96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4ca970:
    // 0x4ca970: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ca970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ca974:
    // 0x4ca974: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4ca974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4ca978:
    // 0x4ca978: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4ca97c:
    if (ctx->pc == 0x4CA97Cu) {
        ctx->pc = 0x4CA97Cu;
            // 0x4ca97c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4CA980u;
        goto label_4ca980;
    }
    ctx->pc = 0x4CA978u;
    {
        const bool branch_taken_0x4ca978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca978) {
            ctx->pc = 0x4CA97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA978u;
            // 0x4ca97c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA994u;
            goto label_4ca994;
        }
    }
    ctx->pc = 0x4CA980u;
label_4ca980:
    // 0x4ca980: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ca980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ca984:
    // 0x4ca984: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4ca984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4ca988:
    // 0x4ca988: 0x320f809  jalr        $t9
label_4ca98c:
    if (ctx->pc == 0x4CA98Cu) {
        ctx->pc = 0x4CA98Cu;
            // 0x4ca98c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CA990u;
        goto label_4ca990;
    }
    ctx->pc = 0x4CA988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CA990u);
        ctx->pc = 0x4CA98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA988u;
            // 0x4ca98c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CA990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CA990u; }
            if (ctx->pc != 0x4CA990u) { return; }
        }
        }
    }
    ctx->pc = 0x4CA990u;
label_4ca990:
    // 0x4ca990: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4ca990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4ca994:
    // 0x4ca994: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4ca998:
    if (ctx->pc == 0x4CA998u) {
        ctx->pc = 0x4CA998u;
            // 0x4ca998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA99Cu;
        goto label_4ca99c;
    }
    ctx->pc = 0x4CA994u;
    {
        const bool branch_taken_0x4ca994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca994) {
            ctx->pc = 0x4CA998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA994u;
            // 0x4ca998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA9B0u;
            goto label_4ca9b0;
        }
    }
    ctx->pc = 0x4CA99Cu;
label_4ca99c:
    // 0x4ca99c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ca99cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ca9a0:
    // 0x4ca9a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4ca9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4ca9a4:
    // 0x4ca9a4: 0x320f809  jalr        $t9
label_4ca9a8:
    if (ctx->pc == 0x4CA9A8u) {
        ctx->pc = 0x4CA9A8u;
            // 0x4ca9a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CA9ACu;
        goto label_4ca9ac;
    }
    ctx->pc = 0x4CA9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CA9ACu);
        ctx->pc = 0x4CA9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA9A4u;
            // 0x4ca9a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CA9ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CA9ACu; }
            if (ctx->pc != 0x4CA9ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4CA9ACu;
label_4ca9ac:
    // 0x4ca9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ca9b0:
    // 0x4ca9b0: 0xc075bf8  jal         func_1D6FE0
label_4ca9b4:
    if (ctx->pc == 0x4CA9B4u) {
        ctx->pc = 0x4CA9B4u;
            // 0x4ca9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA9B8u;
        goto label_4ca9b8;
    }
    ctx->pc = 0x4CA9B0u;
    SET_GPR_U32(ctx, 31, 0x4CA9B8u);
    ctx->pc = 0x4CA9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA9B0u;
            // 0x4ca9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA9B8u; }
        if (ctx->pc != 0x4CA9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA9B8u; }
        if (ctx->pc != 0x4CA9B8u) { return; }
    }
    ctx->pc = 0x4CA9B8u;
label_4ca9b8:
    // 0x4ca9b8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ca9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ca9bc:
    // 0x4ca9bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ca9bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ca9c0:
    // 0x4ca9c0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ca9c4:
    if (ctx->pc == 0x4CA9C4u) {
        ctx->pc = 0x4CA9C4u;
            // 0x4ca9c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA9C8u;
        goto label_4ca9c8;
    }
    ctx->pc = 0x4CA9C0u;
    {
        const bool branch_taken_0x4ca9c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ca9c0) {
            ctx->pc = 0x4CA9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA9C0u;
            // 0x4ca9c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA9D4u;
            goto label_4ca9d4;
        }
    }
    ctx->pc = 0x4CA9C8u;
label_4ca9c8:
    // 0x4ca9c8: 0xc0400a8  jal         func_1002A0
label_4ca9cc:
    if (ctx->pc == 0x4CA9CCu) {
        ctx->pc = 0x4CA9CCu;
            // 0x4ca9cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA9D0u;
        goto label_4ca9d0;
    }
    ctx->pc = 0x4CA9C8u;
    SET_GPR_U32(ctx, 31, 0x4CA9D0u);
    ctx->pc = 0x4CA9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA9C8u;
            // 0x4ca9cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA9D0u; }
        if (ctx->pc != 0x4CA9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA9D0u; }
        if (ctx->pc != 0x4CA9D0u) { return; }
    }
    ctx->pc = 0x4CA9D0u;
label_4ca9d0:
    // 0x4ca9d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ca9d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ca9d4:
    // 0x4ca9d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ca9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ca9d8:
    // 0x4ca9d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ca9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ca9dc:
    // 0x4ca9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ca9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca9e0:
    // 0x4ca9e0: 0x3e00008  jr          $ra
label_4ca9e4:
    if (ctx->pc == 0x4CA9E4u) {
        ctx->pc = 0x4CA9E4u;
            // 0x4ca9e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CA9E8u;
        goto label_4ca9e8;
    }
    ctx->pc = 0x4CA9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA9E0u;
            // 0x4ca9e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA9E8u;
label_4ca9e8:
    // 0x4ca9e8: 0x0  nop
    ctx->pc = 0x4ca9e8u;
    // NOP
label_4ca9ec:
    // 0x4ca9ec: 0x0  nop
    ctx->pc = 0x4ca9ecu;
    // NOP
}
