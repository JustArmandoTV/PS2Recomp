#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2E50
// Address: 0x4d2e50 - 0x4d3ae0
void sub_004D2E50_0x4d2e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2E50_0x4d2e50");
#endif

    switch (ctx->pc) {
        case 0x4d2e50u: goto label_4d2e50;
        case 0x4d2e54u: goto label_4d2e54;
        case 0x4d2e58u: goto label_4d2e58;
        case 0x4d2e5cu: goto label_4d2e5c;
        case 0x4d2e60u: goto label_4d2e60;
        case 0x4d2e64u: goto label_4d2e64;
        case 0x4d2e68u: goto label_4d2e68;
        case 0x4d2e6cu: goto label_4d2e6c;
        case 0x4d2e70u: goto label_4d2e70;
        case 0x4d2e74u: goto label_4d2e74;
        case 0x4d2e78u: goto label_4d2e78;
        case 0x4d2e7cu: goto label_4d2e7c;
        case 0x4d2e80u: goto label_4d2e80;
        case 0x4d2e84u: goto label_4d2e84;
        case 0x4d2e88u: goto label_4d2e88;
        case 0x4d2e8cu: goto label_4d2e8c;
        case 0x4d2e90u: goto label_4d2e90;
        case 0x4d2e94u: goto label_4d2e94;
        case 0x4d2e98u: goto label_4d2e98;
        case 0x4d2e9cu: goto label_4d2e9c;
        case 0x4d2ea0u: goto label_4d2ea0;
        case 0x4d2ea4u: goto label_4d2ea4;
        case 0x4d2ea8u: goto label_4d2ea8;
        case 0x4d2eacu: goto label_4d2eac;
        case 0x4d2eb0u: goto label_4d2eb0;
        case 0x4d2eb4u: goto label_4d2eb4;
        case 0x4d2eb8u: goto label_4d2eb8;
        case 0x4d2ebcu: goto label_4d2ebc;
        case 0x4d2ec0u: goto label_4d2ec0;
        case 0x4d2ec4u: goto label_4d2ec4;
        case 0x4d2ec8u: goto label_4d2ec8;
        case 0x4d2eccu: goto label_4d2ecc;
        case 0x4d2ed0u: goto label_4d2ed0;
        case 0x4d2ed4u: goto label_4d2ed4;
        case 0x4d2ed8u: goto label_4d2ed8;
        case 0x4d2edcu: goto label_4d2edc;
        case 0x4d2ee0u: goto label_4d2ee0;
        case 0x4d2ee4u: goto label_4d2ee4;
        case 0x4d2ee8u: goto label_4d2ee8;
        case 0x4d2eecu: goto label_4d2eec;
        case 0x4d2ef0u: goto label_4d2ef0;
        case 0x4d2ef4u: goto label_4d2ef4;
        case 0x4d2ef8u: goto label_4d2ef8;
        case 0x4d2efcu: goto label_4d2efc;
        case 0x4d2f00u: goto label_4d2f00;
        case 0x4d2f04u: goto label_4d2f04;
        case 0x4d2f08u: goto label_4d2f08;
        case 0x4d2f0cu: goto label_4d2f0c;
        case 0x4d2f10u: goto label_4d2f10;
        case 0x4d2f14u: goto label_4d2f14;
        case 0x4d2f18u: goto label_4d2f18;
        case 0x4d2f1cu: goto label_4d2f1c;
        case 0x4d2f20u: goto label_4d2f20;
        case 0x4d2f24u: goto label_4d2f24;
        case 0x4d2f28u: goto label_4d2f28;
        case 0x4d2f2cu: goto label_4d2f2c;
        case 0x4d2f30u: goto label_4d2f30;
        case 0x4d2f34u: goto label_4d2f34;
        case 0x4d2f38u: goto label_4d2f38;
        case 0x4d2f3cu: goto label_4d2f3c;
        case 0x4d2f40u: goto label_4d2f40;
        case 0x4d2f44u: goto label_4d2f44;
        case 0x4d2f48u: goto label_4d2f48;
        case 0x4d2f4cu: goto label_4d2f4c;
        case 0x4d2f50u: goto label_4d2f50;
        case 0x4d2f54u: goto label_4d2f54;
        case 0x4d2f58u: goto label_4d2f58;
        case 0x4d2f5cu: goto label_4d2f5c;
        case 0x4d2f60u: goto label_4d2f60;
        case 0x4d2f64u: goto label_4d2f64;
        case 0x4d2f68u: goto label_4d2f68;
        case 0x4d2f6cu: goto label_4d2f6c;
        case 0x4d2f70u: goto label_4d2f70;
        case 0x4d2f74u: goto label_4d2f74;
        case 0x4d2f78u: goto label_4d2f78;
        case 0x4d2f7cu: goto label_4d2f7c;
        case 0x4d2f80u: goto label_4d2f80;
        case 0x4d2f84u: goto label_4d2f84;
        case 0x4d2f88u: goto label_4d2f88;
        case 0x4d2f8cu: goto label_4d2f8c;
        case 0x4d2f90u: goto label_4d2f90;
        case 0x4d2f94u: goto label_4d2f94;
        case 0x4d2f98u: goto label_4d2f98;
        case 0x4d2f9cu: goto label_4d2f9c;
        case 0x4d2fa0u: goto label_4d2fa0;
        case 0x4d2fa4u: goto label_4d2fa4;
        case 0x4d2fa8u: goto label_4d2fa8;
        case 0x4d2facu: goto label_4d2fac;
        case 0x4d2fb0u: goto label_4d2fb0;
        case 0x4d2fb4u: goto label_4d2fb4;
        case 0x4d2fb8u: goto label_4d2fb8;
        case 0x4d2fbcu: goto label_4d2fbc;
        case 0x4d2fc0u: goto label_4d2fc0;
        case 0x4d2fc4u: goto label_4d2fc4;
        case 0x4d2fc8u: goto label_4d2fc8;
        case 0x4d2fccu: goto label_4d2fcc;
        case 0x4d2fd0u: goto label_4d2fd0;
        case 0x4d2fd4u: goto label_4d2fd4;
        case 0x4d2fd8u: goto label_4d2fd8;
        case 0x4d2fdcu: goto label_4d2fdc;
        case 0x4d2fe0u: goto label_4d2fe0;
        case 0x4d2fe4u: goto label_4d2fe4;
        case 0x4d2fe8u: goto label_4d2fe8;
        case 0x4d2fecu: goto label_4d2fec;
        case 0x4d2ff0u: goto label_4d2ff0;
        case 0x4d2ff4u: goto label_4d2ff4;
        case 0x4d2ff8u: goto label_4d2ff8;
        case 0x4d2ffcu: goto label_4d2ffc;
        case 0x4d3000u: goto label_4d3000;
        case 0x4d3004u: goto label_4d3004;
        case 0x4d3008u: goto label_4d3008;
        case 0x4d300cu: goto label_4d300c;
        case 0x4d3010u: goto label_4d3010;
        case 0x4d3014u: goto label_4d3014;
        case 0x4d3018u: goto label_4d3018;
        case 0x4d301cu: goto label_4d301c;
        case 0x4d3020u: goto label_4d3020;
        case 0x4d3024u: goto label_4d3024;
        case 0x4d3028u: goto label_4d3028;
        case 0x4d302cu: goto label_4d302c;
        case 0x4d3030u: goto label_4d3030;
        case 0x4d3034u: goto label_4d3034;
        case 0x4d3038u: goto label_4d3038;
        case 0x4d303cu: goto label_4d303c;
        case 0x4d3040u: goto label_4d3040;
        case 0x4d3044u: goto label_4d3044;
        case 0x4d3048u: goto label_4d3048;
        case 0x4d304cu: goto label_4d304c;
        case 0x4d3050u: goto label_4d3050;
        case 0x4d3054u: goto label_4d3054;
        case 0x4d3058u: goto label_4d3058;
        case 0x4d305cu: goto label_4d305c;
        case 0x4d3060u: goto label_4d3060;
        case 0x4d3064u: goto label_4d3064;
        case 0x4d3068u: goto label_4d3068;
        case 0x4d306cu: goto label_4d306c;
        case 0x4d3070u: goto label_4d3070;
        case 0x4d3074u: goto label_4d3074;
        case 0x4d3078u: goto label_4d3078;
        case 0x4d307cu: goto label_4d307c;
        case 0x4d3080u: goto label_4d3080;
        case 0x4d3084u: goto label_4d3084;
        case 0x4d3088u: goto label_4d3088;
        case 0x4d308cu: goto label_4d308c;
        case 0x4d3090u: goto label_4d3090;
        case 0x4d3094u: goto label_4d3094;
        case 0x4d3098u: goto label_4d3098;
        case 0x4d309cu: goto label_4d309c;
        case 0x4d30a0u: goto label_4d30a0;
        case 0x4d30a4u: goto label_4d30a4;
        case 0x4d30a8u: goto label_4d30a8;
        case 0x4d30acu: goto label_4d30ac;
        case 0x4d30b0u: goto label_4d30b0;
        case 0x4d30b4u: goto label_4d30b4;
        case 0x4d30b8u: goto label_4d30b8;
        case 0x4d30bcu: goto label_4d30bc;
        case 0x4d30c0u: goto label_4d30c0;
        case 0x4d30c4u: goto label_4d30c4;
        case 0x4d30c8u: goto label_4d30c8;
        case 0x4d30ccu: goto label_4d30cc;
        case 0x4d30d0u: goto label_4d30d0;
        case 0x4d30d4u: goto label_4d30d4;
        case 0x4d30d8u: goto label_4d30d8;
        case 0x4d30dcu: goto label_4d30dc;
        case 0x4d30e0u: goto label_4d30e0;
        case 0x4d30e4u: goto label_4d30e4;
        case 0x4d30e8u: goto label_4d30e8;
        case 0x4d30ecu: goto label_4d30ec;
        case 0x4d30f0u: goto label_4d30f0;
        case 0x4d30f4u: goto label_4d30f4;
        case 0x4d30f8u: goto label_4d30f8;
        case 0x4d30fcu: goto label_4d30fc;
        case 0x4d3100u: goto label_4d3100;
        case 0x4d3104u: goto label_4d3104;
        case 0x4d3108u: goto label_4d3108;
        case 0x4d310cu: goto label_4d310c;
        case 0x4d3110u: goto label_4d3110;
        case 0x4d3114u: goto label_4d3114;
        case 0x4d3118u: goto label_4d3118;
        case 0x4d311cu: goto label_4d311c;
        case 0x4d3120u: goto label_4d3120;
        case 0x4d3124u: goto label_4d3124;
        case 0x4d3128u: goto label_4d3128;
        case 0x4d312cu: goto label_4d312c;
        case 0x4d3130u: goto label_4d3130;
        case 0x4d3134u: goto label_4d3134;
        case 0x4d3138u: goto label_4d3138;
        case 0x4d313cu: goto label_4d313c;
        case 0x4d3140u: goto label_4d3140;
        case 0x4d3144u: goto label_4d3144;
        case 0x4d3148u: goto label_4d3148;
        case 0x4d314cu: goto label_4d314c;
        case 0x4d3150u: goto label_4d3150;
        case 0x4d3154u: goto label_4d3154;
        case 0x4d3158u: goto label_4d3158;
        case 0x4d315cu: goto label_4d315c;
        case 0x4d3160u: goto label_4d3160;
        case 0x4d3164u: goto label_4d3164;
        case 0x4d3168u: goto label_4d3168;
        case 0x4d316cu: goto label_4d316c;
        case 0x4d3170u: goto label_4d3170;
        case 0x4d3174u: goto label_4d3174;
        case 0x4d3178u: goto label_4d3178;
        case 0x4d317cu: goto label_4d317c;
        case 0x4d3180u: goto label_4d3180;
        case 0x4d3184u: goto label_4d3184;
        case 0x4d3188u: goto label_4d3188;
        case 0x4d318cu: goto label_4d318c;
        case 0x4d3190u: goto label_4d3190;
        case 0x4d3194u: goto label_4d3194;
        case 0x4d3198u: goto label_4d3198;
        case 0x4d319cu: goto label_4d319c;
        case 0x4d31a0u: goto label_4d31a0;
        case 0x4d31a4u: goto label_4d31a4;
        case 0x4d31a8u: goto label_4d31a8;
        case 0x4d31acu: goto label_4d31ac;
        case 0x4d31b0u: goto label_4d31b0;
        case 0x4d31b4u: goto label_4d31b4;
        case 0x4d31b8u: goto label_4d31b8;
        case 0x4d31bcu: goto label_4d31bc;
        case 0x4d31c0u: goto label_4d31c0;
        case 0x4d31c4u: goto label_4d31c4;
        case 0x4d31c8u: goto label_4d31c8;
        case 0x4d31ccu: goto label_4d31cc;
        case 0x4d31d0u: goto label_4d31d0;
        case 0x4d31d4u: goto label_4d31d4;
        case 0x4d31d8u: goto label_4d31d8;
        case 0x4d31dcu: goto label_4d31dc;
        case 0x4d31e0u: goto label_4d31e0;
        case 0x4d31e4u: goto label_4d31e4;
        case 0x4d31e8u: goto label_4d31e8;
        case 0x4d31ecu: goto label_4d31ec;
        case 0x4d31f0u: goto label_4d31f0;
        case 0x4d31f4u: goto label_4d31f4;
        case 0x4d31f8u: goto label_4d31f8;
        case 0x4d31fcu: goto label_4d31fc;
        case 0x4d3200u: goto label_4d3200;
        case 0x4d3204u: goto label_4d3204;
        case 0x4d3208u: goto label_4d3208;
        case 0x4d320cu: goto label_4d320c;
        case 0x4d3210u: goto label_4d3210;
        case 0x4d3214u: goto label_4d3214;
        case 0x4d3218u: goto label_4d3218;
        case 0x4d321cu: goto label_4d321c;
        case 0x4d3220u: goto label_4d3220;
        case 0x4d3224u: goto label_4d3224;
        case 0x4d3228u: goto label_4d3228;
        case 0x4d322cu: goto label_4d322c;
        case 0x4d3230u: goto label_4d3230;
        case 0x4d3234u: goto label_4d3234;
        case 0x4d3238u: goto label_4d3238;
        case 0x4d323cu: goto label_4d323c;
        case 0x4d3240u: goto label_4d3240;
        case 0x4d3244u: goto label_4d3244;
        case 0x4d3248u: goto label_4d3248;
        case 0x4d324cu: goto label_4d324c;
        case 0x4d3250u: goto label_4d3250;
        case 0x4d3254u: goto label_4d3254;
        case 0x4d3258u: goto label_4d3258;
        case 0x4d325cu: goto label_4d325c;
        case 0x4d3260u: goto label_4d3260;
        case 0x4d3264u: goto label_4d3264;
        case 0x4d3268u: goto label_4d3268;
        case 0x4d326cu: goto label_4d326c;
        case 0x4d3270u: goto label_4d3270;
        case 0x4d3274u: goto label_4d3274;
        case 0x4d3278u: goto label_4d3278;
        case 0x4d327cu: goto label_4d327c;
        case 0x4d3280u: goto label_4d3280;
        case 0x4d3284u: goto label_4d3284;
        case 0x4d3288u: goto label_4d3288;
        case 0x4d328cu: goto label_4d328c;
        case 0x4d3290u: goto label_4d3290;
        case 0x4d3294u: goto label_4d3294;
        case 0x4d3298u: goto label_4d3298;
        case 0x4d329cu: goto label_4d329c;
        case 0x4d32a0u: goto label_4d32a0;
        case 0x4d32a4u: goto label_4d32a4;
        case 0x4d32a8u: goto label_4d32a8;
        case 0x4d32acu: goto label_4d32ac;
        case 0x4d32b0u: goto label_4d32b0;
        case 0x4d32b4u: goto label_4d32b4;
        case 0x4d32b8u: goto label_4d32b8;
        case 0x4d32bcu: goto label_4d32bc;
        case 0x4d32c0u: goto label_4d32c0;
        case 0x4d32c4u: goto label_4d32c4;
        case 0x4d32c8u: goto label_4d32c8;
        case 0x4d32ccu: goto label_4d32cc;
        case 0x4d32d0u: goto label_4d32d0;
        case 0x4d32d4u: goto label_4d32d4;
        case 0x4d32d8u: goto label_4d32d8;
        case 0x4d32dcu: goto label_4d32dc;
        case 0x4d32e0u: goto label_4d32e0;
        case 0x4d32e4u: goto label_4d32e4;
        case 0x4d32e8u: goto label_4d32e8;
        case 0x4d32ecu: goto label_4d32ec;
        case 0x4d32f0u: goto label_4d32f0;
        case 0x4d32f4u: goto label_4d32f4;
        case 0x4d32f8u: goto label_4d32f8;
        case 0x4d32fcu: goto label_4d32fc;
        case 0x4d3300u: goto label_4d3300;
        case 0x4d3304u: goto label_4d3304;
        case 0x4d3308u: goto label_4d3308;
        case 0x4d330cu: goto label_4d330c;
        case 0x4d3310u: goto label_4d3310;
        case 0x4d3314u: goto label_4d3314;
        case 0x4d3318u: goto label_4d3318;
        case 0x4d331cu: goto label_4d331c;
        case 0x4d3320u: goto label_4d3320;
        case 0x4d3324u: goto label_4d3324;
        case 0x4d3328u: goto label_4d3328;
        case 0x4d332cu: goto label_4d332c;
        case 0x4d3330u: goto label_4d3330;
        case 0x4d3334u: goto label_4d3334;
        case 0x4d3338u: goto label_4d3338;
        case 0x4d333cu: goto label_4d333c;
        case 0x4d3340u: goto label_4d3340;
        case 0x4d3344u: goto label_4d3344;
        case 0x4d3348u: goto label_4d3348;
        case 0x4d334cu: goto label_4d334c;
        case 0x4d3350u: goto label_4d3350;
        case 0x4d3354u: goto label_4d3354;
        case 0x4d3358u: goto label_4d3358;
        case 0x4d335cu: goto label_4d335c;
        case 0x4d3360u: goto label_4d3360;
        case 0x4d3364u: goto label_4d3364;
        case 0x4d3368u: goto label_4d3368;
        case 0x4d336cu: goto label_4d336c;
        case 0x4d3370u: goto label_4d3370;
        case 0x4d3374u: goto label_4d3374;
        case 0x4d3378u: goto label_4d3378;
        case 0x4d337cu: goto label_4d337c;
        case 0x4d3380u: goto label_4d3380;
        case 0x4d3384u: goto label_4d3384;
        case 0x4d3388u: goto label_4d3388;
        case 0x4d338cu: goto label_4d338c;
        case 0x4d3390u: goto label_4d3390;
        case 0x4d3394u: goto label_4d3394;
        case 0x4d3398u: goto label_4d3398;
        case 0x4d339cu: goto label_4d339c;
        case 0x4d33a0u: goto label_4d33a0;
        case 0x4d33a4u: goto label_4d33a4;
        case 0x4d33a8u: goto label_4d33a8;
        case 0x4d33acu: goto label_4d33ac;
        case 0x4d33b0u: goto label_4d33b0;
        case 0x4d33b4u: goto label_4d33b4;
        case 0x4d33b8u: goto label_4d33b8;
        case 0x4d33bcu: goto label_4d33bc;
        case 0x4d33c0u: goto label_4d33c0;
        case 0x4d33c4u: goto label_4d33c4;
        case 0x4d33c8u: goto label_4d33c8;
        case 0x4d33ccu: goto label_4d33cc;
        case 0x4d33d0u: goto label_4d33d0;
        case 0x4d33d4u: goto label_4d33d4;
        case 0x4d33d8u: goto label_4d33d8;
        case 0x4d33dcu: goto label_4d33dc;
        case 0x4d33e0u: goto label_4d33e0;
        case 0x4d33e4u: goto label_4d33e4;
        case 0x4d33e8u: goto label_4d33e8;
        case 0x4d33ecu: goto label_4d33ec;
        case 0x4d33f0u: goto label_4d33f0;
        case 0x4d33f4u: goto label_4d33f4;
        case 0x4d33f8u: goto label_4d33f8;
        case 0x4d33fcu: goto label_4d33fc;
        case 0x4d3400u: goto label_4d3400;
        case 0x4d3404u: goto label_4d3404;
        case 0x4d3408u: goto label_4d3408;
        case 0x4d340cu: goto label_4d340c;
        case 0x4d3410u: goto label_4d3410;
        case 0x4d3414u: goto label_4d3414;
        case 0x4d3418u: goto label_4d3418;
        case 0x4d341cu: goto label_4d341c;
        case 0x4d3420u: goto label_4d3420;
        case 0x4d3424u: goto label_4d3424;
        case 0x4d3428u: goto label_4d3428;
        case 0x4d342cu: goto label_4d342c;
        case 0x4d3430u: goto label_4d3430;
        case 0x4d3434u: goto label_4d3434;
        case 0x4d3438u: goto label_4d3438;
        case 0x4d343cu: goto label_4d343c;
        case 0x4d3440u: goto label_4d3440;
        case 0x4d3444u: goto label_4d3444;
        case 0x4d3448u: goto label_4d3448;
        case 0x4d344cu: goto label_4d344c;
        case 0x4d3450u: goto label_4d3450;
        case 0x4d3454u: goto label_4d3454;
        case 0x4d3458u: goto label_4d3458;
        case 0x4d345cu: goto label_4d345c;
        case 0x4d3460u: goto label_4d3460;
        case 0x4d3464u: goto label_4d3464;
        case 0x4d3468u: goto label_4d3468;
        case 0x4d346cu: goto label_4d346c;
        case 0x4d3470u: goto label_4d3470;
        case 0x4d3474u: goto label_4d3474;
        case 0x4d3478u: goto label_4d3478;
        case 0x4d347cu: goto label_4d347c;
        case 0x4d3480u: goto label_4d3480;
        case 0x4d3484u: goto label_4d3484;
        case 0x4d3488u: goto label_4d3488;
        case 0x4d348cu: goto label_4d348c;
        case 0x4d3490u: goto label_4d3490;
        case 0x4d3494u: goto label_4d3494;
        case 0x4d3498u: goto label_4d3498;
        case 0x4d349cu: goto label_4d349c;
        case 0x4d34a0u: goto label_4d34a0;
        case 0x4d34a4u: goto label_4d34a4;
        case 0x4d34a8u: goto label_4d34a8;
        case 0x4d34acu: goto label_4d34ac;
        case 0x4d34b0u: goto label_4d34b0;
        case 0x4d34b4u: goto label_4d34b4;
        case 0x4d34b8u: goto label_4d34b8;
        case 0x4d34bcu: goto label_4d34bc;
        case 0x4d34c0u: goto label_4d34c0;
        case 0x4d34c4u: goto label_4d34c4;
        case 0x4d34c8u: goto label_4d34c8;
        case 0x4d34ccu: goto label_4d34cc;
        case 0x4d34d0u: goto label_4d34d0;
        case 0x4d34d4u: goto label_4d34d4;
        case 0x4d34d8u: goto label_4d34d8;
        case 0x4d34dcu: goto label_4d34dc;
        case 0x4d34e0u: goto label_4d34e0;
        case 0x4d34e4u: goto label_4d34e4;
        case 0x4d34e8u: goto label_4d34e8;
        case 0x4d34ecu: goto label_4d34ec;
        case 0x4d34f0u: goto label_4d34f0;
        case 0x4d34f4u: goto label_4d34f4;
        case 0x4d34f8u: goto label_4d34f8;
        case 0x4d34fcu: goto label_4d34fc;
        case 0x4d3500u: goto label_4d3500;
        case 0x4d3504u: goto label_4d3504;
        case 0x4d3508u: goto label_4d3508;
        case 0x4d350cu: goto label_4d350c;
        case 0x4d3510u: goto label_4d3510;
        case 0x4d3514u: goto label_4d3514;
        case 0x4d3518u: goto label_4d3518;
        case 0x4d351cu: goto label_4d351c;
        case 0x4d3520u: goto label_4d3520;
        case 0x4d3524u: goto label_4d3524;
        case 0x4d3528u: goto label_4d3528;
        case 0x4d352cu: goto label_4d352c;
        case 0x4d3530u: goto label_4d3530;
        case 0x4d3534u: goto label_4d3534;
        case 0x4d3538u: goto label_4d3538;
        case 0x4d353cu: goto label_4d353c;
        case 0x4d3540u: goto label_4d3540;
        case 0x4d3544u: goto label_4d3544;
        case 0x4d3548u: goto label_4d3548;
        case 0x4d354cu: goto label_4d354c;
        case 0x4d3550u: goto label_4d3550;
        case 0x4d3554u: goto label_4d3554;
        case 0x4d3558u: goto label_4d3558;
        case 0x4d355cu: goto label_4d355c;
        case 0x4d3560u: goto label_4d3560;
        case 0x4d3564u: goto label_4d3564;
        case 0x4d3568u: goto label_4d3568;
        case 0x4d356cu: goto label_4d356c;
        case 0x4d3570u: goto label_4d3570;
        case 0x4d3574u: goto label_4d3574;
        case 0x4d3578u: goto label_4d3578;
        case 0x4d357cu: goto label_4d357c;
        case 0x4d3580u: goto label_4d3580;
        case 0x4d3584u: goto label_4d3584;
        case 0x4d3588u: goto label_4d3588;
        case 0x4d358cu: goto label_4d358c;
        case 0x4d3590u: goto label_4d3590;
        case 0x4d3594u: goto label_4d3594;
        case 0x4d3598u: goto label_4d3598;
        case 0x4d359cu: goto label_4d359c;
        case 0x4d35a0u: goto label_4d35a0;
        case 0x4d35a4u: goto label_4d35a4;
        case 0x4d35a8u: goto label_4d35a8;
        case 0x4d35acu: goto label_4d35ac;
        case 0x4d35b0u: goto label_4d35b0;
        case 0x4d35b4u: goto label_4d35b4;
        case 0x4d35b8u: goto label_4d35b8;
        case 0x4d35bcu: goto label_4d35bc;
        case 0x4d35c0u: goto label_4d35c0;
        case 0x4d35c4u: goto label_4d35c4;
        case 0x4d35c8u: goto label_4d35c8;
        case 0x4d35ccu: goto label_4d35cc;
        case 0x4d35d0u: goto label_4d35d0;
        case 0x4d35d4u: goto label_4d35d4;
        case 0x4d35d8u: goto label_4d35d8;
        case 0x4d35dcu: goto label_4d35dc;
        case 0x4d35e0u: goto label_4d35e0;
        case 0x4d35e4u: goto label_4d35e4;
        case 0x4d35e8u: goto label_4d35e8;
        case 0x4d35ecu: goto label_4d35ec;
        case 0x4d35f0u: goto label_4d35f0;
        case 0x4d35f4u: goto label_4d35f4;
        case 0x4d35f8u: goto label_4d35f8;
        case 0x4d35fcu: goto label_4d35fc;
        case 0x4d3600u: goto label_4d3600;
        case 0x4d3604u: goto label_4d3604;
        case 0x4d3608u: goto label_4d3608;
        case 0x4d360cu: goto label_4d360c;
        case 0x4d3610u: goto label_4d3610;
        case 0x4d3614u: goto label_4d3614;
        case 0x4d3618u: goto label_4d3618;
        case 0x4d361cu: goto label_4d361c;
        case 0x4d3620u: goto label_4d3620;
        case 0x4d3624u: goto label_4d3624;
        case 0x4d3628u: goto label_4d3628;
        case 0x4d362cu: goto label_4d362c;
        case 0x4d3630u: goto label_4d3630;
        case 0x4d3634u: goto label_4d3634;
        case 0x4d3638u: goto label_4d3638;
        case 0x4d363cu: goto label_4d363c;
        case 0x4d3640u: goto label_4d3640;
        case 0x4d3644u: goto label_4d3644;
        case 0x4d3648u: goto label_4d3648;
        case 0x4d364cu: goto label_4d364c;
        case 0x4d3650u: goto label_4d3650;
        case 0x4d3654u: goto label_4d3654;
        case 0x4d3658u: goto label_4d3658;
        case 0x4d365cu: goto label_4d365c;
        case 0x4d3660u: goto label_4d3660;
        case 0x4d3664u: goto label_4d3664;
        case 0x4d3668u: goto label_4d3668;
        case 0x4d366cu: goto label_4d366c;
        case 0x4d3670u: goto label_4d3670;
        case 0x4d3674u: goto label_4d3674;
        case 0x4d3678u: goto label_4d3678;
        case 0x4d367cu: goto label_4d367c;
        case 0x4d3680u: goto label_4d3680;
        case 0x4d3684u: goto label_4d3684;
        case 0x4d3688u: goto label_4d3688;
        case 0x4d368cu: goto label_4d368c;
        case 0x4d3690u: goto label_4d3690;
        case 0x4d3694u: goto label_4d3694;
        case 0x4d3698u: goto label_4d3698;
        case 0x4d369cu: goto label_4d369c;
        case 0x4d36a0u: goto label_4d36a0;
        case 0x4d36a4u: goto label_4d36a4;
        case 0x4d36a8u: goto label_4d36a8;
        case 0x4d36acu: goto label_4d36ac;
        case 0x4d36b0u: goto label_4d36b0;
        case 0x4d36b4u: goto label_4d36b4;
        case 0x4d36b8u: goto label_4d36b8;
        case 0x4d36bcu: goto label_4d36bc;
        case 0x4d36c0u: goto label_4d36c0;
        case 0x4d36c4u: goto label_4d36c4;
        case 0x4d36c8u: goto label_4d36c8;
        case 0x4d36ccu: goto label_4d36cc;
        case 0x4d36d0u: goto label_4d36d0;
        case 0x4d36d4u: goto label_4d36d4;
        case 0x4d36d8u: goto label_4d36d8;
        case 0x4d36dcu: goto label_4d36dc;
        case 0x4d36e0u: goto label_4d36e0;
        case 0x4d36e4u: goto label_4d36e4;
        case 0x4d36e8u: goto label_4d36e8;
        case 0x4d36ecu: goto label_4d36ec;
        case 0x4d36f0u: goto label_4d36f0;
        case 0x4d36f4u: goto label_4d36f4;
        case 0x4d36f8u: goto label_4d36f8;
        case 0x4d36fcu: goto label_4d36fc;
        case 0x4d3700u: goto label_4d3700;
        case 0x4d3704u: goto label_4d3704;
        case 0x4d3708u: goto label_4d3708;
        case 0x4d370cu: goto label_4d370c;
        case 0x4d3710u: goto label_4d3710;
        case 0x4d3714u: goto label_4d3714;
        case 0x4d3718u: goto label_4d3718;
        case 0x4d371cu: goto label_4d371c;
        case 0x4d3720u: goto label_4d3720;
        case 0x4d3724u: goto label_4d3724;
        case 0x4d3728u: goto label_4d3728;
        case 0x4d372cu: goto label_4d372c;
        case 0x4d3730u: goto label_4d3730;
        case 0x4d3734u: goto label_4d3734;
        case 0x4d3738u: goto label_4d3738;
        case 0x4d373cu: goto label_4d373c;
        case 0x4d3740u: goto label_4d3740;
        case 0x4d3744u: goto label_4d3744;
        case 0x4d3748u: goto label_4d3748;
        case 0x4d374cu: goto label_4d374c;
        case 0x4d3750u: goto label_4d3750;
        case 0x4d3754u: goto label_4d3754;
        case 0x4d3758u: goto label_4d3758;
        case 0x4d375cu: goto label_4d375c;
        case 0x4d3760u: goto label_4d3760;
        case 0x4d3764u: goto label_4d3764;
        case 0x4d3768u: goto label_4d3768;
        case 0x4d376cu: goto label_4d376c;
        case 0x4d3770u: goto label_4d3770;
        case 0x4d3774u: goto label_4d3774;
        case 0x4d3778u: goto label_4d3778;
        case 0x4d377cu: goto label_4d377c;
        case 0x4d3780u: goto label_4d3780;
        case 0x4d3784u: goto label_4d3784;
        case 0x4d3788u: goto label_4d3788;
        case 0x4d378cu: goto label_4d378c;
        case 0x4d3790u: goto label_4d3790;
        case 0x4d3794u: goto label_4d3794;
        case 0x4d3798u: goto label_4d3798;
        case 0x4d379cu: goto label_4d379c;
        case 0x4d37a0u: goto label_4d37a0;
        case 0x4d37a4u: goto label_4d37a4;
        case 0x4d37a8u: goto label_4d37a8;
        case 0x4d37acu: goto label_4d37ac;
        case 0x4d37b0u: goto label_4d37b0;
        case 0x4d37b4u: goto label_4d37b4;
        case 0x4d37b8u: goto label_4d37b8;
        case 0x4d37bcu: goto label_4d37bc;
        case 0x4d37c0u: goto label_4d37c0;
        case 0x4d37c4u: goto label_4d37c4;
        case 0x4d37c8u: goto label_4d37c8;
        case 0x4d37ccu: goto label_4d37cc;
        case 0x4d37d0u: goto label_4d37d0;
        case 0x4d37d4u: goto label_4d37d4;
        case 0x4d37d8u: goto label_4d37d8;
        case 0x4d37dcu: goto label_4d37dc;
        case 0x4d37e0u: goto label_4d37e0;
        case 0x4d37e4u: goto label_4d37e4;
        case 0x4d37e8u: goto label_4d37e8;
        case 0x4d37ecu: goto label_4d37ec;
        case 0x4d37f0u: goto label_4d37f0;
        case 0x4d37f4u: goto label_4d37f4;
        case 0x4d37f8u: goto label_4d37f8;
        case 0x4d37fcu: goto label_4d37fc;
        case 0x4d3800u: goto label_4d3800;
        case 0x4d3804u: goto label_4d3804;
        case 0x4d3808u: goto label_4d3808;
        case 0x4d380cu: goto label_4d380c;
        case 0x4d3810u: goto label_4d3810;
        case 0x4d3814u: goto label_4d3814;
        case 0x4d3818u: goto label_4d3818;
        case 0x4d381cu: goto label_4d381c;
        case 0x4d3820u: goto label_4d3820;
        case 0x4d3824u: goto label_4d3824;
        case 0x4d3828u: goto label_4d3828;
        case 0x4d382cu: goto label_4d382c;
        case 0x4d3830u: goto label_4d3830;
        case 0x4d3834u: goto label_4d3834;
        case 0x4d3838u: goto label_4d3838;
        case 0x4d383cu: goto label_4d383c;
        case 0x4d3840u: goto label_4d3840;
        case 0x4d3844u: goto label_4d3844;
        case 0x4d3848u: goto label_4d3848;
        case 0x4d384cu: goto label_4d384c;
        case 0x4d3850u: goto label_4d3850;
        case 0x4d3854u: goto label_4d3854;
        case 0x4d3858u: goto label_4d3858;
        case 0x4d385cu: goto label_4d385c;
        case 0x4d3860u: goto label_4d3860;
        case 0x4d3864u: goto label_4d3864;
        case 0x4d3868u: goto label_4d3868;
        case 0x4d386cu: goto label_4d386c;
        case 0x4d3870u: goto label_4d3870;
        case 0x4d3874u: goto label_4d3874;
        case 0x4d3878u: goto label_4d3878;
        case 0x4d387cu: goto label_4d387c;
        case 0x4d3880u: goto label_4d3880;
        case 0x4d3884u: goto label_4d3884;
        case 0x4d3888u: goto label_4d3888;
        case 0x4d388cu: goto label_4d388c;
        case 0x4d3890u: goto label_4d3890;
        case 0x4d3894u: goto label_4d3894;
        case 0x4d3898u: goto label_4d3898;
        case 0x4d389cu: goto label_4d389c;
        case 0x4d38a0u: goto label_4d38a0;
        case 0x4d38a4u: goto label_4d38a4;
        case 0x4d38a8u: goto label_4d38a8;
        case 0x4d38acu: goto label_4d38ac;
        case 0x4d38b0u: goto label_4d38b0;
        case 0x4d38b4u: goto label_4d38b4;
        case 0x4d38b8u: goto label_4d38b8;
        case 0x4d38bcu: goto label_4d38bc;
        case 0x4d38c0u: goto label_4d38c0;
        case 0x4d38c4u: goto label_4d38c4;
        case 0x4d38c8u: goto label_4d38c8;
        case 0x4d38ccu: goto label_4d38cc;
        case 0x4d38d0u: goto label_4d38d0;
        case 0x4d38d4u: goto label_4d38d4;
        case 0x4d38d8u: goto label_4d38d8;
        case 0x4d38dcu: goto label_4d38dc;
        case 0x4d38e0u: goto label_4d38e0;
        case 0x4d38e4u: goto label_4d38e4;
        case 0x4d38e8u: goto label_4d38e8;
        case 0x4d38ecu: goto label_4d38ec;
        case 0x4d38f0u: goto label_4d38f0;
        case 0x4d38f4u: goto label_4d38f4;
        case 0x4d38f8u: goto label_4d38f8;
        case 0x4d38fcu: goto label_4d38fc;
        case 0x4d3900u: goto label_4d3900;
        case 0x4d3904u: goto label_4d3904;
        case 0x4d3908u: goto label_4d3908;
        case 0x4d390cu: goto label_4d390c;
        case 0x4d3910u: goto label_4d3910;
        case 0x4d3914u: goto label_4d3914;
        case 0x4d3918u: goto label_4d3918;
        case 0x4d391cu: goto label_4d391c;
        case 0x4d3920u: goto label_4d3920;
        case 0x4d3924u: goto label_4d3924;
        case 0x4d3928u: goto label_4d3928;
        case 0x4d392cu: goto label_4d392c;
        case 0x4d3930u: goto label_4d3930;
        case 0x4d3934u: goto label_4d3934;
        case 0x4d3938u: goto label_4d3938;
        case 0x4d393cu: goto label_4d393c;
        case 0x4d3940u: goto label_4d3940;
        case 0x4d3944u: goto label_4d3944;
        case 0x4d3948u: goto label_4d3948;
        case 0x4d394cu: goto label_4d394c;
        case 0x4d3950u: goto label_4d3950;
        case 0x4d3954u: goto label_4d3954;
        case 0x4d3958u: goto label_4d3958;
        case 0x4d395cu: goto label_4d395c;
        case 0x4d3960u: goto label_4d3960;
        case 0x4d3964u: goto label_4d3964;
        case 0x4d3968u: goto label_4d3968;
        case 0x4d396cu: goto label_4d396c;
        case 0x4d3970u: goto label_4d3970;
        case 0x4d3974u: goto label_4d3974;
        case 0x4d3978u: goto label_4d3978;
        case 0x4d397cu: goto label_4d397c;
        case 0x4d3980u: goto label_4d3980;
        case 0x4d3984u: goto label_4d3984;
        case 0x4d3988u: goto label_4d3988;
        case 0x4d398cu: goto label_4d398c;
        case 0x4d3990u: goto label_4d3990;
        case 0x4d3994u: goto label_4d3994;
        case 0x4d3998u: goto label_4d3998;
        case 0x4d399cu: goto label_4d399c;
        case 0x4d39a0u: goto label_4d39a0;
        case 0x4d39a4u: goto label_4d39a4;
        case 0x4d39a8u: goto label_4d39a8;
        case 0x4d39acu: goto label_4d39ac;
        case 0x4d39b0u: goto label_4d39b0;
        case 0x4d39b4u: goto label_4d39b4;
        case 0x4d39b8u: goto label_4d39b8;
        case 0x4d39bcu: goto label_4d39bc;
        case 0x4d39c0u: goto label_4d39c0;
        case 0x4d39c4u: goto label_4d39c4;
        case 0x4d39c8u: goto label_4d39c8;
        case 0x4d39ccu: goto label_4d39cc;
        case 0x4d39d0u: goto label_4d39d0;
        case 0x4d39d4u: goto label_4d39d4;
        case 0x4d39d8u: goto label_4d39d8;
        case 0x4d39dcu: goto label_4d39dc;
        case 0x4d39e0u: goto label_4d39e0;
        case 0x4d39e4u: goto label_4d39e4;
        case 0x4d39e8u: goto label_4d39e8;
        case 0x4d39ecu: goto label_4d39ec;
        case 0x4d39f0u: goto label_4d39f0;
        case 0x4d39f4u: goto label_4d39f4;
        case 0x4d39f8u: goto label_4d39f8;
        case 0x4d39fcu: goto label_4d39fc;
        case 0x4d3a00u: goto label_4d3a00;
        case 0x4d3a04u: goto label_4d3a04;
        case 0x4d3a08u: goto label_4d3a08;
        case 0x4d3a0cu: goto label_4d3a0c;
        case 0x4d3a10u: goto label_4d3a10;
        case 0x4d3a14u: goto label_4d3a14;
        case 0x4d3a18u: goto label_4d3a18;
        case 0x4d3a1cu: goto label_4d3a1c;
        case 0x4d3a20u: goto label_4d3a20;
        case 0x4d3a24u: goto label_4d3a24;
        case 0x4d3a28u: goto label_4d3a28;
        case 0x4d3a2cu: goto label_4d3a2c;
        case 0x4d3a30u: goto label_4d3a30;
        case 0x4d3a34u: goto label_4d3a34;
        case 0x4d3a38u: goto label_4d3a38;
        case 0x4d3a3cu: goto label_4d3a3c;
        case 0x4d3a40u: goto label_4d3a40;
        case 0x4d3a44u: goto label_4d3a44;
        case 0x4d3a48u: goto label_4d3a48;
        case 0x4d3a4cu: goto label_4d3a4c;
        case 0x4d3a50u: goto label_4d3a50;
        case 0x4d3a54u: goto label_4d3a54;
        case 0x4d3a58u: goto label_4d3a58;
        case 0x4d3a5cu: goto label_4d3a5c;
        case 0x4d3a60u: goto label_4d3a60;
        case 0x4d3a64u: goto label_4d3a64;
        case 0x4d3a68u: goto label_4d3a68;
        case 0x4d3a6cu: goto label_4d3a6c;
        case 0x4d3a70u: goto label_4d3a70;
        case 0x4d3a74u: goto label_4d3a74;
        case 0x4d3a78u: goto label_4d3a78;
        case 0x4d3a7cu: goto label_4d3a7c;
        case 0x4d3a80u: goto label_4d3a80;
        case 0x4d3a84u: goto label_4d3a84;
        case 0x4d3a88u: goto label_4d3a88;
        case 0x4d3a8cu: goto label_4d3a8c;
        case 0x4d3a90u: goto label_4d3a90;
        case 0x4d3a94u: goto label_4d3a94;
        case 0x4d3a98u: goto label_4d3a98;
        case 0x4d3a9cu: goto label_4d3a9c;
        case 0x4d3aa0u: goto label_4d3aa0;
        case 0x4d3aa4u: goto label_4d3aa4;
        case 0x4d3aa8u: goto label_4d3aa8;
        case 0x4d3aacu: goto label_4d3aac;
        case 0x4d3ab0u: goto label_4d3ab0;
        case 0x4d3ab4u: goto label_4d3ab4;
        case 0x4d3ab8u: goto label_4d3ab8;
        case 0x4d3abcu: goto label_4d3abc;
        case 0x4d3ac0u: goto label_4d3ac0;
        case 0x4d3ac4u: goto label_4d3ac4;
        case 0x4d3ac8u: goto label_4d3ac8;
        case 0x4d3accu: goto label_4d3acc;
        case 0x4d3ad0u: goto label_4d3ad0;
        case 0x4d3ad4u: goto label_4d3ad4;
        case 0x4d3ad8u: goto label_4d3ad8;
        case 0x4d3adcu: goto label_4d3adc;
        default: break;
    }

    ctx->pc = 0x4d2e50u;

label_4d2e50:
    // 0x4d2e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d2e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d2e54:
    // 0x4d2e54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d2e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d2e58:
    // 0x4d2e58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d2e5c:
    // 0x4d2e5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d2e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d2e60:
    // 0x4d2e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d2e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d2e64:
    // 0x4d2e64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d2e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d2e68:
    // 0x4d2e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d2e6c:
    // 0x4d2e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d2e70:
    // 0x4d2e70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d2e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d2e74:
    // 0x4d2e74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d2e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4d2e78:
    // 0x4d2e78: 0xc10ca68  jal         func_4329A0
label_4d2e7c:
    if (ctx->pc == 0x4D2E7Cu) {
        ctx->pc = 0x4D2E7Cu;
            // 0x4d2e7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4D2E80u;
        goto label_4d2e80;
    }
    ctx->pc = 0x4D2E78u;
    SET_GPR_U32(ctx, 31, 0x4D2E80u);
    ctx->pc = 0x4D2E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2E78u;
            // 0x4d2e7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2E80u; }
        if (ctx->pc != 0x4D2E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2E80u; }
        if (ctx->pc != 0x4D2E80u) { return; }
    }
    ctx->pc = 0x4D2E80u;
label_4d2e80:
    // 0x4d2e80: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d2e84:
    // 0x4d2e84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d2e88:
    // 0x4d2e88: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4d2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4d2e8c:
    // 0x4d2e8c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d2e90:
    // 0x4d2e90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d2e94:
    // 0x4d2e94: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4d2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4d2e98:
    // 0x4d2e98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d2e9c:
    // 0x4d2e9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d2ea0:
    // 0x4d2ea0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4d2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4d2ea4:
    // 0x4d2ea4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d2ea8:
    // 0x4d2ea8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4d2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4d2eac:
    // 0x4d2eac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d2eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d2eb0:
    // 0x4d2eb0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4d2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4d2eb4:
    // 0x4d2eb4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4d2eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4d2eb8:
    // 0x4d2eb8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4d2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4d2ebc:
    // 0x4d2ebc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4d2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4d2ec0:
    // 0x4d2ec0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4d2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4d2ec4:
    // 0x4d2ec4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4d2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4d2ec8:
    // 0x4d2ec8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4d2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4d2ecc:
    // 0x4d2ecc: 0xc0582cc  jal         func_160B30
label_4d2ed0:
    if (ctx->pc == 0x4D2ED0u) {
        ctx->pc = 0x4D2ED0u;
            // 0x4d2ed0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4D2ED4u;
        goto label_4d2ed4;
    }
    ctx->pc = 0x4D2ECCu;
    SET_GPR_U32(ctx, 31, 0x4D2ED4u);
    ctx->pc = 0x4D2ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2ECCu;
            // 0x4d2ed0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2ED4u; }
        if (ctx->pc != 0x4D2ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2ED4u; }
        if (ctx->pc != 0x4D2ED4u) { return; }
    }
    ctx->pc = 0x4D2ED4u;
label_4d2ed4:
    // 0x4d2ed4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d2ed8:
    // 0x4d2ed8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4d2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4d2edc:
    // 0x4d2edc: 0x24632360  addiu       $v1, $v1, 0x2360
    ctx->pc = 0x4d2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9056));
label_4d2ee0:
    // 0x4d2ee0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4d2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4d2ee4:
    // 0x4d2ee4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4d2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4d2ee8:
    // 0x4d2ee8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d2eec:
    // 0x4d2eec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d2ef0:
    // 0x4d2ef0: 0xac44aa38  sw          $a0, -0x55C8($v0)
    ctx->pc = 0x4d2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945336), GPR_U32(ctx, 4));
label_4d2ef4:
    // 0x4d2ef4: 0x24632370  addiu       $v1, $v1, 0x2370
    ctx->pc = 0x4d2ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9072));
label_4d2ef8:
    // 0x4d2ef8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d2efc:
    // 0x4d2efc: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x4d2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
label_4d2f00:
    // 0x4d2f00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d2f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d2f04:
    // 0x4d2f04: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4d2f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4d2f08:
    // 0x4d2f08: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4d2f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4d2f0c:
    // 0x4d2f0c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4d2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4d2f10:
    // 0x4d2f10: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4d2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4d2f14:
    // 0x4d2f14: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4d2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4d2f18:
    // 0x4d2f18: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4d2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4d2f1c:
    // 0x4d2f1c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4d2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4d2f20:
    // 0x4d2f20: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4d2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4d2f24:
    // 0x4d2f24: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4d2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4d2f28:
    // 0x4d2f28: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4d2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4d2f2c:
    // 0x4d2f2c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4d2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4d2f30:
    // 0x4d2f30: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4d2f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4d2f34:
    // 0x4d2f34: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_4d2f38:
    if (ctx->pc == 0x4D2F38u) {
        ctx->pc = 0x4D2F3Cu;
        goto label_4d2f3c;
    }
    ctx->pc = 0x4D2F34u;
    {
        const bool branch_taken_0x4d2f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2f34) {
            ctx->pc = 0x4D2FD0u;
            goto label_4d2fd0;
        }
    }
    ctx->pc = 0x4D2F3Cu;
label_4d2f3c:
    // 0x4d2f3c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4d2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4d2f40:
    // 0x4d2f40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4d2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4d2f44:
    // 0x4d2f44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4d2f48:
    // 0x4d2f48: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4d2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4d2f4c:
    // 0x4d2f4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4d2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4d2f50:
    // 0x4d2f50: 0xc040138  jal         func_1004E0
label_4d2f54:
    if (ctx->pc == 0x4D2F54u) {
        ctx->pc = 0x4D2F54u;
            // 0x4d2f54: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4D2F58u;
        goto label_4d2f58;
    }
    ctx->pc = 0x4D2F50u;
    SET_GPR_U32(ctx, 31, 0x4D2F58u);
    ctx->pc = 0x4D2F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2F50u;
            // 0x4d2f54: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F58u; }
        if (ctx->pc != 0x4D2F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F58u; }
        if (ctx->pc != 0x4D2F58u) { return; }
    }
    ctx->pc = 0x4D2F58u;
label_4d2f58:
    // 0x4d2f58: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d2f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d2f5c:
    // 0x4d2f5c: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4d2f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4d2f60:
    // 0x4d2f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d2f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d2f64:
    // 0x4d2f64: 0x24a52ff0  addiu       $a1, $a1, 0x2FF0
    ctx->pc = 0x4d2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12272));
label_4d2f68:
    // 0x4d2f68: 0x24c627c0  addiu       $a2, $a2, 0x27C0
    ctx->pc = 0x4d2f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10176));
label_4d2f6c:
    // 0x4d2f6c: 0x24070170  addiu       $a3, $zero, 0x170
    ctx->pc = 0x4d2f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_4d2f70:
    // 0x4d2f70: 0xc040840  jal         func_102100
label_4d2f74:
    if (ctx->pc == 0x4D2F74u) {
        ctx->pc = 0x4D2F74u;
            // 0x4d2f74: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2F78u;
        goto label_4d2f78;
    }
    ctx->pc = 0x4D2F70u;
    SET_GPR_U32(ctx, 31, 0x4D2F78u);
    ctx->pc = 0x4D2F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2F70u;
            // 0x4d2f74: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F78u; }
        if (ctx->pc != 0x4D2F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F78u; }
        if (ctx->pc != 0x4D2F78u) { return; }
    }
    ctx->pc = 0x4D2F78u;
label_4d2f78:
    // 0x4d2f78: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4d2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4d2f7c:
    // 0x4d2f7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d2f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d2f80:
    // 0x4d2f80: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4d2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4d2f84:
    // 0x4d2f84: 0xc0788fc  jal         func_1E23F0
label_4d2f88:
    if (ctx->pc == 0x4D2F88u) {
        ctx->pc = 0x4D2F88u;
            // 0x4d2f88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2F8Cu;
        goto label_4d2f8c;
    }
    ctx->pc = 0x4D2F84u;
    SET_GPR_U32(ctx, 31, 0x4D2F8Cu);
    ctx->pc = 0x4D2F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2F84u;
            // 0x4d2f88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F8Cu; }
        if (ctx->pc != 0x4D2F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F8Cu; }
        if (ctx->pc != 0x4D2F8Cu) { return; }
    }
    ctx->pc = 0x4D2F8Cu;
label_4d2f8c:
    // 0x4d2f8c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d2f90:
    // 0x4d2f90: 0xc0788fc  jal         func_1E23F0
label_4d2f94:
    if (ctx->pc == 0x4D2F94u) {
        ctx->pc = 0x4D2F94u;
            // 0x4d2f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2F98u;
        goto label_4d2f98;
    }
    ctx->pc = 0x4D2F90u;
    SET_GPR_U32(ctx, 31, 0x4D2F98u);
    ctx->pc = 0x4D2F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2F90u;
            // 0x4d2f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F98u; }
        if (ctx->pc != 0x4D2F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2F98u; }
        if (ctx->pc != 0x4D2F98u) { return; }
    }
    ctx->pc = 0x4D2F98u;
label_4d2f98:
    // 0x4d2f98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d2f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2f9c:
    // 0x4d2f9c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4d2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4d2fa0:
    // 0x4d2fa0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d2fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d2fa4:
    // 0x4d2fa4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4d2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4d2fa8:
    // 0x4d2fa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d2fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d2fac:
    // 0x4d2fac: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4d2facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4d2fb0:
    // 0x4d2fb0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4d2fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4d2fb4:
    // 0x4d2fb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d2fb8:
    // 0x4d2fb8: 0xc0a997c  jal         func_2A65F0
label_4d2fbc:
    if (ctx->pc == 0x4D2FBCu) {
        ctx->pc = 0x4D2FBCu;
            // 0x4d2fbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4D2FC0u;
        goto label_4d2fc0;
    }
    ctx->pc = 0x4D2FB8u;
    SET_GPR_U32(ctx, 31, 0x4D2FC0u);
    ctx->pc = 0x4D2FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2FB8u;
            // 0x4d2fbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2FC0u; }
        if (ctx->pc != 0x4D2FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2FC0u; }
        if (ctx->pc != 0x4D2FC0u) { return; }
    }
    ctx->pc = 0x4D2FC0u;
label_4d2fc0:
    // 0x4d2fc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d2fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4d2fc4:
    // 0x4d2fc4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4d2fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d2fc8:
    // 0x4d2fc8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4d2fcc:
    if (ctx->pc == 0x4D2FCCu) {
        ctx->pc = 0x4D2FCCu;
            // 0x4d2fcc: 0x26520170  addiu       $s2, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->pc = 0x4D2FD0u;
        goto label_4d2fd0;
    }
    ctx->pc = 0x4D2FC8u;
    {
        const bool branch_taken_0x4d2fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2FC8u;
            // 0x4d2fcc: 0x26520170  addiu       $s2, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2fc8) {
            ctx->pc = 0x4D2F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d2f9c;
        }
    }
    ctx->pc = 0x4D2FD0u;
label_4d2fd0:
    // 0x4d2fd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d2fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d2fd4:
    // 0x4d2fd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d2fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d2fd8:
    // 0x4d2fd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d2fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d2fdc:
    // 0x4d2fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d2fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2fe0:
    // 0x4d2fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2fe4:
    // 0x4d2fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2fe8:
    // 0x4d2fe8: 0x3e00008  jr          $ra
label_4d2fec:
    if (ctx->pc == 0x4D2FECu) {
        ctx->pc = 0x4D2FECu;
            // 0x4d2fec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D2FF0u;
        goto label_4d2ff0;
    }
    ctx->pc = 0x4D2FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2FE8u;
            // 0x4d2fec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2FF0u;
label_4d2ff0:
    // 0x4d2ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d2ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d2ff4:
    // 0x4d2ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d2ff8:
    // 0x4d2ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d2ffc:
    // 0x4d2ffc: 0xc0b1370  jal         func_2C4DC0
label_4d3000:
    if (ctx->pc == 0x4D3000u) {
        ctx->pc = 0x4D3000u;
            // 0x4d3000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3004u;
        goto label_4d3004;
    }
    ctx->pc = 0x4D2FFCu;
    SET_GPR_U32(ctx, 31, 0x4D3004u);
    ctx->pc = 0x4D3000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2FFCu;
            // 0x4d3000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3004u; }
        if (ctx->pc != 0x4D3004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3004u; }
        if (ctx->pc != 0x4D3004u) { return; }
    }
    ctx->pc = 0x4D3004u;
label_4d3004:
    // 0x4d3004: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d3004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d3008:
    // 0x4d3008: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d3008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d300c:
    // 0x4d300c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4d300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_4d3010:
    // 0x4d3010: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4d3010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_4d3014:
    // 0x4d3014: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d3014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d3018:
    // 0x4d3018: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x4d3018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_4d301c:
    // 0x4d301c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d3020:
    // 0x4d3020: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d3020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d3024:
    // 0x4d3024: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4d3024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4d3028:
    // 0x4d3028: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d302c:
    // 0x4d302c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x4d302cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_4d3030:
    // 0x4d3030: 0x246322b0  addiu       $v1, $v1, 0x22B0
    ctx->pc = 0x4d3030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8880));
label_4d3034:
    // 0x4d3034: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x4d3034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_4d3038:
    // 0x4d3038: 0x244222f0  addiu       $v0, $v0, 0x22F0
    ctx->pc = 0x4d3038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8944));
label_4d303c:
    // 0x4d303c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d3040:
    // 0x4d3040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d3040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3044:
    // 0x4d3044: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d3044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d3048:
    // 0x4d3048: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4d3048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4d304c:
    // 0x4d304c: 0xc04a576  jal         func_1295D8
label_4d3050:
    if (ctx->pc == 0x4D3050u) {
        ctx->pc = 0x4D3050u;
            // 0x4d3050: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->pc = 0x4D3054u;
        goto label_4d3054;
    }
    ctx->pc = 0x4D304Cu;
    SET_GPR_U32(ctx, 31, 0x4D3054u);
    ctx->pc = 0x4D3050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D304Cu;
            // 0x4d3050: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3054u; }
        if (ctx->pc != 0x4D3054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3054u; }
        if (ctx->pc != 0x4D3054u) { return; }
    }
    ctx->pc = 0x4D3054u;
label_4d3054:
    // 0x4d3054: 0xa20000e1  sb          $zero, 0xE1($s0)
    ctx->pc = 0x4d3054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 0));
label_4d3058:
    // 0x4d3058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d3058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d305c:
    // 0x4d305c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d305cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3060:
    // 0x4d3060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3064:
    // 0x4d3064: 0x3e00008  jr          $ra
label_4d3068:
    if (ctx->pc == 0x4D3068u) {
        ctx->pc = 0x4D3068u;
            // 0x4d3068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D306Cu;
        goto label_4d306c;
    }
    ctx->pc = 0x4D3064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3064u;
            // 0x4d3068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D306Cu;
label_4d306c:
    // 0x4d306c: 0x0  nop
    ctx->pc = 0x4d306cu;
    // NOP
label_4d3070:
    // 0x4d3070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d3070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d3074:
    // 0x4d3074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d3074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d3078:
    // 0x4d3078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d3078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d307c:
    // 0x4d307c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d307cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3080:
    // 0x4d3080: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x4d3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_4d3084:
    // 0x4d3084: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d3088:
    if (ctx->pc == 0x4D3088u) {
        ctx->pc = 0x4D3088u;
            // 0x4d3088: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4D308Cu;
        goto label_4d308c;
    }
    ctx->pc = 0x4D3084u;
    {
        const bool branch_taken_0x4d3084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3084) {
            ctx->pc = 0x4D3088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3084u;
            // 0x4d3088: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D30A0u;
            goto label_4d30a0;
        }
    }
    ctx->pc = 0x4D308Cu;
label_4d308c:
    // 0x4d308c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4d308cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4d3090:
    // 0x4d3090: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d3090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d3094:
    // 0x4d3094: 0x320f809  jalr        $t9
label_4d3098:
    if (ctx->pc == 0x4D3098u) {
        ctx->pc = 0x4D3098u;
            // 0x4d3098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D309Cu;
        goto label_4d309c;
    }
    ctx->pc = 0x4D3094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D309Cu);
        ctx->pc = 0x4D3098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3094u;
            // 0x4d3098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D309Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D309Cu; }
            if (ctx->pc != 0x4D309Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D309Cu;
label_4d309c:
    // 0x4d309c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4d309cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4d30a0:
    // 0x4d30a0: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x4d30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_4d30a4:
    // 0x4d30a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d30a8:
    if (ctx->pc == 0x4D30A8u) {
        ctx->pc = 0x4D30A8u;
            // 0x4d30a8: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->pc = 0x4D30ACu;
        goto label_4d30ac;
    }
    ctx->pc = 0x4D30A4u;
    {
        const bool branch_taken_0x4d30a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d30a4) {
            ctx->pc = 0x4D30A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D30A4u;
            // 0x4d30a8: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D30C0u;
            goto label_4d30c0;
        }
    }
    ctx->pc = 0x4D30ACu;
label_4d30ac:
    // 0x4d30ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d30acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d30b0:
    // 0x4d30b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d30b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d30b4:
    // 0x4d30b4: 0x320f809  jalr        $t9
label_4d30b8:
    if (ctx->pc == 0x4D30B8u) {
        ctx->pc = 0x4D30B8u;
            // 0x4d30b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D30BCu;
        goto label_4d30bc;
    }
    ctx->pc = 0x4D30B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D30BCu);
        ctx->pc = 0x4D30B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D30B4u;
            // 0x4d30b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D30BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D30BCu; }
            if (ctx->pc != 0x4D30BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4D30BCu;
label_4d30bc:
    // 0x4d30bc: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4d30bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_4d30c0:
    // 0x4d30c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d30c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d30c4:
    // 0x4d30c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d30c8:
    if (ctx->pc == 0x4D30C8u) {
        ctx->pc = 0x4D30C8u;
            // 0x4d30c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4D30CCu;
        goto label_4d30cc;
    }
    ctx->pc = 0x4D30C4u;
    {
        const bool branch_taken_0x4d30c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d30c4) {
            ctx->pc = 0x4D30C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D30C4u;
            // 0x4d30c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D30E0u;
            goto label_4d30e0;
        }
    }
    ctx->pc = 0x4D30CCu;
label_4d30cc:
    // 0x4d30cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d30ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d30d0:
    // 0x4d30d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d30d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d30d4:
    // 0x4d30d4: 0x320f809  jalr        $t9
label_4d30d8:
    if (ctx->pc == 0x4D30D8u) {
        ctx->pc = 0x4D30D8u;
            // 0x4d30d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D30DCu;
        goto label_4d30dc;
    }
    ctx->pc = 0x4D30D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D30DCu);
        ctx->pc = 0x4D30D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D30D4u;
            // 0x4d30d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D30DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D30DCu; }
            if (ctx->pc != 0x4D30DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4D30DCu;
label_4d30dc:
    // 0x4d30dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4d30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4d30e0:
    // 0x4d30e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d30e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d30e4:
    // 0x4d30e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d30e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d30e8:
    // 0x4d30e8: 0x3e00008  jr          $ra
label_4d30ec:
    if (ctx->pc == 0x4D30ECu) {
        ctx->pc = 0x4D30ECu;
            // 0x4d30ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D30F0u;
        goto label_4d30f0;
    }
    ctx->pc = 0x4D30E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D30ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D30E8u;
            // 0x4d30ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D30F0u;
label_4d30f0:
    // 0x4d30f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4d30f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4d30f4:
    // 0x4d30f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d30f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4d30f8:
    // 0x4d30f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d30f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d30fc:
    // 0x4d30fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d30fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3100:
    // 0x4d3100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d3100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d3104:
    // 0x4d3104: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4d3104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4d3108:
    // 0x4d3108: 0xc0892d0  jal         func_224B40
label_4d310c:
    if (ctx->pc == 0x4D310Cu) {
        ctx->pc = 0x4D310Cu;
            // 0x4d310c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4D3110u;
        goto label_4d3110;
    }
    ctx->pc = 0x4D3108u;
    SET_GPR_U32(ctx, 31, 0x4D3110u);
    ctx->pc = 0x4D310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3108u;
            // 0x4d310c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3110u; }
        if (ctx->pc != 0x4D3110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3110u; }
        if (ctx->pc != 0x4D3110u) { return; }
    }
    ctx->pc = 0x4D3110u;
label_4d3110:
    // 0x4d3110: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d3110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d3114:
    // 0x4d3114: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d3114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d3118:
    // 0x4d3118: 0x8c42aa38  lw          $v0, -0x55C8($v0)
    ctx->pc = 0x4d3118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945336)));
label_4d311c:
    // 0x4d311c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4d311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4d3120:
    // 0x4d3120: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x4d3120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4d3124:
    // 0x4d3124: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x4d3124u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4d3128:
    // 0x4d3128: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4d3128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4d312c:
    // 0x4d312c: 0xc0b6e68  jal         func_2DB9A0
label_4d3130:
    if (ctx->pc == 0x4D3130u) {
        ctx->pc = 0x4D3130u;
            // 0x4d3130: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4D3134u;
        goto label_4d3134;
    }
    ctx->pc = 0x4D312Cu;
    SET_GPR_U32(ctx, 31, 0x4D3134u);
    ctx->pc = 0x4D3130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D312Cu;
            // 0x4d3130: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3134u; }
        if (ctx->pc != 0x4D3134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3134u; }
        if (ctx->pc != 0x4D3134u) { return; }
    }
    ctx->pc = 0x4D3134u;
label_4d3134:
    // 0x4d3134: 0xc0b6dac  jal         func_2DB6B0
label_4d3138:
    if (ctx->pc == 0x4D3138u) {
        ctx->pc = 0x4D3138u;
            // 0x4d3138: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4D313Cu;
        goto label_4d313c;
    }
    ctx->pc = 0x4D3134u;
    SET_GPR_U32(ctx, 31, 0x4D313Cu);
    ctx->pc = 0x4D3138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3134u;
            // 0x4d3138: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D313Cu; }
        if (ctx->pc != 0x4D313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D313Cu; }
        if (ctx->pc != 0x4D313Cu) { return; }
    }
    ctx->pc = 0x4D313Cu;
label_4d313c:
    // 0x4d313c: 0xc0cac94  jal         func_32B250
label_4d3140:
    if (ctx->pc == 0x4D3140u) {
        ctx->pc = 0x4D3140u;
            // 0x4d3140: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4D3144u;
        goto label_4d3144;
    }
    ctx->pc = 0x4D313Cu;
    SET_GPR_U32(ctx, 31, 0x4D3144u);
    ctx->pc = 0x4D3140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D313Cu;
            // 0x4d3140: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3144u; }
        if (ctx->pc != 0x4D3144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3144u; }
        if (ctx->pc != 0x4D3144u) { return; }
    }
    ctx->pc = 0x4D3144u;
label_4d3144:
    // 0x4d3144: 0xc0cac84  jal         func_32B210
label_4d3148:
    if (ctx->pc == 0x4D3148u) {
        ctx->pc = 0x4D3148u;
            // 0x4d3148: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4D314Cu;
        goto label_4d314c;
    }
    ctx->pc = 0x4D3144u;
    SET_GPR_U32(ctx, 31, 0x4D314Cu);
    ctx->pc = 0x4D3148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3144u;
            // 0x4d3148: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D314Cu; }
        if (ctx->pc != 0x4D314Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D314Cu; }
        if (ctx->pc != 0x4D314Cu) { return; }
    }
    ctx->pc = 0x4D314Cu;
label_4d314c:
    // 0x4d314c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4d314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4d3150:
    // 0x4d3150: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4d3150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4d3154:
    // 0x4d3154: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x4d3154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d3158:
    // 0x4d3158: 0xc0a5a68  jal         func_2969A0
label_4d315c:
    if (ctx->pc == 0x4D315Cu) {
        ctx->pc = 0x4D315Cu;
            // 0x4d315c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D3160u;
        goto label_4d3160;
    }
    ctx->pc = 0x4D3158u;
    SET_GPR_U32(ctx, 31, 0x4D3160u);
    ctx->pc = 0x4D315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3158u;
            // 0x4d315c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3160u; }
        if (ctx->pc != 0x4D3160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3160u; }
        if (ctx->pc != 0x4D3160u) { return; }
    }
    ctx->pc = 0x4D3160u;
label_4d3160:
    // 0x4d3160: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d3160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d3164:
    // 0x4d3164: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4d3164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d3168:
    // 0x4d3168: 0x8c44aa38  lw          $a0, -0x55C8($v0)
    ctx->pc = 0x4d3168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945336)));
label_4d316c:
    // 0x4d316c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x4d316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3170:
    // 0x4d3170: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x4d3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d3174:
    // 0x4d3174: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4d3174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4d3178:
    // 0x4d3178: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4d3178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d317c:
    // 0x4d317c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4d317cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4d3180:
    // 0x4d3180: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x4d3180u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4d3184:
    // 0x4d3184: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x4d3184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_4d3188:
    // 0x4d3188: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x4d3188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_4d318c:
    // 0x4d318c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4d3190:
    // 0x4d3190: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x4d3190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_4d3194:
    // 0x4d3194: 0x34430101  ori         $v1, $v0, 0x101
    ctx->pc = 0x4d3194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_4d3198:
    // 0x4d3198: 0xc6490018  lwc1        $f9, 0x18($s2)
    ctx->pc = 0x4d3198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4d319c:
    // 0x4d319c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d31a0:
    // 0x4d31a0: 0xc6480014  lwc1        $f8, 0x14($s2)
    ctx->pc = 0x4d31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4d31a4:
    // 0x4d31a4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d31a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4d31a8:
    // 0x4d31a8: 0xc6470010  lwc1        $f7, 0x10($s2)
    ctx->pc = 0x4d31a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4d31ac:
    // 0x4d31ac: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x4d31acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4d31b0:
    // 0x4d31b0: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x4d31b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4d31b4:
    // 0x4d31b4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x4d31b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4d31b8:
    // 0x4d31b8: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4d31b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4d31bc:
    // 0x4d31bc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x4d31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d31c0:
    // 0x4d31c0: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4d31c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4d31c4:
    // 0x4d31c4: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x4d31c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4d31c8:
    // 0x4d31c8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4d31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4d31cc:
    // 0x4d31cc: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x4d31ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4d31d0:
    // 0x4d31d0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4d31d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4d31d4:
    // 0x4d31d4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x4d31d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4d31d8:
    // 0x4d31d8: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x4d31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d31dc:
    // 0x4d31dc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x4d31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d31e0:
    // 0x4d31e0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x4d31e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d31e4:
    // 0x4d31e4: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x4d31e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4d31e8:
    // 0x4d31e8: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x4d31e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4d31ec:
    // 0x4d31ec: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x4d31ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4d31f0:
    // 0x4d31f0: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x4d31f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d31f4:
    // 0x4d31f4: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x4d31f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d31f8:
    // 0x4d31f8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4d31f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d31fc:
    // 0x4d31fc: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x4d31fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4d3200:
    // 0x4d3200: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x4d3200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4d3204:
    // 0x4d3204: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4d3204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4d3208:
    // 0x4d3208: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x4d3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4d320c:
    // 0x4d320c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x4d320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d3210:
    // 0x4d3210: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x4d3210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d3214:
    // 0x4d3214: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x4d3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3218:
    // 0x4d3218: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4d3218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d321c:
    // 0x4d321c: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x4d321cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4d3220:
    // 0x4d3220: 0xe7a800d4  swc1        $f8, 0xD4($sp)
    ctx->pc = 0x4d3220u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4d3224:
    // 0x4d3224: 0xe7a900d8  swc1        $f9, 0xD8($sp)
    ctx->pc = 0x4d3224u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4d3228:
    // 0x4d3228: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x4d3228u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4d322c:
    // 0x4d322c: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x4d322cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4d3230:
    // 0x4d3230: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x4d3230u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4d3234:
    // 0x4d3234: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x4d3234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4d3238:
    // 0x4d3238: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4d3238u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4d323c:
    // 0x4d323c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x4d323cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4d3240:
    // 0x4d3240: 0xc0a7a88  jal         func_29EA20
label_4d3244:
    if (ctx->pc == 0x4D3244u) {
        ctx->pc = 0x4D3244u;
            // 0x4d3244: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4D3248u;
        goto label_4d3248;
    }
    ctx->pc = 0x4D3240u;
    SET_GPR_U32(ctx, 31, 0x4D3248u);
    ctx->pc = 0x4D3244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3240u;
            // 0x4d3244: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3248u; }
        if (ctx->pc != 0x4D3248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3248u; }
        if (ctx->pc != 0x4D3248u) { return; }
    }
    ctx->pc = 0x4D3248u;
label_4d3248:
    // 0x4d3248: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4d3248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4d324c:
    // 0x4d324c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d324cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d3250:
    // 0x4d3250: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4d3254:
    if (ctx->pc == 0x4D3254u) {
        ctx->pc = 0x4D3254u;
            // 0x4d3254: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4D3258u;
        goto label_4d3258;
    }
    ctx->pc = 0x4D3250u;
    {
        const bool branch_taken_0x4d3250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3250u;
            // 0x4d3254: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3250) {
            ctx->pc = 0x4D32A0u;
            goto label_4d32a0;
        }
    }
    ctx->pc = 0x4D3258u;
label_4d3258:
    // 0x4d3258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d3258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d325c:
    // 0x4d325c: 0xc088ef4  jal         func_223BD0
label_4d3260:
    if (ctx->pc == 0x4D3260u) {
        ctx->pc = 0x4D3260u;
            // 0x4d3260: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4D3264u;
        goto label_4d3264;
    }
    ctx->pc = 0x4D325Cu;
    SET_GPR_U32(ctx, 31, 0x4D3264u);
    ctx->pc = 0x4D3260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D325Cu;
            // 0x4d3260: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3264u; }
        if (ctx->pc != 0x4D3264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3264u; }
        if (ctx->pc != 0x4D3264u) { return; }
    }
    ctx->pc = 0x4D3264u;
label_4d3264:
    // 0x4d3264: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d3264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d3268:
    // 0x4d3268: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d3268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d326c:
    // 0x4d326c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4d326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4d3270:
    // 0x4d3270: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4d3270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4d3274:
    // 0x4d3274: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d3274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d3278:
    // 0x4d3278: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x4d3278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_4d327c:
    // 0x4d327c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3280:
    // 0x4d3280: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d3280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d3284:
    // 0x4d3284: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x4d3284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_4d3288:
    // 0x4d3288: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x4d3288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_4d328c:
    // 0x4d328c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4d328cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4d3290:
    // 0x4d3290: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d3294:
    // 0x4d3294: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4d3294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4d3298:
    // 0x4d3298: 0xc088b38  jal         func_222CE0
label_4d329c:
    if (ctx->pc == 0x4D329Cu) {
        ctx->pc = 0x4D329Cu;
            // 0x4d329c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D32A0u;
        goto label_4d32a0;
    }
    ctx->pc = 0x4D3298u;
    SET_GPR_U32(ctx, 31, 0x4D32A0u);
    ctx->pc = 0x4D329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3298u;
            // 0x4d329c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D32A0u; }
        if (ctx->pc != 0x4D32A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D32A0u; }
        if (ctx->pc != 0x4D32A0u) { return; }
    }
    ctx->pc = 0x4D32A0u;
label_4d32a0:
    // 0x4d32a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4d32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4d32a4:
    // 0x4d32a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d32a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d32a8:
    // 0x4d32a8: 0xc08c164  jal         func_230590
label_4d32ac:
    if (ctx->pc == 0x4D32ACu) {
        ctx->pc = 0x4D32ACu;
            // 0x4d32ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D32B0u;
        goto label_4d32b0;
    }
    ctx->pc = 0x4D32A8u;
    SET_GPR_U32(ctx, 31, 0x4D32B0u);
    ctx->pc = 0x4D32ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D32A8u;
            // 0x4d32ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D32B0u; }
        if (ctx->pc != 0x4D32B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D32B0u; }
        if (ctx->pc != 0x4D32B0u) { return; }
    }
    ctx->pc = 0x4D32B0u;
label_4d32b0:
    // 0x4d32b0: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x4d32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_4d32b4:
    // 0x4d32b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d32b8:
    // 0x4d32b8: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x4d32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_4d32bc:
    // 0x4d32bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4d32bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d32c0:
    // 0x4d32c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d32c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d32c4:
    // 0x4d32c4: 0xc08914c  jal         func_224530
label_4d32c8:
    if (ctx->pc == 0x4D32C8u) {
        ctx->pc = 0x4D32C8u;
            // 0x4d32c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D32CCu;
        goto label_4d32cc;
    }
    ctx->pc = 0x4D32C4u;
    SET_GPR_U32(ctx, 31, 0x4D32CCu);
    ctx->pc = 0x4D32C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D32C4u;
            // 0x4d32c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D32CCu; }
        if (ctx->pc != 0x4D32CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D32CCu; }
        if (ctx->pc != 0x4D32CCu) { return; }
    }
    ctx->pc = 0x4D32CCu;
label_4d32cc:
    // 0x4d32cc: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4d32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4d32d0:
    // 0x4d32d0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4d32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4d32d4:
    // 0x4d32d4: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x4d32d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4d32d8:
    // 0x4d32d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4d32d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4d32dc:
    // 0x4d32dc: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x4d32dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_4d32e0:
    // 0x4d32e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d32e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d32e4:
    // 0x4d32e4: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x4d32e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_4d32e8:
    // 0x4d32e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4d32e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d32ec:
    // 0x4d32ec: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4d32ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d32f0:
    // 0x4d32f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4d32f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d32f4:
    // 0x4d32f4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4d32f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d32f8:
    // 0x4d32f8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4d32f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d32fc:
    // 0x4d32fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4d32fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4d3300:
    // 0x4d3300: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4d3300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4d3304:
    // 0x4d3304: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4d3304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4d3308:
    // 0x4d3308: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4d3308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4d330c:
    // 0x4d330c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4d330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d3310:
    // 0x4d3310: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4d3310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d3314:
    // 0x4d3314: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4d3314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3318:
    // 0x4d3318: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4d3318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d331c:
    // 0x4d331c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4d331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4d3320:
    // 0x4d3320: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4d3320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4d3324:
    // 0x4d3324: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4d3324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4d3328:
    // 0x4d3328: 0xc0892b0  jal         func_224AC0
label_4d332c:
    if (ctx->pc == 0x4D332Cu) {
        ctx->pc = 0x4D332Cu;
            // 0x4d332c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4D3330u;
        goto label_4d3330;
    }
    ctx->pc = 0x4D3328u;
    SET_GPR_U32(ctx, 31, 0x4D3330u);
    ctx->pc = 0x4D332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3328u;
            // 0x4d332c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3330u; }
        if (ctx->pc != 0x4D3330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3330u; }
        if (ctx->pc != 0x4D3330u) { return; }
    }
    ctx->pc = 0x4D3330u;
label_4d3330:
    // 0x4d3330: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4d3330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4d3334:
    // 0x4d3334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d3334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d3338:
    // 0x4d3338: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4d3338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4d333c:
    // 0x4d333c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4d333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4d3340:
    // 0x4d3340: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4d3340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4d3344:
    // 0x4d3344: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4d3344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4d3348:
    // 0x4d3348: 0xc0891d8  jal         func_224760
label_4d334c:
    if (ctx->pc == 0x4D334Cu) {
        ctx->pc = 0x4D334Cu;
            // 0x4d334c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4D3350u;
        goto label_4d3350;
    }
    ctx->pc = 0x4D3348u;
    SET_GPR_U32(ctx, 31, 0x4D3350u);
    ctx->pc = 0x4D334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3348u;
            // 0x4d334c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3350u; }
        if (ctx->pc != 0x4D3350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3350u; }
        if (ctx->pc != 0x4D3350u) { return; }
    }
    ctx->pc = 0x4D3350u;
label_4d3350:
    // 0x4d3350: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4d3350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4d3354:
    // 0x4d3354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d3358:
    // 0x4d3358: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d3358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4d335c:
    // 0x4d335c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4d335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4d3360:
    // 0x4d3360: 0xc0a7a88  jal         func_29EA20
label_4d3364:
    if (ctx->pc == 0x4D3364u) {
        ctx->pc = 0x4D3364u;
            // 0x4d3364: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4D3368u;
        goto label_4d3368;
    }
    ctx->pc = 0x4D3360u;
    SET_GPR_U32(ctx, 31, 0x4D3368u);
    ctx->pc = 0x4D3364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3360u;
            // 0x4d3364: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3368u; }
        if (ctx->pc != 0x4D3368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3368u; }
        if (ctx->pc != 0x4D3368u) { return; }
    }
    ctx->pc = 0x4D3368u;
label_4d3368:
    // 0x4d3368: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4d3368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4d336c:
    // 0x4d336c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d336cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d3370:
    // 0x4d3370: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4d3374:
    if (ctx->pc == 0x4D3374u) {
        ctx->pc = 0x4D3374u;
            // 0x4d3374: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4D3378u;
        goto label_4d3378;
    }
    ctx->pc = 0x4D3370u;
    {
        const bool branch_taken_0x4d3370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3370u;
            // 0x4d3374: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3370) {
            ctx->pc = 0x4D3394u;
            goto label_4d3394;
        }
    }
    ctx->pc = 0x4D3378u;
label_4d3378:
    // 0x4d3378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d337c:
    // 0x4d337c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d3380:
    // 0x4d3380: 0xc0869d0  jal         func_21A740
label_4d3384:
    if (ctx->pc == 0x4D3384u) {
        ctx->pc = 0x4D3384u;
            // 0x4d3384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3388u;
        goto label_4d3388;
    }
    ctx->pc = 0x4D3380u;
    SET_GPR_U32(ctx, 31, 0x4D3388u);
    ctx->pc = 0x4D3384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3380u;
            // 0x4d3384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3388u; }
        if (ctx->pc != 0x4D3388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3388u; }
        if (ctx->pc != 0x4D3388u) { return; }
    }
    ctx->pc = 0x4D3388u;
label_4d3388:
    // 0x4d3388: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d3388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d338c:
    // 0x4d338c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4d338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4d3390:
    // 0x4d3390: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d3390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4d3394:
    // 0x4d3394: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x4d3394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_4d3398:
    // 0x4d3398: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d3398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d339c:
    // 0x4d339c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d33a0:
    // 0x4d33a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4d33a4:
    // 0x4d33a4: 0xc08c650  jal         func_231940
label_4d33a8:
    if (ctx->pc == 0x4D33A8u) {
        ctx->pc = 0x4D33A8u;
            // 0x4d33a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D33ACu;
        goto label_4d33ac;
    }
    ctx->pc = 0x4D33A4u;
    SET_GPR_U32(ctx, 31, 0x4D33ACu);
    ctx->pc = 0x4D33A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D33A4u;
            // 0x4d33a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D33ACu; }
        if (ctx->pc != 0x4D33ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D33ACu; }
        if (ctx->pc != 0x4D33ACu) { return; }
    }
    ctx->pc = 0x4D33ACu;
label_4d33ac:
    // 0x4d33ac: 0xc040180  jal         func_100600
label_4d33b0:
    if (ctx->pc == 0x4D33B0u) {
        ctx->pc = 0x4D33B0u;
            // 0x4d33b0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4D33B4u;
        goto label_4d33b4;
    }
    ctx->pc = 0x4D33ACu;
    SET_GPR_U32(ctx, 31, 0x4D33B4u);
    ctx->pc = 0x4D33B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D33ACu;
            // 0x4d33b0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D33B4u; }
        if (ctx->pc != 0x4D33B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D33B4u; }
        if (ctx->pc != 0x4D33B4u) { return; }
    }
    ctx->pc = 0x4D33B4u;
label_4d33b4:
    // 0x4d33b4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_4d33b8:
    if (ctx->pc == 0x4D33B8u) {
        ctx->pc = 0x4D33B8u;
            // 0x4d33b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D33BCu;
        goto label_4d33bc;
    }
    ctx->pc = 0x4D33B4u;
    {
        const bool branch_taken_0x4d33b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D33B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D33B4u;
            // 0x4d33b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d33b4) {
            ctx->pc = 0x4D3424u;
            goto label_4d3424;
        }
    }
    ctx->pc = 0x4D33BCu;
label_4d33bc:
    // 0x4d33bc: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x4d33bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4d33c0:
    // 0x4d33c0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4d33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4d33c4:
    // 0x4d33c4: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x4d33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_4d33c8:
    // 0x4d33c8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4d33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4d33cc:
    // 0x4d33cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d33d0:
    // 0x4d33d0: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x4d33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_4d33d4:
    // 0x4d33d4: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x4d33d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_4d33d8:
    // 0x4d33d8: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x4d33d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_4d33dc:
    // 0x4d33dc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4d33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4d33e0:
    // 0x4d33e0: 0x24a57c10  addiu       $a1, $a1, 0x7C10
    ctx->pc = 0x4d33e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31760));
label_4d33e4:
    // 0x4d33e4: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x4d33e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_4d33e8:
    // 0x4d33e8: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x4d33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_4d33ec:
    // 0x4d33ec: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x4d33ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_4d33f0:
    // 0x4d33f0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4d33f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4d33f4:
    // 0x4d33f4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4d33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_4d33f8:
    // 0x4d33f8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4d33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4d33fc:
    // 0x4d33fc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4d33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_4d3400:
    // 0x4d3400: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x4d3400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_4d3404:
    // 0x4d3404: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x4d3404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_4d3408:
    // 0x4d3408: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x4d3408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_4d340c:
    // 0x4d340c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x4d340cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_4d3410:
    // 0x4d3410: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x4d3410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_4d3414:
    // 0x4d3414: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4d3414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_4d3418:
    // 0x4d3418: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4d3418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4d341c:
    // 0x4d341c: 0xc04c968  jal         func_1325A0
label_4d3420:
    if (ctx->pc == 0x4D3420u) {
        ctx->pc = 0x4D3420u;
            // 0x4d3420: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D3424u;
        goto label_4d3424;
    }
    ctx->pc = 0x4D341Cu;
    SET_GPR_U32(ctx, 31, 0x4D3424u);
    ctx->pc = 0x4D3420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D341Cu;
            // 0x4d3420: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3424u; }
        if (ctx->pc != 0x4D3424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3424u; }
        if (ctx->pc != 0x4D3424u) { return; }
    }
    ctx->pc = 0x4D3424u;
label_4d3424:
    // 0x4d3424: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x4d3424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_4d3428:
    // 0x4d3428: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d3428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4d342c:
    // 0x4d342c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x4d342cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_4d3430:
    // 0x4d3430: 0x2409fffe  addiu       $t1, $zero, -0x2
    ctx->pc = 0x4d3430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4d3434:
    // 0x4d3434: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x4d3434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4d3438:
    // 0x4d3438: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4d3438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4d343c:
    // 0x4d343c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4d343cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d3440:
    // 0x4d3440: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x4d3440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
label_4d3444:
    // 0x4d3444: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x4d3444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
label_4d3448:
    // 0x4d3448: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x4d3448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_4d344c:
    // 0x4d344c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4d344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3450:
    // 0x4d3450: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x4d3450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4d3454:
    // 0x4d3454: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4d3454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d3458:
    // 0x4d3458: 0xae4400b0  sw          $a0, 0xB0($s2)
    ctx->pc = 0x4d3458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 4));
label_4d345c:
    // 0x4d345c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x4d345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4d3460:
    // 0x4d3460: 0x8e0a0060  lw          $t2, 0x60($s0)
    ctx->pc = 0x4d3460u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4d3464:
    // 0x4d3464: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4d3464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4d3468:
    // 0x4d3468: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x4d3468u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_4d346c:
    // 0x4d346c: 0xae090060  sw          $t1, 0x60($s0)
    ctx->pc = 0x4d346cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 9));
label_4d3470:
    // 0x4d3470: 0xae48008c  sw          $t0, 0x8C($s2)
    ctx->pc = 0x4d3470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 8));
label_4d3474:
    // 0x4d3474: 0xae470070  sw          $a3, 0x70($s2)
    ctx->pc = 0x4d3474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 7));
label_4d3478:
    // 0x4d3478: 0xae460078  sw          $a2, 0x78($s2)
    ctx->pc = 0x4d3478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 6));
label_4d347c:
    // 0x4d347c: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x4d347cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
label_4d3480:
    // 0x4d3480: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x4d3480u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_4d3484:
    // 0x4d3484: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x4d3484u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_4d3488:
    // 0x4d3488: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x4d3488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_4d348c:
    // 0x4d348c: 0xa248006b  sb          $t0, 0x6B($s2)
    ctx->pc = 0x4d348cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 8));
label_4d3490:
    // 0x4d3490: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x4d3490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4d3494:
    // 0x4d3494: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4d3494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3498:
    // 0x4d3498: 0xc040180  jal         func_100600
label_4d349c:
    if (ctx->pc == 0x4D349Cu) {
        ctx->pc = 0x4D349Cu;
            // 0x4d349c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x4D34A0u;
        goto label_4d34a0;
    }
    ctx->pc = 0x4D3498u;
    SET_GPR_U32(ctx, 31, 0x4D34A0u);
    ctx->pc = 0x4D349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3498u;
            // 0x4d349c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D34A0u; }
        if (ctx->pc != 0x4D34A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D34A0u; }
        if (ctx->pc != 0x4D34A0u) { return; }
    }
    ctx->pc = 0x4D34A0u;
label_4d34a0:
    // 0x4d34a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d34a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d34a4:
    // 0x4d34a4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4d34a8:
    if (ctx->pc == 0x4D34A8u) {
        ctx->pc = 0x4D34A8u;
            // 0x4d34a8: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4D34ACu;
        goto label_4d34ac;
    }
    ctx->pc = 0x4D34A4u;
    {
        const bool branch_taken_0x4d34a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d34a4) {
            ctx->pc = 0x4D34A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D34A4u;
            // 0x4d34a8: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D34E4u;
            goto label_4d34e4;
        }
    }
    ctx->pc = 0x4D34ACu;
label_4d34ac:
    // 0x4d34ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d34acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d34b0:
    // 0x4d34b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d34b4:
    // 0x4d34b4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4d34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4d34b8:
    // 0x4d34b8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4d34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4d34bc:
    // 0x4d34bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d34c0:
    // 0x4d34c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4d34c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4d34c4:
    // 0x4d34c4: 0xc040138  jal         func_1004E0
label_4d34c8:
    if (ctx->pc == 0x4D34C8u) {
        ctx->pc = 0x4D34C8u;
            // 0x4d34c8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4D34CCu;
        goto label_4d34cc;
    }
    ctx->pc = 0x4D34C4u;
    SET_GPR_U32(ctx, 31, 0x4D34CCu);
    ctx->pc = 0x4D34C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D34C4u;
            // 0x4d34c8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D34CCu; }
        if (ctx->pc != 0x4D34CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D34CCu; }
        if (ctx->pc != 0x4D34CCu) { return; }
    }
    ctx->pc = 0x4D34CCu;
label_4d34cc:
    // 0x4d34cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4d34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4d34d0:
    // 0x4d34d0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4d34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4d34d4:
    // 0x4d34d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d34d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d34d8:
    // 0x4d34d8: 0xc04a576  jal         func_1295D8
label_4d34dc:
    if (ctx->pc == 0x4D34DCu) {
        ctx->pc = 0x4D34DCu;
            // 0x4d34dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4D34E0u;
        goto label_4d34e0;
    }
    ctx->pc = 0x4D34D8u;
    SET_GPR_U32(ctx, 31, 0x4D34E0u);
    ctx->pc = 0x4D34DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D34D8u;
            // 0x4d34dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D34E0u; }
        if (ctx->pc != 0x4D34E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D34E0u; }
        if (ctx->pc != 0x4D34E0u) { return; }
    }
    ctx->pc = 0x4D34E0u;
label_4d34e0:
    // 0x4d34e0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4d34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4d34e4:
    // 0x4d34e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4d34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4d34e8:
    // 0x4d34e8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4d34e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4d34ec:
    // 0x4d34ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d34ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d34f0:
    // 0x4d34f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d34f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d34f4:
    // 0x4d34f4: 0x240610ae  addiu       $a2, $zero, 0x10AE
    ctx->pc = 0x4d34f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4270));
label_4d34f8:
    // 0x4d34f8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d34f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d34fc:
    // 0x4d34fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4d34fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3500:
    // 0x4d3500: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4d3500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4d3504:
    // 0x4d3504: 0xc122cd8  jal         func_48B360
label_4d3508:
    if (ctx->pc == 0x4D3508u) {
        ctx->pc = 0x4D3508u;
            // 0x4d3508: 0xae500160  sw          $s0, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 16));
        ctx->pc = 0x4D350Cu;
        goto label_4d350c;
    }
    ctx->pc = 0x4D3504u;
    SET_GPR_U32(ctx, 31, 0x4D350Cu);
    ctx->pc = 0x4D3508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3504u;
            // 0x4d3508: 0xae500160  sw          $s0, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D350Cu; }
        if (ctx->pc != 0x4D350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D350Cu; }
        if (ctx->pc != 0x4D350Cu) { return; }
    }
    ctx->pc = 0x4D350Cu;
label_4d350c:
    // 0x4d350c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4d350cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4d3510:
    // 0x4d3510: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4d3510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4d3514:
    // 0x4d3514: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4d3514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4d3518:
    // 0x4d3518: 0x8e440160  lw          $a0, 0x160($s2)
    ctx->pc = 0x4d3518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_4d351c:
    // 0x4d351c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4d351cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4d3520:
    // 0x4d3520: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d3520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4d3524:
    // 0x4d3524: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d3524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d3528:
    // 0x4d3528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d3528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d352c:
    // 0x4d352c: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4d352cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_4d3530:
    // 0x4d3530: 0xc122cd8  jal         func_48B360
label_4d3534:
    if (ctx->pc == 0x4D3534u) {
        ctx->pc = 0x4D3534u;
            // 0x4d3534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3538u;
        goto label_4d3538;
    }
    ctx->pc = 0x4D3530u;
    SET_GPR_U32(ctx, 31, 0x4D3538u);
    ctx->pc = 0x4D3534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3530u;
            // 0x4d3534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3538u; }
        if (ctx->pc != 0x4D3538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3538u; }
        if (ctx->pc != 0x4D3538u) { return; }
    }
    ctx->pc = 0x4D3538u;
label_4d3538:
    // 0x4d3538: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x4d3538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_4d353c:
    // 0x4d353c: 0xc04cc04  jal         func_133010
label_4d3540:
    if (ctx->pc == 0x4D3540u) {
        ctx->pc = 0x4D3540u;
            // 0x4d3540: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x4D3544u;
        goto label_4d3544;
    }
    ctx->pc = 0x4D353Cu;
    SET_GPR_U32(ctx, 31, 0x4D3544u);
    ctx->pc = 0x4D3540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D353Cu;
            // 0x4d3540: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3544u; }
        if (ctx->pc != 0x4D3544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3544u; }
        if (ctx->pc != 0x4D3544u) { return; }
    }
    ctx->pc = 0x4D3544u;
label_4d3544:
    // 0x4d3544: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x4d3544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4d3548:
    // 0x4d3548: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x4d3548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_4d354c:
    // 0x4d354c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4d354cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d3550:
    // 0x4d3550: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x4d3550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_4d3554:
    // 0x4d3554: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x4d3554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_4d3558:
    // 0x4d3558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d3558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d355c:
    // 0x4d355c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d355cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3560:
    // 0x4d3560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d3560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3564:
    // 0x4d3564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3568:
    // 0x4d3568: 0x3e00008  jr          $ra
label_4d356c:
    if (ctx->pc == 0x4D356Cu) {
        ctx->pc = 0x4D356Cu;
            // 0x4d356c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4D3570u;
        goto label_4d3570;
    }
    ctx->pc = 0x4D3568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3568u;
            // 0x4d356c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3570u;
label_4d3570:
    // 0x4d3570: 0x8c8800b0  lw          $t0, 0xB0($a0)
    ctx->pc = 0x4d3570u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_4d3574:
    // 0x4d3574: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4d3574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4d3578:
    // 0x4d3578: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4d3578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d357c:
    // 0x4d357c: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x4d357cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
label_4d3580:
    // 0x4d3580: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x4d3580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_4d3584:
    // 0x4d3584: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4d3584u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4d3588:
    // 0x4d3588: 0xac8800b0  sw          $t0, 0xB0($a0)
    ctx->pc = 0x4d3588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 8));
label_4d358c:
    // 0x4d358c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4d358cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4d3590:
    // 0x4d3590: 0xac87008c  sw          $a3, 0x8C($a0)
    ctx->pc = 0x4d3590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 7));
label_4d3594:
    // 0x4d3594: 0xac860070  sw          $a2, 0x70($a0)
    ctx->pc = 0x4d3594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 6));
label_4d3598:
    // 0x4d3598: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x4d3598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
label_4d359c:
    // 0x4d359c: 0x3e00008  jr          $ra
label_4d35a0:
    if (ctx->pc == 0x4D35A0u) {
        ctx->pc = 0x4D35A0u;
            // 0x4d35a0: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x4D35A4u;
        goto label_4d35a4;
    }
    ctx->pc = 0x4D359Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D35A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D359Cu;
            // 0x4d35a0: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D35A4u;
label_4d35a4:
    // 0x4d35a4: 0x0  nop
    ctx->pc = 0x4d35a4u;
    // NOP
label_4d35a8:
    // 0x4d35a8: 0x0  nop
    ctx->pc = 0x4d35a8u;
    // NOP
label_4d35ac:
    // 0x4d35ac: 0x0  nop
    ctx->pc = 0x4d35acu;
    // NOP
label_4d35b0:
    // 0x4d35b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4d35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4d35b4:
    // 0x4d35b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d35b8:
    // 0x4d35b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d35b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4d35bc:
    // 0x4d35bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4d35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4d35c0:
    // 0x4d35c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4d35c4:
    // 0x4d35c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d35c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d35c8:
    // 0x4d35c8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d35cc:
    // 0x4d35cc: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x4d35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4d35d0:
    // 0x4d35d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_4d35d4:
    if (ctx->pc == 0x4D35D4u) {
        ctx->pc = 0x4D35D4u;
            // 0x4d35d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D35D8u;
        goto label_4d35d8;
    }
    ctx->pc = 0x4D35D0u;
    {
        const bool branch_taken_0x4d35d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D35D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D35D0u;
            // 0x4d35d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d35d0) {
            ctx->pc = 0x4D35E0u;
            goto label_4d35e0;
        }
    }
    ctx->pc = 0x4D35D8u;
label_4d35d8:
    // 0x4d35d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_4d35dc:
    if (ctx->pc == 0x4D35DCu) {
        ctx->pc = 0x4D35DCu;
            // 0x4d35dc: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4D35E0u;
        goto label_4d35e0;
    }
    ctx->pc = 0x4D35D8u;
    {
        const bool branch_taken_0x4d35d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D35DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D35D8u;
            // 0x4d35dc: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d35d8) {
            ctx->pc = 0x4D3624u;
            goto label_4d3624;
        }
    }
    ctx->pc = 0x4D35E0u;
label_4d35e0:
    // 0x4d35e0: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x4d35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d35e4:
    // 0x4d35e4: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x4d35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4d35e8:
    // 0x4d35e8: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x4d35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4d35ec:
    // 0x4d35ec: 0xc04cbd8  jal         func_132F60
label_4d35f0:
    if (ctx->pc == 0x4D35F0u) {
        ctx->pc = 0x4D35F0u;
            // 0x4d35f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4D35F4u;
        goto label_4d35f4;
    }
    ctx->pc = 0x4D35ECu;
    SET_GPR_U32(ctx, 31, 0x4D35F4u);
    ctx->pc = 0x4D35F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D35ECu;
            // 0x4d35f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D35F4u; }
        if (ctx->pc != 0x4D35F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D35F4u; }
        if (ctx->pc != 0x4D35F4u) { return; }
    }
    ctx->pc = 0x4D35F4u;
label_4d35f4:
    // 0x4d35f4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x4d35f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d35f8:
    // 0x4d35f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d35f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d35fc:
    // 0x4d35fc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4d35fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4d3600:
    // 0x4d3600: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x4d3600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_4d3604:
    // 0x4d3604: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x4d3604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4d3608:
    // 0x4d3608: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4d3608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d360c:
    // 0x4d360c: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x4d360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4d3610:
    // 0x4d3610: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x4d3610u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_4d3614:
    // 0x4d3614: 0xc0bafb8  jal         func_2EBEE0
label_4d3618:
    if (ctx->pc == 0x4D3618u) {
        ctx->pc = 0x4D3618u;
            // 0x4d3618: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x4D361Cu;
        goto label_4d361c;
    }
    ctx->pc = 0x4D3614u;
    SET_GPR_U32(ctx, 31, 0x4D361Cu);
    ctx->pc = 0x4D3618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3614u;
            // 0x4d3618: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D361Cu; }
        if (ctx->pc != 0x4D361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D361Cu; }
        if (ctx->pc != 0x4D361Cu) { return; }
    }
    ctx->pc = 0x4D361Cu;
label_4d361c:
    // 0x4d361c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_4d3620:
    if (ctx->pc == 0x4D3620u) {
        ctx->pc = 0x4D3620u;
            // 0x4d3620: 0xc6010164  lwc1        $f1, 0x164($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4D3624u;
        goto label_4d3624;
    }
    ctx->pc = 0x4D361Cu;
    {
        const bool branch_taken_0x4d361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D361Cu;
            // 0x4d3620: 0xc6010164  lwc1        $f1, 0x164($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d361c) {
            ctx->pc = 0x4D3748u;
            goto label_4d3748;
        }
    }
    ctx->pc = 0x4D3624u;
label_4d3624:
    // 0x4d3624: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4d3624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3628:
    // 0x4d3628: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4d3628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d362c:
    // 0x4d362c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x4d362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_4d3630:
    // 0x4d3630: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d3630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3634:
    // 0x4d3634: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x4d3634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_4d3638:
    // 0x4d3638: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4d3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d363c:
    // 0x4d363c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x4d363cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4d3640:
    // 0x4d3640: 0xc04f278  jal         func_13C9E0
label_4d3644:
    if (ctx->pc == 0x4D3644u) {
        ctx->pc = 0x4D3644u;
            // 0x4d3644: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4D3648u;
        goto label_4d3648;
    }
    ctx->pc = 0x4D3640u;
    SET_GPR_U32(ctx, 31, 0x4D3648u);
    ctx->pc = 0x4D3644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3640u;
            // 0x4d3644: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3648u; }
        if (ctx->pc != 0x4D3648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3648u; }
        if (ctx->pc != 0x4D3648u) { return; }
    }
    ctx->pc = 0x4D3648u;
label_4d3648:
    // 0x4d3648: 0xc6220188  lwc1        $f2, 0x188($s1)
    ctx->pc = 0x4d3648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d364c:
    // 0x4d364c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x4d364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_4d3650:
    // 0x4d3650: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x4d3650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3654:
    // 0x4d3654: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x4d3654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4d3658:
    // 0x4d3658: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x4d3658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d365c:
    // 0x4d365c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4d365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4d3660:
    // 0x4d3660: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d3660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d3664:
    // 0x4d3664: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4d3664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3668:
    // 0x4d3668: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4d3668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4d366c:
    // 0x4d366c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x4d366cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4d3670:
    // 0x4d3670: 0xc04cb6c  jal         func_132DB0
label_4d3674:
    if (ctx->pc == 0x4D3674u) {
        ctx->pc = 0x4D3674u;
            // 0x4d3674: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x4D3678u;
        goto label_4d3678;
    }
    ctx->pc = 0x4D3670u;
    SET_GPR_U32(ctx, 31, 0x4D3678u);
    ctx->pc = 0x4D3674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3670u;
            // 0x4d3674: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3678u; }
        if (ctx->pc != 0x4D3678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3678u; }
        if (ctx->pc != 0x4D3678u) { return; }
    }
    ctx->pc = 0x4D3678u;
label_4d3678:
    // 0x4d3678: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4d3678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4d367c:
    // 0x4d367c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4d367cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4d3680:
    // 0x4d3680: 0x24c67cd0  addiu       $a2, $a2, 0x7CD0
    ctx->pc = 0x4d3680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31952));
label_4d3684:
    // 0x4d3684: 0xc04cafc  jal         func_132BF0
label_4d3688:
    if (ctx->pc == 0x4D3688u) {
        ctx->pc = 0x4D3688u;
            // 0x4d3688: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D368Cu;
        goto label_4d368c;
    }
    ctx->pc = 0x4D3684u;
    SET_GPR_U32(ctx, 31, 0x4D368Cu);
    ctx->pc = 0x4D3688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3684u;
            // 0x4d3688: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D368Cu; }
        if (ctx->pc != 0x4D368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D368Cu; }
        if (ctx->pc != 0x4D368Cu) { return; }
    }
    ctx->pc = 0x4D368Cu;
label_4d368c:
    // 0x4d368c: 0xc040180  jal         func_100600
label_4d3690:
    if (ctx->pc == 0x4D3690u) {
        ctx->pc = 0x4D3690u;
            // 0x4d3690: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x4D3694u;
        goto label_4d3694;
    }
    ctx->pc = 0x4D368Cu;
    SET_GPR_U32(ctx, 31, 0x4D3694u);
    ctx->pc = 0x4D3690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D368Cu;
            // 0x4d3690: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3694u; }
        if (ctx->pc != 0x4D3694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3694u; }
        if (ctx->pc != 0x4D3694u) { return; }
    }
    ctx->pc = 0x4D3694u;
label_4d3694:
    // 0x4d3694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d3694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d3698:
    // 0x4d3698: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_4d369c:
    if (ctx->pc == 0x4D369Cu) {
        ctx->pc = 0x4D36A0u;
        goto label_4d36a0;
    }
    ctx->pc = 0x4D3698u;
    {
        const bool branch_taken_0x4d3698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3698) {
            ctx->pc = 0x4D3744u;
            goto label_4d3744;
        }
    }
    ctx->pc = 0x4D36A0u;
label_4d36a0:
    // 0x4d36a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d36a4:
    // 0x4d36a4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4d36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4d36a8:
    // 0x4d36a8: 0xc4417d10  lwc1        $f1, 0x7D10($v0)
    ctx->pc = 0x4d36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d36ac:
    // 0x4d36ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4d36acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d36b0:
    // 0x4d36b0: 0x0  nop
    ctx->pc = 0x4d36b0u;
    // NOP
label_4d36b4:
    // 0x4d36b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d36b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d36b8:
    // 0x4d36b8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4d36bc:
    if (ctx->pc == 0x4D36BCu) {
        ctx->pc = 0x4D36BCu;
            // 0x4d36bc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4D36C0u;
        goto label_4d36c0;
    }
    ctx->pc = 0x4D36B8u;
    {
        const bool branch_taken_0x4d36b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d36b8) {
            ctx->pc = 0x4D36BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D36B8u;
            // 0x4d36bc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D36D0u;
            goto label_4d36d0;
        }
    }
    ctx->pc = 0x4D36C0u;
label_4d36c0:
    // 0x4d36c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d36c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4d36c4:
    // 0x4d36c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4d36c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4d36c8:
    // 0x4d36c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4d36cc:
    if (ctx->pc == 0x4D36CCu) {
        ctx->pc = 0x4D36D0u;
        goto label_4d36d0;
    }
    ctx->pc = 0x4D36C8u;
    {
        const bool branch_taken_0x4d36c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d36c8) {
            ctx->pc = 0x4D36E4u;
            goto label_4d36e4;
        }
    }
    ctx->pc = 0x4D36D0u;
label_4d36d0:
    // 0x4d36d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4d36d4:
    // 0x4d36d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d36d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4d36d8:
    // 0x4d36d8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4d36d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4d36dc:
    // 0x4d36dc: 0x0  nop
    ctx->pc = 0x4d36dcu;
    // NOP
label_4d36e0:
    // 0x4d36e0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4d36e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4d36e4:
    // 0x4d36e4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4d36e8:
    // 0x4d36e8: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x4d36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_4d36ec:
    // 0x4d36ec: 0x24637ce0  addiu       $v1, $v1, 0x7CE0
    ctx->pc = 0x4d36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31968));
label_4d36f0:
    // 0x4d36f0: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4d36f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_4d36f4:
    // 0x4d36f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4d36f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4d36f8:
    // 0x4d36f8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4d36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_4d36fc:
    // 0x4d36fc: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x4d36fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_4d3700:
    // 0x4d3700: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4d3700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4d3704:
    // 0x4d3704: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x4d3704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4d3708:
    // 0x4d3708: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x4d3708u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_4d370c:
    // 0x4d370c: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x4d370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_4d3710:
    // 0x4d3710: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4d3710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4d3714:
    // 0x4d3714: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4d3714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4d3718:
    // 0x4d3718: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4d3718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d371c:
    // 0x4d371c: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x4d371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d3720:
    // 0x4d3720: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x4d3720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d3724:
    // 0x4d3724: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4d3724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4d3728:
    // 0x4d3728: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x4d3728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4d372c:
    // 0x4d372c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4d372cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4d3730:
    // 0x4d3730: 0x25297cf0  addiu       $t1, $t1, 0x7CF0
    ctx->pc = 0x4d3730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31984));
label_4d3734:
    // 0x4d3734: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x4d3734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4d3738:
    // 0x4d3738: 0x254a7d00  addiu       $t2, $t2, 0x7D00
    ctx->pc = 0x4d3738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32000));
label_4d373c:
    // 0x4d373c: 0xc0db488  jal         func_36D220
label_4d3740:
    if (ctx->pc == 0x4D3740u) {
        ctx->pc = 0x4D3740u;
            // 0x4d3740: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4D3744u;
        goto label_4d3744;
    }
    ctx->pc = 0x4D373Cu;
    SET_GPR_U32(ctx, 31, 0x4D3744u);
    ctx->pc = 0x4D3740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D373Cu;
            // 0x4d3740: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3744u; }
        if (ctx->pc != 0x4D3744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3744u; }
        if (ctx->pc != 0x4D3744u) { return; }
    }
    ctx->pc = 0x4D3744u;
label_4d3744:
    // 0x4d3744: 0xc6010164  lwc1        $f1, 0x164($s0)
    ctx->pc = 0x4d3744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3748:
    // 0x4d3748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d3748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d374c:
    // 0x4d374c: 0x0  nop
    ctx->pc = 0x4d374cu;
    // NOP
label_4d3750:
    // 0x4d3750: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d3750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d3754:
    // 0x4d3754: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_4d3758:
    if (ctx->pc == 0x4D3758u) {
        ctx->pc = 0x4D3758u;
            // 0x4d3758: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4D375Cu;
        goto label_4d375c;
    }
    ctx->pc = 0x4D3754u;
    {
        const bool branch_taken_0x4d3754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d3754) {
            ctx->pc = 0x4D3758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3754u;
            // 0x4d3758: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3778u;
            goto label_4d3778;
        }
    }
    ctx->pc = 0x4D375Cu;
label_4d375c:
    // 0x4d375c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x4d375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_4d3760:
    // 0x4d3760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d3760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d3764:
    // 0x4d3764: 0xc122d2c  jal         func_48B4B0
label_4d3768:
    if (ctx->pc == 0x4D3768u) {
        ctx->pc = 0x4D3768u;
            // 0x4d3768: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4D376Cu;
        goto label_4d376c;
    }
    ctx->pc = 0x4D3764u;
    SET_GPR_U32(ctx, 31, 0x4D376Cu);
    ctx->pc = 0x4D3768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3764u;
            // 0x4d3768: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D376Cu; }
        if (ctx->pc != 0x4D376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D376Cu; }
        if (ctx->pc != 0x4D376Cu) { return; }
    }
    ctx->pc = 0x4D376Cu;
label_4d376c:
    // 0x4d376c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x4d376cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_4d3770:
    // 0x4d3770: 0xae030164  sw          $v1, 0x164($s0)
    ctx->pc = 0x4d3770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 3));
label_4d3774:
    // 0x4d3774: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d3774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d3778:
    // 0x4d3778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d3778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d377c:
    // 0x4d377c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d377cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3780:
    // 0x4d3780: 0x3e00008  jr          $ra
label_4d3784:
    if (ctx->pc == 0x4D3784u) {
        ctx->pc = 0x4D3784u;
            // 0x4d3784: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4D3788u;
        goto label_4d3788;
    }
    ctx->pc = 0x4D3780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3780u;
            // 0x4d3784: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3788u;
label_4d3788:
    // 0x4d3788: 0x0  nop
    ctx->pc = 0x4d3788u;
    // NOP
label_4d378c:
    // 0x4d378c: 0x0  nop
    ctx->pc = 0x4d378cu;
    // NOP
label_4d3790:
    // 0x4d3790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d3790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d3794:
    // 0x4d3794: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4d3794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4d3798:
    // 0x4d3798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d379c:
    // 0x4d379c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4d379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4d37a0:
    // 0x4d37a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d37a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d37a4:
    // 0x4d37a4: 0x24c67c88  addiu       $a2, $a2, 0x7C88
    ctx->pc = 0x4d37a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31880));
label_4d37a8:
    // 0x4d37a8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x4d37a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d37ac:
    // 0x4d37ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d37acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d37b0:
    // 0x4d37b0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x4d37b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d37b4:
    // 0x4d37b4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x4d37b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d37b8:
    // 0x4d37b8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4d37b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4d37bc:
    // 0x4d37bc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4d37bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4d37c0:
    // 0x4d37c0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4d37c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4d37c4:
    // 0x4d37c4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x4d37c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d37c8:
    // 0x4d37c8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x4d37c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d37cc:
    // 0x4d37cc: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x4d37ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d37d0:
    // 0x4d37d0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x4d37d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4d37d4:
    // 0x4d37d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4d37d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d37d8:
    // 0x4d37d8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4d37d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4d37dc:
    // 0x4d37dc: 0xc04cafc  jal         func_132BF0
label_4d37e0:
    if (ctx->pc == 0x4D37E0u) {
        ctx->pc = 0x4D37E0u;
            // 0x4d37e0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4D37E4u;
        goto label_4d37e4;
    }
    ctx->pc = 0x4D37DCu;
    SET_GPR_U32(ctx, 31, 0x4D37E4u);
    ctx->pc = 0x4D37E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D37DCu;
            // 0x4d37e0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D37E4u; }
        if (ctx->pc != 0x4D37E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D37E4u; }
        if (ctx->pc != 0x4D37E4u) { return; }
    }
    ctx->pc = 0x4D37E4u;
label_4d37e4:
    // 0x4d37e4: 0xc040180  jal         func_100600
label_4d37e8:
    if (ctx->pc == 0x4D37E8u) {
        ctx->pc = 0x4D37E8u;
            // 0x4d37e8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x4D37ECu;
        goto label_4d37ec;
    }
    ctx->pc = 0x4D37E4u;
    SET_GPR_U32(ctx, 31, 0x4D37ECu);
    ctx->pc = 0x4D37E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D37E4u;
            // 0x4d37e8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D37ECu; }
        if (ctx->pc != 0x4D37ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D37ECu; }
        if (ctx->pc != 0x4D37ECu) { return; }
    }
    ctx->pc = 0x4D37ECu;
label_4d37ec:
    // 0x4d37ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d37f0:
    // 0x4d37f0: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_4d37f4:
    if (ctx->pc == 0x4D37F4u) {
        ctx->pc = 0x4D37F4u;
            // 0x4d37f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4D37F8u;
        goto label_4d37f8;
    }
    ctx->pc = 0x4D37F0u;
    {
        const bool branch_taken_0x4d37f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d37f0) {
            ctx->pc = 0x4D37F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D37F0u;
            // 0x4d37f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D389Cu;
            goto label_4d389c;
        }
    }
    ctx->pc = 0x4D37F8u;
label_4d37f8:
    // 0x4d37f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d37fc:
    // 0x4d37fc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4d37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4d3800:
    // 0x4d3800: 0xc4417cc8  lwc1        $f1, 0x7CC8($v0)
    ctx->pc = 0x4d3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3804:
    // 0x4d3804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4d3804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d3808:
    // 0x4d3808: 0x0  nop
    ctx->pc = 0x4d3808u;
    // NOP
label_4d380c:
    // 0x4d380c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d380cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d3810:
    // 0x4d3810: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4d3814:
    if (ctx->pc == 0x4D3814u) {
        ctx->pc = 0x4D3814u;
            // 0x4d3814: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4D3818u;
        goto label_4d3818;
    }
    ctx->pc = 0x4D3810u;
    {
        const bool branch_taken_0x4d3810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d3810) {
            ctx->pc = 0x4D3814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3810u;
            // 0x4d3814: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3828u;
            goto label_4d3828;
        }
    }
    ctx->pc = 0x4D3818u;
label_4d3818:
    // 0x4d3818: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d3818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4d381c:
    // 0x4d381c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d381cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4d3820:
    // 0x4d3820: 0x10000006  b           . + 4 + (0x6 << 2)
label_4d3824:
    if (ctx->pc == 0x4D3824u) {
        ctx->pc = 0x4D3828u;
        goto label_4d3828;
    }
    ctx->pc = 0x4D3820u;
    {
        const bool branch_taken_0x4d3820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d3820) {
            ctx->pc = 0x4D383Cu;
            goto label_4d383c;
        }
    }
    ctx->pc = 0x4D3828u;
label_4d3828:
    // 0x4d3828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d3828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4d382c:
    // 0x4d382c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d382cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4d3830:
    // 0x4d3830: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d3830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4d3834:
    // 0x4d3834: 0x0  nop
    ctx->pc = 0x4d3834u;
    // NOP
label_4d3838:
    // 0x4d3838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d3838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d383c:
    // 0x4d383c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d3840:
    // 0x4d3840: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4d3840u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_4d3844:
    // 0x4d3844: 0x24427c98  addiu       $v0, $v0, 0x7C98
    ctx->pc = 0x4d3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31896));
label_4d3848:
    // 0x4d3848: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x4d3848u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_4d384c:
    // 0x4d384c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4d384cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4d3850:
    // 0x4d3850: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x4d3850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4d3854:
    // 0x4d3854: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x4d3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_4d3858:
    // 0x4d3858: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4d3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_4d385c:
    // 0x4d385c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d3860:
    // 0x4d3860: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4d3860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4d3864:
    // 0x4d3864: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x4d3864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_4d3868:
    // 0x4d3868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d3868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d386c:
    // 0x4d386c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4d386cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4d3870:
    // 0x4d3870: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x4d3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4d3874:
    // 0x4d3874: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4d3874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4d3878:
    // 0x4d3878: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4d3878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d387c:
    // 0x4d387c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x4d387cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4d3880:
    // 0x4d3880: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x4d3880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d3884:
    // 0x4d3884: 0x25297ca8  addiu       $t1, $t1, 0x7CA8
    ctx->pc = 0x4d3884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31912));
label_4d3888:
    // 0x4d3888: 0x254a7cb8  addiu       $t2, $t2, 0x7CB8
    ctx->pc = 0x4d3888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31928));
label_4d388c:
    // 0x4d388c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x4d388cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4d3890:
    // 0x4d3890: 0xc0db488  jal         func_36D220
label_4d3894:
    if (ctx->pc == 0x4D3894u) {
        ctx->pc = 0x4D3894u;
            // 0x4d3894: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4D3898u;
        goto label_4d3898;
    }
    ctx->pc = 0x4D3890u;
    SET_GPR_U32(ctx, 31, 0x4D3898u);
    ctx->pc = 0x4D3894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3890u;
            // 0x4d3894: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3898u; }
        if (ctx->pc != 0x4D3898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3898u; }
        if (ctx->pc != 0x4D3898u) { return; }
    }
    ctx->pc = 0x4D3898u;
label_4d3898:
    // 0x4d3898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d3898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d389c:
    // 0x4d389c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d389cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d38a0:
    // 0x4d38a0: 0x3e00008  jr          $ra
label_4d38a4:
    if (ctx->pc == 0x4D38A4u) {
        ctx->pc = 0x4D38A4u;
            // 0x4d38a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D38A8u;
        goto label_4d38a8;
    }
    ctx->pc = 0x4D38A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D38A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D38A0u;
            // 0x4d38a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D38A8u;
label_4d38a8:
    // 0x4d38a8: 0x0  nop
    ctx->pc = 0x4d38a8u;
    // NOP
label_4d38ac:
    // 0x4d38ac: 0x0  nop
    ctx->pc = 0x4d38acu;
    // NOP
label_4d38b0:
    // 0x4d38b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d38b4:
    // 0x4d38b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4d38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_4d38b8:
    // 0x4d38b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d38b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d38bc:
    // 0x4d38bc: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x4d38bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4d38c0:
    // 0x4d38c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d38c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d38c4:
    // 0x4d38c4: 0x34630120  ori         $v1, $v1, 0x120
    ctx->pc = 0x4d38c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)288);
label_4d38c8:
    // 0x4d38c8: 0x8c8700b0  lw          $a3, 0xB0($a0)
    ctx->pc = 0x4d38c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_4d38cc:
    // 0x4d38cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d38d0:
    // 0x4d38d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d38d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d38d4:
    // 0x4d38d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d38d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d38d8:
    // 0x4d38d8: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x4d38d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_4d38dc:
    // 0x4d38dc: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x4d38dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_4d38e0:
    // 0x4d38e0: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x4d38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
label_4d38e4:
    // 0x4d38e4: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4d38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4d38e8:
    // 0x4d38e8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4d38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4d38ec:
    // 0x4d38ec: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d38f0:
    // 0x4d38f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4d38f4:
    // 0x4d38f4: 0xc08bff0  jal         func_22FFC0
label_4d38f8:
    if (ctx->pc == 0x4D38F8u) {
        ctx->pc = 0x4D38F8u;
            // 0x4d38f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D38FCu;
        goto label_4d38fc;
    }
    ctx->pc = 0x4D38F4u;
    SET_GPR_U32(ctx, 31, 0x4D38FCu);
    ctx->pc = 0x4D38F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D38F4u;
            // 0x4d38f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D38FCu; }
        if (ctx->pc != 0x4D38FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D38FCu; }
        if (ctx->pc != 0x4D38FCu) { return; }
    }
    ctx->pc = 0x4D38FCu;
label_4d38fc:
    // 0x4d38fc: 0x920300f0  lbu         $v1, 0xF0($s0)
    ctx->pc = 0x4d38fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
label_4d3900:
    // 0x4d3900: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_4d3904:
    if (ctx->pc == 0x4D3904u) {
        ctx->pc = 0x4D3904u;
            // 0x4d3904: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D3908u;
        goto label_4d3908;
    }
    ctx->pc = 0x4D3900u;
    {
        const bool branch_taken_0x4d3900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d3900) {
            ctx->pc = 0x4D3904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3900u;
            // 0x4d3904: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D3944u;
            goto label_4d3944;
        }
    }
    ctx->pc = 0x4D3908u;
label_4d3908:
    // 0x4d3908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d3908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d390c:
    // 0x4d390c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x4d390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_4d3910:
    // 0x4d3910: 0xa20200f0  sb          $v0, 0xF0($s0)
    ctx->pc = 0x4d3910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 2));
label_4d3914:
    // 0x4d3914: 0xc04f278  jal         func_13C9E0
label_4d3918:
    if (ctx->pc == 0x4D3918u) {
        ctx->pc = 0x4D3918u;
            // 0x4d3918: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4D391Cu;
        goto label_4d391c;
    }
    ctx->pc = 0x4D3914u;
    SET_GPR_U32(ctx, 31, 0x4D391Cu);
    ctx->pc = 0x4D3918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3914u;
            // 0x4d3918: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D391Cu; }
        if (ctx->pc != 0x4D391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D391Cu; }
        if (ctx->pc != 0x4D391Cu) { return; }
    }
    ctx->pc = 0x4D391Cu;
label_4d391c:
    // 0x4d391c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d3920:
    // 0x4d3920: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d3920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d3924:
    // 0x4d3924: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4d3924u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4d3928:
    // 0x4d3928: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x4d3928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_4d392c:
    // 0x4d392c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x4d392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_4d3930:
    // 0x4d3930: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4d3930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4d3934:
    // 0x4d3934: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d3934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3938:
    // 0x4d3938: 0xc0bb404  jal         func_2ED010
label_4d393c:
    if (ctx->pc == 0x4D393Cu) {
        ctx->pc = 0x4D393Cu;
            // 0x4d393c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4D3940u;
        goto label_4d3940;
    }
    ctx->pc = 0x4D3938u;
    SET_GPR_U32(ctx, 31, 0x4D3940u);
    ctx->pc = 0x4D393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3938u;
            // 0x4d393c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3940u; }
        if (ctx->pc != 0x4D3940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3940u; }
        if (ctx->pc != 0x4D3940u) { return; }
    }
    ctx->pc = 0x4D3940u;
label_4d3940:
    // 0x4d3940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d3940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3944:
    // 0x4d3944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3948:
    // 0x4d3948: 0x3e00008  jr          $ra
label_4d394c:
    if (ctx->pc == 0x4D394Cu) {
        ctx->pc = 0x4D394Cu;
            // 0x4d394c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D3950u;
        goto label_4d3950;
    }
    ctx->pc = 0x4D3948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3948u;
            // 0x4d394c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3950u;
label_4d3950:
    // 0x4d3950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d3950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d3954:
    // 0x4d3954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d3954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d3958:
    // 0x4d3958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d3958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d395c:
    // 0x4d395c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d3960:
    // 0x4d3960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d3960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d3964:
    // 0x4d3964: 0xc0ba938  jal         func_2EA4E0
label_4d3968:
    if (ctx->pc == 0x4D3968u) {
        ctx->pc = 0x4D3968u;
            // 0x4d3968: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4D396Cu;
        goto label_4d396c;
    }
    ctx->pc = 0x4D3964u;
    SET_GPR_U32(ctx, 31, 0x4D396Cu);
    ctx->pc = 0x4D3968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3964u;
            // 0x4d3968: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D396Cu; }
        if (ctx->pc != 0x4D396Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D396Cu; }
        if (ctx->pc != 0x4D396Cu) { return; }
    }
    ctx->pc = 0x4D396Cu;
label_4d396c:
    // 0x4d396c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x4d396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_4d3970:
    // 0x4d3970: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4d3970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4d3974:
    // 0x4d3974: 0xc122d2c  jal         func_48B4B0
label_4d3978:
    if (ctx->pc == 0x4D3978u) {
        ctx->pc = 0x4D3978u;
            // 0x4d3978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D397Cu;
        goto label_4d397c;
    }
    ctx->pc = 0x4D3974u;
    SET_GPR_U32(ctx, 31, 0x4D397Cu);
    ctx->pc = 0x4D3978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3974u;
            // 0x4d3978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D397Cu; }
        if (ctx->pc != 0x4D397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D397Cu; }
        if (ctx->pc != 0x4D397Cu) { return; }
    }
    ctx->pc = 0x4D397Cu;
label_4d397c:
    // 0x4d397c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3980:
    // 0x4d3980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3984:
    // 0x4d3984: 0x3e00008  jr          $ra
label_4d3988:
    if (ctx->pc == 0x4D3988u) {
        ctx->pc = 0x4D3988u;
            // 0x4d3988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D398Cu;
        goto label_4d398c;
    }
    ctx->pc = 0x4D3984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3984u;
            // 0x4d3988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D398Cu;
label_4d398c:
    // 0x4d398c: 0x0  nop
    ctx->pc = 0x4d398cu;
    // NOP
label_4d3990:
    // 0x4d3990: 0x3e00008  jr          $ra
label_4d3994:
    if (ctx->pc == 0x4D3994u) {
        ctx->pc = 0x4D3998u;
        goto label_4d3998;
    }
    ctx->pc = 0x4D3990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3998u;
label_4d3998:
    // 0x4d3998: 0x0  nop
    ctx->pc = 0x4d3998u;
    // NOP
label_4d399c:
    // 0x4d399c: 0x0  nop
    ctx->pc = 0x4d399cu;
    // NOP
label_4d39a0:
    // 0x4d39a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d39a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d39a4:
    // 0x4d39a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d39a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d39a8:
    // 0x4d39a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d39a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d39ac:
    // 0x4d39ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d39acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d39b0:
    // 0x4d39b0: 0xc0e393c  jal         func_38E4F0
label_4d39b4:
    if (ctx->pc == 0x4D39B4u) {
        ctx->pc = 0x4D39B4u;
            // 0x4d39b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4D39B8u;
        goto label_4d39b8;
    }
    ctx->pc = 0x4D39B0u;
    SET_GPR_U32(ctx, 31, 0x4D39B8u);
    ctx->pc = 0x4D39B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D39B0u;
            // 0x4d39b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D39B8u; }
        if (ctx->pc != 0x4D39B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D39B8u; }
        if (ctx->pc != 0x4D39B8u) { return; }
    }
    ctx->pc = 0x4D39B8u;
label_4d39b8:
    // 0x4d39b8: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x4d39b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4d39bc:
    // 0x4d39bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4d39c0:
    // 0x4d39c0: 0x34430101  ori         $v1, $v0, 0x101
    ctx->pc = 0x4d39c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_4d39c4:
    // 0x4d39c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d39c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d39c8:
    // 0x4d39c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d39cc:
    // 0x4d39cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4d39ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d39d0:
    // 0x4d39d0: 0xa22000f0  sb          $zero, 0xF0($s1)
    ctx->pc = 0x4d39d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 240), (uint8_t)GPR_U32(ctx, 0));
label_4d39d4:
    // 0x4d39d4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4d39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4d39d8:
    // 0x4d39d8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4d39d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4d39dc:
    // 0x4d39dc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4d39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4d39e0:
    // 0x4d39e0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4d39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4d39e4:
    // 0x4d39e4: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4d39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4d39e8:
    // 0x4d39e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d39ec:
    // 0x4d39ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4d39f0:
    // 0x4d39f0: 0xc08bff0  jal         func_22FFC0
label_4d39f4:
    if (ctx->pc == 0x4D39F4u) {
        ctx->pc = 0x4D39F4u;
            // 0x4d39f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D39F8u;
        goto label_4d39f8;
    }
    ctx->pc = 0x4D39F0u;
    SET_GPR_U32(ctx, 31, 0x4D39F8u);
    ctx->pc = 0x4D39F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D39F0u;
            // 0x4d39f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D39F8u; }
        if (ctx->pc != 0x4D39F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D39F8u; }
        if (ctx->pc != 0x4D39F8u) { return; }
    }
    ctx->pc = 0x4D39F8u;
label_4d39f8:
    // 0x4d39f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d39f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d39fc:
    // 0x4d39fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4d39fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d3a00:
    // 0x4d3a00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d3a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d3a04:
    // 0x4d3a04: 0xc08914c  jal         func_224530
label_4d3a08:
    if (ctx->pc == 0x4D3A08u) {
        ctx->pc = 0x4D3A08u;
            // 0x4d3a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3A0Cu;
        goto label_4d3a0c;
    }
    ctx->pc = 0x4D3A04u;
    SET_GPR_U32(ctx, 31, 0x4D3A0Cu);
    ctx->pc = 0x4D3A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3A04u;
            // 0x4d3a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A0Cu; }
        if (ctx->pc != 0x4D3A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A0Cu; }
        if (ctx->pc != 0x4D3A0Cu) { return; }
    }
    ctx->pc = 0x4D3A0Cu;
label_4d3a0c:
    // 0x4d3a0c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4d3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d3a10:
    // 0x4d3a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d3a14:
    // 0x4d3a14: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4d3a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3a18:
    // 0x4d3a18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4d3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d3a1c:
    // 0x4d3a1c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4d3a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3a20:
    // 0x4d3a20: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4d3a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4d3a24:
    // 0x4d3a24: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4d3a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4d3a28:
    // 0x4d3a28: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4d3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4d3a2c:
    // 0x4d3a2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4d3a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4d3a30:
    // 0x4d3a30: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4d3a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4d3a34:
    // 0x4d3a34: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4d3a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d3a38:
    // 0x4d3a38: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4d3a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d3a3c:
    // 0x4d3a3c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4d3a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d3a40:
    // 0x4d3a40: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4d3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d3a44:
    // 0x4d3a44: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4d3a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4d3a48:
    // 0x4d3a48: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4d3a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4d3a4c:
    // 0x4d3a4c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4d3a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4d3a50:
    // 0x4d3a50: 0xc0892b0  jal         func_224AC0
label_4d3a54:
    if (ctx->pc == 0x4D3A54u) {
        ctx->pc = 0x4D3A54u;
            // 0x4d3a54: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4D3A58u;
        goto label_4d3a58;
    }
    ctx->pc = 0x4D3A50u;
    SET_GPR_U32(ctx, 31, 0x4D3A58u);
    ctx->pc = 0x4D3A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3A50u;
            // 0x4d3a54: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A58u; }
        if (ctx->pc != 0x4D3A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A58u; }
        if (ctx->pc != 0x4D3A58u) { return; }
    }
    ctx->pc = 0x4D3A58u;
label_4d3a58:
    // 0x4d3a58: 0xc088b74  jal         func_222DD0
label_4d3a5c:
    if (ctx->pc == 0x4D3A5Cu) {
        ctx->pc = 0x4D3A5Cu;
            // 0x4d3a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3A60u;
        goto label_4d3a60;
    }
    ctx->pc = 0x4D3A58u;
    SET_GPR_U32(ctx, 31, 0x4D3A60u);
    ctx->pc = 0x4D3A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3A58u;
            // 0x4d3a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A60u; }
        if (ctx->pc != 0x4D3A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A60u; }
        if (ctx->pc != 0x4D3A60u) { return; }
    }
    ctx->pc = 0x4D3A60u;
label_4d3a60:
    // 0x4d3a60: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4d3a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4d3a64:
    // 0x4d3a64: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4d3a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4d3a68:
    // 0x4d3a68: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d3a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d3a6c:
    // 0x4d3a6c: 0x320f809  jalr        $t9
label_4d3a70:
    if (ctx->pc == 0x4D3A70u) {
        ctx->pc = 0x4D3A70u;
            // 0x4d3a70: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D3A74u;
        goto label_4d3a74;
    }
    ctx->pc = 0x4D3A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D3A74u);
        ctx->pc = 0x4D3A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3A6Cu;
            // 0x4d3a70: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D3A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A74u; }
            if (ctx->pc != 0x4D3A74u) { return; }
        }
        }
    }
    ctx->pc = 0x4D3A74u;
label_4d3a74:
    // 0x4d3a74: 0xc088b74  jal         func_222DD0
label_4d3a78:
    if (ctx->pc == 0x4D3A78u) {
        ctx->pc = 0x4D3A78u;
            // 0x4d3a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D3A7Cu;
        goto label_4d3a7c;
    }
    ctx->pc = 0x4D3A74u;
    SET_GPR_U32(ctx, 31, 0x4D3A7Cu);
    ctx->pc = 0x4D3A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3A74u;
            // 0x4d3a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A7Cu; }
        if (ctx->pc != 0x4D3A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A7Cu; }
        if (ctx->pc != 0x4D3A7Cu) { return; }
    }
    ctx->pc = 0x4D3A7Cu;
label_4d3a7c:
    // 0x4d3a7c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4d3a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4d3a80:
    // 0x4d3a80: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4d3a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4d3a84:
    // 0x4d3a84: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4d3a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4d3a88:
    // 0x4d3a88: 0x320f809  jalr        $t9
label_4d3a8c:
    if (ctx->pc == 0x4D3A8Cu) {
        ctx->pc = 0x4D3A8Cu;
            // 0x4d3a8c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D3A90u;
        goto label_4d3a90;
    }
    ctx->pc = 0x4D3A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D3A90u);
        ctx->pc = 0x4D3A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3A88u;
            // 0x4d3a8c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D3A90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D3A90u; }
            if (ctx->pc != 0x4D3A90u) { return; }
        }
        }
    }
    ctx->pc = 0x4D3A90u;
label_4d3a90:
    // 0x4d3a90: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4d3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4d3a94:
    // 0x4d3a94: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4d3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4d3a98:
    // 0x4d3a98: 0x34647084  ori         $a0, $v1, 0x7084
    ctx->pc = 0x4d3a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4d3a9c:
    // 0x4d3a9c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4d3a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4d3aa0:
    // 0x4d3aa0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x4d3aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4d3aa4:
    // 0x4d3aa4: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x4d3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_4d3aa8:
    // 0x4d3aa8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4d3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4d3aac:
    // 0x4d3aac: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x4d3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_4d3ab0:
    // 0x4d3ab0: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x4d3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_4d3ab4:
    // 0x4d3ab4: 0xc04cc04  jal         func_133010
label_4d3ab8:
    if (ctx->pc == 0x4D3AB8u) {
        ctx->pc = 0x4D3AB8u;
            // 0x4d3ab8: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x4D3ABCu;
        goto label_4d3abc;
    }
    ctx->pc = 0x4D3AB4u;
    SET_GPR_U32(ctx, 31, 0x4D3ABCu);
    ctx->pc = 0x4D3AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3AB4u;
            // 0x4d3ab8: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3ABCu; }
        if (ctx->pc != 0x4D3ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D3ABCu; }
        if (ctx->pc != 0x4D3ABCu) { return; }
    }
    ctx->pc = 0x4D3ABCu;
label_4d3abc:
    // 0x4d3abc: 0xae200164  sw          $zero, 0x164($s1)
    ctx->pc = 0x4d3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
label_4d3ac0:
    // 0x4d3ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d3ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d3ac4:
    // 0x4d3ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d3ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d3ac8:
    // 0x4d3ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d3ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3acc:
    // 0x4d3acc: 0x3e00008  jr          $ra
label_4d3ad0:
    if (ctx->pc == 0x4D3AD0u) {
        ctx->pc = 0x4D3AD0u;
            // 0x4d3ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D3AD4u;
        goto label_4d3ad4;
    }
    ctx->pc = 0x4D3ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D3ACCu;
            // 0x4d3ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D3AD4u;
label_4d3ad4:
    // 0x4d3ad4: 0x0  nop
    ctx->pc = 0x4d3ad4u;
    // NOP
label_4d3ad8:
    // 0x4d3ad8: 0x0  nop
    ctx->pc = 0x4d3ad8u;
    // NOP
label_4d3adc:
    // 0x4d3adc: 0x0  nop
    ctx->pc = 0x4d3adcu;
    // NOP
}
