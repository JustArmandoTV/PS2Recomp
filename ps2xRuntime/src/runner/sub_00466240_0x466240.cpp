#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00466240
// Address: 0x466240 - 0x4665b0
void sub_00466240_0x466240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466240_0x466240");
#endif

    switch (ctx->pc) {
        case 0x466240u: goto label_466240;
        case 0x466244u: goto label_466244;
        case 0x466248u: goto label_466248;
        case 0x46624cu: goto label_46624c;
        case 0x466250u: goto label_466250;
        case 0x466254u: goto label_466254;
        case 0x466258u: goto label_466258;
        case 0x46625cu: goto label_46625c;
        case 0x466260u: goto label_466260;
        case 0x466264u: goto label_466264;
        case 0x466268u: goto label_466268;
        case 0x46626cu: goto label_46626c;
        case 0x466270u: goto label_466270;
        case 0x466274u: goto label_466274;
        case 0x466278u: goto label_466278;
        case 0x46627cu: goto label_46627c;
        case 0x466280u: goto label_466280;
        case 0x466284u: goto label_466284;
        case 0x466288u: goto label_466288;
        case 0x46628cu: goto label_46628c;
        case 0x466290u: goto label_466290;
        case 0x466294u: goto label_466294;
        case 0x466298u: goto label_466298;
        case 0x46629cu: goto label_46629c;
        case 0x4662a0u: goto label_4662a0;
        case 0x4662a4u: goto label_4662a4;
        case 0x4662a8u: goto label_4662a8;
        case 0x4662acu: goto label_4662ac;
        case 0x4662b0u: goto label_4662b0;
        case 0x4662b4u: goto label_4662b4;
        case 0x4662b8u: goto label_4662b8;
        case 0x4662bcu: goto label_4662bc;
        case 0x4662c0u: goto label_4662c0;
        case 0x4662c4u: goto label_4662c4;
        case 0x4662c8u: goto label_4662c8;
        case 0x4662ccu: goto label_4662cc;
        case 0x4662d0u: goto label_4662d0;
        case 0x4662d4u: goto label_4662d4;
        case 0x4662d8u: goto label_4662d8;
        case 0x4662dcu: goto label_4662dc;
        case 0x4662e0u: goto label_4662e0;
        case 0x4662e4u: goto label_4662e4;
        case 0x4662e8u: goto label_4662e8;
        case 0x4662ecu: goto label_4662ec;
        case 0x4662f0u: goto label_4662f0;
        case 0x4662f4u: goto label_4662f4;
        case 0x4662f8u: goto label_4662f8;
        case 0x4662fcu: goto label_4662fc;
        case 0x466300u: goto label_466300;
        case 0x466304u: goto label_466304;
        case 0x466308u: goto label_466308;
        case 0x46630cu: goto label_46630c;
        case 0x466310u: goto label_466310;
        case 0x466314u: goto label_466314;
        case 0x466318u: goto label_466318;
        case 0x46631cu: goto label_46631c;
        case 0x466320u: goto label_466320;
        case 0x466324u: goto label_466324;
        case 0x466328u: goto label_466328;
        case 0x46632cu: goto label_46632c;
        case 0x466330u: goto label_466330;
        case 0x466334u: goto label_466334;
        case 0x466338u: goto label_466338;
        case 0x46633cu: goto label_46633c;
        case 0x466340u: goto label_466340;
        case 0x466344u: goto label_466344;
        case 0x466348u: goto label_466348;
        case 0x46634cu: goto label_46634c;
        case 0x466350u: goto label_466350;
        case 0x466354u: goto label_466354;
        case 0x466358u: goto label_466358;
        case 0x46635cu: goto label_46635c;
        case 0x466360u: goto label_466360;
        case 0x466364u: goto label_466364;
        case 0x466368u: goto label_466368;
        case 0x46636cu: goto label_46636c;
        case 0x466370u: goto label_466370;
        case 0x466374u: goto label_466374;
        case 0x466378u: goto label_466378;
        case 0x46637cu: goto label_46637c;
        case 0x466380u: goto label_466380;
        case 0x466384u: goto label_466384;
        case 0x466388u: goto label_466388;
        case 0x46638cu: goto label_46638c;
        case 0x466390u: goto label_466390;
        case 0x466394u: goto label_466394;
        case 0x466398u: goto label_466398;
        case 0x46639cu: goto label_46639c;
        case 0x4663a0u: goto label_4663a0;
        case 0x4663a4u: goto label_4663a4;
        case 0x4663a8u: goto label_4663a8;
        case 0x4663acu: goto label_4663ac;
        case 0x4663b0u: goto label_4663b0;
        case 0x4663b4u: goto label_4663b4;
        case 0x4663b8u: goto label_4663b8;
        case 0x4663bcu: goto label_4663bc;
        case 0x4663c0u: goto label_4663c0;
        case 0x4663c4u: goto label_4663c4;
        case 0x4663c8u: goto label_4663c8;
        case 0x4663ccu: goto label_4663cc;
        case 0x4663d0u: goto label_4663d0;
        case 0x4663d4u: goto label_4663d4;
        case 0x4663d8u: goto label_4663d8;
        case 0x4663dcu: goto label_4663dc;
        case 0x4663e0u: goto label_4663e0;
        case 0x4663e4u: goto label_4663e4;
        case 0x4663e8u: goto label_4663e8;
        case 0x4663ecu: goto label_4663ec;
        case 0x4663f0u: goto label_4663f0;
        case 0x4663f4u: goto label_4663f4;
        case 0x4663f8u: goto label_4663f8;
        case 0x4663fcu: goto label_4663fc;
        case 0x466400u: goto label_466400;
        case 0x466404u: goto label_466404;
        case 0x466408u: goto label_466408;
        case 0x46640cu: goto label_46640c;
        case 0x466410u: goto label_466410;
        case 0x466414u: goto label_466414;
        case 0x466418u: goto label_466418;
        case 0x46641cu: goto label_46641c;
        case 0x466420u: goto label_466420;
        case 0x466424u: goto label_466424;
        case 0x466428u: goto label_466428;
        case 0x46642cu: goto label_46642c;
        case 0x466430u: goto label_466430;
        case 0x466434u: goto label_466434;
        case 0x466438u: goto label_466438;
        case 0x46643cu: goto label_46643c;
        case 0x466440u: goto label_466440;
        case 0x466444u: goto label_466444;
        case 0x466448u: goto label_466448;
        case 0x46644cu: goto label_46644c;
        case 0x466450u: goto label_466450;
        case 0x466454u: goto label_466454;
        case 0x466458u: goto label_466458;
        case 0x46645cu: goto label_46645c;
        case 0x466460u: goto label_466460;
        case 0x466464u: goto label_466464;
        case 0x466468u: goto label_466468;
        case 0x46646cu: goto label_46646c;
        case 0x466470u: goto label_466470;
        case 0x466474u: goto label_466474;
        case 0x466478u: goto label_466478;
        case 0x46647cu: goto label_46647c;
        case 0x466480u: goto label_466480;
        case 0x466484u: goto label_466484;
        case 0x466488u: goto label_466488;
        case 0x46648cu: goto label_46648c;
        case 0x466490u: goto label_466490;
        case 0x466494u: goto label_466494;
        case 0x466498u: goto label_466498;
        case 0x46649cu: goto label_46649c;
        case 0x4664a0u: goto label_4664a0;
        case 0x4664a4u: goto label_4664a4;
        case 0x4664a8u: goto label_4664a8;
        case 0x4664acu: goto label_4664ac;
        case 0x4664b0u: goto label_4664b0;
        case 0x4664b4u: goto label_4664b4;
        case 0x4664b8u: goto label_4664b8;
        case 0x4664bcu: goto label_4664bc;
        case 0x4664c0u: goto label_4664c0;
        case 0x4664c4u: goto label_4664c4;
        case 0x4664c8u: goto label_4664c8;
        case 0x4664ccu: goto label_4664cc;
        case 0x4664d0u: goto label_4664d0;
        case 0x4664d4u: goto label_4664d4;
        case 0x4664d8u: goto label_4664d8;
        case 0x4664dcu: goto label_4664dc;
        case 0x4664e0u: goto label_4664e0;
        case 0x4664e4u: goto label_4664e4;
        case 0x4664e8u: goto label_4664e8;
        case 0x4664ecu: goto label_4664ec;
        case 0x4664f0u: goto label_4664f0;
        case 0x4664f4u: goto label_4664f4;
        case 0x4664f8u: goto label_4664f8;
        case 0x4664fcu: goto label_4664fc;
        case 0x466500u: goto label_466500;
        case 0x466504u: goto label_466504;
        case 0x466508u: goto label_466508;
        case 0x46650cu: goto label_46650c;
        case 0x466510u: goto label_466510;
        case 0x466514u: goto label_466514;
        case 0x466518u: goto label_466518;
        case 0x46651cu: goto label_46651c;
        case 0x466520u: goto label_466520;
        case 0x466524u: goto label_466524;
        case 0x466528u: goto label_466528;
        case 0x46652cu: goto label_46652c;
        case 0x466530u: goto label_466530;
        case 0x466534u: goto label_466534;
        case 0x466538u: goto label_466538;
        case 0x46653cu: goto label_46653c;
        case 0x466540u: goto label_466540;
        case 0x466544u: goto label_466544;
        case 0x466548u: goto label_466548;
        case 0x46654cu: goto label_46654c;
        case 0x466550u: goto label_466550;
        case 0x466554u: goto label_466554;
        case 0x466558u: goto label_466558;
        case 0x46655cu: goto label_46655c;
        case 0x466560u: goto label_466560;
        case 0x466564u: goto label_466564;
        case 0x466568u: goto label_466568;
        case 0x46656cu: goto label_46656c;
        case 0x466570u: goto label_466570;
        case 0x466574u: goto label_466574;
        case 0x466578u: goto label_466578;
        case 0x46657cu: goto label_46657c;
        case 0x466580u: goto label_466580;
        case 0x466584u: goto label_466584;
        case 0x466588u: goto label_466588;
        case 0x46658cu: goto label_46658c;
        case 0x466590u: goto label_466590;
        case 0x466594u: goto label_466594;
        case 0x466598u: goto label_466598;
        case 0x46659cu: goto label_46659c;
        case 0x4665a0u: goto label_4665a0;
        case 0x4665a4u: goto label_4665a4;
        case 0x4665a8u: goto label_4665a8;
        case 0x4665acu: goto label_4665ac;
        default: break;
    }

    ctx->pc = 0x466240u;

label_466240:
    // 0x466240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x466240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_466244:
    // 0x466244: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x466244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_466248:
    // 0x466248: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x466248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_46624c:
    // 0x46624c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x46624cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_466250:
    // 0x466250: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x466250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_466254:
    // 0x466254: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x466254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_466258:
    // 0x466258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x466258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46625c:
    // 0x46625c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_466260:
    // 0x466260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x466260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_466264:
    // 0x466264: 0xc0aeaf4  jal         func_2BABD0
label_466268:
    if (ctx->pc == 0x466268u) {
        ctx->pc = 0x466268u;
            // 0x466268: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x46626Cu;
        goto label_46626c;
    }
    ctx->pc = 0x466264u;
    SET_GPR_U32(ctx, 31, 0x46626Cu);
    ctx->pc = 0x466268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466264u;
            // 0x466268: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46626Cu; }
        if (ctx->pc != 0x46626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46626Cu; }
        if (ctx->pc != 0x46626Cu) { return; }
    }
    ctx->pc = 0x46626Cu;
label_46626c:
    // 0x46626c: 0xc1199e8  jal         func_4667A0
label_466270:
    if (ctx->pc == 0x466270u) {
        ctx->pc = 0x466270u;
            // 0x466270: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x466274u;
        goto label_466274;
    }
    ctx->pc = 0x46626Cu;
    SET_GPR_U32(ctx, 31, 0x466274u);
    ctx->pc = 0x466270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46626Cu;
            // 0x466270: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4667A0u;
    if (runtime->hasFunction(0x4667A0u)) {
        auto targetFn = runtime->lookupFunction(0x4667A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466274u; }
        if (ctx->pc != 0x466274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004667A0_0x4667a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466274u; }
        if (ctx->pc != 0x466274u) { return; }
    }
    ctx->pc = 0x466274u;
label_466274:
    // 0x466274: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x466274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_466278:
    // 0x466278: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x466278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_46627c:
    // 0x46627c: 0x2463e7d0  addiu       $v1, $v1, -0x1830
    ctx->pc = 0x46627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
label_466280:
    // 0x466280: 0x2442e808  addiu       $v0, $v0, -0x17F8
    ctx->pc = 0x466280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961160));
label_466284:
    // 0x466284: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x466284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_466288:
    // 0x466288: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x466288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_46628c:
    // 0x46628c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x46628cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_466290:
    // 0x466290: 0xc1199e0  jal         func_466780
label_466294:
    if (ctx->pc == 0x466294u) {
        ctx->pc = 0x466294u;
            // 0x466294: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x466298u;
        goto label_466298;
    }
    ctx->pc = 0x466290u;
    SET_GPR_U32(ctx, 31, 0x466298u);
    ctx->pc = 0x466294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466290u;
            // 0x466294: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x466780u;
    if (runtime->hasFunction(0x466780u)) {
        auto targetFn = runtime->lookupFunction(0x466780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466298u; }
        if (ctx->pc != 0x466298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00466780_0x466780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466298u; }
        if (ctx->pc != 0x466298u) { return; }
    }
    ctx->pc = 0x466298u;
label_466298:
    // 0x466298: 0xc1199e0  jal         func_466780
label_46629c:
    if (ctx->pc == 0x46629Cu) {
        ctx->pc = 0x46629Cu;
            // 0x46629c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4662A0u;
        goto label_4662a0;
    }
    ctx->pc = 0x466298u;
    SET_GPR_U32(ctx, 31, 0x4662A0u);
    ctx->pc = 0x46629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466298u;
            // 0x46629c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x466780u;
    if (runtime->hasFunction(0x466780u)) {
        auto targetFn = runtime->lookupFunction(0x466780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662A0u; }
        if (ctx->pc != 0x4662A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00466780_0x466780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662A0u; }
        if (ctx->pc != 0x4662A0u) { return; }
    }
    ctx->pc = 0x4662A0u;
label_4662a0:
    // 0x4662a0: 0xc1199d8  jal         func_466760
label_4662a4:
    if (ctx->pc == 0x4662A4u) {
        ctx->pc = 0x4662A4u;
            // 0x4662a4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x4662A8u;
        goto label_4662a8;
    }
    ctx->pc = 0x4662A0u;
    SET_GPR_U32(ctx, 31, 0x4662A8u);
    ctx->pc = 0x4662A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4662A0u;
            // 0x4662a4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x466760u;
    if (runtime->hasFunction(0x466760u)) {
        auto targetFn = runtime->lookupFunction(0x466760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662A8u; }
        if (ctx->pc != 0x4662A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00466760_0x466760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662A8u; }
        if (ctx->pc != 0x4662A8u) { return; }
    }
    ctx->pc = 0x4662A8u;
label_4662a8:
    // 0x4662a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4662a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4662ac:
    // 0x4662ac: 0xc0aeac0  jal         func_2BAB00
label_4662b0:
    if (ctx->pc == 0x4662B0u) {
        ctx->pc = 0x4662B0u;
            // 0x4662b0: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x4662B4u;
        goto label_4662b4;
    }
    ctx->pc = 0x4662ACu;
    SET_GPR_U32(ctx, 31, 0x4662B4u);
    ctx->pc = 0x4662B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4662ACu;
            // 0x4662b0: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662B4u; }
        if (ctx->pc != 0x4662B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662B4u; }
        if (ctx->pc != 0x4662B4u) { return; }
    }
    ctx->pc = 0x4662B4u;
label_4662b4:
    // 0x4662b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4662b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4662b8:
    // 0x4662b8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4662bc:
    if (ctx->pc == 0x4662BCu) {
        ctx->pc = 0x4662C0u;
        goto label_4662c0;
    }
    ctx->pc = 0x4662B8u;
    {
        const bool branch_taken_0x4662b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4662b8) {
            ctx->pc = 0x466338u;
            goto label_466338;
        }
    }
    ctx->pc = 0x4662C0u;
label_4662c0:
    // 0x4662c0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4662c4:
    // 0x4662c4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4662c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4662c8:
    // 0x4662c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4662c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4662cc:
    // 0x4662cc: 0xc040138  jal         func_1004E0
label_4662d0:
    if (ctx->pc == 0x4662D0u) {
        ctx->pc = 0x4662D0u;
            // 0x4662d0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4662D4u;
        goto label_4662d4;
    }
    ctx->pc = 0x4662CCu;
    SET_GPR_U32(ctx, 31, 0x4662D4u);
    ctx->pc = 0x4662D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4662CCu;
            // 0x4662d0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662D4u; }
        if (ctx->pc != 0x4662D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662D4u; }
        if (ctx->pc != 0x4662D4u) { return; }
    }
    ctx->pc = 0x4662D4u;
label_4662d4:
    // 0x4662d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x4662d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_4662d8:
    // 0x4662d8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x4662d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_4662dc:
    // 0x4662dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4662dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4662e0:
    // 0x4662e0: 0x24a565e0  addiu       $a1, $a1, 0x65E0
    ctx->pc = 0x4662e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26080));
label_4662e4:
    // 0x4662e4: 0x24c65a20  addiu       $a2, $a2, 0x5A20
    ctx->pc = 0x4662e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23072));
label_4662e8:
    // 0x4662e8: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x4662e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4662ec:
    // 0x4662ec: 0xc040840  jal         func_102100
label_4662f0:
    if (ctx->pc == 0x4662F0u) {
        ctx->pc = 0x4662F0u;
            // 0x4662f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4662F4u;
        goto label_4662f4;
    }
    ctx->pc = 0x4662ECu;
    SET_GPR_U32(ctx, 31, 0x4662F4u);
    ctx->pc = 0x4662F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4662ECu;
            // 0x4662f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662F4u; }
        if (ctx->pc != 0x4662F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4662F4u; }
        if (ctx->pc != 0x4662F4u) { return; }
    }
    ctx->pc = 0x4662F4u;
label_4662f4:
    // 0x4662f4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x4662f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_4662f8:
    // 0x4662f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4662f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4662fc:
    // 0x4662fc: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4662fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_466300:
    // 0x466300: 0xc119974  jal         func_4665D0
label_466304:
    if (ctx->pc == 0x466304u) {
        ctx->pc = 0x466304u;
            // 0x466304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466308u;
        goto label_466308;
    }
    ctx->pc = 0x466300u;
    SET_GPR_U32(ctx, 31, 0x466308u);
    ctx->pc = 0x466304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466300u;
            // 0x466304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4665D0u;
    if (runtime->hasFunction(0x4665D0u)) {
        auto targetFn = runtime->lookupFunction(0x4665D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466308u; }
        if (ctx->pc != 0x466308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004665D0_0x4665d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466308u; }
        if (ctx->pc != 0x466308u) { return; }
    }
    ctx->pc = 0x466308u;
label_466308:
    // 0x466308: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x466308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_46630c:
    // 0x46630c: 0xc119974  jal         func_4665D0
label_466310:
    if (ctx->pc == 0x466310u) {
        ctx->pc = 0x466310u;
            // 0x466310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466314u;
        goto label_466314;
    }
    ctx->pc = 0x46630Cu;
    SET_GPR_U32(ctx, 31, 0x466314u);
    ctx->pc = 0x466310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46630Cu;
            // 0x466310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4665D0u;
    if (runtime->hasFunction(0x4665D0u)) {
        auto targetFn = runtime->lookupFunction(0x4665D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466314u; }
        if (ctx->pc != 0x466314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004665D0_0x4665d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466314u; }
        if (ctx->pc != 0x466314u) { return; }
    }
    ctx->pc = 0x466314u;
label_466314:
    // 0x466314: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x466314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466318:
    // 0x466318: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x466318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_46631c:
    // 0x46631c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x46631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_466320:
    // 0x466320: 0xc11996c  jal         func_4665B0
label_466324:
    if (ctx->pc == 0x466324u) {
        ctx->pc = 0x466324u;
            // 0x466324: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->pc = 0x466328u;
        goto label_466328;
    }
    ctx->pc = 0x466320u;
    SET_GPR_U32(ctx, 31, 0x466328u);
    ctx->pc = 0x466324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466320u;
            // 0x466324: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4665B0u;
    if (runtime->hasFunction(0x4665B0u)) {
        auto targetFn = runtime->lookupFunction(0x4665B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466328u; }
        if (ctx->pc != 0x466328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004665B0_0x4665b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466328u; }
        if (ctx->pc != 0x466328u) { return; }
    }
    ctx->pc = 0x466328u;
label_466328:
    // 0x466328: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x466328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46632c:
    // 0x46632c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x46632cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_466330:
    // 0x466330: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_466334:
    if (ctx->pc == 0x466334u) {
        ctx->pc = 0x466334u;
            // 0x466334: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x466338u;
        goto label_466338;
    }
    ctx->pc = 0x466330u;
    {
        const bool branch_taken_0x466330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466330u;
            // 0x466334: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466330) {
            ctx->pc = 0x466318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_466318;
        }
    }
    ctx->pc = 0x466338u;
label_466338:
    // 0x466338: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x466338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_46633c:
    // 0x46633c: 0x2442e730  addiu       $v0, $v0, -0x18D0
    ctx->pc = 0x46633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960944));
label_466340:
    // 0x466340: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x466340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_466344:
    // 0x466344: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x466344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_466348:
    // 0x466348: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x466348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_46634c:
    // 0x46634c: 0x2442e768  addiu       $v0, $v0, -0x1898
    ctx->pc = 0x46634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961000));
label_466350:
    // 0x466350: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x466350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_466354:
    // 0x466354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x466354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_466358:
    // 0x466358: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x466358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_46635c:
    // 0x46635c: 0xc0a7a88  jal         func_29EA20
label_466360:
    if (ctx->pc == 0x466360u) {
        ctx->pc = 0x466360u;
            // 0x466360: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x466364u;
        goto label_466364;
    }
    ctx->pc = 0x46635Cu;
    SET_GPR_U32(ctx, 31, 0x466364u);
    ctx->pc = 0x466360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46635Cu;
            // 0x466360: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466364u; }
        if (ctx->pc != 0x466364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466364u; }
        if (ctx->pc != 0x466364u) { return; }
    }
    ctx->pc = 0x466364u;
label_466364:
    // 0x466364: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x466364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_466368:
    // 0x466368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x466368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46636c:
    // 0x46636c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_466370:
    if (ctx->pc == 0x466370u) {
        ctx->pc = 0x466370u;
            // 0x466370: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x466374u;
        goto label_466374;
    }
    ctx->pc = 0x46636Cu;
    {
        const bool branch_taken_0x46636c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x466370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46636Cu;
            // 0x466370: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46636c) {
            ctx->pc = 0x46638Cu;
            goto label_46638c;
        }
    }
    ctx->pc = 0x466374u;
label_466374:
    // 0x466374: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x466374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_466378:
    // 0x466378: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x466378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_46637c:
    // 0x46637c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46637cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_466380:
    // 0x466380: 0xc0827ac  jal         func_209EB0
label_466384:
    if (ctx->pc == 0x466384u) {
        ctx->pc = 0x466388u;
        goto label_466388;
    }
    ctx->pc = 0x466380u;
    SET_GPR_U32(ctx, 31, 0x466388u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466388u; }
        if (ctx->pc != 0x466388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466388u; }
        if (ctx->pc != 0x466388u) { return; }
    }
    ctx->pc = 0x466388u;
label_466388:
    // 0x466388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x466388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46638c:
    // 0x46638c: 0x3c024066  lui         $v0, 0x4066
    ctx->pc = 0x46638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16486 << 16));
label_466390:
    // 0x466390: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x466390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_466394:
    // 0x466394: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x466394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_466398:
    // 0x466398: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x466398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_46639c:
    // 0x46639c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x46639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4663a0:
    // 0x4663a0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4663a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4663a4:
    // 0x4663a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4663a8:
    // 0x4663a8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4663a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4663ac:
    // 0x4663ac: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4663acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_4663b0:
    // 0x4663b0: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x4663b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_4663b4:
    // 0x4663b4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4663b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4663b8:
    // 0x4663b8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4663b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_4663bc:
    // 0x4663bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4663bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4663c0:
    // 0x4663c0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4663c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4663c4:
    // 0x4663c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4663c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4663c8:
    // 0x4663c8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4663c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4663cc:
    // 0x4663cc: 0xc0a7a88  jal         func_29EA20
label_4663d0:
    if (ctx->pc == 0x4663D0u) {
        ctx->pc = 0x4663D0u;
            // 0x4663d0: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x4663D4u;
        goto label_4663d4;
    }
    ctx->pc = 0x4663CCu;
    SET_GPR_U32(ctx, 31, 0x4663D4u);
    ctx->pc = 0x4663D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4663CCu;
            // 0x4663d0: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4663D4u; }
        if (ctx->pc != 0x4663D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4663D4u; }
        if (ctx->pc != 0x4663D4u) { return; }
    }
    ctx->pc = 0x4663D4u;
label_4663d4:
    // 0x4663d4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4663d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4663d8:
    // 0x4663d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4663d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4663dc:
    // 0x4663dc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4663e0:
    if (ctx->pc == 0x4663E0u) {
        ctx->pc = 0x4663E0u;
            // 0x4663e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4663E4u;
        goto label_4663e4;
    }
    ctx->pc = 0x4663DCu;
    {
        const bool branch_taken_0x4663dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4663E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4663DCu;
            // 0x4663e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4663dc) {
            ctx->pc = 0x466400u;
            goto label_466400;
        }
    }
    ctx->pc = 0x4663E4u;
label_4663e4:
    // 0x4663e4: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x4663e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_4663e8:
    // 0x4663e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4663e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4663ec:
    // 0x4663ec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4663ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4663f0:
    // 0x4663f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4663f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4663f4:
    // 0x4663f4: 0xc0807e0  jal         func_201F80
label_4663f8:
    if (ctx->pc == 0x4663F8u) {
        ctx->pc = 0x4663F8u;
            // 0x4663f8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4663FCu;
        goto label_4663fc;
    }
    ctx->pc = 0x4663F4u;
    SET_GPR_U32(ctx, 31, 0x4663FCu);
    ctx->pc = 0x4663F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4663F4u;
            // 0x4663f8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4663FCu; }
        if (ctx->pc != 0x4663FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201F80_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4663FCu; }
        if (ctx->pc != 0x4663FCu) { return; }
    }
    ctx->pc = 0x4663FCu;
label_4663fc:
    // 0x4663fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4663fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_466400:
    // 0x466400: 0xae2400a0  sw          $a0, 0xA0($s1)
    ctx->pc = 0x466400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 4));
label_466404:
    // 0x466404: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x466404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_466408:
    // 0x466408: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x466408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_46640c:
    // 0x46640c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46640cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_466410:
    // 0x466410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x466410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466414:
    // 0x466414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466418:
    // 0x466418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46641c:
    // 0x46641c: 0x3e00008  jr          $ra
label_466420:
    if (ctx->pc == 0x466420u) {
        ctx->pc = 0x466420u;
            // 0x466420: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x466424u;
        goto label_466424;
    }
    ctx->pc = 0x46641Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46641Cu;
            // 0x466420: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466424u;
label_466424:
    // 0x466424: 0x0  nop
    ctx->pc = 0x466424u;
    // NOP
label_466428:
    // 0x466428: 0x0  nop
    ctx->pc = 0x466428u;
    // NOP
label_46642c:
    // 0x46642c: 0x0  nop
    ctx->pc = 0x46642cu;
    // NOP
label_466430:
    // 0x466430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_466434:
    // 0x466434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x466434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_466438:
    // 0x466438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x466438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46643c:
    // 0x46643c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_466440:
    // 0x466440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x466440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_466444:
    // 0x466444: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
label_466448:
    if (ctx->pc == 0x466448u) {
        ctx->pc = 0x466448u;
            // 0x466448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46644Cu;
        goto label_46644c;
    }
    ctx->pc = 0x466444u;
    {
        const bool branch_taken_0x466444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x466448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466444u;
            // 0x466448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466444) {
            ctx->pc = 0x466598u;
            goto label_466598;
        }
    }
    ctx->pc = 0x46644Cu;
label_46644c:
    // 0x46644c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x46644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_466450:
    // 0x466450: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x466450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_466454:
    // 0x466454: 0x2463e7d0  addiu       $v1, $v1, -0x1830
    ctx->pc = 0x466454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
label_466458:
    // 0x466458: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x466458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_46645c:
    // 0x46645c: 0x2442e808  addiu       $v0, $v0, -0x17F8
    ctx->pc = 0x46645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961160));
label_466460:
    // 0x466460: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x466460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_466464:
    // 0x466464: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x466464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_466468:
    // 0x466468: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x466468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_46646c:
    // 0x46646c: 0xc0407c0  jal         func_101F00
label_466470:
    if (ctx->pc == 0x466470u) {
        ctx->pc = 0x466470u;
            // 0x466470: 0x24a55a20  addiu       $a1, $a1, 0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23072));
        ctx->pc = 0x466474u;
        goto label_466474;
    }
    ctx->pc = 0x46646Cu;
    SET_GPR_U32(ctx, 31, 0x466474u);
    ctx->pc = 0x466470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46646Cu;
            // 0x466470: 0x24a55a20  addiu       $a1, $a1, 0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466474u; }
        if (ctx->pc != 0x466474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466474u; }
        if (ctx->pc != 0x466474u) { return; }
    }
    ctx->pc = 0x466474u;
label_466474:
    // 0x466474: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x466474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_466478:
    // 0x466478: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_46647c:
    if (ctx->pc == 0x46647Cu) {
        ctx->pc = 0x46647Cu;
            // 0x46647c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x466480u;
        goto label_466480;
    }
    ctx->pc = 0x466478u;
    {
        const bool branch_taken_0x466478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466478) {
            ctx->pc = 0x46647Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466478u;
            // 0x46647c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4664ACu;
            goto label_4664ac;
        }
    }
    ctx->pc = 0x466480u;
label_466480:
    // 0x466480: 0x26220094  addiu       $v0, $s1, 0x94
    ctx->pc = 0x466480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_466484:
    // 0x466484: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_466488:
    if (ctx->pc == 0x466488u) {
        ctx->pc = 0x466488u;
            // 0x466488: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x46648Cu;
        goto label_46648c;
    }
    ctx->pc = 0x466484u;
    {
        const bool branch_taken_0x466484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466484) {
            ctx->pc = 0x466488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466484u;
            // 0x466488: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466498u;
            goto label_466498;
        }
    }
    ctx->pc = 0x46648Cu;
label_46648c:
    // 0x46648c: 0xc07507c  jal         func_1D41F0
label_466490:
    if (ctx->pc == 0x466490u) {
        ctx->pc = 0x466490u;
            // 0x466490: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x466494u;
        goto label_466494;
    }
    ctx->pc = 0x46648Cu;
    SET_GPR_U32(ctx, 31, 0x466494u);
    ctx->pc = 0x466490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46648Cu;
            // 0x466490: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466494u; }
        if (ctx->pc != 0x466494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466494u; }
        if (ctx->pc != 0x466494u) { return; }
    }
    ctx->pc = 0x466494u;
label_466494:
    // 0x466494: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x466494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_466498:
    // 0x466498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46649c:
    if (ctx->pc == 0x46649Cu) {
        ctx->pc = 0x4664A0u;
        goto label_4664a0;
    }
    ctx->pc = 0x466498u;
    {
        const bool branch_taken_0x466498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466498) {
            ctx->pc = 0x4664A8u;
            goto label_4664a8;
        }
    }
    ctx->pc = 0x4664A0u;
label_4664a0:
    // 0x4664a0: 0xc07507c  jal         func_1D41F0
label_4664a4:
    if (ctx->pc == 0x4664A4u) {
        ctx->pc = 0x4664A4u;
            // 0x4664a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4664A8u;
        goto label_4664a8;
    }
    ctx->pc = 0x4664A0u;
    SET_GPR_U32(ctx, 31, 0x4664A8u);
    ctx->pc = 0x4664A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4664A0u;
            // 0x4664a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4664A8u; }
        if (ctx->pc != 0x4664A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4664A8u; }
        if (ctx->pc != 0x4664A8u) { return; }
    }
    ctx->pc = 0x4664A8u;
label_4664a8:
    // 0x4664a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4664a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4664ac:
    // 0x4664ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4664b0:
    if (ctx->pc == 0x4664B0u) {
        ctx->pc = 0x4664B0u;
            // 0x4664b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4664B4u;
        goto label_4664b4;
    }
    ctx->pc = 0x4664ACu;
    {
        const bool branch_taken_0x4664ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664ac) {
            ctx->pc = 0x4664B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4664ACu;
            // 0x4664b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4664DCu;
            goto label_4664dc;
        }
    }
    ctx->pc = 0x4664B4u;
label_4664b4:
    // 0x4664b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4664b8:
    if (ctx->pc == 0x4664B8u) {
        ctx->pc = 0x4664BCu;
        goto label_4664bc;
    }
    ctx->pc = 0x4664B4u;
    {
        const bool branch_taken_0x4664b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664b4) {
            ctx->pc = 0x4664D8u;
            goto label_4664d8;
        }
    }
    ctx->pc = 0x4664BCu;
label_4664bc:
    // 0x4664bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4664c0:
    if (ctx->pc == 0x4664C0u) {
        ctx->pc = 0x4664C4u;
        goto label_4664c4;
    }
    ctx->pc = 0x4664BCu;
    {
        const bool branch_taken_0x4664bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664bc) {
            ctx->pc = 0x4664D8u;
            goto label_4664d8;
        }
    }
    ctx->pc = 0x4664C4u;
label_4664c4:
    // 0x4664c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4664c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4664c8:
    // 0x4664c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4664cc:
    if (ctx->pc == 0x4664CCu) {
        ctx->pc = 0x4664D0u;
        goto label_4664d0;
    }
    ctx->pc = 0x4664C8u;
    {
        const bool branch_taken_0x4664c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664c8) {
            ctx->pc = 0x4664D8u;
            goto label_4664d8;
        }
    }
    ctx->pc = 0x4664D0u;
label_4664d0:
    // 0x4664d0: 0xc0400a8  jal         func_1002A0
label_4664d4:
    if (ctx->pc == 0x4664D4u) {
        ctx->pc = 0x4664D8u;
        goto label_4664d8;
    }
    ctx->pc = 0x4664D0u;
    SET_GPR_U32(ctx, 31, 0x4664D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4664D8u; }
        if (ctx->pc != 0x4664D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4664D8u; }
        if (ctx->pc != 0x4664D8u) { return; }
    }
    ctx->pc = 0x4664D8u;
label_4664d8:
    // 0x4664d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4664d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4664dc:
    // 0x4664dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4664e0:
    if (ctx->pc == 0x4664E0u) {
        ctx->pc = 0x4664E0u;
            // 0x4664e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4664E4u;
        goto label_4664e4;
    }
    ctx->pc = 0x4664DCu;
    {
        const bool branch_taken_0x4664dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664dc) {
            ctx->pc = 0x4664E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4664DCu;
            // 0x4664e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46650Cu;
            goto label_46650c;
        }
    }
    ctx->pc = 0x4664E4u;
label_4664e4:
    // 0x4664e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4664e8:
    if (ctx->pc == 0x4664E8u) {
        ctx->pc = 0x4664ECu;
        goto label_4664ec;
    }
    ctx->pc = 0x4664E4u;
    {
        const bool branch_taken_0x4664e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664e4) {
            ctx->pc = 0x466508u;
            goto label_466508;
        }
    }
    ctx->pc = 0x4664ECu;
label_4664ec:
    // 0x4664ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4664f0:
    if (ctx->pc == 0x4664F0u) {
        ctx->pc = 0x4664F4u;
        goto label_4664f4;
    }
    ctx->pc = 0x4664ECu;
    {
        const bool branch_taken_0x4664ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664ec) {
            ctx->pc = 0x466508u;
            goto label_466508;
        }
    }
    ctx->pc = 0x4664F4u;
label_4664f4:
    // 0x4664f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4664f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4664f8:
    // 0x4664f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4664fc:
    if (ctx->pc == 0x4664FCu) {
        ctx->pc = 0x466500u;
        goto label_466500;
    }
    ctx->pc = 0x4664F8u;
    {
        const bool branch_taken_0x4664f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664f8) {
            ctx->pc = 0x466508u;
            goto label_466508;
        }
    }
    ctx->pc = 0x466500u;
label_466500:
    // 0x466500: 0xc0400a8  jal         func_1002A0
label_466504:
    if (ctx->pc == 0x466504u) {
        ctx->pc = 0x466508u;
        goto label_466508;
    }
    ctx->pc = 0x466500u;
    SET_GPR_U32(ctx, 31, 0x466508u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466508u; }
        if (ctx->pc != 0x466508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466508u; }
        if (ctx->pc != 0x466508u) { return; }
    }
    ctx->pc = 0x466508u;
label_466508:
    // 0x466508: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x466508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_46650c:
    // 0x46650c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_466510:
    if (ctx->pc == 0x466510u) {
        ctx->pc = 0x466514u;
        goto label_466514;
    }
    ctx->pc = 0x46650Cu;
    {
        const bool branch_taken_0x46650c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46650c) {
            ctx->pc = 0x466528u;
            goto label_466528;
        }
    }
    ctx->pc = 0x466514u;
label_466514:
    // 0x466514: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x466514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_466518:
    // 0x466518: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x466518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46651c:
    // 0x46651c: 0x2463e7c0  addiu       $v1, $v1, -0x1840
    ctx->pc = 0x46651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961088));
label_466520:
    // 0x466520: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x466520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_466524:
    // 0x466524: 0xac4075e8  sw          $zero, 0x75E8($v0)
    ctx->pc = 0x466524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30184), GPR_U32(ctx, 0));
label_466528:
    // 0x466528: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_46652c:
    if (ctx->pc == 0x46652Cu) {
        ctx->pc = 0x46652Cu;
            // 0x46652c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x466530u;
        goto label_466530;
    }
    ctx->pc = 0x466528u;
    {
        const bool branch_taken_0x466528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x466528) {
            ctx->pc = 0x46652Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466528u;
            // 0x46652c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466584u;
            goto label_466584;
        }
    }
    ctx->pc = 0x466530u;
label_466530:
    // 0x466530: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x466530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_466534:
    // 0x466534: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x466534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_466538:
    // 0x466538: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x466538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_46653c:
    // 0x46653c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x46653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_466540:
    // 0x466540: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_466544:
    if (ctx->pc == 0x466544u) {
        ctx->pc = 0x466544u;
            // 0x466544: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x466548u;
        goto label_466548;
    }
    ctx->pc = 0x466540u;
    {
        const bool branch_taken_0x466540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x466540) {
            ctx->pc = 0x466544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466540u;
            // 0x466544: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46655Cu;
            goto label_46655c;
        }
    }
    ctx->pc = 0x466548u;
label_466548:
    // 0x466548: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x466548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46654c:
    // 0x46654c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x46654cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_466550:
    // 0x466550: 0x320f809  jalr        $t9
label_466554:
    if (ctx->pc == 0x466554u) {
        ctx->pc = 0x466554u;
            // 0x466554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x466558u;
        goto label_466558;
    }
    ctx->pc = 0x466550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x466558u);
        ctx->pc = 0x466554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466550u;
            // 0x466554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x466558u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x466558u; }
            if (ctx->pc != 0x466558u) { return; }
        }
        }
    }
    ctx->pc = 0x466558u;
label_466558:
    // 0x466558: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x466558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_46655c:
    // 0x46655c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_466560:
    if (ctx->pc == 0x466560u) {
        ctx->pc = 0x466560u;
            // 0x466560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466564u;
        goto label_466564;
    }
    ctx->pc = 0x46655Cu;
    {
        const bool branch_taken_0x46655c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46655c) {
            ctx->pc = 0x466560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46655Cu;
            // 0x466560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466578u;
            goto label_466578;
        }
    }
    ctx->pc = 0x466564u;
label_466564:
    // 0x466564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x466564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_466568:
    // 0x466568: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x466568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_46656c:
    // 0x46656c: 0x320f809  jalr        $t9
label_466570:
    if (ctx->pc == 0x466570u) {
        ctx->pc = 0x466570u;
            // 0x466570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x466574u;
        goto label_466574;
    }
    ctx->pc = 0x46656Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x466574u);
        ctx->pc = 0x466570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46656Cu;
            // 0x466570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x466574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x466574u; }
            if (ctx->pc != 0x466574u) { return; }
        }
        }
    }
    ctx->pc = 0x466574u;
label_466574:
    // 0x466574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x466574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_466578:
    // 0x466578: 0xc075bf8  jal         func_1D6FE0
label_46657c:
    if (ctx->pc == 0x46657Cu) {
        ctx->pc = 0x46657Cu;
            // 0x46657c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466580u;
        goto label_466580;
    }
    ctx->pc = 0x466578u;
    SET_GPR_U32(ctx, 31, 0x466580u);
    ctx->pc = 0x46657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466578u;
            // 0x46657c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466580u; }
        if (ctx->pc != 0x466580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466580u; }
        if (ctx->pc != 0x466580u) { return; }
    }
    ctx->pc = 0x466580u;
label_466580:
    // 0x466580: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x466580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_466584:
    // 0x466584: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x466584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_466588:
    // 0x466588: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_46658c:
    if (ctx->pc == 0x46658Cu) {
        ctx->pc = 0x46658Cu;
            // 0x46658c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466590u;
        goto label_466590;
    }
    ctx->pc = 0x466588u;
    {
        const bool branch_taken_0x466588 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x466588) {
            ctx->pc = 0x46658Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466588u;
            // 0x46658c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46659Cu;
            goto label_46659c;
        }
    }
    ctx->pc = 0x466590u;
label_466590:
    // 0x466590: 0xc0400a8  jal         func_1002A0
label_466594:
    if (ctx->pc == 0x466594u) {
        ctx->pc = 0x466594u;
            // 0x466594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466598u;
        goto label_466598;
    }
    ctx->pc = 0x466590u;
    SET_GPR_U32(ctx, 31, 0x466598u);
    ctx->pc = 0x466594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466590u;
            // 0x466594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466598u; }
        if (ctx->pc != 0x466598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466598u; }
        if (ctx->pc != 0x466598u) { return; }
    }
    ctx->pc = 0x466598u;
label_466598:
    // 0x466598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x466598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46659c:
    // 0x46659c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46659cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4665a0:
    // 0x4665a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4665a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4665a4:
    // 0x4665a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4665a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4665a8:
    // 0x4665a8: 0x3e00008  jr          $ra
label_4665ac:
    if (ctx->pc == 0x4665ACu) {
        ctx->pc = 0x4665ACu;
            // 0x4665ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4665B0u;
        goto label_fallthrough_0x4665a8;
    }
    ctx->pc = 0x4665A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4665ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4665A8u;
            // 0x4665ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4665a8:
    ctx->pc = 0x4665B0u;
}
