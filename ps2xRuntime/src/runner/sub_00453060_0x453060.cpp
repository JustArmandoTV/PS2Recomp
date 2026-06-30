#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00453060
// Address: 0x453060 - 0x4533c0
void sub_00453060_0x453060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453060_0x453060");
#endif

    switch (ctx->pc) {
        case 0x453060u: goto label_453060;
        case 0x453064u: goto label_453064;
        case 0x453068u: goto label_453068;
        case 0x45306cu: goto label_45306c;
        case 0x453070u: goto label_453070;
        case 0x453074u: goto label_453074;
        case 0x453078u: goto label_453078;
        case 0x45307cu: goto label_45307c;
        case 0x453080u: goto label_453080;
        case 0x453084u: goto label_453084;
        case 0x453088u: goto label_453088;
        case 0x45308cu: goto label_45308c;
        case 0x453090u: goto label_453090;
        case 0x453094u: goto label_453094;
        case 0x453098u: goto label_453098;
        case 0x45309cu: goto label_45309c;
        case 0x4530a0u: goto label_4530a0;
        case 0x4530a4u: goto label_4530a4;
        case 0x4530a8u: goto label_4530a8;
        case 0x4530acu: goto label_4530ac;
        case 0x4530b0u: goto label_4530b0;
        case 0x4530b4u: goto label_4530b4;
        case 0x4530b8u: goto label_4530b8;
        case 0x4530bcu: goto label_4530bc;
        case 0x4530c0u: goto label_4530c0;
        case 0x4530c4u: goto label_4530c4;
        case 0x4530c8u: goto label_4530c8;
        case 0x4530ccu: goto label_4530cc;
        case 0x4530d0u: goto label_4530d0;
        case 0x4530d4u: goto label_4530d4;
        case 0x4530d8u: goto label_4530d8;
        case 0x4530dcu: goto label_4530dc;
        case 0x4530e0u: goto label_4530e0;
        case 0x4530e4u: goto label_4530e4;
        case 0x4530e8u: goto label_4530e8;
        case 0x4530ecu: goto label_4530ec;
        case 0x4530f0u: goto label_4530f0;
        case 0x4530f4u: goto label_4530f4;
        case 0x4530f8u: goto label_4530f8;
        case 0x4530fcu: goto label_4530fc;
        case 0x453100u: goto label_453100;
        case 0x453104u: goto label_453104;
        case 0x453108u: goto label_453108;
        case 0x45310cu: goto label_45310c;
        case 0x453110u: goto label_453110;
        case 0x453114u: goto label_453114;
        case 0x453118u: goto label_453118;
        case 0x45311cu: goto label_45311c;
        case 0x453120u: goto label_453120;
        case 0x453124u: goto label_453124;
        case 0x453128u: goto label_453128;
        case 0x45312cu: goto label_45312c;
        case 0x453130u: goto label_453130;
        case 0x453134u: goto label_453134;
        case 0x453138u: goto label_453138;
        case 0x45313cu: goto label_45313c;
        case 0x453140u: goto label_453140;
        case 0x453144u: goto label_453144;
        case 0x453148u: goto label_453148;
        case 0x45314cu: goto label_45314c;
        case 0x453150u: goto label_453150;
        case 0x453154u: goto label_453154;
        case 0x453158u: goto label_453158;
        case 0x45315cu: goto label_45315c;
        case 0x453160u: goto label_453160;
        case 0x453164u: goto label_453164;
        case 0x453168u: goto label_453168;
        case 0x45316cu: goto label_45316c;
        case 0x453170u: goto label_453170;
        case 0x453174u: goto label_453174;
        case 0x453178u: goto label_453178;
        case 0x45317cu: goto label_45317c;
        case 0x453180u: goto label_453180;
        case 0x453184u: goto label_453184;
        case 0x453188u: goto label_453188;
        case 0x45318cu: goto label_45318c;
        case 0x453190u: goto label_453190;
        case 0x453194u: goto label_453194;
        case 0x453198u: goto label_453198;
        case 0x45319cu: goto label_45319c;
        case 0x4531a0u: goto label_4531a0;
        case 0x4531a4u: goto label_4531a4;
        case 0x4531a8u: goto label_4531a8;
        case 0x4531acu: goto label_4531ac;
        case 0x4531b0u: goto label_4531b0;
        case 0x4531b4u: goto label_4531b4;
        case 0x4531b8u: goto label_4531b8;
        case 0x4531bcu: goto label_4531bc;
        case 0x4531c0u: goto label_4531c0;
        case 0x4531c4u: goto label_4531c4;
        case 0x4531c8u: goto label_4531c8;
        case 0x4531ccu: goto label_4531cc;
        case 0x4531d0u: goto label_4531d0;
        case 0x4531d4u: goto label_4531d4;
        case 0x4531d8u: goto label_4531d8;
        case 0x4531dcu: goto label_4531dc;
        case 0x4531e0u: goto label_4531e0;
        case 0x4531e4u: goto label_4531e4;
        case 0x4531e8u: goto label_4531e8;
        case 0x4531ecu: goto label_4531ec;
        case 0x4531f0u: goto label_4531f0;
        case 0x4531f4u: goto label_4531f4;
        case 0x4531f8u: goto label_4531f8;
        case 0x4531fcu: goto label_4531fc;
        case 0x453200u: goto label_453200;
        case 0x453204u: goto label_453204;
        case 0x453208u: goto label_453208;
        case 0x45320cu: goto label_45320c;
        case 0x453210u: goto label_453210;
        case 0x453214u: goto label_453214;
        case 0x453218u: goto label_453218;
        case 0x45321cu: goto label_45321c;
        case 0x453220u: goto label_453220;
        case 0x453224u: goto label_453224;
        case 0x453228u: goto label_453228;
        case 0x45322cu: goto label_45322c;
        case 0x453230u: goto label_453230;
        case 0x453234u: goto label_453234;
        case 0x453238u: goto label_453238;
        case 0x45323cu: goto label_45323c;
        case 0x453240u: goto label_453240;
        case 0x453244u: goto label_453244;
        case 0x453248u: goto label_453248;
        case 0x45324cu: goto label_45324c;
        case 0x453250u: goto label_453250;
        case 0x453254u: goto label_453254;
        case 0x453258u: goto label_453258;
        case 0x45325cu: goto label_45325c;
        case 0x453260u: goto label_453260;
        case 0x453264u: goto label_453264;
        case 0x453268u: goto label_453268;
        case 0x45326cu: goto label_45326c;
        case 0x453270u: goto label_453270;
        case 0x453274u: goto label_453274;
        case 0x453278u: goto label_453278;
        case 0x45327cu: goto label_45327c;
        case 0x453280u: goto label_453280;
        case 0x453284u: goto label_453284;
        case 0x453288u: goto label_453288;
        case 0x45328cu: goto label_45328c;
        case 0x453290u: goto label_453290;
        case 0x453294u: goto label_453294;
        case 0x453298u: goto label_453298;
        case 0x45329cu: goto label_45329c;
        case 0x4532a0u: goto label_4532a0;
        case 0x4532a4u: goto label_4532a4;
        case 0x4532a8u: goto label_4532a8;
        case 0x4532acu: goto label_4532ac;
        case 0x4532b0u: goto label_4532b0;
        case 0x4532b4u: goto label_4532b4;
        case 0x4532b8u: goto label_4532b8;
        case 0x4532bcu: goto label_4532bc;
        case 0x4532c0u: goto label_4532c0;
        case 0x4532c4u: goto label_4532c4;
        case 0x4532c8u: goto label_4532c8;
        case 0x4532ccu: goto label_4532cc;
        case 0x4532d0u: goto label_4532d0;
        case 0x4532d4u: goto label_4532d4;
        case 0x4532d8u: goto label_4532d8;
        case 0x4532dcu: goto label_4532dc;
        case 0x4532e0u: goto label_4532e0;
        case 0x4532e4u: goto label_4532e4;
        case 0x4532e8u: goto label_4532e8;
        case 0x4532ecu: goto label_4532ec;
        case 0x4532f0u: goto label_4532f0;
        case 0x4532f4u: goto label_4532f4;
        case 0x4532f8u: goto label_4532f8;
        case 0x4532fcu: goto label_4532fc;
        case 0x453300u: goto label_453300;
        case 0x453304u: goto label_453304;
        case 0x453308u: goto label_453308;
        case 0x45330cu: goto label_45330c;
        case 0x453310u: goto label_453310;
        case 0x453314u: goto label_453314;
        case 0x453318u: goto label_453318;
        case 0x45331cu: goto label_45331c;
        case 0x453320u: goto label_453320;
        case 0x453324u: goto label_453324;
        case 0x453328u: goto label_453328;
        case 0x45332cu: goto label_45332c;
        case 0x453330u: goto label_453330;
        case 0x453334u: goto label_453334;
        case 0x453338u: goto label_453338;
        case 0x45333cu: goto label_45333c;
        case 0x453340u: goto label_453340;
        case 0x453344u: goto label_453344;
        case 0x453348u: goto label_453348;
        case 0x45334cu: goto label_45334c;
        case 0x453350u: goto label_453350;
        case 0x453354u: goto label_453354;
        case 0x453358u: goto label_453358;
        case 0x45335cu: goto label_45335c;
        case 0x453360u: goto label_453360;
        case 0x453364u: goto label_453364;
        case 0x453368u: goto label_453368;
        case 0x45336cu: goto label_45336c;
        case 0x453370u: goto label_453370;
        case 0x453374u: goto label_453374;
        case 0x453378u: goto label_453378;
        case 0x45337cu: goto label_45337c;
        case 0x453380u: goto label_453380;
        case 0x453384u: goto label_453384;
        case 0x453388u: goto label_453388;
        case 0x45338cu: goto label_45338c;
        case 0x453390u: goto label_453390;
        case 0x453394u: goto label_453394;
        case 0x453398u: goto label_453398;
        case 0x45339cu: goto label_45339c;
        case 0x4533a0u: goto label_4533a0;
        case 0x4533a4u: goto label_4533a4;
        case 0x4533a8u: goto label_4533a8;
        case 0x4533acu: goto label_4533ac;
        case 0x4533b0u: goto label_4533b0;
        case 0x4533b4u: goto label_4533b4;
        case 0x4533b8u: goto label_4533b8;
        case 0x4533bcu: goto label_4533bc;
        default: break;
    }

    ctx->pc = 0x453060u;

label_453060:
    // 0x453060: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x453060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_453064:
    // 0x453064: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x453064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_453068:
    // 0x453068: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x453068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45306c:
    // 0x45306c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x45306cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_453070:
    // 0x453070: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x453070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_453074:
    // 0x453074: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x453074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_453078:
    // 0x453078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x453078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45307c:
    // 0x45307c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_453080:
    // 0x453080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x453080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_453084:
    // 0x453084: 0xc0aeaf4  jal         func_2BABD0
label_453088:
    if (ctx->pc == 0x453088u) {
        ctx->pc = 0x453088u;
            // 0x453088: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x45308Cu;
        goto label_45308c;
    }
    ctx->pc = 0x453084u;
    SET_GPR_U32(ctx, 31, 0x45308Cu);
    ctx->pc = 0x453088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453084u;
            // 0x453088: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45308Cu; }
        if (ctx->pc != 0x45308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45308Cu; }
        if (ctx->pc != 0x45308Cu) { return; }
    }
    ctx->pc = 0x45308Cu;
label_45308c:
    // 0x45308c: 0xc114db4  jal         func_4536D0
label_453090:
    if (ctx->pc == 0x453090u) {
        ctx->pc = 0x453090u;
            // 0x453090: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x453094u;
        goto label_453094;
    }
    ctx->pc = 0x45308Cu;
    SET_GPR_U32(ctx, 31, 0x453094u);
    ctx->pc = 0x453090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45308Cu;
            // 0x453090: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4536D0u;
    if (runtime->hasFunction(0x4536D0u)) {
        auto targetFn = runtime->lookupFunction(0x4536D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453094u; }
        if (ctx->pc != 0x453094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004536D0_0x4536d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453094u; }
        if (ctx->pc != 0x453094u) { return; }
    }
    ctx->pc = 0x453094u;
label_453094:
    // 0x453094: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x453094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_453098:
    // 0x453098: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x453098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_45309c:
    // 0x45309c: 0x2463df50  addiu       $v1, $v1, -0x20B0
    ctx->pc = 0x45309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958928));
label_4530a0:
    // 0x4530a0: 0x2442df88  addiu       $v0, $v0, -0x2078
    ctx->pc = 0x4530a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958984));
label_4530a4:
    // 0x4530a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4530a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4530a8:
    // 0x4530a8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4530a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4530ac:
    // 0x4530ac: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4530acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4530b0:
    // 0x4530b0: 0xc114dac  jal         func_4536B0
label_4530b4:
    if (ctx->pc == 0x4530B4u) {
        ctx->pc = 0x4530B4u;
            // 0x4530b4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x4530B8u;
        goto label_4530b8;
    }
    ctx->pc = 0x4530B0u;
    SET_GPR_U32(ctx, 31, 0x4530B8u);
    ctx->pc = 0x4530B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4530B0u;
            // 0x4530b4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4536B0u;
    if (runtime->hasFunction(0x4536B0u)) {
        auto targetFn = runtime->lookupFunction(0x4536B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530B8u; }
        if (ctx->pc != 0x4530B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004536B0_0x4536b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530B8u; }
        if (ctx->pc != 0x4530B8u) { return; }
    }
    ctx->pc = 0x4530B8u;
label_4530b8:
    // 0x4530b8: 0xc114dac  jal         func_4536B0
label_4530bc:
    if (ctx->pc == 0x4530BCu) {
        ctx->pc = 0x4530BCu;
            // 0x4530bc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4530C0u;
        goto label_4530c0;
    }
    ctx->pc = 0x4530B8u;
    SET_GPR_U32(ctx, 31, 0x4530C0u);
    ctx->pc = 0x4530BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4530B8u;
            // 0x4530bc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4536B0u;
    if (runtime->hasFunction(0x4536B0u)) {
        auto targetFn = runtime->lookupFunction(0x4536B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530C0u; }
        if (ctx->pc != 0x4530C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004536B0_0x4536b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530C0u; }
        if (ctx->pc != 0x4530C0u) { return; }
    }
    ctx->pc = 0x4530C0u;
label_4530c0:
    // 0x4530c0: 0xc114da0  jal         func_453680
label_4530c4:
    if (ctx->pc == 0x4530C4u) {
        ctx->pc = 0x4530C4u;
            // 0x4530c4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x4530C8u;
        goto label_4530c8;
    }
    ctx->pc = 0x4530C0u;
    SET_GPR_U32(ctx, 31, 0x4530C8u);
    ctx->pc = 0x4530C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4530C0u;
            // 0x4530c4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x453680u;
    if (runtime->hasFunction(0x453680u)) {
        auto targetFn = runtime->lookupFunction(0x453680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530C8u; }
        if (ctx->pc != 0x4530C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00453680_0x453680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530C8u; }
        if (ctx->pc != 0x4530C8u) { return; }
    }
    ctx->pc = 0x4530C8u;
label_4530c8:
    // 0x4530c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4530c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4530cc:
    // 0x4530cc: 0xc0aeac0  jal         func_2BAB00
label_4530d0:
    if (ctx->pc == 0x4530D0u) {
        ctx->pc = 0x4530D0u;
            // 0x4530d0: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x4530D4u;
        goto label_4530d4;
    }
    ctx->pc = 0x4530CCu;
    SET_GPR_U32(ctx, 31, 0x4530D4u);
    ctx->pc = 0x4530D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4530CCu;
            // 0x4530d0: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530D4u; }
        if (ctx->pc != 0x4530D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530D4u; }
        if (ctx->pc != 0x4530D4u) { return; }
    }
    ctx->pc = 0x4530D4u;
label_4530d4:
    // 0x4530d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4530d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4530d8:
    // 0x4530d8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_4530dc:
    if (ctx->pc == 0x4530DCu) {
        ctx->pc = 0x4530E0u;
        goto label_4530e0;
    }
    ctx->pc = 0x4530D8u;
    {
        const bool branch_taken_0x4530d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4530d8) {
            ctx->pc = 0x453160u;
            goto label_453160;
        }
    }
    ctx->pc = 0x4530E0u;
label_4530e0:
    // 0x4530e0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4530e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4530e4:
    // 0x4530e4: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x4530e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4530e8:
    // 0x4530e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4530e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4530ec:
    // 0x4530ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4530ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4530f0:
    // 0x4530f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4530f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4530f4:
    // 0x4530f4: 0xc040138  jal         func_1004E0
label_4530f8:
    if (ctx->pc == 0x4530F8u) {
        ctx->pc = 0x4530F8u;
            // 0x4530f8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4530FCu;
        goto label_4530fc;
    }
    ctx->pc = 0x4530F4u;
    SET_GPR_U32(ctx, 31, 0x4530FCu);
    ctx->pc = 0x4530F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4530F4u;
            // 0x4530f8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530FCu; }
        if (ctx->pc != 0x4530FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4530FCu; }
        if (ctx->pc != 0x4530FCu) { return; }
    }
    ctx->pc = 0x4530FCu;
label_4530fc:
    // 0x4530fc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x4530fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_453100:
    // 0x453100: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x453100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
label_453104:
    // 0x453104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453108:
    // 0x453108: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x453108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
label_45310c:
    // 0x45310c: 0x24c62530  addiu       $a2, $a2, 0x2530
    ctx->pc = 0x45310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9520));
label_453110:
    // 0x453110: 0x24070310  addiu       $a3, $zero, 0x310
    ctx->pc = 0x453110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_453114:
    // 0x453114: 0xc040840  jal         func_102100
label_453118:
    if (ctx->pc == 0x453118u) {
        ctx->pc = 0x453118u;
            // 0x453118: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45311Cu;
        goto label_45311c;
    }
    ctx->pc = 0x453114u;
    SET_GPR_U32(ctx, 31, 0x45311Cu);
    ctx->pc = 0x453118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453114u;
            // 0x453118: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45311Cu; }
        if (ctx->pc != 0x45311Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45311Cu; }
        if (ctx->pc != 0x45311Cu) { return; }
    }
    ctx->pc = 0x45311Cu;
label_45311c:
    // 0x45311c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x45311cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_453120:
    // 0x453120: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x453120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453124:
    // 0x453124: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x453124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_453128:
    // 0x453128: 0xc114cf8  jal         func_4533E0
label_45312c:
    if (ctx->pc == 0x45312Cu) {
        ctx->pc = 0x45312Cu;
            // 0x45312c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453130u;
        goto label_453130;
    }
    ctx->pc = 0x453128u;
    SET_GPR_U32(ctx, 31, 0x453130u);
    ctx->pc = 0x45312Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453128u;
            // 0x45312c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4533E0u;
    if (runtime->hasFunction(0x4533E0u)) {
        auto targetFn = runtime->lookupFunction(0x4533E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453130u; }
        if (ctx->pc != 0x453130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004533E0_0x4533e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453130u; }
        if (ctx->pc != 0x453130u) { return; }
    }
    ctx->pc = 0x453130u;
label_453130:
    // 0x453130: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x453130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_453134:
    // 0x453134: 0xc114cf8  jal         func_4533E0
label_453138:
    if (ctx->pc == 0x453138u) {
        ctx->pc = 0x453138u;
            // 0x453138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45313Cu;
        goto label_45313c;
    }
    ctx->pc = 0x453134u;
    SET_GPR_U32(ctx, 31, 0x45313Cu);
    ctx->pc = 0x453138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453134u;
            // 0x453138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4533E0u;
    if (runtime->hasFunction(0x4533E0u)) {
        auto targetFn = runtime->lookupFunction(0x4533E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45313Cu; }
        if (ctx->pc != 0x45313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004533E0_0x4533e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45313Cu; }
        if (ctx->pc != 0x45313Cu) { return; }
    }
    ctx->pc = 0x45313Cu;
label_45313c:
    // 0x45313c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45313cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453140:
    // 0x453140: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x453140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_453144:
    // 0x453144: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x453144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_453148:
    // 0x453148: 0xc114cf0  jal         func_4533C0
label_45314c:
    if (ctx->pc == 0x45314Cu) {
        ctx->pc = 0x45314Cu;
            // 0x45314c: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->pc = 0x453150u;
        goto label_453150;
    }
    ctx->pc = 0x453148u;
    SET_GPR_U32(ctx, 31, 0x453150u);
    ctx->pc = 0x45314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453148u;
            // 0x45314c: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4533C0u;
    if (runtime->hasFunction(0x4533C0u)) {
        auto targetFn = runtime->lookupFunction(0x4533C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453150u; }
        if (ctx->pc != 0x453150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004533C0_0x4533c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453150u; }
        if (ctx->pc != 0x453150u) { return; }
    }
    ctx->pc = 0x453150u;
label_453150:
    // 0x453150: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x453150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_453154:
    // 0x453154: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x453154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_453158:
    // 0x453158: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_45315c:
    if (ctx->pc == 0x45315Cu) {
        ctx->pc = 0x45315Cu;
            // 0x45315c: 0x26730310  addiu       $s3, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->pc = 0x453160u;
        goto label_453160;
    }
    ctx->pc = 0x453158u;
    {
        const bool branch_taken_0x453158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453158u;
            // 0x45315c: 0x26730310  addiu       $s3, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453158) {
            ctx->pc = 0x453140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_453140;
        }
    }
    ctx->pc = 0x453160u;
label_453160:
    // 0x453160: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x453160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_453164:
    // 0x453164: 0x2442de50  addiu       $v0, $v0, -0x21B0
    ctx->pc = 0x453164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958672));
label_453168:
    // 0x453168: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x453168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_45316c:
    // 0x45316c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x45316cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_453170:
    // 0x453170: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x453170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_453174:
    // 0x453174: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x453174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_453178:
    // 0x453178: 0x2442de88  addiu       $v0, $v0, -0x2178
    ctx->pc = 0x453178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958728));
label_45317c:
    // 0x45317c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x45317cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_453180:
    // 0x453180: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x453180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_453184:
    // 0x453184: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x453184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_453188:
    // 0x453188: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x453188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_45318c:
    // 0x45318c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x45318cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_453190:
    // 0x453190: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x453190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_453194:
    // 0x453194: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x453194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_453198:
    // 0x453198: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x453198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45319c:
    // 0x45319c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x45319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4531a0:
    // 0x4531a0: 0xc0a7a88  jal         func_29EA20
label_4531a4:
    if (ctx->pc == 0x4531A4u) {
        ctx->pc = 0x4531A4u;
            // 0x4531a4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4531A8u;
        goto label_4531a8;
    }
    ctx->pc = 0x4531A0u;
    SET_GPR_U32(ctx, 31, 0x4531A8u);
    ctx->pc = 0x4531A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4531A0u;
            // 0x4531a4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4531A8u; }
        if (ctx->pc != 0x4531A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4531A8u; }
        if (ctx->pc != 0x4531A8u) { return; }
    }
    ctx->pc = 0x4531A8u;
label_4531a8:
    // 0x4531a8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4531a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4531ac:
    // 0x4531ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4531acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4531b0:
    // 0x4531b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4531b4:
    if (ctx->pc == 0x4531B4u) {
        ctx->pc = 0x4531B4u;
            // 0x4531b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4531B8u;
        goto label_4531b8;
    }
    ctx->pc = 0x4531B0u;
    {
        const bool branch_taken_0x4531b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4531B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4531B0u;
            // 0x4531b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4531b0) {
            ctx->pc = 0x4531CCu;
            goto label_4531cc;
        }
    }
    ctx->pc = 0x4531B8u;
label_4531b8:
    // 0x4531b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4531b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4531bc:
    // 0x4531bc: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4531bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4531c0:
    // 0x4531c0: 0xc0804bc  jal         func_2012F0
label_4531c4:
    if (ctx->pc == 0x4531C4u) {
        ctx->pc = 0x4531C4u;
            // 0x4531c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4531C8u;
        goto label_4531c8;
    }
    ctx->pc = 0x4531C0u;
    SET_GPR_U32(ctx, 31, 0x4531C8u);
    ctx->pc = 0x4531C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4531C0u;
            // 0x4531c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4531C8u; }
        if (ctx->pc != 0x4531C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4531C8u; }
        if (ctx->pc != 0x4531C8u) { return; }
    }
    ctx->pc = 0x4531C8u;
label_4531c8:
    // 0x4531c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4531c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4531cc:
    // 0x4531cc: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x4531ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_4531d0:
    // 0x4531d0: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x4531d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
label_4531d4:
    // 0x4531d4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4531d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_4531d8:
    // 0x4531d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4531d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4531dc:
    // 0x4531dc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x4531dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_4531e0:
    // 0x4531e0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4531e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4531e4:
    // 0x4531e4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4531e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_4531e8:
    // 0x4531e8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4531e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4531ec:
    // 0x4531ec: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4531ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_4531f0:
    // 0x4531f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4531f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4531f4:
    // 0x4531f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4531f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4531f8:
    // 0x4531f8: 0xc0a7a88  jal         func_29EA20
label_4531fc:
    if (ctx->pc == 0x4531FCu) {
        ctx->pc = 0x4531FCu;
            // 0x4531fc: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x453200u;
        goto label_453200;
    }
    ctx->pc = 0x4531F8u;
    SET_GPR_U32(ctx, 31, 0x453200u);
    ctx->pc = 0x4531FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4531F8u;
            // 0x4531fc: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453200u; }
        if (ctx->pc != 0x453200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453200u; }
        if (ctx->pc != 0x453200u) { return; }
    }
    ctx->pc = 0x453200u;
label_453200:
    // 0x453200: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x453200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_453204:
    // 0x453204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453208:
    // 0x453208: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_45320c:
    if (ctx->pc == 0x45320Cu) {
        ctx->pc = 0x45320Cu;
            // 0x45320c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x453210u;
        goto label_453210;
    }
    ctx->pc = 0x453208u;
    {
        const bool branch_taken_0x453208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x45320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453208u;
            // 0x45320c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453208) {
            ctx->pc = 0x453224u;
            goto label_453224;
        }
    }
    ctx->pc = 0x453210u;
label_453210:
    // 0x453210: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x453210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_453214:
    // 0x453214: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x453214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_453218:
    // 0x453218: 0xc0804bc  jal         func_2012F0
label_45321c:
    if (ctx->pc == 0x45321Cu) {
        ctx->pc = 0x45321Cu;
            // 0x45321c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x453220u;
        goto label_453220;
    }
    ctx->pc = 0x453218u;
    SET_GPR_U32(ctx, 31, 0x453220u);
    ctx->pc = 0x45321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453218u;
            // 0x45321c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453220u; }
        if (ctx->pc != 0x453220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453220u; }
        if (ctx->pc != 0x453220u) { return; }
    }
    ctx->pc = 0x453220u;
label_453220:
    // 0x453220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453224:
    // 0x453224: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x453224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
label_453228:
    // 0x453228: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x453228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45322c:
    // 0x45322c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_453230:
    // 0x453230: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x453230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_453234:
    // 0x453234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x453234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_453238:
    // 0x453238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x453238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45323c:
    // 0x45323c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45323cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_453240:
    // 0x453240: 0x3e00008  jr          $ra
label_453244:
    if (ctx->pc == 0x453244u) {
        ctx->pc = 0x453244u;
            // 0x453244: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x453248u;
        goto label_453248;
    }
    ctx->pc = 0x453240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453240u;
            // 0x453244: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x453248u;
label_453248:
    // 0x453248: 0x0  nop
    ctx->pc = 0x453248u;
    // NOP
label_45324c:
    // 0x45324c: 0x0  nop
    ctx->pc = 0x45324cu;
    // NOP
label_453250:
    // 0x453250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x453250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_453254:
    // 0x453254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x453254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_453258:
    // 0x453258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x453258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45325c:
    // 0x45325c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_453260:
    // 0x453260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x453260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_453264:
    // 0x453264: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_453268:
    if (ctx->pc == 0x453268u) {
        ctx->pc = 0x453268u;
            // 0x453268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45326Cu;
        goto label_45326c;
    }
    ctx->pc = 0x453264u;
    {
        const bool branch_taken_0x453264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x453268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453264u;
            // 0x453268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453264) {
            ctx->pc = 0x4533A0u;
            goto label_4533a0;
        }
    }
    ctx->pc = 0x45326Cu;
label_45326c:
    // 0x45326c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x45326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_453270:
    // 0x453270: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x453270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_453274:
    // 0x453274: 0x2463df50  addiu       $v1, $v1, -0x20B0
    ctx->pc = 0x453274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958928));
label_453278:
    // 0x453278: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x453278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_45327c:
    // 0x45327c: 0x2442df88  addiu       $v0, $v0, -0x2078
    ctx->pc = 0x45327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958984));
label_453280:
    // 0x453280: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x453280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_453284:
    // 0x453284: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x453284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_453288:
    // 0x453288: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x453288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_45328c:
    // 0x45328c: 0xc0407c0  jal         func_101F00
label_453290:
    if (ctx->pc == 0x453290u) {
        ctx->pc = 0x453290u;
            // 0x453290: 0x24a52530  addiu       $a1, $a1, 0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
        ctx->pc = 0x453294u;
        goto label_453294;
    }
    ctx->pc = 0x45328Cu;
    SET_GPR_U32(ctx, 31, 0x453294u);
    ctx->pc = 0x453290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45328Cu;
            // 0x453290: 0x24a52530  addiu       $a1, $a1, 0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453294u; }
        if (ctx->pc != 0x453294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453294u; }
        if (ctx->pc != 0x453294u) { return; }
    }
    ctx->pc = 0x453294u;
label_453294:
    // 0x453294: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x453294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_453298:
    // 0x453298: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_45329c:
    if (ctx->pc == 0x45329Cu) {
        ctx->pc = 0x45329Cu;
            // 0x45329c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4532A0u;
        goto label_4532a0;
    }
    ctx->pc = 0x453298u;
    {
        const bool branch_taken_0x453298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453298) {
            ctx->pc = 0x45329Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453298u;
            // 0x45329c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4532B4u;
            goto label_4532b4;
        }
    }
    ctx->pc = 0x4532A0u;
label_4532a0:
    // 0x4532a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4532a4:
    if (ctx->pc == 0x4532A4u) {
        ctx->pc = 0x4532A8u;
        goto label_4532a8;
    }
    ctx->pc = 0x4532A0u;
    {
        const bool branch_taken_0x4532a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532a0) {
            ctx->pc = 0x4532B0u;
            goto label_4532b0;
        }
    }
    ctx->pc = 0x4532A8u;
label_4532a8:
    // 0x4532a8: 0xc07507c  jal         func_1D41F0
label_4532ac:
    if (ctx->pc == 0x4532ACu) {
        ctx->pc = 0x4532ACu;
            // 0x4532ac: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4532B0u;
        goto label_4532b0;
    }
    ctx->pc = 0x4532A8u;
    SET_GPR_U32(ctx, 31, 0x4532B0u);
    ctx->pc = 0x4532ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4532A8u;
            // 0x4532ac: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4532B0u; }
        if (ctx->pc != 0x4532B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4532B0u; }
        if (ctx->pc != 0x4532B0u) { return; }
    }
    ctx->pc = 0x4532B0u;
label_4532b0:
    // 0x4532b0: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4532b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4532b4:
    // 0x4532b4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4532b8:
    if (ctx->pc == 0x4532B8u) {
        ctx->pc = 0x4532B8u;
            // 0x4532b8: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4532BCu;
        goto label_4532bc;
    }
    ctx->pc = 0x4532B4u;
    {
        const bool branch_taken_0x4532b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532b4) {
            ctx->pc = 0x4532B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4532B4u;
            // 0x4532b8: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4532E4u;
            goto label_4532e4;
        }
    }
    ctx->pc = 0x4532BCu;
label_4532bc:
    // 0x4532bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4532c0:
    if (ctx->pc == 0x4532C0u) {
        ctx->pc = 0x4532C4u;
        goto label_4532c4;
    }
    ctx->pc = 0x4532BCu;
    {
        const bool branch_taken_0x4532bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532bc) {
            ctx->pc = 0x4532E0u;
            goto label_4532e0;
        }
    }
    ctx->pc = 0x4532C4u;
label_4532c4:
    // 0x4532c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4532c8:
    if (ctx->pc == 0x4532C8u) {
        ctx->pc = 0x4532CCu;
        goto label_4532cc;
    }
    ctx->pc = 0x4532C4u;
    {
        const bool branch_taken_0x4532c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532c4) {
            ctx->pc = 0x4532E0u;
            goto label_4532e0;
        }
    }
    ctx->pc = 0x4532CCu;
label_4532cc:
    // 0x4532cc: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4532ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4532d0:
    // 0x4532d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4532d4:
    if (ctx->pc == 0x4532D4u) {
        ctx->pc = 0x4532D8u;
        goto label_4532d8;
    }
    ctx->pc = 0x4532D0u;
    {
        const bool branch_taken_0x4532d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532d0) {
            ctx->pc = 0x4532E0u;
            goto label_4532e0;
        }
    }
    ctx->pc = 0x4532D8u;
label_4532d8:
    // 0x4532d8: 0xc0400a8  jal         func_1002A0
label_4532dc:
    if (ctx->pc == 0x4532DCu) {
        ctx->pc = 0x4532E0u;
        goto label_4532e0;
    }
    ctx->pc = 0x4532D8u;
    SET_GPR_U32(ctx, 31, 0x4532E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4532E0u; }
        if (ctx->pc != 0x4532E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4532E0u; }
        if (ctx->pc != 0x4532E0u) { return; }
    }
    ctx->pc = 0x4532E0u;
label_4532e0:
    // 0x4532e0: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4532e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4532e4:
    // 0x4532e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4532e8:
    if (ctx->pc == 0x4532E8u) {
        ctx->pc = 0x4532E8u;
            // 0x4532e8: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4532ECu;
        goto label_4532ec;
    }
    ctx->pc = 0x4532E4u;
    {
        const bool branch_taken_0x4532e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532e4) {
            ctx->pc = 0x4532E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4532E4u;
            // 0x4532e8: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453314u;
            goto label_453314;
        }
    }
    ctx->pc = 0x4532ECu;
label_4532ec:
    // 0x4532ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4532f0:
    if (ctx->pc == 0x4532F0u) {
        ctx->pc = 0x4532F4u;
        goto label_4532f4;
    }
    ctx->pc = 0x4532ECu;
    {
        const bool branch_taken_0x4532ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532ec) {
            ctx->pc = 0x453310u;
            goto label_453310;
        }
    }
    ctx->pc = 0x4532F4u;
label_4532f4:
    // 0x4532f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4532f8:
    if (ctx->pc == 0x4532F8u) {
        ctx->pc = 0x4532FCu;
        goto label_4532fc;
    }
    ctx->pc = 0x4532F4u;
    {
        const bool branch_taken_0x4532f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4532f4) {
            ctx->pc = 0x453310u;
            goto label_453310;
        }
    }
    ctx->pc = 0x4532FCu;
label_4532fc:
    // 0x4532fc: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4532fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_453300:
    // 0x453300: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_453304:
    if (ctx->pc == 0x453304u) {
        ctx->pc = 0x453308u;
        goto label_453308;
    }
    ctx->pc = 0x453300u;
    {
        const bool branch_taken_0x453300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x453300) {
            ctx->pc = 0x453310u;
            goto label_453310;
        }
    }
    ctx->pc = 0x453308u;
label_453308:
    // 0x453308: 0xc0400a8  jal         func_1002A0
label_45330c:
    if (ctx->pc == 0x45330Cu) {
        ctx->pc = 0x453310u;
        goto label_453310;
    }
    ctx->pc = 0x453308u;
    SET_GPR_U32(ctx, 31, 0x453310u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453310u; }
        if (ctx->pc != 0x453310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453310u; }
        if (ctx->pc != 0x453310u) { return; }
    }
    ctx->pc = 0x453310u;
label_453310:
    // 0x453310: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x453310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_453314:
    // 0x453314: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_453318:
    if (ctx->pc == 0x453318u) {
        ctx->pc = 0x45331Cu;
        goto label_45331c;
    }
    ctx->pc = 0x453314u;
    {
        const bool branch_taken_0x453314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453314) {
            ctx->pc = 0x453330u;
            goto label_453330;
        }
    }
    ctx->pc = 0x45331Cu;
label_45331c:
    // 0x45331c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x45331cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_453320:
    // 0x453320: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x453320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_453324:
    // 0x453324: 0x2463df40  addiu       $v1, $v1, -0x20C0
    ctx->pc = 0x453324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958912));
label_453328:
    // 0x453328: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x453328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_45332c:
    // 0x45332c: 0xac4075a8  sw          $zero, 0x75A8($v0)
    ctx->pc = 0x45332cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30120), GPR_U32(ctx, 0));
label_453330:
    // 0x453330: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_453334:
    if (ctx->pc == 0x453334u) {
        ctx->pc = 0x453334u;
            // 0x453334: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x453338u;
        goto label_453338;
    }
    ctx->pc = 0x453330u;
    {
        const bool branch_taken_0x453330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x453330) {
            ctx->pc = 0x453334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453330u;
            // 0x453334: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45338Cu;
            goto label_45338c;
        }
    }
    ctx->pc = 0x453338u;
label_453338:
    // 0x453338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x453338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_45333c:
    // 0x45333c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x45333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_453340:
    // 0x453340: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x453340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_453344:
    // 0x453344: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x453344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_453348:
    // 0x453348: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_45334c:
    if (ctx->pc == 0x45334Cu) {
        ctx->pc = 0x45334Cu;
            // 0x45334c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x453350u;
        goto label_453350;
    }
    ctx->pc = 0x453348u;
    {
        const bool branch_taken_0x453348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x453348) {
            ctx->pc = 0x45334Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453348u;
            // 0x45334c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453364u;
            goto label_453364;
        }
    }
    ctx->pc = 0x453350u;
label_453350:
    // 0x453350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x453350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_453354:
    // 0x453354: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x453354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_453358:
    // 0x453358: 0x320f809  jalr        $t9
label_45335c:
    if (ctx->pc == 0x45335Cu) {
        ctx->pc = 0x45335Cu;
            // 0x45335c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x453360u;
        goto label_453360;
    }
    ctx->pc = 0x453358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x453360u);
        ctx->pc = 0x45335Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453358u;
            // 0x45335c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x453360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x453360u; }
            if (ctx->pc != 0x453360u) { return; }
        }
        }
    }
    ctx->pc = 0x453360u;
label_453360:
    // 0x453360: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x453360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_453364:
    // 0x453364: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_453368:
    if (ctx->pc == 0x453368u) {
        ctx->pc = 0x453368u;
            // 0x453368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45336Cu;
        goto label_45336c;
    }
    ctx->pc = 0x453364u;
    {
        const bool branch_taken_0x453364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x453364) {
            ctx->pc = 0x453368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453364u;
            // 0x453368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453380u;
            goto label_453380;
        }
    }
    ctx->pc = 0x45336Cu;
label_45336c:
    // 0x45336c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x45336cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_453370:
    // 0x453370: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x453370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_453374:
    // 0x453374: 0x320f809  jalr        $t9
label_453378:
    if (ctx->pc == 0x453378u) {
        ctx->pc = 0x453378u;
            // 0x453378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45337Cu;
        goto label_45337c;
    }
    ctx->pc = 0x453374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45337Cu);
        ctx->pc = 0x453378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453374u;
            // 0x453378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45337Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45337Cu; }
            if (ctx->pc != 0x45337Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45337Cu;
label_45337c:
    // 0x45337c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_453380:
    // 0x453380: 0xc075bf8  jal         func_1D6FE0
label_453384:
    if (ctx->pc == 0x453384u) {
        ctx->pc = 0x453384u;
            // 0x453384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453388u;
        goto label_453388;
    }
    ctx->pc = 0x453380u;
    SET_GPR_U32(ctx, 31, 0x453388u);
    ctx->pc = 0x453384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453380u;
            // 0x453384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453388u; }
        if (ctx->pc != 0x453388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453388u; }
        if (ctx->pc != 0x453388u) { return; }
    }
    ctx->pc = 0x453388u;
label_453388:
    // 0x453388: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x453388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_45338c:
    // 0x45338c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x45338cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_453390:
    // 0x453390: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_453394:
    if (ctx->pc == 0x453394u) {
        ctx->pc = 0x453394u;
            // 0x453394: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453398u;
        goto label_453398;
    }
    ctx->pc = 0x453390u;
    {
        const bool branch_taken_0x453390 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x453390) {
            ctx->pc = 0x453394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453390u;
            // 0x453394: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4533A4u;
            goto label_4533a4;
        }
    }
    ctx->pc = 0x453398u;
label_453398:
    // 0x453398: 0xc0400a8  jal         func_1002A0
label_45339c:
    if (ctx->pc == 0x45339Cu) {
        ctx->pc = 0x45339Cu;
            // 0x45339c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4533A0u;
        goto label_4533a0;
    }
    ctx->pc = 0x453398u;
    SET_GPR_U32(ctx, 31, 0x4533A0u);
    ctx->pc = 0x45339Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453398u;
            // 0x45339c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4533A0u; }
        if (ctx->pc != 0x4533A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4533A0u; }
        if (ctx->pc != 0x4533A0u) { return; }
    }
    ctx->pc = 0x4533A0u;
label_4533a0:
    // 0x4533a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4533a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4533a4:
    // 0x4533a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4533a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4533a8:
    // 0x4533a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4533a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4533ac:
    // 0x4533ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4533acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4533b0:
    // 0x4533b0: 0x3e00008  jr          $ra
label_4533b4:
    if (ctx->pc == 0x4533B4u) {
        ctx->pc = 0x4533B4u;
            // 0x4533b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4533B8u;
        goto label_4533b8;
    }
    ctx->pc = 0x4533B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4533B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4533B0u;
            // 0x4533b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4533B8u;
label_4533b8:
    // 0x4533b8: 0x0  nop
    ctx->pc = 0x4533b8u;
    // NOP
label_4533bc:
    // 0x4533bc: 0x0  nop
    ctx->pc = 0x4533bcu;
    // NOP
}
