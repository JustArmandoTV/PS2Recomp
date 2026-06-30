#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE0C0
// Address: 0x2be0c0 - 0x2be3a0
void sub_002BE0C0_0x2be0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE0C0_0x2be0c0");
#endif

    switch (ctx->pc) {
        case 0x2be0c0u: goto label_2be0c0;
        case 0x2be0c4u: goto label_2be0c4;
        case 0x2be0c8u: goto label_2be0c8;
        case 0x2be0ccu: goto label_2be0cc;
        case 0x2be0d0u: goto label_2be0d0;
        case 0x2be0d4u: goto label_2be0d4;
        case 0x2be0d8u: goto label_2be0d8;
        case 0x2be0dcu: goto label_2be0dc;
        case 0x2be0e0u: goto label_2be0e0;
        case 0x2be0e4u: goto label_2be0e4;
        case 0x2be0e8u: goto label_2be0e8;
        case 0x2be0ecu: goto label_2be0ec;
        case 0x2be0f0u: goto label_2be0f0;
        case 0x2be0f4u: goto label_2be0f4;
        case 0x2be0f8u: goto label_2be0f8;
        case 0x2be0fcu: goto label_2be0fc;
        case 0x2be100u: goto label_2be100;
        case 0x2be104u: goto label_2be104;
        case 0x2be108u: goto label_2be108;
        case 0x2be10cu: goto label_2be10c;
        case 0x2be110u: goto label_2be110;
        case 0x2be114u: goto label_2be114;
        case 0x2be118u: goto label_2be118;
        case 0x2be11cu: goto label_2be11c;
        case 0x2be120u: goto label_2be120;
        case 0x2be124u: goto label_2be124;
        case 0x2be128u: goto label_2be128;
        case 0x2be12cu: goto label_2be12c;
        case 0x2be130u: goto label_2be130;
        case 0x2be134u: goto label_2be134;
        case 0x2be138u: goto label_2be138;
        case 0x2be13cu: goto label_2be13c;
        case 0x2be140u: goto label_2be140;
        case 0x2be144u: goto label_2be144;
        case 0x2be148u: goto label_2be148;
        case 0x2be14cu: goto label_2be14c;
        case 0x2be150u: goto label_2be150;
        case 0x2be154u: goto label_2be154;
        case 0x2be158u: goto label_2be158;
        case 0x2be15cu: goto label_2be15c;
        case 0x2be160u: goto label_2be160;
        case 0x2be164u: goto label_2be164;
        case 0x2be168u: goto label_2be168;
        case 0x2be16cu: goto label_2be16c;
        case 0x2be170u: goto label_2be170;
        case 0x2be174u: goto label_2be174;
        case 0x2be178u: goto label_2be178;
        case 0x2be17cu: goto label_2be17c;
        case 0x2be180u: goto label_2be180;
        case 0x2be184u: goto label_2be184;
        case 0x2be188u: goto label_2be188;
        case 0x2be18cu: goto label_2be18c;
        case 0x2be190u: goto label_2be190;
        case 0x2be194u: goto label_2be194;
        case 0x2be198u: goto label_2be198;
        case 0x2be19cu: goto label_2be19c;
        case 0x2be1a0u: goto label_2be1a0;
        case 0x2be1a4u: goto label_2be1a4;
        case 0x2be1a8u: goto label_2be1a8;
        case 0x2be1acu: goto label_2be1ac;
        case 0x2be1b0u: goto label_2be1b0;
        case 0x2be1b4u: goto label_2be1b4;
        case 0x2be1b8u: goto label_2be1b8;
        case 0x2be1bcu: goto label_2be1bc;
        case 0x2be1c0u: goto label_2be1c0;
        case 0x2be1c4u: goto label_2be1c4;
        case 0x2be1c8u: goto label_2be1c8;
        case 0x2be1ccu: goto label_2be1cc;
        case 0x2be1d0u: goto label_2be1d0;
        case 0x2be1d4u: goto label_2be1d4;
        case 0x2be1d8u: goto label_2be1d8;
        case 0x2be1dcu: goto label_2be1dc;
        case 0x2be1e0u: goto label_2be1e0;
        case 0x2be1e4u: goto label_2be1e4;
        case 0x2be1e8u: goto label_2be1e8;
        case 0x2be1ecu: goto label_2be1ec;
        case 0x2be1f0u: goto label_2be1f0;
        case 0x2be1f4u: goto label_2be1f4;
        case 0x2be1f8u: goto label_2be1f8;
        case 0x2be1fcu: goto label_2be1fc;
        case 0x2be200u: goto label_2be200;
        case 0x2be204u: goto label_2be204;
        case 0x2be208u: goto label_2be208;
        case 0x2be20cu: goto label_2be20c;
        case 0x2be210u: goto label_2be210;
        case 0x2be214u: goto label_2be214;
        case 0x2be218u: goto label_2be218;
        case 0x2be21cu: goto label_2be21c;
        case 0x2be220u: goto label_2be220;
        case 0x2be224u: goto label_2be224;
        case 0x2be228u: goto label_2be228;
        case 0x2be22cu: goto label_2be22c;
        case 0x2be230u: goto label_2be230;
        case 0x2be234u: goto label_2be234;
        case 0x2be238u: goto label_2be238;
        case 0x2be23cu: goto label_2be23c;
        case 0x2be240u: goto label_2be240;
        case 0x2be244u: goto label_2be244;
        case 0x2be248u: goto label_2be248;
        case 0x2be24cu: goto label_2be24c;
        case 0x2be250u: goto label_2be250;
        case 0x2be254u: goto label_2be254;
        case 0x2be258u: goto label_2be258;
        case 0x2be25cu: goto label_2be25c;
        case 0x2be260u: goto label_2be260;
        case 0x2be264u: goto label_2be264;
        case 0x2be268u: goto label_2be268;
        case 0x2be26cu: goto label_2be26c;
        case 0x2be270u: goto label_2be270;
        case 0x2be274u: goto label_2be274;
        case 0x2be278u: goto label_2be278;
        case 0x2be27cu: goto label_2be27c;
        case 0x2be280u: goto label_2be280;
        case 0x2be284u: goto label_2be284;
        case 0x2be288u: goto label_2be288;
        case 0x2be28cu: goto label_2be28c;
        case 0x2be290u: goto label_2be290;
        case 0x2be294u: goto label_2be294;
        case 0x2be298u: goto label_2be298;
        case 0x2be29cu: goto label_2be29c;
        case 0x2be2a0u: goto label_2be2a0;
        case 0x2be2a4u: goto label_2be2a4;
        case 0x2be2a8u: goto label_2be2a8;
        case 0x2be2acu: goto label_2be2ac;
        case 0x2be2b0u: goto label_2be2b0;
        case 0x2be2b4u: goto label_2be2b4;
        case 0x2be2b8u: goto label_2be2b8;
        case 0x2be2bcu: goto label_2be2bc;
        case 0x2be2c0u: goto label_2be2c0;
        case 0x2be2c4u: goto label_2be2c4;
        case 0x2be2c8u: goto label_2be2c8;
        case 0x2be2ccu: goto label_2be2cc;
        case 0x2be2d0u: goto label_2be2d0;
        case 0x2be2d4u: goto label_2be2d4;
        case 0x2be2d8u: goto label_2be2d8;
        case 0x2be2dcu: goto label_2be2dc;
        case 0x2be2e0u: goto label_2be2e0;
        case 0x2be2e4u: goto label_2be2e4;
        case 0x2be2e8u: goto label_2be2e8;
        case 0x2be2ecu: goto label_2be2ec;
        case 0x2be2f0u: goto label_2be2f0;
        case 0x2be2f4u: goto label_2be2f4;
        case 0x2be2f8u: goto label_2be2f8;
        case 0x2be2fcu: goto label_2be2fc;
        case 0x2be300u: goto label_2be300;
        case 0x2be304u: goto label_2be304;
        case 0x2be308u: goto label_2be308;
        case 0x2be30cu: goto label_2be30c;
        case 0x2be310u: goto label_2be310;
        case 0x2be314u: goto label_2be314;
        case 0x2be318u: goto label_2be318;
        case 0x2be31cu: goto label_2be31c;
        case 0x2be320u: goto label_2be320;
        case 0x2be324u: goto label_2be324;
        case 0x2be328u: goto label_2be328;
        case 0x2be32cu: goto label_2be32c;
        case 0x2be330u: goto label_2be330;
        case 0x2be334u: goto label_2be334;
        case 0x2be338u: goto label_2be338;
        case 0x2be33cu: goto label_2be33c;
        case 0x2be340u: goto label_2be340;
        case 0x2be344u: goto label_2be344;
        case 0x2be348u: goto label_2be348;
        case 0x2be34cu: goto label_2be34c;
        case 0x2be350u: goto label_2be350;
        case 0x2be354u: goto label_2be354;
        case 0x2be358u: goto label_2be358;
        case 0x2be35cu: goto label_2be35c;
        case 0x2be360u: goto label_2be360;
        case 0x2be364u: goto label_2be364;
        case 0x2be368u: goto label_2be368;
        case 0x2be36cu: goto label_2be36c;
        case 0x2be370u: goto label_2be370;
        case 0x2be374u: goto label_2be374;
        case 0x2be378u: goto label_2be378;
        case 0x2be37cu: goto label_2be37c;
        case 0x2be380u: goto label_2be380;
        case 0x2be384u: goto label_2be384;
        case 0x2be388u: goto label_2be388;
        case 0x2be38cu: goto label_2be38c;
        case 0x2be390u: goto label_2be390;
        case 0x2be394u: goto label_2be394;
        case 0x2be398u: goto label_2be398;
        case 0x2be39cu: goto label_2be39c;
        default: break;
    }

    ctx->pc = 0x2be0c0u;

label_2be0c0:
    // 0x2be0c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2be0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2be0c4:
    // 0x2be0c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2be0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2be0c8:
    // 0x2be0c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2be0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2be0cc:
    // 0x2be0cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2be0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2be0d0:
    // 0x2be0d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2be0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2be0d4:
    // 0x2be0d4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2be0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_2be0d8:
    // 0x2be0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2be0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2be0dc:
    // 0x2be0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2be0e0:
    // 0x2be0e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be0e4:
    // 0x2be0e4: 0xc0aeaf4  jal         func_2BABD0
label_2be0e8:
    if (ctx->pc == 0x2BE0E8u) {
        ctx->pc = 0x2BE0E8u;
            // 0x2be0e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2BE0ECu;
        goto label_2be0ec;
    }
    ctx->pc = 0x2BE0E4u;
    SET_GPR_U32(ctx, 31, 0x2BE0ECu);
    ctx->pc = 0x2BE0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0E4u;
            // 0x2be0e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0ECu; }
        if (ctx->pc != 0x2BE0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0ECu; }
        if (ctx->pc != 0x2BE0ECu) { return; }
    }
    ctx->pc = 0x2BE0ECu;
label_2be0ec:
    // 0x2be0ec: 0xc0afa20  jal         func_2BE880
label_2be0f0:
    if (ctx->pc == 0x2BE0F0u) {
        ctx->pc = 0x2BE0F0u;
            // 0x2be0f0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BE0F4u;
        goto label_2be0f4;
    }
    ctx->pc = 0x2BE0ECu;
    SET_GPR_U32(ctx, 31, 0x2BE0F4u);
    ctx->pc = 0x2BE0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0ECu;
            // 0x2be0f0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE880u;
    if (runtime->hasFunction(0x2BE880u)) {
        auto targetFn = runtime->lookupFunction(0x2BE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0F4u; }
        if (ctx->pc != 0x2BE0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE880_0x2be880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0F4u; }
        if (ctx->pc != 0x2BE0F4u) { return; }
    }
    ctx->pc = 0x2BE0F4u;
label_2be0f4:
    // 0x2be0f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2be0f8:
    // 0x2be0f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be0fc:
    // 0x2be0fc: 0x24631ce0  addiu       $v1, $v1, 0x1CE0
    ctx->pc = 0x2be0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7392));
label_2be100:
    // 0x2be100: 0x24421d18  addiu       $v0, $v0, 0x1D18
    ctx->pc = 0x2be100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
label_2be104:
    // 0x2be104: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2be104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2be108:
    // 0x2be108: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2be108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2be10c:
    // 0x2be10c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2be10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2be110:
    // 0x2be110: 0xc0afa18  jal         func_2BE860
label_2be114:
    if (ctx->pc == 0x2BE114u) {
        ctx->pc = 0x2BE114u;
            // 0x2be114: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2BE118u;
        goto label_2be118;
    }
    ctx->pc = 0x2BE110u;
    SET_GPR_U32(ctx, 31, 0x2BE118u);
    ctx->pc = 0x2BE114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE110u;
            // 0x2be114: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE860u;
    if (runtime->hasFunction(0x2BE860u)) {
        auto targetFn = runtime->lookupFunction(0x2BE860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE118u; }
        if (ctx->pc != 0x2BE118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE860_0x2be860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE118u; }
        if (ctx->pc != 0x2BE118u) { return; }
    }
    ctx->pc = 0x2BE118u;
label_2be118:
    // 0x2be118: 0xc0afa18  jal         func_2BE860
label_2be11c:
    if (ctx->pc == 0x2BE11Cu) {
        ctx->pc = 0x2BE11Cu;
            // 0x2be11c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BE120u;
        goto label_2be120;
    }
    ctx->pc = 0x2BE118u;
    SET_GPR_U32(ctx, 31, 0x2BE120u);
    ctx->pc = 0x2BE11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE118u;
            // 0x2be11c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE860u;
    if (runtime->hasFunction(0x2BE860u)) {
        auto targetFn = runtime->lookupFunction(0x2BE860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE120u; }
        if (ctx->pc != 0x2BE120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE860_0x2be860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE120u; }
        if (ctx->pc != 0x2BE120u) { return; }
    }
    ctx->pc = 0x2BE120u;
label_2be120:
    // 0x2be120: 0xc0afa0c  jal         func_2BE830
label_2be124:
    if (ctx->pc == 0x2BE124u) {
        ctx->pc = 0x2BE124u;
            // 0x2be124: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2BE128u;
        goto label_2be128;
    }
    ctx->pc = 0x2BE120u;
    SET_GPR_U32(ctx, 31, 0x2BE128u);
    ctx->pc = 0x2BE124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE120u;
            // 0x2be124: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE830u;
    if (runtime->hasFunction(0x2BE830u)) {
        auto targetFn = runtime->lookupFunction(0x2BE830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE128u; }
        if (ctx->pc != 0x2BE128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE830_0x2be830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE128u; }
        if (ctx->pc != 0x2BE128u) { return; }
    }
    ctx->pc = 0x2BE128u;
label_2be128:
    // 0x2be128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be12c:
    // 0x2be12c: 0xc0aeac0  jal         func_2BAB00
label_2be130:
    if (ctx->pc == 0x2BE130u) {
        ctx->pc = 0x2BE130u;
            // 0x2be130: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x2BE134u;
        goto label_2be134;
    }
    ctx->pc = 0x2BE12Cu;
    SET_GPR_U32(ctx, 31, 0x2BE134u);
    ctx->pc = 0x2BE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE12Cu;
            // 0x2be130: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE134u; }
        if (ctx->pc != 0x2BE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE134u; }
        if (ctx->pc != 0x2BE134u) { return; }
    }
    ctx->pc = 0x2BE134u;
label_2be134:
    // 0x2be134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be138:
    // 0x2be138: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_2be13c:
    if (ctx->pc == 0x2BE13Cu) {
        ctx->pc = 0x2BE140u;
        goto label_2be140;
    }
    ctx->pc = 0x2BE138u;
    {
        const bool branch_taken_0x2be138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be138) {
            ctx->pc = 0x2BE1C0u;
            goto label_2be1c0;
        }
    }
    ctx->pc = 0x2BE140u;
label_2be140:
    // 0x2be140: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2be140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2be144:
    // 0x2be144: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2be144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2be148:
    // 0x2be148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2be14c:
    // 0x2be14c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2be14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2be150:
    // 0x2be150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2be150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2be154:
    // 0x2be154: 0xc040138  jal         func_1004E0
label_2be158:
    if (ctx->pc == 0x2BE158u) {
        ctx->pc = 0x2BE158u;
            // 0x2be158: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2BE15Cu;
        goto label_2be15c;
    }
    ctx->pc = 0x2BE154u;
    SET_GPR_U32(ctx, 31, 0x2BE15Cu);
    ctx->pc = 0x2BE158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE154u;
            // 0x2be158: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE15Cu; }
        if (ctx->pc != 0x2BE15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE15Cu; }
        if (ctx->pc != 0x2BE15Cu) { return; }
    }
    ctx->pc = 0x2BE15Cu;
label_2be15c:
    // 0x2be15c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2be15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2be160:
    // 0x2be160: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2be160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2be164:
    // 0x2be164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be168:
    // 0x2be168: 0x24a5e670  addiu       $a1, $a1, -0x1990
    ctx->pc = 0x2be168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960752));
label_2be16c:
    // 0x2be16c: 0x24c6e530  addiu       $a2, $a2, -0x1AD0
    ctx->pc = 0x2be16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960432));
label_2be170:
    // 0x2be170: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x2be170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2be174:
    // 0x2be174: 0xc040840  jal         func_102100
label_2be178:
    if (ctx->pc == 0x2BE178u) {
        ctx->pc = 0x2BE178u;
            // 0x2be178: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE17Cu;
        goto label_2be17c;
    }
    ctx->pc = 0x2BE174u;
    SET_GPR_U32(ctx, 31, 0x2BE17Cu);
    ctx->pc = 0x2BE178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE174u;
            // 0x2be178: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE17Cu; }
        if (ctx->pc != 0x2BE17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE17Cu; }
        if (ctx->pc != 0x2BE17Cu) { return; }
    }
    ctx->pc = 0x2BE17Cu;
label_2be17c:
    // 0x2be17c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2be17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2be180:
    // 0x2be180: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2be180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be184:
    // 0x2be184: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2be184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2be188:
    // 0x2be188: 0xc0af948  jal         func_2BE520
label_2be18c:
    if (ctx->pc == 0x2BE18Cu) {
        ctx->pc = 0x2BE18Cu;
            // 0x2be18c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE190u;
        goto label_2be190;
    }
    ctx->pc = 0x2BE188u;
    SET_GPR_U32(ctx, 31, 0x2BE190u);
    ctx->pc = 0x2BE18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE188u;
            // 0x2be18c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE520u;
    if (runtime->hasFunction(0x2BE520u)) {
        auto targetFn = runtime->lookupFunction(0x2BE520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE190u; }
        if (ctx->pc != 0x2BE190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE520_0x2be520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE190u; }
        if (ctx->pc != 0x2BE190u) { return; }
    }
    ctx->pc = 0x2BE190u;
label_2be190:
    // 0x2be190: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2be190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2be194:
    // 0x2be194: 0xc0af948  jal         func_2BE520
label_2be198:
    if (ctx->pc == 0x2BE198u) {
        ctx->pc = 0x2BE198u;
            // 0x2be198: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE19Cu;
        goto label_2be19c;
    }
    ctx->pc = 0x2BE194u;
    SET_GPR_U32(ctx, 31, 0x2BE19Cu);
    ctx->pc = 0x2BE198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE194u;
            // 0x2be198: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE520u;
    if (runtime->hasFunction(0x2BE520u)) {
        auto targetFn = runtime->lookupFunction(0x2BE520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE19Cu; }
        if (ctx->pc != 0x2BE19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE520_0x2be520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE19Cu; }
        if (ctx->pc != 0x2BE19Cu) { return; }
    }
    ctx->pc = 0x2BE19Cu;
label_2be19c:
    // 0x2be19c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2be19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be1a0:
    // 0x2be1a0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2be1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2be1a4:
    // 0x2be1a4: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2be1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2be1a8:
    // 0x2be1a8: 0xc0af940  jal         func_2BE500
label_2be1ac:
    if (ctx->pc == 0x2BE1ACu) {
        ctx->pc = 0x2BE1ACu;
            // 0x2be1ac: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x2BE1B0u;
        goto label_2be1b0;
    }
    ctx->pc = 0x2BE1A8u;
    SET_GPR_U32(ctx, 31, 0x2BE1B0u);
    ctx->pc = 0x2BE1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1A8u;
            // 0x2be1ac: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE500u;
    if (runtime->hasFunction(0x2BE500u)) {
        auto targetFn = runtime->lookupFunction(0x2BE500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1B0u; }
        if (ctx->pc != 0x2BE1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE500_0x2be500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1B0u; }
        if (ctx->pc != 0x2BE1B0u) { return; }
    }
    ctx->pc = 0x2BE1B0u;
label_2be1b0:
    // 0x2be1b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2be1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2be1b4:
    // 0x2be1b4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2be1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2be1b8:
    // 0x2be1b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2be1bc:
    if (ctx->pc == 0x2BE1BCu) {
        ctx->pc = 0x2BE1BCu;
            // 0x2be1bc: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->pc = 0x2BE1C0u;
        goto label_2be1c0;
    }
    ctx->pc = 0x2BE1B8u;
    {
        const bool branch_taken_0x2be1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1B8u;
            // 0x2be1bc: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1b8) {
            ctx->pc = 0x2BE1A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be1a0;
        }
    }
    ctx->pc = 0x2BE1C0u;
label_2be1c0:
    // 0x2be1c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be1c4:
    // 0x2be1c4: 0x24421c90  addiu       $v0, $v0, 0x1C90
    ctx->pc = 0x2be1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7312));
label_2be1c8:
    // 0x2be1c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2be1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2be1cc:
    // 0x2be1cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be1d0:
    // 0x2be1d0: 0x24421cc8  addiu       $v0, $v0, 0x1CC8
    ctx->pc = 0x2be1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7368));
label_2be1d4:
    // 0x2be1d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2be1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2be1d8:
    // 0x2be1d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2be1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be1dc:
    // 0x2be1dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2be1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2be1e0:
    // 0x2be1e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2be1e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2be1e4:
    // 0x2be1e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2be1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2be1e8:
    // 0x2be1e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2be1ec:
    // 0x2be1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2be1f0:
    // 0x2be1f0: 0x3e00008  jr          $ra
label_2be1f4:
    if (ctx->pc == 0x2BE1F4u) {
        ctx->pc = 0x2BE1F4u;
            // 0x2be1f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2BE1F8u;
        goto label_2be1f8;
    }
    ctx->pc = 0x2BE1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1F0u;
            // 0x2be1f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE1F8u;
label_2be1f8:
    // 0x2be1f8: 0x0  nop
    ctx->pc = 0x2be1f8u;
    // NOP
label_2be1fc:
    // 0x2be1fc: 0x0  nop
    ctx->pc = 0x2be1fcu;
    // NOP
label_2be200:
    // 0x2be200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2be204:
    // 0x2be204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2be208:
    // 0x2be208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2be20c:
    // 0x2be20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2be210:
    // 0x2be210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be214:
    // 0x2be214: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
label_2be218:
    if (ctx->pc == 0x2BE218u) {
        ctx->pc = 0x2BE218u;
            // 0x2be218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE21Cu;
        goto label_2be21c;
    }
    ctx->pc = 0x2BE214u;
    {
        const bool branch_taken_0x2be214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE214u;
            // 0x2be218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be214) {
            ctx->pc = 0x2BE37Cu;
            goto label_2be37c;
        }
    }
    ctx->pc = 0x2BE21Cu;
label_2be21c:
    // 0x2be21c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2be220:
    // 0x2be220: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be224:
    // 0x2be224: 0x24631ce0  addiu       $v1, $v1, 0x1CE0
    ctx->pc = 0x2be224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7392));
label_2be228:
    // 0x2be228: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2be228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2be22c:
    // 0x2be22c: 0x24421d18  addiu       $v0, $v0, 0x1D18
    ctx->pc = 0x2be22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
label_2be230:
    // 0x2be230: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2be230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2be234:
    // 0x2be234: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2be234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2be238:
    // 0x2be238: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2be238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2be23c:
    // 0x2be23c: 0xc0407c0  jal         func_101F00
label_2be240:
    if (ctx->pc == 0x2BE240u) {
        ctx->pc = 0x2BE240u;
            // 0x2be240: 0x24a5e530  addiu       $a1, $a1, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960432));
        ctx->pc = 0x2BE244u;
        goto label_2be244;
    }
    ctx->pc = 0x2BE23Cu;
    SET_GPR_U32(ctx, 31, 0x2BE244u);
    ctx->pc = 0x2BE240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE23Cu;
            // 0x2be240: 0x24a5e530  addiu       $a1, $a1, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE244u; }
        if (ctx->pc != 0x2BE244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE244u; }
        if (ctx->pc != 0x2BE244u) { return; }
    }
    ctx->pc = 0x2BE244u;
label_2be244:
    // 0x2be244: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2be244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2be248:
    // 0x2be248: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2be24c:
    if (ctx->pc == 0x2BE24Cu) {
        ctx->pc = 0x2BE24Cu;
            // 0x2be24c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BE250u;
        goto label_2be250;
    }
    ctx->pc = 0x2BE248u;
    {
        const bool branch_taken_0x2be248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be248) {
            ctx->pc = 0x2BE24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE248u;
            // 0x2be24c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE290u;
            goto label_2be290;
        }
    }
    ctx->pc = 0x2BE250u;
label_2be250:
    // 0x2be250: 0x262200a4  addiu       $v0, $s1, 0xA4
    ctx->pc = 0x2be250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_2be254:
    // 0x2be254: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2be258:
    if (ctx->pc == 0x2BE258u) {
        ctx->pc = 0x2BE258u;
            // 0x2be258: 0x26220094  addiu       $v0, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->pc = 0x2BE25Cu;
        goto label_2be25c;
    }
    ctx->pc = 0x2BE254u;
    {
        const bool branch_taken_0x2be254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be254) {
            ctx->pc = 0x2BE258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE254u;
            // 0x2be258: 0x26220094  addiu       $v0, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE268u;
            goto label_2be268;
        }
    }
    ctx->pc = 0x2BE25Cu;
label_2be25c:
    // 0x2be25c: 0xc07507c  jal         func_1D41F0
label_2be260:
    if (ctx->pc == 0x2BE260u) {
        ctx->pc = 0x2BE260u;
            // 0x2be260: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->pc = 0x2BE264u;
        goto label_2be264;
    }
    ctx->pc = 0x2BE25Cu;
    SET_GPR_U32(ctx, 31, 0x2BE264u);
    ctx->pc = 0x2BE260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE25Cu;
            // 0x2be260: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE264u; }
        if (ctx->pc != 0x2BE264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE264u; }
        if (ctx->pc != 0x2BE264u) { return; }
    }
    ctx->pc = 0x2BE264u;
label_2be264:
    // 0x2be264: 0x26220094  addiu       $v0, $s1, 0x94
    ctx->pc = 0x2be264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_2be268:
    // 0x2be268: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2be26c:
    if (ctx->pc == 0x2BE26Cu) {
        ctx->pc = 0x2BE26Cu;
            // 0x2be26c: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2BE270u;
        goto label_2be270;
    }
    ctx->pc = 0x2BE268u;
    {
        const bool branch_taken_0x2be268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be268) {
            ctx->pc = 0x2BE26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE268u;
            // 0x2be26c: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE27Cu;
            goto label_2be27c;
        }
    }
    ctx->pc = 0x2BE270u;
label_2be270:
    // 0x2be270: 0xc07507c  jal         func_1D41F0
label_2be274:
    if (ctx->pc == 0x2BE274u) {
        ctx->pc = 0x2BE274u;
            // 0x2be274: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x2BE278u;
        goto label_2be278;
    }
    ctx->pc = 0x2BE270u;
    SET_GPR_U32(ctx, 31, 0x2BE278u);
    ctx->pc = 0x2BE274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE270u;
            // 0x2be274: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE278u; }
        if (ctx->pc != 0x2BE278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE278u; }
        if (ctx->pc != 0x2BE278u) { return; }
    }
    ctx->pc = 0x2BE278u;
label_2be278:
    // 0x2be278: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2be278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2be27c:
    // 0x2be27c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2be280:
    if (ctx->pc == 0x2BE280u) {
        ctx->pc = 0x2BE284u;
        goto label_2be284;
    }
    ctx->pc = 0x2BE27Cu;
    {
        const bool branch_taken_0x2be27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be27c) {
            ctx->pc = 0x2BE28Cu;
            goto label_2be28c;
        }
    }
    ctx->pc = 0x2BE284u;
label_2be284:
    // 0x2be284: 0xc07507c  jal         func_1D41F0
label_2be288:
    if (ctx->pc == 0x2BE288u) {
        ctx->pc = 0x2BE288u;
            // 0x2be288: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BE28Cu;
        goto label_2be28c;
    }
    ctx->pc = 0x2BE284u;
    SET_GPR_U32(ctx, 31, 0x2BE28Cu);
    ctx->pc = 0x2BE288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE284u;
            // 0x2be288: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE28Cu; }
        if (ctx->pc != 0x2BE28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE28Cu; }
        if (ctx->pc != 0x2BE28Cu) { return; }
    }
    ctx->pc = 0x2BE28Cu;
label_2be28c:
    // 0x2be28c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2be28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2be290:
    // 0x2be290: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2be294:
    if (ctx->pc == 0x2BE294u) {
        ctx->pc = 0x2BE294u;
            // 0x2be294: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BE298u;
        goto label_2be298;
    }
    ctx->pc = 0x2BE290u;
    {
        const bool branch_taken_0x2be290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be290) {
            ctx->pc = 0x2BE294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE290u;
            // 0x2be294: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE2C0u;
            goto label_2be2c0;
        }
    }
    ctx->pc = 0x2BE298u;
label_2be298:
    // 0x2be298: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2be29c:
    if (ctx->pc == 0x2BE29Cu) {
        ctx->pc = 0x2BE2A0u;
        goto label_2be2a0;
    }
    ctx->pc = 0x2BE298u;
    {
        const bool branch_taken_0x2be298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be298) {
            ctx->pc = 0x2BE2BCu;
            goto label_2be2bc;
        }
    }
    ctx->pc = 0x2BE2A0u;
label_2be2a0:
    // 0x2be2a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2be2a4:
    if (ctx->pc == 0x2BE2A4u) {
        ctx->pc = 0x2BE2A8u;
        goto label_2be2a8;
    }
    ctx->pc = 0x2BE2A0u;
    {
        const bool branch_taken_0x2be2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2a0) {
            ctx->pc = 0x2BE2BCu;
            goto label_2be2bc;
        }
    }
    ctx->pc = 0x2BE2A8u;
label_2be2a8:
    // 0x2be2a8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2be2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2be2ac:
    // 0x2be2ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2be2b0:
    if (ctx->pc == 0x2BE2B0u) {
        ctx->pc = 0x2BE2B4u;
        goto label_2be2b4;
    }
    ctx->pc = 0x2BE2ACu;
    {
        const bool branch_taken_0x2be2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2ac) {
            ctx->pc = 0x2BE2BCu;
            goto label_2be2bc;
        }
    }
    ctx->pc = 0x2BE2B4u;
label_2be2b4:
    // 0x2be2b4: 0xc0400a8  jal         func_1002A0
label_2be2b8:
    if (ctx->pc == 0x2BE2B8u) {
        ctx->pc = 0x2BE2BCu;
        goto label_2be2bc;
    }
    ctx->pc = 0x2BE2B4u;
    SET_GPR_U32(ctx, 31, 0x2BE2BCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2BCu; }
        if (ctx->pc != 0x2BE2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2BCu; }
        if (ctx->pc != 0x2BE2BCu) { return; }
    }
    ctx->pc = 0x2BE2BCu;
label_2be2bc:
    // 0x2be2bc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2be2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2be2c0:
    // 0x2be2c0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2be2c4:
    if (ctx->pc == 0x2BE2C4u) {
        ctx->pc = 0x2BE2C4u;
            // 0x2be2c4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BE2C8u;
        goto label_2be2c8;
    }
    ctx->pc = 0x2BE2C0u;
    {
        const bool branch_taken_0x2be2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2c0) {
            ctx->pc = 0x2BE2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2C0u;
            // 0x2be2c4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE2F0u;
            goto label_2be2f0;
        }
    }
    ctx->pc = 0x2BE2C8u;
label_2be2c8:
    // 0x2be2c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2be2cc:
    if (ctx->pc == 0x2BE2CCu) {
        ctx->pc = 0x2BE2D0u;
        goto label_2be2d0;
    }
    ctx->pc = 0x2BE2C8u;
    {
        const bool branch_taken_0x2be2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2c8) {
            ctx->pc = 0x2BE2ECu;
            goto label_2be2ec;
        }
    }
    ctx->pc = 0x2BE2D0u;
label_2be2d0:
    // 0x2be2d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2be2d4:
    if (ctx->pc == 0x2BE2D4u) {
        ctx->pc = 0x2BE2D8u;
        goto label_2be2d8;
    }
    ctx->pc = 0x2BE2D0u;
    {
        const bool branch_taken_0x2be2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2d0) {
            ctx->pc = 0x2BE2ECu;
            goto label_2be2ec;
        }
    }
    ctx->pc = 0x2BE2D8u;
label_2be2d8:
    // 0x2be2d8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2be2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2be2dc:
    // 0x2be2dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2be2e0:
    if (ctx->pc == 0x2BE2E0u) {
        ctx->pc = 0x2BE2E4u;
        goto label_2be2e4;
    }
    ctx->pc = 0x2BE2DCu;
    {
        const bool branch_taken_0x2be2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2dc) {
            ctx->pc = 0x2BE2ECu;
            goto label_2be2ec;
        }
    }
    ctx->pc = 0x2BE2E4u;
label_2be2e4:
    // 0x2be2e4: 0xc0400a8  jal         func_1002A0
label_2be2e8:
    if (ctx->pc == 0x2BE2E8u) {
        ctx->pc = 0x2BE2ECu;
        goto label_2be2ec;
    }
    ctx->pc = 0x2BE2E4u;
    SET_GPR_U32(ctx, 31, 0x2BE2ECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2ECu; }
        if (ctx->pc != 0x2BE2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2ECu; }
        if (ctx->pc != 0x2BE2ECu) { return; }
    }
    ctx->pc = 0x2BE2ECu;
label_2be2ec:
    // 0x2be2ec: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2be2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2be2f0:
    // 0x2be2f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2be2f4:
    if (ctx->pc == 0x2BE2F4u) {
        ctx->pc = 0x2BE2F8u;
        goto label_2be2f8;
    }
    ctx->pc = 0x2BE2F0u;
    {
        const bool branch_taken_0x2be2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2f0) {
            ctx->pc = 0x2BE30Cu;
            goto label_2be30c;
        }
    }
    ctx->pc = 0x2BE2F8u;
label_2be2f8:
    // 0x2be2f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2be2fc:
    // 0x2be2fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2be2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2be300:
    // 0x2be300: 0x24631c78  addiu       $v1, $v1, 0x1C78
    ctx->pc = 0x2be300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7288));
label_2be304:
    // 0x2be304: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2be304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2be308:
    // 0x2be308: 0xac400d20  sw          $zero, 0xD20($v0)
    ctx->pc = 0x2be308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3360), GPR_U32(ctx, 0));
label_2be30c:
    // 0x2be30c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2be310:
    if (ctx->pc == 0x2BE310u) {
        ctx->pc = 0x2BE310u;
            // 0x2be310: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BE314u;
        goto label_2be314;
    }
    ctx->pc = 0x2BE30Cu;
    {
        const bool branch_taken_0x2be30c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be30c) {
            ctx->pc = 0x2BE310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE30Cu;
            // 0x2be310: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE368u;
            goto label_2be368;
        }
    }
    ctx->pc = 0x2BE314u;
label_2be314:
    // 0x2be314: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be318:
    // 0x2be318: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2be318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2be31c:
    // 0x2be31c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2be31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2be320:
    // 0x2be320: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2be320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2be324:
    // 0x2be324: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2be328:
    if (ctx->pc == 0x2BE328u) {
        ctx->pc = 0x2BE328u;
            // 0x2be328: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BE32Cu;
        goto label_2be32c;
    }
    ctx->pc = 0x2BE324u;
    {
        const bool branch_taken_0x2be324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be324) {
            ctx->pc = 0x2BE328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE324u;
            // 0x2be328: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE340u;
            goto label_2be340;
        }
    }
    ctx->pc = 0x2BE32Cu;
label_2be32c:
    // 0x2be32c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2be32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2be330:
    // 0x2be330: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2be330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2be334:
    // 0x2be334: 0x320f809  jalr        $t9
label_2be338:
    if (ctx->pc == 0x2BE338u) {
        ctx->pc = 0x2BE338u;
            // 0x2be338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE33Cu;
        goto label_2be33c;
    }
    ctx->pc = 0x2BE334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BE33Cu);
        ctx->pc = 0x2BE338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE334u;
            // 0x2be338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BE33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BE33Cu; }
            if (ctx->pc != 0x2BE33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BE33Cu;
label_2be33c:
    // 0x2be33c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2be33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2be340:
    // 0x2be340: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2be344:
    if (ctx->pc == 0x2BE344u) {
        ctx->pc = 0x2BE344u;
            // 0x2be344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE348u;
        goto label_2be348;
    }
    ctx->pc = 0x2BE340u;
    {
        const bool branch_taken_0x2be340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be340) {
            ctx->pc = 0x2BE344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE340u;
            // 0x2be344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE35Cu;
            goto label_2be35c;
        }
    }
    ctx->pc = 0x2BE348u;
label_2be348:
    // 0x2be348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2be348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2be34c:
    // 0x2be34c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2be34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2be350:
    // 0x2be350: 0x320f809  jalr        $t9
label_2be354:
    if (ctx->pc == 0x2BE354u) {
        ctx->pc = 0x2BE354u;
            // 0x2be354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE358u;
        goto label_2be358;
    }
    ctx->pc = 0x2BE350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BE358u);
        ctx->pc = 0x2BE354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE350u;
            // 0x2be354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BE358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BE358u; }
            if (ctx->pc != 0x2BE358u) { return; }
        }
        }
    }
    ctx->pc = 0x2BE358u;
label_2be358:
    // 0x2be358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be35c:
    // 0x2be35c: 0xc075bf8  jal         func_1D6FE0
label_2be360:
    if (ctx->pc == 0x2BE360u) {
        ctx->pc = 0x2BE360u;
            // 0x2be360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE364u;
        goto label_2be364;
    }
    ctx->pc = 0x2BE35Cu;
    SET_GPR_U32(ctx, 31, 0x2BE364u);
    ctx->pc = 0x2BE360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE35Cu;
            // 0x2be360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE364u; }
        if (ctx->pc != 0x2BE364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE364u; }
        if (ctx->pc != 0x2BE364u) { return; }
    }
    ctx->pc = 0x2BE364u;
label_2be364:
    // 0x2be364: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2be364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2be368:
    // 0x2be368: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2be368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2be36c:
    // 0x2be36c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2be370:
    if (ctx->pc == 0x2BE370u) {
        ctx->pc = 0x2BE370u;
            // 0x2be370: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE374u;
        goto label_2be374;
    }
    ctx->pc = 0x2BE36Cu;
    {
        const bool branch_taken_0x2be36c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2be36c) {
            ctx->pc = 0x2BE370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE36Cu;
            // 0x2be370: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE380u;
            goto label_2be380;
        }
    }
    ctx->pc = 0x2BE374u;
label_2be374:
    // 0x2be374: 0xc0400a8  jal         func_1002A0
label_2be378:
    if (ctx->pc == 0x2BE378u) {
        ctx->pc = 0x2BE378u;
            // 0x2be378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE37Cu;
        goto label_2be37c;
    }
    ctx->pc = 0x2BE374u;
    SET_GPR_U32(ctx, 31, 0x2BE37Cu);
    ctx->pc = 0x2BE378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE374u;
            // 0x2be378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE37Cu; }
        if (ctx->pc != 0x2BE37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE37Cu; }
        if (ctx->pc != 0x2BE37Cu) { return; }
    }
    ctx->pc = 0x2BE37Cu;
label_2be37c:
    // 0x2be37c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2be37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be380:
    // 0x2be380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2be384:
    // 0x2be384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2be388:
    // 0x2be388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2be38c:
    // 0x2be38c: 0x3e00008  jr          $ra
label_2be390:
    if (ctx->pc == 0x2BE390u) {
        ctx->pc = 0x2BE390u;
            // 0x2be390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BE394u;
        goto label_2be394;
    }
    ctx->pc = 0x2BE38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE38Cu;
            // 0x2be390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE394u;
label_2be394:
    // 0x2be394: 0x0  nop
    ctx->pc = 0x2be394u;
    // NOP
label_2be398:
    // 0x2be398: 0x0  nop
    ctx->pc = 0x2be398u;
    // NOP
label_2be39c:
    // 0x2be39c: 0x0  nop
    ctx->pc = 0x2be39cu;
    // NOP
}
