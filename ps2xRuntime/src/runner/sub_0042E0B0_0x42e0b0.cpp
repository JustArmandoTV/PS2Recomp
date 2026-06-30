#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042E0B0
// Address: 0x42e0b0 - 0x42e2d0
void sub_0042E0B0_0x42e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E0B0_0x42e0b0");
#endif

    switch (ctx->pc) {
        case 0x42e0b0u: goto label_42e0b0;
        case 0x42e0b4u: goto label_42e0b4;
        case 0x42e0b8u: goto label_42e0b8;
        case 0x42e0bcu: goto label_42e0bc;
        case 0x42e0c0u: goto label_42e0c0;
        case 0x42e0c4u: goto label_42e0c4;
        case 0x42e0c8u: goto label_42e0c8;
        case 0x42e0ccu: goto label_42e0cc;
        case 0x42e0d0u: goto label_42e0d0;
        case 0x42e0d4u: goto label_42e0d4;
        case 0x42e0d8u: goto label_42e0d8;
        case 0x42e0dcu: goto label_42e0dc;
        case 0x42e0e0u: goto label_42e0e0;
        case 0x42e0e4u: goto label_42e0e4;
        case 0x42e0e8u: goto label_42e0e8;
        case 0x42e0ecu: goto label_42e0ec;
        case 0x42e0f0u: goto label_42e0f0;
        case 0x42e0f4u: goto label_42e0f4;
        case 0x42e0f8u: goto label_42e0f8;
        case 0x42e0fcu: goto label_42e0fc;
        case 0x42e100u: goto label_42e100;
        case 0x42e104u: goto label_42e104;
        case 0x42e108u: goto label_42e108;
        case 0x42e10cu: goto label_42e10c;
        case 0x42e110u: goto label_42e110;
        case 0x42e114u: goto label_42e114;
        case 0x42e118u: goto label_42e118;
        case 0x42e11cu: goto label_42e11c;
        case 0x42e120u: goto label_42e120;
        case 0x42e124u: goto label_42e124;
        case 0x42e128u: goto label_42e128;
        case 0x42e12cu: goto label_42e12c;
        case 0x42e130u: goto label_42e130;
        case 0x42e134u: goto label_42e134;
        case 0x42e138u: goto label_42e138;
        case 0x42e13cu: goto label_42e13c;
        case 0x42e140u: goto label_42e140;
        case 0x42e144u: goto label_42e144;
        case 0x42e148u: goto label_42e148;
        case 0x42e14cu: goto label_42e14c;
        case 0x42e150u: goto label_42e150;
        case 0x42e154u: goto label_42e154;
        case 0x42e158u: goto label_42e158;
        case 0x42e15cu: goto label_42e15c;
        case 0x42e160u: goto label_42e160;
        case 0x42e164u: goto label_42e164;
        case 0x42e168u: goto label_42e168;
        case 0x42e16cu: goto label_42e16c;
        case 0x42e170u: goto label_42e170;
        case 0x42e174u: goto label_42e174;
        case 0x42e178u: goto label_42e178;
        case 0x42e17cu: goto label_42e17c;
        case 0x42e180u: goto label_42e180;
        case 0x42e184u: goto label_42e184;
        case 0x42e188u: goto label_42e188;
        case 0x42e18cu: goto label_42e18c;
        case 0x42e190u: goto label_42e190;
        case 0x42e194u: goto label_42e194;
        case 0x42e198u: goto label_42e198;
        case 0x42e19cu: goto label_42e19c;
        case 0x42e1a0u: goto label_42e1a0;
        case 0x42e1a4u: goto label_42e1a4;
        case 0x42e1a8u: goto label_42e1a8;
        case 0x42e1acu: goto label_42e1ac;
        case 0x42e1b0u: goto label_42e1b0;
        case 0x42e1b4u: goto label_42e1b4;
        case 0x42e1b8u: goto label_42e1b8;
        case 0x42e1bcu: goto label_42e1bc;
        case 0x42e1c0u: goto label_42e1c0;
        case 0x42e1c4u: goto label_42e1c4;
        case 0x42e1c8u: goto label_42e1c8;
        case 0x42e1ccu: goto label_42e1cc;
        case 0x42e1d0u: goto label_42e1d0;
        case 0x42e1d4u: goto label_42e1d4;
        case 0x42e1d8u: goto label_42e1d8;
        case 0x42e1dcu: goto label_42e1dc;
        case 0x42e1e0u: goto label_42e1e0;
        case 0x42e1e4u: goto label_42e1e4;
        case 0x42e1e8u: goto label_42e1e8;
        case 0x42e1ecu: goto label_42e1ec;
        case 0x42e1f0u: goto label_42e1f0;
        case 0x42e1f4u: goto label_42e1f4;
        case 0x42e1f8u: goto label_42e1f8;
        case 0x42e1fcu: goto label_42e1fc;
        case 0x42e200u: goto label_42e200;
        case 0x42e204u: goto label_42e204;
        case 0x42e208u: goto label_42e208;
        case 0x42e20cu: goto label_42e20c;
        case 0x42e210u: goto label_42e210;
        case 0x42e214u: goto label_42e214;
        case 0x42e218u: goto label_42e218;
        case 0x42e21cu: goto label_42e21c;
        case 0x42e220u: goto label_42e220;
        case 0x42e224u: goto label_42e224;
        case 0x42e228u: goto label_42e228;
        case 0x42e22cu: goto label_42e22c;
        case 0x42e230u: goto label_42e230;
        case 0x42e234u: goto label_42e234;
        case 0x42e238u: goto label_42e238;
        case 0x42e23cu: goto label_42e23c;
        case 0x42e240u: goto label_42e240;
        case 0x42e244u: goto label_42e244;
        case 0x42e248u: goto label_42e248;
        case 0x42e24cu: goto label_42e24c;
        case 0x42e250u: goto label_42e250;
        case 0x42e254u: goto label_42e254;
        case 0x42e258u: goto label_42e258;
        case 0x42e25cu: goto label_42e25c;
        case 0x42e260u: goto label_42e260;
        case 0x42e264u: goto label_42e264;
        case 0x42e268u: goto label_42e268;
        case 0x42e26cu: goto label_42e26c;
        case 0x42e270u: goto label_42e270;
        case 0x42e274u: goto label_42e274;
        case 0x42e278u: goto label_42e278;
        case 0x42e27cu: goto label_42e27c;
        case 0x42e280u: goto label_42e280;
        case 0x42e284u: goto label_42e284;
        case 0x42e288u: goto label_42e288;
        case 0x42e28cu: goto label_42e28c;
        case 0x42e290u: goto label_42e290;
        case 0x42e294u: goto label_42e294;
        case 0x42e298u: goto label_42e298;
        case 0x42e29cu: goto label_42e29c;
        case 0x42e2a0u: goto label_42e2a0;
        case 0x42e2a4u: goto label_42e2a4;
        case 0x42e2a8u: goto label_42e2a8;
        case 0x42e2acu: goto label_42e2ac;
        case 0x42e2b0u: goto label_42e2b0;
        case 0x42e2b4u: goto label_42e2b4;
        case 0x42e2b8u: goto label_42e2b8;
        case 0x42e2bcu: goto label_42e2bc;
        case 0x42e2c0u: goto label_42e2c0;
        case 0x42e2c4u: goto label_42e2c4;
        case 0x42e2c8u: goto label_42e2c8;
        case 0x42e2ccu: goto label_42e2cc;
        default: break;
    }

    ctx->pc = 0x42e0b0u;

label_42e0b0:
    // 0x42e0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42e0b4:
    // 0x42e0b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42e0b8:
    // 0x42e0b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42e0bc:
    // 0x42e0bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42e0c0:
    // 0x42e0c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x42e0c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42e0c4:
    // 0x42e0c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42e0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42e0c8:
    // 0x42e0c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42e0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e0cc:
    // 0x42e0cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e0d0:
    // 0x42e0d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x42e0d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_42e0d4:
    // 0x42e0d4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x42e0d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_42e0d8:
    // 0x42e0d8: 0xc078cdc  jal         func_1E3370
label_42e0dc:
    if (ctx->pc == 0x42E0DCu) {
        ctx->pc = 0x42E0DCu;
            // 0x42e0dc: 0x3051001f  andi        $s1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->pc = 0x42E0E0u;
        goto label_42e0e0;
    }
    ctx->pc = 0x42E0D8u;
    SET_GPR_U32(ctx, 31, 0x42E0E0u);
    ctx->pc = 0x42E0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E0D8u;
            // 0x42e0dc: 0x3051001f  andi        $s1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3370u;
    if (runtime->hasFunction(0x1E3370u)) {
        auto targetFn = runtime->lookupFunction(0x1E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E0E0u; }
        if (ctx->pc != 0x42E0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3370_0x1e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E0E0u; }
        if (ctx->pc != 0x42E0E0u) { return; }
    }
    ctx->pc = 0x42E0E0u;
label_42e0e0:
    // 0x42e0e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42e0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42e0e4:
    // 0x42e0e4: 0x92730001  lbu         $s3, 0x1($s3)
    ctx->pc = 0x42e0e4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_42e0e8:
    // 0x42e0e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42e0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42e0ec:
    // 0x42e0ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42e0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42e0f0:
    // 0x42e0f0: 0xc077614  jal         func_1DD850
label_42e0f4:
    if (ctx->pc == 0x42E0F4u) {
        ctx->pc = 0x42E0F4u;
            // 0x42e0f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E0F8u;
        goto label_42e0f8;
    }
    ctx->pc = 0x42E0F0u;
    SET_GPR_U32(ctx, 31, 0x42E0F8u);
    ctx->pc = 0x42E0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E0F0u;
            // 0x42e0f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD850u;
    if (runtime->hasFunction(0x1DD850u)) {
        auto targetFn = runtime->lookupFunction(0x1DD850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E0F8u; }
        if (ctx->pc != 0x42E0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD850_0x1dd850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E0F8u; }
        if (ctx->pc != 0x42E0F8u) { return; }
    }
    ctx->pc = 0x42E0F8u;
label_42e0f8:
    // 0x42e0f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42e0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42e0fc:
    // 0x42e0fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42e0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42e100:
    // 0x42e100: 0xc0775f8  jal         func_1DD7E0
label_42e104:
    if (ctx->pc == 0x42E104u) {
        ctx->pc = 0x42E104u;
            // 0x42e104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E108u;
        goto label_42e108;
    }
    ctx->pc = 0x42E100u;
    SET_GPR_U32(ctx, 31, 0x42E108u);
    ctx->pc = 0x42E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E100u;
            // 0x42e104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD7E0u;
    if (runtime->hasFunction(0x1DD7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E108u; }
        if (ctx->pc != 0x42E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD7E0_0x1dd7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E108u; }
        if (ctx->pc != 0x42E108u) { return; }
    }
    ctx->pc = 0x42E108u;
label_42e108:
    // 0x42e108: 0x8e420d70  lw          $v0, 0xD70($s2)
    ctx->pc = 0x42e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_42e10c:
    // 0x42e10c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x42e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_42e110:
    // 0x42e110: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x42e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_42e114:
    // 0x42e114: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x42e114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
label_42e118:
    // 0x42e118: 0x8e450d6c  lw          $a1, 0xD6C($s2)
    ctx->pc = 0x42e118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_42e11c:
    // 0x42e11c: 0x8e460d70  lw          $a2, 0xD70($s2)
    ctx->pc = 0x42e11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_42e120:
    // 0x42e120: 0xc0753f0  jal         func_1D4FC0
label_42e124:
    if (ctx->pc == 0x42E124u) {
        ctx->pc = 0x42E124u;
            // 0x42e124: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x42E128u;
        goto label_42e128;
    }
    ctx->pc = 0x42E120u;
    SET_GPR_U32(ctx, 31, 0x42E128u);
    ctx->pc = 0x42E124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E120u;
            // 0x42e124: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FC0u;
    if (runtime->hasFunction(0x1D4FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E128u; }
        if (ctx->pc != 0x42E128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4FC0_0x1d4fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E128u; }
        if (ctx->pc != 0x42E128u) { return; }
    }
    ctx->pc = 0x42E128u;
label_42e128:
    // 0x42e128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42e128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42e12c:
    // 0x42e12c: 0xc077c08  jal         func_1DF020
label_42e130:
    if (ctx->pc == 0x42E130u) {
        ctx->pc = 0x42E130u;
            // 0x42e130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E134u;
        goto label_42e134;
    }
    ctx->pc = 0x42E12Cu;
    SET_GPR_U32(ctx, 31, 0x42E134u);
    ctx->pc = 0x42E130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E12Cu;
            // 0x42e130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF020u;
    if (runtime->hasFunction(0x1DF020u)) {
        auto targetFn = runtime->lookupFunction(0x1DF020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E134u; }
        if (ctx->pc != 0x42E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF020_0x1df020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E134u; }
        if (ctx->pc != 0x42E134u) { return; }
    }
    ctx->pc = 0x42E134u;
label_42e134:
    // 0x42e134: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x42e134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_42e138:
    // 0x42e138: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x42e138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
label_42e13c:
    // 0x42e13c: 0x10363c  dsll32      $a2, $s0, 24
    ctx->pc = 0x42e13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 24));
label_42e140:
    // 0x42e140: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x42e140u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_42e144:
    // 0x42e144: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x42e144u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_42e148:
    // 0x42e148: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x42e148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_42e14c:
    // 0x42e14c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x42e14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_42e150:
    // 0x42e150: 0x320f809  jalr        $t9
label_42e154:
    if (ctx->pc == 0x42E154u) {
        ctx->pc = 0x42E154u;
            // 0x42e154: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E158u;
        goto label_42e158;
    }
    ctx->pc = 0x42E150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E158u);
        ctx->pc = 0x42E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E150u;
            // 0x42e154: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E158u; }
            if (ctx->pc != 0x42E158u) { return; }
        }
        }
    }
    ctx->pc = 0x42E158u;
label_42e158:
    // 0x42e158: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42e15c:
    // 0x42e15c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42e15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42e160:
    // 0x42e160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42e160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42e164:
    // 0x42e164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42e164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42e168:
    // 0x42e168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42e168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42e16c:
    // 0x42e16c: 0x3e00008  jr          $ra
label_42e170:
    if (ctx->pc == 0x42E170u) {
        ctx->pc = 0x42E170u;
            // 0x42e170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42E174u;
        goto label_42e174;
    }
    ctx->pc = 0x42E16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E16Cu;
            // 0x42e170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42E174u;
label_42e174:
    // 0x42e174: 0x0  nop
    ctx->pc = 0x42e174u;
    // NOP
label_42e178:
    // 0x42e178: 0x0  nop
    ctx->pc = 0x42e178u;
    // NOP
label_42e17c:
    // 0x42e17c: 0x0  nop
    ctx->pc = 0x42e17cu;
    // NOP
label_42e180:
    // 0x42e180: 0x810b7fc  j           func_42DFF0
label_42e184:
    if (ctx->pc == 0x42E184u) {
        ctx->pc = 0x42E184u;
            // 0x42e184: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x42E188u;
        goto label_42e188;
    }
    ctx->pc = 0x42E180u;
    ctx->pc = 0x42E184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E180u;
            // 0x42e184: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DFF0u;
    {
        auto targetFn = runtime->lookupFunction(0x42DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42E188u;
label_42e188:
    // 0x42e188: 0x0  nop
    ctx->pc = 0x42e188u;
    // NOP
label_42e18c:
    // 0x42e18c: 0x0  nop
    ctx->pc = 0x42e18cu;
    // NOP
label_42e190:
    // 0x42e190: 0x810b714  j           func_42DC50
label_42e194:
    if (ctx->pc == 0x42E194u) {
        ctx->pc = 0x42E194u;
            // 0x42e194: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x42E198u;
        goto label_42e198;
    }
    ctx->pc = 0x42E190u;
    ctx->pc = 0x42E194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E190u;
            // 0x42e194: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DC50u;
    {
        auto targetFn = runtime->lookupFunction(0x42DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42E198u;
label_42e198:
    // 0x42e198: 0x0  nop
    ctx->pc = 0x42e198u;
    // NOP
label_42e19c:
    // 0x42e19c: 0x0  nop
    ctx->pc = 0x42e19cu;
    // NOP
label_42e1a0:
    // 0x42e1a0: 0x810b7e4  j           func_42DF90
label_42e1a4:
    if (ctx->pc == 0x42E1A4u) {
        ctx->pc = 0x42E1A4u;
            // 0x42e1a4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x42E1A8u;
        goto label_42e1a8;
    }
    ctx->pc = 0x42E1A0u;
    ctx->pc = 0x42E1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E1A0u;
            // 0x42e1a4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DF90u;
    {
        auto targetFn = runtime->lookupFunction(0x42DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42E1A8u;
label_42e1a8:
    // 0x42e1a8: 0x0  nop
    ctx->pc = 0x42e1a8u;
    // NOP
label_42e1ac:
    // 0x42e1ac: 0x0  nop
    ctx->pc = 0x42e1acu;
    // NOP
label_42e1b0:
    // 0x42e1b0: 0x810b6f0  j           func_42DBC0
label_42e1b4:
    if (ctx->pc == 0x42E1B4u) {
        ctx->pc = 0x42E1B4u;
            // 0x42e1b4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x42E1B8u;
        goto label_42e1b8;
    }
    ctx->pc = 0x42E1B0u;
    ctx->pc = 0x42E1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E1B0u;
            // 0x42e1b4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DBC0u;
    {
        auto targetFn = runtime->lookupFunction(0x42DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42E1B8u;
label_42e1b8:
    // 0x42e1b8: 0x0  nop
    ctx->pc = 0x42e1b8u;
    // NOP
label_42e1bc:
    // 0x42e1bc: 0x0  nop
    ctx->pc = 0x42e1bcu;
    // NOP
label_42e1c0:
    // 0x42e1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42e1c4:
    // 0x42e1c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42e1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42e1c8:
    // 0x42e1c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42e1cc:
    // 0x42e1cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x42e1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_42e1d0:
    // 0x42e1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42e1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e1d4:
    // 0x42e1d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x42e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_42e1d8:
    // 0x42e1d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42e1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42e1dc:
    // 0x42e1dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x42e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_42e1e0:
    // 0x42e1e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42e1e4:
    // 0x42e1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42e1e8:
    // 0x42e1e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x42e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_42e1ec:
    // 0x42e1ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x42e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42e1f0:
    // 0x42e1f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x42e1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_42e1f4:
    // 0x42e1f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x42e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_42e1f8:
    // 0x42e1f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x42e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_42e1fc:
    // 0x42e1fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x42e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_42e200:
    // 0x42e200: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x42e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_42e204:
    // 0x42e204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x42e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_42e208:
    // 0x42e208: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x42e208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_42e20c:
    // 0x42e20c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x42e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42e210:
    // 0x42e210: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x42e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_42e214:
    // 0x42e214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42e214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42e218:
    // 0x42e218: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x42e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42e21c:
    // 0x42e21c: 0xc0a997c  jal         func_2A65F0
label_42e220:
    if (ctx->pc == 0x42E220u) {
        ctx->pc = 0x42E220u;
            // 0x42e220: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x42E224u;
        goto label_42e224;
    }
    ctx->pc = 0x42E21Cu;
    SET_GPR_U32(ctx, 31, 0x42E224u);
    ctx->pc = 0x42E220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E21Cu;
            // 0x42e220: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E224u; }
        if (ctx->pc != 0x42E224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E224u; }
        if (ctx->pc != 0x42E224u) { return; }
    }
    ctx->pc = 0x42E224u;
label_42e224:
    // 0x42e224: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x42e224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_42e228:
    // 0x42e228: 0xc0d879c  jal         func_361E70
label_42e22c:
    if (ctx->pc == 0x42E22Cu) {
        ctx->pc = 0x42E22Cu;
            // 0x42e22c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E230u;
        goto label_42e230;
    }
    ctx->pc = 0x42E228u;
    SET_GPR_U32(ctx, 31, 0x42E230u);
    ctx->pc = 0x42E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E228u;
            // 0x42e22c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E230u; }
        if (ctx->pc != 0x42E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E230u; }
        if (ctx->pc != 0x42E230u) { return; }
    }
    ctx->pc = 0x42E230u;
label_42e230:
    // 0x42e230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42e230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42e234:
    // 0x42e234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42e234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42e238:
    // 0x42e238: 0x3e00008  jr          $ra
label_42e23c:
    if (ctx->pc == 0x42E23Cu) {
        ctx->pc = 0x42E23Cu;
            // 0x42e23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42E240u;
        goto label_42e240;
    }
    ctx->pc = 0x42E238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E238u;
            // 0x42e23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42E240u;
label_42e240:
    // 0x42e240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42e240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42e244:
    // 0x42e244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42e248:
    // 0x42e248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42e24c:
    // 0x42e24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e250:
    // 0x42e250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42e250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e254:
    // 0x42e254: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_42e258:
    if (ctx->pc == 0x42E258u) {
        ctx->pc = 0x42E258u;
            // 0x42e258: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E25Cu;
        goto label_42e25c;
    }
    ctx->pc = 0x42E254u;
    {
        const bool branch_taken_0x42e254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E254u;
            // 0x42e258: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e254) {
            ctx->pc = 0x42E2B0u;
            goto label_42e2b0;
        }
    }
    ctx->pc = 0x42E25Cu;
label_42e25c:
    // 0x42e25c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42e260:
    // 0x42e260: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42e264:
    // 0x42e264: 0x2463c5f0  addiu       $v1, $v1, -0x3A10
    ctx->pc = 0x42e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952432));
label_42e268:
    // 0x42e268: 0x2442c628  addiu       $v0, $v0, -0x39D8
    ctx->pc = 0x42e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952488));
label_42e26c:
    // 0x42e26c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42e270:
    // 0x42e270: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_42e274:
    if (ctx->pc == 0x42E274u) {
        ctx->pc = 0x42E274u;
            // 0x42e274: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x42E278u;
        goto label_42e278;
    }
    ctx->pc = 0x42E270u;
    {
        const bool branch_taken_0x42e270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E270u;
            // 0x42e274: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e270) {
            ctx->pc = 0x42E298u;
            goto label_42e298;
        }
    }
    ctx->pc = 0x42E278u;
label_42e278:
    // 0x42e278: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42e278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42e27c:
    // 0x42e27c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42e280:
    // 0x42e280: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x42e280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
label_42e284:
    // 0x42e284: 0x2442c778  addiu       $v0, $v0, -0x3888
    ctx->pc = 0x42e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
label_42e288:
    // 0x42e288: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42e288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42e28c:
    // 0x42e28c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42e28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e290:
    // 0x42e290: 0xc10b8b4  jal         func_42E2D0
label_42e294:
    if (ctx->pc == 0x42E294u) {
        ctx->pc = 0x42E294u;
            // 0x42e294: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x42E298u;
        goto label_42e298;
    }
    ctx->pc = 0x42E290u;
    SET_GPR_U32(ctx, 31, 0x42E298u);
    ctx->pc = 0x42E294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E290u;
            // 0x42e294: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42E2D0u;
    if (runtime->hasFunction(0x42E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x42E2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E298u; }
        if (ctx->pc != 0x42E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042E2D0_0x42e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E298u; }
        if (ctx->pc != 0x42E298u) { return; }
    }
    ctx->pc = 0x42E298u;
label_42e298:
    // 0x42e298: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x42e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_42e29c:
    // 0x42e29c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42e29cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42e2a0:
    // 0x42e2a0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42e2a4:
    if (ctx->pc == 0x42E2A4u) {
        ctx->pc = 0x42E2A4u;
            // 0x42e2a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E2A8u;
        goto label_42e2a8;
    }
    ctx->pc = 0x42E2A0u;
    {
        const bool branch_taken_0x42e2a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42e2a0) {
            ctx->pc = 0x42E2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E2A0u;
            // 0x42e2a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E2B4u;
            goto label_42e2b4;
        }
    }
    ctx->pc = 0x42E2A8u;
label_42e2a8:
    // 0x42e2a8: 0xc0400a8  jal         func_1002A0
label_42e2ac:
    if (ctx->pc == 0x42E2ACu) {
        ctx->pc = 0x42E2ACu;
            // 0x42e2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E2B0u;
        goto label_42e2b0;
    }
    ctx->pc = 0x42E2A8u;
    SET_GPR_U32(ctx, 31, 0x42E2B0u);
    ctx->pc = 0x42E2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E2A8u;
            // 0x42e2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E2B0u; }
        if (ctx->pc != 0x42E2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E2B0u; }
        if (ctx->pc != 0x42E2B0u) { return; }
    }
    ctx->pc = 0x42E2B0u;
label_42e2b0:
    // 0x42e2b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42e2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42e2b4:
    // 0x42e2b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42e2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42e2b8:
    // 0x42e2b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42e2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42e2bc:
    // 0x42e2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42e2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42e2c0:
    // 0x42e2c0: 0x3e00008  jr          $ra
label_42e2c4:
    if (ctx->pc == 0x42E2C4u) {
        ctx->pc = 0x42E2C4u;
            // 0x42e2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42E2C8u;
        goto label_42e2c8;
    }
    ctx->pc = 0x42E2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E2C0u;
            // 0x42e2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42E2C8u;
label_42e2c8:
    // 0x42e2c8: 0x0  nop
    ctx->pc = 0x42e2c8u;
    // NOP
label_42e2cc:
    // 0x42e2cc: 0x0  nop
    ctx->pc = 0x42e2ccu;
    // NOP
}
