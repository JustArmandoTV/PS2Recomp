#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027AF90
// Address: 0x27af90 - 0x27b3c0
void sub_0027AF90_0x27af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AF90_0x27af90");
#endif

    switch (ctx->pc) {
        case 0x27af90u: goto label_27af90;
        case 0x27af94u: goto label_27af94;
        case 0x27af98u: goto label_27af98;
        case 0x27af9cu: goto label_27af9c;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afa4u: goto label_27afa4;
        case 0x27afa8u: goto label_27afa8;
        case 0x27afacu: goto label_27afac;
        case 0x27afb0u: goto label_27afb0;
        case 0x27afb4u: goto label_27afb4;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc0u: goto label_27afc0;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afccu: goto label_27afcc;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afd4u: goto label_27afd4;
        case 0x27afd8u: goto label_27afd8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe0u: goto label_27afe0;
        case 0x27afe4u: goto label_27afe4;
        case 0x27afe8u: goto label_27afe8;
        case 0x27afecu: goto label_27afec;
        case 0x27aff0u: goto label_27aff0;
        case 0x27aff4u: goto label_27aff4;
        case 0x27aff8u: goto label_27aff8;
        case 0x27affcu: goto label_27affc;
        case 0x27b000u: goto label_27b000;
        case 0x27b004u: goto label_27b004;
        case 0x27b008u: goto label_27b008;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b010u: goto label_27b010;
        case 0x27b014u: goto label_27b014;
        case 0x27b018u: goto label_27b018;
        case 0x27b01cu: goto label_27b01c;
        case 0x27b020u: goto label_27b020;
        case 0x27b024u: goto label_27b024;
        case 0x27b028u: goto label_27b028;
        case 0x27b02cu: goto label_27b02c;
        case 0x27b030u: goto label_27b030;
        case 0x27b034u: goto label_27b034;
        case 0x27b038u: goto label_27b038;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b040u: goto label_27b040;
        case 0x27b044u: goto label_27b044;
        case 0x27b048u: goto label_27b048;
        case 0x27b04cu: goto label_27b04c;
        case 0x27b050u: goto label_27b050;
        case 0x27b054u: goto label_27b054;
        case 0x27b058u: goto label_27b058;
        case 0x27b05cu: goto label_27b05c;
        case 0x27b060u: goto label_27b060;
        case 0x27b064u: goto label_27b064;
        case 0x27b068u: goto label_27b068;
        case 0x27b06cu: goto label_27b06c;
        case 0x27b070u: goto label_27b070;
        case 0x27b074u: goto label_27b074;
        case 0x27b078u: goto label_27b078;
        case 0x27b07cu: goto label_27b07c;
        case 0x27b080u: goto label_27b080;
        case 0x27b084u: goto label_27b084;
        case 0x27b088u: goto label_27b088;
        case 0x27b08cu: goto label_27b08c;
        case 0x27b090u: goto label_27b090;
        case 0x27b094u: goto label_27b094;
        case 0x27b098u: goto label_27b098;
        case 0x27b09cu: goto label_27b09c;
        case 0x27b0a0u: goto label_27b0a0;
        case 0x27b0a4u: goto label_27b0a4;
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0acu: goto label_27b0ac;
        case 0x27b0b0u: goto label_27b0b0;
        case 0x27b0b4u: goto label_27b0b4;
        case 0x27b0b8u: goto label_27b0b8;
        case 0x27b0bcu: goto label_27b0bc;
        case 0x27b0c0u: goto label_27b0c0;
        case 0x27b0c4u: goto label_27b0c4;
        case 0x27b0c8u: goto label_27b0c8;
        case 0x27b0ccu: goto label_27b0cc;
        case 0x27b0d0u: goto label_27b0d0;
        case 0x27b0d4u: goto label_27b0d4;
        case 0x27b0d8u: goto label_27b0d8;
        case 0x27b0dcu: goto label_27b0dc;
        case 0x27b0e0u: goto label_27b0e0;
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0e8u: goto label_27b0e8;
        case 0x27b0ecu: goto label_27b0ec;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b0f4u: goto label_27b0f4;
        case 0x27b0f8u: goto label_27b0f8;
        case 0x27b0fcu: goto label_27b0fc;
        case 0x27b100u: goto label_27b100;
        case 0x27b104u: goto label_27b104;
        case 0x27b108u: goto label_27b108;
        case 0x27b10cu: goto label_27b10c;
        case 0x27b110u: goto label_27b110;
        case 0x27b114u: goto label_27b114;
        case 0x27b118u: goto label_27b118;
        case 0x27b11cu: goto label_27b11c;
        case 0x27b120u: goto label_27b120;
        case 0x27b124u: goto label_27b124;
        case 0x27b128u: goto label_27b128;
        case 0x27b12cu: goto label_27b12c;
        case 0x27b130u: goto label_27b130;
        case 0x27b134u: goto label_27b134;
        case 0x27b138u: goto label_27b138;
        case 0x27b13cu: goto label_27b13c;
        case 0x27b140u: goto label_27b140;
        case 0x27b144u: goto label_27b144;
        case 0x27b148u: goto label_27b148;
        case 0x27b14cu: goto label_27b14c;
        case 0x27b150u: goto label_27b150;
        case 0x27b154u: goto label_27b154;
        case 0x27b158u: goto label_27b158;
        case 0x27b15cu: goto label_27b15c;
        case 0x27b160u: goto label_27b160;
        case 0x27b164u: goto label_27b164;
        case 0x27b168u: goto label_27b168;
        case 0x27b16cu: goto label_27b16c;
        case 0x27b170u: goto label_27b170;
        case 0x27b174u: goto label_27b174;
        case 0x27b178u: goto label_27b178;
        case 0x27b17cu: goto label_27b17c;
        case 0x27b180u: goto label_27b180;
        case 0x27b184u: goto label_27b184;
        case 0x27b188u: goto label_27b188;
        case 0x27b18cu: goto label_27b18c;
        case 0x27b190u: goto label_27b190;
        case 0x27b194u: goto label_27b194;
        case 0x27b198u: goto label_27b198;
        case 0x27b19cu: goto label_27b19c;
        case 0x27b1a0u: goto label_27b1a0;
        case 0x27b1a4u: goto label_27b1a4;
        case 0x27b1a8u: goto label_27b1a8;
        case 0x27b1acu: goto label_27b1ac;
        case 0x27b1b0u: goto label_27b1b0;
        case 0x27b1b4u: goto label_27b1b4;
        case 0x27b1b8u: goto label_27b1b8;
        case 0x27b1bcu: goto label_27b1bc;
        case 0x27b1c0u: goto label_27b1c0;
        case 0x27b1c4u: goto label_27b1c4;
        case 0x27b1c8u: goto label_27b1c8;
        case 0x27b1ccu: goto label_27b1cc;
        case 0x27b1d0u: goto label_27b1d0;
        case 0x27b1d4u: goto label_27b1d4;
        case 0x27b1d8u: goto label_27b1d8;
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e0u: goto label_27b1e0;
        case 0x27b1e4u: goto label_27b1e4;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b1ecu: goto label_27b1ec;
        case 0x27b1f0u: goto label_27b1f0;
        case 0x27b1f4u: goto label_27b1f4;
        case 0x27b1f8u: goto label_27b1f8;
        case 0x27b1fcu: goto label_27b1fc;
        case 0x27b200u: goto label_27b200;
        case 0x27b204u: goto label_27b204;
        case 0x27b208u: goto label_27b208;
        case 0x27b20cu: goto label_27b20c;
        case 0x27b210u: goto label_27b210;
        case 0x27b214u: goto label_27b214;
        case 0x27b218u: goto label_27b218;
        case 0x27b21cu: goto label_27b21c;
        case 0x27b220u: goto label_27b220;
        case 0x27b224u: goto label_27b224;
        case 0x27b228u: goto label_27b228;
        case 0x27b22cu: goto label_27b22c;
        case 0x27b230u: goto label_27b230;
        case 0x27b234u: goto label_27b234;
        case 0x27b238u: goto label_27b238;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b240u: goto label_27b240;
        case 0x27b244u: goto label_27b244;
        case 0x27b248u: goto label_27b248;
        case 0x27b24cu: goto label_27b24c;
        case 0x27b250u: goto label_27b250;
        case 0x27b254u: goto label_27b254;
        case 0x27b258u: goto label_27b258;
        case 0x27b25cu: goto label_27b25c;
        case 0x27b260u: goto label_27b260;
        case 0x27b264u: goto label_27b264;
        case 0x27b268u: goto label_27b268;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b270u: goto label_27b270;
        case 0x27b274u: goto label_27b274;
        case 0x27b278u: goto label_27b278;
        case 0x27b27cu: goto label_27b27c;
        case 0x27b280u: goto label_27b280;
        case 0x27b284u: goto label_27b284;
        case 0x27b288u: goto label_27b288;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b290u: goto label_27b290;
        case 0x27b294u: goto label_27b294;
        case 0x27b298u: goto label_27b298;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a0u: goto label_27b2a0;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2acu: goto label_27b2ac;
        case 0x27b2b0u: goto label_27b2b0;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2b8u: goto label_27b2b8;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c0u: goto label_27b2c0;
        case 0x27b2c4u: goto label_27b2c4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2ccu: goto label_27b2cc;
        case 0x27b2d0u: goto label_27b2d0;
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2d8u: goto label_27b2d8;
        case 0x27b2dcu: goto label_27b2dc;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b2e4u: goto label_27b2e4;
        case 0x27b2e8u: goto label_27b2e8;
        case 0x27b2ecu: goto label_27b2ec;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2f4u: goto label_27b2f4;
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b300u: goto label_27b300;
        case 0x27b304u: goto label_27b304;
        case 0x27b308u: goto label_27b308;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b310u: goto label_27b310;
        case 0x27b314u: goto label_27b314;
        case 0x27b318u: goto label_27b318;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b320u: goto label_27b320;
        case 0x27b324u: goto label_27b324;
        case 0x27b328u: goto label_27b328;
        case 0x27b32cu: goto label_27b32c;
        case 0x27b330u: goto label_27b330;
        case 0x27b334u: goto label_27b334;
        case 0x27b338u: goto label_27b338;
        case 0x27b33cu: goto label_27b33c;
        case 0x27b340u: goto label_27b340;
        case 0x27b344u: goto label_27b344;
        case 0x27b348u: goto label_27b348;
        case 0x27b34cu: goto label_27b34c;
        case 0x27b350u: goto label_27b350;
        case 0x27b354u: goto label_27b354;
        case 0x27b358u: goto label_27b358;
        case 0x27b35cu: goto label_27b35c;
        case 0x27b360u: goto label_27b360;
        case 0x27b364u: goto label_27b364;
        case 0x27b368u: goto label_27b368;
        case 0x27b36cu: goto label_27b36c;
        case 0x27b370u: goto label_27b370;
        case 0x27b374u: goto label_27b374;
        case 0x27b378u: goto label_27b378;
        case 0x27b37cu: goto label_27b37c;
        case 0x27b380u: goto label_27b380;
        case 0x27b384u: goto label_27b384;
        case 0x27b388u: goto label_27b388;
        case 0x27b38cu: goto label_27b38c;
        case 0x27b390u: goto label_27b390;
        case 0x27b394u: goto label_27b394;
        case 0x27b398u: goto label_27b398;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3a4u: goto label_27b3a4;
        case 0x27b3a8u: goto label_27b3a8;
        case 0x27b3acu: goto label_27b3ac;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3bcu: goto label_27b3bc;
        default: break;
    }

    ctx->pc = 0x27af90u;

label_27af90:
    // 0x27af90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_27af94:
    // 0x27af94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_27af98:
    // 0x27af98: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_27af9c:
    // 0x27af9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27afa0:
    // 0x27afa0: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x27afa0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_27afa4:
    // 0x27afa4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27afa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_27afa8:
    // 0x27afa8: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x27afa8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27afac:
    // 0x27afac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27afb0:
    // 0x27afb0: 0x27b600cc  addiu       $s6, $sp, 0xCC
    ctx->pc = 0x27afb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_27afb4:
    // 0x27afb4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27afb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27afb8:
    // 0x27afb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27afb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27afbc:
    // 0x27afbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27afc0:
    // 0x27afc0: 0x27b400c4  addiu       $s4, $sp, 0xC4
    ctx->pc = 0x27afc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_27afc4:
    // 0x27afc4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27afc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27afc8:
    // 0x27afc8: 0x27b300e0  addiu       $s3, $sp, 0xE0
    ctx->pc = 0x27afc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_27afcc:
    // 0x27afcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27afd0:
    // 0x27afd0: 0x27b200b4  addiu       $s2, $sp, 0xB4
    ctx->pc = 0x27afd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_27afd4:
    // 0x27afd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27afd8:
    // 0x27afd8: 0x27b100b8  addiu       $s1, $sp, 0xB8
    ctx->pc = 0x27afd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_27afdc:
    // 0x27afdc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27afdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27afe0:
    // 0x27afe0: 0x27b000bc  addiu       $s0, $sp, 0xBC
    ctx->pc = 0x27afe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_27afe4:
    // 0x27afe4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27afe4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_27afe8:
    // 0x27afe8: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x27afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_27afec:
    // 0x27afec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27aff0:
    // 0x27aff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27aff4:
    // 0x27aff4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27aff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27aff8:
    // 0x27aff8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_27affc:
    if (ctx->pc == 0x27AFFCu) {
        ctx->pc = 0x27AFFCu;
            // 0x27affc: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x27B000u;
        goto label_27b000;
    }
    ctx->pc = 0x27AFF8u;
    {
        const bool branch_taken_0x27aff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFF8u;
            // 0x27affc: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aff8) {
            ctx->pc = 0x27B030u;
            goto label_27b030;
        }
    }
    ctx->pc = 0x27B000u;
label_27b000:
    // 0x27b000: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x27b000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_27b004:
    // 0x27b004: 0x0  nop
    ctx->pc = 0x27b004u;
    // NOP
label_27b008:
    // 0x27b008: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b00c:
    // 0x27b00c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27b00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b010:
    // 0x27b010: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27b014:
    if (ctx->pc == 0x27B014u) {
        ctx->pc = 0x27B018u;
        goto label_27b018;
    }
    ctx->pc = 0x27B010u;
    {
        const bool branch_taken_0x27b010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b010) {
            ctx->pc = 0x27B020u;
            goto label_27b020;
        }
    }
    ctx->pc = 0x27B018u;
label_27b018:
    // 0x27b018: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27b018u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27b01c:
    // 0x27b01c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x27b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27b020:
    // 0x27b020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27b024:
    // 0x27b024: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x27b024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27b028:
    // 0x27b028: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_27b02c:
    if (ctx->pc == 0x27B02Cu) {
        ctx->pc = 0x27B02Cu;
            // 0x27b02c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x27B030u;
        goto label_27b030;
    }
    ctx->pc = 0x27B028u;
    {
        const bool branch_taken_0x27b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B028u;
            // 0x27b02c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b028) {
            ctx->pc = 0x27B008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27b008;
        }
    }
    ctx->pc = 0x27B030u;
label_27b030:
    // 0x27b030: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_27b034:
    if (ctx->pc == 0x27B034u) {
        ctx->pc = 0x27B034u;
            // 0x27b034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B038u;
        goto label_27b038;
    }
    ctx->pc = 0x27B030u;
    {
        const bool branch_taken_0x27b030 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x27B034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B030u;
            // 0x27b034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b030) {
            ctx->pc = 0x27B040u;
            goto label_27b040;
        }
    }
    ctx->pc = 0x27B038u;
label_27b038:
    // 0x27b038: 0x10000091  b           . + 4 + (0x91 << 2)
label_27b03c:
    if (ctx->pc == 0x27B03Cu) {
        ctx->pc = 0x27B040u;
        goto label_27b040;
    }
    ctx->pc = 0x27B038u;
    {
        const bool branch_taken_0x27b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b038) {
            ctx->pc = 0x27B280u;
            goto label_27b280;
        }
    }
    ctx->pc = 0x27B040u;
label_27b040:
    // 0x27b040: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x27b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_27b044:
    // 0x27b044: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x27b044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_27b048:
    // 0x27b048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27b048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b04c:
    // 0x27b04c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x27b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27b050:
    // 0x27b050: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x27b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b054:
    // 0x27b054: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x27b054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_27b058:
    // 0x27b058: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x27b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b05c:
    // 0x27b05c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x27b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b060:
    // 0x27b060: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x27b060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_27b064:
    // 0x27b064: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x27b064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_27b068:
    // 0x27b068: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x27b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b06c:
    // 0x27b06c: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x27b06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_27b070:
    // 0x27b070: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x27b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_27b074:
    // 0x27b074: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x27b074u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_27b078:
    // 0x27b078: 0x90a30014  lbu         $v1, 0x14($a1)
    ctx->pc = 0x27b078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
label_27b07c:
    // 0x27b07c: 0xa3c30000  sb          $v1, 0x0($fp)
    ctx->pc = 0x27b07cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 3));
label_27b080:
    // 0x27b080: 0x90a40015  lbu         $a0, 0x15($a1)
    ctx->pc = 0x27b080u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
label_27b084:
    // 0x27b084: 0x27a300d5  addiu       $v1, $sp, 0xD5
    ctx->pc = 0x27b084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 213));
label_27b088:
    // 0x27b088: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x27b088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_27b08c:
    // 0x27b08c: 0x90a40016  lbu         $a0, 0x16($a1)
    ctx->pc = 0x27b08cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22)));
label_27b090:
    // 0x27b090: 0x27a300d6  addiu       $v1, $sp, 0xD6
    ctx->pc = 0x27b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 214));
label_27b094:
    // 0x27b094: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x27b094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_27b098:
    // 0x27b098: 0x90a40017  lbu         $a0, 0x17($a1)
    ctx->pc = 0x27b098u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 23)));
label_27b09c:
    // 0x27b09c: 0x27a300d7  addiu       $v1, $sp, 0xD7
    ctx->pc = 0x27b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 215));
label_27b0a0:
    // 0x27b0a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x27b0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_27b0a4:
    // 0x27b0a4: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x27b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_27b0a8:
    // 0x27b0a8: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x27b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_27b0ac:
    // 0x27b0ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_27b0b0:
    // 0x27b0b0: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x27b0b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_27b0b4:
    // 0x27b0b4: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x27b0b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_27b0b8:
    // 0x27b0b8: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x27b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
label_27b0bc:
    // 0x27b0bc: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x27b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_27b0c0:
    // 0x27b0c0: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x27b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_27b0c4:
    // 0x27b0c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27b0c8:
    // 0x27b0c8: 0xaea30034  sw          $v1, 0x34($s5)
    ctx->pc = 0x27b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 3));
label_27b0cc:
    // 0x27b0cc: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x27b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_27b0d0:
    // 0x27b0d0: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x27b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_27b0d4:
    // 0x27b0d4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x27b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27b0d8:
    // 0x27b0d8: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x27b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_27b0dc:
    // 0x27b0dc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x27b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27b0e0:
    // 0x27b0e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b0e4:
    // 0x27b0e4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x27b0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_27b0e8:
    // 0x27b0e8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x27b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b0ec:
    // 0x27b0ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x27b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b0f0:
    // 0x27b0f0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x27b0f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_27b0f4:
    // 0x27b0f4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x27b0f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_27b0f8:
    // 0x27b0f8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x27b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b0fc:
    // 0x27b0fc: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x27b0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_27b100:
    // 0x27b100: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x27b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b104:
    // 0x27b104: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x27b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b108:
    // 0x27b108: 0xe4a20010  swc1        $f2, 0x10($a1)
    ctx->pc = 0x27b108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_27b10c:
    // 0x27b10c: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x27b10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_27b110:
    // 0x27b110: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x27b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_27b114:
    // 0x27b114: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x27b114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_27b118:
    // 0x27b118: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x27b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b11c:
    // 0x27b11c: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x27b11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_27b120:
    // 0x27b120: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x27b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b124:
    // 0x27b124: 0xe4a10024  swc1        $f1, 0x24($a1)
    ctx->pc = 0x27b124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_27b128:
    // 0x27b128: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x27b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b12c:
    // 0x27b12c: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x27b12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_27b130:
    // 0x27b130: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x27b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b134:
    // 0x27b134: 0xe4a1002c  swc1        $f1, 0x2C($a1)
    ctx->pc = 0x27b134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_27b138:
    // 0x27b138: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x27b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b13c:
    // 0x27b13c: 0xe4a10030  swc1        $f1, 0x30($a1)
    ctx->pc = 0x27b13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_27b140:
    // 0x27b140: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x27b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b144:
    // 0x27b144: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x27b144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_27b148:
    // 0x27b148: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x27b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b14c:
    // 0x27b14c: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x27b14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_27b150:
    // 0x27b150: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x27b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b154:
    // 0x27b154: 0xe4a1003c  swc1        $f1, 0x3C($a1)
    ctx->pc = 0x27b154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_27b158:
    // 0x27b158: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x27b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b15c:
    // 0x27b15c: 0xe6a10010  swc1        $f1, 0x10($s5)
    ctx->pc = 0x27b15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_27b160:
    // 0x27b160: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x27b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b164:
    // 0x27b164: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x27b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b168:
    // 0x27b168: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x27b168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_27b16c:
    // 0x27b16c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27b16cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27b170:
    // 0x27b170: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x27b170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_27b174:
    // 0x27b174: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27b174u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b178:
    // 0x27b178: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27b17c:
    if (ctx->pc == 0x27B17Cu) {
        ctx->pc = 0x27B17Cu;
            // 0x27b17c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x27B180u;
        goto label_27b180;
    }
    ctx->pc = 0x27B178u;
    {
        const bool branch_taken_0x27b178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B178u;
            // 0x27b17c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b178) {
            ctx->pc = 0x27B188u;
            goto label_27b188;
        }
    }
    ctx->pc = 0x27B180u;
label_27b180:
    // 0x27b180: 0x10000006  b           . + 4 + (0x6 << 2)
label_27b184:
    if (ctx->pc == 0x27B184u) {
        ctx->pc = 0x27B184u;
            // 0x27b184: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x27B188u;
        goto label_27b188;
    }
    ctx->pc = 0x27B180u;
    {
        const bool branch_taken_0x27b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B180u;
            // 0x27b184: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b180) {
            ctx->pc = 0x27B19Cu;
            goto label_27b19c;
        }
    }
    ctx->pc = 0x27B188u;
label_27b188:
    // 0x27b188: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27b188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27b18c:
    // 0x27b18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b190:
    // 0x27b190: 0x0  nop
    ctx->pc = 0x27b190u;
    // NOP
label_27b194:
    // 0x27b194: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27b194u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_27b198:
    // 0x27b198: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27b198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_27b19c:
    // 0x27b19c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x27b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27b1a0:
    // 0x27b1a0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x27b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_27b1a4:
    // 0x27b1a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1a8:
    // 0x27b1a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b1ac:
    // 0x27b1ac: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x27b1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_27b1b0:
    // 0x27b1b0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1b4:
    // 0x27b1b4: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x27b1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_27b1b8:
    // 0x27b1b8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x27b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1bc:
    // 0x27b1bc: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x27b1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_27b1c0:
    // 0x27b1c0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1c4:
    // 0x27b1c4: 0xe46001ac  swc1        $f0, 0x1AC($v1)
    ctx->pc = 0x27b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 428), bits); }
label_27b1c8:
    // 0x27b1c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1cc:
    // 0x27b1cc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x27b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_27b1d0:
    // 0x27b1d0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x27b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_27b1d4:
    // 0x27b1d4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x27b1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_27b1d8:
    // 0x27b1d8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27b1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1dc:
    // 0x27b1dc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x27b1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_27b1e0:
    // 0x27b1e0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x27b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1e4:
    // 0x27b1e4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x27b1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_27b1e8:
    // 0x27b1e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b1ec:
    // 0x27b1ec: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x27b1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_27b1f0:
    // 0x27b1f0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x27b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_27b1f4:
    // 0x27b1f4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x27b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_27b1f8:
    // 0x27b1f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27b1fc:
    // 0x27b1fc: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x27b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_27b200:
    // 0x27b200: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x27b200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27b204:
    // 0x27b204: 0xc6ac0018  lwc1        $f12, 0x18($s5)
    ctx->pc = 0x27b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27b208:
    // 0x27b208: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x27b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_27b20c:
    // 0x27b20c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x27b20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_27b210:
    // 0x27b210: 0x320f809  jalr        $t9
label_27b214:
    if (ctx->pc == 0x27B214u) {
        ctx->pc = 0x27B214u;
            // 0x27b214: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27B218u;
        goto label_27b218;
    }
    ctx->pc = 0x27B210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B218u);
        ctx->pc = 0x27B214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B210u;
            // 0x27b214: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27B218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27B218u; }
            if (ctx->pc != 0x27B218u) { return; }
        }
        }
    }
    ctx->pc = 0x27B218u;
label_27b218:
    // 0x27b218: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x27b218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_27b21c:
    // 0x27b21c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x27b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27b220:
    // 0x27b220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27b224:
    // 0x27b224: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x27b224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_27b228:
    // 0x27b228: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x27b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27b22c:
    // 0x27b22c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27b230:
    if (ctx->pc == 0x27B230u) {
        ctx->pc = 0x27B234u;
        goto label_27b234;
    }
    ctx->pc = 0x27B22Cu;
    {
        const bool branch_taken_0x27b22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b22c) {
            ctx->pc = 0x27B258u;
            goto label_27b258;
        }
    }
    ctx->pc = 0x27B234u;
label_27b234:
    // 0x27b234: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x27b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_27b238:
    // 0x27b238: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27b23c:
    if (ctx->pc == 0x27B23Cu) {
        ctx->pc = 0x27B240u;
        goto label_27b240;
    }
    ctx->pc = 0x27B238u;
    {
        const bool branch_taken_0x27b238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b238) {
            ctx->pc = 0x27B258u;
            goto label_27b258;
        }
    }
    ctx->pc = 0x27B240u;
label_27b240:
    // 0x27b240: 0x8082008c  lb          $v0, 0x8C($a0)
    ctx->pc = 0x27b240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_27b244:
    // 0x27b244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27b248:
    if (ctx->pc == 0x27B248u) {
        ctx->pc = 0x27B24Cu;
        goto label_27b24c;
    }
    ctx->pc = 0x27B244u;
    {
        const bool branch_taken_0x27b244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b244) {
            ctx->pc = 0x27B258u;
            goto label_27b258;
        }
    }
    ctx->pc = 0x27B24Cu;
label_27b24c:
    // 0x27b24c: 0xc08d1c4  jal         func_234710
label_27b250:
    if (ctx->pc == 0x27B250u) {
        ctx->pc = 0x27B254u;
        goto label_27b254;
    }
    ctx->pc = 0x27B24Cu;
    SET_GPR_U32(ctx, 31, 0x27B254u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B254u; }
        if (ctx->pc != 0x27B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B254u; }
        if (ctx->pc != 0x27B254u) { return; }
    }
    ctx->pc = 0x27B254u;
label_27b254:
    // 0x27b254: 0x0  nop
    ctx->pc = 0x27b254u;
    // NOP
label_27b258:
    // 0x27b258: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x27b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_27b25c:
    // 0x27b25c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27b25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27b260:
    // 0x27b260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b264:
    // 0x27b264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27b268:
    // 0x27b268: 0xaea30040  sw          $v1, 0x40($s5)
    ctx->pc = 0x27b268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
label_27b26c:
    // 0x27b26c: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x27b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27b270:
    // 0x27b270: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27b270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27b274:
    // 0x27b274: 0x1462ff5c  bne         $v1, $v0, . + 4 + (-0xA4 << 2)
label_27b278:
    if (ctx->pc == 0x27B278u) {
        ctx->pc = 0x27B278u;
            // 0x27b278: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x27B27Cu;
        goto label_27b27c;
    }
    ctx->pc = 0x27B274u;
    {
        const bool branch_taken_0x27b274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27B278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B274u;
            // 0x27b278: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b274) {
            ctx->pc = 0x27AFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27afe8;
        }
    }
    ctx->pc = 0x27B27Cu;
label_27b27c:
    // 0x27b27c: 0x0  nop
    ctx->pc = 0x27b27cu;
    // NOP
label_27b280:
    // 0x27b280: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27b280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27b284:
    // 0x27b284: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27b284u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27b288:
    // 0x27b288: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27b288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27b28c:
    // 0x27b28c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27b28cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27b290:
    // 0x27b290: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27b290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27b294:
    // 0x27b294: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27b294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27b298:
    // 0x27b298: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27b298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27b29c:
    // 0x27b29c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27b29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27b2a0:
    // 0x27b2a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27b2a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27b2a4:
    // 0x27b2a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27b2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27b2a8:
    // 0x27b2a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27b2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27b2ac:
    // 0x27b2ac: 0x3e00008  jr          $ra
label_27b2b0:
    if (ctx->pc == 0x27B2B0u) {
        ctx->pc = 0x27B2B0u;
            // 0x27b2b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x27B2B4u;
        goto label_27b2b4;
    }
    ctx->pc = 0x27B2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2ACu;
            // 0x27b2b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B2B4u;
label_27b2b4:
    // 0x27b2b4: 0x0  nop
    ctx->pc = 0x27b2b4u;
    // NOP
label_27b2b8:
    // 0x27b2b8: 0x0  nop
    ctx->pc = 0x27b2b8u;
    // NOP
label_27b2bc:
    // 0x27b2bc: 0x0  nop
    ctx->pc = 0x27b2bcu;
    // NOP
label_27b2c0:
    // 0x27b2c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27b2c4:
    // 0x27b2c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27b2c8:
    // 0x27b2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27b2cc:
    // 0x27b2cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27b2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b2d0:
    // 0x27b2d0: 0xc09ecf0  jal         func_27B3C0
label_27b2d4:
    if (ctx->pc == 0x27B2D4u) {
        ctx->pc = 0x27B2D4u;
            // 0x27b2d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x27B2D8u;
        goto label_27b2d8;
    }
    ctx->pc = 0x27B2D0u;
    SET_GPR_U32(ctx, 31, 0x27B2D8u);
    ctx->pc = 0x27B2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2D0u;
            // 0x27b2d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B3C0u;
    if (runtime->hasFunction(0x27B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2D8u; }
        if (ctx->pc != 0x27B2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B3C0_0x27b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B2D8u; }
        if (ctx->pc != 0x27B2D8u) { return; }
    }
    ctx->pc = 0x27B2D8u;
label_27b2d8:
    // 0x27b2d8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x27b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b2dc:
    // 0x27b2dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27b2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b2e0:
    // 0x27b2e0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x27b2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b2e4:
    // 0x27b2e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b2e8:
    // 0x27b2e8: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
label_27b2ec:
    if (ctx->pc == 0x27B2ECu) {
        ctx->pc = 0x27B2ECu;
            // 0x27b2ec: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x27B2F0u;
        goto label_27b2f0;
    }
    ctx->pc = 0x27B2E8u;
    {
        const bool branch_taken_0x27b2e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2E8u;
            // 0x27b2ec: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2e8) {
            ctx->pc = 0x27B3A0u;
            goto label_27b3a0;
        }
    }
    ctx->pc = 0x27B2F0u;
label_27b2f0:
    // 0x27b2f0: 0x8c420144  lw          $v0, 0x144($v0)
    ctx->pc = 0x27b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_27b2f4:
    // 0x27b2f4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_27b2f8:
    if (ctx->pc == 0x27B2F8u) {
        ctx->pc = 0x27B2F8u;
            // 0x27b2f8: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27B2FCu;
        goto label_27b2fc;
    }
    ctx->pc = 0x27B2F4u;
    {
        const bool branch_taken_0x27b2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2F4u;
            // 0x27b2f8: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2f4) {
            ctx->pc = 0x27B3A0u;
            goto label_27b3a0;
        }
    }
    ctx->pc = 0x27B2FCu;
label_27b2fc:
    // 0x27b2fc: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x27b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_27b300:
    // 0x27b300: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27b304:
    // 0x27b304: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27b304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27b308:
    // 0x27b308: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27b308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b30c:
    // 0x27b30c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27b30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27b310:
    // 0x27b310: 0xa3a20038  sb          $v0, 0x38($sp)
    ctx->pc = 0x27b310u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 2));
label_27b314:
    // 0x27b314: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27b314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b318:
    // 0x27b318: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27b31c:
    if (ctx->pc == 0x27B31Cu) {
        ctx->pc = 0x27B320u;
        goto label_27b320;
    }
    ctx->pc = 0x27B318u;
    {
        const bool branch_taken_0x27b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b318) {
            ctx->pc = 0x27B348u;
            goto label_27b348;
        }
    }
    ctx->pc = 0x27B320u;
label_27b320:
    // 0x27b320: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27b320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b324:
    // 0x27b324: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27b324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27b328:
    // 0x27b328: 0x2442d450  addiu       $v0, $v0, -0x2BB0
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956112));
label_27b32c:
    // 0x27b32c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27b330:
    // 0x27b330: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27b334:
    // 0x27b334: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27b334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27b338:
    // 0x27b338: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b33c:
    // 0x27b33c: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27b340:
    // 0x27b340: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27b340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27b344:
    // 0x27b344: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27b344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27b348:
    // 0x27b348: 0xc08e8c0  jal         func_23A300
label_27b34c:
    if (ctx->pc == 0x27B34Cu) {
        ctx->pc = 0x27B34Cu;
            // 0x27b34c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x27B350u;
        goto label_27b350;
    }
    ctx->pc = 0x27B348u;
    SET_GPR_U32(ctx, 31, 0x27B350u);
    ctx->pc = 0x27B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B348u;
            // 0x27b34c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (runtime->hasFunction(0x23A300u)) {
        auto targetFn = runtime->lookupFunction(0x23A300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B350u; }
        if (ctx->pc != 0x27B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A300_0x23a300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B350u; }
        if (ctx->pc != 0x27B350u) { return; }
    }
    ctx->pc = 0x27B350u;
label_27b350:
    // 0x27b350: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27b350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27b354:
    // 0x27b354: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x27b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_27b358:
    // 0x27b358: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27b35c:
    // 0x27b35c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27b360:
    // 0x27b360: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b364:
    // 0x27b364: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27b364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27b368:
    // 0x27b368: 0xa3a20034  sb          $v0, 0x34($sp)
    ctx->pc = 0x27b368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 2));
label_27b36c:
    // 0x27b36c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27b36cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b370:
    // 0x27b370: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27b374:
    if (ctx->pc == 0x27B374u) {
        ctx->pc = 0x27B378u;
        goto label_27b378;
    }
    ctx->pc = 0x27B370u;
    {
        const bool branch_taken_0x27b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b370) {
            ctx->pc = 0x27B3A0u;
            goto label_27b3a0;
        }
    }
    ctx->pc = 0x27B378u;
label_27b378:
    // 0x27b378: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b37c:
    // 0x27b37c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_27b380:
    // 0x27b380: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x27b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_27b384:
    // 0x27b384: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27b384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27b388:
    // 0x27b388: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27b38c:
    // 0x27b38c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27b390:
    // 0x27b390: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b394:
    // 0x27b394: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27b398:
    // 0x27b398: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27b398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27b39c:
    // 0x27b39c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27b3a0:
    // 0x27b3a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27b3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b3a4:
    // 0x27b3a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27b3a8:
    // 0x27b3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27b3ac:
    // 0x27b3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27b3b0:
    // 0x27b3b0: 0x3e00008  jr          $ra
label_27b3b4:
    if (ctx->pc == 0x27B3B4u) {
        ctx->pc = 0x27B3B4u;
            // 0x27b3b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x27B3B8u;
        goto label_27b3b8;
    }
    ctx->pc = 0x27B3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3B0u;
            // 0x27b3b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B3B8u;
label_27b3b8:
    // 0x27b3b8: 0x0  nop
    ctx->pc = 0x27b3b8u;
    // NOP
label_27b3bc:
    // 0x27b3bc: 0x0  nop
    ctx->pc = 0x27b3bcu;
    // NOP
}
