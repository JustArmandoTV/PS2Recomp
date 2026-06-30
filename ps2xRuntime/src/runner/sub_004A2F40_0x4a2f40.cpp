#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A2F40
// Address: 0x4a2f40 - 0x4a3790
void sub_004A2F40_0x4a2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2F40_0x4a2f40");
#endif

    switch (ctx->pc) {
        case 0x4a2f40u: goto label_4a2f40;
        case 0x4a2f44u: goto label_4a2f44;
        case 0x4a2f48u: goto label_4a2f48;
        case 0x4a2f4cu: goto label_4a2f4c;
        case 0x4a2f50u: goto label_4a2f50;
        case 0x4a2f54u: goto label_4a2f54;
        case 0x4a2f58u: goto label_4a2f58;
        case 0x4a2f5cu: goto label_4a2f5c;
        case 0x4a2f60u: goto label_4a2f60;
        case 0x4a2f64u: goto label_4a2f64;
        case 0x4a2f68u: goto label_4a2f68;
        case 0x4a2f6cu: goto label_4a2f6c;
        case 0x4a2f70u: goto label_4a2f70;
        case 0x4a2f74u: goto label_4a2f74;
        case 0x4a2f78u: goto label_4a2f78;
        case 0x4a2f7cu: goto label_4a2f7c;
        case 0x4a2f80u: goto label_4a2f80;
        case 0x4a2f84u: goto label_4a2f84;
        case 0x4a2f88u: goto label_4a2f88;
        case 0x4a2f8cu: goto label_4a2f8c;
        case 0x4a2f90u: goto label_4a2f90;
        case 0x4a2f94u: goto label_4a2f94;
        case 0x4a2f98u: goto label_4a2f98;
        case 0x4a2f9cu: goto label_4a2f9c;
        case 0x4a2fa0u: goto label_4a2fa0;
        case 0x4a2fa4u: goto label_4a2fa4;
        case 0x4a2fa8u: goto label_4a2fa8;
        case 0x4a2facu: goto label_4a2fac;
        case 0x4a2fb0u: goto label_4a2fb0;
        case 0x4a2fb4u: goto label_4a2fb4;
        case 0x4a2fb8u: goto label_4a2fb8;
        case 0x4a2fbcu: goto label_4a2fbc;
        case 0x4a2fc0u: goto label_4a2fc0;
        case 0x4a2fc4u: goto label_4a2fc4;
        case 0x4a2fc8u: goto label_4a2fc8;
        case 0x4a2fccu: goto label_4a2fcc;
        case 0x4a2fd0u: goto label_4a2fd0;
        case 0x4a2fd4u: goto label_4a2fd4;
        case 0x4a2fd8u: goto label_4a2fd8;
        case 0x4a2fdcu: goto label_4a2fdc;
        case 0x4a2fe0u: goto label_4a2fe0;
        case 0x4a2fe4u: goto label_4a2fe4;
        case 0x4a2fe8u: goto label_4a2fe8;
        case 0x4a2fecu: goto label_4a2fec;
        case 0x4a2ff0u: goto label_4a2ff0;
        case 0x4a2ff4u: goto label_4a2ff4;
        case 0x4a2ff8u: goto label_4a2ff8;
        case 0x4a2ffcu: goto label_4a2ffc;
        case 0x4a3000u: goto label_4a3000;
        case 0x4a3004u: goto label_4a3004;
        case 0x4a3008u: goto label_4a3008;
        case 0x4a300cu: goto label_4a300c;
        case 0x4a3010u: goto label_4a3010;
        case 0x4a3014u: goto label_4a3014;
        case 0x4a3018u: goto label_4a3018;
        case 0x4a301cu: goto label_4a301c;
        case 0x4a3020u: goto label_4a3020;
        case 0x4a3024u: goto label_4a3024;
        case 0x4a3028u: goto label_4a3028;
        case 0x4a302cu: goto label_4a302c;
        case 0x4a3030u: goto label_4a3030;
        case 0x4a3034u: goto label_4a3034;
        case 0x4a3038u: goto label_4a3038;
        case 0x4a303cu: goto label_4a303c;
        case 0x4a3040u: goto label_4a3040;
        case 0x4a3044u: goto label_4a3044;
        case 0x4a3048u: goto label_4a3048;
        case 0x4a304cu: goto label_4a304c;
        case 0x4a3050u: goto label_4a3050;
        case 0x4a3054u: goto label_4a3054;
        case 0x4a3058u: goto label_4a3058;
        case 0x4a305cu: goto label_4a305c;
        case 0x4a3060u: goto label_4a3060;
        case 0x4a3064u: goto label_4a3064;
        case 0x4a3068u: goto label_4a3068;
        case 0x4a306cu: goto label_4a306c;
        case 0x4a3070u: goto label_4a3070;
        case 0x4a3074u: goto label_4a3074;
        case 0x4a3078u: goto label_4a3078;
        case 0x4a307cu: goto label_4a307c;
        case 0x4a3080u: goto label_4a3080;
        case 0x4a3084u: goto label_4a3084;
        case 0x4a3088u: goto label_4a3088;
        case 0x4a308cu: goto label_4a308c;
        case 0x4a3090u: goto label_4a3090;
        case 0x4a3094u: goto label_4a3094;
        case 0x4a3098u: goto label_4a3098;
        case 0x4a309cu: goto label_4a309c;
        case 0x4a30a0u: goto label_4a30a0;
        case 0x4a30a4u: goto label_4a30a4;
        case 0x4a30a8u: goto label_4a30a8;
        case 0x4a30acu: goto label_4a30ac;
        case 0x4a30b0u: goto label_4a30b0;
        case 0x4a30b4u: goto label_4a30b4;
        case 0x4a30b8u: goto label_4a30b8;
        case 0x4a30bcu: goto label_4a30bc;
        case 0x4a30c0u: goto label_4a30c0;
        case 0x4a30c4u: goto label_4a30c4;
        case 0x4a30c8u: goto label_4a30c8;
        case 0x4a30ccu: goto label_4a30cc;
        case 0x4a30d0u: goto label_4a30d0;
        case 0x4a30d4u: goto label_4a30d4;
        case 0x4a30d8u: goto label_4a30d8;
        case 0x4a30dcu: goto label_4a30dc;
        case 0x4a30e0u: goto label_4a30e0;
        case 0x4a30e4u: goto label_4a30e4;
        case 0x4a30e8u: goto label_4a30e8;
        case 0x4a30ecu: goto label_4a30ec;
        case 0x4a30f0u: goto label_4a30f0;
        case 0x4a30f4u: goto label_4a30f4;
        case 0x4a30f8u: goto label_4a30f8;
        case 0x4a30fcu: goto label_4a30fc;
        case 0x4a3100u: goto label_4a3100;
        case 0x4a3104u: goto label_4a3104;
        case 0x4a3108u: goto label_4a3108;
        case 0x4a310cu: goto label_4a310c;
        case 0x4a3110u: goto label_4a3110;
        case 0x4a3114u: goto label_4a3114;
        case 0x4a3118u: goto label_4a3118;
        case 0x4a311cu: goto label_4a311c;
        case 0x4a3120u: goto label_4a3120;
        case 0x4a3124u: goto label_4a3124;
        case 0x4a3128u: goto label_4a3128;
        case 0x4a312cu: goto label_4a312c;
        case 0x4a3130u: goto label_4a3130;
        case 0x4a3134u: goto label_4a3134;
        case 0x4a3138u: goto label_4a3138;
        case 0x4a313cu: goto label_4a313c;
        case 0x4a3140u: goto label_4a3140;
        case 0x4a3144u: goto label_4a3144;
        case 0x4a3148u: goto label_4a3148;
        case 0x4a314cu: goto label_4a314c;
        case 0x4a3150u: goto label_4a3150;
        case 0x4a3154u: goto label_4a3154;
        case 0x4a3158u: goto label_4a3158;
        case 0x4a315cu: goto label_4a315c;
        case 0x4a3160u: goto label_4a3160;
        case 0x4a3164u: goto label_4a3164;
        case 0x4a3168u: goto label_4a3168;
        case 0x4a316cu: goto label_4a316c;
        case 0x4a3170u: goto label_4a3170;
        case 0x4a3174u: goto label_4a3174;
        case 0x4a3178u: goto label_4a3178;
        case 0x4a317cu: goto label_4a317c;
        case 0x4a3180u: goto label_4a3180;
        case 0x4a3184u: goto label_4a3184;
        case 0x4a3188u: goto label_4a3188;
        case 0x4a318cu: goto label_4a318c;
        case 0x4a3190u: goto label_4a3190;
        case 0x4a3194u: goto label_4a3194;
        case 0x4a3198u: goto label_4a3198;
        case 0x4a319cu: goto label_4a319c;
        case 0x4a31a0u: goto label_4a31a0;
        case 0x4a31a4u: goto label_4a31a4;
        case 0x4a31a8u: goto label_4a31a8;
        case 0x4a31acu: goto label_4a31ac;
        case 0x4a31b0u: goto label_4a31b0;
        case 0x4a31b4u: goto label_4a31b4;
        case 0x4a31b8u: goto label_4a31b8;
        case 0x4a31bcu: goto label_4a31bc;
        case 0x4a31c0u: goto label_4a31c0;
        case 0x4a31c4u: goto label_4a31c4;
        case 0x4a31c8u: goto label_4a31c8;
        case 0x4a31ccu: goto label_4a31cc;
        case 0x4a31d0u: goto label_4a31d0;
        case 0x4a31d4u: goto label_4a31d4;
        case 0x4a31d8u: goto label_4a31d8;
        case 0x4a31dcu: goto label_4a31dc;
        case 0x4a31e0u: goto label_4a31e0;
        case 0x4a31e4u: goto label_4a31e4;
        case 0x4a31e8u: goto label_4a31e8;
        case 0x4a31ecu: goto label_4a31ec;
        case 0x4a31f0u: goto label_4a31f0;
        case 0x4a31f4u: goto label_4a31f4;
        case 0x4a31f8u: goto label_4a31f8;
        case 0x4a31fcu: goto label_4a31fc;
        case 0x4a3200u: goto label_4a3200;
        case 0x4a3204u: goto label_4a3204;
        case 0x4a3208u: goto label_4a3208;
        case 0x4a320cu: goto label_4a320c;
        case 0x4a3210u: goto label_4a3210;
        case 0x4a3214u: goto label_4a3214;
        case 0x4a3218u: goto label_4a3218;
        case 0x4a321cu: goto label_4a321c;
        case 0x4a3220u: goto label_4a3220;
        case 0x4a3224u: goto label_4a3224;
        case 0x4a3228u: goto label_4a3228;
        case 0x4a322cu: goto label_4a322c;
        case 0x4a3230u: goto label_4a3230;
        case 0x4a3234u: goto label_4a3234;
        case 0x4a3238u: goto label_4a3238;
        case 0x4a323cu: goto label_4a323c;
        case 0x4a3240u: goto label_4a3240;
        case 0x4a3244u: goto label_4a3244;
        case 0x4a3248u: goto label_4a3248;
        case 0x4a324cu: goto label_4a324c;
        case 0x4a3250u: goto label_4a3250;
        case 0x4a3254u: goto label_4a3254;
        case 0x4a3258u: goto label_4a3258;
        case 0x4a325cu: goto label_4a325c;
        case 0x4a3260u: goto label_4a3260;
        case 0x4a3264u: goto label_4a3264;
        case 0x4a3268u: goto label_4a3268;
        case 0x4a326cu: goto label_4a326c;
        case 0x4a3270u: goto label_4a3270;
        case 0x4a3274u: goto label_4a3274;
        case 0x4a3278u: goto label_4a3278;
        case 0x4a327cu: goto label_4a327c;
        case 0x4a3280u: goto label_4a3280;
        case 0x4a3284u: goto label_4a3284;
        case 0x4a3288u: goto label_4a3288;
        case 0x4a328cu: goto label_4a328c;
        case 0x4a3290u: goto label_4a3290;
        case 0x4a3294u: goto label_4a3294;
        case 0x4a3298u: goto label_4a3298;
        case 0x4a329cu: goto label_4a329c;
        case 0x4a32a0u: goto label_4a32a0;
        case 0x4a32a4u: goto label_4a32a4;
        case 0x4a32a8u: goto label_4a32a8;
        case 0x4a32acu: goto label_4a32ac;
        case 0x4a32b0u: goto label_4a32b0;
        case 0x4a32b4u: goto label_4a32b4;
        case 0x4a32b8u: goto label_4a32b8;
        case 0x4a32bcu: goto label_4a32bc;
        case 0x4a32c0u: goto label_4a32c0;
        case 0x4a32c4u: goto label_4a32c4;
        case 0x4a32c8u: goto label_4a32c8;
        case 0x4a32ccu: goto label_4a32cc;
        case 0x4a32d0u: goto label_4a32d0;
        case 0x4a32d4u: goto label_4a32d4;
        case 0x4a32d8u: goto label_4a32d8;
        case 0x4a32dcu: goto label_4a32dc;
        case 0x4a32e0u: goto label_4a32e0;
        case 0x4a32e4u: goto label_4a32e4;
        case 0x4a32e8u: goto label_4a32e8;
        case 0x4a32ecu: goto label_4a32ec;
        case 0x4a32f0u: goto label_4a32f0;
        case 0x4a32f4u: goto label_4a32f4;
        case 0x4a32f8u: goto label_4a32f8;
        case 0x4a32fcu: goto label_4a32fc;
        case 0x4a3300u: goto label_4a3300;
        case 0x4a3304u: goto label_4a3304;
        case 0x4a3308u: goto label_4a3308;
        case 0x4a330cu: goto label_4a330c;
        case 0x4a3310u: goto label_4a3310;
        case 0x4a3314u: goto label_4a3314;
        case 0x4a3318u: goto label_4a3318;
        case 0x4a331cu: goto label_4a331c;
        case 0x4a3320u: goto label_4a3320;
        case 0x4a3324u: goto label_4a3324;
        case 0x4a3328u: goto label_4a3328;
        case 0x4a332cu: goto label_4a332c;
        case 0x4a3330u: goto label_4a3330;
        case 0x4a3334u: goto label_4a3334;
        case 0x4a3338u: goto label_4a3338;
        case 0x4a333cu: goto label_4a333c;
        case 0x4a3340u: goto label_4a3340;
        case 0x4a3344u: goto label_4a3344;
        case 0x4a3348u: goto label_4a3348;
        case 0x4a334cu: goto label_4a334c;
        case 0x4a3350u: goto label_4a3350;
        case 0x4a3354u: goto label_4a3354;
        case 0x4a3358u: goto label_4a3358;
        case 0x4a335cu: goto label_4a335c;
        case 0x4a3360u: goto label_4a3360;
        case 0x4a3364u: goto label_4a3364;
        case 0x4a3368u: goto label_4a3368;
        case 0x4a336cu: goto label_4a336c;
        case 0x4a3370u: goto label_4a3370;
        case 0x4a3374u: goto label_4a3374;
        case 0x4a3378u: goto label_4a3378;
        case 0x4a337cu: goto label_4a337c;
        case 0x4a3380u: goto label_4a3380;
        case 0x4a3384u: goto label_4a3384;
        case 0x4a3388u: goto label_4a3388;
        case 0x4a338cu: goto label_4a338c;
        case 0x4a3390u: goto label_4a3390;
        case 0x4a3394u: goto label_4a3394;
        case 0x4a3398u: goto label_4a3398;
        case 0x4a339cu: goto label_4a339c;
        case 0x4a33a0u: goto label_4a33a0;
        case 0x4a33a4u: goto label_4a33a4;
        case 0x4a33a8u: goto label_4a33a8;
        case 0x4a33acu: goto label_4a33ac;
        case 0x4a33b0u: goto label_4a33b0;
        case 0x4a33b4u: goto label_4a33b4;
        case 0x4a33b8u: goto label_4a33b8;
        case 0x4a33bcu: goto label_4a33bc;
        case 0x4a33c0u: goto label_4a33c0;
        case 0x4a33c4u: goto label_4a33c4;
        case 0x4a33c8u: goto label_4a33c8;
        case 0x4a33ccu: goto label_4a33cc;
        case 0x4a33d0u: goto label_4a33d0;
        case 0x4a33d4u: goto label_4a33d4;
        case 0x4a33d8u: goto label_4a33d8;
        case 0x4a33dcu: goto label_4a33dc;
        case 0x4a33e0u: goto label_4a33e0;
        case 0x4a33e4u: goto label_4a33e4;
        case 0x4a33e8u: goto label_4a33e8;
        case 0x4a33ecu: goto label_4a33ec;
        case 0x4a33f0u: goto label_4a33f0;
        case 0x4a33f4u: goto label_4a33f4;
        case 0x4a33f8u: goto label_4a33f8;
        case 0x4a33fcu: goto label_4a33fc;
        case 0x4a3400u: goto label_4a3400;
        case 0x4a3404u: goto label_4a3404;
        case 0x4a3408u: goto label_4a3408;
        case 0x4a340cu: goto label_4a340c;
        case 0x4a3410u: goto label_4a3410;
        case 0x4a3414u: goto label_4a3414;
        case 0x4a3418u: goto label_4a3418;
        case 0x4a341cu: goto label_4a341c;
        case 0x4a3420u: goto label_4a3420;
        case 0x4a3424u: goto label_4a3424;
        case 0x4a3428u: goto label_4a3428;
        case 0x4a342cu: goto label_4a342c;
        case 0x4a3430u: goto label_4a3430;
        case 0x4a3434u: goto label_4a3434;
        case 0x4a3438u: goto label_4a3438;
        case 0x4a343cu: goto label_4a343c;
        case 0x4a3440u: goto label_4a3440;
        case 0x4a3444u: goto label_4a3444;
        case 0x4a3448u: goto label_4a3448;
        case 0x4a344cu: goto label_4a344c;
        case 0x4a3450u: goto label_4a3450;
        case 0x4a3454u: goto label_4a3454;
        case 0x4a3458u: goto label_4a3458;
        case 0x4a345cu: goto label_4a345c;
        case 0x4a3460u: goto label_4a3460;
        case 0x4a3464u: goto label_4a3464;
        case 0x4a3468u: goto label_4a3468;
        case 0x4a346cu: goto label_4a346c;
        case 0x4a3470u: goto label_4a3470;
        case 0x4a3474u: goto label_4a3474;
        case 0x4a3478u: goto label_4a3478;
        case 0x4a347cu: goto label_4a347c;
        case 0x4a3480u: goto label_4a3480;
        case 0x4a3484u: goto label_4a3484;
        case 0x4a3488u: goto label_4a3488;
        case 0x4a348cu: goto label_4a348c;
        case 0x4a3490u: goto label_4a3490;
        case 0x4a3494u: goto label_4a3494;
        case 0x4a3498u: goto label_4a3498;
        case 0x4a349cu: goto label_4a349c;
        case 0x4a34a0u: goto label_4a34a0;
        case 0x4a34a4u: goto label_4a34a4;
        case 0x4a34a8u: goto label_4a34a8;
        case 0x4a34acu: goto label_4a34ac;
        case 0x4a34b0u: goto label_4a34b0;
        case 0x4a34b4u: goto label_4a34b4;
        case 0x4a34b8u: goto label_4a34b8;
        case 0x4a34bcu: goto label_4a34bc;
        case 0x4a34c0u: goto label_4a34c0;
        case 0x4a34c4u: goto label_4a34c4;
        case 0x4a34c8u: goto label_4a34c8;
        case 0x4a34ccu: goto label_4a34cc;
        case 0x4a34d0u: goto label_4a34d0;
        case 0x4a34d4u: goto label_4a34d4;
        case 0x4a34d8u: goto label_4a34d8;
        case 0x4a34dcu: goto label_4a34dc;
        case 0x4a34e0u: goto label_4a34e0;
        case 0x4a34e4u: goto label_4a34e4;
        case 0x4a34e8u: goto label_4a34e8;
        case 0x4a34ecu: goto label_4a34ec;
        case 0x4a34f0u: goto label_4a34f0;
        case 0x4a34f4u: goto label_4a34f4;
        case 0x4a34f8u: goto label_4a34f8;
        case 0x4a34fcu: goto label_4a34fc;
        case 0x4a3500u: goto label_4a3500;
        case 0x4a3504u: goto label_4a3504;
        case 0x4a3508u: goto label_4a3508;
        case 0x4a350cu: goto label_4a350c;
        case 0x4a3510u: goto label_4a3510;
        case 0x4a3514u: goto label_4a3514;
        case 0x4a3518u: goto label_4a3518;
        case 0x4a351cu: goto label_4a351c;
        case 0x4a3520u: goto label_4a3520;
        case 0x4a3524u: goto label_4a3524;
        case 0x4a3528u: goto label_4a3528;
        case 0x4a352cu: goto label_4a352c;
        case 0x4a3530u: goto label_4a3530;
        case 0x4a3534u: goto label_4a3534;
        case 0x4a3538u: goto label_4a3538;
        case 0x4a353cu: goto label_4a353c;
        case 0x4a3540u: goto label_4a3540;
        case 0x4a3544u: goto label_4a3544;
        case 0x4a3548u: goto label_4a3548;
        case 0x4a354cu: goto label_4a354c;
        case 0x4a3550u: goto label_4a3550;
        case 0x4a3554u: goto label_4a3554;
        case 0x4a3558u: goto label_4a3558;
        case 0x4a355cu: goto label_4a355c;
        case 0x4a3560u: goto label_4a3560;
        case 0x4a3564u: goto label_4a3564;
        case 0x4a3568u: goto label_4a3568;
        case 0x4a356cu: goto label_4a356c;
        case 0x4a3570u: goto label_4a3570;
        case 0x4a3574u: goto label_4a3574;
        case 0x4a3578u: goto label_4a3578;
        case 0x4a357cu: goto label_4a357c;
        case 0x4a3580u: goto label_4a3580;
        case 0x4a3584u: goto label_4a3584;
        case 0x4a3588u: goto label_4a3588;
        case 0x4a358cu: goto label_4a358c;
        case 0x4a3590u: goto label_4a3590;
        case 0x4a3594u: goto label_4a3594;
        case 0x4a3598u: goto label_4a3598;
        case 0x4a359cu: goto label_4a359c;
        case 0x4a35a0u: goto label_4a35a0;
        case 0x4a35a4u: goto label_4a35a4;
        case 0x4a35a8u: goto label_4a35a8;
        case 0x4a35acu: goto label_4a35ac;
        case 0x4a35b0u: goto label_4a35b0;
        case 0x4a35b4u: goto label_4a35b4;
        case 0x4a35b8u: goto label_4a35b8;
        case 0x4a35bcu: goto label_4a35bc;
        case 0x4a35c0u: goto label_4a35c0;
        case 0x4a35c4u: goto label_4a35c4;
        case 0x4a35c8u: goto label_4a35c8;
        case 0x4a35ccu: goto label_4a35cc;
        case 0x4a35d0u: goto label_4a35d0;
        case 0x4a35d4u: goto label_4a35d4;
        case 0x4a35d8u: goto label_4a35d8;
        case 0x4a35dcu: goto label_4a35dc;
        case 0x4a35e0u: goto label_4a35e0;
        case 0x4a35e4u: goto label_4a35e4;
        case 0x4a35e8u: goto label_4a35e8;
        case 0x4a35ecu: goto label_4a35ec;
        case 0x4a35f0u: goto label_4a35f0;
        case 0x4a35f4u: goto label_4a35f4;
        case 0x4a35f8u: goto label_4a35f8;
        case 0x4a35fcu: goto label_4a35fc;
        case 0x4a3600u: goto label_4a3600;
        case 0x4a3604u: goto label_4a3604;
        case 0x4a3608u: goto label_4a3608;
        case 0x4a360cu: goto label_4a360c;
        case 0x4a3610u: goto label_4a3610;
        case 0x4a3614u: goto label_4a3614;
        case 0x4a3618u: goto label_4a3618;
        case 0x4a361cu: goto label_4a361c;
        case 0x4a3620u: goto label_4a3620;
        case 0x4a3624u: goto label_4a3624;
        case 0x4a3628u: goto label_4a3628;
        case 0x4a362cu: goto label_4a362c;
        case 0x4a3630u: goto label_4a3630;
        case 0x4a3634u: goto label_4a3634;
        case 0x4a3638u: goto label_4a3638;
        case 0x4a363cu: goto label_4a363c;
        case 0x4a3640u: goto label_4a3640;
        case 0x4a3644u: goto label_4a3644;
        case 0x4a3648u: goto label_4a3648;
        case 0x4a364cu: goto label_4a364c;
        case 0x4a3650u: goto label_4a3650;
        case 0x4a3654u: goto label_4a3654;
        case 0x4a3658u: goto label_4a3658;
        case 0x4a365cu: goto label_4a365c;
        case 0x4a3660u: goto label_4a3660;
        case 0x4a3664u: goto label_4a3664;
        case 0x4a3668u: goto label_4a3668;
        case 0x4a366cu: goto label_4a366c;
        case 0x4a3670u: goto label_4a3670;
        case 0x4a3674u: goto label_4a3674;
        case 0x4a3678u: goto label_4a3678;
        case 0x4a367cu: goto label_4a367c;
        case 0x4a3680u: goto label_4a3680;
        case 0x4a3684u: goto label_4a3684;
        case 0x4a3688u: goto label_4a3688;
        case 0x4a368cu: goto label_4a368c;
        case 0x4a3690u: goto label_4a3690;
        case 0x4a3694u: goto label_4a3694;
        case 0x4a3698u: goto label_4a3698;
        case 0x4a369cu: goto label_4a369c;
        case 0x4a36a0u: goto label_4a36a0;
        case 0x4a36a4u: goto label_4a36a4;
        case 0x4a36a8u: goto label_4a36a8;
        case 0x4a36acu: goto label_4a36ac;
        case 0x4a36b0u: goto label_4a36b0;
        case 0x4a36b4u: goto label_4a36b4;
        case 0x4a36b8u: goto label_4a36b8;
        case 0x4a36bcu: goto label_4a36bc;
        case 0x4a36c0u: goto label_4a36c0;
        case 0x4a36c4u: goto label_4a36c4;
        case 0x4a36c8u: goto label_4a36c8;
        case 0x4a36ccu: goto label_4a36cc;
        case 0x4a36d0u: goto label_4a36d0;
        case 0x4a36d4u: goto label_4a36d4;
        case 0x4a36d8u: goto label_4a36d8;
        case 0x4a36dcu: goto label_4a36dc;
        case 0x4a36e0u: goto label_4a36e0;
        case 0x4a36e4u: goto label_4a36e4;
        case 0x4a36e8u: goto label_4a36e8;
        case 0x4a36ecu: goto label_4a36ec;
        case 0x4a36f0u: goto label_4a36f0;
        case 0x4a36f4u: goto label_4a36f4;
        case 0x4a36f8u: goto label_4a36f8;
        case 0x4a36fcu: goto label_4a36fc;
        case 0x4a3700u: goto label_4a3700;
        case 0x4a3704u: goto label_4a3704;
        case 0x4a3708u: goto label_4a3708;
        case 0x4a370cu: goto label_4a370c;
        case 0x4a3710u: goto label_4a3710;
        case 0x4a3714u: goto label_4a3714;
        case 0x4a3718u: goto label_4a3718;
        case 0x4a371cu: goto label_4a371c;
        case 0x4a3720u: goto label_4a3720;
        case 0x4a3724u: goto label_4a3724;
        case 0x4a3728u: goto label_4a3728;
        case 0x4a372cu: goto label_4a372c;
        case 0x4a3730u: goto label_4a3730;
        case 0x4a3734u: goto label_4a3734;
        case 0x4a3738u: goto label_4a3738;
        case 0x4a373cu: goto label_4a373c;
        case 0x4a3740u: goto label_4a3740;
        case 0x4a3744u: goto label_4a3744;
        case 0x4a3748u: goto label_4a3748;
        case 0x4a374cu: goto label_4a374c;
        case 0x4a3750u: goto label_4a3750;
        case 0x4a3754u: goto label_4a3754;
        case 0x4a3758u: goto label_4a3758;
        case 0x4a375cu: goto label_4a375c;
        case 0x4a3760u: goto label_4a3760;
        case 0x4a3764u: goto label_4a3764;
        case 0x4a3768u: goto label_4a3768;
        case 0x4a376cu: goto label_4a376c;
        case 0x4a3770u: goto label_4a3770;
        case 0x4a3774u: goto label_4a3774;
        case 0x4a3778u: goto label_4a3778;
        case 0x4a377cu: goto label_4a377c;
        case 0x4a3780u: goto label_4a3780;
        case 0x4a3784u: goto label_4a3784;
        case 0x4a3788u: goto label_4a3788;
        case 0x4a378cu: goto label_4a378c;
        default: break;
    }

    ctx->pc = 0x4a2f40u;

label_4a2f40:
    // 0x4a2f40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a2f44:
    // 0x4a2f44: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x4a2f44u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_4a2f48:
    // 0x4a2f48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4a2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4a2f4c:
    // 0x4a2f4c: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x4a2f4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
label_4a2f50:
    // 0x4a2f50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a2f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4a2f54:
    // 0x4a2f54: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4a2f58:
    // 0x4a2f58: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a2f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a2f5c:
    // 0x4a2f5c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4a2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4a2f60:
    // 0x4a2f60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a2f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a2f64:
    // 0x4a2f64: 0xa75823  subu        $t3, $a1, $a3
    ctx->pc = 0x4a2f64u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4a2f68:
    // 0x4a2f68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a2f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a2f6c:
    // 0x4a2f6c: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x4a2f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4a2f70:
    // 0x4a2f70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a2f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a2f74:
    // 0x4a2f74: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x4a2f74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_4a2f78:
    // 0x4a2f78: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x4a2f78u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4a2f7c:
    // 0x4a2f7c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a2f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a2f80:
    // 0x4a2f80: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x4a2f80u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4a2f84:
    // 0x4a2f84: 0xc43823  subu        $a3, $a2, $a0
    ctx->pc = 0x4a2f84u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4a2f88:
    // 0x4a2f88: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x4a2f88u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4a2f8c:
    // 0x4a2f8c: 0x26520bd0  addiu       $s2, $s2, 0xBD0
    ctx->pc = 0x4a2f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3024));
label_4a2f90:
    // 0x4a2f90: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4a2f90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4a2f94:
    // 0x4a2f94: 0x24a50ca0  addiu       $a1, $a1, 0xCA0
    ctx->pc = 0x4a2f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3232));
label_4a2f98:
    // 0x4a2f98: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a2f98u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a2f9c:
    // 0x4a2f9c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a2f9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a2fa0:
    // 0x4a2fa0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a2fa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a2fa4:
    // 0x4a2fa4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a2fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a2fa8:
    // 0x4a2fa8: 0x84713f88  lh          $s1, 0x3F88($v1)
    ctx->pc = 0x4a2fa8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16264)));
label_4a2fac:
    // 0x4a2fac: 0x84503f8a  lh          $s0, 0x3F8A($v0)
    ctx->pc = 0x4a2facu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16266)));
label_4a2fb0:
    // 0x4a2fb0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4a2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4a2fb4:
    // 0x4a2fb4: 0x24630c70  addiu       $v1, $v1, 0xC70
    ctx->pc = 0x4a2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3184));
label_4a2fb8:
    // 0x4a2fb8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a2fbc:
    // 0x4a2fbc: 0xc4750008  lwc1        $f21, 0x8($v1)
    ctx->pc = 0x4a2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a2fc0:
    // 0x4a2fc0: 0xc474000c  lwc1        $f20, 0xC($v1)
    ctx->pc = 0x4a2fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a2fc4:
    // 0x4a2fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2fc8:
    // 0x4a2fc8: 0x0  nop
    ctx->pc = 0x4a2fc8u;
    // NOP
label_4a2fcc:
    // 0x4a2fcc: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x4a2fccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_4a2fd0:
    // 0x4a2fd0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x4a2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4a2fd4:
    // 0x4a2fd4: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x4a2fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4a2fd8:
    // 0x4a2fd8: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x4a2fd8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2fdc:
    // 0x4a2fdc: 0x0  nop
    ctx->pc = 0x4a2fdcu;
    // NOP
label_4a2fe0:
    // 0x4a2fe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a2fe4:
    // 0x4a2fe4: 0x460016c0  add.s       $f27, $f2, $f0
    ctx->pc = 0x4a2fe4u;
    ctx->f[27] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4a2fe8:
    // 0x4a2fe8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a2fe8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2fec:
    // 0x4a2fec: 0x0  nop
    ctx->pc = 0x4a2fecu;
    // NOP
label_4a2ff0:
    // 0x4a2ff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a2ff4:
    // 0x4a2ff4: 0x46020681  sub.s       $f26, $f0, $f2
    ctx->pc = 0x4a2ff4u;
    ctx->f[26] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4a2ff8:
    // 0x4a2ff8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4a2ff8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2ffc:
    // 0x4a2ffc: 0x0  nop
    ctx->pc = 0x4a2ffcu;
    // NOP
label_4a3000:
    // 0x4a3000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a3004:
    // 0x4a3004: 0x46000e40  add.s       $f25, $f1, $f0
    ctx->pc = 0x4a3004u;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4a3008:
    // 0x4a3008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a3008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a300c:
    // 0x4a300c: 0x0  nop
    ctx->pc = 0x4a300cu;
    // NOP
label_4a3010:
    // 0x4a3010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a3014:
    // 0x4a3014: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
label_4a3018:
    if (ctx->pc == 0x4A3018u) {
        ctx->pc = 0x4A3018u;
            // 0x4a3018: 0x46010601  sub.s       $f24, $f0, $f1 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4A301Cu;
        goto label_4a301c;
    }
    ctx->pc = 0x4A3014u;
    {
        const bool branch_taken_0x4a3014 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3014u;
            // 0x4a3018: 0x46010601  sub.s       $f24, $f0, $f1 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3014) {
            ctx->pc = 0x4A3020u;
            goto label_4a3020;
        }
    }
    ctx->pc = 0x4A301Cu;
label_4a301c:
    // 0x4a301c: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x4a301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_4a3020:
    // 0x4a3020: 0x2562fffd  addiu       $v0, $t3, -0x3
    ctx->pc = 0x4a3020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967293));
label_4a3024:
    // 0x4a3024: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x4a3024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_4a3028:
    // 0x4a3028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a3028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a302c:
    // 0x4a302c: 0x24e9fffd  addiu       $t1, $a3, -0x3
    ctx->pc = 0x4a302cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
label_4a3030:
    // 0x4a3030: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a3030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4a3034:
    // 0x4a3034: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a3034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a3038:
    // 0x4a3038: 0x829825  or          $s3, $a0, $v0
    ctx->pc = 0x4a3038u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4a303c:
    // 0x4a303c: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x4a303cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_4a3040:
    // 0x4a3040: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a3040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a3044:
    // 0x4a3044: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x4a3044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_4a3048:
    // 0x4a3048: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a3048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a304c:
    // 0x4a304c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a304cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3050:
    // 0x4a3050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a3050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3054:
    // 0x4a3054: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a3054u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3058:
    // 0x4a3058: 0x0  nop
    ctx->pc = 0x4a3058u;
    // NOP
label_4a305c:
    // 0x4a305c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4a305cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4a3060:
    // 0x4a3060: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a3060u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3064:
    // 0x4a3064: 0x0  nop
    ctx->pc = 0x4a3064u;
    // NOP
label_4a3068:
    // 0x4a3068: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4a3068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4a306c:
    // 0x4a306c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a306cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3070:
    // 0x4a3070: 0x0  nop
    ctx->pc = 0x4a3070u;
    // NOP
label_4a3074:
    // 0x4a3074: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4a3074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4a3078:
    // 0x4a3078: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a3078u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a307c:
    // 0x4a307c: 0x0  nop
    ctx->pc = 0x4a307cu;
    // NOP
label_4a3080:
    // 0x4a3080: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a3080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a3084:
    // 0x4a3084: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a3084u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3088:
    // 0x4a3088: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a3088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a308c:
    // 0x4a308c: 0xc0bc284  jal         func_2F0A10
label_4a3090:
    if (ctx->pc == 0x4A3090u) {
        ctx->pc = 0x4A3090u;
            // 0x4a3090: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4A3094u;
        goto label_4a3094;
    }
    ctx->pc = 0x4A308Cu;
    SET_GPR_U32(ctx, 31, 0x4A3094u);
    ctx->pc = 0x4A3090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A308Cu;
            // 0x4a3090: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3094u; }
        if (ctx->pc != 0x4A3094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3094u; }
        if (ctx->pc != 0x4A3094u) { return; }
    }
    ctx->pc = 0x4A3094u;
label_4a3094:
    // 0x4a3094: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a3094u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3098:
    // 0x4a3098: 0x265400c0  addiu       $s4, $s2, 0xC0
    ctx->pc = 0x4a3098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_4a309c:
    // 0x4a309c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a309cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a30a0:
    // 0x4a30a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a30a4:
    // 0x4a30a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a30a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a30a8:
    // 0x4a30a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a30a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a30ac:
    // 0x4a30ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a30acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a30b0:
    // 0x4a30b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a30b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a30b4:
    // 0x4a30b4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a30b4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a30b8:
    // 0x4a30b8: 0x0  nop
    ctx->pc = 0x4a30b8u;
    // NOP
label_4a30bc:
    // 0x4a30bc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a30bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a30c0:
    // 0x4a30c0: 0x4615dd81  sub.s       $f22, $f27, $f21
    ctx->pc = 0x4a30c0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[27], ctx->f[21]);
label_4a30c4:
    // 0x4a30c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a30c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a30c8:
    // 0x4a30c8: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x4a30c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_4a30cc:
    // 0x4a30cc: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x4a30ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
label_4a30d0:
    // 0x4a30d0: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x4a30d0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_4a30d4:
    // 0x4a30d4: 0xc0bc284  jal         func_2F0A10
label_4a30d8:
    if (ctx->pc == 0x4A30D8u) {
        ctx->pc = 0x4A30D8u;
            // 0x4a30d8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x4A30DCu;
        goto label_4a30dc;
    }
    ctx->pc = 0x4A30D4u;
    SET_GPR_U32(ctx, 31, 0x4A30DCu);
    ctx->pc = 0x4A30D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A30D4u;
            // 0x4a30d8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A30DCu; }
        if (ctx->pc != 0x4A30DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A30DCu; }
        if (ctx->pc != 0x4A30DCu) { return; }
    }
    ctx->pc = 0x4A30DCu;
label_4a30dc:
    // 0x4a30dc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a30dcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a30e0:
    // 0x4a30e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a30e4:
    // 0x4a30e4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a30e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a30e8:
    // 0x4a30e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a30e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a30ec:
    // 0x4a30ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a30ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a30f0:
    // 0x4a30f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a30f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a30f4:
    // 0x4a30f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a30f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a30f8:
    // 0x4a30f8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a30f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a30fc:
    // 0x4a30fc: 0x0  nop
    ctx->pc = 0x4a30fcu;
    // NOP
label_4a3100:
    // 0x4a3100: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a3100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a3104:
    // 0x4a3104: 0x4615d540  add.s       $f21, $f26, $f21
    ctx->pc = 0x4a3104u;
    ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[21]);
label_4a3108:
    // 0x4a3108: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x4a3108u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_4a310c:
    // 0x4a310c: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x4a310cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
label_4a3110:
    // 0x4a3110: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x4a3110u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_4a3114:
    // 0x4a3114: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a3114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a3118:
    // 0x4a3118: 0xc0bc284  jal         func_2F0A10
label_4a311c:
    if (ctx->pc == 0x4A311Cu) {
        ctx->pc = 0x4A311Cu;
            // 0x4a311c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4A3120u;
        goto label_4a3120;
    }
    ctx->pc = 0x4A3118u;
    SET_GPR_U32(ctx, 31, 0x4A3120u);
    ctx->pc = 0x4A311Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3118u;
            // 0x4a311c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3120u; }
        if (ctx->pc != 0x4A3120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3120u; }
        if (ctx->pc != 0x4A3120u) { return; }
    }
    ctx->pc = 0x4A3120u;
label_4a3120:
    // 0x4a3120: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a3120u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3124:
    // 0x4a3124: 0x265400b0  addiu       $s4, $s2, 0xB0
    ctx->pc = 0x4a3124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_4a3128:
    // 0x4a3128: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a3128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a312c:
    // 0x4a312c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a3130:
    // 0x4a3130: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a3130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a3134:
    // 0x4a3134: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a3134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a3138:
    // 0x4a3138: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a3138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a313c:
    // 0x4a313c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a313cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3140:
    // 0x4a3140: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a3140u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3144:
    // 0x4a3144: 0x0  nop
    ctx->pc = 0x4a3144u;
    // NOP
label_4a3148:
    // 0x4a3148: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a3148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a314c:
    // 0x4a314c: 0x4614cdc1  sub.s       $f23, $f25, $f20
    ctx->pc = 0x4a314cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[20]);
label_4a3150:
    // 0x4a3150: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a3150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a3154:
    // 0x4a3154: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x4a3154u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_4a3158:
    // 0x4a3158: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x4a3158u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
label_4a315c:
    // 0x4a315c: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x4a315cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
label_4a3160:
    // 0x4a3160: 0xc0bc284  jal         func_2F0A10
label_4a3164:
    if (ctx->pc == 0x4A3164u) {
        ctx->pc = 0x4A3164u;
            // 0x4a3164: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x4A3168u;
        goto label_4a3168;
    }
    ctx->pc = 0x4A3160u;
    SET_GPR_U32(ctx, 31, 0x4A3168u);
    ctx->pc = 0x4A3164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3160u;
            // 0x4a3164: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3168u; }
        if (ctx->pc != 0x4A3168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3168u; }
        if (ctx->pc != 0x4A3168u) { return; }
    }
    ctx->pc = 0x4A3168u;
label_4a3168:
    // 0x4a3168: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a3168u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a316c:
    // 0x4a316c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a316cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a3170:
    // 0x4a3170: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a3170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a3174:
    // 0x4a3174: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a3174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a3178:
    // 0x4a3178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a3178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a317c:
    // 0x4a317c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a317cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3180:
    // 0x4a3180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a3180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3184:
    // 0x4a3184: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a3184u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3188:
    // 0x4a3188: 0x0  nop
    ctx->pc = 0x4a3188u;
    // NOP
label_4a318c:
    // 0x4a318c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a318cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a3190:
    // 0x4a3190: 0x4614c500  add.s       $f20, $f24, $f20
    ctx->pc = 0x4a3190u;
    ctx->f[20] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
label_4a3194:
    // 0x4a3194: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x4a3194u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_4a3198:
    // 0x4a3198: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x4a3198u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
label_4a319c:
    // 0x4a319c: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x4a319cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_4a31a0:
    // 0x4a31a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a31a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a31a4:
    // 0x4a31a4: 0xc0bc284  jal         func_2F0A10
label_4a31a8:
    if (ctx->pc == 0x4A31A8u) {
        ctx->pc = 0x4A31A8u;
            // 0x4a31a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A31ACu;
        goto label_4a31ac;
    }
    ctx->pc = 0x4A31A4u;
    SET_GPR_U32(ctx, 31, 0x4A31ACu);
    ctx->pc = 0x4A31A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A31A4u;
            // 0x4a31a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A31ACu; }
        if (ctx->pc != 0x4A31ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A31ACu; }
        if (ctx->pc != 0x4A31ACu) { return; }
    }
    ctx->pc = 0x4A31ACu;
label_4a31ac:
    // 0x4a31ac: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a31acu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a31b0:
    // 0x4a31b0: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x4a31b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4a31b4:
    // 0x4a31b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a31b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a31b8:
    // 0x4a31b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a31bc:
    // 0x4a31bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a31c0:
    // 0x4a31c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a31c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a31c4:
    // 0x4a31c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a31c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a31c8:
    // 0x4a31c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a31c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a31cc:
    // 0x4a31cc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a31ccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a31d0:
    // 0x4a31d0: 0x0  nop
    ctx->pc = 0x4a31d0u;
    // NOP
label_4a31d4:
    // 0x4a31d4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a31d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a31d8:
    // 0x4a31d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a31d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a31dc:
    // 0x4a31dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4a31dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4a31e0:
    // 0x4a31e0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x4a31e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_4a31e4:
    // 0x4a31e4: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x4a31e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
label_4a31e8:
    // 0x4a31e8: 0xc0bc284  jal         func_2F0A10
label_4a31ec:
    if (ctx->pc == 0x4A31ECu) {
        ctx->pc = 0x4A31ECu;
            // 0x4a31ec: 0x4600cbc6  mov.s       $f15, $f25 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[25]);
        ctx->pc = 0x4A31F0u;
        goto label_4a31f0;
    }
    ctx->pc = 0x4A31E8u;
    SET_GPR_U32(ctx, 31, 0x4A31F0u);
    ctx->pc = 0x4A31ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A31E8u;
            // 0x4a31ec: 0x4600cbc6  mov.s       $f15, $f25 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A31F0u; }
        if (ctx->pc != 0x4A31F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A31F0u; }
        if (ctx->pc != 0x4A31F0u) { return; }
    }
    ctx->pc = 0x4A31F0u;
label_4a31f0:
    // 0x4a31f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a31f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a31f4:
    // 0x4a31f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a31f8:
    // 0x4a31f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a31f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a31fc:
    // 0x4a31fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a31fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a3200:
    // 0x4a3200: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a3200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a3204:
    // 0x4a3204: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a3204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3208:
    // 0x4a3208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a3208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a320c:
    // 0x4a320c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a320cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3210:
    // 0x4a3210: 0x0  nop
    ctx->pc = 0x4a3210u;
    // NOP
label_4a3214:
    // 0x4a3214: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a3214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a3218:
    // 0x4a3218: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x4a3218u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_4a321c:
    // 0x4a321c: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x4a321cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
label_4a3220:
    // 0x4a3220: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a3220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a3224:
    // 0x4a3224: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a3224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a3228:
    // 0x4a3228: 0xc0bc284  jal         func_2F0A10
label_4a322c:
    if (ctx->pc == 0x4A322Cu) {
        ctx->pc = 0x4A322Cu;
            // 0x4a322c: 0x4600d386  mov.s       $f14, $f26 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x4A3230u;
        goto label_4a3230;
    }
    ctx->pc = 0x4A3228u;
    SET_GPR_U32(ctx, 31, 0x4A3230u);
    ctx->pc = 0x4A322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3228u;
            // 0x4a322c: 0x4600d386  mov.s       $f14, $f26 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3230u; }
        if (ctx->pc != 0x4A3230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3230u; }
        if (ctx->pc != 0x4A3230u) { return; }
    }
    ctx->pc = 0x4A3230u;
label_4a3230:
    // 0x4a3230: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a3230u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3234:
    // 0x4a3234: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a3234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a3238:
    // 0x4a3238: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a3238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a323c:
    // 0x4a323c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a3240:
    // 0x4a3240: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a3240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a3244:
    // 0x4a3244: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a3244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3248:
    // 0x4a3248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a3248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a324c:
    // 0x4a324c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a324cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3250:
    // 0x4a3250: 0x0  nop
    ctx->pc = 0x4a3250u;
    // NOP
label_4a3254:
    // 0x4a3254: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a3254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a3258:
    // 0x4a3258: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4a3258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4a325c:
    // 0x4a325c: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x4a325cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
label_4a3260:
    // 0x4a3260: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4a3260u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4a3264:
    // 0x4a3264: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a3264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a3268:
    // 0x4a3268: 0xc0bc284  jal         func_2F0A10
label_4a326c:
    if (ctx->pc == 0x4A326Cu) {
        ctx->pc = 0x4A326Cu;
            // 0x4a326c: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x4A3270u;
        goto label_4a3270;
    }
    ctx->pc = 0x4A3268u;
    SET_GPR_U32(ctx, 31, 0x4A3270u);
    ctx->pc = 0x4A326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3268u;
            // 0x4a326c: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3270u; }
        if (ctx->pc != 0x4A3270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3270u; }
        if (ctx->pc != 0x4A3270u) { return; }
    }
    ctx->pc = 0x4A3270u;
label_4a3270:
    // 0x4a3270: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a3270u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3274:
    // 0x4a3274: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a3274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a3278:
    // 0x4a3278: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a3278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a327c:
    // 0x4a327c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a327cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a3280:
    // 0x4a3280: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a3280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3284:
    // 0x4a3284: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a3284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a3288:
    // 0x4a3288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a3288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a328c:
    // 0x4a328c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a328cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3290:
    // 0x4a3290: 0x0  nop
    ctx->pc = 0x4a3290u;
    // NOP
label_4a3294:
    // 0x4a3294: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a3294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a3298:
    // 0x4a3298: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a3298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a329c:
    // 0x4a329c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4a329cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4a32a0:
    // 0x4a32a0: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x4a32a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
label_4a32a4:
    // 0x4a32a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a32a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a32a8:
    // 0x4a32a8: 0xc0bc284  jal         func_2F0A10
label_4a32ac:
    if (ctx->pc == 0x4A32ACu) {
        ctx->pc = 0x4A32ACu;
            // 0x4a32ac: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x4A32B0u;
        goto label_4a32b0;
    }
    ctx->pc = 0x4A32A8u;
    SET_GPR_U32(ctx, 31, 0x4A32B0u);
    ctx->pc = 0x4A32ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A32A8u;
            // 0x4a32ac: 0x4600c3c6  mov.s       $f15, $f24 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A32B0u; }
        if (ctx->pc != 0x4A32B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A32B0u; }
        if (ctx->pc != 0x4A32B0u) { return; }
    }
    ctx->pc = 0x4A32B0u;
label_4a32b0:
    // 0x4a32b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4a32b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4a32b4:
    // 0x4a32b4: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x4a32b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_4a32b8:
    // 0x4a32b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a32b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a32bc:
    // 0x4a32bc: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x4a32bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4a32c0:
    // 0x4a32c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a32c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a32c4:
    // 0x4a32c4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4a32c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4a32c8:
    // 0x4a32c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a32c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a32cc:
    // 0x4a32cc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4a32ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4a32d0:
    // 0x4a32d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a32d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a32d4:
    // 0x4a32d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a32d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a32d8:
    // 0x4a32d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a32d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a32dc:
    // 0x4a32dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a32dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a32e0:
    // 0x4a32e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a32e4:
    // 0x4a32e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a32e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a32e8:
    // 0x4a32e8: 0x3e00008  jr          $ra
label_4a32ec:
    if (ctx->pc == 0x4A32ECu) {
        ctx->pc = 0x4A32ECu;
            // 0x4a32ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4A32F0u;
        goto label_4a32f0;
    }
    ctx->pc = 0x4A32E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A32ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A32E8u;
            // 0x4a32ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A32F0u;
label_4a32f0:
    // 0x4a32f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4a32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4a32f4:
    // 0x4a32f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a32f8:
    // 0x4a32f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4a32f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4a32fc:
    // 0x4a32fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4a32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4a3300:
    // 0x4a3300: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4a3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4a3304:
    // 0x4a3304: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4a3308:
    // 0x4a3308: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a330c:
    // 0x4a330c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a3310:
    // 0x4a3310: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a3310u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a3314:
    // 0x4a3314: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a3318:
    // 0x4a3318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a331c:
    // 0x4a331c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a3320:
    // 0x4a3320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a3320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a3324:
    // 0x4a3324: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4a3324u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a3328:
    // 0x4a3328: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_4a332c:
    if (ctx->pc == 0x4A332Cu) {
        ctx->pc = 0x4A332Cu;
            // 0x4a332c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x4A3330u;
        goto label_4a3330;
    }
    ctx->pc = 0x4A3328u;
    {
        const bool branch_taken_0x4a3328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a3328) {
            ctx->pc = 0x4A332Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3328u;
            // 0x4a332c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3394u;
            goto label_4a3394;
        }
    }
    ctx->pc = 0x4A3330u;
label_4a3330:
    // 0x4a3330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a3330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a3334:
    // 0x4a3334: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_4a3338:
    if (ctx->pc == 0x4A3338u) {
        ctx->pc = 0x4A3338u;
            // 0x4a3338: 0x82a20071  lb          $v0, 0x71($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 113)));
        ctx->pc = 0x4A333Cu;
        goto label_4a333c;
    }
    ctx->pc = 0x4A3334u;
    {
        const bool branch_taken_0x4a3334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a3334) {
            ctx->pc = 0x4A3338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3334u;
            // 0x4a3338: 0x82a20071  lb          $v0, 0x71($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 113)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3344u;
            goto label_4a3344;
        }
    }
    ctx->pc = 0x4A333Cu;
label_4a333c:
    // 0x4a333c: 0x100000ba  b           . + 4 + (0xBA << 2)
label_4a3340:
    if (ctx->pc == 0x4A3340u) {
        ctx->pc = 0x4A3344u;
        goto label_4a3344;
    }
    ctx->pc = 0x4A333Cu;
    {
        const bool branch_taken_0x4a333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a333c) {
            ctx->pc = 0x4A3628u;
            goto label_4a3628;
        }
    }
    ctx->pc = 0x4A3344u;
label_4a3344:
    // 0x4a3344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a3348:
    // 0x4a3348: 0xa2a20071  sb          $v0, 0x71($s5)
    ctx->pc = 0x4a3348u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 113), (uint8_t)GPR_U32(ctx, 2));
label_4a334c:
    // 0x4a334c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x4a334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_4a3350:
    // 0x4a3350: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a3350u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a3354:
    // 0x4a3354: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x4a3354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_4a3358:
    // 0x4a3358: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4a335c:
    if (ctx->pc == 0x4A335Cu) {
        ctx->pc = 0x4A3360u;
        goto label_4a3360;
    }
    ctx->pc = 0x4A3358u;
    {
        const bool branch_taken_0x4a3358 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3358) {
            ctx->pc = 0x4A3368u;
            goto label_4a3368;
        }
    }
    ctx->pc = 0x4A3360u;
label_4a3360:
    // 0x4a3360: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a3360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a3364:
    // 0x4a3364: 0xa2a20071  sb          $v0, 0x71($s5)
    ctx->pc = 0x4a3364u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 113), (uint8_t)GPR_U32(ctx, 2));
label_4a3368:
    // 0x4a3368: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a3368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a336c:
    // 0x4a336c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a3370:
    // 0x4a3370: 0x9042007d  lbu         $v0, 0x7D($v0)
    ctx->pc = 0x4a3370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_4a3374:
    // 0x4a3374: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4a3378:
    if (ctx->pc == 0x4A3378u) {
        ctx->pc = 0x4A337Cu;
        goto label_4a337c;
    }
    ctx->pc = 0x4A3374u;
    {
        const bool branch_taken_0x4a3374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3374) {
            ctx->pc = 0x4A3390u;
            goto label_4a3390;
        }
    }
    ctx->pc = 0x4A337Cu;
label_4a337c:
    // 0x4a337c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4a337cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a3380:
    // 0x4a3380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a3380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a3384:
    // 0x4a3384: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4a3384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4a3388:
    // 0x4a3388: 0x320f809  jalr        $t9
label_4a338c:
    if (ctx->pc == 0x4A338Cu) {
        ctx->pc = 0x4A338Cu;
            // 0x4a338c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4A3390u;
        goto label_4a3390;
    }
    ctx->pc = 0x4A3388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A3390u);
        ctx->pc = 0x4A338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3388u;
            // 0x4a338c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A3390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A3390u; }
            if (ctx->pc != 0x4A3390u) { return; }
        }
        }
    }
    ctx->pc = 0x4A3390u;
label_4a3390:
    // 0x4a3390: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4a3390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4a3394:
    // 0x4a3394: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4a3394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4a3398:
    // 0x4a3398: 0xa2a20070  sb          $v0, 0x70($s5)
    ctx->pc = 0x4a3398u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 2));
label_4a339c:
    // 0x4a339c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a339cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a33a0:
    // 0x4a33a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a33a4:
    // 0x4a33a4: 0x8c7489e0  lw          $s4, -0x7620($v1)
    ctx->pc = 0x4a33a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_4a33a8:
    // 0x4a33a8: 0x24420bd0  addiu       $v0, $v0, 0xBD0
    ctx->pc = 0x4a33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
label_4a33ac:
    // 0x4a33ac: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x4a33acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a33b0:
    // 0x4a33b0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4a33b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4a33b4:
    // 0x4a33b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4a33b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a33b8:
    // 0x4a33b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4a33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4a33bc:
    // 0x4a33bc: 0x84423f80  lh          $v0, 0x3F80($v0)
    ctx->pc = 0x4a33bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16256)));
label_4a33c0:
    // 0x4a33c0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4a33c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4a33c4:
    // 0x4a33c4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4a33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4a33c8:
    // 0x4a33c8: 0x84423f82  lh          $v0, 0x3F82($v0)
    ctx->pc = 0x4a33c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16258)));
label_4a33cc:
    // 0x4a33cc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x4a33ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_4a33d0:
    // 0x4a33d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a33d4:
    // 0x4a33d4: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x4a33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_4a33d8:
    // 0x4a33d8: 0xc0506ac  jal         func_141AB0
label_4a33dc:
    if (ctx->pc == 0x4A33DCu) {
        ctx->pc = 0x4A33DCu;
            // 0x4a33dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A33E0u;
        goto label_4a33e0;
    }
    ctx->pc = 0x4A33D8u;
    SET_GPR_U32(ctx, 31, 0x4A33E0u);
    ctx->pc = 0x4A33DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A33D8u;
            // 0x4a33dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A33E0u; }
        if (ctx->pc != 0x4A33E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A33E0u; }
        if (ctx->pc != 0x4A33E0u) { return; }
    }
    ctx->pc = 0x4A33E0u;
label_4a33e0:
    // 0x4a33e0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4a33e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a33e4:
    // 0x4a33e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a33e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a33e8:
    // 0x4a33e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a33e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a33ec:
    // 0x4a33ec: 0x320f809  jalr        $t9
label_4a33f0:
    if (ctx->pc == 0x4A33F0u) {
        ctx->pc = 0x4A33F0u;
            // 0x4a33f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A33F4u;
        goto label_4a33f4;
    }
    ctx->pc = 0x4A33ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A33F4u);
        ctx->pc = 0x4A33F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A33ECu;
            // 0x4a33f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A33F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A33F4u; }
            if (ctx->pc != 0x4A33F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A33F4u;
label_4a33f4:
    // 0x4a33f4: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x4a33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_4a33f8:
    // 0x4a33f8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x4a33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4a33fc:
    // 0x4a33fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4a33fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4a3400:
    // 0x4a3400: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a3404:
    if (ctx->pc == 0x4A3404u) {
        ctx->pc = 0x4A3404u;
            // 0x4a3404: 0x92b30070  lbu         $s3, 0x70($s5) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x4A3408u;
        goto label_4a3408;
    }
    ctx->pc = 0x4A3400u;
    {
        const bool branch_taken_0x4a3400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3400u;
            // 0x4a3404: 0x92b30070  lbu         $s3, 0x70($s5) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3400) {
            ctx->pc = 0x4A3410u;
            goto label_4a3410;
        }
    }
    ctx->pc = 0x4A3408u;
label_4a3408:
    // 0x4a3408: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a340c:
    if (ctx->pc == 0x4A340Cu) {
        ctx->pc = 0x4A340Cu;
            // 0x4a340c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4A3410u;
        goto label_4a3410;
    }
    ctx->pc = 0x4A3408u;
    {
        const bool branch_taken_0x4a3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A340Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3408u;
            // 0x4a340c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3408) {
            ctx->pc = 0x4A3414u;
            goto label_4a3414;
        }
    }
    ctx->pc = 0x4A3410u;
label_4a3410:
    // 0x4a3410: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4a3410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4a3414:
    // 0x4a3414: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4a3418:
    // 0x4a3418: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4a3418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4a341c:
    // 0x4a341c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x4a341cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a3420:
    // 0x4a3420: 0x86480058  lh          $t0, 0x58($s2)
    ctx->pc = 0x4a3420u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_4a3424:
    // 0x4a3424: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4a3424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4a3428:
    // 0x4a3428: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4a3428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4a342c:
    // 0x4a342c: 0xc6a40074  lwc1        $f4, 0x74($s5)
    ctx->pc = 0x4a342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4a3430:
    // 0x4a3430: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x4a3430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_4a3434:
    // 0x4a3434: 0x86490060  lh          $t1, 0x60($s2)
    ctx->pc = 0x4a3434u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
label_4a3438:
    // 0x4a3438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a3438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a343c:
    // 0x4a343c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x4a343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a3440:
    // 0x4a3440: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4a3440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a3444:
    // 0x4a3444: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a3444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a3448:
    // 0x4a3448: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4a3448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a344c:
    // 0x4a344c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4a344cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a3450:
    // 0x4a3450: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a3450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a3454:
    // 0x4a3454: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a3454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a3458:
    // 0x4a3458: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4a3458u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4a345c:
    // 0x4a345c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4a345cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4a3460:
    // 0x4a3460: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4a3460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4a3464:
    // 0x4a3464: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4a3464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4a3468:
    // 0x4a3468: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a3468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_4a346c:
    // 0x4a346c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a346cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4a3470:
    // 0x4a3470: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a3470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a3474:
    // 0x4a3474: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4a3474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a3478:
    // 0x4a3478: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x4a3478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a347c:
    // 0x4a347c: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x4a347cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_4a3480:
    // 0x4a3480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a3480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3484:
    // 0x4a3484: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x4a3484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4a3488:
    // 0x4a3488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a3488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a348c:
    // 0x4a348c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x4a348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4a3490:
    // 0x4a3490: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x4a3490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4a3494:
    // 0x4a3494: 0x12a4023  subu        $t0, $t1, $t2
    ctx->pc = 0x4a3494u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4a3498:
    // 0x4a3498: 0x12a1021  addu        $v0, $t1, $t2
    ctx->pc = 0x4a3498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4a349c:
    // 0x4a349c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x4a349cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a34a0:
    // 0x4a34a0: 0x0  nop
    ctx->pc = 0x4a34a0u;
    // NOP
label_4a34a4:
    // 0x4a34a4: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x4a34a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4a34a8:
    // 0x4a34a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a34a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a34ac:
    // 0x4a34ac: 0x0  nop
    ctx->pc = 0x4a34acu;
    // NOP
label_4a34b0:
    // 0x4a34b0: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x4a34b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4a34b4:
    // 0x4a34b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a34b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a34b8:
    // 0x4a34b8: 0x0  nop
    ctx->pc = 0x4a34b8u;
    // NOP
label_4a34bc:
    // 0x4a34bc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a34bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a34c0:
    // 0x4a34c0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4a34c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a34c4:
    // 0x4a34c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a34c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a34c8:
    // 0x4a34c8: 0x0  nop
    ctx->pc = 0x4a34c8u;
    // NOP
label_4a34cc:
    // 0x4a34cc: 0x46800be0  cvt.s.w     $f15, $f1
    ctx->pc = 0x4a34ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4a34d0:
    // 0x4a34d0: 0xc0bc284  jal         func_2F0A10
label_4a34d4:
    if (ctx->pc == 0x4A34D4u) {
        ctx->pc = 0x4A34D4u;
            // 0x4a34d4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4A34D8u;
        goto label_4a34d8;
    }
    ctx->pc = 0x4A34D0u;
    SET_GPR_U32(ctx, 31, 0x4A34D8u);
    ctx->pc = 0x4A34D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A34D0u;
            // 0x4a34d4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A34D8u; }
        if (ctx->pc != 0x4A34D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A34D8u; }
        if (ctx->pc != 0x4A34D8u) { return; }
    }
    ctx->pc = 0x4A34D8u;
label_4a34d8:
    // 0x4a34d8: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4a34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4a34dc:
    // 0x4a34dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a34e0:
    // 0x4a34e0: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
label_4a34e4:
    if (ctx->pc == 0x4A34E4u) {
        ctx->pc = 0x4A34E8u;
        goto label_4a34e8;
    }
    ctx->pc = 0x4A34E0u;
    {
        const bool branch_taken_0x4a34e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a34e0) {
            ctx->pc = 0x4A3600u;
            goto label_4a3600;
        }
    }
    ctx->pc = 0x4A34E8u;
label_4a34e8:
    // 0x4a34e8: 0x86420060  lh          $v0, 0x60($s2)
    ctx->pc = 0x4a34e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
label_4a34ec:
    // 0x4a34ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a34ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a34f0:
    // 0x4a34f0: 0x86430058  lh          $v1, 0x58($s2)
    ctx->pc = 0x4a34f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_4a34f4:
    // 0x4a34f4: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x4a34f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4a34f8:
    // 0x4a34f8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x4a34f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4a34fc:
    // 0x4a34fc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4a34fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3500:
    // 0x4a3500: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x4a3500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_4a3504:
    // 0x4a3504: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4a3504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3508:
    // 0x4a3508: 0x24630046  addiu       $v1, $v1, 0x46
    ctx->pc = 0x4a3508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 70));
label_4a350c:
    // 0x4a350c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x4a350cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
label_4a3510:
    // 0x4a3510: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x4a3510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_4a3514:
    // 0x4a3514: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x4a3514u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_4a3518:
    // 0x4a3518: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x4a3518u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_4a351c:
    // 0x4a351c: 0xc128bd0  jal         func_4A2F40
label_4a3520:
    if (ctx->pc == 0x4A3520u) {
        ctx->pc = 0x4A3520u;
            // 0x4a3520: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3524u;
        goto label_4a3524;
    }
    ctx->pc = 0x4A351Cu;
    SET_GPR_U32(ctx, 31, 0x4A3524u);
    ctx->pc = 0x4A3520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A351Cu;
            // 0x4a3520: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2F40u;
    goto label_4a2f40;
    ctx->pc = 0x4A3524u;
label_4a3524:
    // 0x4a3524: 0x86420058  lh          $v0, 0x58($s2)
    ctx->pc = 0x4a3524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_4a3528:
    // 0x4a3528: 0x261effec  addiu       $fp, $s0, -0x14
    ctx->pc = 0x4a3528u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_4a352c:
    // 0x4a352c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a3530:
    // 0x4a3530: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4a3530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a3534:
    // 0x4a3534: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x4a3534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4a3538:
    // 0x4a3538: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x4a3538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4a353c:
    // 0x4a353c: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x4a353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
label_4a3540:
    // 0x4a3540: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4a3540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3544:
    // 0x4a3544: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x4a3544u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_4a3548:
    // 0x4a3548: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4a3548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a354c:
    // 0x4a354c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x4a354cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_4a3550:
    // 0x4a3550: 0xc128bd0  jal         func_4A2F40
label_4a3554:
    if (ctx->pc == 0x4A3554u) {
        ctx->pc = 0x4A3554u;
            // 0x4a3554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3558u;
        goto label_4a3558;
    }
    ctx->pc = 0x4A3550u;
    SET_GPR_U32(ctx, 31, 0x4A3558u);
    ctx->pc = 0x4A3554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3550u;
            // 0x4a3554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2F40u;
    goto label_4a2f40;
    ctx->pc = 0x4A3558u;
label_4a3558:
    // 0x4a3558: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4a3558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a355c:
    // 0x4a355c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a3560:
    // 0x4a3560: 0x26130014  addiu       $s3, $s0, 0x14
    ctx->pc = 0x4a3560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_4a3564:
    // 0x4a3564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a3564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a3568:
    // 0x4a3568: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a3568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a356c:
    // 0x4a356c: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x4a356cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4a3570:
    // 0x4a3570: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x4a3570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4a3574:
    // 0x4a3574: 0xc128bd0  jal         func_4A2F40
label_4a3578:
    if (ctx->pc == 0x4A3578u) {
        ctx->pc = 0x4A3578u;
            // 0x4a3578: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A357Cu;
        goto label_4a357c;
    }
    ctx->pc = 0x4A3574u;
    SET_GPR_U32(ctx, 31, 0x4A357Cu);
    ctx->pc = 0x4A3578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3574u;
            // 0x4a3578: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2F40u;
    goto label_4a2f40;
    ctx->pc = 0x4A357Cu;
label_4a357c:
    // 0x4a357c: 0x86450058  lh          $a1, 0x58($s2)
    ctx->pc = 0x4a357cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_4a3580:
    // 0x4a3580: 0x86460060  lh          $a2, 0x60($s2)
    ctx->pc = 0x4a3580u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
label_4a3584:
    // 0x4a3584: 0xc128b24  jal         func_4A2C90
label_4a3588:
    if (ctx->pc == 0x4A3588u) {
        ctx->pc = 0x4A3588u;
            // 0x4a3588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A358Cu;
        goto label_4a358c;
    }
    ctx->pc = 0x4A3584u;
    SET_GPR_U32(ctx, 31, 0x4A358Cu);
    ctx->pc = 0x4A3588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3584u;
            // 0x4a3588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C90u;
    if (runtime->hasFunction(0x4A2C90u)) {
        auto targetFn = runtime->lookupFunction(0x4A2C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A358Cu; }
        if (ctx->pc != 0x4A358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A2C90_0x4a2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A358Cu; }
        if (ctx->pc != 0x4A358Cu) { return; }
    }
    ctx->pc = 0x4A358Cu;
label_4a358c:
    // 0x4a358c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4a358cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a3590:
    // 0x4a3590: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a3590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a3594:
    // 0x4a3594: 0x320f809  jalr        $t9
label_4a3598:
    if (ctx->pc == 0x4A3598u) {
        ctx->pc = 0x4A3598u;
            // 0x4a3598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A359Cu;
        goto label_4a359c;
    }
    ctx->pc = 0x4A3594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A359Cu);
        ctx->pc = 0x4A3598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3594u;
            // 0x4a3598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A359Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A359Cu; }
            if (ctx->pc != 0x4A359Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A359Cu;
label_4a359c:
    // 0x4a359c: 0x86420058  lh          $v0, 0x58($s2)
    ctx->pc = 0x4a359cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_4a35a0:
    // 0x4a35a0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x4a35a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4a35a4:
    // 0x4a35a4: 0x86470068  lh          $a3, 0x68($s2)
    ctx->pc = 0x4a35a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
label_4a35a8:
    // 0x4a35a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a35ac:
    // 0x4a35ac: 0xc128a90  jal         func_4A2A40
label_4a35b0:
    if (ctx->pc == 0x4A35B0u) {
        ctx->pc = 0x4A35B0u;
            // 0x4a35b0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x4A35B4u;
        goto label_4a35b4;
    }
    ctx->pc = 0x4A35ACu;
    SET_GPR_U32(ctx, 31, 0x4A35B4u);
    ctx->pc = 0x4A35B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A35ACu;
            // 0x4a35b0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A2A40u;
    if (runtime->hasFunction(0x4A2A40u)) {
        auto targetFn = runtime->lookupFunction(0x4A2A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A35B4u; }
        if (ctx->pc != 0x4A35B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A2A40_0x4a2a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A35B4u; }
        if (ctx->pc != 0x4A35B4u) { return; }
    }
    ctx->pc = 0x4A35B4u;
label_4a35b4:
    // 0x4a35b4: 0x8ea20088  lw          $v0, 0x88($s5)
    ctx->pc = 0x4a35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4a35b8:
    // 0x4a35b8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4a35b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a35bc:
    // 0x4a35bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a35bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a35c0:
    // 0x4a35c0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x4a35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_4a35c4:
    // 0x4a35c4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4a35c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a35c8:
    // 0x4a35c8: 0xc1289e8  jal         func_4A27A0
label_4a35cc:
    if (ctx->pc == 0x4A35CCu) {
        ctx->pc = 0x4A35CCu;
            // 0x4a35cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A35D0u;
        goto label_4a35d0;
    }
    ctx->pc = 0x4A35C8u;
    SET_GPR_U32(ctx, 31, 0x4A35D0u);
    ctx->pc = 0x4A35CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A35C8u;
            // 0x4a35cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A27A0u;
    if (runtime->hasFunction(0x4A27A0u)) {
        auto targetFn = runtime->lookupFunction(0x4A27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A35D0u; }
        if (ctx->pc != 0x4A35D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A27A0_0x4a27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A35D0u; }
        if (ctx->pc != 0x4A35D0u) { return; }
    }
    ctx->pc = 0x4A35D0u;
label_4a35d0:
    // 0x4a35d0: 0x8ea30088  lw          $v1, 0x88($s5)
    ctx->pc = 0x4a35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4a35d4:
    // 0x4a35d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a35d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a35d8:
    // 0x4a35d8: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x4a35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_4a35dc:
    // 0x4a35dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a35dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a35e0:
    // 0x4a35e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a35e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a35e4:
    // 0x4a35e4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x4a35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_4a35e8:
    // 0x4a35e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a35ec:
    // 0x4a35ec: 0xc1289e8  jal         func_4A27A0
label_4a35f0:
    if (ctx->pc == 0x4A35F0u) {
        ctx->pc = 0x4A35F0u;
            // 0x4a35f0: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4A35F4u;
        goto label_4a35f4;
    }
    ctx->pc = 0x4A35ECu;
    SET_GPR_U32(ctx, 31, 0x4A35F4u);
    ctx->pc = 0x4A35F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A35ECu;
            // 0x4a35f0: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A27A0u;
    if (runtime->hasFunction(0x4A27A0u)) {
        auto targetFn = runtime->lookupFunction(0x4A27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A35F4u; }
        if (ctx->pc != 0x4A35F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A27A0_0x4a27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A35F4u; }
        if (ctx->pc != 0x4A35F4u) { return; }
    }
    ctx->pc = 0x4A35F4u;
label_4a35f4:
    // 0x4a35f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4a35f8:
    if (ctx->pc == 0x4A35F8u) {
        ctx->pc = 0x4A35FCu;
        goto label_4a35fc;
    }
    ctx->pc = 0x4A35F4u;
    {
        const bool branch_taken_0x4a35f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a35f4) {
            ctx->pc = 0x4A3610u;
            goto label_4a3610;
        }
    }
    ctx->pc = 0x4A35FCu;
label_4a35fc:
    // 0x4a35fc: 0x0  nop
    ctx->pc = 0x4a35fcu;
    // NOP
label_4a3600:
    // 0x4a3600: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4a3600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a3604:
    // 0x4a3604: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a3604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a3608:
    // 0x4a3608: 0x320f809  jalr        $t9
label_4a360c:
    if (ctx->pc == 0x4A360Cu) {
        ctx->pc = 0x4A360Cu;
            // 0x4a360c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3610u;
        goto label_4a3610;
    }
    ctx->pc = 0x4A3608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A3610u);
        ctx->pc = 0x4A360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3608u;
            // 0x4a360c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A3610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A3610u; }
            if (ctx->pc != 0x4A3610u) { return; }
        }
        }
    }
    ctx->pc = 0x4A3610u;
label_4a3610:
    // 0x4a3610: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4a3610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4a3614:
    // 0x4a3614: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4a3614u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4a3618:
    // 0x4a3618: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4a3618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_4a361c:
    // 0x4a361c: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x4a361cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a3620:
    // 0x4a3620: 0x1460ff6b  bnez        $v1, . + 4 + (-0x95 << 2)
label_4a3624:
    if (ctx->pc == 0x4A3624u) {
        ctx->pc = 0x4A3624u;
            // 0x4a3624: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x4A3628u;
        goto label_4a3628;
    }
    ctx->pc = 0x4A3620u;
    {
        const bool branch_taken_0x4a3620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3620u;
            // 0x4a3624: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3620) {
            ctx->pc = 0x4A33D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a33d0;
        }
    }
    ctx->pc = 0x4A3628u;
label_4a3628:
    // 0x4a3628: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4a3628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4a362c:
    // 0x4a362c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4a362cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a3630:
    // 0x4a3630: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4a3630u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a3634:
    // 0x4a3634: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a3634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a3638:
    // 0x4a3638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a3638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a363c:
    // 0x4a363c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a363cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a3640:
    // 0x4a3640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a3640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a3644:
    // 0x4a3644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a3644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a3648:
    // 0x4a3648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a3648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a364c:
    // 0x4a364c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a364cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a3650:
    // 0x4a3650: 0x3e00008  jr          $ra
label_4a3654:
    if (ctx->pc == 0x4A3654u) {
        ctx->pc = 0x4A3654u;
            // 0x4a3654: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4A3658u;
        goto label_4a3658;
    }
    ctx->pc = 0x4A3650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3650u;
            // 0x4a3654: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A3658u;
label_4a3658:
    // 0x4a3658: 0x0  nop
    ctx->pc = 0x4a3658u;
    // NOP
label_4a365c:
    // 0x4a365c: 0x0  nop
    ctx->pc = 0x4a365cu;
    // NOP
label_4a3660:
    // 0x4a3660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a3664:
    // 0x4a3664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a3668:
    // 0x4a3668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a366c:
    // 0x4a366c: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x4a366cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a3670:
    // 0x4a3670: 0x10c3003e  beq         $a2, $v1, . + 4 + (0x3E << 2)
label_4a3674:
    if (ctx->pc == 0x4A3674u) {
        ctx->pc = 0x4A3674u;
            // 0x4a3674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3678u;
        goto label_4a3678;
    }
    ctx->pc = 0x4A3670u;
    {
        const bool branch_taken_0x4a3670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A3674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3670u;
            // 0x4a3674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3670) {
            ctx->pc = 0x4A376Cu;
            goto label_4a376c;
        }
    }
    ctx->pc = 0x4A3678u;
label_4a3678:
    // 0x4a3678: 0x50c00037  beql        $a2, $zero, . + 4 + (0x37 << 2)
label_4a367c:
    if (ctx->pc == 0x4A367Cu) {
        ctx->pc = 0x4A367Cu;
            // 0x4a367c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A3680u;
        goto label_4a3680;
    }
    ctx->pc = 0x4A3678u;
    {
        const bool branch_taken_0x4a3678 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3678) {
            ctx->pc = 0x4A367Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3678u;
            // 0x4a367c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3758u;
            goto label_4a3758;
        }
    }
    ctx->pc = 0x4A3680u;
label_4a3680:
    // 0x4a3680: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a3680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a3684:
    // 0x4a3684: 0x50c3000b  beql        $a2, $v1, . + 4 + (0xB << 2)
label_4a3688:
    if (ctx->pc == 0x4A3688u) {
        ctx->pc = 0x4A3688u;
            // 0x4a3688: 0x80a30071  lb          $v1, 0x71($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 113)));
        ctx->pc = 0x4A368Cu;
        goto label_4a368c;
    }
    ctx->pc = 0x4A3684u;
    {
        const bool branch_taken_0x4a3684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a3684) {
            ctx->pc = 0x4A3688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3684u;
            // 0x4a3688: 0x80a30071  lb          $v1, 0x71($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 113)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A36B4u;
            goto label_4a36b4;
        }
    }
    ctx->pc = 0x4A368Cu;
label_4a368c:
    // 0x4a368c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a3690:
    // 0x4a3690: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_4a3694:
    if (ctx->pc == 0x4A3694u) {
        ctx->pc = 0x4A3694u;
            // 0x4a3694: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A3698u;
        goto label_4a3698;
    }
    ctx->pc = 0x4A3690u;
    {
        const bool branch_taken_0x4a3690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a3690) {
            ctx->pc = 0x4A3694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3690u;
            // 0x4a3694: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A36A0u;
            goto label_4a36a0;
        }
    }
    ctx->pc = 0x4A3698u;
label_4a3698:
    // 0x4a3698: 0x10000039  b           . + 4 + (0x39 << 2)
label_4a369c:
    if (ctx->pc == 0x4A369Cu) {
        ctx->pc = 0x4A369Cu;
            // 0x4a369c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4A36A0u;
        goto label_4a36a0;
    }
    ctx->pc = 0x4A3698u;
    {
        const bool branch_taken_0x4a3698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3698u;
            // 0x4a369c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3698) {
            ctx->pc = 0x4A3780u;
            goto label_4a3780;
        }
    }
    ctx->pc = 0x4A36A0u;
label_4a36a0:
    // 0x4a36a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a36a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a36a4:
    // 0x4a36a4: 0x320f809  jalr        $t9
label_4a36a8:
    if (ctx->pc == 0x4A36A8u) {
        ctx->pc = 0x4A36ACu;
        goto label_4a36ac;
    }
    ctx->pc = 0x4A36A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A36ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A36ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A36ACu; }
            if (ctx->pc != 0x4A36ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4A36ACu;
label_4a36ac:
    // 0x4a36ac: 0x10000033  b           . + 4 + (0x33 << 2)
label_4a36b0:
    if (ctx->pc == 0x4A36B0u) {
        ctx->pc = 0x4A36B4u;
        goto label_4a36b4;
    }
    ctx->pc = 0x4A36ACu;
    {
        const bool branch_taken_0x4a36ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a36ac) {
            ctx->pc = 0x4A377Cu;
            goto label_4a377c;
        }
    }
    ctx->pc = 0x4A36B4u;
label_4a36b4:
    // 0x4a36b4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_4a36b8:
    if (ctx->pc == 0x4A36B8u) {
        ctx->pc = 0x4A36BCu;
        goto label_4a36bc;
    }
    ctx->pc = 0x4A36B4u;
    {
        const bool branch_taken_0x4a36b4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4a36b4) {
            ctx->pc = 0x4A36C4u;
            goto label_4a36c4;
        }
    }
    ctx->pc = 0x4A36BCu;
label_4a36bc:
    // 0x4a36bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a36c0:
    // 0x4a36c0: 0xa0a30071  sb          $v1, 0x71($a1)
    ctx->pc = 0x4a36c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 113), (uint8_t)GPR_U32(ctx, 3));
label_4a36c4:
    // 0x4a36c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4a36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4a36c8:
    // 0x4a36c8: 0x8ca60090  lw          $a2, 0x90($a1)
    ctx->pc = 0x4a36c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_4a36cc:
    // 0x4a36cc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4a36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4a36d0:
    // 0x4a36d0: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_4a36d4:
    if (ctx->pc == 0x4A36D4u) {
        ctx->pc = 0x4A36D4u;
            // 0x4a36d4: 0xc4610018  lwc1        $f1, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4A36D8u;
        goto label_4a36d8;
    }
    ctx->pc = 0x4A36D0u;
    {
        const bool branch_taken_0x4a36d0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A36D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A36D0u;
            // 0x4a36d4: 0xc4610018  lwc1        $f1, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a36d0) {
            ctx->pc = 0x4A36E4u;
            goto label_4a36e4;
        }
    }
    ctx->pc = 0x4A36D8u;
label_4a36d8:
    // 0x4a36d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4a36d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a36dc:
    // 0x4a36dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_4a36e0:
    if (ctx->pc == 0x4A36E0u) {
        ctx->pc = 0x4A36E0u;
            // 0x4a36e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4A36E4u;
        goto label_4a36e4;
    }
    ctx->pc = 0x4A36DCu;
    {
        const bool branch_taken_0x4a36dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A36E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A36DCu;
            // 0x4a36e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a36dc) {
            ctx->pc = 0x4A3700u;
            goto label_4a3700;
        }
    }
    ctx->pc = 0x4A36E4u;
label_4a36e4:
    // 0x4a36e4: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x4a36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_4a36e8:
    // 0x4a36e8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x4a36e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4a36ec:
    // 0x4a36ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a36ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4a36f0:
    // 0x4a36f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a36f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a36f4:
    // 0x4a36f4: 0x0  nop
    ctx->pc = 0x4a36f4u;
    // NOP
label_4a36f8:
    // 0x4a36f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a36f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a36fc:
    // 0x4a36fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a36fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a3700:
    // 0x4a3700: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x4a3700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4a3704:
    // 0x4a3704: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4a3704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4a3708:
    // 0x4a3708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a3708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a370c:
    // 0x4a370c: 0x0  nop
    ctx->pc = 0x4a370cu;
    // NOP
label_4a3710:
    // 0x4a3710: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4a3710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a3714:
    // 0x4a3714: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4a3718:
    if (ctx->pc == 0x4A3718u) {
        ctx->pc = 0x4A3718u;
            // 0x4a3718: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4A371Cu;
        goto label_4a371c;
    }
    ctx->pc = 0x4A3714u;
    {
        const bool branch_taken_0x4a3714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a3714) {
            ctx->pc = 0x4A3718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3714u;
            // 0x4a3718: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A372Cu;
            goto label_4a372c;
        }
    }
    ctx->pc = 0x4A371Cu;
label_4a371c:
    // 0x4a371c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a371cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a3720:
    // 0x4a3720: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a3720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4a3724:
    // 0x4a3724: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a3728:
    if (ctx->pc == 0x4A3728u) {
        ctx->pc = 0x4A3728u;
            // 0x4a3728: 0x2c8300f0  sltiu       $v1, $a0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
        ctx->pc = 0x4A372Cu;
        goto label_4a372c;
    }
    ctx->pc = 0x4A3724u;
    {
        const bool branch_taken_0x4a3724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3724u;
            // 0x4a3728: 0x2c8300f0  sltiu       $v1, $a0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3724) {
            ctx->pc = 0x4A3744u;
            goto label_4a3744;
        }
    }
    ctx->pc = 0x4A372Cu;
label_4a372c:
    // 0x4a372c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4a372cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4a3730:
    // 0x4a3730: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a3730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a3734:
    // 0x4a3734: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a3734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4a3738:
    // 0x4a3738: 0x0  nop
    ctx->pc = 0x4a3738u;
    // NOP
label_4a373c:
    // 0x4a373c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a373cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4a3740:
    // 0x4a3740: 0x2c8300f0  sltiu       $v1, $a0, 0xF0
    ctx->pc = 0x4a3740u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_4a3744:
    // 0x4a3744: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_4a3748:
    if (ctx->pc == 0x4A3748u) {
        ctx->pc = 0x4A3748u;
            // 0x4a3748: 0xaca40090  sw          $a0, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
        ctx->pc = 0x4A374Cu;
        goto label_4a374c;
    }
    ctx->pc = 0x4A3744u;
    {
        const bool branch_taken_0x4a3744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3744u;
            // 0x4a3748: 0xaca40090  sw          $a0, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3744) {
            ctx->pc = 0x4A377Cu;
            goto label_4a377c;
        }
    }
    ctx->pc = 0x4A374Cu;
label_4a374c:
    // 0x4a374c: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x4a374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_4a3750:
    // 0x4a3750: 0x1000000a  b           . + 4 + (0xA << 2)
label_4a3754:
    if (ctx->pc == 0x4A3754u) {
        ctx->pc = 0x4A3754u;
            // 0x4a3754: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4A3758u;
        goto label_4a3758;
    }
    ctx->pc = 0x4A3750u;
    {
        const bool branch_taken_0x4a3750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3750u;
            // 0x4a3754: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3750) {
            ctx->pc = 0x4A377Cu;
            goto label_4a377c;
        }
    }
    ctx->pc = 0x4A3758u;
label_4a3758:
    // 0x4a3758: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a3758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a375c:
    // 0x4a375c: 0x320f809  jalr        $t9
label_4a3760:
    if (ctx->pc == 0x4A3760u) {
        ctx->pc = 0x4A3764u;
        goto label_4a3764;
    }
    ctx->pc = 0x4A375Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A3764u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A3764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A3764u; }
            if (ctx->pc != 0x4A3764u) { return; }
        }
        }
    }
    ctx->pc = 0x4A3764u;
label_4a3764:
    // 0x4a3764: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a3768:
    if (ctx->pc == 0x4A3768u) {
        ctx->pc = 0x4A376Cu;
        goto label_4a376c;
    }
    ctx->pc = 0x4A3764u;
    {
        const bool branch_taken_0x4a3764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3764) {
            ctx->pc = 0x4A377Cu;
            goto label_4a377c;
        }
    }
    ctx->pc = 0x4A376Cu;
label_4a376c:
    // 0x4a376c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a3770:
    // 0x4a3770: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a3774:
    // 0x4a3774: 0xc057b7c  jal         func_15EDF0
label_4a3778:
    if (ctx->pc == 0x4A3778u) {
        ctx->pc = 0x4A3778u;
            // 0x4a3778: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A377Cu;
        goto label_4a377c;
    }
    ctx->pc = 0x4A3774u;
    SET_GPR_U32(ctx, 31, 0x4A377Cu);
    ctx->pc = 0x4A3778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3774u;
            // 0x4a3778: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A377Cu; }
        if (ctx->pc != 0x4A377Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A377Cu; }
        if (ctx->pc != 0x4A377Cu) { return; }
    }
    ctx->pc = 0x4A377Cu;
label_4a377c:
    // 0x4a377c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a3780:
    // 0x4a3780: 0x3e00008  jr          $ra
label_4a3784:
    if (ctx->pc == 0x4A3784u) {
        ctx->pc = 0x4A3784u;
            // 0x4a3784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4A3788u;
        goto label_4a3788;
    }
    ctx->pc = 0x4A3780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3780u;
            // 0x4a3784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A3788u;
label_4a3788:
    // 0x4a3788: 0x0  nop
    ctx->pc = 0x4a3788u;
    // NOP
label_4a378c:
    // 0x4a378c: 0x0  nop
    ctx->pc = 0x4a378cu;
    // NOP
}
