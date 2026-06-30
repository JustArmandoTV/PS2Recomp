#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F31F0
// Address: 0x1f31f0 - 0x1f3540
void sub_001F31F0_0x1f31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F31F0_0x1f31f0");
#endif

    switch (ctx->pc) {
        case 0x1f31f0u: goto label_1f31f0;
        case 0x1f31f4u: goto label_1f31f4;
        case 0x1f31f8u: goto label_1f31f8;
        case 0x1f31fcu: goto label_1f31fc;
        case 0x1f3200u: goto label_1f3200;
        case 0x1f3204u: goto label_1f3204;
        case 0x1f3208u: goto label_1f3208;
        case 0x1f320cu: goto label_1f320c;
        case 0x1f3210u: goto label_1f3210;
        case 0x1f3214u: goto label_1f3214;
        case 0x1f3218u: goto label_1f3218;
        case 0x1f321cu: goto label_1f321c;
        case 0x1f3220u: goto label_1f3220;
        case 0x1f3224u: goto label_1f3224;
        case 0x1f3228u: goto label_1f3228;
        case 0x1f322cu: goto label_1f322c;
        case 0x1f3230u: goto label_1f3230;
        case 0x1f3234u: goto label_1f3234;
        case 0x1f3238u: goto label_1f3238;
        case 0x1f323cu: goto label_1f323c;
        case 0x1f3240u: goto label_1f3240;
        case 0x1f3244u: goto label_1f3244;
        case 0x1f3248u: goto label_1f3248;
        case 0x1f324cu: goto label_1f324c;
        case 0x1f3250u: goto label_1f3250;
        case 0x1f3254u: goto label_1f3254;
        case 0x1f3258u: goto label_1f3258;
        case 0x1f325cu: goto label_1f325c;
        case 0x1f3260u: goto label_1f3260;
        case 0x1f3264u: goto label_1f3264;
        case 0x1f3268u: goto label_1f3268;
        case 0x1f326cu: goto label_1f326c;
        case 0x1f3270u: goto label_1f3270;
        case 0x1f3274u: goto label_1f3274;
        case 0x1f3278u: goto label_1f3278;
        case 0x1f327cu: goto label_1f327c;
        case 0x1f3280u: goto label_1f3280;
        case 0x1f3284u: goto label_1f3284;
        case 0x1f3288u: goto label_1f3288;
        case 0x1f328cu: goto label_1f328c;
        case 0x1f3290u: goto label_1f3290;
        case 0x1f3294u: goto label_1f3294;
        case 0x1f3298u: goto label_1f3298;
        case 0x1f329cu: goto label_1f329c;
        case 0x1f32a0u: goto label_1f32a0;
        case 0x1f32a4u: goto label_1f32a4;
        case 0x1f32a8u: goto label_1f32a8;
        case 0x1f32acu: goto label_1f32ac;
        case 0x1f32b0u: goto label_1f32b0;
        case 0x1f32b4u: goto label_1f32b4;
        case 0x1f32b8u: goto label_1f32b8;
        case 0x1f32bcu: goto label_1f32bc;
        case 0x1f32c0u: goto label_1f32c0;
        case 0x1f32c4u: goto label_1f32c4;
        case 0x1f32c8u: goto label_1f32c8;
        case 0x1f32ccu: goto label_1f32cc;
        case 0x1f32d0u: goto label_1f32d0;
        case 0x1f32d4u: goto label_1f32d4;
        case 0x1f32d8u: goto label_1f32d8;
        case 0x1f32dcu: goto label_1f32dc;
        case 0x1f32e0u: goto label_1f32e0;
        case 0x1f32e4u: goto label_1f32e4;
        case 0x1f32e8u: goto label_1f32e8;
        case 0x1f32ecu: goto label_1f32ec;
        case 0x1f32f0u: goto label_1f32f0;
        case 0x1f32f4u: goto label_1f32f4;
        case 0x1f32f8u: goto label_1f32f8;
        case 0x1f32fcu: goto label_1f32fc;
        case 0x1f3300u: goto label_1f3300;
        case 0x1f3304u: goto label_1f3304;
        case 0x1f3308u: goto label_1f3308;
        case 0x1f330cu: goto label_1f330c;
        case 0x1f3310u: goto label_1f3310;
        case 0x1f3314u: goto label_1f3314;
        case 0x1f3318u: goto label_1f3318;
        case 0x1f331cu: goto label_1f331c;
        case 0x1f3320u: goto label_1f3320;
        case 0x1f3324u: goto label_1f3324;
        case 0x1f3328u: goto label_1f3328;
        case 0x1f332cu: goto label_1f332c;
        case 0x1f3330u: goto label_1f3330;
        case 0x1f3334u: goto label_1f3334;
        case 0x1f3338u: goto label_1f3338;
        case 0x1f333cu: goto label_1f333c;
        case 0x1f3340u: goto label_1f3340;
        case 0x1f3344u: goto label_1f3344;
        case 0x1f3348u: goto label_1f3348;
        case 0x1f334cu: goto label_1f334c;
        case 0x1f3350u: goto label_1f3350;
        case 0x1f3354u: goto label_1f3354;
        case 0x1f3358u: goto label_1f3358;
        case 0x1f335cu: goto label_1f335c;
        case 0x1f3360u: goto label_1f3360;
        case 0x1f3364u: goto label_1f3364;
        case 0x1f3368u: goto label_1f3368;
        case 0x1f336cu: goto label_1f336c;
        case 0x1f3370u: goto label_1f3370;
        case 0x1f3374u: goto label_1f3374;
        case 0x1f3378u: goto label_1f3378;
        case 0x1f337cu: goto label_1f337c;
        case 0x1f3380u: goto label_1f3380;
        case 0x1f3384u: goto label_1f3384;
        case 0x1f3388u: goto label_1f3388;
        case 0x1f338cu: goto label_1f338c;
        case 0x1f3390u: goto label_1f3390;
        case 0x1f3394u: goto label_1f3394;
        case 0x1f3398u: goto label_1f3398;
        case 0x1f339cu: goto label_1f339c;
        case 0x1f33a0u: goto label_1f33a0;
        case 0x1f33a4u: goto label_1f33a4;
        case 0x1f33a8u: goto label_1f33a8;
        case 0x1f33acu: goto label_1f33ac;
        case 0x1f33b0u: goto label_1f33b0;
        case 0x1f33b4u: goto label_1f33b4;
        case 0x1f33b8u: goto label_1f33b8;
        case 0x1f33bcu: goto label_1f33bc;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33c4u: goto label_1f33c4;
        case 0x1f33c8u: goto label_1f33c8;
        case 0x1f33ccu: goto label_1f33cc;
        case 0x1f33d0u: goto label_1f33d0;
        case 0x1f33d4u: goto label_1f33d4;
        case 0x1f33d8u: goto label_1f33d8;
        case 0x1f33dcu: goto label_1f33dc;
        case 0x1f33e0u: goto label_1f33e0;
        case 0x1f33e4u: goto label_1f33e4;
        case 0x1f33e8u: goto label_1f33e8;
        case 0x1f33ecu: goto label_1f33ec;
        case 0x1f33f0u: goto label_1f33f0;
        case 0x1f33f4u: goto label_1f33f4;
        case 0x1f33f8u: goto label_1f33f8;
        case 0x1f33fcu: goto label_1f33fc;
        case 0x1f3400u: goto label_1f3400;
        case 0x1f3404u: goto label_1f3404;
        case 0x1f3408u: goto label_1f3408;
        case 0x1f340cu: goto label_1f340c;
        case 0x1f3410u: goto label_1f3410;
        case 0x1f3414u: goto label_1f3414;
        case 0x1f3418u: goto label_1f3418;
        case 0x1f341cu: goto label_1f341c;
        case 0x1f3420u: goto label_1f3420;
        case 0x1f3424u: goto label_1f3424;
        case 0x1f3428u: goto label_1f3428;
        case 0x1f342cu: goto label_1f342c;
        case 0x1f3430u: goto label_1f3430;
        case 0x1f3434u: goto label_1f3434;
        case 0x1f3438u: goto label_1f3438;
        case 0x1f343cu: goto label_1f343c;
        case 0x1f3440u: goto label_1f3440;
        case 0x1f3444u: goto label_1f3444;
        case 0x1f3448u: goto label_1f3448;
        case 0x1f344cu: goto label_1f344c;
        case 0x1f3450u: goto label_1f3450;
        case 0x1f3454u: goto label_1f3454;
        case 0x1f3458u: goto label_1f3458;
        case 0x1f345cu: goto label_1f345c;
        case 0x1f3460u: goto label_1f3460;
        case 0x1f3464u: goto label_1f3464;
        case 0x1f3468u: goto label_1f3468;
        case 0x1f346cu: goto label_1f346c;
        case 0x1f3470u: goto label_1f3470;
        case 0x1f3474u: goto label_1f3474;
        case 0x1f3478u: goto label_1f3478;
        case 0x1f347cu: goto label_1f347c;
        case 0x1f3480u: goto label_1f3480;
        case 0x1f3484u: goto label_1f3484;
        case 0x1f3488u: goto label_1f3488;
        case 0x1f348cu: goto label_1f348c;
        case 0x1f3490u: goto label_1f3490;
        case 0x1f3494u: goto label_1f3494;
        case 0x1f3498u: goto label_1f3498;
        case 0x1f349cu: goto label_1f349c;
        case 0x1f34a0u: goto label_1f34a0;
        case 0x1f34a4u: goto label_1f34a4;
        case 0x1f34a8u: goto label_1f34a8;
        case 0x1f34acu: goto label_1f34ac;
        case 0x1f34b0u: goto label_1f34b0;
        case 0x1f34b4u: goto label_1f34b4;
        case 0x1f34b8u: goto label_1f34b8;
        case 0x1f34bcu: goto label_1f34bc;
        case 0x1f34c0u: goto label_1f34c0;
        case 0x1f34c4u: goto label_1f34c4;
        case 0x1f34c8u: goto label_1f34c8;
        case 0x1f34ccu: goto label_1f34cc;
        case 0x1f34d0u: goto label_1f34d0;
        case 0x1f34d4u: goto label_1f34d4;
        case 0x1f34d8u: goto label_1f34d8;
        case 0x1f34dcu: goto label_1f34dc;
        case 0x1f34e0u: goto label_1f34e0;
        case 0x1f34e4u: goto label_1f34e4;
        case 0x1f34e8u: goto label_1f34e8;
        case 0x1f34ecu: goto label_1f34ec;
        case 0x1f34f0u: goto label_1f34f0;
        case 0x1f34f4u: goto label_1f34f4;
        case 0x1f34f8u: goto label_1f34f8;
        case 0x1f34fcu: goto label_1f34fc;
        case 0x1f3500u: goto label_1f3500;
        case 0x1f3504u: goto label_1f3504;
        case 0x1f3508u: goto label_1f3508;
        case 0x1f350cu: goto label_1f350c;
        case 0x1f3510u: goto label_1f3510;
        case 0x1f3514u: goto label_1f3514;
        case 0x1f3518u: goto label_1f3518;
        case 0x1f351cu: goto label_1f351c;
        case 0x1f3520u: goto label_1f3520;
        case 0x1f3524u: goto label_1f3524;
        case 0x1f3528u: goto label_1f3528;
        case 0x1f352cu: goto label_1f352c;
        case 0x1f3530u: goto label_1f3530;
        case 0x1f3534u: goto label_1f3534;
        case 0x1f3538u: goto label_1f3538;
        case 0x1f353cu: goto label_1f353c;
        default: break;
    }

    ctx->pc = 0x1f31f0u;

label_1f31f0:
    // 0x1f31f0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1f31f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_1f31f4:
    // 0x1f31f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f31f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1f31f8:
    // 0x1f31f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f31f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f31fc:
    // 0x1f31fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f31fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f3200:
    // 0x1f3200: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f3200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f3204:
    // 0x1f3204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f3204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f3208:
    // 0x1f3208: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f3208u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f320c:
    // 0x1f320c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f3210:
    // 0x1f3210: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f3210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3214:
    // 0x1f3214: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f3214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f3218:
    // 0x1f3218: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f321c:
    // 0x1f321c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f3220:
    // 0x1f3220: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f3220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3224:
    // 0x1f3224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3228:
    // 0x1f3228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f322c:
    // 0x1f322c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f3230:
    // 0x1f3230: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1f3230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f3234:
    // 0x1f3234: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1f3234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f3238:
    // 0x1f3238: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1f3238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f323c:
    // 0x1f323c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f3240:
    // 0x1f3240: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x1f3240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f3244:
    // 0x1f3244: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x1f3244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f3248:
    // 0x1f3248: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f3248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f324c:
    // 0x1f324c: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f3250:
    // 0x1f3250: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f3250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f3254:
    // 0x1f3254: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f3254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f3258:
    // 0x1f3258: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f3258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f325c:
    // 0x1f325c: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f3260:
    // 0x1f3260: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f3260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f3264:
    // 0x1f3264: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f3264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3268:
    // 0x1f3268: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f3268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f326c:
    // 0x1f326c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3270:
    // 0x1f3270: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f3270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3274:
    // 0x1f3274: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f3274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3278:
    // 0x1f3278: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f3278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f327c:
    // 0x1f327c: 0xe7b000d4  swc1        $f16, 0xD4($sp)
    ctx->pc = 0x1f327cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f3280:
    // 0x1f3280: 0xe7af00d8  swc1        $f15, 0xD8($sp)
    ctx->pc = 0x1f3280u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f3284:
    // 0x1f3284: 0xe7ae00dc  swc1        $f14, 0xDC($sp)
    ctx->pc = 0x1f3284u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f3288:
    // 0x1f3288: 0xe7ad00e0  swc1        $f13, 0xE0($sp)
    ctx->pc = 0x1f3288u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f328c:
    // 0x1f328c: 0xe7ab00e4  swc1        $f11, 0xE4($sp)
    ctx->pc = 0x1f328cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f3290:
    // 0x1f3290: 0xe7aa00e8  swc1        $f10, 0xE8($sp)
    ctx->pc = 0x1f3290u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f3294:
    // 0x1f3294: 0xe7a900ec  swc1        $f9, 0xEC($sp)
    ctx->pc = 0x1f3294u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f3298:
    // 0x1f3298: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x1f3298u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f329c:
    // 0x1f329c: 0xe7a700f4  swc1        $f7, 0xF4($sp)
    ctx->pc = 0x1f329cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f32a0:
    // 0x1f32a0: 0xe7a600f8  swc1        $f6, 0xF8($sp)
    ctx->pc = 0x1f32a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f32a4:
    // 0x1f32a4: 0xe7a500fc  swc1        $f5, 0xFC($sp)
    ctx->pc = 0x1f32a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f32a8:
    // 0x1f32a8: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x1f32a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f32ac:
    // 0x1f32ac: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x1f32acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f32b0:
    // 0x1f32b0: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x1f32b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f32b4:
    // 0x1f32b4: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x1f32b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f32b8:
    // 0x1f32b8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f32b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32bc:
    // 0x1f32bc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f32bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f32c0:
    // 0x1f32c0: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f32c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32c4:
    // 0x1f32c4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f32c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f32c8:
    // 0x1f32c8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f32c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32cc:
    // 0x1f32cc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f32ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f32d0:
    // 0x1f32d0: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f32d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32d4:
    // 0x1f32d4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f32d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f32d8:
    // 0x1f32d8: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32dc:
    // 0x1f32dc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f32dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f32e0:
    // 0x1f32e0: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32e4:
    // 0x1f32e4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f32e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f32e8:
    // 0x1f32e8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f32e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32ec:
    // 0x1f32ec: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f32ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f32f0:
    // 0x1f32f0: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f32f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32f4:
    // 0x1f32f4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f32f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f32f8:
    // 0x1f32f8: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1f32f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f32fc:
    // 0x1f32fc: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f32fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f3300:
    // 0x1f3300: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1f3300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3304:
    // 0x1f3304: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f3304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f3308:
    // 0x1f3308: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1f3308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f330c:
    // 0x1f330c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f330cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f3310:
    // 0x1f3310: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1f3310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3314:
    // 0x1f3314: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f3314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f3318:
    // 0x1f3318: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1f3318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f331c:
    // 0x1f331c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f3320:
    // 0x1f3320: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1f3320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3324:
    // 0x1f3324: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f3324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f3328:
    // 0x1f3328: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1f3328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f332c:
    // 0x1f332c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f3330:
    // 0x1f3330: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f3330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3334:
    // 0x1f3334: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f3334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f3338:
    // 0x1f3338: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1f3338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f333c:
    // 0x1f333c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f3340:
    // 0x1f3340: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1f3340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3344:
    // 0x1f3344: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f3344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f3348:
    // 0x1f3348: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1f3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f334c:
    // 0x1f334c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f334cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f3350:
    // 0x1f3350: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3354:
    // 0x1f3354: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f3354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f3358:
    // 0x1f3358: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f3358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f335c:
    // 0x1f335c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f335cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f3360:
    // 0x1f3360: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1f3360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3364:
    // 0x1f3364: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f3364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f3368:
    // 0x1f3368: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f3368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f336c:
    // 0x1f336c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f336cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f3370:
    // 0x1f3370: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3374:
    // 0x1f3374: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f3374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f3378:
    // 0x1f3378: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f337c:
    // 0x1f337c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f337cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f3380:
    // 0x1f3380: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1f3380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3384:
    // 0x1f3384: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1f3384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_1f3388:
    // 0x1f3388: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f3388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f338c:
    // 0x1f338c: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x1f338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f3390:
    // 0x1f3390: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1f3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3394:
    // 0x1f3394: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1f3394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_1f3398:
    // 0x1f3398: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1f3398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f339c:
    // 0x1f339c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1f339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f33a0:
    // 0x1f33a0: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1f33a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1f33a4:
    // 0x1f33a4: 0xa7a20184  sh          $v0, 0x184($sp)
    ctx->pc = 0x1f33a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 388), (uint16_t)GPR_U32(ctx, 2));
label_1f33a8:
    // 0x1f33a8: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1f33a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1f33ac:
    // 0x1f33ac: 0xa7a20186  sh          $v0, 0x186($sp)
    ctx->pc = 0x1f33acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 390), (uint16_t)GPR_U32(ctx, 2));
label_1f33b0:
    // 0x1f33b0: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1f33b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f33b4:
    // 0x1f33b4: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1f33b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f33b8:
    // 0x1f33b8: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x1f33b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f33bc:
    // 0x1f33bc: 0xc0827ac  jal         func_209EB0
label_1f33c0:
    if (ctx->pc == 0x1F33C0u) {
        ctx->pc = 0x1F33C0u;
            // 0x1f33c0: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->pc = 0x1F33C4u;
        goto label_1f33c4;
    }
    ctx->pc = 0x1F33BCu;
    SET_GPR_U32(ctx, 31, 0x1F33C4u);
    ctx->pc = 0x1F33C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33BCu;
            // 0x1f33c0: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33C4u; }
        if (ctx->pc != 0x1F33C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33C4u; }
        if (ctx->pc != 0x1F33C4u) { return; }
    }
    ctx->pc = 0x1F33C4u;
label_1f33c4:
    // 0x1f33c4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1f33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f33c8:
    // 0x1f33c8: 0xafb500ac  sw          $s5, 0xAC($sp)
    ctx->pc = 0x1f33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 21));
label_1f33cc:
    // 0x1f33cc: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1f33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_1f33d0:
    // 0x1f33d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f33d4:
    // 0x1f33d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f33d8:
    // 0x1f33d8: 0x8c97000c  lw          $s7, 0xC($a0)
    ctx->pc = 0x1f33d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f33dc:
    // 0x1f33dc: 0x18600048  blez        $v1, . + 4 + (0x48 << 2)
label_1f33e0:
    if (ctx->pc == 0x1F33E0u) {
        ctx->pc = 0x1F33E0u;
            // 0x1f33e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F33E4u;
        goto label_1f33e4;
    }
    ctx->pc = 0x1F33DCu;
    {
        const bool branch_taken_0x1f33dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F33E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33DCu;
            // 0x1f33e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33dc) {
            ctx->pc = 0x1F3500u;
            goto label_1f3500;
        }
    }
    ctx->pc = 0x1F33E4u;
label_1f33e4:
    // 0x1f33e4: 0x18600046  blez        $v1, . + 4 + (0x46 << 2)
label_1f33e8:
    if (ctx->pc == 0x1F33E8u) {
        ctx->pc = 0x1F33ECu;
        goto label_1f33ec;
    }
    ctx->pc = 0x1F33E4u;
    {
        const bool branch_taken_0x1f33e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1f33e4) {
            ctx->pc = 0x1F3500u;
            goto label_1f3500;
        }
    }
    ctx->pc = 0x1F33ECu;
label_1f33ec:
    // 0x1f33ec: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1f33ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f33f0:
    // 0x1f33f0: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x1f33f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f33f4:
    // 0x1f33f4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f33f8:
    // 0x1f33f8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f33f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f33fc:
    // 0x1f33fc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1f33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f3400:
    // 0x1f3400: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x1f3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f3404:
    // 0x1f3404: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f3404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f3408:
    // 0x1f3408: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1f3408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f340c:
    // 0x1f340c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f340cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3410:
    // 0x1f3410: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3410u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3414:
    // 0x1f3414: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f3414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3418:
    // 0x1f3418: 0xc7a500f0  lwc1        $f5, 0xF0($sp)
    ctx->pc = 0x1f3418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f341c:
    // 0x1f341c: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f341cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f3420:
    // 0x1f3420: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x1f3420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f3424:
    // 0x1f3424: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f3424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3428:
    // 0x1f3428: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x1f3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f342c:
    // 0x1f342c: 0x4605315c  madd.s      $f5, $f6, $f5
    ctx->pc = 0x1f342cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1f3430:
    // 0x1f3430: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3430u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3434:
    // 0x1f3434: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x1f3434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3438:
    // 0x1f3438: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x1f3438u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f343c:
    // 0x1f343c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3440:
    // 0x1f3440: 0x460430dc  madd.s      $f3, $f6, $f4
    ctx->pc = 0x1f3440u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f3444:
    // 0x1f3444: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x1f3444u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f3448:
    // 0x1f3448: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f3448u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f344c:
    // 0x1f344c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3450:
    // 0x1f3450: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3450u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3454:
    // 0x1f3454: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f3454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3458:
    // 0x1f3458: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f3458u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f345c:
    // 0x1f345c: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x1f345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3460:
    // 0x1f3460: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x1f3460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_1f3464:
    // 0x1f3464: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f3464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f3468:
    // 0x1f3468: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1f3468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1f346c:
    // 0x1f346c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1f346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3470:
    // 0x1f3470: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1f3470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3474:
    // 0x1f3474: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1f3474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3478:
    // 0x1f3478: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f3478u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f347c:
    // 0x1f347c: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x1f347cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f3480:
    // 0x1f3480: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3484:
    // 0x1f3484: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f3484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3488:
    // 0x1f3488: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1f3488u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f348c:
    // 0x1f348c: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x1f348cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f3490:
    // 0x1f3490: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3494:
    // 0x1f3494: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f3494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f3498:
    // 0x1f3498: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x1f3498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f349c:
    // 0x1f349c: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f34a0:
    // 0x1f34a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f34a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f34a4:
    // 0x1f34a4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f34a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f34a8:
    // 0x1f34a8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1f34a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f34ac:
    // 0x1f34ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f34acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f34b0:
    // 0x1f34b0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1f34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1f34b4:
    // 0x1f34b4: 0xafb200a4  sw          $s2, 0xA4($sp)
    ctx->pc = 0x1f34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 18));
label_1f34b8:
    // 0x1f34b8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1f34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1f34bc:
    // 0x1f34bc: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1f34bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f34c0:
    // 0x1f34c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f34c4:
    // 0x1f34c4: 0x2e81821  addu        $v1, $s7, $t0
    ctx->pc = 0x1f34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_1f34c8:
    // 0x1f34c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f34cc:
    // 0x1f34cc: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1f34ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1f34d0:
    // 0x1f34d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f34d4:
    // 0x1f34d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f34d8:
    // 0x1f34d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f34dc:
    // 0x1f34dc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f34e0:
    // 0x1f34e0: 0x8c4209a8  lw          $v0, 0x9A8($v0)
    ctx->pc = 0x1f34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
label_1f34e4:
    // 0x1f34e4: 0x40f809  jalr        $v0
label_1f34e8:
    if (ctx->pc == 0x1F34E8u) {
        ctx->pc = 0x1F34E8u;
            // 0x1f34e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F34ECu;
        goto label_1f34ec;
    }
    ctx->pc = 0x1F34E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F34ECu);
        ctx->pc = 0x1F34E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F34E4u;
            // 0x1f34e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F34ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F34ECu; }
            if (ctx->pc != 0x1F34ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1F34ECu;
label_1f34ec:
    // 0x1f34ec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f34f0:
    // 0x1f34f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f34f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f34f4:
    // 0x1f34f4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1f34f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f34f8:
    // 0x1f34f8: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
label_1f34fc:
    if (ctx->pc == 0x1F34FCu) {
        ctx->pc = 0x1F34FCu;
            // 0x1f34fc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1F3500u;
        goto label_1f3500;
    }
    ctx->pc = 0x1F34F8u;
    {
        const bool branch_taken_0x1f34f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F34F8u;
            // 0x1f34fc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34f8) {
            ctx->pc = 0x1F33F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f33f0;
        }
    }
    ctx->pc = 0x1F3500u;
label_1f3500:
    // 0x1f3500: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f3500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f3504:
    // 0x1f3504: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f3504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f3508:
    // 0x1f3508: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f3508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1f350c:
    // 0x1f350c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f350cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f3510:
    // 0x1f3510: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f3510u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f3514:
    // 0x1f3514: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f3514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f3518:
    // 0x1f3518: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f3518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f351c:
    // 0x1f351c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f351cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f3520:
    // 0x1f3520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f3520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f3524:
    // 0x1f3524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f3524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f3528:
    // 0x1f3528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f352c:
    // 0x1f352c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f352cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3530:
    // 0x1f3530: 0x3e00008  jr          $ra
label_1f3534:
    if (ctx->pc == 0x1F3534u) {
        ctx->pc = 0x1F3534u;
            // 0x1f3534: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x1F3538u;
        goto label_1f3538;
    }
    ctx->pc = 0x1F3530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3530u;
            // 0x1f3534: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3538u;
label_1f3538:
    // 0x1f3538: 0x0  nop
    ctx->pc = 0x1f3538u;
    // NOP
label_1f353c:
    // 0x1f353c: 0x0  nop
    ctx->pc = 0x1f353cu;
    // NOP
}
