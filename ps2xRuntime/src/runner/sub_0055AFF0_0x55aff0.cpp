#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055AFF0
// Address: 0x55aff0 - 0x55b340
void sub_0055AFF0_0x55aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055AFF0_0x55aff0");
#endif

    switch (ctx->pc) {
        case 0x55aff0u: goto label_55aff0;
        case 0x55aff4u: goto label_55aff4;
        case 0x55aff8u: goto label_55aff8;
        case 0x55affcu: goto label_55affc;
        case 0x55b000u: goto label_55b000;
        case 0x55b004u: goto label_55b004;
        case 0x55b008u: goto label_55b008;
        case 0x55b00cu: goto label_55b00c;
        case 0x55b010u: goto label_55b010;
        case 0x55b014u: goto label_55b014;
        case 0x55b018u: goto label_55b018;
        case 0x55b01cu: goto label_55b01c;
        case 0x55b020u: goto label_55b020;
        case 0x55b024u: goto label_55b024;
        case 0x55b028u: goto label_55b028;
        case 0x55b02cu: goto label_55b02c;
        case 0x55b030u: goto label_55b030;
        case 0x55b034u: goto label_55b034;
        case 0x55b038u: goto label_55b038;
        case 0x55b03cu: goto label_55b03c;
        case 0x55b040u: goto label_55b040;
        case 0x55b044u: goto label_55b044;
        case 0x55b048u: goto label_55b048;
        case 0x55b04cu: goto label_55b04c;
        case 0x55b050u: goto label_55b050;
        case 0x55b054u: goto label_55b054;
        case 0x55b058u: goto label_55b058;
        case 0x55b05cu: goto label_55b05c;
        case 0x55b060u: goto label_55b060;
        case 0x55b064u: goto label_55b064;
        case 0x55b068u: goto label_55b068;
        case 0x55b06cu: goto label_55b06c;
        case 0x55b070u: goto label_55b070;
        case 0x55b074u: goto label_55b074;
        case 0x55b078u: goto label_55b078;
        case 0x55b07cu: goto label_55b07c;
        case 0x55b080u: goto label_55b080;
        case 0x55b084u: goto label_55b084;
        case 0x55b088u: goto label_55b088;
        case 0x55b08cu: goto label_55b08c;
        case 0x55b090u: goto label_55b090;
        case 0x55b094u: goto label_55b094;
        case 0x55b098u: goto label_55b098;
        case 0x55b09cu: goto label_55b09c;
        case 0x55b0a0u: goto label_55b0a0;
        case 0x55b0a4u: goto label_55b0a4;
        case 0x55b0a8u: goto label_55b0a8;
        case 0x55b0acu: goto label_55b0ac;
        case 0x55b0b0u: goto label_55b0b0;
        case 0x55b0b4u: goto label_55b0b4;
        case 0x55b0b8u: goto label_55b0b8;
        case 0x55b0bcu: goto label_55b0bc;
        case 0x55b0c0u: goto label_55b0c0;
        case 0x55b0c4u: goto label_55b0c4;
        case 0x55b0c8u: goto label_55b0c8;
        case 0x55b0ccu: goto label_55b0cc;
        case 0x55b0d0u: goto label_55b0d0;
        case 0x55b0d4u: goto label_55b0d4;
        case 0x55b0d8u: goto label_55b0d8;
        case 0x55b0dcu: goto label_55b0dc;
        case 0x55b0e0u: goto label_55b0e0;
        case 0x55b0e4u: goto label_55b0e4;
        case 0x55b0e8u: goto label_55b0e8;
        case 0x55b0ecu: goto label_55b0ec;
        case 0x55b0f0u: goto label_55b0f0;
        case 0x55b0f4u: goto label_55b0f4;
        case 0x55b0f8u: goto label_55b0f8;
        case 0x55b0fcu: goto label_55b0fc;
        case 0x55b100u: goto label_55b100;
        case 0x55b104u: goto label_55b104;
        case 0x55b108u: goto label_55b108;
        case 0x55b10cu: goto label_55b10c;
        case 0x55b110u: goto label_55b110;
        case 0x55b114u: goto label_55b114;
        case 0x55b118u: goto label_55b118;
        case 0x55b11cu: goto label_55b11c;
        case 0x55b120u: goto label_55b120;
        case 0x55b124u: goto label_55b124;
        case 0x55b128u: goto label_55b128;
        case 0x55b12cu: goto label_55b12c;
        case 0x55b130u: goto label_55b130;
        case 0x55b134u: goto label_55b134;
        case 0x55b138u: goto label_55b138;
        case 0x55b13cu: goto label_55b13c;
        case 0x55b140u: goto label_55b140;
        case 0x55b144u: goto label_55b144;
        case 0x55b148u: goto label_55b148;
        case 0x55b14cu: goto label_55b14c;
        case 0x55b150u: goto label_55b150;
        case 0x55b154u: goto label_55b154;
        case 0x55b158u: goto label_55b158;
        case 0x55b15cu: goto label_55b15c;
        case 0x55b160u: goto label_55b160;
        case 0x55b164u: goto label_55b164;
        case 0x55b168u: goto label_55b168;
        case 0x55b16cu: goto label_55b16c;
        case 0x55b170u: goto label_55b170;
        case 0x55b174u: goto label_55b174;
        case 0x55b178u: goto label_55b178;
        case 0x55b17cu: goto label_55b17c;
        case 0x55b180u: goto label_55b180;
        case 0x55b184u: goto label_55b184;
        case 0x55b188u: goto label_55b188;
        case 0x55b18cu: goto label_55b18c;
        case 0x55b190u: goto label_55b190;
        case 0x55b194u: goto label_55b194;
        case 0x55b198u: goto label_55b198;
        case 0x55b19cu: goto label_55b19c;
        case 0x55b1a0u: goto label_55b1a0;
        case 0x55b1a4u: goto label_55b1a4;
        case 0x55b1a8u: goto label_55b1a8;
        case 0x55b1acu: goto label_55b1ac;
        case 0x55b1b0u: goto label_55b1b0;
        case 0x55b1b4u: goto label_55b1b4;
        case 0x55b1b8u: goto label_55b1b8;
        case 0x55b1bcu: goto label_55b1bc;
        case 0x55b1c0u: goto label_55b1c0;
        case 0x55b1c4u: goto label_55b1c4;
        case 0x55b1c8u: goto label_55b1c8;
        case 0x55b1ccu: goto label_55b1cc;
        case 0x55b1d0u: goto label_55b1d0;
        case 0x55b1d4u: goto label_55b1d4;
        case 0x55b1d8u: goto label_55b1d8;
        case 0x55b1dcu: goto label_55b1dc;
        case 0x55b1e0u: goto label_55b1e0;
        case 0x55b1e4u: goto label_55b1e4;
        case 0x55b1e8u: goto label_55b1e8;
        case 0x55b1ecu: goto label_55b1ec;
        case 0x55b1f0u: goto label_55b1f0;
        case 0x55b1f4u: goto label_55b1f4;
        case 0x55b1f8u: goto label_55b1f8;
        case 0x55b1fcu: goto label_55b1fc;
        case 0x55b200u: goto label_55b200;
        case 0x55b204u: goto label_55b204;
        case 0x55b208u: goto label_55b208;
        case 0x55b20cu: goto label_55b20c;
        case 0x55b210u: goto label_55b210;
        case 0x55b214u: goto label_55b214;
        case 0x55b218u: goto label_55b218;
        case 0x55b21cu: goto label_55b21c;
        case 0x55b220u: goto label_55b220;
        case 0x55b224u: goto label_55b224;
        case 0x55b228u: goto label_55b228;
        case 0x55b22cu: goto label_55b22c;
        case 0x55b230u: goto label_55b230;
        case 0x55b234u: goto label_55b234;
        case 0x55b238u: goto label_55b238;
        case 0x55b23cu: goto label_55b23c;
        case 0x55b240u: goto label_55b240;
        case 0x55b244u: goto label_55b244;
        case 0x55b248u: goto label_55b248;
        case 0x55b24cu: goto label_55b24c;
        case 0x55b250u: goto label_55b250;
        case 0x55b254u: goto label_55b254;
        case 0x55b258u: goto label_55b258;
        case 0x55b25cu: goto label_55b25c;
        case 0x55b260u: goto label_55b260;
        case 0x55b264u: goto label_55b264;
        case 0x55b268u: goto label_55b268;
        case 0x55b26cu: goto label_55b26c;
        case 0x55b270u: goto label_55b270;
        case 0x55b274u: goto label_55b274;
        case 0x55b278u: goto label_55b278;
        case 0x55b27cu: goto label_55b27c;
        case 0x55b280u: goto label_55b280;
        case 0x55b284u: goto label_55b284;
        case 0x55b288u: goto label_55b288;
        case 0x55b28cu: goto label_55b28c;
        case 0x55b290u: goto label_55b290;
        case 0x55b294u: goto label_55b294;
        case 0x55b298u: goto label_55b298;
        case 0x55b29cu: goto label_55b29c;
        case 0x55b2a0u: goto label_55b2a0;
        case 0x55b2a4u: goto label_55b2a4;
        case 0x55b2a8u: goto label_55b2a8;
        case 0x55b2acu: goto label_55b2ac;
        case 0x55b2b0u: goto label_55b2b0;
        case 0x55b2b4u: goto label_55b2b4;
        case 0x55b2b8u: goto label_55b2b8;
        case 0x55b2bcu: goto label_55b2bc;
        case 0x55b2c0u: goto label_55b2c0;
        case 0x55b2c4u: goto label_55b2c4;
        case 0x55b2c8u: goto label_55b2c8;
        case 0x55b2ccu: goto label_55b2cc;
        case 0x55b2d0u: goto label_55b2d0;
        case 0x55b2d4u: goto label_55b2d4;
        case 0x55b2d8u: goto label_55b2d8;
        case 0x55b2dcu: goto label_55b2dc;
        case 0x55b2e0u: goto label_55b2e0;
        case 0x55b2e4u: goto label_55b2e4;
        case 0x55b2e8u: goto label_55b2e8;
        case 0x55b2ecu: goto label_55b2ec;
        case 0x55b2f0u: goto label_55b2f0;
        case 0x55b2f4u: goto label_55b2f4;
        case 0x55b2f8u: goto label_55b2f8;
        case 0x55b2fcu: goto label_55b2fc;
        case 0x55b300u: goto label_55b300;
        case 0x55b304u: goto label_55b304;
        case 0x55b308u: goto label_55b308;
        case 0x55b30cu: goto label_55b30c;
        case 0x55b310u: goto label_55b310;
        case 0x55b314u: goto label_55b314;
        case 0x55b318u: goto label_55b318;
        case 0x55b31cu: goto label_55b31c;
        case 0x55b320u: goto label_55b320;
        case 0x55b324u: goto label_55b324;
        case 0x55b328u: goto label_55b328;
        case 0x55b32cu: goto label_55b32c;
        case 0x55b330u: goto label_55b330;
        case 0x55b334u: goto label_55b334;
        case 0x55b338u: goto label_55b338;
        case 0x55b33cu: goto label_55b33c;
        default: break;
    }

    ctx->pc = 0x55aff0u;

label_55aff0:
    // 0x55aff0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x55aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_55aff4:
    // 0x55aff4: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x55aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_55aff8:
    // 0x55aff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55aff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55affc:
    // 0x55affc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55affcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55b000:
    // 0x55b000: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x55b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_55b004:
    // 0x55b004: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x55b004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55b008:
    // 0x55b008: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x55b008u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55b00c:
    // 0x55b00c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x55b00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_55b010:
    // 0x55b010: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x55b010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_55b014:
    // 0x55b014: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x55b014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
label_55b018:
    // 0x55b018: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x55b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_55b01c:
    // 0x55b01c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x55b01cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55b020:
    // 0x55b020: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x55b020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_55b024:
    // 0x55b024: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x55b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_55b028:
    // 0x55b028: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x55b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_55b02c:
    // 0x55b02c: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x55b02cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_55b030:
    // 0x55b030: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x55b030u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_55b034:
    // 0x55b034: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x55b034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_55b038:
    // 0x55b038: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55b038u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55b03c:
    // 0x55b03c: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x55b03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_55b040:
    // 0x55b040: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55b040u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55b044:
    // 0x55b044: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x55b044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_55b048:
    // 0x55b048: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55b048u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55b04c:
    // 0x55b04c: 0x460e0542  mul.s       $f21, $f0, $f14
    ctx->pc = 0x55b04cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_55b050:
    // 0x55b050: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x55b050u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b054:
    // 0x55b054: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55b054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55b058:
    // 0x55b058: 0x460e0502  mul.s       $f20, $f0, $f14
    ctx->pc = 0x55b058u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_55b05c:
    // 0x55b05c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x55b05cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_55b060:
    // 0x55b060: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x55b060u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_55b064:
    // 0x55b064: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x55b064u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
label_55b068:
    // 0x55b068: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x55b068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_55b06c:
    // 0x55b06c: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x55b06cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_55b070:
    // 0x55b070: 0x3010  mfhi        $a2
    ctx->pc = 0x55b070u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_55b074:
    // 0x55b074: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x55b074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_55b078:
    // 0x55b078: 0xa40019  multu       $a1, $a0
    ctx->pc = 0x55b078u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b07c:
    // 0x55b07c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x55b07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_55b080:
    // 0x55b080: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x55b080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_55b084:
    // 0x55b084: 0x2010  mfhi        $a0
    ctx->pc = 0x55b084u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_55b088:
    // 0x55b088: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x55b088u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_55b08c:
    // 0x55b08c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x55b08cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55b090:
    // 0x55b090: 0x1810  mfhi        $v1
    ctx->pc = 0x55b090u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55b094:
    // 0x55b094: 0x440019  multu       $v0, $a0
    ctx->pc = 0x55b094u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b098:
    // 0x55b098: 0x1010  mfhi        $v0
    ctx->pc = 0x55b098u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b09c:
    // 0x55b09c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x55b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_55b0a0:
    // 0x55b0a0: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x55b0a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_55b0a4:
    // 0x55b0a4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_55b0a8:
    if (ctx->pc == 0x55B0A8u) {
        ctx->pc = 0x55B0A8u;
            // 0x55b0a8: 0x307500ff  andi        $s5, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55B0ACu;
        goto label_55b0ac;
    }
    ctx->pc = 0x55B0A4u;
    {
        const bool branch_taken_0x55b0a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x55B0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B0A4u;
            // 0x55b0a8: 0x307500ff  andi        $s5, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55b0a4) {
            ctx->pc = 0x55B0B4u;
            goto label_55b0b4;
        }
    }
    ctx->pc = 0x55B0ACu;
label_55b0ac:
    // 0x55b0ac: 0x641203e7  daddiu      $s2, $zero, 0x3E7
    ctx->pc = 0x55b0acu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_55b0b0:
    // 0x55b0b0: 0x6415003b  daddiu      $s5, $zero, 0x3B
    ctx->pc = 0x55b0b0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_55b0b4:
    // 0x55b0b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55b0b8:
    // 0x55b0b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55b0bc:
    // 0x55b0bc: 0x8c7389e0  lw          $s3, -0x7620($v1)
    ctx->pc = 0x55b0bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_55b0c0:
    // 0x55b0c0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x55b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_55b0c4:
    // 0x55b0c4: 0xc0506ac  jal         func_141AB0
label_55b0c8:
    if (ctx->pc == 0x55B0C8u) {
        ctx->pc = 0x55B0C8u;
            // 0x55b0c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55B0CCu;
        goto label_55b0cc;
    }
    ctx->pc = 0x55B0C4u;
    SET_GPR_U32(ctx, 31, 0x55B0CCu);
    ctx->pc = 0x55B0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B0C4u;
            // 0x55b0c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B0CCu; }
        if (ctx->pc != 0x55B0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B0CCu; }
        if (ctx->pc != 0x55B0CCu) { return; }
    }
    ctx->pc = 0x55B0CCu;
label_55b0cc:
    // 0x55b0cc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x55b0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55b0d0:
    // 0x55b0d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55b0d4:
    // 0x55b0d4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55b0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55b0d8:
    // 0x55b0d8: 0x320f809  jalr        $t9
label_55b0dc:
    if (ctx->pc == 0x55B0DCu) {
        ctx->pc = 0x55B0DCu;
            // 0x55b0dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55B0E0u;
        goto label_55b0e0;
    }
    ctx->pc = 0x55B0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55B0E0u);
        ctx->pc = 0x55B0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B0D8u;
            // 0x55b0dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55B0E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55B0E0u; }
            if (ctx->pc != 0x55B0E0u) { return; }
        }
        }
    }
    ctx->pc = 0x55B0E0u;
label_55b0e0:
    // 0x55b0e0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55b0e4:
    // 0x55b0e4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55b0e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55b0e8:
    // 0x55b0e8: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x55b0e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_55b0ec:
    // 0x55b0ec: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55b0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55b0f0:
    // 0x55b0f0: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x55b0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b0f4:
    // 0x55b0f4: 0x152fc2  srl         $a1, $s5, 31
    ctx->pc = 0x55b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_55b0f8:
    // 0x55b0f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b0f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b0fc:
    // 0x55b0fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b100:
    // 0x55b100: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b104:
    // 0x55b104: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55b104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b108:
    // 0x55b108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b10c:
    // 0x55b10c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55b10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55b110:
    // 0x55b110: 0x1810  mfhi        $v1
    ctx->pc = 0x55b110u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55b114:
    // 0x55b114: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x55b114u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_55b118:
    // 0x55b118: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x55b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_55b11c:
    // 0x55b11c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b120:
    // 0x55b120: 0x2463002f  addiu       $v1, $v1, 0x2F
    ctx->pc = 0x55b120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 47));
label_55b124:
    // 0x55b124: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b128:
    // 0x55b128: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55b128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55b12c:
    // 0x55b12c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x55b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_55b130:
    // 0x55b130: 0x4614bd00  add.s       $f20, $f23, $f20
    ctx->pc = 0x55b130u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_55b134:
    // 0x55b134: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55b134u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b138:
    // 0x55b138: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55b138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55b13c:
    // 0x55b13c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55b13cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55b140:
    // 0x55b140: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55b140u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55b144:
    // 0x55b144: 0xc0bc284  jal         func_2F0A10
label_55b148:
    if (ctx->pc == 0x55B148u) {
        ctx->pc = 0x55B148u;
            // 0x55b148: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x55B14Cu;
        goto label_55b14c;
    }
    ctx->pc = 0x55B144u;
    SET_GPR_U32(ctx, 31, 0x55B14Cu);
    ctx->pc = 0x55B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B144u;
            // 0x55b148: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B14Cu; }
        if (ctx->pc != 0x55B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B14Cu; }
        if (ctx->pc != 0x55B14Cu) { return; }
    }
    ctx->pc = 0x55B14Cu;
label_55b14c:
    // 0x55b14c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x55b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_55b150:
    // 0x55b150: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55b150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55b154:
    // 0x55b154: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x55b154u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_55b158:
    // 0x55b158: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b15c:
    // 0x55b15c: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55b15cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b160:
    // 0x55b160: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55b160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b164:
    // 0x55b164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b168:
    // 0x55b168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b16c:
    // 0x55b16c: 0x0  nop
    ctx->pc = 0x55b16cu;
    // NOP
label_55b170:
    // 0x55b170: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b174:
    // 0x55b174: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55b174u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b178:
    // 0x55b178: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55b178u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55b17c:
    // 0x55b17c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55b17cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55b180:
    // 0x55b180: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55b180u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55b184:
    // 0x55b184: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55b184u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55b188:
    // 0x55b188: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55b188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55b18c:
    // 0x55b18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b190:
    // 0x55b190: 0x0  nop
    ctx->pc = 0x55b190u;
    // NOP
label_55b194:
    // 0x55b194: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b198:
    // 0x55b198: 0x1010  mfhi        $v0
    ctx->pc = 0x55b198u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b19c:
    // 0x55b19c: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x55b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_55b1a0:
    // 0x55b1a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55b1a4:
    // 0x55b1a4: 0xc0bc284  jal         func_2F0A10
label_55b1a8:
    if (ctx->pc == 0x55B1A8u) {
        ctx->pc = 0x55B1A8u;
            // 0x55b1a8: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x55B1ACu;
        goto label_55b1ac;
    }
    ctx->pc = 0x55B1A4u;
    SET_GPR_U32(ctx, 31, 0x55B1ACu);
    ctx->pc = 0x55B1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B1A4u;
            // 0x55b1a8: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B1ACu; }
        if (ctx->pc != 0x55B1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B1ACu; }
        if (ctx->pc != 0x55B1ACu) { return; }
    }
    ctx->pc = 0x55B1ACu;
label_55b1ac:
    // 0x55b1ac: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55b1acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55b1b0:
    // 0x55b1b0: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55b1b0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b1b4:
    // 0x55b1b4: 0x26350180  addiu       $s5, $s1, 0x180
    ctx->pc = 0x55b1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_55b1b8:
    // 0x55b1b8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55b1b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55b1bc:
    // 0x55b1bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b1c0:
    // 0x55b1c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x55b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b1c4:
    // 0x55b1c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55b1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b1c8:
    // 0x55b1c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b1cc:
    // 0x55b1cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b1d0:
    // 0x55b1d0: 0x0  nop
    ctx->pc = 0x55b1d0u;
    // NOP
label_55b1d4:
    // 0x55b1d4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b1d8:
    // 0x55b1d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b1dc:
    // 0x55b1dc: 0x0  nop
    ctx->pc = 0x55b1dcu;
    // NOP
label_55b1e0:
    // 0x55b1e0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b1e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b1e4:
    // 0x55b1e4: 0xc6210188  lwc1        $f1, 0x188($s1)
    ctx->pc = 0x55b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b1e8:
    // 0x55b1e8: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x55b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b1ec:
    // 0x55b1ec: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55b1ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55b1f0:
    // 0x55b1f0: 0x4601c380  add.s       $f14, $f24, $f1
    ctx->pc = 0x55b1f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_55b1f4:
    // 0x55b1f4: 0x4600bbc0  add.s       $f15, $f23, $f0
    ctx->pc = 0x55b1f4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_55b1f8:
    // 0x55b1f8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55b1f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55b1fc:
    // 0x55b1fc: 0xc0bc284  jal         func_2F0A10
label_55b200:
    if (ctx->pc == 0x55B200u) {
        ctx->pc = 0x55B200u;
            // 0x55b200: 0x4600b486  mov.s       $f18, $f22 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x55B204u;
        goto label_55b204;
    }
    ctx->pc = 0x55B1FCu;
    SET_GPR_U32(ctx, 31, 0x55B204u);
    ctx->pc = 0x55B200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B1FCu;
            // 0x55b200: 0x4600b486  mov.s       $f18, $f22 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B204u; }
        if (ctx->pc != 0x55B204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B204u; }
        if (ctx->pc != 0x55B204u) { return; }
    }
    ctx->pc = 0x55B204u;
label_55b204:
    // 0x55b204: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x55b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b208:
    // 0x55b208: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x55b208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_55b20c:
    // 0x55b20c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x55b20cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55b210:
    // 0x55b210: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x55b210u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_55b214:
    // 0x55b214: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x55b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_55b218:
    // 0x55b218: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x55b218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55b21c:
    // 0x55b21c: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x55b21cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_55b220:
    // 0x55b220: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b224:
    // 0x55b224: 0x520019  multu       $v0, $s2
    ctx->pc = 0x55b224u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b228:
    // 0x55b228: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55b228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b22c:
    // 0x55b22c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b230:
    // 0x55b230: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x55b230u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b234:
    // 0x55b234: 0x0  nop
    ctx->pc = 0x55b234u;
    // NOP
label_55b238:
    // 0x55b238: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b23c:
    // 0x55b23c: 0x1010  mfhi        $v0
    ctx->pc = 0x55b23cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b240:
    // 0x55b240: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x55b240u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_55b244:
    // 0x55b244: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x55b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_55b248:
    // 0x55b248: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55b248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55b24c:
    // 0x55b24c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x55b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_55b250:
    // 0x55b250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b254:
    // 0x55b254: 0x0  nop
    ctx->pc = 0x55b254u;
    // NOP
label_55b258:
    // 0x55b258: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b25c:
    // 0x55b25c: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55b25cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b260:
    // 0x55b260: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55b260u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55b264:
    // 0x55b264: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55b264u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55b268:
    // 0x55b268: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55b268u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55b26c:
    // 0x55b26c: 0xc0bc284  jal         func_2F0A10
label_55b270:
    if (ctx->pc == 0x55B270u) {
        ctx->pc = 0x55B270u;
            // 0x55b270: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x55B274u;
        goto label_55b274;
    }
    ctx->pc = 0x55B26Cu;
    SET_GPR_U32(ctx, 31, 0x55B274u);
    ctx->pc = 0x55B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B26Cu;
            // 0x55b270: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B274u; }
        if (ctx->pc != 0x55B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B274u; }
        if (ctx->pc != 0x55B274u) { return; }
    }
    ctx->pc = 0x55B274u;
label_55b274:
    // 0x55b274: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x55b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_55b278:
    // 0x55b278: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x55b278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55b27c:
    // 0x55b27c: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x55b27cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_55b280:
    // 0x55b280: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x55b280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55b284:
    // 0x55b284: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55b284u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b288:
    // 0x55b288: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55b288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b28c:
    // 0x55b28c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b290:
    // 0x55b290: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b294:
    // 0x55b294: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x55b294u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b298:
    // 0x55b298: 0x0  nop
    ctx->pc = 0x55b298u;
    // NOP
label_55b29c:
    // 0x55b29c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b2a0:
    // 0x55b2a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b2a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b2a4:
    // 0x55b2a4: 0x0  nop
    ctx->pc = 0x55b2a4u;
    // NOP
label_55b2a8:
    // 0x55b2a8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b2a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b2ac:
    // 0x55b2ac: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x55b2acu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b2b0:
    // 0x55b2b0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55b2b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55b2b4:
    // 0x55b2b4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x55b2b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_55b2b8:
    // 0x55b2b8: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x55b2b8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_55b2bc:
    // 0x55b2bc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55b2bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55b2c0:
    // 0x55b2c0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x55b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_55b2c4:
    // 0x55b2c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55b2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55b2c8:
    // 0x55b2c8: 0x1810  mfhi        $v1
    ctx->pc = 0x55b2c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55b2cc:
    // 0x55b2cc: 0x430019  multu       $v0, $v1
    ctx->pc = 0x55b2ccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b2d0:
    // 0x55b2d0: 0x1010  mfhi        $v0
    ctx->pc = 0x55b2d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b2d4:
    // 0x55b2d4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x55b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_55b2d8:
    // 0x55b2d8: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x55b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_55b2dc:
    // 0x55b2dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55b2e0:
    // 0x55b2e0: 0xc0bc284  jal         func_2F0A10
label_55b2e4:
    if (ctx->pc == 0x55B2E4u) {
        ctx->pc = 0x55B2E4u;
            // 0x55b2e4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x55B2E8u;
        goto label_55b2e8;
    }
    ctx->pc = 0x55B2E0u;
    SET_GPR_U32(ctx, 31, 0x55B2E8u);
    ctx->pc = 0x55B2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B2E0u;
            // 0x55b2e4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B2E8u; }
        if (ctx->pc != 0x55B2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B2E8u; }
        if (ctx->pc != 0x55B2E8u) { return; }
    }
    ctx->pc = 0x55B2E8u;
label_55b2e8:
    // 0x55b2e8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x55b2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55b2ec:
    // 0x55b2ec: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x55b2ecu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_55b2f0:
    // 0x55b2f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55b2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55b2f4:
    // 0x55b2f4: 0x320f809  jalr        $t9
label_55b2f8:
    if (ctx->pc == 0x55B2F8u) {
        ctx->pc = 0x55B2F8u;
            // 0x55b2f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55B2FCu;
        goto label_55b2fc;
    }
    ctx->pc = 0x55B2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55B2FCu);
        ctx->pc = 0x55B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B2F4u;
            // 0x55b2f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55B2FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55B2FCu; }
            if (ctx->pc != 0x55B2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x55B2FCu;
label_55b2fc:
    // 0x55b2fc: 0x4600c006  mov.s       $f0, $f24
    ctx->pc = 0x55b2fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[24]);
label_55b300:
    // 0x55b300: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55b304:
    // 0x55b304: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x55b304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55b308:
    // 0x55b308: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x55b308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_55b30c:
    // 0x55b30c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x55b30cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55b310:
    // 0x55b310: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55b314:
    // 0x55b314: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55b314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55b318:
    // 0x55b318: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55b31c:
    // 0x55b31c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x55b31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55b320:
    // 0x55b320: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55b324:
    // 0x55b324: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x55b324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55b328:
    // 0x55b328: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55b32c:
    // 0x55b32c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x55b32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55b330:
    // 0x55b330: 0x3e00008  jr          $ra
label_55b334:
    if (ctx->pc == 0x55B334u) {
        ctx->pc = 0x55B334u;
            // 0x55b334: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55B338u;
        goto label_55b338;
    }
    ctx->pc = 0x55B330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55B334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B330u;
            // 0x55b334: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55B338u;
label_55b338:
    // 0x55b338: 0x0  nop
    ctx->pc = 0x55b338u;
    // NOP
label_55b33c:
    // 0x55b33c: 0x0  nop
    ctx->pc = 0x55b33cu;
    // NOP
}
