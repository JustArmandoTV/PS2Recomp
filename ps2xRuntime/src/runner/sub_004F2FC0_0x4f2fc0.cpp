#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F2FC0
// Address: 0x4f2fc0 - 0x4f3e10
void sub_004F2FC0_0x4f2fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2FC0_0x4f2fc0");
#endif

    switch (ctx->pc) {
        case 0x4f2fc0u: goto label_4f2fc0;
        case 0x4f2fc4u: goto label_4f2fc4;
        case 0x4f2fc8u: goto label_4f2fc8;
        case 0x4f2fccu: goto label_4f2fcc;
        case 0x4f2fd0u: goto label_4f2fd0;
        case 0x4f2fd4u: goto label_4f2fd4;
        case 0x4f2fd8u: goto label_4f2fd8;
        case 0x4f2fdcu: goto label_4f2fdc;
        case 0x4f2fe0u: goto label_4f2fe0;
        case 0x4f2fe4u: goto label_4f2fe4;
        case 0x4f2fe8u: goto label_4f2fe8;
        case 0x4f2fecu: goto label_4f2fec;
        case 0x4f2ff0u: goto label_4f2ff0;
        case 0x4f2ff4u: goto label_4f2ff4;
        case 0x4f2ff8u: goto label_4f2ff8;
        case 0x4f2ffcu: goto label_4f2ffc;
        case 0x4f3000u: goto label_4f3000;
        case 0x4f3004u: goto label_4f3004;
        case 0x4f3008u: goto label_4f3008;
        case 0x4f300cu: goto label_4f300c;
        case 0x4f3010u: goto label_4f3010;
        case 0x4f3014u: goto label_4f3014;
        case 0x4f3018u: goto label_4f3018;
        case 0x4f301cu: goto label_4f301c;
        case 0x4f3020u: goto label_4f3020;
        case 0x4f3024u: goto label_4f3024;
        case 0x4f3028u: goto label_4f3028;
        case 0x4f302cu: goto label_4f302c;
        case 0x4f3030u: goto label_4f3030;
        case 0x4f3034u: goto label_4f3034;
        case 0x4f3038u: goto label_4f3038;
        case 0x4f303cu: goto label_4f303c;
        case 0x4f3040u: goto label_4f3040;
        case 0x4f3044u: goto label_4f3044;
        case 0x4f3048u: goto label_4f3048;
        case 0x4f304cu: goto label_4f304c;
        case 0x4f3050u: goto label_4f3050;
        case 0x4f3054u: goto label_4f3054;
        case 0x4f3058u: goto label_4f3058;
        case 0x4f305cu: goto label_4f305c;
        case 0x4f3060u: goto label_4f3060;
        case 0x4f3064u: goto label_4f3064;
        case 0x4f3068u: goto label_4f3068;
        case 0x4f306cu: goto label_4f306c;
        case 0x4f3070u: goto label_4f3070;
        case 0x4f3074u: goto label_4f3074;
        case 0x4f3078u: goto label_4f3078;
        case 0x4f307cu: goto label_4f307c;
        case 0x4f3080u: goto label_4f3080;
        case 0x4f3084u: goto label_4f3084;
        case 0x4f3088u: goto label_4f3088;
        case 0x4f308cu: goto label_4f308c;
        case 0x4f3090u: goto label_4f3090;
        case 0x4f3094u: goto label_4f3094;
        case 0x4f3098u: goto label_4f3098;
        case 0x4f309cu: goto label_4f309c;
        case 0x4f30a0u: goto label_4f30a0;
        case 0x4f30a4u: goto label_4f30a4;
        case 0x4f30a8u: goto label_4f30a8;
        case 0x4f30acu: goto label_4f30ac;
        case 0x4f30b0u: goto label_4f30b0;
        case 0x4f30b4u: goto label_4f30b4;
        case 0x4f30b8u: goto label_4f30b8;
        case 0x4f30bcu: goto label_4f30bc;
        case 0x4f30c0u: goto label_4f30c0;
        case 0x4f30c4u: goto label_4f30c4;
        case 0x4f30c8u: goto label_4f30c8;
        case 0x4f30ccu: goto label_4f30cc;
        case 0x4f30d0u: goto label_4f30d0;
        case 0x4f30d4u: goto label_4f30d4;
        case 0x4f30d8u: goto label_4f30d8;
        case 0x4f30dcu: goto label_4f30dc;
        case 0x4f30e0u: goto label_4f30e0;
        case 0x4f30e4u: goto label_4f30e4;
        case 0x4f30e8u: goto label_4f30e8;
        case 0x4f30ecu: goto label_4f30ec;
        case 0x4f30f0u: goto label_4f30f0;
        case 0x4f30f4u: goto label_4f30f4;
        case 0x4f30f8u: goto label_4f30f8;
        case 0x4f30fcu: goto label_4f30fc;
        case 0x4f3100u: goto label_4f3100;
        case 0x4f3104u: goto label_4f3104;
        case 0x4f3108u: goto label_4f3108;
        case 0x4f310cu: goto label_4f310c;
        case 0x4f3110u: goto label_4f3110;
        case 0x4f3114u: goto label_4f3114;
        case 0x4f3118u: goto label_4f3118;
        case 0x4f311cu: goto label_4f311c;
        case 0x4f3120u: goto label_4f3120;
        case 0x4f3124u: goto label_4f3124;
        case 0x4f3128u: goto label_4f3128;
        case 0x4f312cu: goto label_4f312c;
        case 0x4f3130u: goto label_4f3130;
        case 0x4f3134u: goto label_4f3134;
        case 0x4f3138u: goto label_4f3138;
        case 0x4f313cu: goto label_4f313c;
        case 0x4f3140u: goto label_4f3140;
        case 0x4f3144u: goto label_4f3144;
        case 0x4f3148u: goto label_4f3148;
        case 0x4f314cu: goto label_4f314c;
        case 0x4f3150u: goto label_4f3150;
        case 0x4f3154u: goto label_4f3154;
        case 0x4f3158u: goto label_4f3158;
        case 0x4f315cu: goto label_4f315c;
        case 0x4f3160u: goto label_4f3160;
        case 0x4f3164u: goto label_4f3164;
        case 0x4f3168u: goto label_4f3168;
        case 0x4f316cu: goto label_4f316c;
        case 0x4f3170u: goto label_4f3170;
        case 0x4f3174u: goto label_4f3174;
        case 0x4f3178u: goto label_4f3178;
        case 0x4f317cu: goto label_4f317c;
        case 0x4f3180u: goto label_4f3180;
        case 0x4f3184u: goto label_4f3184;
        case 0x4f3188u: goto label_4f3188;
        case 0x4f318cu: goto label_4f318c;
        case 0x4f3190u: goto label_4f3190;
        case 0x4f3194u: goto label_4f3194;
        case 0x4f3198u: goto label_4f3198;
        case 0x4f319cu: goto label_4f319c;
        case 0x4f31a0u: goto label_4f31a0;
        case 0x4f31a4u: goto label_4f31a4;
        case 0x4f31a8u: goto label_4f31a8;
        case 0x4f31acu: goto label_4f31ac;
        case 0x4f31b0u: goto label_4f31b0;
        case 0x4f31b4u: goto label_4f31b4;
        case 0x4f31b8u: goto label_4f31b8;
        case 0x4f31bcu: goto label_4f31bc;
        case 0x4f31c0u: goto label_4f31c0;
        case 0x4f31c4u: goto label_4f31c4;
        case 0x4f31c8u: goto label_4f31c8;
        case 0x4f31ccu: goto label_4f31cc;
        case 0x4f31d0u: goto label_4f31d0;
        case 0x4f31d4u: goto label_4f31d4;
        case 0x4f31d8u: goto label_4f31d8;
        case 0x4f31dcu: goto label_4f31dc;
        case 0x4f31e0u: goto label_4f31e0;
        case 0x4f31e4u: goto label_4f31e4;
        case 0x4f31e8u: goto label_4f31e8;
        case 0x4f31ecu: goto label_4f31ec;
        case 0x4f31f0u: goto label_4f31f0;
        case 0x4f31f4u: goto label_4f31f4;
        case 0x4f31f8u: goto label_4f31f8;
        case 0x4f31fcu: goto label_4f31fc;
        case 0x4f3200u: goto label_4f3200;
        case 0x4f3204u: goto label_4f3204;
        case 0x4f3208u: goto label_4f3208;
        case 0x4f320cu: goto label_4f320c;
        case 0x4f3210u: goto label_4f3210;
        case 0x4f3214u: goto label_4f3214;
        case 0x4f3218u: goto label_4f3218;
        case 0x4f321cu: goto label_4f321c;
        case 0x4f3220u: goto label_4f3220;
        case 0x4f3224u: goto label_4f3224;
        case 0x4f3228u: goto label_4f3228;
        case 0x4f322cu: goto label_4f322c;
        case 0x4f3230u: goto label_4f3230;
        case 0x4f3234u: goto label_4f3234;
        case 0x4f3238u: goto label_4f3238;
        case 0x4f323cu: goto label_4f323c;
        case 0x4f3240u: goto label_4f3240;
        case 0x4f3244u: goto label_4f3244;
        case 0x4f3248u: goto label_4f3248;
        case 0x4f324cu: goto label_4f324c;
        case 0x4f3250u: goto label_4f3250;
        case 0x4f3254u: goto label_4f3254;
        case 0x4f3258u: goto label_4f3258;
        case 0x4f325cu: goto label_4f325c;
        case 0x4f3260u: goto label_4f3260;
        case 0x4f3264u: goto label_4f3264;
        case 0x4f3268u: goto label_4f3268;
        case 0x4f326cu: goto label_4f326c;
        case 0x4f3270u: goto label_4f3270;
        case 0x4f3274u: goto label_4f3274;
        case 0x4f3278u: goto label_4f3278;
        case 0x4f327cu: goto label_4f327c;
        case 0x4f3280u: goto label_4f3280;
        case 0x4f3284u: goto label_4f3284;
        case 0x4f3288u: goto label_4f3288;
        case 0x4f328cu: goto label_4f328c;
        case 0x4f3290u: goto label_4f3290;
        case 0x4f3294u: goto label_4f3294;
        case 0x4f3298u: goto label_4f3298;
        case 0x4f329cu: goto label_4f329c;
        case 0x4f32a0u: goto label_4f32a0;
        case 0x4f32a4u: goto label_4f32a4;
        case 0x4f32a8u: goto label_4f32a8;
        case 0x4f32acu: goto label_4f32ac;
        case 0x4f32b0u: goto label_4f32b0;
        case 0x4f32b4u: goto label_4f32b4;
        case 0x4f32b8u: goto label_4f32b8;
        case 0x4f32bcu: goto label_4f32bc;
        case 0x4f32c0u: goto label_4f32c0;
        case 0x4f32c4u: goto label_4f32c4;
        case 0x4f32c8u: goto label_4f32c8;
        case 0x4f32ccu: goto label_4f32cc;
        case 0x4f32d0u: goto label_4f32d0;
        case 0x4f32d4u: goto label_4f32d4;
        case 0x4f32d8u: goto label_4f32d8;
        case 0x4f32dcu: goto label_4f32dc;
        case 0x4f32e0u: goto label_4f32e0;
        case 0x4f32e4u: goto label_4f32e4;
        case 0x4f32e8u: goto label_4f32e8;
        case 0x4f32ecu: goto label_4f32ec;
        case 0x4f32f0u: goto label_4f32f0;
        case 0x4f32f4u: goto label_4f32f4;
        case 0x4f32f8u: goto label_4f32f8;
        case 0x4f32fcu: goto label_4f32fc;
        case 0x4f3300u: goto label_4f3300;
        case 0x4f3304u: goto label_4f3304;
        case 0x4f3308u: goto label_4f3308;
        case 0x4f330cu: goto label_4f330c;
        case 0x4f3310u: goto label_4f3310;
        case 0x4f3314u: goto label_4f3314;
        case 0x4f3318u: goto label_4f3318;
        case 0x4f331cu: goto label_4f331c;
        case 0x4f3320u: goto label_4f3320;
        case 0x4f3324u: goto label_4f3324;
        case 0x4f3328u: goto label_4f3328;
        case 0x4f332cu: goto label_4f332c;
        case 0x4f3330u: goto label_4f3330;
        case 0x4f3334u: goto label_4f3334;
        case 0x4f3338u: goto label_4f3338;
        case 0x4f333cu: goto label_4f333c;
        case 0x4f3340u: goto label_4f3340;
        case 0x4f3344u: goto label_4f3344;
        case 0x4f3348u: goto label_4f3348;
        case 0x4f334cu: goto label_4f334c;
        case 0x4f3350u: goto label_4f3350;
        case 0x4f3354u: goto label_4f3354;
        case 0x4f3358u: goto label_4f3358;
        case 0x4f335cu: goto label_4f335c;
        case 0x4f3360u: goto label_4f3360;
        case 0x4f3364u: goto label_4f3364;
        case 0x4f3368u: goto label_4f3368;
        case 0x4f336cu: goto label_4f336c;
        case 0x4f3370u: goto label_4f3370;
        case 0x4f3374u: goto label_4f3374;
        case 0x4f3378u: goto label_4f3378;
        case 0x4f337cu: goto label_4f337c;
        case 0x4f3380u: goto label_4f3380;
        case 0x4f3384u: goto label_4f3384;
        case 0x4f3388u: goto label_4f3388;
        case 0x4f338cu: goto label_4f338c;
        case 0x4f3390u: goto label_4f3390;
        case 0x4f3394u: goto label_4f3394;
        case 0x4f3398u: goto label_4f3398;
        case 0x4f339cu: goto label_4f339c;
        case 0x4f33a0u: goto label_4f33a0;
        case 0x4f33a4u: goto label_4f33a4;
        case 0x4f33a8u: goto label_4f33a8;
        case 0x4f33acu: goto label_4f33ac;
        case 0x4f33b0u: goto label_4f33b0;
        case 0x4f33b4u: goto label_4f33b4;
        case 0x4f33b8u: goto label_4f33b8;
        case 0x4f33bcu: goto label_4f33bc;
        case 0x4f33c0u: goto label_4f33c0;
        case 0x4f33c4u: goto label_4f33c4;
        case 0x4f33c8u: goto label_4f33c8;
        case 0x4f33ccu: goto label_4f33cc;
        case 0x4f33d0u: goto label_4f33d0;
        case 0x4f33d4u: goto label_4f33d4;
        case 0x4f33d8u: goto label_4f33d8;
        case 0x4f33dcu: goto label_4f33dc;
        case 0x4f33e0u: goto label_4f33e0;
        case 0x4f33e4u: goto label_4f33e4;
        case 0x4f33e8u: goto label_4f33e8;
        case 0x4f33ecu: goto label_4f33ec;
        case 0x4f33f0u: goto label_4f33f0;
        case 0x4f33f4u: goto label_4f33f4;
        case 0x4f33f8u: goto label_4f33f8;
        case 0x4f33fcu: goto label_4f33fc;
        case 0x4f3400u: goto label_4f3400;
        case 0x4f3404u: goto label_4f3404;
        case 0x4f3408u: goto label_4f3408;
        case 0x4f340cu: goto label_4f340c;
        case 0x4f3410u: goto label_4f3410;
        case 0x4f3414u: goto label_4f3414;
        case 0x4f3418u: goto label_4f3418;
        case 0x4f341cu: goto label_4f341c;
        case 0x4f3420u: goto label_4f3420;
        case 0x4f3424u: goto label_4f3424;
        case 0x4f3428u: goto label_4f3428;
        case 0x4f342cu: goto label_4f342c;
        case 0x4f3430u: goto label_4f3430;
        case 0x4f3434u: goto label_4f3434;
        case 0x4f3438u: goto label_4f3438;
        case 0x4f343cu: goto label_4f343c;
        case 0x4f3440u: goto label_4f3440;
        case 0x4f3444u: goto label_4f3444;
        case 0x4f3448u: goto label_4f3448;
        case 0x4f344cu: goto label_4f344c;
        case 0x4f3450u: goto label_4f3450;
        case 0x4f3454u: goto label_4f3454;
        case 0x4f3458u: goto label_4f3458;
        case 0x4f345cu: goto label_4f345c;
        case 0x4f3460u: goto label_4f3460;
        case 0x4f3464u: goto label_4f3464;
        case 0x4f3468u: goto label_4f3468;
        case 0x4f346cu: goto label_4f346c;
        case 0x4f3470u: goto label_4f3470;
        case 0x4f3474u: goto label_4f3474;
        case 0x4f3478u: goto label_4f3478;
        case 0x4f347cu: goto label_4f347c;
        case 0x4f3480u: goto label_4f3480;
        case 0x4f3484u: goto label_4f3484;
        case 0x4f3488u: goto label_4f3488;
        case 0x4f348cu: goto label_4f348c;
        case 0x4f3490u: goto label_4f3490;
        case 0x4f3494u: goto label_4f3494;
        case 0x4f3498u: goto label_4f3498;
        case 0x4f349cu: goto label_4f349c;
        case 0x4f34a0u: goto label_4f34a0;
        case 0x4f34a4u: goto label_4f34a4;
        case 0x4f34a8u: goto label_4f34a8;
        case 0x4f34acu: goto label_4f34ac;
        case 0x4f34b0u: goto label_4f34b0;
        case 0x4f34b4u: goto label_4f34b4;
        case 0x4f34b8u: goto label_4f34b8;
        case 0x4f34bcu: goto label_4f34bc;
        case 0x4f34c0u: goto label_4f34c0;
        case 0x4f34c4u: goto label_4f34c4;
        case 0x4f34c8u: goto label_4f34c8;
        case 0x4f34ccu: goto label_4f34cc;
        case 0x4f34d0u: goto label_4f34d0;
        case 0x4f34d4u: goto label_4f34d4;
        case 0x4f34d8u: goto label_4f34d8;
        case 0x4f34dcu: goto label_4f34dc;
        case 0x4f34e0u: goto label_4f34e0;
        case 0x4f34e4u: goto label_4f34e4;
        case 0x4f34e8u: goto label_4f34e8;
        case 0x4f34ecu: goto label_4f34ec;
        case 0x4f34f0u: goto label_4f34f0;
        case 0x4f34f4u: goto label_4f34f4;
        case 0x4f34f8u: goto label_4f34f8;
        case 0x4f34fcu: goto label_4f34fc;
        case 0x4f3500u: goto label_4f3500;
        case 0x4f3504u: goto label_4f3504;
        case 0x4f3508u: goto label_4f3508;
        case 0x4f350cu: goto label_4f350c;
        case 0x4f3510u: goto label_4f3510;
        case 0x4f3514u: goto label_4f3514;
        case 0x4f3518u: goto label_4f3518;
        case 0x4f351cu: goto label_4f351c;
        case 0x4f3520u: goto label_4f3520;
        case 0x4f3524u: goto label_4f3524;
        case 0x4f3528u: goto label_4f3528;
        case 0x4f352cu: goto label_4f352c;
        case 0x4f3530u: goto label_4f3530;
        case 0x4f3534u: goto label_4f3534;
        case 0x4f3538u: goto label_4f3538;
        case 0x4f353cu: goto label_4f353c;
        case 0x4f3540u: goto label_4f3540;
        case 0x4f3544u: goto label_4f3544;
        case 0x4f3548u: goto label_4f3548;
        case 0x4f354cu: goto label_4f354c;
        case 0x4f3550u: goto label_4f3550;
        case 0x4f3554u: goto label_4f3554;
        case 0x4f3558u: goto label_4f3558;
        case 0x4f355cu: goto label_4f355c;
        case 0x4f3560u: goto label_4f3560;
        case 0x4f3564u: goto label_4f3564;
        case 0x4f3568u: goto label_4f3568;
        case 0x4f356cu: goto label_4f356c;
        case 0x4f3570u: goto label_4f3570;
        case 0x4f3574u: goto label_4f3574;
        case 0x4f3578u: goto label_4f3578;
        case 0x4f357cu: goto label_4f357c;
        case 0x4f3580u: goto label_4f3580;
        case 0x4f3584u: goto label_4f3584;
        case 0x4f3588u: goto label_4f3588;
        case 0x4f358cu: goto label_4f358c;
        case 0x4f3590u: goto label_4f3590;
        case 0x4f3594u: goto label_4f3594;
        case 0x4f3598u: goto label_4f3598;
        case 0x4f359cu: goto label_4f359c;
        case 0x4f35a0u: goto label_4f35a0;
        case 0x4f35a4u: goto label_4f35a4;
        case 0x4f35a8u: goto label_4f35a8;
        case 0x4f35acu: goto label_4f35ac;
        case 0x4f35b0u: goto label_4f35b0;
        case 0x4f35b4u: goto label_4f35b4;
        case 0x4f35b8u: goto label_4f35b8;
        case 0x4f35bcu: goto label_4f35bc;
        case 0x4f35c0u: goto label_4f35c0;
        case 0x4f35c4u: goto label_4f35c4;
        case 0x4f35c8u: goto label_4f35c8;
        case 0x4f35ccu: goto label_4f35cc;
        case 0x4f35d0u: goto label_4f35d0;
        case 0x4f35d4u: goto label_4f35d4;
        case 0x4f35d8u: goto label_4f35d8;
        case 0x4f35dcu: goto label_4f35dc;
        case 0x4f35e0u: goto label_4f35e0;
        case 0x4f35e4u: goto label_4f35e4;
        case 0x4f35e8u: goto label_4f35e8;
        case 0x4f35ecu: goto label_4f35ec;
        case 0x4f35f0u: goto label_4f35f0;
        case 0x4f35f4u: goto label_4f35f4;
        case 0x4f35f8u: goto label_4f35f8;
        case 0x4f35fcu: goto label_4f35fc;
        case 0x4f3600u: goto label_4f3600;
        case 0x4f3604u: goto label_4f3604;
        case 0x4f3608u: goto label_4f3608;
        case 0x4f360cu: goto label_4f360c;
        case 0x4f3610u: goto label_4f3610;
        case 0x4f3614u: goto label_4f3614;
        case 0x4f3618u: goto label_4f3618;
        case 0x4f361cu: goto label_4f361c;
        case 0x4f3620u: goto label_4f3620;
        case 0x4f3624u: goto label_4f3624;
        case 0x4f3628u: goto label_4f3628;
        case 0x4f362cu: goto label_4f362c;
        case 0x4f3630u: goto label_4f3630;
        case 0x4f3634u: goto label_4f3634;
        case 0x4f3638u: goto label_4f3638;
        case 0x4f363cu: goto label_4f363c;
        case 0x4f3640u: goto label_4f3640;
        case 0x4f3644u: goto label_4f3644;
        case 0x4f3648u: goto label_4f3648;
        case 0x4f364cu: goto label_4f364c;
        case 0x4f3650u: goto label_4f3650;
        case 0x4f3654u: goto label_4f3654;
        case 0x4f3658u: goto label_4f3658;
        case 0x4f365cu: goto label_4f365c;
        case 0x4f3660u: goto label_4f3660;
        case 0x4f3664u: goto label_4f3664;
        case 0x4f3668u: goto label_4f3668;
        case 0x4f366cu: goto label_4f366c;
        case 0x4f3670u: goto label_4f3670;
        case 0x4f3674u: goto label_4f3674;
        case 0x4f3678u: goto label_4f3678;
        case 0x4f367cu: goto label_4f367c;
        case 0x4f3680u: goto label_4f3680;
        case 0x4f3684u: goto label_4f3684;
        case 0x4f3688u: goto label_4f3688;
        case 0x4f368cu: goto label_4f368c;
        case 0x4f3690u: goto label_4f3690;
        case 0x4f3694u: goto label_4f3694;
        case 0x4f3698u: goto label_4f3698;
        case 0x4f369cu: goto label_4f369c;
        case 0x4f36a0u: goto label_4f36a0;
        case 0x4f36a4u: goto label_4f36a4;
        case 0x4f36a8u: goto label_4f36a8;
        case 0x4f36acu: goto label_4f36ac;
        case 0x4f36b0u: goto label_4f36b0;
        case 0x4f36b4u: goto label_4f36b4;
        case 0x4f36b8u: goto label_4f36b8;
        case 0x4f36bcu: goto label_4f36bc;
        case 0x4f36c0u: goto label_4f36c0;
        case 0x4f36c4u: goto label_4f36c4;
        case 0x4f36c8u: goto label_4f36c8;
        case 0x4f36ccu: goto label_4f36cc;
        case 0x4f36d0u: goto label_4f36d0;
        case 0x4f36d4u: goto label_4f36d4;
        case 0x4f36d8u: goto label_4f36d8;
        case 0x4f36dcu: goto label_4f36dc;
        case 0x4f36e0u: goto label_4f36e0;
        case 0x4f36e4u: goto label_4f36e4;
        case 0x4f36e8u: goto label_4f36e8;
        case 0x4f36ecu: goto label_4f36ec;
        case 0x4f36f0u: goto label_4f36f0;
        case 0x4f36f4u: goto label_4f36f4;
        case 0x4f36f8u: goto label_4f36f8;
        case 0x4f36fcu: goto label_4f36fc;
        case 0x4f3700u: goto label_4f3700;
        case 0x4f3704u: goto label_4f3704;
        case 0x4f3708u: goto label_4f3708;
        case 0x4f370cu: goto label_4f370c;
        case 0x4f3710u: goto label_4f3710;
        case 0x4f3714u: goto label_4f3714;
        case 0x4f3718u: goto label_4f3718;
        case 0x4f371cu: goto label_4f371c;
        case 0x4f3720u: goto label_4f3720;
        case 0x4f3724u: goto label_4f3724;
        case 0x4f3728u: goto label_4f3728;
        case 0x4f372cu: goto label_4f372c;
        case 0x4f3730u: goto label_4f3730;
        case 0x4f3734u: goto label_4f3734;
        case 0x4f3738u: goto label_4f3738;
        case 0x4f373cu: goto label_4f373c;
        case 0x4f3740u: goto label_4f3740;
        case 0x4f3744u: goto label_4f3744;
        case 0x4f3748u: goto label_4f3748;
        case 0x4f374cu: goto label_4f374c;
        case 0x4f3750u: goto label_4f3750;
        case 0x4f3754u: goto label_4f3754;
        case 0x4f3758u: goto label_4f3758;
        case 0x4f375cu: goto label_4f375c;
        case 0x4f3760u: goto label_4f3760;
        case 0x4f3764u: goto label_4f3764;
        case 0x4f3768u: goto label_4f3768;
        case 0x4f376cu: goto label_4f376c;
        case 0x4f3770u: goto label_4f3770;
        case 0x4f3774u: goto label_4f3774;
        case 0x4f3778u: goto label_4f3778;
        case 0x4f377cu: goto label_4f377c;
        case 0x4f3780u: goto label_4f3780;
        case 0x4f3784u: goto label_4f3784;
        case 0x4f3788u: goto label_4f3788;
        case 0x4f378cu: goto label_4f378c;
        case 0x4f3790u: goto label_4f3790;
        case 0x4f3794u: goto label_4f3794;
        case 0x4f3798u: goto label_4f3798;
        case 0x4f379cu: goto label_4f379c;
        case 0x4f37a0u: goto label_4f37a0;
        case 0x4f37a4u: goto label_4f37a4;
        case 0x4f37a8u: goto label_4f37a8;
        case 0x4f37acu: goto label_4f37ac;
        case 0x4f37b0u: goto label_4f37b0;
        case 0x4f37b4u: goto label_4f37b4;
        case 0x4f37b8u: goto label_4f37b8;
        case 0x4f37bcu: goto label_4f37bc;
        case 0x4f37c0u: goto label_4f37c0;
        case 0x4f37c4u: goto label_4f37c4;
        case 0x4f37c8u: goto label_4f37c8;
        case 0x4f37ccu: goto label_4f37cc;
        case 0x4f37d0u: goto label_4f37d0;
        case 0x4f37d4u: goto label_4f37d4;
        case 0x4f37d8u: goto label_4f37d8;
        case 0x4f37dcu: goto label_4f37dc;
        case 0x4f37e0u: goto label_4f37e0;
        case 0x4f37e4u: goto label_4f37e4;
        case 0x4f37e8u: goto label_4f37e8;
        case 0x4f37ecu: goto label_4f37ec;
        case 0x4f37f0u: goto label_4f37f0;
        case 0x4f37f4u: goto label_4f37f4;
        case 0x4f37f8u: goto label_4f37f8;
        case 0x4f37fcu: goto label_4f37fc;
        case 0x4f3800u: goto label_4f3800;
        case 0x4f3804u: goto label_4f3804;
        case 0x4f3808u: goto label_4f3808;
        case 0x4f380cu: goto label_4f380c;
        case 0x4f3810u: goto label_4f3810;
        case 0x4f3814u: goto label_4f3814;
        case 0x4f3818u: goto label_4f3818;
        case 0x4f381cu: goto label_4f381c;
        case 0x4f3820u: goto label_4f3820;
        case 0x4f3824u: goto label_4f3824;
        case 0x4f3828u: goto label_4f3828;
        case 0x4f382cu: goto label_4f382c;
        case 0x4f3830u: goto label_4f3830;
        case 0x4f3834u: goto label_4f3834;
        case 0x4f3838u: goto label_4f3838;
        case 0x4f383cu: goto label_4f383c;
        case 0x4f3840u: goto label_4f3840;
        case 0x4f3844u: goto label_4f3844;
        case 0x4f3848u: goto label_4f3848;
        case 0x4f384cu: goto label_4f384c;
        case 0x4f3850u: goto label_4f3850;
        case 0x4f3854u: goto label_4f3854;
        case 0x4f3858u: goto label_4f3858;
        case 0x4f385cu: goto label_4f385c;
        case 0x4f3860u: goto label_4f3860;
        case 0x4f3864u: goto label_4f3864;
        case 0x4f3868u: goto label_4f3868;
        case 0x4f386cu: goto label_4f386c;
        case 0x4f3870u: goto label_4f3870;
        case 0x4f3874u: goto label_4f3874;
        case 0x4f3878u: goto label_4f3878;
        case 0x4f387cu: goto label_4f387c;
        case 0x4f3880u: goto label_4f3880;
        case 0x4f3884u: goto label_4f3884;
        case 0x4f3888u: goto label_4f3888;
        case 0x4f388cu: goto label_4f388c;
        case 0x4f3890u: goto label_4f3890;
        case 0x4f3894u: goto label_4f3894;
        case 0x4f3898u: goto label_4f3898;
        case 0x4f389cu: goto label_4f389c;
        case 0x4f38a0u: goto label_4f38a0;
        case 0x4f38a4u: goto label_4f38a4;
        case 0x4f38a8u: goto label_4f38a8;
        case 0x4f38acu: goto label_4f38ac;
        case 0x4f38b0u: goto label_4f38b0;
        case 0x4f38b4u: goto label_4f38b4;
        case 0x4f38b8u: goto label_4f38b8;
        case 0x4f38bcu: goto label_4f38bc;
        case 0x4f38c0u: goto label_4f38c0;
        case 0x4f38c4u: goto label_4f38c4;
        case 0x4f38c8u: goto label_4f38c8;
        case 0x4f38ccu: goto label_4f38cc;
        case 0x4f38d0u: goto label_4f38d0;
        case 0x4f38d4u: goto label_4f38d4;
        case 0x4f38d8u: goto label_4f38d8;
        case 0x4f38dcu: goto label_4f38dc;
        case 0x4f38e0u: goto label_4f38e0;
        case 0x4f38e4u: goto label_4f38e4;
        case 0x4f38e8u: goto label_4f38e8;
        case 0x4f38ecu: goto label_4f38ec;
        case 0x4f38f0u: goto label_4f38f0;
        case 0x4f38f4u: goto label_4f38f4;
        case 0x4f38f8u: goto label_4f38f8;
        case 0x4f38fcu: goto label_4f38fc;
        case 0x4f3900u: goto label_4f3900;
        case 0x4f3904u: goto label_4f3904;
        case 0x4f3908u: goto label_4f3908;
        case 0x4f390cu: goto label_4f390c;
        case 0x4f3910u: goto label_4f3910;
        case 0x4f3914u: goto label_4f3914;
        case 0x4f3918u: goto label_4f3918;
        case 0x4f391cu: goto label_4f391c;
        case 0x4f3920u: goto label_4f3920;
        case 0x4f3924u: goto label_4f3924;
        case 0x4f3928u: goto label_4f3928;
        case 0x4f392cu: goto label_4f392c;
        case 0x4f3930u: goto label_4f3930;
        case 0x4f3934u: goto label_4f3934;
        case 0x4f3938u: goto label_4f3938;
        case 0x4f393cu: goto label_4f393c;
        case 0x4f3940u: goto label_4f3940;
        case 0x4f3944u: goto label_4f3944;
        case 0x4f3948u: goto label_4f3948;
        case 0x4f394cu: goto label_4f394c;
        case 0x4f3950u: goto label_4f3950;
        case 0x4f3954u: goto label_4f3954;
        case 0x4f3958u: goto label_4f3958;
        case 0x4f395cu: goto label_4f395c;
        case 0x4f3960u: goto label_4f3960;
        case 0x4f3964u: goto label_4f3964;
        case 0x4f3968u: goto label_4f3968;
        case 0x4f396cu: goto label_4f396c;
        case 0x4f3970u: goto label_4f3970;
        case 0x4f3974u: goto label_4f3974;
        case 0x4f3978u: goto label_4f3978;
        case 0x4f397cu: goto label_4f397c;
        case 0x4f3980u: goto label_4f3980;
        case 0x4f3984u: goto label_4f3984;
        case 0x4f3988u: goto label_4f3988;
        case 0x4f398cu: goto label_4f398c;
        case 0x4f3990u: goto label_4f3990;
        case 0x4f3994u: goto label_4f3994;
        case 0x4f3998u: goto label_4f3998;
        case 0x4f399cu: goto label_4f399c;
        case 0x4f39a0u: goto label_4f39a0;
        case 0x4f39a4u: goto label_4f39a4;
        case 0x4f39a8u: goto label_4f39a8;
        case 0x4f39acu: goto label_4f39ac;
        case 0x4f39b0u: goto label_4f39b0;
        case 0x4f39b4u: goto label_4f39b4;
        case 0x4f39b8u: goto label_4f39b8;
        case 0x4f39bcu: goto label_4f39bc;
        case 0x4f39c0u: goto label_4f39c0;
        case 0x4f39c4u: goto label_4f39c4;
        case 0x4f39c8u: goto label_4f39c8;
        case 0x4f39ccu: goto label_4f39cc;
        case 0x4f39d0u: goto label_4f39d0;
        case 0x4f39d4u: goto label_4f39d4;
        case 0x4f39d8u: goto label_4f39d8;
        case 0x4f39dcu: goto label_4f39dc;
        case 0x4f39e0u: goto label_4f39e0;
        case 0x4f39e4u: goto label_4f39e4;
        case 0x4f39e8u: goto label_4f39e8;
        case 0x4f39ecu: goto label_4f39ec;
        case 0x4f39f0u: goto label_4f39f0;
        case 0x4f39f4u: goto label_4f39f4;
        case 0x4f39f8u: goto label_4f39f8;
        case 0x4f39fcu: goto label_4f39fc;
        case 0x4f3a00u: goto label_4f3a00;
        case 0x4f3a04u: goto label_4f3a04;
        case 0x4f3a08u: goto label_4f3a08;
        case 0x4f3a0cu: goto label_4f3a0c;
        case 0x4f3a10u: goto label_4f3a10;
        case 0x4f3a14u: goto label_4f3a14;
        case 0x4f3a18u: goto label_4f3a18;
        case 0x4f3a1cu: goto label_4f3a1c;
        case 0x4f3a20u: goto label_4f3a20;
        case 0x4f3a24u: goto label_4f3a24;
        case 0x4f3a28u: goto label_4f3a28;
        case 0x4f3a2cu: goto label_4f3a2c;
        case 0x4f3a30u: goto label_4f3a30;
        case 0x4f3a34u: goto label_4f3a34;
        case 0x4f3a38u: goto label_4f3a38;
        case 0x4f3a3cu: goto label_4f3a3c;
        case 0x4f3a40u: goto label_4f3a40;
        case 0x4f3a44u: goto label_4f3a44;
        case 0x4f3a48u: goto label_4f3a48;
        case 0x4f3a4cu: goto label_4f3a4c;
        case 0x4f3a50u: goto label_4f3a50;
        case 0x4f3a54u: goto label_4f3a54;
        case 0x4f3a58u: goto label_4f3a58;
        case 0x4f3a5cu: goto label_4f3a5c;
        case 0x4f3a60u: goto label_4f3a60;
        case 0x4f3a64u: goto label_4f3a64;
        case 0x4f3a68u: goto label_4f3a68;
        case 0x4f3a6cu: goto label_4f3a6c;
        case 0x4f3a70u: goto label_4f3a70;
        case 0x4f3a74u: goto label_4f3a74;
        case 0x4f3a78u: goto label_4f3a78;
        case 0x4f3a7cu: goto label_4f3a7c;
        case 0x4f3a80u: goto label_4f3a80;
        case 0x4f3a84u: goto label_4f3a84;
        case 0x4f3a88u: goto label_4f3a88;
        case 0x4f3a8cu: goto label_4f3a8c;
        case 0x4f3a90u: goto label_4f3a90;
        case 0x4f3a94u: goto label_4f3a94;
        case 0x4f3a98u: goto label_4f3a98;
        case 0x4f3a9cu: goto label_4f3a9c;
        case 0x4f3aa0u: goto label_4f3aa0;
        case 0x4f3aa4u: goto label_4f3aa4;
        case 0x4f3aa8u: goto label_4f3aa8;
        case 0x4f3aacu: goto label_4f3aac;
        case 0x4f3ab0u: goto label_4f3ab0;
        case 0x4f3ab4u: goto label_4f3ab4;
        case 0x4f3ab8u: goto label_4f3ab8;
        case 0x4f3abcu: goto label_4f3abc;
        case 0x4f3ac0u: goto label_4f3ac0;
        case 0x4f3ac4u: goto label_4f3ac4;
        case 0x4f3ac8u: goto label_4f3ac8;
        case 0x4f3accu: goto label_4f3acc;
        case 0x4f3ad0u: goto label_4f3ad0;
        case 0x4f3ad4u: goto label_4f3ad4;
        case 0x4f3ad8u: goto label_4f3ad8;
        case 0x4f3adcu: goto label_4f3adc;
        case 0x4f3ae0u: goto label_4f3ae0;
        case 0x4f3ae4u: goto label_4f3ae4;
        case 0x4f3ae8u: goto label_4f3ae8;
        case 0x4f3aecu: goto label_4f3aec;
        case 0x4f3af0u: goto label_4f3af0;
        case 0x4f3af4u: goto label_4f3af4;
        case 0x4f3af8u: goto label_4f3af8;
        case 0x4f3afcu: goto label_4f3afc;
        case 0x4f3b00u: goto label_4f3b00;
        case 0x4f3b04u: goto label_4f3b04;
        case 0x4f3b08u: goto label_4f3b08;
        case 0x4f3b0cu: goto label_4f3b0c;
        case 0x4f3b10u: goto label_4f3b10;
        case 0x4f3b14u: goto label_4f3b14;
        case 0x4f3b18u: goto label_4f3b18;
        case 0x4f3b1cu: goto label_4f3b1c;
        case 0x4f3b20u: goto label_4f3b20;
        case 0x4f3b24u: goto label_4f3b24;
        case 0x4f3b28u: goto label_4f3b28;
        case 0x4f3b2cu: goto label_4f3b2c;
        case 0x4f3b30u: goto label_4f3b30;
        case 0x4f3b34u: goto label_4f3b34;
        case 0x4f3b38u: goto label_4f3b38;
        case 0x4f3b3cu: goto label_4f3b3c;
        case 0x4f3b40u: goto label_4f3b40;
        case 0x4f3b44u: goto label_4f3b44;
        case 0x4f3b48u: goto label_4f3b48;
        case 0x4f3b4cu: goto label_4f3b4c;
        case 0x4f3b50u: goto label_4f3b50;
        case 0x4f3b54u: goto label_4f3b54;
        case 0x4f3b58u: goto label_4f3b58;
        case 0x4f3b5cu: goto label_4f3b5c;
        case 0x4f3b60u: goto label_4f3b60;
        case 0x4f3b64u: goto label_4f3b64;
        case 0x4f3b68u: goto label_4f3b68;
        case 0x4f3b6cu: goto label_4f3b6c;
        case 0x4f3b70u: goto label_4f3b70;
        case 0x4f3b74u: goto label_4f3b74;
        case 0x4f3b78u: goto label_4f3b78;
        case 0x4f3b7cu: goto label_4f3b7c;
        case 0x4f3b80u: goto label_4f3b80;
        case 0x4f3b84u: goto label_4f3b84;
        case 0x4f3b88u: goto label_4f3b88;
        case 0x4f3b8cu: goto label_4f3b8c;
        case 0x4f3b90u: goto label_4f3b90;
        case 0x4f3b94u: goto label_4f3b94;
        case 0x4f3b98u: goto label_4f3b98;
        case 0x4f3b9cu: goto label_4f3b9c;
        case 0x4f3ba0u: goto label_4f3ba0;
        case 0x4f3ba4u: goto label_4f3ba4;
        case 0x4f3ba8u: goto label_4f3ba8;
        case 0x4f3bacu: goto label_4f3bac;
        case 0x4f3bb0u: goto label_4f3bb0;
        case 0x4f3bb4u: goto label_4f3bb4;
        case 0x4f3bb8u: goto label_4f3bb8;
        case 0x4f3bbcu: goto label_4f3bbc;
        case 0x4f3bc0u: goto label_4f3bc0;
        case 0x4f3bc4u: goto label_4f3bc4;
        case 0x4f3bc8u: goto label_4f3bc8;
        case 0x4f3bccu: goto label_4f3bcc;
        case 0x4f3bd0u: goto label_4f3bd0;
        case 0x4f3bd4u: goto label_4f3bd4;
        case 0x4f3bd8u: goto label_4f3bd8;
        case 0x4f3bdcu: goto label_4f3bdc;
        case 0x4f3be0u: goto label_4f3be0;
        case 0x4f3be4u: goto label_4f3be4;
        case 0x4f3be8u: goto label_4f3be8;
        case 0x4f3becu: goto label_4f3bec;
        case 0x4f3bf0u: goto label_4f3bf0;
        case 0x4f3bf4u: goto label_4f3bf4;
        case 0x4f3bf8u: goto label_4f3bf8;
        case 0x4f3bfcu: goto label_4f3bfc;
        case 0x4f3c00u: goto label_4f3c00;
        case 0x4f3c04u: goto label_4f3c04;
        case 0x4f3c08u: goto label_4f3c08;
        case 0x4f3c0cu: goto label_4f3c0c;
        case 0x4f3c10u: goto label_4f3c10;
        case 0x4f3c14u: goto label_4f3c14;
        case 0x4f3c18u: goto label_4f3c18;
        case 0x4f3c1cu: goto label_4f3c1c;
        case 0x4f3c20u: goto label_4f3c20;
        case 0x4f3c24u: goto label_4f3c24;
        case 0x4f3c28u: goto label_4f3c28;
        case 0x4f3c2cu: goto label_4f3c2c;
        case 0x4f3c30u: goto label_4f3c30;
        case 0x4f3c34u: goto label_4f3c34;
        case 0x4f3c38u: goto label_4f3c38;
        case 0x4f3c3cu: goto label_4f3c3c;
        case 0x4f3c40u: goto label_4f3c40;
        case 0x4f3c44u: goto label_4f3c44;
        case 0x4f3c48u: goto label_4f3c48;
        case 0x4f3c4cu: goto label_4f3c4c;
        case 0x4f3c50u: goto label_4f3c50;
        case 0x4f3c54u: goto label_4f3c54;
        case 0x4f3c58u: goto label_4f3c58;
        case 0x4f3c5cu: goto label_4f3c5c;
        case 0x4f3c60u: goto label_4f3c60;
        case 0x4f3c64u: goto label_4f3c64;
        case 0x4f3c68u: goto label_4f3c68;
        case 0x4f3c6cu: goto label_4f3c6c;
        case 0x4f3c70u: goto label_4f3c70;
        case 0x4f3c74u: goto label_4f3c74;
        case 0x4f3c78u: goto label_4f3c78;
        case 0x4f3c7cu: goto label_4f3c7c;
        case 0x4f3c80u: goto label_4f3c80;
        case 0x4f3c84u: goto label_4f3c84;
        case 0x4f3c88u: goto label_4f3c88;
        case 0x4f3c8cu: goto label_4f3c8c;
        case 0x4f3c90u: goto label_4f3c90;
        case 0x4f3c94u: goto label_4f3c94;
        case 0x4f3c98u: goto label_4f3c98;
        case 0x4f3c9cu: goto label_4f3c9c;
        case 0x4f3ca0u: goto label_4f3ca0;
        case 0x4f3ca4u: goto label_4f3ca4;
        case 0x4f3ca8u: goto label_4f3ca8;
        case 0x4f3cacu: goto label_4f3cac;
        case 0x4f3cb0u: goto label_4f3cb0;
        case 0x4f3cb4u: goto label_4f3cb4;
        case 0x4f3cb8u: goto label_4f3cb8;
        case 0x4f3cbcu: goto label_4f3cbc;
        case 0x4f3cc0u: goto label_4f3cc0;
        case 0x4f3cc4u: goto label_4f3cc4;
        case 0x4f3cc8u: goto label_4f3cc8;
        case 0x4f3cccu: goto label_4f3ccc;
        case 0x4f3cd0u: goto label_4f3cd0;
        case 0x4f3cd4u: goto label_4f3cd4;
        case 0x4f3cd8u: goto label_4f3cd8;
        case 0x4f3cdcu: goto label_4f3cdc;
        case 0x4f3ce0u: goto label_4f3ce0;
        case 0x4f3ce4u: goto label_4f3ce4;
        case 0x4f3ce8u: goto label_4f3ce8;
        case 0x4f3cecu: goto label_4f3cec;
        case 0x4f3cf0u: goto label_4f3cf0;
        case 0x4f3cf4u: goto label_4f3cf4;
        case 0x4f3cf8u: goto label_4f3cf8;
        case 0x4f3cfcu: goto label_4f3cfc;
        case 0x4f3d00u: goto label_4f3d00;
        case 0x4f3d04u: goto label_4f3d04;
        case 0x4f3d08u: goto label_4f3d08;
        case 0x4f3d0cu: goto label_4f3d0c;
        case 0x4f3d10u: goto label_4f3d10;
        case 0x4f3d14u: goto label_4f3d14;
        case 0x4f3d18u: goto label_4f3d18;
        case 0x4f3d1cu: goto label_4f3d1c;
        case 0x4f3d20u: goto label_4f3d20;
        case 0x4f3d24u: goto label_4f3d24;
        case 0x4f3d28u: goto label_4f3d28;
        case 0x4f3d2cu: goto label_4f3d2c;
        case 0x4f3d30u: goto label_4f3d30;
        case 0x4f3d34u: goto label_4f3d34;
        case 0x4f3d38u: goto label_4f3d38;
        case 0x4f3d3cu: goto label_4f3d3c;
        case 0x4f3d40u: goto label_4f3d40;
        case 0x4f3d44u: goto label_4f3d44;
        case 0x4f3d48u: goto label_4f3d48;
        case 0x4f3d4cu: goto label_4f3d4c;
        case 0x4f3d50u: goto label_4f3d50;
        case 0x4f3d54u: goto label_4f3d54;
        case 0x4f3d58u: goto label_4f3d58;
        case 0x4f3d5cu: goto label_4f3d5c;
        case 0x4f3d60u: goto label_4f3d60;
        case 0x4f3d64u: goto label_4f3d64;
        case 0x4f3d68u: goto label_4f3d68;
        case 0x4f3d6cu: goto label_4f3d6c;
        case 0x4f3d70u: goto label_4f3d70;
        case 0x4f3d74u: goto label_4f3d74;
        case 0x4f3d78u: goto label_4f3d78;
        case 0x4f3d7cu: goto label_4f3d7c;
        case 0x4f3d80u: goto label_4f3d80;
        case 0x4f3d84u: goto label_4f3d84;
        case 0x4f3d88u: goto label_4f3d88;
        case 0x4f3d8cu: goto label_4f3d8c;
        case 0x4f3d90u: goto label_4f3d90;
        case 0x4f3d94u: goto label_4f3d94;
        case 0x4f3d98u: goto label_4f3d98;
        case 0x4f3d9cu: goto label_4f3d9c;
        case 0x4f3da0u: goto label_4f3da0;
        case 0x4f3da4u: goto label_4f3da4;
        case 0x4f3da8u: goto label_4f3da8;
        case 0x4f3dacu: goto label_4f3dac;
        case 0x4f3db0u: goto label_4f3db0;
        case 0x4f3db4u: goto label_4f3db4;
        case 0x4f3db8u: goto label_4f3db8;
        case 0x4f3dbcu: goto label_4f3dbc;
        case 0x4f3dc0u: goto label_4f3dc0;
        case 0x4f3dc4u: goto label_4f3dc4;
        case 0x4f3dc8u: goto label_4f3dc8;
        case 0x4f3dccu: goto label_4f3dcc;
        case 0x4f3dd0u: goto label_4f3dd0;
        case 0x4f3dd4u: goto label_4f3dd4;
        case 0x4f3dd8u: goto label_4f3dd8;
        case 0x4f3ddcu: goto label_4f3ddc;
        case 0x4f3de0u: goto label_4f3de0;
        case 0x4f3de4u: goto label_4f3de4;
        case 0x4f3de8u: goto label_4f3de8;
        case 0x4f3decu: goto label_4f3dec;
        case 0x4f3df0u: goto label_4f3df0;
        case 0x4f3df4u: goto label_4f3df4;
        case 0x4f3df8u: goto label_4f3df8;
        case 0x4f3dfcu: goto label_4f3dfc;
        case 0x4f3e00u: goto label_4f3e00;
        case 0x4f3e04u: goto label_4f3e04;
        case 0x4f3e08u: goto label_4f3e08;
        case 0x4f3e0cu: goto label_4f3e0c;
        default: break;
    }

    ctx->pc = 0x4f2fc0u;

label_4f2fc0:
    // 0x4f2fc0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4f2fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4f2fc4:
    // 0x4f2fc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4f2fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4f2fc8:
    // 0x4f2fc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4f2fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4f2fcc:
    // 0x4f2fcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f2fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f2fd0:
    // 0x4f2fd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f2fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f2fd4:
    // 0x4f2fd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f2fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f2fd8:
    // 0x4f2fd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f2fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2fdc:
    // 0x4f2fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f2fe0:
    // 0x4f2fe0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f2fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f2fe4:
    // 0x4f2fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f2fe8:
    // 0x4f2fe8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4f2fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4f2fec:
    // 0x4f2fec: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x4f2fecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4f2ff0:
    // 0x4f2ff0: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_4f2ff4:
    if (ctx->pc == 0x4F2FF4u) {
        ctx->pc = 0x4F2FF4u;
            // 0x4f2ff4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2FF8u;
        goto label_4f2ff8;
    }
    ctx->pc = 0x4F2FF0u;
    {
        const bool branch_taken_0x4f2ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2FF0u;
            // 0x4f2ff4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2ff0) {
            ctx->pc = 0x4F3230u;
            goto label_4f3230;
        }
    }
    ctx->pc = 0x4F2FF8u;
label_4f2ff8:
    // 0x4f2ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f2ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2ffc:
    // 0x4f2ffc: 0xc04f278  jal         func_13C9E0
label_4f3000:
    if (ctx->pc == 0x4F3000u) {
        ctx->pc = 0x4F3000u;
            // 0x4f3000: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4F3004u;
        goto label_4f3004;
    }
    ctx->pc = 0x4F2FFCu;
    SET_GPR_U32(ctx, 31, 0x4F3004u);
    ctx->pc = 0x4F3000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2FFCu;
            // 0x4f3000: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3004u; }
        if (ctx->pc != 0x4F3004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3004u; }
        if (ctx->pc != 0x4F3004u) { return; }
    }
    ctx->pc = 0x4F3004u;
label_4f3004:
    // 0x4f3004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f3004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3008:
    // 0x4f3008: 0xc04ce80  jal         func_133A00
label_4f300c:
    if (ctx->pc == 0x4F300Cu) {
        ctx->pc = 0x4F300Cu;
            // 0x4f300c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4F3010u;
        goto label_4f3010;
    }
    ctx->pc = 0x4F3008u;
    SET_GPR_U32(ctx, 31, 0x4F3010u);
    ctx->pc = 0x4F300Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3008u;
            // 0x4f300c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3010u; }
        if (ctx->pc != 0x4F3010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3010u; }
        if (ctx->pc != 0x4F3010u) { return; }
    }
    ctx->pc = 0x4F3010u;
label_4f3010:
    // 0x4f3010: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4f3010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4f3014:
    // 0x4f3014: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x4f3014u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_4f3018:
    // 0x4f3018: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x4f3018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4f301c:
    // 0x4f301c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x4f301cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f3020:
    // 0x4f3020: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f3020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f3024:
    // 0x4f3024: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x4f3024u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_4f3028:
    // 0x4f3028: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4f3028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4f302c:
    // 0x4f302c: 0xc07698c  jal         func_1DA630
label_4f3030:
    if (ctx->pc == 0x4F3030u) {
        ctx->pc = 0x4F3030u;
            // 0x4f3030: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3034u;
        goto label_4f3034;
    }
    ctx->pc = 0x4F302Cu;
    SET_GPR_U32(ctx, 31, 0x4F3034u);
    ctx->pc = 0x4F3030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F302Cu;
            // 0x4f3030: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3034u; }
        if (ctx->pc != 0x4F3034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3034u; }
        if (ctx->pc != 0x4F3034u) { return; }
    }
    ctx->pc = 0x4F3034u;
label_4f3034:
    // 0x4f3034: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f3034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f3038:
    // 0x4f3038: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4f303c:
    if (ctx->pc == 0x4F303Cu) {
        ctx->pc = 0x4F3040u;
        goto label_4f3040;
    }
    ctx->pc = 0x4F3038u;
    {
        const bool branch_taken_0x4f3038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f3038) {
            ctx->pc = 0x4F3048u;
            goto label_4f3048;
        }
    }
    ctx->pc = 0x4F3040u;
label_4f3040:
    // 0x4f3040: 0x10000033  b           . + 4 + (0x33 << 2)
label_4f3044:
    if (ctx->pc == 0x4F3044u) {
        ctx->pc = 0x4F3044u;
            // 0x4f3044: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4F3048u;
        goto label_4f3048;
    }
    ctx->pc = 0x4F3040u;
    {
        const bool branch_taken_0x4f3040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3040u;
            // 0x4f3044: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3040) {
            ctx->pc = 0x4F3110u;
            goto label_4f3110;
        }
    }
    ctx->pc = 0x4F3048u;
label_4f3048:
    // 0x4f3048: 0xc0576f4  jal         func_15DBD0
label_4f304c:
    if (ctx->pc == 0x4F304Cu) {
        ctx->pc = 0x4F3050u;
        goto label_4f3050;
    }
    ctx->pc = 0x4F3048u;
    SET_GPR_U32(ctx, 31, 0x4F3050u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3050u; }
        if (ctx->pc != 0x4F3050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3050u; }
        if (ctx->pc != 0x4F3050u) { return; }
    }
    ctx->pc = 0x4F3050u;
label_4f3050:
    // 0x4f3050: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f3050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f3054:
    // 0x4f3054: 0xc076984  jal         func_1DA610
label_4f3058:
    if (ctx->pc == 0x4F3058u) {
        ctx->pc = 0x4F3058u;
            // 0x4f3058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F305Cu;
        goto label_4f305c;
    }
    ctx->pc = 0x4F3054u;
    SET_GPR_U32(ctx, 31, 0x4F305Cu);
    ctx->pc = 0x4F3058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3054u;
            // 0x4f3058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F305Cu; }
        if (ctx->pc != 0x4F305Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F305Cu; }
        if (ctx->pc != 0x4F305Cu) { return; }
    }
    ctx->pc = 0x4F305Cu;
label_4f305c:
    // 0x4f305c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4f305cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f3060:
    // 0x4f3060: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4f3060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4f3064:
    // 0x4f3064: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f3064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4f3068:
    // 0x4f3068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f3068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f306c:
    // 0x4f306c: 0xc442cba0  lwc1        $f2, -0x3460($v0)
    ctx->pc = 0x4f306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f3070:
    // 0x4f3070: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4f3070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3074:
    // 0x4f3074: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f3074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4f3078:
    // 0x4f3078: 0xc441cba8  lwc1        $f1, -0x3458($v0)
    ctx->pc = 0x4f3078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f307c:
    // 0x4f307c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4f307cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4f3080:
    // 0x4f3080: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f3080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4f3084:
    // 0x4f3084: 0xc440cbac  lwc1        $f0, -0x3454($v0)
    ctx->pc = 0x4f3084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f3088:
    // 0x4f3088: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4f3088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4f308c:
    // 0x4f308c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f308cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4f3090:
    // 0x4f3090: 0x8c42cba4  lw          $v0, -0x345C($v0)
    ctx->pc = 0x4f3090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953892)));
label_4f3094:
    // 0x4f3094: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4f3094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4f3098:
    // 0x4f3098: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4f3098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4f309c:
    // 0x4f309c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x4f309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f30a0:
    // 0x4f30a0: 0xc04cca0  jal         func_133280
label_4f30a4:
    if (ctx->pc == 0x4F30A4u) {
        ctx->pc = 0x4F30A4u;
            // 0x4f30a4: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4F30A8u;
        goto label_4f30a8;
    }
    ctx->pc = 0x4F30A0u;
    SET_GPR_U32(ctx, 31, 0x4F30A8u);
    ctx->pc = 0x4F30A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F30A0u;
            // 0x4f30a4: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30A8u; }
        if (ctx->pc != 0x4F30A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30A8u; }
        if (ctx->pc != 0x4F30A8u) { return; }
    }
    ctx->pc = 0x4F30A8u;
label_4f30a8:
    // 0x4f30a8: 0xc076980  jal         func_1DA600
label_4f30ac:
    if (ctx->pc == 0x4F30ACu) {
        ctx->pc = 0x4F30ACu;
            // 0x4f30ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F30B0u;
        goto label_4f30b0;
    }
    ctx->pc = 0x4F30A8u;
    SET_GPR_U32(ctx, 31, 0x4F30B0u);
    ctx->pc = 0x4F30ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F30A8u;
            // 0x4f30ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30B0u; }
        if (ctx->pc != 0x4F30B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30B0u; }
        if (ctx->pc != 0x4F30B0u) { return; }
    }
    ctx->pc = 0x4F30B0u;
label_4f30b0:
    // 0x4f30b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4f30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4f30b4:
    // 0x4f30b4: 0xc04cc34  jal         func_1330D0
label_4f30b8:
    if (ctx->pc == 0x4F30B8u) {
        ctx->pc = 0x4F30B8u;
            // 0x4f30b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F30BCu;
        goto label_4f30bc;
    }
    ctx->pc = 0x4F30B4u;
    SET_GPR_U32(ctx, 31, 0x4F30BCu);
    ctx->pc = 0x4F30B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F30B4u;
            // 0x4f30b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30BCu; }
        if (ctx->pc != 0x4F30BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30BCu; }
        if (ctx->pc != 0x4F30BCu) { return; }
    }
    ctx->pc = 0x4F30BCu;
label_4f30bc:
    // 0x4f30bc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4f30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4f30c0:
    // 0x4f30c0: 0xc4618960  lwc1        $f1, -0x76A0($v1)
    ctx->pc = 0x4f30c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294936928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f30c4:
    // 0x4f30c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4f30c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f30c8:
    // 0x4f30c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4f30cc:
    if (ctx->pc == 0x4F30CCu) {
        ctx->pc = 0x4F30CCu;
            // 0x4f30cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F30D0u;
        goto label_4f30d0;
    }
    ctx->pc = 0x4F30C8u;
    {
        const bool branch_taken_0x4f30c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f30c8) {
            ctx->pc = 0x4F30CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F30C8u;
            // 0x4f30cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F30D8u;
            goto label_4f30d8;
        }
    }
    ctx->pc = 0x4F30D0u;
label_4f30d0:
    // 0x4f30d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_4f30d4:
    if (ctx->pc == 0x4F30D4u) {
        ctx->pc = 0x4F30D4u;
            // 0x4f30d4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4F30D8u;
        goto label_4f30d8;
    }
    ctx->pc = 0x4F30D0u;
    {
        const bool branch_taken_0x4f30d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F30D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F30D0u;
            // 0x4f30d4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f30d0) {
            ctx->pc = 0x4F3110u;
            goto label_4f3110;
        }
    }
    ctx->pc = 0x4F30D8u;
label_4f30d8:
    // 0x4f30d8: 0xc07697c  jal         func_1DA5F0
label_4f30dc:
    if (ctx->pc == 0x4F30DCu) {
        ctx->pc = 0x4F30E0u;
        goto label_4f30e0;
    }
    ctx->pc = 0x4F30D8u;
    SET_GPR_U32(ctx, 31, 0x4F30E0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30E0u; }
        if (ctx->pc != 0x4F30E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30E0u; }
        if (ctx->pc != 0x4F30E0u) { return; }
    }
    ctx->pc = 0x4F30E0u;
label_4f30e0:
    // 0x4f30e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f30e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f30e4:
    // 0x4f30e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4f30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4f30e8:
    // 0x4f30e8: 0xc04cd60  jal         func_133580
label_4f30ec:
    if (ctx->pc == 0x4F30ECu) {
        ctx->pc = 0x4F30ECu;
            // 0x4f30ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F30F0u;
        goto label_4f30f0;
    }
    ctx->pc = 0x4F30E8u;
    SET_GPR_U32(ctx, 31, 0x4F30F0u);
    ctx->pc = 0x4F30ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F30E8u;
            // 0x4f30ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30F0u; }
        if (ctx->pc != 0x4F30F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30F0u; }
        if (ctx->pc != 0x4F30F0u) { return; }
    }
    ctx->pc = 0x4F30F0u;
label_4f30f0:
    // 0x4f30f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f30f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4f30f4:
    // 0x4f30f4: 0xc04c650  jal         func_131940
label_4f30f8:
    if (ctx->pc == 0x4F30F8u) {
        ctx->pc = 0x4F30F8u;
            // 0x4f30f8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4F30FCu;
        goto label_4f30fc;
    }
    ctx->pc = 0x4F30F4u;
    SET_GPR_U32(ctx, 31, 0x4F30FCu);
    ctx->pc = 0x4F30F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F30F4u;
            // 0x4f30f8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30FCu; }
        if (ctx->pc != 0x4F30FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F30FCu; }
        if (ctx->pc != 0x4F30FCu) { return; }
    }
    ctx->pc = 0x4F30FCu;
label_4f30fc:
    // 0x4f30fc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4f30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4f3100:
    // 0x4f3100: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4f3100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f3104:
    // 0x4f3104: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4f3104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4f3108:
    // 0x4f3108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f3108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f310c:
    // 0x4f310c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4f310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f3110:
    // 0x4f3110: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4f3110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4f3114:
    // 0x4f3114: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_4f3118:
    if (ctx->pc == 0x4F3118u) {
        ctx->pc = 0x4F3118u;
            // 0x4f3118: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4F311Cu;
        goto label_4f311c;
    }
    ctx->pc = 0x4F3114u;
    {
        const bool branch_taken_0x4f3114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3114u;
            // 0x4f3118: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3114) {
            ctx->pc = 0x4F3230u;
            goto label_4f3230;
        }
    }
    ctx->pc = 0x4F311Cu;
label_4f311c:
    // 0x4f311c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3120:
    // 0x4f3120: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f3120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3124:
    // 0x4f3124: 0x8c47e3c0  lw          $a3, -0x1C40($v0)
    ctx->pc = 0x4f3124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4f3128:
    // 0x4f3128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f3128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f312c:
    // 0x4f312c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x4f312cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f3130:
    // 0x4f3130: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4f3130u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4f3134:
    // 0x4f3134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3138:
    // 0x4f3138: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4f3138u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f313c:
    // 0x4f313c: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x4f313cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4f3140:
    // 0x4f3140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3144:
    // 0x4f3144: 0x43980  sll         $a3, $a0, 6
    ctx->pc = 0x4f3144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_4f3148:
    // 0x4f3148: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x4f3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_4f314c:
    // 0x4f314c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4f314cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4f3150:
    // 0x4f3150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3154:
    // 0x4f3154: 0x67a021  addu        $s4, $v1, $a3
    ctx->pc = 0x4f3154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4f3158:
    // 0x4f3158: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x4f3158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4f315c:
    // 0x4f315c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3160:
    // 0x4f3160: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x4f3160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_4f3164:
    // 0x4f3164: 0xacf40000  sw          $s4, 0x0($a3)
    ctx->pc = 0x4f3164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
label_4f3168:
    // 0x4f3168: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f316c:
    // 0x4f316c: 0x8c84e3d8  lw          $a0, -0x1C28($a0)
    ctx->pc = 0x4f316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_4f3170:
    // 0x4f3170: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4f3170u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4f3174:
    // 0x4f3174: 0x8c49e3b8  lw          $t1, -0x1C48($v0)
    ctx->pc = 0x4f3174u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4f3178:
    // 0x4f3178: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4f3178u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4f317c:
    // 0x4f317c: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x4f317cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f3180:
    // 0x4f3180: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4f3180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4f3184:
    // 0x4f3184: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3188:
    // 0x4f3188: 0x14b8821  addu        $s1, $t2, $t3
    ctx->pc = 0x4f3188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4f318c:
    // 0x4f318c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f318cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3190:
    // 0x4f3190: 0xad310000  sw          $s1, 0x0($t1)
    ctx->pc = 0x4f3190u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 17));
label_4f3194:
    // 0x4f3194: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4f3194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4f3198:
    // 0x4f3198: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4f3198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4f319c:
    // 0x4f319c: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x4f319cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4f31a0:
    // 0x4f31a0: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x4f31a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4f31a4:
    // 0x4f31a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4f31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4f31a8:
    // 0x4f31a8: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x4f31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_4f31ac:
    // 0x4f31ac: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x4f31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4f31b0:
    // 0x4f31b0: 0xc04cd60  jal         func_133580
label_4f31b4:
    if (ctx->pc == 0x4F31B4u) {
        ctx->pc = 0x4F31B4u;
            // 0x4f31b4: 0xace2e3d8  sw          $v0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
        ctx->pc = 0x4F31B8u;
        goto label_4f31b8;
    }
    ctx->pc = 0x4F31B0u;
    SET_GPR_U32(ctx, 31, 0x4F31B8u);
    ctx->pc = 0x4F31B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F31B0u;
            // 0x4f31b4: 0xace2e3d8  sw          $v0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F31B8u; }
        if (ctx->pc != 0x4F31B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F31B8u; }
        if (ctx->pc != 0x4F31B8u) { return; }
    }
    ctx->pc = 0x4F31B8u;
label_4f31b8:
    // 0x4f31b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4f31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f31bc:
    // 0x4f31bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f31bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f31c0:
    // 0x4f31c0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4f31c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4f31c4:
    // 0x4f31c4: 0xc04e4a4  jal         func_139290
label_4f31c8:
    if (ctx->pc == 0x4F31C8u) {
        ctx->pc = 0x4F31C8u;
            // 0x4f31c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F31CCu;
        goto label_4f31cc;
    }
    ctx->pc = 0x4F31C4u;
    SET_GPR_U32(ctx, 31, 0x4F31CCu);
    ctx->pc = 0x4F31C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F31C4u;
            // 0x4f31c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F31CCu; }
        if (ctx->pc != 0x4F31CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F31CCu; }
        if (ctx->pc != 0x4F31CCu) { return; }
    }
    ctx->pc = 0x4F31CCu;
label_4f31cc:
    // 0x4f31cc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4f31ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f31d0:
    // 0x4f31d0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4f31d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4f31d4:
    // 0x4f31d4: 0x320f809  jalr        $t9
label_4f31d8:
    if (ctx->pc == 0x4F31D8u) {
        ctx->pc = 0x4F31D8u;
            // 0x4f31d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F31DCu;
        goto label_4f31dc;
    }
    ctx->pc = 0x4F31D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F31DCu);
        ctx->pc = 0x4F31D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F31D4u;
            // 0x4f31d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F31DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F31DCu; }
            if (ctx->pc != 0x4F31DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4F31DCu;
label_4f31dc:
    // 0x4f31dc: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x4f31dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f31e0:
    // 0x4f31e0: 0xc66c0280  lwc1        $f12, 0x280($s3)
    ctx->pc = 0x4f31e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f31e4:
    // 0x4f31e4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4f31e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4f31e8:
    // 0x4f31e8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4f31e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f31ec:
    // 0x4f31ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f31f0:
    // 0x4f31f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f31f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f31f4:
    // 0x4f31f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f31f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f31f8:
    // 0x4f31f8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x4f31f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4f31fc:
    // 0x4f31fc: 0xc04cff4  jal         func_133FD0
label_4f3200:
    if (ctx->pc == 0x4F3200u) {
        ctx->pc = 0x4F3200u;
            // 0x4f3200: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4F3204u;
        goto label_4f3204;
    }
    ctx->pc = 0x4F31FCu;
    SET_GPR_U32(ctx, 31, 0x4F3204u);
    ctx->pc = 0x4F3200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F31FCu;
            // 0x4f3200: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3204u; }
        if (ctx->pc != 0x4F3204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3204u; }
        if (ctx->pc != 0x4F3204u) { return; }
    }
    ctx->pc = 0x4F3204u;
label_4f3204:
    // 0x4f3204: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4f3204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4f3208:
    // 0x4f3208: 0xc66c027c  lwc1        $f12, 0x27C($s3)
    ctx->pc = 0x4f3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f320c:
    // 0x4f320c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4f320cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4f3210:
    // 0x4f3210: 0xc054bbc  jal         func_152EF0
label_4f3214:
    if (ctx->pc == 0x4F3214u) {
        ctx->pc = 0x4F3214u;
            // 0x4f3214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3218u;
        goto label_4f3218;
    }
    ctx->pc = 0x4F3210u;
    SET_GPR_U32(ctx, 31, 0x4F3218u);
    ctx->pc = 0x4F3214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3210u;
            // 0x4f3214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3218u; }
        if (ctx->pc != 0x4F3218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3218u; }
        if (ctx->pc != 0x4F3218u) { return; }
    }
    ctx->pc = 0x4F3218u;
label_4f3218:
    // 0x4f3218: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4f3218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4f321c:
    // 0x4f321c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f321cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f3220:
    // 0x4f3220: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f3220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f3224:
    // 0x4f3224: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4f3224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4f3228:
    // 0x4f3228: 0xc054c2c  jal         func_1530B0
label_4f322c:
    if (ctx->pc == 0x4F322Cu) {
        ctx->pc = 0x4F322Cu;
            // 0x4f322c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4F3230u;
        goto label_4f3230;
    }
    ctx->pc = 0x4F3228u;
    SET_GPR_U32(ctx, 31, 0x4F3230u);
    ctx->pc = 0x4F322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3228u;
            // 0x4f322c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3230u; }
        if (ctx->pc != 0x4F3230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3230u; }
        if (ctx->pc != 0x4F3230u) { return; }
    }
    ctx->pc = 0x4F3230u;
label_4f3230:
    // 0x4f3230: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4f3230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4f3234:
    // 0x4f3234: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4f3234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f3238:
    // 0x4f3238: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f3238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f323c:
    // 0x4f323c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f323cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f3240:
    // 0x4f3240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f3240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3244:
    // 0x4f3244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3248:
    // 0x4f3248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f324c:
    // 0x4f324c: 0x3e00008  jr          $ra
label_4f3250:
    if (ctx->pc == 0x4F3250u) {
        ctx->pc = 0x4F3250u;
            // 0x4f3250: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4F3254u;
        goto label_4f3254;
    }
    ctx->pc = 0x4F324Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F324Cu;
            // 0x4f3250: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3254u;
label_4f3254:
    // 0x4f3254: 0x0  nop
    ctx->pc = 0x4f3254u;
    // NOP
label_4f3258:
    // 0x4f3258: 0x0  nop
    ctx->pc = 0x4f3258u;
    // NOP
label_4f325c:
    // 0x4f325c: 0x0  nop
    ctx->pc = 0x4f325cu;
    // NOP
label_4f3260:
    // 0x4f3260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f3264:
    // 0x4f3264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f3268:
    // 0x4f3268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f326c:
    // 0x4f326c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3270:
    // 0x4f3270: 0x8c9000e0  lw          $s0, 0xE0($a0)
    ctx->pc = 0x4f3270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_4f3274:
    // 0x4f3274: 0xc0f49d0  jal         func_3D2740
label_4f3278:
    if (ctx->pc == 0x4F3278u) {
        ctx->pc = 0x4F3278u;
            // 0x4f3278: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F327Cu;
        goto label_4f327c;
    }
    ctx->pc = 0x4F3274u;
    SET_GPR_U32(ctx, 31, 0x4F327Cu);
    ctx->pc = 0x4F3278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3274u;
            // 0x4f3278: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2740u;
    if (runtime->hasFunction(0x3D2740u)) {
        auto targetFn = runtime->lookupFunction(0x3D2740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F327Cu; }
        if (ctx->pc != 0x4F327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2740_0x3d2740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F327Cu; }
        if (ctx->pc != 0x4F327Cu) { return; }
    }
    ctx->pc = 0x4F327Cu;
label_4f327c:
    // 0x4f327c: 0xc122c94  jal         func_48B250
label_4f3280:
    if (ctx->pc == 0x4F3280u) {
        ctx->pc = 0x4F3280u;
            // 0x4f3280: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->pc = 0x4F3284u;
        goto label_4f3284;
    }
    ctx->pc = 0x4F327Cu;
    SET_GPR_U32(ctx, 31, 0x4F3284u);
    ctx->pc = 0x4F3280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F327Cu;
            // 0x4f3280: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3284u; }
        if (ctx->pc != 0x4F3284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3284u; }
        if (ctx->pc != 0x4F3284u) { return; }
    }
    ctx->pc = 0x4F3284u;
label_4f3284:
    // 0x4f3284: 0xae3000e0  sw          $s0, 0xE0($s1)
    ctx->pc = 0x4f3284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 16));
label_4f3288:
    // 0x4f3288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f3288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f328c:
    // 0x4f328c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f328cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3290:
    // 0x4f3290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3294:
    // 0x4f3294: 0x3e00008  jr          $ra
label_4f3298:
    if (ctx->pc == 0x4F3298u) {
        ctx->pc = 0x4F3298u;
            // 0x4f3298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F329Cu;
        goto label_4f329c;
    }
    ctx->pc = 0x4F3294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3294u;
            // 0x4f3298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F329Cu;
label_4f329c:
    // 0x4f329c: 0x0  nop
    ctx->pc = 0x4f329cu;
    // NOP
label_4f32a0:
    // 0x4f32a0: 0x3e00008  jr          $ra
label_4f32a4:
    if (ctx->pc == 0x4F32A4u) {
        ctx->pc = 0x4F32A8u;
        goto label_4f32a8;
    }
    ctx->pc = 0x4F32A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F32A8u;
label_4f32a8:
    // 0x4f32a8: 0x0  nop
    ctx->pc = 0x4f32a8u;
    // NOP
label_4f32ac:
    // 0x4f32ac: 0x0  nop
    ctx->pc = 0x4f32acu;
    // NOP
label_4f32b0:
    // 0x4f32b0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x4f32b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4f32b4:
    // 0x4f32b4: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x4f32b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_4f32b8:
    // 0x4f32b8: 0x8122d2c  j           func_48B4B0
label_4f32bc:
    if (ctx->pc == 0x4F32BCu) {
        ctx->pc = 0x4F32BCu;
            // 0x4f32bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F32C0u;
        goto label_4f32c0;
    }
    ctx->pc = 0x4F32B8u;
    ctx->pc = 0x4F32BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F32B8u;
            // 0x4f32bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4F32C0u;
label_4f32c0:
    // 0x4f32c0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x4f32c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f32c4:
    // 0x4f32c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f32c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f32c8:
    // 0x4f32c8: 0xe4800290  swc1        $f0, 0x290($a0)
    ctx->pc = 0x4f32c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 656), bits); }
label_4f32cc:
    // 0x4f32cc: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x4f32ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f32d0:
    // 0x4f32d0: 0xe4800294  swc1        $f0, 0x294($a0)
    ctx->pc = 0x4f32d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 660), bits); }
label_4f32d4:
    // 0x4f32d4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x4f32d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f32d8:
    // 0x4f32d8: 0xe4800298  swc1        $f0, 0x298($a0)
    ctx->pc = 0x4f32d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
label_4f32dc:
    // 0x4f32dc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x4f32dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f32e0:
    // 0x4f32e0: 0xe480029c  swc1        $f0, 0x29C($a0)
    ctx->pc = 0x4f32e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 668), bits); }
label_4f32e4:
    // 0x4f32e4: 0x80baaa0  j           func_2EAA80
label_4f32e8:
    if (ctx->pc == 0x4F32E8u) {
        ctx->pc = 0x4F32E8u;
            // 0x4f32e8: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->pc = 0x4F32ECu;
        goto label_4f32ec;
    }
    ctx->pc = 0x4F32E4u;
    ctx->pc = 0x4F32E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F32E4u;
            // 0x4f32e8: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4F32ECu;
label_4f32ec:
    // 0x4f32ec: 0x0  nop
    ctx->pc = 0x4f32ecu;
    // NOP
label_4f32f0:
    // 0x4f32f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f32f4:
    // 0x4f32f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f32f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f32f8:
    // 0x4f32f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f32fc:
    // 0x4f32fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f32fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3300:
    // 0x4f3300: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x4f3300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_4f3304:
    // 0x4f3304: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f3308:
    if (ctx->pc == 0x4F3308u) {
        ctx->pc = 0x4F3308u;
            // 0x4f3308: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
        ctx->pc = 0x4F330Cu;
        goto label_4f330c;
    }
    ctx->pc = 0x4F3304u;
    {
        const bool branch_taken_0x4f3304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3304) {
            ctx->pc = 0x4F3308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3304u;
            // 0x4f3308: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3320u;
            goto label_4f3320;
        }
    }
    ctx->pc = 0x4F330Cu;
label_4f330c:
    // 0x4f330c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f330cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3310:
    // 0x4f3310: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f3310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f3314:
    // 0x4f3314: 0x320f809  jalr        $t9
label_4f3318:
    if (ctx->pc == 0x4F3318u) {
        ctx->pc = 0x4F3318u;
            // 0x4f3318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F331Cu;
        goto label_4f331c;
    }
    ctx->pc = 0x4F3314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F331Cu);
        ctx->pc = 0x4F3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3314u;
            // 0x4f3318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F331Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F331Cu; }
            if (ctx->pc != 0x4F331Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F331Cu;
label_4f331c:
    // 0x4f331c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x4f331cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_4f3320:
    // 0x4f3320: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4f3320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4f3324:
    // 0x4f3324: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f3328:
    if (ctx->pc == 0x4F3328u) {
        ctx->pc = 0x4F3328u;
            // 0x4f3328: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4F332Cu;
        goto label_4f332c;
    }
    ctx->pc = 0x4F3324u;
    {
        const bool branch_taken_0x4f3324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3324) {
            ctx->pc = 0x4F3328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3324u;
            // 0x4f3328: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3340u;
            goto label_4f3340;
        }
    }
    ctx->pc = 0x4F332Cu;
label_4f332c:
    // 0x4f332c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4f332cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4f3330:
    // 0x4f3330: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f3330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f3334:
    // 0x4f3334: 0x320f809  jalr        $t9
label_4f3338:
    if (ctx->pc == 0x4F3338u) {
        ctx->pc = 0x4F3338u;
            // 0x4f3338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F333Cu;
        goto label_4f333c;
    }
    ctx->pc = 0x4F3334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F333Cu);
        ctx->pc = 0x4F3338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3334u;
            // 0x4f3338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F333Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F333Cu; }
            if (ctx->pc != 0x4F333Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F333Cu;
label_4f333c:
    // 0x4f333c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4f333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4f3340:
    // 0x4f3340: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4f3340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f3344:
    // 0x4f3344: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f3348:
    if (ctx->pc == 0x4F3348u) {
        ctx->pc = 0x4F3348u;
            // 0x4f3348: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4F334Cu;
        goto label_4f334c;
    }
    ctx->pc = 0x4F3344u;
    {
        const bool branch_taken_0x4f3344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3344) {
            ctx->pc = 0x4F3348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3344u;
            // 0x4f3348: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3360u;
            goto label_4f3360;
        }
    }
    ctx->pc = 0x4F334Cu;
label_4f334c:
    // 0x4f334c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f334cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3350:
    // 0x4f3350: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f3350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f3354:
    // 0x4f3354: 0x320f809  jalr        $t9
label_4f3358:
    if (ctx->pc == 0x4F3358u) {
        ctx->pc = 0x4F3358u;
            // 0x4f3358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F335Cu;
        goto label_4f335c;
    }
    ctx->pc = 0x4F3354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F335Cu);
        ctx->pc = 0x4F3358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3354u;
            // 0x4f3358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F335Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F335Cu; }
            if (ctx->pc != 0x4F335Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F335Cu;
label_4f335c:
    // 0x4f335c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4f335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4f3360:
    // 0x4f3360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f3360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3364:
    // 0x4f3364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3368:
    // 0x4f3368: 0x3e00008  jr          $ra
label_4f336c:
    if (ctx->pc == 0x4F336Cu) {
        ctx->pc = 0x4F336Cu;
            // 0x4f336c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F3370u;
        goto label_4f3370;
    }
    ctx->pc = 0x4F3368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F336Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3368u;
            // 0x4f336c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3370u;
label_4f3370:
    // 0x4f3370: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4f3370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4f3374:
    // 0x4f3374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f3374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f3378:
    // 0x4f3378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f337c:
    // 0x4f337c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f3380:
    // 0x4f3380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f3380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3384:
    // 0x4f3384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f3384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3388:
    // 0x4f3388: 0xc0892d0  jal         func_224B40
label_4f338c:
    if (ctx->pc == 0x4F338Cu) {
        ctx->pc = 0x4F338Cu;
            // 0x4f338c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F3390u;
        goto label_4f3390;
    }
    ctx->pc = 0x4F3388u;
    SET_GPR_U32(ctx, 31, 0x4F3390u);
    ctx->pc = 0x4F338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3388u;
            // 0x4f338c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3390u; }
        if (ctx->pc != 0x4F3390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3390u; }
        if (ctx->pc != 0x4F3390u) { return; }
    }
    ctx->pc = 0x4F3390u;
label_4f3390:
    // 0x4f3390: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f3390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4f3394:
    // 0x4f3394: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4f3394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4f3398:
    // 0x4f3398: 0x8c42aae0  lw          $v0, -0x5520($v0)
    ctx->pc = 0x4f3398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945504)));
label_4f339c:
    // 0x4f339c: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x4f339cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f33a0:
    // 0x4f33a0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4f33a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4f33a4:
    // 0x4f33a4: 0xc0b6e68  jal         func_2DB9A0
label_4f33a8:
    if (ctx->pc == 0x4F33A8u) {
        ctx->pc = 0x4F33A8u;
            // 0x4f33a8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4F33ACu;
        goto label_4f33ac;
    }
    ctx->pc = 0x4F33A4u;
    SET_GPR_U32(ctx, 31, 0x4F33ACu);
    ctx->pc = 0x4F33A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F33A4u;
            // 0x4f33a8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33ACu; }
        if (ctx->pc != 0x4F33ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33ACu; }
        if (ctx->pc != 0x4F33ACu) { return; }
    }
    ctx->pc = 0x4F33ACu;
label_4f33ac:
    // 0x4f33ac: 0xc0b6dac  jal         func_2DB6B0
label_4f33b0:
    if (ctx->pc == 0x4F33B0u) {
        ctx->pc = 0x4F33B0u;
            // 0x4f33b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4F33B4u;
        goto label_4f33b4;
    }
    ctx->pc = 0x4F33ACu;
    SET_GPR_U32(ctx, 31, 0x4F33B4u);
    ctx->pc = 0x4F33B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F33ACu;
            // 0x4f33b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33B4u; }
        if (ctx->pc != 0x4F33B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33B4u; }
        if (ctx->pc != 0x4F33B4u) { return; }
    }
    ctx->pc = 0x4F33B4u;
label_4f33b4:
    // 0x4f33b4: 0xc0cac94  jal         func_32B250
label_4f33b8:
    if (ctx->pc == 0x4F33B8u) {
        ctx->pc = 0x4F33B8u;
            // 0x4f33b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4F33BCu;
        goto label_4f33bc;
    }
    ctx->pc = 0x4F33B4u;
    SET_GPR_U32(ctx, 31, 0x4F33BCu);
    ctx->pc = 0x4F33B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F33B4u;
            // 0x4f33b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33BCu; }
        if (ctx->pc != 0x4F33BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33BCu; }
        if (ctx->pc != 0x4F33BCu) { return; }
    }
    ctx->pc = 0x4F33BCu;
label_4f33bc:
    // 0x4f33bc: 0xc0cac84  jal         func_32B210
label_4f33c0:
    if (ctx->pc == 0x4F33C0u) {
        ctx->pc = 0x4F33C0u;
            // 0x4f33c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4F33C4u;
        goto label_4f33c4;
    }
    ctx->pc = 0x4F33BCu;
    SET_GPR_U32(ctx, 31, 0x4F33C4u);
    ctx->pc = 0x4F33C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F33BCu;
            // 0x4f33c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33C4u; }
        if (ctx->pc != 0x4F33C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33C4u; }
        if (ctx->pc != 0x4F33C4u) { return; }
    }
    ctx->pc = 0x4F33C4u;
label_4f33c4:
    // 0x4f33c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4f33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_4f33c8:
    // 0x4f33c8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4f33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4f33cc:
    // 0x4f33cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f33ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f33d0:
    // 0x4f33d0: 0xc0a5a68  jal         func_2969A0
label_4f33d4:
    if (ctx->pc == 0x4F33D4u) {
        ctx->pc = 0x4F33D4u;
            // 0x4f33d4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4F33D8u;
        goto label_4f33d8;
    }
    ctx->pc = 0x4F33D0u;
    SET_GPR_U32(ctx, 31, 0x4F33D8u);
    ctx->pc = 0x4F33D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F33D0u;
            // 0x4f33d4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33D8u; }
        if (ctx->pc != 0x4F33D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F33D8u; }
        if (ctx->pc != 0x4F33D8u) { return; }
    }
    ctx->pc = 0x4F33D8u;
label_4f33d8:
    // 0x4f33d8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4f33dc:
    // 0x4f33dc: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x4f33dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_4f33e0:
    // 0x4f33e0: 0x8c43aae0  lw          $v1, -0x5520($v0)
    ctx->pc = 0x4f33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945504)));
label_4f33e4:
    // 0x4f33e4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x4f33e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f33e8:
    // 0x4f33e8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4f33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f33ec:
    // 0x4f33ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4f33ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f33f0:
    // 0x4f33f0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x4f33f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f33f4:
    // 0x4f33f4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4f33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4f33f8:
    // 0x4f33f8: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x4f33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f33fc:
    // 0x4f33fc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4f33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_4f3400:
    // 0x4f3400: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x4f3400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4f3404:
    // 0x4f3404: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4f3404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4f3408:
    // 0x4f3408: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4f3408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4f340c:
    // 0x4f340c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x4f340cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_4f3410:
    // 0x4f3410: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x4f3410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_4f3414:
    // 0x4f3414: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x4f3414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_4f3418:
    // 0x4f3418: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f341c:
    // 0x4f341c: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x4f341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4f3420:
    // 0x4f3420: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f3420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4f3424:
    // 0x4f3424: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x4f3424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4f3428:
    // 0x4f3428: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x4f3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4f342c:
    // 0x4f342c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x4f342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4f3430:
    // 0x4f3430: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x4f3430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4f3434:
    // 0x4f3434: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x4f3434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_4f3438:
    // 0x4f3438: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x4f3438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4f343c:
    // 0x4f343c: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4f343cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4f3440:
    // 0x4f3440: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x4f3440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4f3444:
    // 0x4f3444: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4f3444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4f3448:
    // 0x4f3448: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x4f3448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f344c:
    // 0x4f344c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4f344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4f3450:
    // 0x4f3450: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x4f3450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f3454:
    // 0x4f3454: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4f3454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4f3458:
    // 0x4f3458: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4f3458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f345c:
    // 0x4f345c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x4f345cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4f3460:
    // 0x4f3460: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x4f3460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4f3464:
    // 0x4f3464: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x4f3464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4f3468:
    // 0x4f3468: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x4f3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f346c:
    // 0x4f346c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4f346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f3470:
    // 0x4f3470: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4f3470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f3474:
    // 0x4f3474: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x4f3474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4f3478:
    // 0x4f3478: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x4f3478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4f347c:
    // 0x4f347c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x4f347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4f3480:
    // 0x4f3480: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4f3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4f3484:
    // 0x4f3484: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x4f3484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4f3488:
    // 0x4f3488: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x4f3488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f348c:
    // 0x4f348c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4f348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f3490:
    // 0x4f3490: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4f3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f3494:
    // 0x4f3494: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4f3494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f3498:
    // 0x4f3498: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x4f3498u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4f349c:
    // 0x4f349c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x4f349cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4f34a0:
    // 0x4f34a0: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x4f34a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4f34a4:
    // 0x4f34a4: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x4f34a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4f34a8:
    // 0x4f34a8: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x4f34a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4f34ac:
    // 0x4f34ac: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x4f34acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4f34b0:
    // 0x4f34b0: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x4f34b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4f34b4:
    // 0x4f34b4: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x4f34b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4f34b8:
    // 0x4f34b8: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4f34b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4f34bc:
    // 0x4f34bc: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4f34bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4f34c0:
    // 0x4f34c0: 0xc0a7a88  jal         func_29EA20
label_4f34c4:
    if (ctx->pc == 0x4F34C4u) {
        ctx->pc = 0x4F34C4u;
            // 0x4f34c4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4F34C8u;
        goto label_4f34c8;
    }
    ctx->pc = 0x4F34C0u;
    SET_GPR_U32(ctx, 31, 0x4F34C8u);
    ctx->pc = 0x4F34C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F34C0u;
            // 0x4f34c4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F34C8u; }
        if (ctx->pc != 0x4F34C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F34C8u; }
        if (ctx->pc != 0x4F34C8u) { return; }
    }
    ctx->pc = 0x4F34C8u;
label_4f34c8:
    // 0x4f34c8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4f34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4f34cc:
    // 0x4f34cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f34ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f34d0:
    // 0x4f34d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4f34d4:
    if (ctx->pc == 0x4F34D4u) {
        ctx->pc = 0x4F34D4u;
            // 0x4f34d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F34D8u;
        goto label_4f34d8;
    }
    ctx->pc = 0x4F34D0u;
    {
        const bool branch_taken_0x4f34d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F34D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F34D0u;
            // 0x4f34d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f34d0) {
            ctx->pc = 0x4F3520u;
            goto label_4f3520;
        }
    }
    ctx->pc = 0x4F34D8u;
label_4f34d8:
    // 0x4f34d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f34d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f34dc:
    // 0x4f34dc: 0xc088ef4  jal         func_223BD0
label_4f34e0:
    if (ctx->pc == 0x4F34E0u) {
        ctx->pc = 0x4F34E0u;
            // 0x4f34e0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F34E4u;
        goto label_4f34e4;
    }
    ctx->pc = 0x4F34DCu;
    SET_GPR_U32(ctx, 31, 0x4F34E4u);
    ctx->pc = 0x4F34E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F34DCu;
            // 0x4f34e0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F34E4u; }
        if (ctx->pc != 0x4F34E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F34E4u; }
        if (ctx->pc != 0x4F34E4u) { return; }
    }
    ctx->pc = 0x4F34E4u;
label_4f34e4:
    // 0x4f34e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f34e8:
    // 0x4f34e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f34ec:
    // 0x4f34ec: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4f34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4f34f0:
    // 0x4f34f0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4f34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4f34f4:
    // 0x4f34f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f34f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4f34f8:
    // 0x4f34f8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4f34f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4f34fc:
    // 0x4f34fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3500:
    // 0x4f3500: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3504:
    // 0x4f3504: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4f3504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4f3508:
    // 0x4f3508: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4f3508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4f350c:
    // 0x4f350c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4f350cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4f3510:
    // 0x4f3510: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f3514:
    // 0x4f3514: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4f3514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f3518:
    // 0x4f3518: 0xc088b38  jal         func_222CE0
label_4f351c:
    if (ctx->pc == 0x4F351Cu) {
        ctx->pc = 0x4F351Cu;
            // 0x4f351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3520u;
        goto label_4f3520;
    }
    ctx->pc = 0x4F3518u;
    SET_GPR_U32(ctx, 31, 0x4F3520u);
    ctx->pc = 0x4F351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3518u;
            // 0x4f351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3520u; }
        if (ctx->pc != 0x4F3520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3520u; }
        if (ctx->pc != 0x4F3520u) { return; }
    }
    ctx->pc = 0x4F3520u;
label_4f3520:
    // 0x4f3520: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4f3520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4f3524:
    // 0x4f3524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f3524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3528:
    // 0x4f3528: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x4f3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_4f352c:
    // 0x4f352c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4f352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f3530:
    // 0x4f3530: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x4f3530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_4f3534:
    // 0x4f3534: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f3534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f3538:
    // 0x4f3538: 0xc08914c  jal         func_224530
label_4f353c:
    if (ctx->pc == 0x4F353Cu) {
        ctx->pc = 0x4F353Cu;
            // 0x4f353c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3540u;
        goto label_4f3540;
    }
    ctx->pc = 0x4F3538u;
    SET_GPR_U32(ctx, 31, 0x4F3540u);
    ctx->pc = 0x4F353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3538u;
            // 0x4f353c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3540u; }
        if (ctx->pc != 0x4F3540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3540u; }
        if (ctx->pc != 0x4F3540u) { return; }
    }
    ctx->pc = 0x4F3540u;
label_4f3540:
    // 0x4f3540: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4f3540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f3544:
    // 0x4f3544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f3544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3548:
    // 0x4f3548: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4f3548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f354c:
    // 0x4f354c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4f354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4f3550:
    // 0x4f3550: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4f3550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f3554:
    // 0x4f3554: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4f3554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4f3558:
    // 0x4f3558: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4f3558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4f355c:
    // 0x4f355c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4f355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4f3560:
    // 0x4f3560: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4f3560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4f3564:
    // 0x4f3564: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4f3564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4f3568:
    // 0x4f3568: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4f3568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f356c:
    // 0x4f356c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4f356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f3570:
    // 0x4f3570: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4f3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f3574:
    // 0x4f3574: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4f3574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f3578:
    // 0x4f3578: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4f3578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4f357c:
    // 0x4f357c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4f357cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4f3580:
    // 0x4f3580: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4f3580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4f3584:
    // 0x4f3584: 0xc0892b0  jal         func_224AC0
label_4f3588:
    if (ctx->pc == 0x4F3588u) {
        ctx->pc = 0x4F3588u;
            // 0x4f3588: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4F358Cu;
        goto label_4f358c;
    }
    ctx->pc = 0x4F3584u;
    SET_GPR_U32(ctx, 31, 0x4F358Cu);
    ctx->pc = 0x4F3588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3584u;
            // 0x4f3588: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F358Cu; }
        if (ctx->pc != 0x4F358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F358Cu; }
        if (ctx->pc != 0x4F358Cu) { return; }
    }
    ctx->pc = 0x4F358Cu;
label_4f358c:
    // 0x4f358c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4f358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4f3590:
    // 0x4f3590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f3590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3594:
    // 0x4f3594: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4f3594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4f3598:
    // 0x4f3598: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4f3598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4f359c:
    // 0x4f359c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4f359cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4f35a0:
    // 0x4f35a0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4f35a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4f35a4:
    // 0x4f35a4: 0xc0891d8  jal         func_224760
label_4f35a8:
    if (ctx->pc == 0x4F35A8u) {
        ctx->pc = 0x4F35A8u;
            // 0x4f35a8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4F35ACu;
        goto label_4f35ac;
    }
    ctx->pc = 0x4F35A4u;
    SET_GPR_U32(ctx, 31, 0x4F35ACu);
    ctx->pc = 0x4F35A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F35A4u;
            // 0x4f35a8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F35ACu; }
        if (ctx->pc != 0x4F35ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F35ACu; }
        if (ctx->pc != 0x4F35ACu) { return; }
    }
    ctx->pc = 0x4F35ACu;
label_4f35ac:
    // 0x4f35ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x4f35acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_4f35b0:
    // 0x4f35b0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x4f35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_4f35b4:
    // 0x4f35b4: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x4f35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_4f35b8:
    // 0x4f35b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f35b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f35bc:
    // 0x4f35bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f35c0:
    // 0x4f35c0: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x4f35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_4f35c4:
    // 0x4f35c4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f35c8:
    // 0x4f35c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f35cc:
    // 0x4f35cc: 0xc08c164  jal         func_230590
label_4f35d0:
    if (ctx->pc == 0x4F35D0u) {
        ctx->pc = 0x4F35D0u;
            // 0x4f35d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F35D4u;
        goto label_4f35d4;
    }
    ctx->pc = 0x4F35CCu;
    SET_GPR_U32(ctx, 31, 0x4F35D4u);
    ctx->pc = 0x4F35D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F35CCu;
            // 0x4f35d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F35D4u; }
        if (ctx->pc != 0x4F35D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F35D4u; }
        if (ctx->pc != 0x4F35D4u) { return; }
    }
    ctx->pc = 0x4F35D4u;
label_4f35d4:
    // 0x4f35d4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4f35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4f35d8:
    // 0x4f35d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f35dc:
    // 0x4f35dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4f35e0:
    // 0x4f35e0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4f35e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4f35e4:
    // 0x4f35e4: 0xc0a7a88  jal         func_29EA20
label_4f35e8:
    if (ctx->pc == 0x4F35E8u) {
        ctx->pc = 0x4F35E8u;
            // 0x4f35e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4F35ECu;
        goto label_4f35ec;
    }
    ctx->pc = 0x4F35E4u;
    SET_GPR_U32(ctx, 31, 0x4F35ECu);
    ctx->pc = 0x4F35E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F35E4u;
            // 0x4f35e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F35ECu; }
        if (ctx->pc != 0x4F35ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F35ECu; }
        if (ctx->pc != 0x4F35ECu) { return; }
    }
    ctx->pc = 0x4F35ECu;
label_4f35ec:
    // 0x4f35ec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4f35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4f35f0:
    // 0x4f35f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f35f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f35f4:
    // 0x4f35f4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4f35f8:
    if (ctx->pc == 0x4F35F8u) {
        ctx->pc = 0x4F35F8u;
            // 0x4f35f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F35FCu;
        goto label_4f35fc;
    }
    ctx->pc = 0x4F35F4u;
    {
        const bool branch_taken_0x4f35f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F35F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F35F4u;
            // 0x4f35f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f35f4) {
            ctx->pc = 0x4F3618u;
            goto label_4f3618;
        }
    }
    ctx->pc = 0x4F35FCu;
label_4f35fc:
    // 0x4f35fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f35fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f3600:
    // 0x4f3600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f3600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3604:
    // 0x4f3604: 0xc0869d0  jal         func_21A740
label_4f3608:
    if (ctx->pc == 0x4F3608u) {
        ctx->pc = 0x4F3608u;
            // 0x4f3608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F360Cu;
        goto label_4f360c;
    }
    ctx->pc = 0x4F3604u;
    SET_GPR_U32(ctx, 31, 0x4F360Cu);
    ctx->pc = 0x4F3608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3604u;
            // 0x4f3608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F360Cu; }
        if (ctx->pc != 0x4F360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F360Cu; }
        if (ctx->pc != 0x4F360Cu) { return; }
    }
    ctx->pc = 0x4F360Cu;
label_4f360c:
    // 0x4f360c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f3610:
    // 0x4f3610: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4f3610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4f3614:
    // 0x4f3614: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f3614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4f3618:
    // 0x4f3618: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4f3618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4f361c:
    // 0x4f361c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3620:
    // 0x4f3620: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f3624:
    // 0x4f3624: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f3624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f3628:
    // 0x4f3628: 0xc08c650  jal         func_231940
label_4f362c:
    if (ctx->pc == 0x4F362Cu) {
        ctx->pc = 0x4F362Cu;
            // 0x4f362c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3630u;
        goto label_4f3630;
    }
    ctx->pc = 0x4F3628u;
    SET_GPR_U32(ctx, 31, 0x4F3630u);
    ctx->pc = 0x4F362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3628u;
            // 0x4f362c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3630u; }
        if (ctx->pc != 0x4F3630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3630u; }
        if (ctx->pc != 0x4F3630u) { return; }
    }
    ctx->pc = 0x4F3630u;
label_4f3630:
    // 0x4f3630: 0xc040180  jal         func_100600
label_4f3634:
    if (ctx->pc == 0x4F3634u) {
        ctx->pc = 0x4F3634u;
            // 0x4f3634: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4F3638u;
        goto label_4f3638;
    }
    ctx->pc = 0x4F3630u;
    SET_GPR_U32(ctx, 31, 0x4F3638u);
    ctx->pc = 0x4F3634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3630u;
            // 0x4f3634: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3638u; }
        if (ctx->pc != 0x4F3638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3638u; }
        if (ctx->pc != 0x4F3638u) { return; }
    }
    ctx->pc = 0x4F3638u;
label_4f3638:
    // 0x4f3638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f3638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f363c:
    // 0x4f363c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4f3640:
    if (ctx->pc == 0x4F3640u) {
        ctx->pc = 0x4F3640u;
            // 0x4f3640: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4F3644u;
        goto label_4f3644;
    }
    ctx->pc = 0x4F363Cu;
    {
        const bool branch_taken_0x4f363c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f363c) {
            ctx->pc = 0x4F3640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F363Cu;
            // 0x4f3640: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F367Cu;
            goto label_4f367c;
        }
    }
    ctx->pc = 0x4F3644u;
label_4f3644:
    // 0x4f3644: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f3644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f3648:
    // 0x4f3648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f364c:
    // 0x4f364c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4f364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4f3650:
    // 0x4f3650: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4f3650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4f3654:
    // 0x4f3654: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3658:
    // 0x4f3658: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4f3658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4f365c:
    // 0x4f365c: 0xc040138  jal         func_1004E0
label_4f3660:
    if (ctx->pc == 0x4F3660u) {
        ctx->pc = 0x4F3660u;
            // 0x4f3660: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F3664u;
        goto label_4f3664;
    }
    ctx->pc = 0x4F365Cu;
    SET_GPR_U32(ctx, 31, 0x4F3664u);
    ctx->pc = 0x4F3660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F365Cu;
            // 0x4f3660: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3664u; }
        if (ctx->pc != 0x4F3664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3664u; }
        if (ctx->pc != 0x4F3664u) { return; }
    }
    ctx->pc = 0x4F3664u;
label_4f3664:
    // 0x4f3664: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4f3664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4f3668:
    // 0x4f3668: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4f3668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4f366c:
    // 0x4f366c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f366cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3670:
    // 0x4f3670: 0xc04a576  jal         func_1295D8
label_4f3674:
    if (ctx->pc == 0x4F3674u) {
        ctx->pc = 0x4F3674u;
            // 0x4f3674: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4F3678u;
        goto label_4f3678;
    }
    ctx->pc = 0x4F3670u;
    SET_GPR_U32(ctx, 31, 0x4F3678u);
    ctx->pc = 0x4F3674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3670u;
            // 0x4f3674: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3678u; }
        if (ctx->pc != 0x4F3678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3678u; }
        if (ctx->pc != 0x4F3678u) { return; }
    }
    ctx->pc = 0x4F3678u;
label_4f3678:
    // 0x4f3678: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4f3678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4f367c:
    // 0x4f367c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4f367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4f3680:
    // 0x4f3680: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4f3680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4f3684:
    // 0x4f3684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f3684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3688:
    // 0x4f3688: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f3688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f368c:
    // 0x4f368c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f368cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3690:
    // 0x4f3690: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4f3690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_4f3694:
    // 0x4f3694: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4f3694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f3698:
    // 0x4f3698: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4f3698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4f369c:
    // 0x4f369c: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4f369cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_4f36a0:
    // 0x4f36a0: 0xc122cd8  jal         func_48B360
label_4f36a4:
    if (ctx->pc == 0x4F36A4u) {
        ctx->pc = 0x4F36A4u;
            // 0x4f36a4: 0xae300220  sw          $s0, 0x220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 16));
        ctx->pc = 0x4F36A8u;
        goto label_4f36a8;
    }
    ctx->pc = 0x4F36A0u;
    SET_GPR_U32(ctx, 31, 0x4F36A8u);
    ctx->pc = 0x4F36A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F36A0u;
            // 0x4f36a4: 0xae300220  sw          $s0, 0x220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F36A8u; }
        if (ctx->pc != 0x4F36A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F36A8u; }
        if (ctx->pc != 0x4F36A8u) { return; }
    }
    ctx->pc = 0x4F36A8u;
label_4f36a8:
    // 0x4f36a8: 0xc040180  jal         func_100600
label_4f36ac:
    if (ctx->pc == 0x4F36ACu) {
        ctx->pc = 0x4F36ACu;
            // 0x4f36ac: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4F36B0u;
        goto label_4f36b0;
    }
    ctx->pc = 0x4F36A8u;
    SET_GPR_U32(ctx, 31, 0x4F36B0u);
    ctx->pc = 0x4F36ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F36A8u;
            // 0x4f36ac: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F36B0u; }
        if (ctx->pc != 0x4F36B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F36B0u; }
        if (ctx->pc != 0x4F36B0u) { return; }
    }
    ctx->pc = 0x4F36B0u;
label_4f36b0:
    // 0x4f36b0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4f36b4:
    if (ctx->pc == 0x4F36B4u) {
        ctx->pc = 0x4F36B4u;
            // 0x4f36b4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4F36B8u;
        goto label_4f36b8;
    }
    ctx->pc = 0x4F36B0u;
    {
        const bool branch_taken_0x4f36b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f36b0) {
            ctx->pc = 0x4F36B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F36B0u;
            // 0x4f36b4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3700u;
            goto label_4f3700;
        }
    }
    ctx->pc = 0x4F36B8u;
label_4f36b8:
    // 0x4f36b8: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x4f36b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4f36bc:
    // 0x4f36bc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4f36bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4f36c0:
    // 0x4f36c0: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x4f36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_4f36c4:
    // 0x4f36c4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4f36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4f36c8:
    // 0x4f36c8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4f36c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4f36cc:
    // 0x4f36cc: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x4f36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_4f36d0:
    // 0x4f36d0: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x4f36d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_4f36d4:
    // 0x4f36d4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4f36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_4f36d8:
    // 0x4f36d8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x4f36d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_4f36dc:
    // 0x4f36dc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4f36dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4f36e0:
    // 0x4f36e0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4f36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4f36e4:
    // 0x4f36e4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4f36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4f36e8:
    // 0x4f36e8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4f36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4f36ec:
    // 0x4f36ec: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x4f36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_4f36f0:
    // 0x4f36f0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4f36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4f36f4:
    // 0x4f36f4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4f36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4f36f8:
    // 0x4f36f8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4f36f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4f36fc:
    // 0x4f36fc: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x4f36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_4f3700:
    // 0x4f3700: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x4f3700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4f3704:
    // 0x4f3704: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x4f3704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4f3708:
    // 0x4f3708: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4f3708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f370c:
    // 0x4f370c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4f370cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f3710:
    // 0x4f3710: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4f3710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4f3714:
    // 0x4f3714: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x4f3714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_4f3718:
    // 0x4f3718: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x4f3718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_4f371c:
    // 0x4f371c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4f371cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_4f3720:
    // 0x4f3720: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x4f3720u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_4f3724:
    // 0x4f3724: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4f3724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4f3728:
    // 0x4f3728: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x4f3728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_4f372c:
    // 0x4f372c: 0xc4605de0  lwc1        $f0, 0x5DE0($v1)
    ctx->pc = 0x4f372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f3730:
    // 0x4f3730: 0xa2280064  sb          $t0, 0x64($s1)
    ctx->pc = 0x4f3730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 8));
label_4f3734:
    // 0x4f3734: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x4f3734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_4f3738:
    // 0x4f3738: 0xa2270066  sb          $a3, 0x66($s1)
    ctx->pc = 0x4f3738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 7));
label_4f373c:
    // 0x4f373c: 0xa2280067  sb          $t0, 0x67($s1)
    ctx->pc = 0x4f373cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 8));
label_4f3740:
    // 0x4f3740: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x4f3740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_4f3744:
    // 0x4f3744: 0xa2260069  sb          $a2, 0x69($s1)
    ctx->pc = 0x4f3744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 6));
label_4f3748:
    // 0x4f3748: 0xae28008c  sw          $t0, 0x8C($s1)
    ctx->pc = 0x4f3748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 8));
label_4f374c:
    // 0x4f374c: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x4f374cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_4f3750:
    // 0x4f3750: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x4f3750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_4f3754:
    // 0x4f3754: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x4f3754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_4f3758:
    // 0x4f3758: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f3758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f375c:
    // 0x4f375c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f375cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3760:
    // 0x4f3760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3764:
    // 0x4f3764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3768:
    // 0x4f3768: 0x3e00008  jr          $ra
label_4f376c:
    if (ctx->pc == 0x4F376Cu) {
        ctx->pc = 0x4F376Cu;
            // 0x4f376c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4F3770u;
        goto label_4f3770;
    }
    ctx->pc = 0x4F3768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3768u;
            // 0x4f376c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3770u;
label_4f3770:
    // 0x4f3770: 0x3e00008  jr          $ra
label_4f3774:
    if (ctx->pc == 0x4F3774u) {
        ctx->pc = 0x4F3778u;
        goto label_4f3778;
    }
    ctx->pc = 0x4F3770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3778u;
label_4f3778:
    // 0x4f3778: 0x0  nop
    ctx->pc = 0x4f3778u;
    // NOP
label_4f377c:
    // 0x4f377c: 0x0  nop
    ctx->pc = 0x4f377cu;
    // NOP
label_4f3780:
    // 0x4f3780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f3784:
    // 0x4f3784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f3788:
    // 0x4f3788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f3788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f378c:
    // 0x4f378c: 0xc0f4d14  jal         func_3D3450
label_4f3790:
    if (ctx->pc == 0x4F3790u) {
        ctx->pc = 0x4F3790u;
            // 0x4f3790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3794u;
        goto label_4f3794;
    }
    ctx->pc = 0x4F378Cu;
    SET_GPR_U32(ctx, 31, 0x4F3794u);
    ctx->pc = 0x4F3790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F378Cu;
            // 0x4f3790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3450u;
    if (runtime->hasFunction(0x3D3450u)) {
        auto targetFn = runtime->lookupFunction(0x3D3450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3794u; }
        if (ctx->pc != 0x4F3794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3450_0x3d3450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3794u; }
        if (ctx->pc != 0x4F3794u) { return; }
    }
    ctx->pc = 0x4F3794u;
label_4f3794:
    // 0x4f3794: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4f3794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4f3798:
    // 0x4f3798: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x4f3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_4f379c:
    // 0x4f379c: 0xc04cce8  jal         func_1333A0
label_4f37a0:
    if (ctx->pc == 0x4F37A0u) {
        ctx->pc = 0x4F37A0u;
            // 0x4f37a0: 0x24a58990  addiu       $a1, $a1, -0x7670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936976));
        ctx->pc = 0x4F37A4u;
        goto label_4f37a4;
    }
    ctx->pc = 0x4F379Cu;
    SET_GPR_U32(ctx, 31, 0x4F37A4u);
    ctx->pc = 0x4F37A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F379Cu;
            // 0x4f37a0: 0x24a58990  addiu       $a1, $a1, -0x7670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F37A4u; }
        if (ctx->pc != 0x4F37A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F37A4u; }
        if (ctx->pc != 0x4F37A4u) { return; }
    }
    ctx->pc = 0x4F37A4u;
label_4f37a4:
    // 0x4f37a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f37a8:
    // 0x4f37a8: 0xa2030278  sb          $v1, 0x278($s0)
    ctx->pc = 0x4f37a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 632), (uint8_t)GPR_U32(ctx, 3));
label_4f37ac:
    // 0x4f37ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f37acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f37b0:
    // 0x4f37b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f37b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f37b4:
    // 0x4f37b4: 0x3e00008  jr          $ra
label_4f37b8:
    if (ctx->pc == 0x4F37B8u) {
        ctx->pc = 0x4F37B8u;
            // 0x4f37b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F37BCu;
        goto label_4f37bc;
    }
    ctx->pc = 0x4F37B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F37B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F37B4u;
            // 0x4f37b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F37BCu;
label_4f37bc:
    // 0x4f37bc: 0x0  nop
    ctx->pc = 0x4f37bcu;
    // NOP
label_4f37c0:
    // 0x4f37c0: 0x80f4f00  j           func_3D3C00
label_4f37c4:
    if (ctx->pc == 0x4F37C4u) {
        ctx->pc = 0x4F37C8u;
        goto label_4f37c8;
    }
    ctx->pc = 0x4F37C0u;
    ctx->pc = 0x3D3C00u;
    if (runtime->hasFunction(0x3D3C00u)) {
        auto targetFn = runtime->lookupFunction(0x3D3C00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003D3C00_0x3d3c00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4F37C8u;
label_4f37c8:
    // 0x4f37c8: 0x0  nop
    ctx->pc = 0x4f37c8u;
    // NOP
label_4f37cc:
    // 0x4f37cc: 0x0  nop
    ctx->pc = 0x4f37ccu;
    // NOP
label_4f37d0:
    // 0x4f37d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f37d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f37d4:
    // 0x4f37d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f37d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f37d8:
    // 0x4f37d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f37d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f37dc:
    // 0x4f37dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f37dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f37e0:
    // 0x4f37e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f37e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f37e4:
    // 0x4f37e4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_4f37e8:
    if (ctx->pc == 0x4F37E8u) {
        ctx->pc = 0x4F37E8u;
            // 0x4f37e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F37ECu;
        goto label_4f37ec;
    }
    ctx->pc = 0x4F37E4u;
    {
        const bool branch_taken_0x4f37e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F37E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F37E4u;
            // 0x4f37e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f37e4) {
            ctx->pc = 0x4F3880u;
            goto label_4f3880;
        }
    }
    ctx->pc = 0x4F37ECu;
label_4f37ec:
    // 0x4f37ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f37f0:
    // 0x4f37f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f37f4:
    // 0x4f37f4: 0x246342e0  addiu       $v1, $v1, 0x42E0
    ctx->pc = 0x4f37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17120));
label_4f37f8:
    // 0x4f37f8: 0x24424320  addiu       $v0, $v0, 0x4320
    ctx->pc = 0x4f37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17184));
label_4f37fc:
    // 0x4f37fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3800:
    // 0x4f3800: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f3800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f3804:
    // 0x4f3804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f3804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3808:
    // 0x4f3808: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4f3808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4f380c:
    // 0x4f380c: 0x320f809  jalr        $t9
label_4f3810:
    if (ctx->pc == 0x4F3810u) {
        ctx->pc = 0x4F3814u;
        goto label_4f3814;
    }
    ctx->pc = 0x4F380Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F3814u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F3814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F3814u; }
            if (ctx->pc != 0x4F3814u) { return; }
        }
        }
    }
    ctx->pc = 0x4F3814u;
label_4f3814:
    // 0x4f3814: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_4f3818:
    if (ctx->pc == 0x4F3818u) {
        ctx->pc = 0x4F3818u;
            // 0x4f3818: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4F381Cu;
        goto label_4f381c;
    }
    ctx->pc = 0x4F3814u;
    {
        const bool branch_taken_0x4f3814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3814) {
            ctx->pc = 0x4F3818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3814u;
            // 0x4f3818: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F386Cu;
            goto label_4f386c;
        }
    }
    ctx->pc = 0x4F381Cu;
label_4f381c:
    // 0x4f381c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f3820:
    // 0x4f3820: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f3820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f3824:
    // 0x4f3824: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x4f3824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_4f3828:
    // 0x4f3828: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x4f3828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_4f382c:
    // 0x4f382c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f382cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3830:
    // 0x4f3830: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f3830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f3834:
    // 0x4f3834: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4f3834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f3838:
    // 0x4f3838: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4f3838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4f383c:
    // 0x4f383c: 0x320f809  jalr        $t9
label_4f3840:
    if (ctx->pc == 0x4F3840u) {
        ctx->pc = 0x4F3840u;
            // 0x4f3840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3844u;
        goto label_4f3844;
    }
    ctx->pc = 0x4F383Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F3844u);
        ctx->pc = 0x4F3840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F383Cu;
            // 0x4f3840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F3844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F3844u; }
            if (ctx->pc != 0x4F3844u) { return; }
        }
        }
    }
    ctx->pc = 0x4F3844u;
label_4f3844:
    // 0x4f3844: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x4f3844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_4f3848:
    // 0x4f3848: 0xc0a9844  jal         func_2A6110
label_4f384c:
    if (ctx->pc == 0x4F384Cu) {
        ctx->pc = 0x4F384Cu;
            // 0x4f384c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4F3850u;
        goto label_4f3850;
    }
    ctx->pc = 0x4F3848u;
    SET_GPR_U32(ctx, 31, 0x4F3850u);
    ctx->pc = 0x4F384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3848u;
            // 0x4f384c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3850u; }
        if (ctx->pc != 0x4F3850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6110_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3850u; }
        if (ctx->pc != 0x4F3850u) { return; }
    }
    ctx->pc = 0x4F3850u;
label_4f3850:
    // 0x4f3850: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x4f3850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4f3854:
    // 0x4f3854: 0xc0ada2c  jal         func_2B68B0
label_4f3858:
    if (ctx->pc == 0x4F3858u) {
        ctx->pc = 0x4F3858u;
            // 0x4f3858: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4F385Cu;
        goto label_4f385c;
    }
    ctx->pc = 0x4F3854u;
    SET_GPR_U32(ctx, 31, 0x4F385Cu);
    ctx->pc = 0x4F3858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3854u;
            // 0x4f3858: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B68B0u;
    if (runtime->hasFunction(0x2B68B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B68B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F385Cu; }
        if (ctx->pc != 0x4F385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B68B0_0x2b68b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F385Cu; }
        if (ctx->pc != 0x4F385Cu) { return; }
    }
    ctx->pc = 0x4F385Cu;
label_4f385c:
    // 0x4f385c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3860:
    // 0x4f3860: 0xc0aee40  jal         func_2BB900
label_4f3864:
    if (ctx->pc == 0x4F3864u) {
        ctx->pc = 0x4F3864u;
            // 0x4f3864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3868u;
        goto label_4f3868;
    }
    ctx->pc = 0x4F3860u;
    SET_GPR_U32(ctx, 31, 0x4F3868u);
    ctx->pc = 0x4F3864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3860u;
            // 0x4f3864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3868u; }
        if (ctx->pc != 0x4F3868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3868u; }
        if (ctx->pc != 0x4F3868u) { return; }
    }
    ctx->pc = 0x4F3868u;
label_4f3868:
    // 0x4f3868: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f3868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4f386c:
    // 0x4f386c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f386cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f3870:
    // 0x4f3870: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f3874:
    if (ctx->pc == 0x4F3874u) {
        ctx->pc = 0x4F3874u;
            // 0x4f3874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3878u;
        goto label_4f3878;
    }
    ctx->pc = 0x4F3870u;
    {
        const bool branch_taken_0x4f3870 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f3870) {
            ctx->pc = 0x4F3874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3870u;
            // 0x4f3874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3884u;
            goto label_4f3884;
        }
    }
    ctx->pc = 0x4F3878u;
label_4f3878:
    // 0x4f3878: 0xc0400a8  jal         func_1002A0
label_4f387c:
    if (ctx->pc == 0x4F387Cu) {
        ctx->pc = 0x4F387Cu;
            // 0x4f387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3880u;
        goto label_4f3880;
    }
    ctx->pc = 0x4F3878u;
    SET_GPR_U32(ctx, 31, 0x4F3880u);
    ctx->pc = 0x4F387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3878u;
            // 0x4f387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3880u; }
        if (ctx->pc != 0x4F3880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3880u; }
        if (ctx->pc != 0x4F3880u) { return; }
    }
    ctx->pc = 0x4F3880u;
label_4f3880:
    // 0x4f3880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f3880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3884:
    // 0x4f3884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f3884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3888:
    // 0x4f3888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f388c:
    // 0x4f388c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f388cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3890:
    // 0x4f3890: 0x3e00008  jr          $ra
label_4f3894:
    if (ctx->pc == 0x4F3894u) {
        ctx->pc = 0x4F3894u;
            // 0x4f3894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F3898u;
        goto label_4f3898;
    }
    ctx->pc = 0x4F3890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3890u;
            // 0x4f3894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3898u;
label_4f3898:
    // 0x4f3898: 0x0  nop
    ctx->pc = 0x4f3898u;
    // NOP
label_4f389c:
    // 0x4f389c: 0x0  nop
    ctx->pc = 0x4f389cu;
    // NOP
label_4f38a0:
    // 0x4f38a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f38a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f38a4:
    // 0x4f38a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f38a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f38a8:
    // 0x4f38a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f38a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f38ac:
    // 0x4f38ac: 0xc0b1370  jal         func_2C4DC0
label_4f38b0:
    if (ctx->pc == 0x4F38B0u) {
        ctx->pc = 0x4F38B0u;
            // 0x4f38b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F38B4u;
        goto label_4f38b4;
    }
    ctx->pc = 0x4F38ACu;
    SET_GPR_U32(ctx, 31, 0x4F38B4u);
    ctx->pc = 0x4F38B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F38ACu;
            // 0x4f38b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F38B4u; }
        if (ctx->pc != 0x4F38B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F38B4u; }
        if (ctx->pc != 0x4F38B4u) { return; }
    }
    ctx->pc = 0x4F38B4u;
label_4f38b4:
    // 0x4f38b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f38b8:
    // 0x4f38b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f38bc:
    // 0x4f38bc: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x4f38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_4f38c0:
    // 0x4f38c0: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x4f38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_4f38c4:
    // 0x4f38c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f38c8:
    // 0x4f38c8: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x4f38c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4f38cc:
    // 0x4f38cc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f38d0:
    // 0x4f38d0: 0xc0adb98  jal         func_2B6E60
label_4f38d4:
    if (ctx->pc == 0x4F38D4u) {
        ctx->pc = 0x4F38D4u;
            // 0x4f38d4: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x4F38D8u;
        goto label_4f38d8;
    }
    ctx->pc = 0x4F38D0u;
    SET_GPR_U32(ctx, 31, 0x4F38D8u);
    ctx->pc = 0x4F38D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F38D0u;
            // 0x4f38d4: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F38D8u; }
        if (ctx->pc != 0x4F38D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F38D8u; }
        if (ctx->pc != 0x4F38D8u) { return; }
    }
    ctx->pc = 0x4F38D8u;
label_4f38d8:
    // 0x4f38d8: 0xc0ada8c  jal         func_2B6A30
label_4f38dc:
    if (ctx->pc == 0x4F38DCu) {
        ctx->pc = 0x4F38DCu;
            // 0x4f38dc: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->pc = 0x4F38E0u;
        goto label_4f38e0;
    }
    ctx->pc = 0x4F38D8u;
    SET_GPR_U32(ctx, 31, 0x4F38E0u);
    ctx->pc = 0x4F38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F38D8u;
            // 0x4f38dc: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F38E0u; }
        if (ctx->pc != 0x4F38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F38E0u; }
        if (ctx->pc != 0x4F38E0u) { return; }
    }
    ctx->pc = 0x4F38E0u;
label_4f38e0:
    // 0x4f38e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f38e4:
    // 0x4f38e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f38e8:
    // 0x4f38e8: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x4f38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_4f38ec:
    // 0x4f38ec: 0x246342e0  addiu       $v1, $v1, 0x42E0
    ctx->pc = 0x4f38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17120));
label_4f38f0:
    // 0x4f38f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f38f4:
    // 0x4f38f4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4f38f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4f38f8:
    // 0x4f38f8: 0x24424320  addiu       $v0, $v0, 0x4320
    ctx->pc = 0x4f38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17184));
label_4f38fc:
    // 0x4f38fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3900:
    // 0x4f3900: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f3900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f3904:
    // 0x4f3904: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x4f3904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_4f3908:
    // 0x4f3908: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x4f3908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_4f390c:
    // 0x4f390c: 0x24a58990  addiu       $a1, $a1, -0x7670
    ctx->pc = 0x4f390cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936976));
label_4f3910:
    // 0x4f3910: 0xc04cce8  jal         func_1333A0
label_4f3914:
    if (ctx->pc == 0x4F3914u) {
        ctx->pc = 0x4F3914u;
            // 0x4f3914: 0xa2000279  sb          $zero, 0x279($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 633), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4F3918u;
        goto label_4f3918;
    }
    ctx->pc = 0x4F3910u;
    SET_GPR_U32(ctx, 31, 0x4F3918u);
    ctx->pc = 0x4F3914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3910u;
            // 0x4f3914: 0xa2000279  sb          $zero, 0x279($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 633), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3918u; }
        if (ctx->pc != 0x4F3918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3918u; }
        if (ctx->pc != 0x4F3918u) { return; }
    }
    ctx->pc = 0x4F3918u;
label_4f3918:
    // 0x4f3918: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f3918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f391c:
    // 0x4f391c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3920:
    // 0x4f3920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3924:
    // 0x4f3924: 0x3e00008  jr          $ra
label_4f3928:
    if (ctx->pc == 0x4F3928u) {
        ctx->pc = 0x4F3928u;
            // 0x4f3928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F392Cu;
        goto label_4f392c;
    }
    ctx->pc = 0x4F3924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3924u;
            // 0x4f3928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F392Cu;
label_4f392c:
    // 0x4f392c: 0x0  nop
    ctx->pc = 0x4f392cu;
    // NOP
label_4f3930:
    // 0x4f3930: 0x3e00008  jr          $ra
label_4f3934:
    if (ctx->pc == 0x4F3934u) {
        ctx->pc = 0x4F3934u;
            // 0x4f3934: 0x240242b8  addiu       $v0, $zero, 0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17080));
        ctx->pc = 0x4F3938u;
        goto label_4f3938;
    }
    ctx->pc = 0x4F3930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3930u;
            // 0x4f3934: 0x240242b8  addiu       $v0, $zero, 0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3938u;
label_4f3938:
    // 0x4f3938: 0x0  nop
    ctx->pc = 0x4f3938u;
    // NOP
label_4f393c:
    // 0x4f393c: 0x0  nop
    ctx->pc = 0x4f393cu;
    // NOP
label_4f3940:
    // 0x4f3940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f3940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f3944:
    // 0x4f3944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4f3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4f3948:
    // 0x4f3948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f3948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f394c:
    // 0x4f394c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f3950:
    // 0x4f3950: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f3950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3954:
    // 0x4f3954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f3954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f3958:
    // 0x4f3958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f395c:
    // 0x4f395c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3960:
    // 0x4f3960: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4f3960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f3964:
    // 0x4f3964: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4f3968:
    if (ctx->pc == 0x4F3968u) {
        ctx->pc = 0x4F3968u;
            // 0x4f3968: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F396Cu;
        goto label_4f396c;
    }
    ctx->pc = 0x4F3964u;
    {
        const bool branch_taken_0x4f3964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3964u;
            // 0x4f3968: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3964) {
            ctx->pc = 0x4F39A8u;
            goto label_4f39a8;
        }
    }
    ctx->pc = 0x4F396Cu;
label_4f396c:
    // 0x4f396c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f396cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3970:
    // 0x4f3970: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f3970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3974:
    // 0x4f3974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f3974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3978:
    // 0x4f3978: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4f3978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4f397c:
    // 0x4f397c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f3980:
    // 0x4f3980: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f3980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f3984:
    // 0x4f3984: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f3984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3988:
    // 0x4f3988: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4f3988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4f398c:
    // 0x4f398c: 0x320f809  jalr        $t9
label_4f3990:
    if (ctx->pc == 0x4F3990u) {
        ctx->pc = 0x4F3994u;
        goto label_4f3994;
    }
    ctx->pc = 0x4F398Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F3994u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F3994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F3994u; }
            if (ctx->pc != 0x4F3994u) { return; }
        }
        }
    }
    ctx->pc = 0x4F3994u;
label_4f3994:
    // 0x4f3994: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4f3994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4f3998:
    // 0x4f3998: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4f3998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4f399c:
    // 0x4f399c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4f399cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f39a0:
    // 0x4f39a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4f39a4:
    if (ctx->pc == 0x4F39A4u) {
        ctx->pc = 0x4F39A4u;
            // 0x4f39a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F39A8u;
        goto label_4f39a8;
    }
    ctx->pc = 0x4F39A0u;
    {
        const bool branch_taken_0x4f39a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F39A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F39A0u;
            // 0x4f39a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f39a0) {
            ctx->pc = 0x4F3978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f3978;
        }
    }
    ctx->pc = 0x4F39A8u;
label_4f39a8:
    // 0x4f39a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f39a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f39ac:
    // 0x4f39ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4f39acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4f39b0:
    // 0x4f39b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f39b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f39b4:
    // 0x4f39b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f39b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f39b8:
    // 0x4f39b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f39b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f39bc:
    // 0x4f39bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f39bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f39c0:
    // 0x4f39c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f39c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f39c4:
    // 0x4f39c4: 0x3e00008  jr          $ra
label_4f39c8:
    if (ctx->pc == 0x4F39C8u) {
        ctx->pc = 0x4F39C8u;
            // 0x4f39c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F39CCu;
        goto label_4f39cc;
    }
    ctx->pc = 0x4F39C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F39C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F39C4u;
            // 0x4f39c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F39CCu;
label_4f39cc:
    // 0x4f39cc: 0x0  nop
    ctx->pc = 0x4f39ccu;
    // NOP
label_4f39d0:
    // 0x4f39d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f39d4:
    // 0x4f39d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f39d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f39d8:
    // 0x4f39d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f39dc:
    // 0x4f39dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4f39dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4f39e0:
    // 0x4f39e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f39e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f39e4:
    // 0x4f39e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4f39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f39e8:
    // 0x4f39e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f39e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f39ec:
    // 0x4f39ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4f39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4f39f0:
    // 0x4f39f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f39f4:
    // 0x4f39f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f39f8:
    // 0x4f39f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4f39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4f39fc:
    // 0x4f39fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4f39fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f3a00:
    // 0x4f3a00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4f3a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4f3a04:
    // 0x4f3a04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3a08:
    // 0x4f3a08: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4f3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4f3a0c:
    // 0x4f3a0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4f3a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4f3a10:
    // 0x4f3a10: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4f3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f3a14:
    // 0x4f3a14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f3a18:
    // 0x4f3a18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4f3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4f3a1c:
    // 0x4f3a1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4f3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f3a20:
    // 0x4f3a20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4f3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4f3a24:
    // 0x4f3a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f3a28:
    // 0x4f3a28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4f3a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f3a2c:
    // 0x4f3a2c: 0xc0a997c  jal         func_2A65F0
label_4f3a30:
    if (ctx->pc == 0x4F3A30u) {
        ctx->pc = 0x4F3A30u;
            // 0x4f3a30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4F3A34u;
        goto label_4f3a34;
    }
    ctx->pc = 0x4F3A2Cu;
    SET_GPR_U32(ctx, 31, 0x4F3A34u);
    ctx->pc = 0x4F3A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3A2Cu;
            // 0x4f3a30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3A34u; }
        if (ctx->pc != 0x4F3A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3A34u; }
        if (ctx->pc != 0x4F3A34u) { return; }
    }
    ctx->pc = 0x4F3A34u;
label_4f3a34:
    // 0x4f3a34: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4f3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4f3a38:
    // 0x4f3a38: 0xc0d879c  jal         func_361E70
label_4f3a3c:
    if (ctx->pc == 0x4F3A3Cu) {
        ctx->pc = 0x4F3A3Cu;
            // 0x4f3a3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3A40u;
        goto label_4f3a40;
    }
    ctx->pc = 0x4F3A38u;
    SET_GPR_U32(ctx, 31, 0x4F3A40u);
    ctx->pc = 0x4F3A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3A38u;
            // 0x4f3a3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3A40u; }
        if (ctx->pc != 0x4F3A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3A40u; }
        if (ctx->pc != 0x4F3A40u) { return; }
    }
    ctx->pc = 0x4F3A40u;
label_4f3a40:
    // 0x4f3a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f3a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3a44:
    // 0x4f3a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3a48:
    // 0x4f3a48: 0x3e00008  jr          $ra
label_4f3a4c:
    if (ctx->pc == 0x4F3A4Cu) {
        ctx->pc = 0x4F3A4Cu;
            // 0x4f3a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F3A50u;
        goto label_4f3a50;
    }
    ctx->pc = 0x4F3A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3A48u;
            // 0x4f3a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3A50u;
label_4f3a50:
    // 0x4f3a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f3a54:
    // 0x4f3a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f3a58:
    // 0x4f3a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f3a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3a5c:
    // 0x4f3a5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4f3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4f3a60:
    // 0x4f3a60: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4f3a64:
    if (ctx->pc == 0x4F3A64u) {
        ctx->pc = 0x4F3A64u;
            // 0x4f3a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3A68u;
        goto label_4f3a68;
    }
    ctx->pc = 0x4F3A60u;
    {
        const bool branch_taken_0x4f3a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3A60u;
            // 0x4f3a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3a60) {
            ctx->pc = 0x4F3B80u;
            goto label_4f3b80;
        }
    }
    ctx->pc = 0x4F3A68u;
label_4f3a68:
    // 0x4f3a68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f3a6c:
    // 0x4f3a6c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f3a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4f3a70:
    // 0x4f3a70: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f3a74:
    // 0x4f3a74: 0xc075128  jal         func_1D44A0
label_4f3a78:
    if (ctx->pc == 0x4F3A78u) {
        ctx->pc = 0x4F3A78u;
            // 0x4f3a78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4F3A7Cu;
        goto label_4f3a7c;
    }
    ctx->pc = 0x4F3A74u;
    SET_GPR_U32(ctx, 31, 0x4F3A7Cu);
    ctx->pc = 0x4F3A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3A74u;
            // 0x4f3a78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3A7Cu; }
        if (ctx->pc != 0x4F3A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3A7Cu; }
        if (ctx->pc != 0x4F3A7Cu) { return; }
    }
    ctx->pc = 0x4F3A7Cu;
label_4f3a7c:
    // 0x4f3a7c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4f3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f3a80:
    // 0x4f3a80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3a84:
    // 0x4f3a84: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4f3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4f3a88:
    // 0x4f3a88: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4f3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f3a8c:
    // 0x4f3a8c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f3a8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f3a90:
    // 0x4f3a90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f3a94:
    if (ctx->pc == 0x4F3A94u) {
        ctx->pc = 0x4F3A94u;
            // 0x4f3a94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4F3A98u;
        goto label_4f3a98;
    }
    ctx->pc = 0x4F3A90u;
    {
        const bool branch_taken_0x4f3a90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3A90u;
            // 0x4f3a94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3a90) {
            ctx->pc = 0x4F3AA0u;
            goto label_4f3aa0;
        }
    }
    ctx->pc = 0x4F3A98u;
label_4f3a98:
    // 0x4f3a98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3a9c:
    // 0x4f3a9c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4f3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4f3aa0:
    // 0x4f3aa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3aa4:
    // 0x4f3aa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3aa8:
    // 0x4f3aa8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4f3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4f3aac:
    // 0x4f3aac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f3ab0:
    // 0x4f3ab0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f3ab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f3ab4:
    // 0x4f3ab4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f3ab8:
    if (ctx->pc == 0x4F3AB8u) {
        ctx->pc = 0x4F3AB8u;
            // 0x4f3ab8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F3ABCu;
        goto label_4f3abc;
    }
    ctx->pc = 0x4F3AB4u;
    {
        const bool branch_taken_0x4f3ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3ab4) {
            ctx->pc = 0x4F3AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3AB4u;
            // 0x4f3ab8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3AC8u;
            goto label_4f3ac8;
        }
    }
    ctx->pc = 0x4F3ABCu;
label_4f3abc:
    // 0x4f3abc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3ac0:
    // 0x4f3ac0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4f3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4f3ac4:
    // 0x4f3ac4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f3ac8:
    // 0x4f3ac8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3acc:
    // 0x4f3acc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4f3accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4f3ad0:
    // 0x4f3ad0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f3ad4:
    // 0x4f3ad4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f3ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f3ad8:
    // 0x4f3ad8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f3adc:
    if (ctx->pc == 0x4F3ADCu) {
        ctx->pc = 0x4F3ADCu;
            // 0x4f3adc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4F3AE0u;
        goto label_4f3ae0;
    }
    ctx->pc = 0x4F3AD8u;
    {
        const bool branch_taken_0x4f3ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3ad8) {
            ctx->pc = 0x4F3ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3AD8u;
            // 0x4f3adc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3AECu;
            goto label_4f3aec;
        }
    }
    ctx->pc = 0x4F3AE0u;
label_4f3ae0:
    // 0x4f3ae0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3ae4:
    // 0x4f3ae4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4f3ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4f3ae8:
    // 0x4f3ae8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4f3ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f3aec:
    // 0x4f3aec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4f3aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4f3af0:
    // 0x4f3af0: 0x320f809  jalr        $t9
label_4f3af4:
    if (ctx->pc == 0x4F3AF4u) {
        ctx->pc = 0x4F3AF4u;
            // 0x4f3af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3AF8u;
        goto label_4f3af8;
    }
    ctx->pc = 0x4F3AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F3AF8u);
        ctx->pc = 0x4F3AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3AF0u;
            // 0x4f3af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F3AF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F3AF8u; }
            if (ctx->pc != 0x4F3AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F3AF8u;
label_4f3af8:
    // 0x4f3af8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f3afc:
    // 0x4f3afc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b00:
    // 0x4f3b00: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4f3b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4f3b04:
    // 0x4f3b04: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f3b08:
    // 0x4f3b08: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f3b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f3b0c:
    // 0x4f3b0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f3b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f3b10:
    // 0x4f3b10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f3b14:
    if (ctx->pc == 0x4F3B14u) {
        ctx->pc = 0x4F3B14u;
            // 0x4f3b14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4F3B18u;
        goto label_4f3b18;
    }
    ctx->pc = 0x4F3B10u;
    {
        const bool branch_taken_0x4f3b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3b10) {
            ctx->pc = 0x4F3B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3B10u;
            // 0x4f3b14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3B24u;
            goto label_4f3b24;
        }
    }
    ctx->pc = 0x4F3B18u;
label_4f3b18:
    // 0x4f3b18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b1c:
    // 0x4f3b1c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4f3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4f3b20:
    // 0x4f3b20: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f3b24:
    // 0x4f3b24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b28:
    // 0x4f3b28: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4f3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4f3b2c:
    // 0x4f3b2c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f3b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f3b30:
    // 0x4f3b30: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f3b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f3b34:
    // 0x4f3b34: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f3b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f3b38:
    // 0x4f3b38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f3b3c:
    if (ctx->pc == 0x4F3B3Cu) {
        ctx->pc = 0x4F3B40u;
        goto label_4f3b40;
    }
    ctx->pc = 0x4F3B38u;
    {
        const bool branch_taken_0x4f3b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3b38) {
            ctx->pc = 0x4F3B48u;
            goto label_4f3b48;
        }
    }
    ctx->pc = 0x4F3B40u;
label_4f3b40:
    // 0x4f3b40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b44:
    // 0x4f3b44: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4f3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4f3b48:
    // 0x4f3b48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b4c:
    // 0x4f3b4c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4f3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4f3b50:
    // 0x4f3b50: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f3b50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f3b54:
    // 0x4f3b54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f3b58:
    if (ctx->pc == 0x4F3B58u) {
        ctx->pc = 0x4F3B5Cu;
        goto label_4f3b5c;
    }
    ctx->pc = 0x4F3B54u;
    {
        const bool branch_taken_0x4f3b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3b54) {
            ctx->pc = 0x4F3B64u;
            goto label_4f3b64;
        }
    }
    ctx->pc = 0x4F3B5Cu;
label_4f3b5c:
    // 0x4f3b5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b60:
    // 0x4f3b60: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4f3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4f3b64:
    // 0x4f3b64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b68:
    // 0x4f3b68: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4f3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4f3b6c:
    // 0x4f3b6c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f3b6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f3b70:
    // 0x4f3b70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f3b74:
    if (ctx->pc == 0x4F3B74u) {
        ctx->pc = 0x4F3B74u;
            // 0x4f3b74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4F3B78u;
        goto label_4f3b78;
    }
    ctx->pc = 0x4F3B70u;
    {
        const bool branch_taken_0x4f3b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3b70) {
            ctx->pc = 0x4F3B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3B70u;
            // 0x4f3b74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3B84u;
            goto label_4f3b84;
        }
    }
    ctx->pc = 0x4F3B78u;
label_4f3b78:
    // 0x4f3b78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f3b7c:
    // 0x4f3b7c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4f3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4f3b80:
    // 0x4f3b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f3b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3b84:
    // 0x4f3b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3b88:
    // 0x4f3b88: 0x3e00008  jr          $ra
label_4f3b8c:
    if (ctx->pc == 0x4F3B8Cu) {
        ctx->pc = 0x4F3B8Cu;
            // 0x4f3b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F3B90u;
        goto label_4f3b90;
    }
    ctx->pc = 0x4F3B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3B88u;
            // 0x4f3b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3B90u;
label_4f3b90:
    // 0x4f3b90: 0x813cdf4  j           func_4F37D0
label_4f3b94:
    if (ctx->pc == 0x4F3B94u) {
        ctx->pc = 0x4F3B94u;
            // 0x4f3b94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4F3B98u;
        goto label_4f3b98;
    }
    ctx->pc = 0x4F3B90u;
    ctx->pc = 0x4F3B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3B90u;
            // 0x4f3b94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F37D0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4f37d0;
    ctx->pc = 0x4F3B98u;
label_4f3b98:
    // 0x4f3b98: 0x0  nop
    ctx->pc = 0x4f3b98u;
    // NOP
label_4f3b9c:
    // 0x4f3b9c: 0x0  nop
    ctx->pc = 0x4f3b9cu;
    // NOP
label_4f3ba0:
    // 0x4f3ba0: 0x813cb14  j           func_4F2C50
label_4f3ba4:
    if (ctx->pc == 0x4F3BA4u) {
        ctx->pc = 0x4F3BA4u;
            // 0x4f3ba4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F3BA8u;
        goto label_4f3ba8;
    }
    ctx->pc = 0x4F3BA0u;
    ctx->pc = 0x4F3BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3BA0u;
            // 0x4f3ba4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2C50u;
    {
        auto targetFn = runtime->lookupFunction(0x4F2C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F3BA8u;
label_4f3ba8:
    // 0x4f3ba8: 0x0  nop
    ctx->pc = 0x4f3ba8u;
    // NOP
label_4f3bac:
    // 0x4f3bac: 0x0  nop
    ctx->pc = 0x4f3bacu;
    // NOP
label_4f3bb0:
    // 0x4f3bb0: 0x813c9c0  j           func_4F2700
label_4f3bb4:
    if (ctx->pc == 0x4F3BB4u) {
        ctx->pc = 0x4F3BB4u;
            // 0x4f3bb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F3BB8u;
        goto label_4f3bb8;
    }
    ctx->pc = 0x4F3BB0u;
    ctx->pc = 0x4F3BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3BB0u;
            // 0x4f3bb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2700u;
    if (runtime->hasFunction(0x4F2700u)) {
        auto targetFn = runtime->lookupFunction(0x4F2700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004F2700_0x4f2700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4F3BB8u;
label_4f3bb8:
    // 0x4f3bb8: 0x0  nop
    ctx->pc = 0x4f3bb8u;
    // NOP
label_4f3bbc:
    // 0x4f3bbc: 0x0  nop
    ctx->pc = 0x4f3bbcu;
    // NOP
label_4f3bc0:
    // 0x4f3bc0: 0x813c99c  j           func_4F2670
label_4f3bc4:
    if (ctx->pc == 0x4F3BC4u) {
        ctx->pc = 0x4F3BC4u;
            // 0x4f3bc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F3BC8u;
        goto label_4f3bc8;
    }
    ctx->pc = 0x4F3BC0u;
    ctx->pc = 0x4F3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3BC0u;
            // 0x4f3bc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2670u;
    {
        auto targetFn = runtime->lookupFunction(0x4F2670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F3BC8u;
label_4f3bc8:
    // 0x4f3bc8: 0x0  nop
    ctx->pc = 0x4f3bc8u;
    // NOP
label_4f3bcc:
    // 0x4f3bcc: 0x0  nop
    ctx->pc = 0x4f3bccu;
    // NOP
label_4f3bd0:
    // 0x4f3bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f3bd4:
    // 0x4f3bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f3bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f3bd8:
    // 0x4f3bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f3bdc:
    // 0x4f3bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f3bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3be0:
    // 0x4f3be0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f3be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3be4:
    // 0x4f3be4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_4f3be8:
    if (ctx->pc == 0x4F3BE8u) {
        ctx->pc = 0x4F3BE8u;
            // 0x4f3be8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3BECu;
        goto label_4f3bec;
    }
    ctx->pc = 0x4F3BE4u;
    {
        const bool branch_taken_0x4f3be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3BE4u;
            // 0x4f3be8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3be4) {
            ctx->pc = 0x4F3C58u;
            goto label_4f3c58;
        }
    }
    ctx->pc = 0x4F3BECu;
label_4f3bec:
    // 0x4f3bec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f3becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f3bf0:
    // 0x4f3bf0: 0x24424390  addiu       $v0, $v0, 0x4390
    ctx->pc = 0x4f3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
label_4f3bf4:
    // 0x4f3bf4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_4f3bf8:
    if (ctx->pc == 0x4F3BF8u) {
        ctx->pc = 0x4F3BF8u;
            // 0x4f3bf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F3BFCu;
        goto label_4f3bfc;
    }
    ctx->pc = 0x4F3BF4u;
    {
        const bool branch_taken_0x4f3bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3BF4u;
            // 0x4f3bf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3bf4) {
            ctx->pc = 0x4F3C40u;
            goto label_4f3c40;
        }
    }
    ctx->pc = 0x4F3BFCu;
label_4f3bfc:
    // 0x4f3bfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f3c00:
    // 0x4f3c00: 0x244257b0  addiu       $v0, $v0, 0x57B0
    ctx->pc = 0x4f3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
label_4f3c04:
    // 0x4f3c04: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4f3c08:
    if (ctx->pc == 0x4F3C08u) {
        ctx->pc = 0x4F3C08u;
            // 0x4f3c08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F3C0Cu;
        goto label_4f3c0c;
    }
    ctx->pc = 0x4F3C04u;
    {
        const bool branch_taken_0x4f3c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C04u;
            // 0x4f3c08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3c04) {
            ctx->pc = 0x4F3C40u;
            goto label_4f3c40;
        }
    }
    ctx->pc = 0x4F3C0Cu;
label_4f3c0c:
    // 0x4f3c0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f3c10:
    // 0x4f3c10: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4f3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4f3c14:
    // 0x4f3c14: 0xc0d37dc  jal         func_34DF70
label_4f3c18:
    if (ctx->pc == 0x4F3C18u) {
        ctx->pc = 0x4F3C18u;
            // 0x4f3c18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F3C1Cu;
        goto label_4f3c1c;
    }
    ctx->pc = 0x4F3C14u;
    SET_GPR_U32(ctx, 31, 0x4F3C1Cu);
    ctx->pc = 0x4F3C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C14u;
            // 0x4f3c18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3C1Cu; }
        if (ctx->pc != 0x4F3C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3C1Cu; }
        if (ctx->pc != 0x4F3C1Cu) { return; }
    }
    ctx->pc = 0x4F3C1Cu;
label_4f3c1c:
    // 0x4f3c1c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4f3c20:
    if (ctx->pc == 0x4F3C20u) {
        ctx->pc = 0x4F3C20u;
            // 0x4f3c20: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4F3C24u;
        goto label_4f3c24;
    }
    ctx->pc = 0x4F3C1Cu;
    {
        const bool branch_taken_0x4f3c1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3c1c) {
            ctx->pc = 0x4F3C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C1Cu;
            // 0x4f3c20: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3C44u;
            goto label_4f3c44;
        }
    }
    ctx->pc = 0x4F3C24u;
label_4f3c24:
    // 0x4f3c24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f3c28:
    // 0x4f3c28: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4f3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4f3c2c:
    // 0x4f3c2c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4f3c30:
    if (ctx->pc == 0x4F3C30u) {
        ctx->pc = 0x4F3C30u;
            // 0x4f3c30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4F3C34u;
        goto label_4f3c34;
    }
    ctx->pc = 0x4F3C2Cu;
    {
        const bool branch_taken_0x4f3c2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C2Cu;
            // 0x4f3c30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3c2c) {
            ctx->pc = 0x4F3C40u;
            goto label_4f3c40;
        }
    }
    ctx->pc = 0x4F3C34u;
label_4f3c34:
    // 0x4f3c34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f3c38:
    // 0x4f3c38: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4f3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4f3c3c:
    // 0x4f3c3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4f3c40:
    // 0x4f3c40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f3c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f3c44:
    // 0x4f3c44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f3c44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f3c48:
    // 0x4f3c48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f3c4c:
    if (ctx->pc == 0x4F3C4Cu) {
        ctx->pc = 0x4F3C4Cu;
            // 0x4f3c4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3C50u;
        goto label_4f3c50;
    }
    ctx->pc = 0x4F3C48u;
    {
        const bool branch_taken_0x4f3c48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f3c48) {
            ctx->pc = 0x4F3C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C48u;
            // 0x4f3c4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3C5Cu;
            goto label_4f3c5c;
        }
    }
    ctx->pc = 0x4F3C50u;
label_4f3c50:
    // 0x4f3c50: 0xc0400a8  jal         func_1002A0
label_4f3c54:
    if (ctx->pc == 0x4F3C54u) {
        ctx->pc = 0x4F3C54u;
            // 0x4f3c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3C58u;
        goto label_4f3c58;
    }
    ctx->pc = 0x4F3C50u;
    SET_GPR_U32(ctx, 31, 0x4F3C58u);
    ctx->pc = 0x4F3C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C50u;
            // 0x4f3c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3C58u; }
        if (ctx->pc != 0x4F3C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3C58u; }
        if (ctx->pc != 0x4F3C58u) { return; }
    }
    ctx->pc = 0x4F3C58u;
label_4f3c58:
    // 0x4f3c58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f3c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f3c5c:
    // 0x4f3c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f3c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3c60:
    // 0x4f3c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3c64:
    // 0x4f3c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3c68:
    // 0x4f3c68: 0x3e00008  jr          $ra
label_4f3c6c:
    if (ctx->pc == 0x4F3C6Cu) {
        ctx->pc = 0x4F3C6Cu;
            // 0x4f3c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F3C70u;
        goto label_4f3c70;
    }
    ctx->pc = 0x4F3C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C68u;
            // 0x4f3c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3C70u;
label_4f3c70:
    // 0x4f3c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f3c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f3c74:
    // 0x4f3c74: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4f3c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3c78:
    // 0x4f3c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3c7c:
    // 0x4f3c7c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4f3c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f3c80:
    // 0x4f3c80: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x4f3c80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4f3c84:
    // 0x4f3c84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4f3c88:
    if (ctx->pc == 0x4F3C88u) {
        ctx->pc = 0x4F3C88u;
            // 0x4f3c88: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4F3C8Cu;
        goto label_4f3c8c;
    }
    ctx->pc = 0x4F3C84u;
    {
        const bool branch_taken_0x4f3c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C84u;
            // 0x4f3c88: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3c84) {
            ctx->pc = 0x4F3C9Cu;
            goto label_4f3c9c;
        }
    }
    ctx->pc = 0x4F3C8Cu;
label_4f3c8c:
    // 0x4f3c8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f3c90:
    // 0x4f3c90: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_4f3c94:
    if (ctx->pc == 0x4F3C94u) {
        ctx->pc = 0x4F3C94u;
            // 0x4f3c94: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4F3C98u;
        goto label_4f3c98;
    }
    ctx->pc = 0x4F3C90u;
    {
        const bool branch_taken_0x4f3c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f3c90) {
            ctx->pc = 0x4F3C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3C90u;
            // 0x4f3c94: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3CA0u;
            goto label_4f3ca0;
        }
    }
    ctx->pc = 0x4F3C98u;
label_4f3c98:
    // 0x4f3c98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f3c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3c9c:
    // 0x4f3c9c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x4f3c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_4f3ca0:
    // 0x4f3ca0: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_4f3ca4:
    if (ctx->pc == 0x4F3CA4u) {
        ctx->pc = 0x4F3CA4u;
            // 0x4f3ca4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4F3CA8u;
        goto label_4f3ca8;
    }
    ctx->pc = 0x4F3CA0u;
    {
        const bool branch_taken_0x4f3ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3ca0) {
            ctx->pc = 0x4F3CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3CA0u;
            // 0x4f3ca4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3CE0u;
            goto label_4f3ce0;
        }
    }
    ctx->pc = 0x4F3CA8u;
label_4f3ca8:
    // 0x4f3ca8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x4f3ca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4f3cac:
    // 0x4f3cac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4f3cb0:
    if (ctx->pc == 0x4F3CB0u) {
        ctx->pc = 0x4F3CB0u;
            // 0x4f3cb0: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->pc = 0x4F3CB4u;
        goto label_4f3cb4;
    }
    ctx->pc = 0x4F3CACu;
    {
        const bool branch_taken_0x4f3cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f3cac) {
            ctx->pc = 0x4F3CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3CACu;
            // 0x4f3cb0: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3CC8u;
            goto label_4f3cc8;
        }
    }
    ctx->pc = 0x4F3CB4u;
label_4f3cb4:
    // 0x4f3cb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4f3cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3cb8:
    // 0x4f3cb8: 0xc075f04  jal         func_1D7C10
label_4f3cbc:
    if (ctx->pc == 0x4F3CBCu) {
        ctx->pc = 0x4F3CBCu;
            // 0x4f3cbc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3CC0u;
        goto label_4f3cc0;
    }
    ctx->pc = 0x4F3CB8u;
    SET_GPR_U32(ctx, 31, 0x4F3CC0u);
    ctx->pc = 0x4F3CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3CB8u;
            // 0x4f3cbc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7C10u;
    if (runtime->hasFunction(0x1D7C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D7C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3CC0u; }
        if (ctx->pc != 0x4F3CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7C10_0x1d7c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3CC0u; }
        if (ctx->pc != 0x4F3CC0u) { return; }
    }
    ctx->pc = 0x4F3CC0u;
label_4f3cc0:
    // 0x4f3cc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4f3cc4:
    if (ctx->pc == 0x4F3CC4u) {
        ctx->pc = 0x4F3CC8u;
        goto label_4f3cc8;
    }
    ctx->pc = 0x4F3CC0u;
    {
        const bool branch_taken_0x4f3cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3cc0) {
            ctx->pc = 0x4F3CDCu;
            goto label_4f3cdc;
        }
    }
    ctx->pc = 0x4F3CC8u;
label_4f3cc8:
    // 0x4f3cc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4f3cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3ccc:
    // 0x4f3ccc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x4f3cccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4f3cd0:
    // 0x4f3cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f3cd4:
    // 0x4f3cd4: 0xc075ee8  jal         func_1D7BA0
label_4f3cd8:
    if (ctx->pc == 0x4F3CD8u) {
        ctx->pc = 0x4F3CD8u;
            // 0x4f3cd8: 0xa0a211a4  sb          $v0, 0x11A4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F3CDCu;
        goto label_4f3cdc;
    }
    ctx->pc = 0x4F3CD4u;
    SET_GPR_U32(ctx, 31, 0x4F3CDCu);
    ctx->pc = 0x4F3CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3CD4u;
            // 0x4f3cd8: 0xa0a211a4  sb          $v0, 0x11A4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3CDCu; }
        if (ctx->pc != 0x4F3CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3CDCu; }
        if (ctx->pc != 0x4F3CDCu) { return; }
    }
    ctx->pc = 0x4F3CDCu;
label_4f3cdc:
    // 0x4f3cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3ce0:
    // 0x4f3ce0: 0x3e00008  jr          $ra
label_4f3ce4:
    if (ctx->pc == 0x4F3CE4u) {
        ctx->pc = 0x4F3CE4u;
            // 0x4f3ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4F3CE8u;
        goto label_4f3ce8;
    }
    ctx->pc = 0x4F3CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3CE0u;
            // 0x4f3ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3CE8u;
label_4f3ce8:
    // 0x4f3ce8: 0x0  nop
    ctx->pc = 0x4f3ce8u;
    // NOP
label_4f3cec:
    // 0x4f3cec: 0x0  nop
    ctx->pc = 0x4f3cecu;
    // NOP
label_4f3cf0:
    // 0x4f3cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f3cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f3cf4:
    // 0x4f3cf4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4f3cf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3cf8:
    // 0x4f3cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3cfc:
    // 0x4f3cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f3cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f3d00:
    // 0x4f3d00: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4f3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f3d04:
    // 0x4f3d04: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x4f3d04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_4f3d08:
    // 0x4f3d08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4f3d0c:
    if (ctx->pc == 0x4F3D0Cu) {
        ctx->pc = 0x4F3D0Cu;
            // 0x4f3d0c: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4F3D10u;
        goto label_4f3d10;
    }
    ctx->pc = 0x4F3D08u;
    {
        const bool branch_taken_0x4f3d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D08u;
            // 0x4f3d0c: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3d08) {
            ctx->pc = 0x4F3D1Cu;
            goto label_4f3d1c;
        }
    }
    ctx->pc = 0x4F3D10u;
label_4f3d10:
    // 0x4f3d10: 0x50660003  beql        $v1, $a2, . + 4 + (0x3 << 2)
label_4f3d14:
    if (ctx->pc == 0x4F3D14u) {
        ctx->pc = 0x4F3D14u;
            // 0x4f3d14: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4F3D18u;
        goto label_4f3d18;
    }
    ctx->pc = 0x4F3D10u;
    {
        const bool branch_taken_0x4f3d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x4f3d10) {
            ctx->pc = 0x4F3D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D10u;
            // 0x4f3d14: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3D20u;
            goto label_4f3d20;
        }
    }
    ctx->pc = 0x4F3D18u;
label_4f3d18:
    // 0x4f3d18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f3d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3d1c:
    // 0x4f3d1c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x4f3d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_4f3d20:
    // 0x4f3d20: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_4f3d24:
    if (ctx->pc == 0x4F3D24u) {
        ctx->pc = 0x4F3D24u;
            // 0x4f3d24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4F3D28u;
        goto label_4f3d28;
    }
    ctx->pc = 0x4F3D20u;
    {
        const bool branch_taken_0x4f3d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3d20) {
            ctx->pc = 0x4F3D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D20u;
            // 0x4f3d24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3D60u;
            goto label_4f3d60;
        }
    }
    ctx->pc = 0x4F3D28u;
label_4f3d28:
    // 0x4f3d28: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x4f3d28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_4f3d2c:
    // 0x4f3d2c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4f3d30:
    if (ctx->pc == 0x4F3D30u) {
        ctx->pc = 0x4F3D30u;
            // 0x4f3d30: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->pc = 0x4F3D34u;
        goto label_4f3d34;
    }
    ctx->pc = 0x4F3D2Cu;
    {
        const bool branch_taken_0x4f3d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f3d2c) {
            ctx->pc = 0x4F3D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D2Cu;
            // 0x4f3d30: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3D48u;
            goto label_4f3d48;
        }
    }
    ctx->pc = 0x4F3D34u;
label_4f3d34:
    // 0x4f3d34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4f3d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3d38:
    // 0x4f3d38: 0xc075f20  jal         func_1D7C80
label_4f3d3c:
    if (ctx->pc == 0x4F3D3Cu) {
        ctx->pc = 0x4F3D3Cu;
            // 0x4f3d3c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3D40u;
        goto label_4f3d40;
    }
    ctx->pc = 0x4F3D38u;
    SET_GPR_U32(ctx, 31, 0x4F3D40u);
    ctx->pc = 0x4F3D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D38u;
            // 0x4f3d3c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7C80u;
    if (runtime->hasFunction(0x1D7C80u)) {
        auto targetFn = runtime->lookupFunction(0x1D7C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3D40u; }
        if (ctx->pc != 0x4F3D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7C80_0x1d7c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3D40u; }
        if (ctx->pc != 0x4F3D40u) { return; }
    }
    ctx->pc = 0x4F3D40u;
label_4f3d40:
    // 0x4f3d40: 0x10000006  b           . + 4 + (0x6 << 2)
label_4f3d44:
    if (ctx->pc == 0x4F3D44u) {
        ctx->pc = 0x4F3D48u;
        goto label_4f3d48;
    }
    ctx->pc = 0x4F3D40u;
    {
        const bool branch_taken_0x4f3d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f3d40) {
            ctx->pc = 0x4F3D5Cu;
            goto label_4f3d5c;
        }
    }
    ctx->pc = 0x4F3D48u;
label_4f3d48:
    // 0x4f3d48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4f3d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3d4c:
    // 0x4f3d4c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x4f3d4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4f3d50:
    // 0x4f3d50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f3d54:
    // 0x4f3d54: 0xc075ee8  jal         func_1D7BA0
label_4f3d58:
    if (ctx->pc == 0x4F3D58u) {
        ctx->pc = 0x4F3D58u;
            // 0x4f3d58: 0xa0a211a4  sb          $v0, 0x11A4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F3D5Cu;
        goto label_4f3d5c;
    }
    ctx->pc = 0x4F3D54u;
    SET_GPR_U32(ctx, 31, 0x4F3D5Cu);
    ctx->pc = 0x4F3D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D54u;
            // 0x4f3d58: 0xa0a211a4  sb          $v0, 0x11A4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3D5Cu; }
        if (ctx->pc != 0x4F3D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3D5Cu; }
        if (ctx->pc != 0x4F3D5Cu) { return; }
    }
    ctx->pc = 0x4F3D5Cu;
label_4f3d5c:
    // 0x4f3d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3d60:
    // 0x4f3d60: 0x3e00008  jr          $ra
label_4f3d64:
    if (ctx->pc == 0x4F3D64u) {
        ctx->pc = 0x4F3D64u;
            // 0x4f3d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4F3D68u;
        goto label_4f3d68;
    }
    ctx->pc = 0x4F3D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D60u;
            // 0x4f3d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3D68u;
label_4f3d68:
    // 0x4f3d68: 0x0  nop
    ctx->pc = 0x4f3d68u;
    // NOP
label_4f3d6c:
    // 0x4f3d6c: 0x0  nop
    ctx->pc = 0x4f3d6cu;
    // NOP
label_4f3d70:
    // 0x4f3d70: 0x240361f8  addiu       $v1, $zero, 0x61F8
    ctx->pc = 0x4f3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25080));
label_4f3d74:
    // 0x4f3d74: 0x3e00008  jr          $ra
label_4f3d78:
    if (ctx->pc == 0x4F3D78u) {
        ctx->pc = 0x4F3D78u;
            // 0x4f3d78: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4F3D7Cu;
        goto label_4f3d7c;
    }
    ctx->pc = 0x4F3D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D74u;
            // 0x4f3d78: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3D7Cu;
label_4f3d7c:
    // 0x4f3d7c: 0x0  nop
    ctx->pc = 0x4f3d7cu;
    // NOP
label_4f3d80:
    // 0x4f3d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f3d84:
    // 0x4f3d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f3d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f3d88:
    // 0x4f3d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f3d8c:
    // 0x4f3d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f3d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f3d90:
    // 0x4f3d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3d94:
    // 0x4f3d94: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4f3d98:
    if (ctx->pc == 0x4F3D98u) {
        ctx->pc = 0x4F3D98u;
            // 0x4f3d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3D9Cu;
        goto label_4f3d9c;
    }
    ctx->pc = 0x4F3D94u;
    {
        const bool branch_taken_0x4f3d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3D94u;
            // 0x4f3d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3d94) {
            ctx->pc = 0x4F3DF0u;
            goto label_4f3df0;
        }
    }
    ctx->pc = 0x4F3D9Cu;
label_4f3d9c:
    // 0x4f3d9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f3da0:
    // 0x4f3da0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f3da4:
    // 0x4f3da4: 0x246343d0  addiu       $v1, $v1, 0x43D0
    ctx->pc = 0x4f3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17360));
label_4f3da8:
    // 0x4f3da8: 0x24424408  addiu       $v0, $v0, 0x4408
    ctx->pc = 0x4f3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17416));
label_4f3dac:
    // 0x4f3dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3db0:
    // 0x4f3db0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4f3db4:
    if (ctx->pc == 0x4F3DB4u) {
        ctx->pc = 0x4F3DB4u;
            // 0x4f3db4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4F3DB8u;
        goto label_4f3db8;
    }
    ctx->pc = 0x4F3DB0u;
    {
        const bool branch_taken_0x4f3db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3DB0u;
            // 0x4f3db4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3db0) {
            ctx->pc = 0x4F3DD8u;
            goto label_4f3dd8;
        }
    }
    ctx->pc = 0x4F3DB8u;
label_4f3db8:
    // 0x4f3db8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f3dbc:
    // 0x4f3dbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f3dc0:
    // 0x4f3dc0: 0x24634520  addiu       $v1, $v1, 0x4520
    ctx->pc = 0x4f3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17696));
label_4f3dc4:
    // 0x4f3dc4: 0x24424558  addiu       $v0, $v0, 0x4558
    ctx->pc = 0x4f3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17752));
label_4f3dc8:
    // 0x4f3dc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f3dcc:
    // 0x4f3dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f3dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f3dd0:
    // 0x4f3dd0: 0xc13cf84  jal         func_4F3E10
label_4f3dd4:
    if (ctx->pc == 0x4F3DD4u) {
        ctx->pc = 0x4F3DD4u;
            // 0x4f3dd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4F3DD8u;
        goto label_4f3dd8;
    }
    ctx->pc = 0x4F3DD0u;
    SET_GPR_U32(ctx, 31, 0x4F3DD8u);
    ctx->pc = 0x4F3DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3DD0u;
            // 0x4f3dd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F3E10u;
    if (runtime->hasFunction(0x4F3E10u)) {
        auto targetFn = runtime->lookupFunction(0x4F3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3DD8u; }
        if (ctx->pc != 0x4F3DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F3E10_0x4f3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3DD8u; }
        if (ctx->pc != 0x4F3DD8u) { return; }
    }
    ctx->pc = 0x4F3DD8u;
label_4f3dd8:
    // 0x4f3dd8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f3dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4f3ddc:
    // 0x4f3ddc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f3ddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f3de0:
    // 0x4f3de0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f3de4:
    if (ctx->pc == 0x4F3DE4u) {
        ctx->pc = 0x4F3DE4u;
            // 0x4f3de4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3DE8u;
        goto label_4f3de8;
    }
    ctx->pc = 0x4F3DE0u;
    {
        const bool branch_taken_0x4f3de0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f3de0) {
            ctx->pc = 0x4F3DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3DE0u;
            // 0x4f3de4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F3DF4u;
            goto label_4f3df4;
        }
    }
    ctx->pc = 0x4F3DE8u;
label_4f3de8:
    // 0x4f3de8: 0xc0400a8  jal         func_1002A0
label_4f3dec:
    if (ctx->pc == 0x4F3DECu) {
        ctx->pc = 0x4F3DECu;
            // 0x4f3dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F3DF0u;
        goto label_4f3df0;
    }
    ctx->pc = 0x4F3DE8u;
    SET_GPR_U32(ctx, 31, 0x4F3DF0u);
    ctx->pc = 0x4F3DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3DE8u;
            // 0x4f3dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3DF0u; }
        if (ctx->pc != 0x4F3DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F3DF0u; }
        if (ctx->pc != 0x4F3DF0u) { return; }
    }
    ctx->pc = 0x4F3DF0u;
label_4f3df0:
    // 0x4f3df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f3df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3df4:
    // 0x4f3df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f3df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3df8:
    // 0x4f3df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3dfc:
    // 0x4f3dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f3dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3e00:
    // 0x4f3e00: 0x3e00008  jr          $ra
label_4f3e04:
    if (ctx->pc == 0x4F3E04u) {
        ctx->pc = 0x4F3E04u;
            // 0x4f3e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F3E08u;
        goto label_4f3e08;
    }
    ctx->pc = 0x4F3E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F3E00u;
            // 0x4f3e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F3E08u;
label_4f3e08:
    // 0x4f3e08: 0x0  nop
    ctx->pc = 0x4f3e08u;
    // NOP
label_4f3e0c:
    // 0x4f3e0c: 0x0  nop
    ctx->pc = 0x4f3e0cu;
    // NOP
}
