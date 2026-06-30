#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2EC0
// Address: 0x1f2ec0 - 0x1f31f0
void sub_001F2EC0_0x1f2ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2EC0_0x1f2ec0");
#endif

    switch (ctx->pc) {
        case 0x1f2ec0u: goto label_1f2ec0;
        case 0x1f2ec4u: goto label_1f2ec4;
        case 0x1f2ec8u: goto label_1f2ec8;
        case 0x1f2eccu: goto label_1f2ecc;
        case 0x1f2ed0u: goto label_1f2ed0;
        case 0x1f2ed4u: goto label_1f2ed4;
        case 0x1f2ed8u: goto label_1f2ed8;
        case 0x1f2edcu: goto label_1f2edc;
        case 0x1f2ee0u: goto label_1f2ee0;
        case 0x1f2ee4u: goto label_1f2ee4;
        case 0x1f2ee8u: goto label_1f2ee8;
        case 0x1f2eecu: goto label_1f2eec;
        case 0x1f2ef0u: goto label_1f2ef0;
        case 0x1f2ef4u: goto label_1f2ef4;
        case 0x1f2ef8u: goto label_1f2ef8;
        case 0x1f2efcu: goto label_1f2efc;
        case 0x1f2f00u: goto label_1f2f00;
        case 0x1f2f04u: goto label_1f2f04;
        case 0x1f2f08u: goto label_1f2f08;
        case 0x1f2f0cu: goto label_1f2f0c;
        case 0x1f2f10u: goto label_1f2f10;
        case 0x1f2f14u: goto label_1f2f14;
        case 0x1f2f18u: goto label_1f2f18;
        case 0x1f2f1cu: goto label_1f2f1c;
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f24u: goto label_1f2f24;
        case 0x1f2f28u: goto label_1f2f28;
        case 0x1f2f2cu: goto label_1f2f2c;
        case 0x1f2f30u: goto label_1f2f30;
        case 0x1f2f34u: goto label_1f2f34;
        case 0x1f2f38u: goto label_1f2f38;
        case 0x1f2f3cu: goto label_1f2f3c;
        case 0x1f2f40u: goto label_1f2f40;
        case 0x1f2f44u: goto label_1f2f44;
        case 0x1f2f48u: goto label_1f2f48;
        case 0x1f2f4cu: goto label_1f2f4c;
        case 0x1f2f50u: goto label_1f2f50;
        case 0x1f2f54u: goto label_1f2f54;
        case 0x1f2f58u: goto label_1f2f58;
        case 0x1f2f5cu: goto label_1f2f5c;
        case 0x1f2f60u: goto label_1f2f60;
        case 0x1f2f64u: goto label_1f2f64;
        case 0x1f2f68u: goto label_1f2f68;
        case 0x1f2f6cu: goto label_1f2f6c;
        case 0x1f2f70u: goto label_1f2f70;
        case 0x1f2f74u: goto label_1f2f74;
        case 0x1f2f78u: goto label_1f2f78;
        case 0x1f2f7cu: goto label_1f2f7c;
        case 0x1f2f80u: goto label_1f2f80;
        case 0x1f2f84u: goto label_1f2f84;
        case 0x1f2f88u: goto label_1f2f88;
        case 0x1f2f8cu: goto label_1f2f8c;
        case 0x1f2f90u: goto label_1f2f90;
        case 0x1f2f94u: goto label_1f2f94;
        case 0x1f2f98u: goto label_1f2f98;
        case 0x1f2f9cu: goto label_1f2f9c;
        case 0x1f2fa0u: goto label_1f2fa0;
        case 0x1f2fa4u: goto label_1f2fa4;
        case 0x1f2fa8u: goto label_1f2fa8;
        case 0x1f2facu: goto label_1f2fac;
        case 0x1f2fb0u: goto label_1f2fb0;
        case 0x1f2fb4u: goto label_1f2fb4;
        case 0x1f2fb8u: goto label_1f2fb8;
        case 0x1f2fbcu: goto label_1f2fbc;
        case 0x1f2fc0u: goto label_1f2fc0;
        case 0x1f2fc4u: goto label_1f2fc4;
        case 0x1f2fc8u: goto label_1f2fc8;
        case 0x1f2fccu: goto label_1f2fcc;
        case 0x1f2fd0u: goto label_1f2fd0;
        case 0x1f2fd4u: goto label_1f2fd4;
        case 0x1f2fd8u: goto label_1f2fd8;
        case 0x1f2fdcu: goto label_1f2fdc;
        case 0x1f2fe0u: goto label_1f2fe0;
        case 0x1f2fe4u: goto label_1f2fe4;
        case 0x1f2fe8u: goto label_1f2fe8;
        case 0x1f2fecu: goto label_1f2fec;
        case 0x1f2ff0u: goto label_1f2ff0;
        case 0x1f2ff4u: goto label_1f2ff4;
        case 0x1f2ff8u: goto label_1f2ff8;
        case 0x1f2ffcu: goto label_1f2ffc;
        case 0x1f3000u: goto label_1f3000;
        case 0x1f3004u: goto label_1f3004;
        case 0x1f3008u: goto label_1f3008;
        case 0x1f300cu: goto label_1f300c;
        case 0x1f3010u: goto label_1f3010;
        case 0x1f3014u: goto label_1f3014;
        case 0x1f3018u: goto label_1f3018;
        case 0x1f301cu: goto label_1f301c;
        case 0x1f3020u: goto label_1f3020;
        case 0x1f3024u: goto label_1f3024;
        case 0x1f3028u: goto label_1f3028;
        case 0x1f302cu: goto label_1f302c;
        case 0x1f3030u: goto label_1f3030;
        case 0x1f3034u: goto label_1f3034;
        case 0x1f3038u: goto label_1f3038;
        case 0x1f303cu: goto label_1f303c;
        case 0x1f3040u: goto label_1f3040;
        case 0x1f3044u: goto label_1f3044;
        case 0x1f3048u: goto label_1f3048;
        case 0x1f304cu: goto label_1f304c;
        case 0x1f3050u: goto label_1f3050;
        case 0x1f3054u: goto label_1f3054;
        case 0x1f3058u: goto label_1f3058;
        case 0x1f305cu: goto label_1f305c;
        case 0x1f3060u: goto label_1f3060;
        case 0x1f3064u: goto label_1f3064;
        case 0x1f3068u: goto label_1f3068;
        case 0x1f306cu: goto label_1f306c;
        case 0x1f3070u: goto label_1f3070;
        case 0x1f3074u: goto label_1f3074;
        case 0x1f3078u: goto label_1f3078;
        case 0x1f307cu: goto label_1f307c;
        case 0x1f3080u: goto label_1f3080;
        case 0x1f3084u: goto label_1f3084;
        case 0x1f3088u: goto label_1f3088;
        case 0x1f308cu: goto label_1f308c;
        case 0x1f3090u: goto label_1f3090;
        case 0x1f3094u: goto label_1f3094;
        case 0x1f3098u: goto label_1f3098;
        case 0x1f309cu: goto label_1f309c;
        case 0x1f30a0u: goto label_1f30a0;
        case 0x1f30a4u: goto label_1f30a4;
        case 0x1f30a8u: goto label_1f30a8;
        case 0x1f30acu: goto label_1f30ac;
        case 0x1f30b0u: goto label_1f30b0;
        case 0x1f30b4u: goto label_1f30b4;
        case 0x1f30b8u: goto label_1f30b8;
        case 0x1f30bcu: goto label_1f30bc;
        case 0x1f30c0u: goto label_1f30c0;
        case 0x1f30c4u: goto label_1f30c4;
        case 0x1f30c8u: goto label_1f30c8;
        case 0x1f30ccu: goto label_1f30cc;
        case 0x1f30d0u: goto label_1f30d0;
        case 0x1f30d4u: goto label_1f30d4;
        case 0x1f30d8u: goto label_1f30d8;
        case 0x1f30dcu: goto label_1f30dc;
        case 0x1f30e0u: goto label_1f30e0;
        case 0x1f30e4u: goto label_1f30e4;
        case 0x1f30e8u: goto label_1f30e8;
        case 0x1f30ecu: goto label_1f30ec;
        case 0x1f30f0u: goto label_1f30f0;
        case 0x1f30f4u: goto label_1f30f4;
        case 0x1f30f8u: goto label_1f30f8;
        case 0x1f30fcu: goto label_1f30fc;
        case 0x1f3100u: goto label_1f3100;
        case 0x1f3104u: goto label_1f3104;
        case 0x1f3108u: goto label_1f3108;
        case 0x1f310cu: goto label_1f310c;
        case 0x1f3110u: goto label_1f3110;
        case 0x1f3114u: goto label_1f3114;
        case 0x1f3118u: goto label_1f3118;
        case 0x1f311cu: goto label_1f311c;
        case 0x1f3120u: goto label_1f3120;
        case 0x1f3124u: goto label_1f3124;
        case 0x1f3128u: goto label_1f3128;
        case 0x1f312cu: goto label_1f312c;
        case 0x1f3130u: goto label_1f3130;
        case 0x1f3134u: goto label_1f3134;
        case 0x1f3138u: goto label_1f3138;
        case 0x1f313cu: goto label_1f313c;
        case 0x1f3140u: goto label_1f3140;
        case 0x1f3144u: goto label_1f3144;
        case 0x1f3148u: goto label_1f3148;
        case 0x1f314cu: goto label_1f314c;
        case 0x1f3150u: goto label_1f3150;
        case 0x1f3154u: goto label_1f3154;
        case 0x1f3158u: goto label_1f3158;
        case 0x1f315cu: goto label_1f315c;
        case 0x1f3160u: goto label_1f3160;
        case 0x1f3164u: goto label_1f3164;
        case 0x1f3168u: goto label_1f3168;
        case 0x1f316cu: goto label_1f316c;
        case 0x1f3170u: goto label_1f3170;
        case 0x1f3174u: goto label_1f3174;
        case 0x1f3178u: goto label_1f3178;
        case 0x1f317cu: goto label_1f317c;
        case 0x1f3180u: goto label_1f3180;
        case 0x1f3184u: goto label_1f3184;
        case 0x1f3188u: goto label_1f3188;
        case 0x1f318cu: goto label_1f318c;
        case 0x1f3190u: goto label_1f3190;
        case 0x1f3194u: goto label_1f3194;
        case 0x1f3198u: goto label_1f3198;
        case 0x1f319cu: goto label_1f319c;
        case 0x1f31a0u: goto label_1f31a0;
        case 0x1f31a4u: goto label_1f31a4;
        case 0x1f31a8u: goto label_1f31a8;
        case 0x1f31acu: goto label_1f31ac;
        case 0x1f31b0u: goto label_1f31b0;
        case 0x1f31b4u: goto label_1f31b4;
        case 0x1f31b8u: goto label_1f31b8;
        case 0x1f31bcu: goto label_1f31bc;
        case 0x1f31c0u: goto label_1f31c0;
        case 0x1f31c4u: goto label_1f31c4;
        case 0x1f31c8u: goto label_1f31c8;
        case 0x1f31ccu: goto label_1f31cc;
        case 0x1f31d0u: goto label_1f31d0;
        case 0x1f31d4u: goto label_1f31d4;
        case 0x1f31d8u: goto label_1f31d8;
        case 0x1f31dcu: goto label_1f31dc;
        case 0x1f31e0u: goto label_1f31e0;
        case 0x1f31e4u: goto label_1f31e4;
        case 0x1f31e8u: goto label_1f31e8;
        case 0x1f31ecu: goto label_1f31ec;
        default: break;
    }

    ctx->pc = 0x1f2ec0u;

label_1f2ec0:
    // 0x1f2ec0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1f2ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1f2ec4:
    // 0x1f2ec4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f2ec8:
    // 0x1f2ec8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f2ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2ecc:
    // 0x1f2ecc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f2eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f2ed0:
    // 0x1f2ed0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f2ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f2ed4:
    // 0x1f2ed4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f2ed8:
    // 0x1f2ed8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f2ed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2edc:
    // 0x1f2edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f2ee0:
    // 0x1f2ee0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f2ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f2ee4:
    // 0x1f2ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f2ee8:
    // 0x1f2ee8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f2ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f2eec:
    // 0x1f2eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f2ef0:
    // 0x1f2ef0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f2ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f2ef4:
    // 0x1f2ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f2ef8:
    // 0x1f2ef8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f2efc:
    // 0x1f2efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f00:
    // 0x1f2f00: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x1f2f00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f2f04:
    // 0x1f2f04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f2f08:
    // 0x1f2f08: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1f2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f2f0c:
    // 0x1f2f0c: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1f2f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f2f10:
    // 0x1f2f10: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x1f2f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f2f14:
    // 0x1f2f14: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x1f2f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f2f18:
    // 0x1f2f18: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f2f1c:
    // 0x1f2f1c: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f2f20:
    // 0x1f2f20: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f2f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f2f24:
    // 0x1f2f24: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f2f28:
    // 0x1f2f28: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f2f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f2f2c:
    // 0x1f2f2c: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f2f30:
    // 0x1f2f30: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f2f34:
    // 0x1f2f34: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f2f38:
    // 0x1f2f38: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2f3c:
    // 0x1f2f3c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f2f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2f40:
    // 0x1f2f40: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f2f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2f44:
    // 0x1f2f44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f2f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2f48:
    // 0x1f2f48: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f2f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f2f4c:
    // 0x1f2f4c: 0xe7b000c4  swc1        $f16, 0xC4($sp)
    ctx->pc = 0x1f2f4cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f2f50:
    // 0x1f2f50: 0xe7af00c8  swc1        $f15, 0xC8($sp)
    ctx->pc = 0x1f2f50u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f2f54:
    // 0x1f2f54: 0xe7ae00cc  swc1        $f14, 0xCC($sp)
    ctx->pc = 0x1f2f54u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f2f58:
    // 0x1f2f58: 0xe7ad00d0  swc1        $f13, 0xD0($sp)
    ctx->pc = 0x1f2f58u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f2f5c:
    // 0x1f2f5c: 0xe7ab00d4  swc1        $f11, 0xD4($sp)
    ctx->pc = 0x1f2f5cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f2f60:
    // 0x1f2f60: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x1f2f60u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f2f64:
    // 0x1f2f64: 0xe7a900dc  swc1        $f9, 0xDC($sp)
    ctx->pc = 0x1f2f64u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f2f68:
    // 0x1f2f68: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x1f2f68u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f2f6c:
    // 0x1f2f6c: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x1f2f6cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f2f70:
    // 0x1f2f70: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x1f2f70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f2f74:
    // 0x1f2f74: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x1f2f74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f2f78:
    // 0x1f2f78: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x1f2f78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f2f7c:
    // 0x1f2f7c: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x1f2f7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f2f80:
    // 0x1f2f80: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f2f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f2f84:
    // 0x1f2f84: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1f2f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f2f88:
    // 0x1f2f88: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f2f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2f8c:
    // 0x1f2f8c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f2f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f2f90:
    // 0x1f2f90: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f2f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2f94:
    // 0x1f2f94: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f2f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f2f98:
    // 0x1f2f98: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f2f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2f9c:
    // 0x1f2f9c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f2f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f2fa0:
    // 0x1f2fa0: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f2fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fa4:
    // 0x1f2fa4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f2fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f2fa8:
    // 0x1f2fa8: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f2fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fac:
    // 0x1f2fac: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f2facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f2fb0:
    // 0x1f2fb0: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f2fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fb4:
    // 0x1f2fb4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f2fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f2fb8:
    // 0x1f2fb8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f2fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fbc:
    // 0x1f2fbc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f2fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f2fc0:
    // 0x1f2fc0: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f2fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fc4:
    // 0x1f2fc4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f2fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f2fc8:
    // 0x1f2fc8: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1f2fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fcc:
    // 0x1f2fcc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f2fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f2fd0:
    // 0x1f2fd0: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1f2fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fd4:
    // 0x1f2fd4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f2fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f2fd8:
    // 0x1f2fd8: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1f2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fdc:
    // 0x1f2fdc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f2fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f2fe0:
    // 0x1f2fe0: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1f2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fe4:
    // 0x1f2fe4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f2fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f2fe8:
    // 0x1f2fe8: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1f2fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2fec:
    // 0x1f2fec: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f2fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f2ff0:
    // 0x1f2ff0: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1f2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2ff4:
    // 0x1f2ff4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f2ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f2ff8:
    // 0x1f2ff8: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1f2ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2ffc:
    // 0x1f2ffc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f2ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f3000:
    // 0x1f3000: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f3000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3004:
    // 0x1f3004: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f3004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f3008:
    // 0x1f3008: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1f3008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f300c:
    // 0x1f300c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f300cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f3010:
    // 0x1f3010: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1f3010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3014:
    // 0x1f3014: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f3014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f3018:
    // 0x1f3018: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1f3018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f301c:
    // 0x1f301c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f301cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f3020:
    // 0x1f3020: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f3020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3024:
    // 0x1f3024: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f3024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f3028:
    // 0x1f3028: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f3028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f302c:
    // 0x1f302c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f302cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f3030:
    // 0x1f3030: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1f3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3034:
    // 0x1f3034: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f3034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f3038:
    // 0x1f3038: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f303c:
    // 0x1f303c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f303cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f3040:
    // 0x1f3040: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f3040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3044:
    // 0x1f3044: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f3044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f3048:
    // 0x1f3048: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f3048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f304c:
    // 0x1f304c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f3050:
    // 0x1f3050: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1f3050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3054:
    // 0x1f3054: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f3054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f3058:
    // 0x1f3058: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f3058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f305c:
    // 0x1f305c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f305cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f3060:
    // 0x1f3060: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1f3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3064:
    // 0x1f3064: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f3064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f3068:
    // 0x1f3068: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1f3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f306c:
    // 0x1f306c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f3070:
    // 0x1f3070: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1f3070u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1f3074:
    // 0x1f3074: 0xa7a20174  sh          $v0, 0x174($sp)
    ctx->pc = 0x1f3074u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 372), (uint16_t)GPR_U32(ctx, 2));
label_1f3078:
    // 0x1f3078: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1f3078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1f307c:
    // 0x1f307c: 0xa7a20176  sh          $v0, 0x176($sp)
    ctx->pc = 0x1f307cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 374), (uint16_t)GPR_U32(ctx, 2));
label_1f3080:
    // 0x1f3080: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1f3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3084:
    // 0x1f3084: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1f3084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3088:
    // 0x1f3088: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x1f3088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f308c:
    // 0x1f308c: 0xc0827ac  jal         func_209EB0
label_1f3090:
    if (ctx->pc == 0x1F3090u) {
        ctx->pc = 0x1F3090u;
            // 0x1f3090: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->pc = 0x1F3094u;
        goto label_1f3094;
    }
    ctx->pc = 0x1F308Cu;
    SET_GPR_U32(ctx, 31, 0x1F3094u);
    ctx->pc = 0x1F3090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F308Cu;
            // 0x1f3090: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3094u; }
        if (ctx->pc != 0x1F3094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3094u; }
        if (ctx->pc != 0x1F3094u) { return; }
    }
    ctx->pc = 0x1F3094u;
label_1f3094:
    // 0x1f3094: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1f3094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f3098:
    // 0x1f3098: 0xafb5009c  sw          $s5, 0x9C($sp)
    ctx->pc = 0x1f3098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 21));
label_1f309c:
    // 0x1f309c: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1f309cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_1f30a0:
    // 0x1f30a0: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x1f30a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f30a4:
    // 0x1f30a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f30a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f30a8:
    // 0x1f30a8: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1f30a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f30ac:
    // 0x1f30ac: 0x6000040  bltz        $s0, . + 4 + (0x40 << 2)
label_1f30b0:
    if (ctx->pc == 0x1F30B0u) {
        ctx->pc = 0x1F30B4u;
        goto label_1f30b4;
    }
    ctx->pc = 0x1F30ACu;
    {
        const bool branch_taken_0x1f30ac = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1f30ac) {
            ctx->pc = 0x1F31B0u;
            goto label_1f31b0;
        }
    }
    ctx->pc = 0x1F30B4u;
label_1f30b4:
    // 0x1f30b4: 0x600003e  bltz        $s0, . + 4 + (0x3E << 2)
label_1f30b8:
    if (ctx->pc == 0x1F30B8u) {
        ctx->pc = 0x1F30BCu;
        goto label_1f30bc;
    }
    ctx->pc = 0x1F30B4u;
    {
        const bool branch_taken_0x1f30b4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1f30b4) {
            ctx->pc = 0x1F31B0u;
            goto label_1f31b0;
        }
    }
    ctx->pc = 0x1F30BCu;
label_1f30bc:
    // 0x1f30bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f30c0:
    // 0x1f30c0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f30c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f30c4:
    // 0x1f30c4: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x1f30c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f30c8:
    // 0x1f30c8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1f30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f30cc:
    // 0x1f30cc: 0xc7a700e0  lwc1        $f7, 0xE0($sp)
    ctx->pc = 0x1f30ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f30d0:
    // 0x1f30d0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f30d4:
    // 0x1f30d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f30d8:
    // 0x1f30d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f30d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f30dc:
    // 0x1f30dc: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x1f30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1f30e0:
    // 0x1f30e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f30e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f30e4:
    // 0x1f30e4: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x1f30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f30e8:
    // 0x1f30e8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f30ec:
    // 0x1f30ec: 0xc48a0020  lwc1        $f10, 0x20($a0)
    ctx->pc = 0x1f30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f30f0:
    // 0x1f30f0: 0xc4880028  lwc1        $f8, 0x28($a0)
    ctx->pc = 0x1f30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f30f4:
    // 0x1f30f4: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x1f30f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_1f30f8:
    // 0x1f30f8: 0x4606501e  madda.s     $f10, $f6
    ctx->pc = 0x1f30f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[6]));
label_1f30fc:
    // 0x1f30fc: 0x4607419c  madd.s      $f6, $f8, $f7
    ctx->pc = 0x1f30fcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
label_1f3100:
    // 0x1f3100: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x1f3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3104:
    // 0x1f3104: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x1f3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3108:
    // 0x1f3108: 0xc7a500e4  lwc1        $f5, 0xE4($sp)
    ctx->pc = 0x1f3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f310c:
    // 0x1f310c: 0x4603481a  mula.s      $f9, $f3
    ctx->pc = 0x1f310cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_1f3110:
    // 0x1f3110: 0x4604501e  madda.s     $f10, $f4
    ctx->pc = 0x1f3110u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_1f3114:
    // 0x1f3114: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f3114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3118:
    // 0x1f3118: 0x460540dc  madd.s      $f3, $f8, $f5
    ctx->pc = 0x1f3118u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
label_1f311c:
    // 0x1f311c: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x1f311cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f3120:
    // 0x1f3120: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1f3120u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f3124:
    // 0x1f3124: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1f3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3128:
    // 0x1f3128: 0x4600481a  mula.s      $f9, $f0
    ctx->pc = 0x1f3128u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_1f312c:
    // 0x1f312c: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1f312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3130:
    // 0x1f3130: 0x4601501e  madda.s     $f10, $f1
    ctx->pc = 0x1f3130u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
label_1f3134:
    // 0x1f3134: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x1f3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3138:
    // 0x1f3138: 0x4602401c  madd.s      $f0, $f8, $f2
    ctx->pc = 0x1f3138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
label_1f313c:
    // 0x1f313c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1f313cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f3140:
    // 0x1f3140: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1f3140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1f3144:
    // 0x1f3144: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1f3144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3148:
    // 0x1f3148: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x1f3148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f314c:
    // 0x1f314c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1f314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3150:
    // 0x1f3150: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f3150u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f3154:
    // 0x1f3154: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x1f3154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f3158:
    // 0x1f3158: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f3158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f315c:
    // 0x1f315c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3160:
    // 0x1f3160: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1f3160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f3164:
    // 0x1f3164: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x1f3164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f3168:
    // 0x1f3168: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f3168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f316c:
    // 0x1f316c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f316cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f3170:
    // 0x1f3170: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x1f3170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f3174:
    // 0x1f3174: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f3174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3178:
    // 0x1f3178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f3178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f317c:
    // 0x1f317c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1f317cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f3180:
    // 0x1f3180: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1f3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3184:
    // 0x1f3184: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f3184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f3188:
    // 0x1f3188: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1f3188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_1f318c:
    // 0x1f318c: 0xafb00094  sw          $s0, 0x94($sp)
    ctx->pc = 0x1f318cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 16));
label_1f3190:
    // 0x1f3190: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f3190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f3194:
    // 0x1f3194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f3194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f3198:
    // 0x1f3198: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f3198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f319c:
    // 0x1f319c: 0x320f809  jalr        $t9
label_1f31a0:
    if (ctx->pc == 0x1F31A0u) {
        ctx->pc = 0x1F31A0u;
            // 0x1f31a0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F31A4u;
        goto label_1f31a4;
    }
    ctx->pc = 0x1F319Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F31A4u);
        ctx->pc = 0x1F31A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F319Cu;
            // 0x1f31a0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F31A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F31A4u; }
            if (ctx->pc != 0x1F31A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F31A4u;
label_1f31a4:
    // 0x1f31a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1f31a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1f31a8:
    // 0x1f31a8: 0x601ffc4  bgez        $s0, . + 4 + (-0x3C << 2)
label_1f31ac:
    if (ctx->pc == 0x1F31ACu) {
        ctx->pc = 0x1F31ACu;
            // 0x1f31ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1F31B0u;
        goto label_1f31b0;
    }
    ctx->pc = 0x1F31A8u;
    {
        const bool branch_taken_0x1f31a8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F31ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31A8u;
            // 0x1f31ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31a8) {
            ctx->pc = 0x1F30BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f30bc;
        }
    }
    ctx->pc = 0x1F31B0u;
label_1f31b0:
    // 0x1f31b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f31b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f31b4:
    // 0x1f31b4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f31b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f31b8:
    // 0x1f31b8: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1f31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1f31bc:
    // 0x1f31bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f31bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f31c0:
    // 0x1f31c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f31c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f31c4:
    // 0x1f31c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f31c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f31c8:
    // 0x1f31c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f31c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f31cc:
    // 0x1f31cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f31ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f31d0:
    // 0x1f31d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f31d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f31d4:
    // 0x1f31d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f31d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f31d8:
    // 0x1f31d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f31d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f31dc:
    // 0x1f31dc: 0x3e00008  jr          $ra
label_1f31e0:
    if (ctx->pc == 0x1F31E0u) {
        ctx->pc = 0x1F31E0u;
            // 0x1f31e0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F31E4u;
        goto label_1f31e4;
    }
    ctx->pc = 0x1F31DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F31E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31DCu;
            // 0x1f31e0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F31E4u;
label_1f31e4:
    // 0x1f31e4: 0x0  nop
    ctx->pc = 0x1f31e4u;
    // NOP
label_1f31e8:
    // 0x1f31e8: 0x0  nop
    ctx->pc = 0x1f31e8u;
    // NOP
label_1f31ec:
    // 0x1f31ec: 0x0  nop
    ctx->pc = 0x1f31ecu;
    // NOP
}
