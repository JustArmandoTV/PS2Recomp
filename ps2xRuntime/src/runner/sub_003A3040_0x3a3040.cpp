#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A3040
// Address: 0x3a3040 - 0x3a3440
void sub_003A3040_0x3a3040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3040_0x3a3040");
#endif

    switch (ctx->pc) {
        case 0x3a3040u: goto label_3a3040;
        case 0x3a3044u: goto label_3a3044;
        case 0x3a3048u: goto label_3a3048;
        case 0x3a304cu: goto label_3a304c;
        case 0x3a3050u: goto label_3a3050;
        case 0x3a3054u: goto label_3a3054;
        case 0x3a3058u: goto label_3a3058;
        case 0x3a305cu: goto label_3a305c;
        case 0x3a3060u: goto label_3a3060;
        case 0x3a3064u: goto label_3a3064;
        case 0x3a3068u: goto label_3a3068;
        case 0x3a306cu: goto label_3a306c;
        case 0x3a3070u: goto label_3a3070;
        case 0x3a3074u: goto label_3a3074;
        case 0x3a3078u: goto label_3a3078;
        case 0x3a307cu: goto label_3a307c;
        case 0x3a3080u: goto label_3a3080;
        case 0x3a3084u: goto label_3a3084;
        case 0x3a3088u: goto label_3a3088;
        case 0x3a308cu: goto label_3a308c;
        case 0x3a3090u: goto label_3a3090;
        case 0x3a3094u: goto label_3a3094;
        case 0x3a3098u: goto label_3a3098;
        case 0x3a309cu: goto label_3a309c;
        case 0x3a30a0u: goto label_3a30a0;
        case 0x3a30a4u: goto label_3a30a4;
        case 0x3a30a8u: goto label_3a30a8;
        case 0x3a30acu: goto label_3a30ac;
        case 0x3a30b0u: goto label_3a30b0;
        case 0x3a30b4u: goto label_3a30b4;
        case 0x3a30b8u: goto label_3a30b8;
        case 0x3a30bcu: goto label_3a30bc;
        case 0x3a30c0u: goto label_3a30c0;
        case 0x3a30c4u: goto label_3a30c4;
        case 0x3a30c8u: goto label_3a30c8;
        case 0x3a30ccu: goto label_3a30cc;
        case 0x3a30d0u: goto label_3a30d0;
        case 0x3a30d4u: goto label_3a30d4;
        case 0x3a30d8u: goto label_3a30d8;
        case 0x3a30dcu: goto label_3a30dc;
        case 0x3a30e0u: goto label_3a30e0;
        case 0x3a30e4u: goto label_3a30e4;
        case 0x3a30e8u: goto label_3a30e8;
        case 0x3a30ecu: goto label_3a30ec;
        case 0x3a30f0u: goto label_3a30f0;
        case 0x3a30f4u: goto label_3a30f4;
        case 0x3a30f8u: goto label_3a30f8;
        case 0x3a30fcu: goto label_3a30fc;
        case 0x3a3100u: goto label_3a3100;
        case 0x3a3104u: goto label_3a3104;
        case 0x3a3108u: goto label_3a3108;
        case 0x3a310cu: goto label_3a310c;
        case 0x3a3110u: goto label_3a3110;
        case 0x3a3114u: goto label_3a3114;
        case 0x3a3118u: goto label_3a3118;
        case 0x3a311cu: goto label_3a311c;
        case 0x3a3120u: goto label_3a3120;
        case 0x3a3124u: goto label_3a3124;
        case 0x3a3128u: goto label_3a3128;
        case 0x3a312cu: goto label_3a312c;
        case 0x3a3130u: goto label_3a3130;
        case 0x3a3134u: goto label_3a3134;
        case 0x3a3138u: goto label_3a3138;
        case 0x3a313cu: goto label_3a313c;
        case 0x3a3140u: goto label_3a3140;
        case 0x3a3144u: goto label_3a3144;
        case 0x3a3148u: goto label_3a3148;
        case 0x3a314cu: goto label_3a314c;
        case 0x3a3150u: goto label_3a3150;
        case 0x3a3154u: goto label_3a3154;
        case 0x3a3158u: goto label_3a3158;
        case 0x3a315cu: goto label_3a315c;
        case 0x3a3160u: goto label_3a3160;
        case 0x3a3164u: goto label_3a3164;
        case 0x3a3168u: goto label_3a3168;
        case 0x3a316cu: goto label_3a316c;
        case 0x3a3170u: goto label_3a3170;
        case 0x3a3174u: goto label_3a3174;
        case 0x3a3178u: goto label_3a3178;
        case 0x3a317cu: goto label_3a317c;
        case 0x3a3180u: goto label_3a3180;
        case 0x3a3184u: goto label_3a3184;
        case 0x3a3188u: goto label_3a3188;
        case 0x3a318cu: goto label_3a318c;
        case 0x3a3190u: goto label_3a3190;
        case 0x3a3194u: goto label_3a3194;
        case 0x3a3198u: goto label_3a3198;
        case 0x3a319cu: goto label_3a319c;
        case 0x3a31a0u: goto label_3a31a0;
        case 0x3a31a4u: goto label_3a31a4;
        case 0x3a31a8u: goto label_3a31a8;
        case 0x3a31acu: goto label_3a31ac;
        case 0x3a31b0u: goto label_3a31b0;
        case 0x3a31b4u: goto label_3a31b4;
        case 0x3a31b8u: goto label_3a31b8;
        case 0x3a31bcu: goto label_3a31bc;
        case 0x3a31c0u: goto label_3a31c0;
        case 0x3a31c4u: goto label_3a31c4;
        case 0x3a31c8u: goto label_3a31c8;
        case 0x3a31ccu: goto label_3a31cc;
        case 0x3a31d0u: goto label_3a31d0;
        case 0x3a31d4u: goto label_3a31d4;
        case 0x3a31d8u: goto label_3a31d8;
        case 0x3a31dcu: goto label_3a31dc;
        case 0x3a31e0u: goto label_3a31e0;
        case 0x3a31e4u: goto label_3a31e4;
        case 0x3a31e8u: goto label_3a31e8;
        case 0x3a31ecu: goto label_3a31ec;
        case 0x3a31f0u: goto label_3a31f0;
        case 0x3a31f4u: goto label_3a31f4;
        case 0x3a31f8u: goto label_3a31f8;
        case 0x3a31fcu: goto label_3a31fc;
        case 0x3a3200u: goto label_3a3200;
        case 0x3a3204u: goto label_3a3204;
        case 0x3a3208u: goto label_3a3208;
        case 0x3a320cu: goto label_3a320c;
        case 0x3a3210u: goto label_3a3210;
        case 0x3a3214u: goto label_3a3214;
        case 0x3a3218u: goto label_3a3218;
        case 0x3a321cu: goto label_3a321c;
        case 0x3a3220u: goto label_3a3220;
        case 0x3a3224u: goto label_3a3224;
        case 0x3a3228u: goto label_3a3228;
        case 0x3a322cu: goto label_3a322c;
        case 0x3a3230u: goto label_3a3230;
        case 0x3a3234u: goto label_3a3234;
        case 0x3a3238u: goto label_3a3238;
        case 0x3a323cu: goto label_3a323c;
        case 0x3a3240u: goto label_3a3240;
        case 0x3a3244u: goto label_3a3244;
        case 0x3a3248u: goto label_3a3248;
        case 0x3a324cu: goto label_3a324c;
        case 0x3a3250u: goto label_3a3250;
        case 0x3a3254u: goto label_3a3254;
        case 0x3a3258u: goto label_3a3258;
        case 0x3a325cu: goto label_3a325c;
        case 0x3a3260u: goto label_3a3260;
        case 0x3a3264u: goto label_3a3264;
        case 0x3a3268u: goto label_3a3268;
        case 0x3a326cu: goto label_3a326c;
        case 0x3a3270u: goto label_3a3270;
        case 0x3a3274u: goto label_3a3274;
        case 0x3a3278u: goto label_3a3278;
        case 0x3a327cu: goto label_3a327c;
        case 0x3a3280u: goto label_3a3280;
        case 0x3a3284u: goto label_3a3284;
        case 0x3a3288u: goto label_3a3288;
        case 0x3a328cu: goto label_3a328c;
        case 0x3a3290u: goto label_3a3290;
        case 0x3a3294u: goto label_3a3294;
        case 0x3a3298u: goto label_3a3298;
        case 0x3a329cu: goto label_3a329c;
        case 0x3a32a0u: goto label_3a32a0;
        case 0x3a32a4u: goto label_3a32a4;
        case 0x3a32a8u: goto label_3a32a8;
        case 0x3a32acu: goto label_3a32ac;
        case 0x3a32b0u: goto label_3a32b0;
        case 0x3a32b4u: goto label_3a32b4;
        case 0x3a32b8u: goto label_3a32b8;
        case 0x3a32bcu: goto label_3a32bc;
        case 0x3a32c0u: goto label_3a32c0;
        case 0x3a32c4u: goto label_3a32c4;
        case 0x3a32c8u: goto label_3a32c8;
        case 0x3a32ccu: goto label_3a32cc;
        case 0x3a32d0u: goto label_3a32d0;
        case 0x3a32d4u: goto label_3a32d4;
        case 0x3a32d8u: goto label_3a32d8;
        case 0x3a32dcu: goto label_3a32dc;
        case 0x3a32e0u: goto label_3a32e0;
        case 0x3a32e4u: goto label_3a32e4;
        case 0x3a32e8u: goto label_3a32e8;
        case 0x3a32ecu: goto label_3a32ec;
        case 0x3a32f0u: goto label_3a32f0;
        case 0x3a32f4u: goto label_3a32f4;
        case 0x3a32f8u: goto label_3a32f8;
        case 0x3a32fcu: goto label_3a32fc;
        case 0x3a3300u: goto label_3a3300;
        case 0x3a3304u: goto label_3a3304;
        case 0x3a3308u: goto label_3a3308;
        case 0x3a330cu: goto label_3a330c;
        case 0x3a3310u: goto label_3a3310;
        case 0x3a3314u: goto label_3a3314;
        case 0x3a3318u: goto label_3a3318;
        case 0x3a331cu: goto label_3a331c;
        case 0x3a3320u: goto label_3a3320;
        case 0x3a3324u: goto label_3a3324;
        case 0x3a3328u: goto label_3a3328;
        case 0x3a332cu: goto label_3a332c;
        case 0x3a3330u: goto label_3a3330;
        case 0x3a3334u: goto label_3a3334;
        case 0x3a3338u: goto label_3a3338;
        case 0x3a333cu: goto label_3a333c;
        case 0x3a3340u: goto label_3a3340;
        case 0x3a3344u: goto label_3a3344;
        case 0x3a3348u: goto label_3a3348;
        case 0x3a334cu: goto label_3a334c;
        case 0x3a3350u: goto label_3a3350;
        case 0x3a3354u: goto label_3a3354;
        case 0x3a3358u: goto label_3a3358;
        case 0x3a335cu: goto label_3a335c;
        case 0x3a3360u: goto label_3a3360;
        case 0x3a3364u: goto label_3a3364;
        case 0x3a3368u: goto label_3a3368;
        case 0x3a336cu: goto label_3a336c;
        case 0x3a3370u: goto label_3a3370;
        case 0x3a3374u: goto label_3a3374;
        case 0x3a3378u: goto label_3a3378;
        case 0x3a337cu: goto label_3a337c;
        case 0x3a3380u: goto label_3a3380;
        case 0x3a3384u: goto label_3a3384;
        case 0x3a3388u: goto label_3a3388;
        case 0x3a338cu: goto label_3a338c;
        case 0x3a3390u: goto label_3a3390;
        case 0x3a3394u: goto label_3a3394;
        case 0x3a3398u: goto label_3a3398;
        case 0x3a339cu: goto label_3a339c;
        case 0x3a33a0u: goto label_3a33a0;
        case 0x3a33a4u: goto label_3a33a4;
        case 0x3a33a8u: goto label_3a33a8;
        case 0x3a33acu: goto label_3a33ac;
        case 0x3a33b0u: goto label_3a33b0;
        case 0x3a33b4u: goto label_3a33b4;
        case 0x3a33b8u: goto label_3a33b8;
        case 0x3a33bcu: goto label_3a33bc;
        case 0x3a33c0u: goto label_3a33c0;
        case 0x3a33c4u: goto label_3a33c4;
        case 0x3a33c8u: goto label_3a33c8;
        case 0x3a33ccu: goto label_3a33cc;
        case 0x3a33d0u: goto label_3a33d0;
        case 0x3a33d4u: goto label_3a33d4;
        case 0x3a33d8u: goto label_3a33d8;
        case 0x3a33dcu: goto label_3a33dc;
        case 0x3a33e0u: goto label_3a33e0;
        case 0x3a33e4u: goto label_3a33e4;
        case 0x3a33e8u: goto label_3a33e8;
        case 0x3a33ecu: goto label_3a33ec;
        case 0x3a33f0u: goto label_3a33f0;
        case 0x3a33f4u: goto label_3a33f4;
        case 0x3a33f8u: goto label_3a33f8;
        case 0x3a33fcu: goto label_3a33fc;
        case 0x3a3400u: goto label_3a3400;
        case 0x3a3404u: goto label_3a3404;
        case 0x3a3408u: goto label_3a3408;
        case 0x3a340cu: goto label_3a340c;
        case 0x3a3410u: goto label_3a3410;
        case 0x3a3414u: goto label_3a3414;
        case 0x3a3418u: goto label_3a3418;
        case 0x3a341cu: goto label_3a341c;
        case 0x3a3420u: goto label_3a3420;
        case 0x3a3424u: goto label_3a3424;
        case 0x3a3428u: goto label_3a3428;
        case 0x3a342cu: goto label_3a342c;
        case 0x3a3430u: goto label_3a3430;
        case 0x3a3434u: goto label_3a3434;
        case 0x3a3438u: goto label_3a3438;
        case 0x3a343cu: goto label_3a343c;
        default: break;
    }

    ctx->pc = 0x3a3040u;

label_3a3040:
    // 0x3a3040: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a3040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3a3044:
    // 0x3a3044: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a3044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a3048:
    // 0x3a3048: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a3048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a304c:
    // 0x3a304c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3a3050:
    // 0x3a3050: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a3050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3a3054:
    // 0x3a3054: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a3054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a3058:
    // 0x3a3058: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a3058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a305c:
    // 0x3a305c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a3060:
    // 0x3a3060: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a3060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3064:
    // 0x3a3064: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a3064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a3068:
    // 0x3a3068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a3068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a306c:
    // 0x3a306c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a3070:
    // 0x3a3070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a3074:
    // 0x3a3074: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3a3074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a3078:
    // 0x3a3078: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x3a3078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_3a307c:
    // 0x3a307c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a3080:
    // 0x3a3080: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3a3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3a3084:
    // 0x3a3084: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a3084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a3088:
    // 0x3a3088: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x3a3088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_3a308c:
    // 0x3a308c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3a308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a3090:
    // 0x3a3090: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a3090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a3094:
    // 0x3a3094: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a3094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3a3098:
    // 0x3a3098: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3a3098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a309c:
    // 0x3a309c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a309cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a30a0:
    // 0x3a30a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a30a4:
    // 0x3a30a4: 0xc0fe54c  jal         func_3F9530
label_3a30a8:
    if (ctx->pc == 0x3A30A8u) {
        ctx->pc = 0x3A30A8u;
            // 0x3a30a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3A30ACu;
        goto label_3a30ac;
    }
    ctx->pc = 0x3A30A4u;
    SET_GPR_U32(ctx, 31, 0x3A30ACu);
    ctx->pc = 0x3A30A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A30A4u;
            // 0x3a30a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A30ACu; }
        if (ctx->pc != 0x3A30ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A30ACu; }
        if (ctx->pc != 0x3A30ACu) { return; }
    }
    ctx->pc = 0x3A30ACu;
label_3a30ac:
    // 0x3a30ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3a30acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3a30b0:
    // 0x3a30b0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3a30b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3a30b4:
    // 0x3a30b4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3a30b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a30b8:
    // 0x3a30b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a30b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a30bc:
    // 0x3a30bc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a30c0:
    // 0x3a30c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a30c4:
    // 0x3a30c4: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x3a30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
label_3a30c8:
    // 0x3a30c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3a30cc:
    // 0x3a30cc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3a30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3a30d0:
    // 0x3a30d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a30d4:
    // 0x3a30d4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a30d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a30d8:
    // 0x3a30d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3a30d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a30dc:
    // 0x3a30dc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a30e0:
    // 0x3a30e0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3a30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3a30e4:
    // 0x3a30e4: 0xc0fe54c  jal         func_3F9530
label_3a30e8:
    if (ctx->pc == 0x3A30E8u) {
        ctx->pc = 0x3A30E8u;
            // 0x3a30e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A30ECu;
        goto label_3a30ec;
    }
    ctx->pc = 0x3A30E4u;
    SET_GPR_U32(ctx, 31, 0x3A30ECu);
    ctx->pc = 0x3A30E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A30E4u;
            // 0x3a30e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A30ECu; }
        if (ctx->pc != 0x3A30ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A30ECu; }
        if (ctx->pc != 0x3A30ECu) { return; }
    }
    ctx->pc = 0x3A30ECu;
label_3a30ec:
    // 0x3a30ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a30ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a30f0:
    // 0x3a30f0: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_3a30f4:
    if (ctx->pc == 0x3A30F4u) {
        ctx->pc = 0x3A30F8u;
        goto label_3a30f8;
    }
    ctx->pc = 0x3A30F0u;
    {
        const bool branch_taken_0x3a30f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a30f0) {
            ctx->pc = 0x3A3178u;
            goto label_3a3178;
        }
    }
    ctx->pc = 0x3A30F8u;
label_3a30f8:
    // 0x3a30f8: 0x8eb10034  lw          $s1, 0x34($s5)
    ctx->pc = 0x3a30f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a30fc:
    // 0x3a30fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a3100:
    // 0x3a3100: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3a3100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a3104:
    // 0x3a3104: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a3108:
    // 0x3a3108: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a3108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a310c:
    // 0x3a310c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a310cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a3110:
    // 0x3a3110: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3a3110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3a3114:
    // 0x3a3114: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x3a3114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
label_3a3118:
    // 0x3a3118: 0xae46001c  sw          $a2, 0x1C($s2)
    ctx->pc = 0x3a3118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 6));
label_3a311c:
    // 0x3a311c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3a311cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3a3120:
    // 0x3a3120: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3a3120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3a3124:
    // 0x3a3124: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3a3124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3a3128:
    // 0x3a3128: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a3128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a312c:
    // 0x3a312c: 0xc0fe54c  jal         func_3F9530
label_3a3130:
    if (ctx->pc == 0x3A3130u) {
        ctx->pc = 0x3A3130u;
            // 0x3a3130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3134u;
        goto label_3a3134;
    }
    ctx->pc = 0x3A312Cu;
    SET_GPR_U32(ctx, 31, 0x3A3134u);
    ctx->pc = 0x3A3130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A312Cu;
            // 0x3a3130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3134u; }
        if (ctx->pc != 0x3A3134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3134u; }
        if (ctx->pc != 0x3A3134u) { return; }
    }
    ctx->pc = 0x3A3134u;
label_3a3134:
    // 0x3a3134: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3a3134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3a3138:
    // 0x3a3138: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a3138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a313c:
    // 0x3a313c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3a313cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3a3140:
    // 0x3a3140: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x3a3140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a3144:
    // 0x3a3144: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3a3144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3a3148:
    // 0x3a3148: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x3a3148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
label_3a314c:
    // 0x3a314c: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3a314cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_3a3150:
    // 0x3a3150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3154:
    // 0x3a3154: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a3154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3a3158:
    // 0x3a3158: 0x24052800  addiu       $a1, $zero, 0x2800
    ctx->pc = 0x3a3158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
label_3a315c:
    // 0x3a315c: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x3a315cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_3a3160:
    // 0x3a3160: 0xae450034  sw          $a1, 0x34($s2)
    ctx->pc = 0x3a3160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 5));
label_3a3164:
    // 0x3a3164: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x3a3164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_3a3168:
    // 0x3a3168: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a3168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a316c:
    // 0x3a316c: 0xc0fe54c  jal         func_3F9530
label_3a3170:
    if (ctx->pc == 0x3A3170u) {
        ctx->pc = 0x3A3170u;
            // 0x3a3170: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3A3174u;
        goto label_3a3174;
    }
    ctx->pc = 0x3A316Cu;
    SET_GPR_U32(ctx, 31, 0x3A3174u);
    ctx->pc = 0x3A3170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A316Cu;
            // 0x3a3170: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3174u; }
        if (ctx->pc != 0x3A3174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3174u; }
        if (ctx->pc != 0x3A3174u) { return; }
    }
    ctx->pc = 0x3A3174u;
label_3a3174:
    // 0x3a3174: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x3a3174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_3a3178:
    // 0x3a3178: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a3178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a317c:
    // 0x3a317c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a317cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a3180:
    // 0x3a3180: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x3a3180u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_3a3184:
    // 0x3a3184: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a3184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a3188:
    // 0x3a3188: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_3a318c:
    if (ctx->pc == 0x3A318Cu) {
        ctx->pc = 0x3A318Cu;
            // 0x3a318c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A3190u;
        goto label_3a3190;
    }
    ctx->pc = 0x3A3188u;
    {
        const bool branch_taken_0x3a3188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3188u;
            // 0x3a318c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3188) {
            ctx->pc = 0x3A30DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a30dc;
        }
    }
    ctx->pc = 0x3A3190u;
label_3a3190:
    // 0x3a3190: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x3a3190u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a3194:
    // 0x3a3194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a3194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3198:
    // 0x3a3198: 0x8fb600e0  lw          $s6, 0xE0($sp)
    ctx->pc = 0x3a3198u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a319c:
    // 0x3a319c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a319cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a31a0:
    // 0x3a31a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3a31a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a31a4:
    // 0x3a31a4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3a31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3a31a8:
    // 0x3a31a8: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x3a31a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a31ac:
    // 0x3a31ac: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3a31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3a31b0:
    // 0x3a31b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a31b4:
    // 0x3a31b4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3a31b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_3a31b8:
    // 0x3a31b8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_3a31bc:
    if (ctx->pc == 0x3A31BCu) {
        ctx->pc = 0x3A31BCu;
            // 0x3a31bc: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->pc = 0x3A31C0u;
        goto label_3a31c0;
    }
    ctx->pc = 0x3A31B8u;
    {
        const bool branch_taken_0x3a31b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A31BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A31B8u;
            // 0x3a31bc: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31b8) {
            ctx->pc = 0x3A31E8u;
            goto label_3a31e8;
        }
    }
    ctx->pc = 0x3A31C0u;
label_3a31c0:
    // 0x3a31c0: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x3a31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_3a31c4:
    // 0x3a31c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a31c8:
    if (ctx->pc == 0x3A31C8u) {
        ctx->pc = 0x3A31CCu;
        goto label_3a31cc;
    }
    ctx->pc = 0x3A31C4u;
    {
        const bool branch_taken_0x3a31c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a31c4) {
            ctx->pc = 0x3A31D8u;
            goto label_3a31d8;
        }
    }
    ctx->pc = 0x3A31CCu;
label_3a31cc:
    // 0x3a31cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a31d0:
    if (ctx->pc == 0x3A31D0u) {
        ctx->pc = 0x3A31D0u;
            // 0x3a31d0: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A31D4u;
        goto label_3a31d4;
    }
    ctx->pc = 0x3A31CCu;
    {
        const bool branch_taken_0x3a31cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A31D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A31CCu;
            // 0x3a31d0: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31cc) {
            ctx->pc = 0x3A31F8u;
            goto label_3a31f8;
        }
    }
    ctx->pc = 0x3A31D4u;
label_3a31d4:
    // 0x3a31d4: 0x0  nop
    ctx->pc = 0x3a31d4u;
    // NOP
label_3a31d8:
    // 0x3a31d8: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x3a31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_3a31dc:
    // 0x3a31dc: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a31dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a31e0:
    // 0x3a31e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a31e4:
    if (ctx->pc == 0x3A31E4u) {
        ctx->pc = 0x3A31E4u;
            // 0x3a31e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A31E8u;
        goto label_3a31e8;
    }
    ctx->pc = 0x3A31E0u;
    {
        const bool branch_taken_0x3a31e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A31E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A31E0u;
            // 0x3a31e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31e0) {
            ctx->pc = 0x3A31F8u;
            goto label_3a31f8;
        }
    }
    ctx->pc = 0x3A31E8u;
label_3a31e8:
    // 0x3a31e8: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x3a31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3a31ec:
    // 0x3a31ec: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a31ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a31f0:
    // 0x3a31f0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3a31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3a31f4:
    // 0x3a31f4: 0x0  nop
    ctx->pc = 0x3a31f4u;
    // NOP
label_3a31f8:
    // 0x3a31f8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a31fc:
    // 0x3a31fc: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_3a3200:
    if (ctx->pc == 0x3A3200u) {
        ctx->pc = 0x3A3204u;
        goto label_3a3204;
    }
    ctx->pc = 0x3A31FCu;
    {
        const bool branch_taken_0x3a31fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a31fc) {
            ctx->pc = 0x3A3228u;
            goto label_3a3228;
        }
    }
    ctx->pc = 0x3A3204u;
label_3a3204:
    // 0x3a3204: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x3a3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_3a3208:
    // 0x3a3208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a320c:
    if (ctx->pc == 0x3A320Cu) {
        ctx->pc = 0x3A3210u;
        goto label_3a3210;
    }
    ctx->pc = 0x3A3208u;
    {
        const bool branch_taken_0x3a3208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3208) {
            ctx->pc = 0x3A3218u;
            goto label_3a3218;
        }
    }
    ctx->pc = 0x3A3210u;
label_3a3210:
    // 0x3a3210: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a3214:
    if (ctx->pc == 0x3A3214u) {
        ctx->pc = 0x3A3214u;
            // 0x3a3214: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3218u;
        goto label_3a3218;
    }
    ctx->pc = 0x3A3210u;
    {
        const bool branch_taken_0x3a3210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3210u;
            // 0x3a3214: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3210) {
            ctx->pc = 0x3A3238u;
            goto label_3a3238;
        }
    }
    ctx->pc = 0x3A3218u;
label_3a3218:
    // 0x3a3218: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x3a3218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3a321c:
    // 0x3a321c: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x3a321cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
label_3a3220:
    // 0x3a3220: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a3224:
    if (ctx->pc == 0x3A3224u) {
        ctx->pc = 0x3A3224u;
            // 0x3a3224: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3228u;
        goto label_3a3228;
    }
    ctx->pc = 0x3A3220u;
    {
        const bool branch_taken_0x3a3220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3220u;
            // 0x3a3224: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3220) {
            ctx->pc = 0x3A3238u;
            goto label_3a3238;
        }
    }
    ctx->pc = 0x3A3228u;
label_3a3228:
    // 0x3a3228: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a322c:
    // 0x3a322c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a322cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a3230:
    // 0x3a3230: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3a3230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_3a3234:
    // 0x3a3234: 0x0  nop
    ctx->pc = 0x3a3234u;
    // NOP
label_3a3238:
    // 0x3a3238: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a323c:
    // 0x3a323c: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
label_3a3240:
    if (ctx->pc == 0x3A3240u) {
        ctx->pc = 0x3A3244u;
        goto label_3a3244;
    }
    ctx->pc = 0x3A323Cu;
    {
        const bool branch_taken_0x3a323c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a323c) {
            ctx->pc = 0x3A3290u;
            goto label_3a3290;
        }
    }
    ctx->pc = 0x3A3244u;
label_3a3244:
    // 0x3a3244: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a3244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3248:
    // 0x3a3248: 0x1263000d  beq         $s3, $v1, . + 4 + (0xD << 2)
label_3a324c:
    if (ctx->pc == 0x3A324Cu) {
        ctx->pc = 0x3A3250u;
        goto label_3a3250;
    }
    ctx->pc = 0x3A3248u;
    {
        const bool branch_taken_0x3a3248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3248) {
            ctx->pc = 0x3A3280u;
            goto label_3a3280;
        }
    }
    ctx->pc = 0x3A3250u;
label_3a3250:
    // 0x3a3250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3254:
    // 0x3a3254: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_3a3258:
    if (ctx->pc == 0x3A3258u) {
        ctx->pc = 0x3A325Cu;
        goto label_3a325c;
    }
    ctx->pc = 0x3A3254u;
    {
        const bool branch_taken_0x3a3254 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a3254) {
            ctx->pc = 0x3A3278u;
            goto label_3a3278;
        }
    }
    ctx->pc = 0x3A325Cu;
label_3a325c:
    // 0x3a325c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3a3260:
    if (ctx->pc == 0x3A3260u) {
        ctx->pc = 0x3A3264u;
        goto label_3a3264;
    }
    ctx->pc = 0x3A325Cu;
    {
        const bool branch_taken_0x3a325c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a325c) {
            ctx->pc = 0x3A3270u;
            goto label_3a3270;
        }
    }
    ctx->pc = 0x3A3264u;
label_3a3264:
    // 0x3a3264: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a3268:
    if (ctx->pc == 0x3A3268u) {
        ctx->pc = 0x3A326Cu;
        goto label_3a326c;
    }
    ctx->pc = 0x3A3264u;
    {
        const bool branch_taken_0x3a3264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3264) {
            ctx->pc = 0x3A3298u;
            goto label_3a3298;
        }
    }
    ctx->pc = 0x3A326Cu;
label_3a326c:
    // 0x3a326c: 0x0  nop
    ctx->pc = 0x3a326cu;
    // NOP
label_3a3270:
    // 0x3a3270: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a3274:
    if (ctx->pc == 0x3A3274u) {
        ctx->pc = 0x3A3274u;
            // 0x3a3274: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3A3278u;
        goto label_3a3278;
    }
    ctx->pc = 0x3A3270u;
    {
        const bool branch_taken_0x3a3270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3270u;
            // 0x3a3274: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3270) {
            ctx->pc = 0x3A3298u;
            goto label_3a3298;
        }
    }
    ctx->pc = 0x3A3278u;
label_3a3278:
    // 0x3a3278: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a327c:
    if (ctx->pc == 0x3A327Cu) {
        ctx->pc = 0x3A327Cu;
            // 0x3a327c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3A3280u;
        goto label_3a3280;
    }
    ctx->pc = 0x3A3278u;
    {
        const bool branch_taken_0x3a3278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3278u;
            // 0x3a327c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3278) {
            ctx->pc = 0x3A3298u;
            goto label_3a3298;
        }
    }
    ctx->pc = 0x3A3280u;
label_3a3280:
    // 0x3a3280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3284:
    // 0x3a3284: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a3288:
    if (ctx->pc == 0x3A3288u) {
        ctx->pc = 0x3A3288u;
            // 0x3a3288: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A328Cu;
        goto label_3a328c;
    }
    ctx->pc = 0x3A3284u;
    {
        const bool branch_taken_0x3a3284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3284u;
            // 0x3a3288: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3284) {
            ctx->pc = 0x3A3298u;
            goto label_3a3298;
        }
    }
    ctx->pc = 0x3A328Cu;
label_3a328c:
    // 0x3a328c: 0x0  nop
    ctx->pc = 0x3a328cu;
    // NOP
label_3a3290:
    // 0x3a3290: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3a3290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3a3294:
    // 0x3a3294: 0x0  nop
    ctx->pc = 0x3a3294u;
    // NOP
label_3a3298:
    // 0x3a3298: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a3298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a329c:
    // 0x3a329c: 0x8c4267e8  lw          $v0, 0x67E8($v0)
    ctx->pc = 0x3a329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
label_3a32a0:
    // 0x3a32a0: 0x40f809  jalr        $v0
label_3a32a4:
    if (ctx->pc == 0x3A32A4u) {
        ctx->pc = 0x3A32A8u;
        goto label_3a32a8;
    }
    ctx->pc = 0x3A32A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A32A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A32A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A32A8u; }
            if (ctx->pc != 0x3A32A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A32A8u;
label_3a32a8:
    // 0x3a32a8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3a32a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3a32ac:
    // 0x3a32ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a32acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a32b0:
    // 0x3a32b0: 0x8c6664a8  lw          $a2, 0x64A8($v1)
    ctx->pc = 0x3a32b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25768)));
label_3a32b4:
    // 0x3a32b4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3a32b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a32b8:
    // 0x3a32b8: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3a32b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_3a32bc:
    // 0x3a32bc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_3a32c0:
    // 0x3a32c0: 0x24632b90  addiu       $v1, $v1, 0x2B90
    ctx->pc = 0x3a32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11152));
label_3a32c4:
    // 0x3a32c4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3a32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3a32c8:
    // 0x3a32c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3a32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a32cc:
    // 0x3a32cc: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x3a32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_3a32d0:
    // 0x3a32d0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3a32d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_3a32d4:
    // 0x3a32d4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x3a32d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_3a32d8:
    // 0x3a32d8: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x3a32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_3a32dc:
    // 0x3a32dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3a32dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3a32e0:
    // 0x3a32e0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a32e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a32e4:
    // 0x3a32e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a32e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a32e8:
    // 0x3a32e8: 0x320f809  jalr        $t9
label_3a32ec:
    if (ctx->pc == 0x3A32ECu) {
        ctx->pc = 0x3A32ECu;
            // 0x3a32ec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A32F0u;
        goto label_3a32f0;
    }
    ctx->pc = 0x3A32E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A32F0u);
        ctx->pc = 0x3A32ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A32E8u;
            // 0x3a32ec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A32F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A32F0u; }
            if (ctx->pc != 0x3A32F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A32F0u;
label_3a32f0:
    // 0x3a32f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a32f4:
    // 0x3a32f4: 0xa3c2001c  sb          $v0, 0x1C($fp)
    ctx->pc = 0x3a32f4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 28), (uint8_t)GPR_U32(ctx, 2));
label_3a32f8:
    // 0x3a32f8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3a32f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3a32fc:
    // 0x3a32fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a32fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a3300:
    // 0x3a3300: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a3300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a3304:
    // 0x3a3304: 0x320f809  jalr        $t9
label_3a3308:
    if (ctx->pc == 0x3A3308u) {
        ctx->pc = 0x3A330Cu;
        goto label_3a330c;
    }
    ctx->pc = 0x3A3304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A330Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A330Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A330Cu; }
            if (ctx->pc != 0x3A330Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A330Cu;
label_3a330c:
    // 0x3a330c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3a330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a3310:
    // 0x3a3310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a3310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a3314:
    // 0x3a3314: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x3a3314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_3a3318:
    // 0x3a3318: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x3a3318u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_3a331c:
    // 0x3a331c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3a331cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3a3320:
    // 0x3a3320: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x3a3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_3a3324:
    // 0x3a3324: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3a3324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3a3328:
    // 0x3a3328: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x3a3328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a332c:
    // 0x3a332c: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_3a3330:
    if (ctx->pc == 0x3A3330u) {
        ctx->pc = 0x3A3330u;
            // 0x3a3330: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A3334u;
        goto label_3a3334;
    }
    ctx->pc = 0x3A332Cu;
    {
        const bool branch_taken_0x3a332c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A332Cu;
            // 0x3a3330: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a332c) {
            ctx->pc = 0x3A31A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a31a4;
        }
    }
    ctx->pc = 0x3A3334u;
label_3a3334:
    // 0x3a3334: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x3a3334u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a3338:
    // 0x3a3338: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a333c:
    // 0x3a333c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a333cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3340:
    // 0x3a3340: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a3340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a3344:
    // 0x3a3344: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a3344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a3348:
    // 0x3a3348: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a3348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a334c:
    // 0x3a334c: 0x320f809  jalr        $t9
label_3a3350:
    if (ctx->pc == 0x3A3350u) {
        ctx->pc = 0x3A3350u;
            // 0x3a3350: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->pc = 0x3A3354u;
        goto label_3a3354;
    }
    ctx->pc = 0x3A334Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A3354u);
        ctx->pc = 0x3A3350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A334Cu;
            // 0x3a3350: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A3354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A3354u; }
            if (ctx->pc != 0x3A3354u) { return; }
        }
        }
    }
    ctx->pc = 0x3A3354u;
label_3a3354:
    // 0x3a3354: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
label_3a3358:
    if (ctx->pc == 0x3A3358u) {
        ctx->pc = 0x3A335Cu;
        goto label_3a335c;
    }
    ctx->pc = 0x3A3354u;
    {
        const bool branch_taken_0x3a3354 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x3a3354) {
            ctx->pc = 0x3A3360u;
            goto label_3a3360;
        }
    }
    ctx->pc = 0x3A335Cu;
label_3a335c:
    // 0x3a335c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a335cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a3360:
    // 0x3a3360: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a3360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a3364:
    // 0x3a3364: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a3364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a3368:
    // 0x3a3368: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a336c:
    if (ctx->pc == 0x3A336Cu) {
        ctx->pc = 0x3A336Cu;
            // 0x3a336c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A3370u;
        goto label_3a3370;
    }
    ctx->pc = 0x3A3368u;
    {
        const bool branch_taken_0x3a3368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A336Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3368u;
            // 0x3a336c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3368) {
            ctx->pc = 0x3A3340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a3340;
        }
    }
    ctx->pc = 0x3A3370u;
label_3a3370:
    // 0x3a3370: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x3a3370u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a3374:
    // 0x3a3374: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3378:
    // 0x3a3378: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a3378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a337c:
    // 0x3a337c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a3380:
    if (ctx->pc == 0x3A3380u) {
        ctx->pc = 0x3A3384u;
        goto label_3a3384;
    }
    ctx->pc = 0x3A337Cu;
    {
        const bool branch_taken_0x3a337c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a337c) {
            ctx->pc = 0x3A3398u;
            goto label_3a3398;
        }
    }
    ctx->pc = 0x3A3384u;
label_3a3384:
    // 0x3a3384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a3384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a3388:
    // 0x3a3388: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a3388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a338c:
    // 0x3a338c: 0x320f809  jalr        $t9
label_3a3390:
    if (ctx->pc == 0x3A3390u) {
        ctx->pc = 0x3A3390u;
            // 0x3a3390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A3394u;
        goto label_3a3394;
    }
    ctx->pc = 0x3A338Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A3394u);
        ctx->pc = 0x3A3390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A338Cu;
            // 0x3a3390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A3394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A3394u; }
            if (ctx->pc != 0x3A3394u) { return; }
        }
        }
    }
    ctx->pc = 0x3A3394u;
label_3a3394:
    // 0x3a3394: 0x0  nop
    ctx->pc = 0x3a3394u;
    // NOP
label_3a3398:
    // 0x3a3398: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a3398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a339c:
    // 0x3a339c: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a339cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a33a0:
    // 0x3a33a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a33a4:
    if (ctx->pc == 0x3A33A4u) {
        ctx->pc = 0x3A33A4u;
            // 0x3a33a4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A33A8u;
        goto label_3a33a8;
    }
    ctx->pc = 0x3A33A0u;
    {
        const bool branch_taken_0x3a33a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A33A0u;
            // 0x3a33a4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a33a0) {
            ctx->pc = 0x3A3378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a3378;
        }
    }
    ctx->pc = 0x3A33A8u;
label_3a33a8:
    // 0x3a33a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a33a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a33ac:
    // 0x3a33ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3a33acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a33b0:
    // 0x3a33b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a33b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a33b4:
    // 0x3a33b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a33b8:
    if (ctx->pc == 0x3A33B8u) {
        ctx->pc = 0x3A33BCu;
        goto label_3a33bc;
    }
    ctx->pc = 0x3A33B4u;
    {
        const bool branch_taken_0x3a33b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a33b4) {
            ctx->pc = 0x3A33D0u;
            goto label_3a33d0;
        }
    }
    ctx->pc = 0x3A33BCu;
label_3a33bc:
    // 0x3a33bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a33bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a33c0:
    // 0x3a33c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a33c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a33c4:
    // 0x3a33c4: 0x320f809  jalr        $t9
label_3a33c8:
    if (ctx->pc == 0x3A33C8u) {
        ctx->pc = 0x3A33C8u;
            // 0x3a33c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A33CCu;
        goto label_3a33cc;
    }
    ctx->pc = 0x3A33C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A33CCu);
        ctx->pc = 0x3A33C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A33C4u;
            // 0x3a33c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A33CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A33CCu; }
            if (ctx->pc != 0x3A33CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A33CCu;
label_3a33cc:
    // 0x3a33cc: 0x0  nop
    ctx->pc = 0x3a33ccu;
    // NOP
label_3a33d0:
    // 0x3a33d0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3a33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a33d4:
    // 0x3a33d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a33d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a33d8:
    // 0x3a33d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a33dc:
    // 0x3a33dc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a33e0:
    // 0x3a33e0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a33e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a33e4:
    // 0x3a33e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a33e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a33e8:
    // 0x3a33e8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_3a33ec:
    if (ctx->pc == 0x3A33ECu) {
        ctx->pc = 0x3A33ECu;
            // 0x3a33ec: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3A33F0u;
        goto label_3a33f0;
    }
    ctx->pc = 0x3A33E8u;
    {
        const bool branch_taken_0x3a33e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a33e8) {
            ctx->pc = 0x3A33ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A33E8u;
            // 0x3a33ec: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A33B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a33b0;
        }
    }
    ctx->pc = 0x3A33F0u;
label_3a33f0:
    // 0x3a33f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3a33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a33f4:
    // 0x3a33f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a33f8:
    if (ctx->pc == 0x3A33F8u) {
        ctx->pc = 0x3A33F8u;
            // 0x3a33f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A33FCu;
        goto label_3a33fc;
    }
    ctx->pc = 0x3A33F4u;
    {
        const bool branch_taken_0x3a33f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a33f4) {
            ctx->pc = 0x3A33F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A33F4u;
            // 0x3a33f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A340Cu;
            goto label_3a340c;
        }
    }
    ctx->pc = 0x3A33FCu;
label_3a33fc:
    // 0x3a33fc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a33fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a3400:
    // 0x3a3400: 0xc0fe48c  jal         func_3F9230
label_3a3404:
    if (ctx->pc == 0x3A3404u) {
        ctx->pc = 0x3A3404u;
            // 0x3a3404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3408u;
        goto label_3a3408;
    }
    ctx->pc = 0x3A3400u;
    SET_GPR_U32(ctx, 31, 0x3A3408u);
    ctx->pc = 0x3A3404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3400u;
            // 0x3a3404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3408u; }
        if (ctx->pc != 0x3A3408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3408u; }
        if (ctx->pc != 0x3A3408u) { return; }
    }
    ctx->pc = 0x3A3408u;
label_3a3408:
    // 0x3a3408: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a3408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a340c:
    // 0x3a340c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a3410:
    // 0x3a3410: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a3410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a3414:
    // 0x3a3414: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a3414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a3418:
    // 0x3a3418: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a3418u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a341c:
    // 0x3a341c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a341cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a3420:
    // 0x3a3420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a3420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a3424:
    // 0x3a3424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a3424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a3428:
    // 0x3a3428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a3428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a342c:
    // 0x3a342c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a342cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3430:
    // 0x3a3430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3434:
    // 0x3a3434: 0x3e00008  jr          $ra
label_3a3438:
    if (ctx->pc == 0x3A3438u) {
        ctx->pc = 0x3A3438u;
            // 0x3a3438: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3A343Cu;
        goto label_3a343c;
    }
    ctx->pc = 0x3A3434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3434u;
            // 0x3a3438: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A343Cu;
label_3a343c:
    // 0x3a343c: 0x0  nop
    ctx->pc = 0x3a343cu;
    // NOP
}
