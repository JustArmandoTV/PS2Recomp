#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003980C0
// Address: 0x3980c0 - 0x398430
void sub_003980C0_0x3980c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003980C0_0x3980c0");
#endif

    switch (ctx->pc) {
        case 0x3980c0u: goto label_3980c0;
        case 0x3980c4u: goto label_3980c4;
        case 0x3980c8u: goto label_3980c8;
        case 0x3980ccu: goto label_3980cc;
        case 0x3980d0u: goto label_3980d0;
        case 0x3980d4u: goto label_3980d4;
        case 0x3980d8u: goto label_3980d8;
        case 0x3980dcu: goto label_3980dc;
        case 0x3980e0u: goto label_3980e0;
        case 0x3980e4u: goto label_3980e4;
        case 0x3980e8u: goto label_3980e8;
        case 0x3980ecu: goto label_3980ec;
        case 0x3980f0u: goto label_3980f0;
        case 0x3980f4u: goto label_3980f4;
        case 0x3980f8u: goto label_3980f8;
        case 0x3980fcu: goto label_3980fc;
        case 0x398100u: goto label_398100;
        case 0x398104u: goto label_398104;
        case 0x398108u: goto label_398108;
        case 0x39810cu: goto label_39810c;
        case 0x398110u: goto label_398110;
        case 0x398114u: goto label_398114;
        case 0x398118u: goto label_398118;
        case 0x39811cu: goto label_39811c;
        case 0x398120u: goto label_398120;
        case 0x398124u: goto label_398124;
        case 0x398128u: goto label_398128;
        case 0x39812cu: goto label_39812c;
        case 0x398130u: goto label_398130;
        case 0x398134u: goto label_398134;
        case 0x398138u: goto label_398138;
        case 0x39813cu: goto label_39813c;
        case 0x398140u: goto label_398140;
        case 0x398144u: goto label_398144;
        case 0x398148u: goto label_398148;
        case 0x39814cu: goto label_39814c;
        case 0x398150u: goto label_398150;
        case 0x398154u: goto label_398154;
        case 0x398158u: goto label_398158;
        case 0x39815cu: goto label_39815c;
        case 0x398160u: goto label_398160;
        case 0x398164u: goto label_398164;
        case 0x398168u: goto label_398168;
        case 0x39816cu: goto label_39816c;
        case 0x398170u: goto label_398170;
        case 0x398174u: goto label_398174;
        case 0x398178u: goto label_398178;
        case 0x39817cu: goto label_39817c;
        case 0x398180u: goto label_398180;
        case 0x398184u: goto label_398184;
        case 0x398188u: goto label_398188;
        case 0x39818cu: goto label_39818c;
        case 0x398190u: goto label_398190;
        case 0x398194u: goto label_398194;
        case 0x398198u: goto label_398198;
        case 0x39819cu: goto label_39819c;
        case 0x3981a0u: goto label_3981a0;
        case 0x3981a4u: goto label_3981a4;
        case 0x3981a8u: goto label_3981a8;
        case 0x3981acu: goto label_3981ac;
        case 0x3981b0u: goto label_3981b0;
        case 0x3981b4u: goto label_3981b4;
        case 0x3981b8u: goto label_3981b8;
        case 0x3981bcu: goto label_3981bc;
        case 0x3981c0u: goto label_3981c0;
        case 0x3981c4u: goto label_3981c4;
        case 0x3981c8u: goto label_3981c8;
        case 0x3981ccu: goto label_3981cc;
        case 0x3981d0u: goto label_3981d0;
        case 0x3981d4u: goto label_3981d4;
        case 0x3981d8u: goto label_3981d8;
        case 0x3981dcu: goto label_3981dc;
        case 0x3981e0u: goto label_3981e0;
        case 0x3981e4u: goto label_3981e4;
        case 0x3981e8u: goto label_3981e8;
        case 0x3981ecu: goto label_3981ec;
        case 0x3981f0u: goto label_3981f0;
        case 0x3981f4u: goto label_3981f4;
        case 0x3981f8u: goto label_3981f8;
        case 0x3981fcu: goto label_3981fc;
        case 0x398200u: goto label_398200;
        case 0x398204u: goto label_398204;
        case 0x398208u: goto label_398208;
        case 0x39820cu: goto label_39820c;
        case 0x398210u: goto label_398210;
        case 0x398214u: goto label_398214;
        case 0x398218u: goto label_398218;
        case 0x39821cu: goto label_39821c;
        case 0x398220u: goto label_398220;
        case 0x398224u: goto label_398224;
        case 0x398228u: goto label_398228;
        case 0x39822cu: goto label_39822c;
        case 0x398230u: goto label_398230;
        case 0x398234u: goto label_398234;
        case 0x398238u: goto label_398238;
        case 0x39823cu: goto label_39823c;
        case 0x398240u: goto label_398240;
        case 0x398244u: goto label_398244;
        case 0x398248u: goto label_398248;
        case 0x39824cu: goto label_39824c;
        case 0x398250u: goto label_398250;
        case 0x398254u: goto label_398254;
        case 0x398258u: goto label_398258;
        case 0x39825cu: goto label_39825c;
        case 0x398260u: goto label_398260;
        case 0x398264u: goto label_398264;
        case 0x398268u: goto label_398268;
        case 0x39826cu: goto label_39826c;
        case 0x398270u: goto label_398270;
        case 0x398274u: goto label_398274;
        case 0x398278u: goto label_398278;
        case 0x39827cu: goto label_39827c;
        case 0x398280u: goto label_398280;
        case 0x398284u: goto label_398284;
        case 0x398288u: goto label_398288;
        case 0x39828cu: goto label_39828c;
        case 0x398290u: goto label_398290;
        case 0x398294u: goto label_398294;
        case 0x398298u: goto label_398298;
        case 0x39829cu: goto label_39829c;
        case 0x3982a0u: goto label_3982a0;
        case 0x3982a4u: goto label_3982a4;
        case 0x3982a8u: goto label_3982a8;
        case 0x3982acu: goto label_3982ac;
        case 0x3982b0u: goto label_3982b0;
        case 0x3982b4u: goto label_3982b4;
        case 0x3982b8u: goto label_3982b8;
        case 0x3982bcu: goto label_3982bc;
        case 0x3982c0u: goto label_3982c0;
        case 0x3982c4u: goto label_3982c4;
        case 0x3982c8u: goto label_3982c8;
        case 0x3982ccu: goto label_3982cc;
        case 0x3982d0u: goto label_3982d0;
        case 0x3982d4u: goto label_3982d4;
        case 0x3982d8u: goto label_3982d8;
        case 0x3982dcu: goto label_3982dc;
        case 0x3982e0u: goto label_3982e0;
        case 0x3982e4u: goto label_3982e4;
        case 0x3982e8u: goto label_3982e8;
        case 0x3982ecu: goto label_3982ec;
        case 0x3982f0u: goto label_3982f0;
        case 0x3982f4u: goto label_3982f4;
        case 0x3982f8u: goto label_3982f8;
        case 0x3982fcu: goto label_3982fc;
        case 0x398300u: goto label_398300;
        case 0x398304u: goto label_398304;
        case 0x398308u: goto label_398308;
        case 0x39830cu: goto label_39830c;
        case 0x398310u: goto label_398310;
        case 0x398314u: goto label_398314;
        case 0x398318u: goto label_398318;
        case 0x39831cu: goto label_39831c;
        case 0x398320u: goto label_398320;
        case 0x398324u: goto label_398324;
        case 0x398328u: goto label_398328;
        case 0x39832cu: goto label_39832c;
        case 0x398330u: goto label_398330;
        case 0x398334u: goto label_398334;
        case 0x398338u: goto label_398338;
        case 0x39833cu: goto label_39833c;
        case 0x398340u: goto label_398340;
        case 0x398344u: goto label_398344;
        case 0x398348u: goto label_398348;
        case 0x39834cu: goto label_39834c;
        case 0x398350u: goto label_398350;
        case 0x398354u: goto label_398354;
        case 0x398358u: goto label_398358;
        case 0x39835cu: goto label_39835c;
        case 0x398360u: goto label_398360;
        case 0x398364u: goto label_398364;
        case 0x398368u: goto label_398368;
        case 0x39836cu: goto label_39836c;
        case 0x398370u: goto label_398370;
        case 0x398374u: goto label_398374;
        case 0x398378u: goto label_398378;
        case 0x39837cu: goto label_39837c;
        case 0x398380u: goto label_398380;
        case 0x398384u: goto label_398384;
        case 0x398388u: goto label_398388;
        case 0x39838cu: goto label_39838c;
        case 0x398390u: goto label_398390;
        case 0x398394u: goto label_398394;
        case 0x398398u: goto label_398398;
        case 0x39839cu: goto label_39839c;
        case 0x3983a0u: goto label_3983a0;
        case 0x3983a4u: goto label_3983a4;
        case 0x3983a8u: goto label_3983a8;
        case 0x3983acu: goto label_3983ac;
        case 0x3983b0u: goto label_3983b0;
        case 0x3983b4u: goto label_3983b4;
        case 0x3983b8u: goto label_3983b8;
        case 0x3983bcu: goto label_3983bc;
        case 0x3983c0u: goto label_3983c0;
        case 0x3983c4u: goto label_3983c4;
        case 0x3983c8u: goto label_3983c8;
        case 0x3983ccu: goto label_3983cc;
        case 0x3983d0u: goto label_3983d0;
        case 0x3983d4u: goto label_3983d4;
        case 0x3983d8u: goto label_3983d8;
        case 0x3983dcu: goto label_3983dc;
        case 0x3983e0u: goto label_3983e0;
        case 0x3983e4u: goto label_3983e4;
        case 0x3983e8u: goto label_3983e8;
        case 0x3983ecu: goto label_3983ec;
        case 0x3983f0u: goto label_3983f0;
        case 0x3983f4u: goto label_3983f4;
        case 0x3983f8u: goto label_3983f8;
        case 0x3983fcu: goto label_3983fc;
        case 0x398400u: goto label_398400;
        case 0x398404u: goto label_398404;
        case 0x398408u: goto label_398408;
        case 0x39840cu: goto label_39840c;
        case 0x398410u: goto label_398410;
        case 0x398414u: goto label_398414;
        case 0x398418u: goto label_398418;
        case 0x39841cu: goto label_39841c;
        case 0x398420u: goto label_398420;
        case 0x398424u: goto label_398424;
        case 0x398428u: goto label_398428;
        case 0x39842cu: goto label_39842c;
        default: break;
    }

    ctx->pc = 0x3980c0u;

label_3980c0:
    // 0x3980c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3980c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3980c4:
    // 0x3980c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3980c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3980c8:
    // 0x3980c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3980c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3980cc:
    // 0x3980cc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3980ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_3980d0:
    // 0x3980d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3980d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3980d4:
    // 0x3980d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3980d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3980d8:
    // 0x3980d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3980d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3980dc:
    // 0x3980dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3980dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3980e0:
    // 0x3980e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3980e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3980e4:
    // 0x3980e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3980e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3980e8:
    // 0x3980e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3980e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3980ec:
    // 0x3980ec: 0xc0aeaf4  jal         func_2BABD0
label_3980f0:
    if (ctx->pc == 0x3980F0u) {
        ctx->pc = 0x3980F0u;
            // 0x3980f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3980F4u;
        goto label_3980f4;
    }
    ctx->pc = 0x3980ECu;
    SET_GPR_U32(ctx, 31, 0x3980F4u);
    ctx->pc = 0x3980F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3980ECu;
            // 0x3980f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3980F4u; }
        if (ctx->pc != 0x3980F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3980F4u; }
        if (ctx->pc != 0x3980F4u) { return; }
    }
    ctx->pc = 0x3980F4u;
label_3980f4:
    // 0x3980f4: 0xc0e6184  jal         func_398610
label_3980f8:
    if (ctx->pc == 0x3980F8u) {
        ctx->pc = 0x3980F8u;
            // 0x3980f8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x3980FCu;
        goto label_3980fc;
    }
    ctx->pc = 0x3980F4u;
    SET_GPR_U32(ctx, 31, 0x3980FCu);
    ctx->pc = 0x3980F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3980F4u;
            // 0x3980f8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398610u;
    if (runtime->hasFunction(0x398610u)) {
        auto targetFn = runtime->lookupFunction(0x398610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3980FCu; }
        if (ctx->pc != 0x3980FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398610_0x398610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3980FCu; }
        if (ctx->pc != 0x3980FCu) { return; }
    }
    ctx->pc = 0x3980FCu;
label_3980fc:
    // 0x3980fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3980fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_398100:
    // 0x398100: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x398100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_398104:
    // 0x398104: 0x24638180  addiu       $v1, $v1, -0x7E80
    ctx->pc = 0x398104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934912));
label_398108:
    // 0x398108: 0x244281b8  addiu       $v0, $v0, -0x7E48
    ctx->pc = 0x398108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934968));
label_39810c:
    // 0x39810c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x39810cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_398110:
    // 0x398110: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x398110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_398114:
    // 0x398114: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x398114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_398118:
    // 0x398118: 0xc0e617c  jal         func_3985F0
label_39811c:
    if (ctx->pc == 0x39811Cu) {
        ctx->pc = 0x39811Cu;
            // 0x39811c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x398120u;
        goto label_398120;
    }
    ctx->pc = 0x398118u;
    SET_GPR_U32(ctx, 31, 0x398120u);
    ctx->pc = 0x39811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398118u;
            // 0x39811c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3985F0u;
    if (runtime->hasFunction(0x3985F0u)) {
        auto targetFn = runtime->lookupFunction(0x3985F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398120u; }
        if (ctx->pc != 0x398120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003985F0_0x3985f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398120u; }
        if (ctx->pc != 0x398120u) { return; }
    }
    ctx->pc = 0x398120u;
label_398120:
    // 0x398120: 0xc0e617c  jal         func_3985F0
label_398124:
    if (ctx->pc == 0x398124u) {
        ctx->pc = 0x398124u;
            // 0x398124: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x398128u;
        goto label_398128;
    }
    ctx->pc = 0x398120u;
    SET_GPR_U32(ctx, 31, 0x398128u);
    ctx->pc = 0x398124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398120u;
            // 0x398124: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3985F0u;
    if (runtime->hasFunction(0x3985F0u)) {
        auto targetFn = runtime->lookupFunction(0x3985F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398128u; }
        if (ctx->pc != 0x398128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003985F0_0x3985f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398128u; }
        if (ctx->pc != 0x398128u) { return; }
    }
    ctx->pc = 0x398128u;
label_398128:
    // 0x398128: 0xc0a8d10  jal         func_2A3440
label_39812c:
    if (ctx->pc == 0x39812Cu) {
        ctx->pc = 0x39812Cu;
            // 0x39812c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x398130u;
        goto label_398130;
    }
    ctx->pc = 0x398128u;
    SET_GPR_U32(ctx, 31, 0x398130u);
    ctx->pc = 0x39812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398128u;
            // 0x39812c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398130u; }
        if (ctx->pc != 0x398130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398130u; }
        if (ctx->pc != 0x398130u) { return; }
    }
    ctx->pc = 0x398130u;
label_398130:
    // 0x398130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x398130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_398134:
    // 0x398134: 0xc0aeac0  jal         func_2BAB00
label_398138:
    if (ctx->pc == 0x398138u) {
        ctx->pc = 0x398138u;
            // 0x398138: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x39813Cu;
        goto label_39813c;
    }
    ctx->pc = 0x398134u;
    SET_GPR_U32(ctx, 31, 0x39813Cu);
    ctx->pc = 0x398138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398134u;
            // 0x398138: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39813Cu; }
        if (ctx->pc != 0x39813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39813Cu; }
        if (ctx->pc != 0x39813Cu) { return; }
    }
    ctx->pc = 0x39813Cu;
label_39813c:
    // 0x39813c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39813cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398140:
    // 0x398140: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_398144:
    if (ctx->pc == 0x398144u) {
        ctx->pc = 0x398148u;
        goto label_398148;
    }
    ctx->pc = 0x398140u;
    {
        const bool branch_taken_0x398140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x398140) {
            ctx->pc = 0x3981C8u;
            goto label_3981c8;
        }
    }
    ctx->pc = 0x398148u;
label_398148:
    // 0x398148: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x398148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_39814c:
    // 0x39814c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_398150:
    // 0x398150: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x398150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398154:
    // 0x398154: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x398154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_398158:
    // 0x398158: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x398158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_39815c:
    // 0x39815c: 0xc040138  jal         func_1004E0
label_398160:
    if (ctx->pc == 0x398160u) {
        ctx->pc = 0x398160u;
            // 0x398160: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x398164u;
        goto label_398164;
    }
    ctx->pc = 0x39815Cu;
    SET_GPR_U32(ctx, 31, 0x398164u);
    ctx->pc = 0x398160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39815Cu;
            // 0x398160: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398164u; }
        if (ctx->pc != 0x398164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398164u; }
        if (ctx->pc != 0x398164u) { return; }
    }
    ctx->pc = 0x398164u;
label_398164:
    // 0x398164: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x398164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_398168:
    // 0x398168: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x398168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_39816c:
    // 0x39816c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398170:
    // 0x398170: 0x24a58460  addiu       $a1, $a1, -0x7BA0
    ctx->pc = 0x398170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
label_398174:
    // 0x398174: 0x24c66f10  addiu       $a2, $a2, 0x6F10
    ctx->pc = 0x398174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28432));
label_398178:
    // 0x398178: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x398178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_39817c:
    // 0x39817c: 0xc040840  jal         func_102100
label_398180:
    if (ctx->pc == 0x398180u) {
        ctx->pc = 0x398180u;
            // 0x398180: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398184u;
        goto label_398184;
    }
    ctx->pc = 0x39817Cu;
    SET_GPR_U32(ctx, 31, 0x398184u);
    ctx->pc = 0x398180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39817Cu;
            // 0x398180: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398184u; }
        if (ctx->pc != 0x398184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398184u; }
        if (ctx->pc != 0x398184u) { return; }
    }
    ctx->pc = 0x398184u;
label_398184:
    // 0x398184: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x398184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_398188:
    // 0x398188: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x398188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39818c:
    // 0x39818c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x39818cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_398190:
    // 0x398190: 0xc0e6114  jal         func_398450
label_398194:
    if (ctx->pc == 0x398194u) {
        ctx->pc = 0x398194u;
            // 0x398194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398198u;
        goto label_398198;
    }
    ctx->pc = 0x398190u;
    SET_GPR_U32(ctx, 31, 0x398198u);
    ctx->pc = 0x398194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398190u;
            // 0x398194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398450u;
    if (runtime->hasFunction(0x398450u)) {
        auto targetFn = runtime->lookupFunction(0x398450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398198u; }
        if (ctx->pc != 0x398198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398450_0x398450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398198u; }
        if (ctx->pc != 0x398198u) { return; }
    }
    ctx->pc = 0x398198u;
label_398198:
    // 0x398198: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x398198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_39819c:
    // 0x39819c: 0xc0e6114  jal         func_398450
label_3981a0:
    if (ctx->pc == 0x3981A0u) {
        ctx->pc = 0x3981A0u;
            // 0x3981a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3981A4u;
        goto label_3981a4;
    }
    ctx->pc = 0x39819Cu;
    SET_GPR_U32(ctx, 31, 0x3981A4u);
    ctx->pc = 0x3981A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39819Cu;
            // 0x3981a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398450u;
    if (runtime->hasFunction(0x398450u)) {
        auto targetFn = runtime->lookupFunction(0x398450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3981A4u; }
        if (ctx->pc != 0x3981A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398450_0x398450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3981A4u; }
        if (ctx->pc != 0x3981A4u) { return; }
    }
    ctx->pc = 0x3981A4u;
label_3981a4:
    // 0x3981a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3981a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3981a8:
    // 0x3981a8: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x3981a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_3981ac:
    // 0x3981ac: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x3981acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_3981b0:
    // 0x3981b0: 0xc0e610c  jal         func_398430
label_3981b4:
    if (ctx->pc == 0x3981B4u) {
        ctx->pc = 0x3981B4u;
            // 0x3981b4: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->pc = 0x3981B8u;
        goto label_3981b8;
    }
    ctx->pc = 0x3981B0u;
    SET_GPR_U32(ctx, 31, 0x3981B8u);
    ctx->pc = 0x3981B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3981B0u;
            // 0x3981b4: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398430u;
    if (runtime->hasFunction(0x398430u)) {
        auto targetFn = runtime->lookupFunction(0x398430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3981B8u; }
        if (ctx->pc != 0x3981B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398430_0x398430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3981B8u; }
        if (ctx->pc != 0x3981B8u) { return; }
    }
    ctx->pc = 0x3981B8u;
label_3981b8:
    // 0x3981b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3981b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3981bc:
    // 0x3981bc: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x3981bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3981c0:
    // 0x3981c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3981c4:
    if (ctx->pc == 0x3981C4u) {
        ctx->pc = 0x3981C4u;
            // 0x3981c4: 0x269400b0  addiu       $s4, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x3981C8u;
        goto label_3981c8;
    }
    ctx->pc = 0x3981C0u;
    {
        const bool branch_taken_0x3981c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3981C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3981C0u;
            // 0x3981c4: 0x269400b0  addiu       $s4, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981c0) {
            ctx->pc = 0x3981A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3981a8;
        }
    }
    ctx->pc = 0x3981C8u;
label_3981c8:
    // 0x3981c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3981c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3981cc:
    // 0x3981cc: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x3981ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
label_3981d0:
    // 0x3981d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3981d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3981d4:
    // 0x3981d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3981d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3981d8:
    // 0x3981d8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3981d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3981dc:
    // 0x3981dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3981dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3981e0:
    // 0x3981e0: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x3981e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
label_3981e4:
    // 0x3981e4: 0x24428148  addiu       $v0, $v0, -0x7EB8
    ctx->pc = 0x3981e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934856));
label_3981e8:
    // 0x3981e8: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x3981e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_3981ec:
    // 0x3981ec: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x3981ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_3981f0:
    // 0x3981f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3981f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3981f4:
    // 0x3981f4: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x3981f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
label_3981f8:
    // 0x3981f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3981f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3981fc:
    // 0x3981fc: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x3981fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
label_398200:
    // 0x398200: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x398200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_398204:
    // 0x398204: 0xae4300a4  sw          $v1, 0xA4($s2)
    ctx->pc = 0x398204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
label_398208:
    // 0x398208: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x398208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_39820c:
    // 0x39820c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39820cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_398210:
    // 0x398210: 0xae4400a4  sw          $a0, 0xA4($s2)
    ctx->pc = 0x398210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 4));
label_398214:
    // 0x398214: 0x24638220  addiu       $v1, $v1, -0x7DE0
    ctx->pc = 0x398214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935072));
label_398218:
    // 0x398218: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x398218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
label_39821c:
    // 0x39821c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_398220:
    // 0x398220: 0xae4300a4  sw          $v1, 0xA4($s2)
    ctx->pc = 0x398220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
label_398224:
    // 0x398224: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x398224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_398228:
    // 0x398228: 0xc0a7a88  jal         func_29EA20
label_39822c:
    if (ctx->pc == 0x39822Cu) {
        ctx->pc = 0x39822Cu;
            // 0x39822c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x398230u;
        goto label_398230;
    }
    ctx->pc = 0x398228u;
    SET_GPR_U32(ctx, 31, 0x398230u);
    ctx->pc = 0x39822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398228u;
            // 0x39822c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398230u; }
        if (ctx->pc != 0x398230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398230u; }
        if (ctx->pc != 0x398230u) { return; }
    }
    ctx->pc = 0x398230u;
label_398230:
    // 0x398230: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x398230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_398234:
    // 0x398234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x398234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398238:
    // 0x398238: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_39823c:
    if (ctx->pc == 0x39823Cu) {
        ctx->pc = 0x39823Cu;
            // 0x39823c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x398240u;
        goto label_398240;
    }
    ctx->pc = 0x398238u;
    {
        const bool branch_taken_0x398238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39823Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398238u;
            // 0x39823c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398238) {
            ctx->pc = 0x398254u;
            goto label_398254;
        }
    }
    ctx->pc = 0x398240u;
label_398240:
    // 0x398240: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x398240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_398244:
    // 0x398244: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x398244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_398248:
    // 0x398248: 0xc0827ac  jal         func_209EB0
label_39824c:
    if (ctx->pc == 0x39824Cu) {
        ctx->pc = 0x398250u;
        goto label_398250;
    }
    ctx->pc = 0x398248u;
    SET_GPR_U32(ctx, 31, 0x398250u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398250u; }
        if (ctx->pc != 0x398250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398250u; }
        if (ctx->pc != 0x398250u) { return; }
    }
    ctx->pc = 0x398250u;
label_398250:
    // 0x398250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x398250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398254:
    // 0x398254: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x398254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
label_398258:
    // 0x398258: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x398258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39825c:
    // 0x39825c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x39825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_398260:
    // 0x398260: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x398260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_398264:
    // 0x398264: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x398264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_398268:
    // 0x398268: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x398268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39826c:
    // 0x39826c: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x39826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_398270:
    // 0x398270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x398270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_398274:
    // 0x398274: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x398274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_398278:
    // 0x398278: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x398278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_39827c:
    // 0x39827c: 0xc040140  jal         func_100500
label_398280:
    if (ctx->pc == 0x398280u) {
        ctx->pc = 0x398280u;
            // 0x398280: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x398284u;
        goto label_398284;
    }
    ctx->pc = 0x39827Cu;
    SET_GPR_U32(ctx, 31, 0x398284u);
    ctx->pc = 0x398280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39827Cu;
            // 0x398280: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398284u; }
        if (ctx->pc != 0x398284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398284u; }
        if (ctx->pc != 0x398284u) { return; }
    }
    ctx->pc = 0x398284u;
label_398284:
    // 0x398284: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_398288:
    if (ctx->pc == 0x398288u) {
        ctx->pc = 0x398288u;
            // 0x398288: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x39828Cu;
        goto label_39828c;
    }
    ctx->pc = 0x398284u;
    {
        const bool branch_taken_0x398284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398284) {
            ctx->pc = 0x398288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x398284u;
            // 0x398288: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3982A4u;
            goto label_3982a4;
        }
    }
    ctx->pc = 0x39828Cu;
label_39828c:
    // 0x39828c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x39828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_398290:
    // 0x398290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x398290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398294:
    // 0x398294: 0x26450094  addiu       $a1, $s2, 0x94
    ctx->pc = 0x398294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
label_398298:
    // 0x398298: 0xc0b4554  jal         func_2D1550
label_39829c:
    if (ctx->pc == 0x39829Cu) {
        ctx->pc = 0x39829Cu;
            // 0x39829c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3982A0u;
        goto label_3982a0;
    }
    ctx->pc = 0x398298u;
    SET_GPR_U32(ctx, 31, 0x3982A0u);
    ctx->pc = 0x39829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398298u;
            // 0x39829c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3982A0u; }
        if (ctx->pc != 0x3982A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3982A0u; }
        if (ctx->pc != 0x3982A0u) { return; }
    }
    ctx->pc = 0x3982A0u;
label_3982a0:
    // 0x3982a0: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x3982a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_3982a4:
    // 0x3982a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3982a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3982a8:
    // 0x3982a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3982a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3982ac:
    // 0x3982ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3982acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3982b0:
    // 0x3982b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3982b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3982b4:
    // 0x3982b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3982b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3982b8:
    // 0x3982b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3982b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3982bc:
    // 0x3982bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3982bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3982c0:
    // 0x3982c0: 0x3e00008  jr          $ra
label_3982c4:
    if (ctx->pc == 0x3982C4u) {
        ctx->pc = 0x3982C4u;
            // 0x3982c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3982C8u;
        goto label_3982c8;
    }
    ctx->pc = 0x3982C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3982C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3982C0u;
            // 0x3982c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3982C8u;
label_3982c8:
    // 0x3982c8: 0x0  nop
    ctx->pc = 0x3982c8u;
    // NOP
label_3982cc:
    // 0x3982cc: 0x0  nop
    ctx->pc = 0x3982ccu;
    // NOP
label_3982d0:
    // 0x3982d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3982d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3982d4:
    // 0x3982d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3982d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3982d8:
    // 0x3982d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3982d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3982dc:
    // 0x3982dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3982dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3982e0:
    // 0x3982e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3982e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3982e4:
    // 0x3982e4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3982e8:
    if (ctx->pc == 0x3982E8u) {
        ctx->pc = 0x3982E8u;
            // 0x3982e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3982ECu;
        goto label_3982ec;
    }
    ctx->pc = 0x3982E4u;
    {
        const bool branch_taken_0x3982e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3982E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3982E4u;
            // 0x3982e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3982e4) {
            ctx->pc = 0x398418u;
            goto label_398418;
        }
    }
    ctx->pc = 0x3982ECu;
label_3982ec:
    // 0x3982ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3982ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3982f0:
    // 0x3982f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3982f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3982f4:
    // 0x3982f4: 0x24638180  addiu       $v1, $v1, -0x7E80
    ctx->pc = 0x3982f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934912));
label_3982f8:
    // 0x3982f8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3982f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_3982fc:
    // 0x3982fc: 0x244281b8  addiu       $v0, $v0, -0x7E48
    ctx->pc = 0x3982fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934968));
label_398300:
    // 0x398300: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x398300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_398304:
    // 0x398304: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x398304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_398308:
    // 0x398308: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x398308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_39830c:
    // 0x39830c: 0xc0407c0  jal         func_101F00
label_398310:
    if (ctx->pc == 0x398310u) {
        ctx->pc = 0x398310u;
            // 0x398310: 0x24a56f10  addiu       $a1, $a1, 0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
        ctx->pc = 0x398314u;
        goto label_398314;
    }
    ctx->pc = 0x39830Cu;
    SET_GPR_U32(ctx, 31, 0x398314u);
    ctx->pc = 0x398310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39830Cu;
            // 0x398310: 0x24a56f10  addiu       $a1, $a1, 0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398314u; }
        if (ctx->pc != 0x398314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398314u; }
        if (ctx->pc != 0x398314u) { return; }
    }
    ctx->pc = 0x398314u;
label_398314:
    // 0x398314: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x398314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_398318:
    // 0x398318: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39831c:
    if (ctx->pc == 0x39831Cu) {
        ctx->pc = 0x39831Cu;
            // 0x39831c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x398320u;
        goto label_398320;
    }
    ctx->pc = 0x398318u;
    {
        const bool branch_taken_0x398318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398318) {
            ctx->pc = 0x39831Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x398318u;
            // 0x39831c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39832Cu;
            goto label_39832c;
        }
    }
    ctx->pc = 0x398320u;
label_398320:
    // 0x398320: 0xc07507c  jal         func_1D41F0
label_398324:
    if (ctx->pc == 0x398324u) {
        ctx->pc = 0x398324u;
            // 0x398324: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x398328u;
        goto label_398328;
    }
    ctx->pc = 0x398320u;
    SET_GPR_U32(ctx, 31, 0x398328u);
    ctx->pc = 0x398324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398320u;
            // 0x398324: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398328u; }
        if (ctx->pc != 0x398328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398328u; }
        if (ctx->pc != 0x398328u) { return; }
    }
    ctx->pc = 0x398328u;
label_398328:
    // 0x398328: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x398328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_39832c:
    // 0x39832c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_398330:
    if (ctx->pc == 0x398330u) {
        ctx->pc = 0x398330u;
            // 0x398330: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x398334u;
        goto label_398334;
    }
    ctx->pc = 0x39832Cu;
    {
        const bool branch_taken_0x39832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39832c) {
            ctx->pc = 0x398330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39832Cu;
            // 0x398330: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39835Cu;
            goto label_39835c;
        }
    }
    ctx->pc = 0x398334u;
label_398334:
    // 0x398334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_398338:
    if (ctx->pc == 0x398338u) {
        ctx->pc = 0x39833Cu;
        goto label_39833c;
    }
    ctx->pc = 0x398334u;
    {
        const bool branch_taken_0x398334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398334) {
            ctx->pc = 0x398358u;
            goto label_398358;
        }
    }
    ctx->pc = 0x39833Cu;
label_39833c:
    // 0x39833c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_398340:
    if (ctx->pc == 0x398340u) {
        ctx->pc = 0x398344u;
        goto label_398344;
    }
    ctx->pc = 0x39833Cu;
    {
        const bool branch_taken_0x39833c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39833c) {
            ctx->pc = 0x398358u;
            goto label_398358;
        }
    }
    ctx->pc = 0x398344u;
label_398344:
    // 0x398344: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x398344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_398348:
    // 0x398348: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39834c:
    if (ctx->pc == 0x39834Cu) {
        ctx->pc = 0x398350u;
        goto label_398350;
    }
    ctx->pc = 0x398348u;
    {
        const bool branch_taken_0x398348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x398348) {
            ctx->pc = 0x398358u;
            goto label_398358;
        }
    }
    ctx->pc = 0x398350u;
label_398350:
    // 0x398350: 0xc0400a8  jal         func_1002A0
label_398354:
    if (ctx->pc == 0x398354u) {
        ctx->pc = 0x398358u;
        goto label_398358;
    }
    ctx->pc = 0x398350u;
    SET_GPR_U32(ctx, 31, 0x398358u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398358u; }
        if (ctx->pc != 0x398358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398358u; }
        if (ctx->pc != 0x398358u) { return; }
    }
    ctx->pc = 0x398358u;
label_398358:
    // 0x398358: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x398358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_39835c:
    // 0x39835c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_398360:
    if (ctx->pc == 0x398360u) {
        ctx->pc = 0x398360u;
            // 0x398360: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x398364u;
        goto label_398364;
    }
    ctx->pc = 0x39835Cu;
    {
        const bool branch_taken_0x39835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39835c) {
            ctx->pc = 0x398360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39835Cu;
            // 0x398360: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39838Cu;
            goto label_39838c;
        }
    }
    ctx->pc = 0x398364u;
label_398364:
    // 0x398364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_398368:
    if (ctx->pc == 0x398368u) {
        ctx->pc = 0x39836Cu;
        goto label_39836c;
    }
    ctx->pc = 0x398364u;
    {
        const bool branch_taken_0x398364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398364) {
            ctx->pc = 0x398388u;
            goto label_398388;
        }
    }
    ctx->pc = 0x39836Cu;
label_39836c:
    // 0x39836c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_398370:
    if (ctx->pc == 0x398370u) {
        ctx->pc = 0x398374u;
        goto label_398374;
    }
    ctx->pc = 0x39836Cu;
    {
        const bool branch_taken_0x39836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39836c) {
            ctx->pc = 0x398388u;
            goto label_398388;
        }
    }
    ctx->pc = 0x398374u;
label_398374:
    // 0x398374: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x398374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_398378:
    // 0x398378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39837c:
    if (ctx->pc == 0x39837Cu) {
        ctx->pc = 0x398380u;
        goto label_398380;
    }
    ctx->pc = 0x398378u;
    {
        const bool branch_taken_0x398378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x398378) {
            ctx->pc = 0x398388u;
            goto label_398388;
        }
    }
    ctx->pc = 0x398380u;
label_398380:
    // 0x398380: 0xc0400a8  jal         func_1002A0
label_398384:
    if (ctx->pc == 0x398384u) {
        ctx->pc = 0x398388u;
        goto label_398388;
    }
    ctx->pc = 0x398380u;
    SET_GPR_U32(ctx, 31, 0x398388u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398388u; }
        if (ctx->pc != 0x398388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398388u; }
        if (ctx->pc != 0x398388u) { return; }
    }
    ctx->pc = 0x398388u;
label_398388:
    // 0x398388: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x398388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_39838c:
    // 0x39838c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_398390:
    if (ctx->pc == 0x398390u) {
        ctx->pc = 0x398394u;
        goto label_398394;
    }
    ctx->pc = 0x39838Cu;
    {
        const bool branch_taken_0x39838c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39838c) {
            ctx->pc = 0x3983A8u;
            goto label_3983a8;
        }
    }
    ctx->pc = 0x398394u;
label_398394:
    // 0x398394: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x398394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_398398:
    // 0x398398: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x398398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39839c:
    // 0x39839c: 0x24638168  addiu       $v1, $v1, -0x7E98
    ctx->pc = 0x39839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934888));
label_3983a0:
    // 0x3983a0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3983a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3983a4:
    // 0x3983a4: 0xac406488  sw          $zero, 0x6488($v0)
    ctx->pc = 0x3983a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25736), GPR_U32(ctx, 0));
label_3983a8:
    // 0x3983a8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3983ac:
    if (ctx->pc == 0x3983ACu) {
        ctx->pc = 0x3983ACu;
            // 0x3983ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3983B0u;
        goto label_3983b0;
    }
    ctx->pc = 0x3983A8u;
    {
        const bool branch_taken_0x3983a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3983a8) {
            ctx->pc = 0x3983ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3983A8u;
            // 0x3983ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x398404u;
            goto label_398404;
        }
    }
    ctx->pc = 0x3983B0u;
label_3983b0:
    // 0x3983b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3983b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3983b4:
    // 0x3983b4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3983b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3983b8:
    // 0x3983b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3983b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3983bc:
    // 0x3983bc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3983bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3983c0:
    // 0x3983c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3983c4:
    if (ctx->pc == 0x3983C4u) {
        ctx->pc = 0x3983C4u;
            // 0x3983c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3983C8u;
        goto label_3983c8;
    }
    ctx->pc = 0x3983C0u;
    {
        const bool branch_taken_0x3983c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3983c0) {
            ctx->pc = 0x3983C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3983C0u;
            // 0x3983c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3983DCu;
            goto label_3983dc;
        }
    }
    ctx->pc = 0x3983C8u;
label_3983c8:
    // 0x3983c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3983c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3983cc:
    // 0x3983cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3983ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3983d0:
    // 0x3983d0: 0x320f809  jalr        $t9
label_3983d4:
    if (ctx->pc == 0x3983D4u) {
        ctx->pc = 0x3983D4u;
            // 0x3983d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3983D8u;
        goto label_3983d8;
    }
    ctx->pc = 0x3983D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3983D8u);
        ctx->pc = 0x3983D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3983D0u;
            // 0x3983d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3983D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3983D8u; }
            if (ctx->pc != 0x3983D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3983D8u;
label_3983d8:
    // 0x3983d8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3983d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3983dc:
    // 0x3983dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3983e0:
    if (ctx->pc == 0x3983E0u) {
        ctx->pc = 0x3983E0u;
            // 0x3983e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3983E4u;
        goto label_3983e4;
    }
    ctx->pc = 0x3983DCu;
    {
        const bool branch_taken_0x3983dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3983dc) {
            ctx->pc = 0x3983E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3983DCu;
            // 0x3983e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3983F8u;
            goto label_3983f8;
        }
    }
    ctx->pc = 0x3983E4u;
label_3983e4:
    // 0x3983e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3983e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3983e8:
    // 0x3983e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3983e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3983ec:
    // 0x3983ec: 0x320f809  jalr        $t9
label_3983f0:
    if (ctx->pc == 0x3983F0u) {
        ctx->pc = 0x3983F0u;
            // 0x3983f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3983F4u;
        goto label_3983f4;
    }
    ctx->pc = 0x3983ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3983F4u);
        ctx->pc = 0x3983F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3983ECu;
            // 0x3983f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3983F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3983F4u; }
            if (ctx->pc != 0x3983F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3983F4u;
label_3983f4:
    // 0x3983f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3983f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3983f8:
    // 0x3983f8: 0xc075bf8  jal         func_1D6FE0
label_3983fc:
    if (ctx->pc == 0x3983FCu) {
        ctx->pc = 0x3983FCu;
            // 0x3983fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398400u;
        goto label_398400;
    }
    ctx->pc = 0x3983F8u;
    SET_GPR_U32(ctx, 31, 0x398400u);
    ctx->pc = 0x3983FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3983F8u;
            // 0x3983fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398400u; }
        if (ctx->pc != 0x398400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398400u; }
        if (ctx->pc != 0x398400u) { return; }
    }
    ctx->pc = 0x398400u;
label_398400:
    // 0x398400: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x398400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_398404:
    // 0x398404: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x398404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_398408:
    // 0x398408: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39840c:
    if (ctx->pc == 0x39840Cu) {
        ctx->pc = 0x39840Cu;
            // 0x39840c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398410u;
        goto label_398410;
    }
    ctx->pc = 0x398408u;
    {
        const bool branch_taken_0x398408 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x398408) {
            ctx->pc = 0x39840Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x398408u;
            // 0x39840c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39841Cu;
            goto label_39841c;
        }
    }
    ctx->pc = 0x398410u;
label_398410:
    // 0x398410: 0xc0400a8  jal         func_1002A0
label_398414:
    if (ctx->pc == 0x398414u) {
        ctx->pc = 0x398414u;
            // 0x398414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398418u;
        goto label_398418;
    }
    ctx->pc = 0x398410u;
    SET_GPR_U32(ctx, 31, 0x398418u);
    ctx->pc = 0x398414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398410u;
            // 0x398414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398418u; }
        if (ctx->pc != 0x398418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398418u; }
        if (ctx->pc != 0x398418u) { return; }
    }
    ctx->pc = 0x398418u;
label_398418:
    // 0x398418: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x398418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39841c:
    // 0x39841c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39841cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_398420:
    // 0x398420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_398424:
    // 0x398424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_398428:
    // 0x398428: 0x3e00008  jr          $ra
label_39842c:
    if (ctx->pc == 0x39842Cu) {
        ctx->pc = 0x39842Cu;
            // 0x39842c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x398430u;
        goto label_fallthrough_0x398428;
    }
    ctx->pc = 0x398428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398428u;
            // 0x39842c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x398428:
    ctx->pc = 0x398430u;
}
