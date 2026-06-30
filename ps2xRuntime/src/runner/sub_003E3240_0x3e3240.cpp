#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3240
// Address: 0x3e3240 - 0x3e38d0
void sub_003E3240_0x3e3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3240_0x3e3240");
#endif

    switch (ctx->pc) {
        case 0x3e3240u: goto label_3e3240;
        case 0x3e3244u: goto label_3e3244;
        case 0x3e3248u: goto label_3e3248;
        case 0x3e324cu: goto label_3e324c;
        case 0x3e3250u: goto label_3e3250;
        case 0x3e3254u: goto label_3e3254;
        case 0x3e3258u: goto label_3e3258;
        case 0x3e325cu: goto label_3e325c;
        case 0x3e3260u: goto label_3e3260;
        case 0x3e3264u: goto label_3e3264;
        case 0x3e3268u: goto label_3e3268;
        case 0x3e326cu: goto label_3e326c;
        case 0x3e3270u: goto label_3e3270;
        case 0x3e3274u: goto label_3e3274;
        case 0x3e3278u: goto label_3e3278;
        case 0x3e327cu: goto label_3e327c;
        case 0x3e3280u: goto label_3e3280;
        case 0x3e3284u: goto label_3e3284;
        case 0x3e3288u: goto label_3e3288;
        case 0x3e328cu: goto label_3e328c;
        case 0x3e3290u: goto label_3e3290;
        case 0x3e3294u: goto label_3e3294;
        case 0x3e3298u: goto label_3e3298;
        case 0x3e329cu: goto label_3e329c;
        case 0x3e32a0u: goto label_3e32a0;
        case 0x3e32a4u: goto label_3e32a4;
        case 0x3e32a8u: goto label_3e32a8;
        case 0x3e32acu: goto label_3e32ac;
        case 0x3e32b0u: goto label_3e32b0;
        case 0x3e32b4u: goto label_3e32b4;
        case 0x3e32b8u: goto label_3e32b8;
        case 0x3e32bcu: goto label_3e32bc;
        case 0x3e32c0u: goto label_3e32c0;
        case 0x3e32c4u: goto label_3e32c4;
        case 0x3e32c8u: goto label_3e32c8;
        case 0x3e32ccu: goto label_3e32cc;
        case 0x3e32d0u: goto label_3e32d0;
        case 0x3e32d4u: goto label_3e32d4;
        case 0x3e32d8u: goto label_3e32d8;
        case 0x3e32dcu: goto label_3e32dc;
        case 0x3e32e0u: goto label_3e32e0;
        case 0x3e32e4u: goto label_3e32e4;
        case 0x3e32e8u: goto label_3e32e8;
        case 0x3e32ecu: goto label_3e32ec;
        case 0x3e32f0u: goto label_3e32f0;
        case 0x3e32f4u: goto label_3e32f4;
        case 0x3e32f8u: goto label_3e32f8;
        case 0x3e32fcu: goto label_3e32fc;
        case 0x3e3300u: goto label_3e3300;
        case 0x3e3304u: goto label_3e3304;
        case 0x3e3308u: goto label_3e3308;
        case 0x3e330cu: goto label_3e330c;
        case 0x3e3310u: goto label_3e3310;
        case 0x3e3314u: goto label_3e3314;
        case 0x3e3318u: goto label_3e3318;
        case 0x3e331cu: goto label_3e331c;
        case 0x3e3320u: goto label_3e3320;
        case 0x3e3324u: goto label_3e3324;
        case 0x3e3328u: goto label_3e3328;
        case 0x3e332cu: goto label_3e332c;
        case 0x3e3330u: goto label_3e3330;
        case 0x3e3334u: goto label_3e3334;
        case 0x3e3338u: goto label_3e3338;
        case 0x3e333cu: goto label_3e333c;
        case 0x3e3340u: goto label_3e3340;
        case 0x3e3344u: goto label_3e3344;
        case 0x3e3348u: goto label_3e3348;
        case 0x3e334cu: goto label_3e334c;
        case 0x3e3350u: goto label_3e3350;
        case 0x3e3354u: goto label_3e3354;
        case 0x3e3358u: goto label_3e3358;
        case 0x3e335cu: goto label_3e335c;
        case 0x3e3360u: goto label_3e3360;
        case 0x3e3364u: goto label_3e3364;
        case 0x3e3368u: goto label_3e3368;
        case 0x3e336cu: goto label_3e336c;
        case 0x3e3370u: goto label_3e3370;
        case 0x3e3374u: goto label_3e3374;
        case 0x3e3378u: goto label_3e3378;
        case 0x3e337cu: goto label_3e337c;
        case 0x3e3380u: goto label_3e3380;
        case 0x3e3384u: goto label_3e3384;
        case 0x3e3388u: goto label_3e3388;
        case 0x3e338cu: goto label_3e338c;
        case 0x3e3390u: goto label_3e3390;
        case 0x3e3394u: goto label_3e3394;
        case 0x3e3398u: goto label_3e3398;
        case 0x3e339cu: goto label_3e339c;
        case 0x3e33a0u: goto label_3e33a0;
        case 0x3e33a4u: goto label_3e33a4;
        case 0x3e33a8u: goto label_3e33a8;
        case 0x3e33acu: goto label_3e33ac;
        case 0x3e33b0u: goto label_3e33b0;
        case 0x3e33b4u: goto label_3e33b4;
        case 0x3e33b8u: goto label_3e33b8;
        case 0x3e33bcu: goto label_3e33bc;
        case 0x3e33c0u: goto label_3e33c0;
        case 0x3e33c4u: goto label_3e33c4;
        case 0x3e33c8u: goto label_3e33c8;
        case 0x3e33ccu: goto label_3e33cc;
        case 0x3e33d0u: goto label_3e33d0;
        case 0x3e33d4u: goto label_3e33d4;
        case 0x3e33d8u: goto label_3e33d8;
        case 0x3e33dcu: goto label_3e33dc;
        case 0x3e33e0u: goto label_3e33e0;
        case 0x3e33e4u: goto label_3e33e4;
        case 0x3e33e8u: goto label_3e33e8;
        case 0x3e33ecu: goto label_3e33ec;
        case 0x3e33f0u: goto label_3e33f0;
        case 0x3e33f4u: goto label_3e33f4;
        case 0x3e33f8u: goto label_3e33f8;
        case 0x3e33fcu: goto label_3e33fc;
        case 0x3e3400u: goto label_3e3400;
        case 0x3e3404u: goto label_3e3404;
        case 0x3e3408u: goto label_3e3408;
        case 0x3e340cu: goto label_3e340c;
        case 0x3e3410u: goto label_3e3410;
        case 0x3e3414u: goto label_3e3414;
        case 0x3e3418u: goto label_3e3418;
        case 0x3e341cu: goto label_3e341c;
        case 0x3e3420u: goto label_3e3420;
        case 0x3e3424u: goto label_3e3424;
        case 0x3e3428u: goto label_3e3428;
        case 0x3e342cu: goto label_3e342c;
        case 0x3e3430u: goto label_3e3430;
        case 0x3e3434u: goto label_3e3434;
        case 0x3e3438u: goto label_3e3438;
        case 0x3e343cu: goto label_3e343c;
        case 0x3e3440u: goto label_3e3440;
        case 0x3e3444u: goto label_3e3444;
        case 0x3e3448u: goto label_3e3448;
        case 0x3e344cu: goto label_3e344c;
        case 0x3e3450u: goto label_3e3450;
        case 0x3e3454u: goto label_3e3454;
        case 0x3e3458u: goto label_3e3458;
        case 0x3e345cu: goto label_3e345c;
        case 0x3e3460u: goto label_3e3460;
        case 0x3e3464u: goto label_3e3464;
        case 0x3e3468u: goto label_3e3468;
        case 0x3e346cu: goto label_3e346c;
        case 0x3e3470u: goto label_3e3470;
        case 0x3e3474u: goto label_3e3474;
        case 0x3e3478u: goto label_3e3478;
        case 0x3e347cu: goto label_3e347c;
        case 0x3e3480u: goto label_3e3480;
        case 0x3e3484u: goto label_3e3484;
        case 0x3e3488u: goto label_3e3488;
        case 0x3e348cu: goto label_3e348c;
        case 0x3e3490u: goto label_3e3490;
        case 0x3e3494u: goto label_3e3494;
        case 0x3e3498u: goto label_3e3498;
        case 0x3e349cu: goto label_3e349c;
        case 0x3e34a0u: goto label_3e34a0;
        case 0x3e34a4u: goto label_3e34a4;
        case 0x3e34a8u: goto label_3e34a8;
        case 0x3e34acu: goto label_3e34ac;
        case 0x3e34b0u: goto label_3e34b0;
        case 0x3e34b4u: goto label_3e34b4;
        case 0x3e34b8u: goto label_3e34b8;
        case 0x3e34bcu: goto label_3e34bc;
        case 0x3e34c0u: goto label_3e34c0;
        case 0x3e34c4u: goto label_3e34c4;
        case 0x3e34c8u: goto label_3e34c8;
        case 0x3e34ccu: goto label_3e34cc;
        case 0x3e34d0u: goto label_3e34d0;
        case 0x3e34d4u: goto label_3e34d4;
        case 0x3e34d8u: goto label_3e34d8;
        case 0x3e34dcu: goto label_3e34dc;
        case 0x3e34e0u: goto label_3e34e0;
        case 0x3e34e4u: goto label_3e34e4;
        case 0x3e34e8u: goto label_3e34e8;
        case 0x3e34ecu: goto label_3e34ec;
        case 0x3e34f0u: goto label_3e34f0;
        case 0x3e34f4u: goto label_3e34f4;
        case 0x3e34f8u: goto label_3e34f8;
        case 0x3e34fcu: goto label_3e34fc;
        case 0x3e3500u: goto label_3e3500;
        case 0x3e3504u: goto label_3e3504;
        case 0x3e3508u: goto label_3e3508;
        case 0x3e350cu: goto label_3e350c;
        case 0x3e3510u: goto label_3e3510;
        case 0x3e3514u: goto label_3e3514;
        case 0x3e3518u: goto label_3e3518;
        case 0x3e351cu: goto label_3e351c;
        case 0x3e3520u: goto label_3e3520;
        case 0x3e3524u: goto label_3e3524;
        case 0x3e3528u: goto label_3e3528;
        case 0x3e352cu: goto label_3e352c;
        case 0x3e3530u: goto label_3e3530;
        case 0x3e3534u: goto label_3e3534;
        case 0x3e3538u: goto label_3e3538;
        case 0x3e353cu: goto label_3e353c;
        case 0x3e3540u: goto label_3e3540;
        case 0x3e3544u: goto label_3e3544;
        case 0x3e3548u: goto label_3e3548;
        case 0x3e354cu: goto label_3e354c;
        case 0x3e3550u: goto label_3e3550;
        case 0x3e3554u: goto label_3e3554;
        case 0x3e3558u: goto label_3e3558;
        case 0x3e355cu: goto label_3e355c;
        case 0x3e3560u: goto label_3e3560;
        case 0x3e3564u: goto label_3e3564;
        case 0x3e3568u: goto label_3e3568;
        case 0x3e356cu: goto label_3e356c;
        case 0x3e3570u: goto label_3e3570;
        case 0x3e3574u: goto label_3e3574;
        case 0x3e3578u: goto label_3e3578;
        case 0x3e357cu: goto label_3e357c;
        case 0x3e3580u: goto label_3e3580;
        case 0x3e3584u: goto label_3e3584;
        case 0x3e3588u: goto label_3e3588;
        case 0x3e358cu: goto label_3e358c;
        case 0x3e3590u: goto label_3e3590;
        case 0x3e3594u: goto label_3e3594;
        case 0x3e3598u: goto label_3e3598;
        case 0x3e359cu: goto label_3e359c;
        case 0x3e35a0u: goto label_3e35a0;
        case 0x3e35a4u: goto label_3e35a4;
        case 0x3e35a8u: goto label_3e35a8;
        case 0x3e35acu: goto label_3e35ac;
        case 0x3e35b0u: goto label_3e35b0;
        case 0x3e35b4u: goto label_3e35b4;
        case 0x3e35b8u: goto label_3e35b8;
        case 0x3e35bcu: goto label_3e35bc;
        case 0x3e35c0u: goto label_3e35c0;
        case 0x3e35c4u: goto label_3e35c4;
        case 0x3e35c8u: goto label_3e35c8;
        case 0x3e35ccu: goto label_3e35cc;
        case 0x3e35d0u: goto label_3e35d0;
        case 0x3e35d4u: goto label_3e35d4;
        case 0x3e35d8u: goto label_3e35d8;
        case 0x3e35dcu: goto label_3e35dc;
        case 0x3e35e0u: goto label_3e35e0;
        case 0x3e35e4u: goto label_3e35e4;
        case 0x3e35e8u: goto label_3e35e8;
        case 0x3e35ecu: goto label_3e35ec;
        case 0x3e35f0u: goto label_3e35f0;
        case 0x3e35f4u: goto label_3e35f4;
        case 0x3e35f8u: goto label_3e35f8;
        case 0x3e35fcu: goto label_3e35fc;
        case 0x3e3600u: goto label_3e3600;
        case 0x3e3604u: goto label_3e3604;
        case 0x3e3608u: goto label_3e3608;
        case 0x3e360cu: goto label_3e360c;
        case 0x3e3610u: goto label_3e3610;
        case 0x3e3614u: goto label_3e3614;
        case 0x3e3618u: goto label_3e3618;
        case 0x3e361cu: goto label_3e361c;
        case 0x3e3620u: goto label_3e3620;
        case 0x3e3624u: goto label_3e3624;
        case 0x3e3628u: goto label_3e3628;
        case 0x3e362cu: goto label_3e362c;
        case 0x3e3630u: goto label_3e3630;
        case 0x3e3634u: goto label_3e3634;
        case 0x3e3638u: goto label_3e3638;
        case 0x3e363cu: goto label_3e363c;
        case 0x3e3640u: goto label_3e3640;
        case 0x3e3644u: goto label_3e3644;
        case 0x3e3648u: goto label_3e3648;
        case 0x3e364cu: goto label_3e364c;
        case 0x3e3650u: goto label_3e3650;
        case 0x3e3654u: goto label_3e3654;
        case 0x3e3658u: goto label_3e3658;
        case 0x3e365cu: goto label_3e365c;
        case 0x3e3660u: goto label_3e3660;
        case 0x3e3664u: goto label_3e3664;
        case 0x3e3668u: goto label_3e3668;
        case 0x3e366cu: goto label_3e366c;
        case 0x3e3670u: goto label_3e3670;
        case 0x3e3674u: goto label_3e3674;
        case 0x3e3678u: goto label_3e3678;
        case 0x3e367cu: goto label_3e367c;
        case 0x3e3680u: goto label_3e3680;
        case 0x3e3684u: goto label_3e3684;
        case 0x3e3688u: goto label_3e3688;
        case 0x3e368cu: goto label_3e368c;
        case 0x3e3690u: goto label_3e3690;
        case 0x3e3694u: goto label_3e3694;
        case 0x3e3698u: goto label_3e3698;
        case 0x3e369cu: goto label_3e369c;
        case 0x3e36a0u: goto label_3e36a0;
        case 0x3e36a4u: goto label_3e36a4;
        case 0x3e36a8u: goto label_3e36a8;
        case 0x3e36acu: goto label_3e36ac;
        case 0x3e36b0u: goto label_3e36b0;
        case 0x3e36b4u: goto label_3e36b4;
        case 0x3e36b8u: goto label_3e36b8;
        case 0x3e36bcu: goto label_3e36bc;
        case 0x3e36c0u: goto label_3e36c0;
        case 0x3e36c4u: goto label_3e36c4;
        case 0x3e36c8u: goto label_3e36c8;
        case 0x3e36ccu: goto label_3e36cc;
        case 0x3e36d0u: goto label_3e36d0;
        case 0x3e36d4u: goto label_3e36d4;
        case 0x3e36d8u: goto label_3e36d8;
        case 0x3e36dcu: goto label_3e36dc;
        case 0x3e36e0u: goto label_3e36e0;
        case 0x3e36e4u: goto label_3e36e4;
        case 0x3e36e8u: goto label_3e36e8;
        case 0x3e36ecu: goto label_3e36ec;
        case 0x3e36f0u: goto label_3e36f0;
        case 0x3e36f4u: goto label_3e36f4;
        case 0x3e36f8u: goto label_3e36f8;
        case 0x3e36fcu: goto label_3e36fc;
        case 0x3e3700u: goto label_3e3700;
        case 0x3e3704u: goto label_3e3704;
        case 0x3e3708u: goto label_3e3708;
        case 0x3e370cu: goto label_3e370c;
        case 0x3e3710u: goto label_3e3710;
        case 0x3e3714u: goto label_3e3714;
        case 0x3e3718u: goto label_3e3718;
        case 0x3e371cu: goto label_3e371c;
        case 0x3e3720u: goto label_3e3720;
        case 0x3e3724u: goto label_3e3724;
        case 0x3e3728u: goto label_3e3728;
        case 0x3e372cu: goto label_3e372c;
        case 0x3e3730u: goto label_3e3730;
        case 0x3e3734u: goto label_3e3734;
        case 0x3e3738u: goto label_3e3738;
        case 0x3e373cu: goto label_3e373c;
        case 0x3e3740u: goto label_3e3740;
        case 0x3e3744u: goto label_3e3744;
        case 0x3e3748u: goto label_3e3748;
        case 0x3e374cu: goto label_3e374c;
        case 0x3e3750u: goto label_3e3750;
        case 0x3e3754u: goto label_3e3754;
        case 0x3e3758u: goto label_3e3758;
        case 0x3e375cu: goto label_3e375c;
        case 0x3e3760u: goto label_3e3760;
        case 0x3e3764u: goto label_3e3764;
        case 0x3e3768u: goto label_3e3768;
        case 0x3e376cu: goto label_3e376c;
        case 0x3e3770u: goto label_3e3770;
        case 0x3e3774u: goto label_3e3774;
        case 0x3e3778u: goto label_3e3778;
        case 0x3e377cu: goto label_3e377c;
        case 0x3e3780u: goto label_3e3780;
        case 0x3e3784u: goto label_3e3784;
        case 0x3e3788u: goto label_3e3788;
        case 0x3e378cu: goto label_3e378c;
        case 0x3e3790u: goto label_3e3790;
        case 0x3e3794u: goto label_3e3794;
        case 0x3e3798u: goto label_3e3798;
        case 0x3e379cu: goto label_3e379c;
        case 0x3e37a0u: goto label_3e37a0;
        case 0x3e37a4u: goto label_3e37a4;
        case 0x3e37a8u: goto label_3e37a8;
        case 0x3e37acu: goto label_3e37ac;
        case 0x3e37b0u: goto label_3e37b0;
        case 0x3e37b4u: goto label_3e37b4;
        case 0x3e37b8u: goto label_3e37b8;
        case 0x3e37bcu: goto label_3e37bc;
        case 0x3e37c0u: goto label_3e37c0;
        case 0x3e37c4u: goto label_3e37c4;
        case 0x3e37c8u: goto label_3e37c8;
        case 0x3e37ccu: goto label_3e37cc;
        case 0x3e37d0u: goto label_3e37d0;
        case 0x3e37d4u: goto label_3e37d4;
        case 0x3e37d8u: goto label_3e37d8;
        case 0x3e37dcu: goto label_3e37dc;
        case 0x3e37e0u: goto label_3e37e0;
        case 0x3e37e4u: goto label_3e37e4;
        case 0x3e37e8u: goto label_3e37e8;
        case 0x3e37ecu: goto label_3e37ec;
        case 0x3e37f0u: goto label_3e37f0;
        case 0x3e37f4u: goto label_3e37f4;
        case 0x3e37f8u: goto label_3e37f8;
        case 0x3e37fcu: goto label_3e37fc;
        case 0x3e3800u: goto label_3e3800;
        case 0x3e3804u: goto label_3e3804;
        case 0x3e3808u: goto label_3e3808;
        case 0x3e380cu: goto label_3e380c;
        case 0x3e3810u: goto label_3e3810;
        case 0x3e3814u: goto label_3e3814;
        case 0x3e3818u: goto label_3e3818;
        case 0x3e381cu: goto label_3e381c;
        case 0x3e3820u: goto label_3e3820;
        case 0x3e3824u: goto label_3e3824;
        case 0x3e3828u: goto label_3e3828;
        case 0x3e382cu: goto label_3e382c;
        case 0x3e3830u: goto label_3e3830;
        case 0x3e3834u: goto label_3e3834;
        case 0x3e3838u: goto label_3e3838;
        case 0x3e383cu: goto label_3e383c;
        case 0x3e3840u: goto label_3e3840;
        case 0x3e3844u: goto label_3e3844;
        case 0x3e3848u: goto label_3e3848;
        case 0x3e384cu: goto label_3e384c;
        case 0x3e3850u: goto label_3e3850;
        case 0x3e3854u: goto label_3e3854;
        case 0x3e3858u: goto label_3e3858;
        case 0x3e385cu: goto label_3e385c;
        case 0x3e3860u: goto label_3e3860;
        case 0x3e3864u: goto label_3e3864;
        case 0x3e3868u: goto label_3e3868;
        case 0x3e386cu: goto label_3e386c;
        case 0x3e3870u: goto label_3e3870;
        case 0x3e3874u: goto label_3e3874;
        case 0x3e3878u: goto label_3e3878;
        case 0x3e387cu: goto label_3e387c;
        case 0x3e3880u: goto label_3e3880;
        case 0x3e3884u: goto label_3e3884;
        case 0x3e3888u: goto label_3e3888;
        case 0x3e388cu: goto label_3e388c;
        case 0x3e3890u: goto label_3e3890;
        case 0x3e3894u: goto label_3e3894;
        case 0x3e3898u: goto label_3e3898;
        case 0x3e389cu: goto label_3e389c;
        case 0x3e38a0u: goto label_3e38a0;
        case 0x3e38a4u: goto label_3e38a4;
        case 0x3e38a8u: goto label_3e38a8;
        case 0x3e38acu: goto label_3e38ac;
        case 0x3e38b0u: goto label_3e38b0;
        case 0x3e38b4u: goto label_3e38b4;
        case 0x3e38b8u: goto label_3e38b8;
        case 0x3e38bcu: goto label_3e38bc;
        case 0x3e38c0u: goto label_3e38c0;
        case 0x3e38c4u: goto label_3e38c4;
        case 0x3e38c8u: goto label_3e38c8;
        case 0x3e38ccu: goto label_3e38cc;
        default: break;
    }

    ctx->pc = 0x3e3240u;

label_3e3240:
    // 0x3e3240: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3e3244:
    // 0x3e3244: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e3244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e3248:
    // 0x3e3248: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e324c:
    // 0x3e324c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e3250:
    // 0x3e3250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e3254:
    // 0x3e3254: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e3254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e3258:
    // 0x3e3258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e325c:
    // 0x3e325c: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x3e325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_3e3260:
    // 0x3e3260: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3e3260u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3e3264:
    // 0x3e3264: 0x1020016c  beqz        $at, . + 4 + (0x16C << 2)
label_3e3268:
    if (ctx->pc == 0x3E3268u) {
        ctx->pc = 0x3E3268u;
            // 0x3e3268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E326Cu;
        goto label_3e326c;
    }
    ctx->pc = 0x3E3264u;
    {
        const bool branch_taken_0x3e3264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3264u;
            // 0x3e3268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3264) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E326Cu;
label_3e326c:
    // 0x3e326c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e326cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3e3270:
    // 0x3e3270: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e3270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e3274:
    // 0x3e3274: 0x24849f80  addiu       $a0, $a0, -0x6080
    ctx->pc = 0x3e3274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942592));
label_3e3278:
    // 0x3e3278: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e327c:
    // 0x3e327c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e3280:
    // 0x3e3280: 0x600008  jr          $v1
label_3e3284:
    if (ctx->pc == 0x3E3284u) {
        ctx->pc = 0x3E3288u;
        goto label_3e3288;
    }
    ctx->pc = 0x3E3280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E3288u: goto label_3e3288;
            case 0x3E33A8u: goto label_3e33a8;
            case 0x3E33F4u: goto label_3e33f4;
            case 0x3E34DCu: goto label_3e34dc;
            case 0x3E3690u: goto label_3e3690;
            case 0x3E36E0u: goto label_3e36e0;
            case 0x3E3818u: goto label_3e3818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3E3288u;
label_3e3288:
    // 0x3e3288: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3e3288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3e328c:
    // 0x3e328c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e328cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e3290:
    // 0x3e3290: 0x24639e30  addiu       $v1, $v1, -0x61D0
    ctx->pc = 0x3e3290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942256));
label_3e3294:
    // 0x3e3294: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x3e3294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e3298:
    // 0x3e3298: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e3298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3e329c:
    // 0x3e329c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e32a0:
    // 0x3e32a0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3e32a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e32a4:
    // 0x3e32a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e32a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e32a8:
    // 0x3e32a8: 0x4503015c  bc1tl       . + 4 + (0x15C << 2)
label_3e32ac:
    if (ctx->pc == 0x3E32ACu) {
        ctx->pc = 0x3E32ACu;
            // 0x3e32ac: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x3E32B0u;
        goto label_3e32b0;
    }
    ctx->pc = 0x3E32A8u;
    {
        const bool branch_taken_0x3e32a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e32a8) {
            ctx->pc = 0x3E32ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E32A8u;
            // 0x3e32ac: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E381Cu;
            goto label_3e381c;
        }
    }
    ctx->pc = 0x3E32B0u;
label_3e32b0:
    // 0x3e32b0: 0x8e040354  lw          $a0, 0x354($s0)
    ctx->pc = 0x3e32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
label_3e32b4:
    // 0x3e32b4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3e32b8:
    if (ctx->pc == 0x3E32B8u) {
        ctx->pc = 0x3E32B8u;
            // 0x3e32b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E32BCu;
        goto label_3e32bc;
    }
    ctx->pc = 0x3E32B4u;
    {
        const bool branch_taken_0x3e32b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e32b4) {
            ctx->pc = 0x3E32B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E32B4u;
            // 0x3e32b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E32D4u;
            goto label_3e32d4;
        }
    }
    ctx->pc = 0x3E32BCu;
label_3e32bc:
    // 0x3e32bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e32bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e32c0:
    // 0x3e32c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3e32c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3e32c4:
    // 0x3e32c4: 0x320f809  jalr        $t9
label_3e32c8:
    if (ctx->pc == 0x3E32C8u) {
        ctx->pc = 0x3E32C8u;
            // 0x3e32c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E32CCu;
        goto label_3e32cc;
    }
    ctx->pc = 0x3E32C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E32CCu);
        ctx->pc = 0x3E32C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E32C4u;
            // 0x3e32c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E32CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E32CCu; }
            if (ctx->pc != 0x3E32CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3E32CCu;
label_3e32cc:
    // 0x3e32cc: 0xae000354  sw          $zero, 0x354($s0)
    ctx->pc = 0x3e32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
label_3e32d0:
    // 0x3e32d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e32d4:
    // 0x3e32d4: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3e32d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3e32d8:
    // 0x3e32d8: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x3e32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_3e32dc:
    // 0x3e32dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e32dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e32e0:
    // 0x3e32e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e32e4:
    // 0x3e32e4: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x3e32e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
label_3e32e8:
    // 0x3e32e8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e32e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e32ec:
    // 0x3e32ec: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3e32ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3e32f0:
    // 0x3e32f0: 0x8c710788  lw          $s1, 0x788($v1)
    ctx->pc = 0x3e32f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_3e32f4:
    // 0x3e32f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e32f8:
    // 0x3e32f8: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x3e32f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e32fc:
    // 0x3e32fc: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x3e32fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3e3300:
    // 0x3e3300: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e3300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e3304:
    // 0x3e3304: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3e3308:
    if (ctx->pc == 0x3E3308u) {
        ctx->pc = 0x3E3308u;
            // 0x3e3308: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3E330Cu;
        goto label_3e330c;
    }
    ctx->pc = 0x3E3304u;
    {
        const bool branch_taken_0x3e3304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E3308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3304u;
            // 0x3e3308: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3304) {
            ctx->pc = 0x3E3340u;
            goto label_3e3340;
        }
    }
    ctx->pc = 0x3E330Cu;
label_3e330c:
    // 0x3e330c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e3310:
    // 0x3e3310: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e3310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e3314:
    // 0x3e3314: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e3314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e3318:
    // 0x3e3318: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3e3318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3e331c:
    // 0x3e331c: 0x320f809  jalr        $t9
label_3e3320:
    if (ctx->pc == 0x3E3320u) {
        ctx->pc = 0x3E3320u;
            // 0x3e3320: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E3324u;
        goto label_3e3324;
    }
    ctx->pc = 0x3E331Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E3324u);
        ctx->pc = 0x3E3320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E331Cu;
            // 0x3e3320: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E3324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E3324u; }
            if (ctx->pc != 0x3E3324u) { return; }
        }
        }
    }
    ctx->pc = 0x3E3324u;
label_3e3324:
    // 0x3e3324: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e3324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e3328:
    // 0x3e3328: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e3328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e332c:
    // 0x3e332c: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3e332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3e3330:
    // 0x3e3330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e3334:
    // 0x3e3334: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e3338:
    if (ctx->pc == 0x3E3338u) {
        ctx->pc = 0x3E3338u;
            // 0x3e3338: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3E333Cu;
        goto label_3e333c;
    }
    ctx->pc = 0x3E3334u;
    {
        const bool branch_taken_0x3e3334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3334u;
            // 0x3e3338: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3334) {
            ctx->pc = 0x3E3350u;
            goto label_3e3350;
        }
    }
    ctx->pc = 0x3E333Cu;
label_3e333c:
    // 0x3e333c: 0x0  nop
    ctx->pc = 0x3e333cu;
    // NOP
label_3e3340:
    // 0x3e3340: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x3e3340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e3344:
    // 0x3e3344: 0x10200134  beqz        $at, . + 4 + (0x134 << 2)
label_3e3348:
    if (ctx->pc == 0x3E3348u) {
        ctx->pc = 0x3E334Cu;
        goto label_3e334c;
    }
    ctx->pc = 0x3E3344u;
    {
        const bool branch_taken_0x3e3344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3344) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E334Cu;
label_3e334c:
    // 0x3e334c: 0x0  nop
    ctx->pc = 0x3e334cu;
    // NOP
label_3e3350:
    // 0x3e3350: 0x268402c0  addiu       $a0, $s4, 0x2C0
    ctx->pc = 0x3e3350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
label_3e3354:
    // 0x3e3354: 0xc04cc1c  jal         func_133070
label_3e3358:
    if (ctx->pc == 0x3E3358u) {
        ctx->pc = 0x3E3358u;
            // 0x3e3358: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3E335Cu;
        goto label_3e335c;
    }
    ctx->pc = 0x3E3354u;
    SET_GPR_U32(ctx, 31, 0x3E335Cu);
    ctx->pc = 0x3E3358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3354u;
            // 0x3e3358: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E335Cu; }
        if (ctx->pc != 0x3E335Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E335Cu; }
        if (ctx->pc != 0x3E335Cu) { return; }
    }
    ctx->pc = 0x3E335Cu;
label_3e335c:
    // 0x3e335c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x3e335cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_3e3360:
    // 0x3e3360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e3360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e3364:
    // 0x3e3364: 0x0  nop
    ctx->pc = 0x3e3364u;
    // NOP
label_3e3368:
    // 0x3e3368: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e3368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e336c:
    // 0x3e336c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3e3370:
    if (ctx->pc == 0x3E3370u) {
        ctx->pc = 0x3E3374u;
        goto label_3e3374;
    }
    ctx->pc = 0x3E336Cu;
    {
        const bool branch_taken_0x3e336c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e336c) {
            ctx->pc = 0x3E3390u;
            goto label_3e3390;
        }
    }
    ctx->pc = 0x3E3374u;
label_3e3374:
    // 0x3e3374: 0x8e860d98  lw          $a2, 0xD98($s4)
    ctx->pc = 0x3e3374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_3e3378:
    // 0x3e3378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e3378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e337c:
    // 0x3e337c: 0x8e0501e0  lw          $a1, 0x1E0($s0)
    ctx->pc = 0x3e337cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_3e3380:
    // 0x3e3380: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e3384:
    // 0x3e3384: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e3384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3e3388:
    // 0x3e3388: 0xa0a400b0  sb          $a0, 0xB0($a1)
    ctx->pc = 0x3e3388u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 176), (uint8_t)GPR_U32(ctx, 4));
label_3e338c:
    // 0x3e338c: 0xa0a300b4  sb          $v1, 0xB4($a1)
    ctx->pc = 0x3e338cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 180), (uint8_t)GPR_U32(ctx, 3));
label_3e3390:
    // 0x3e3390: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e3390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e3394:
    // 0x3e3394: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x3e3394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3e3398:
    // 0x3e3398: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_3e339c:
    if (ctx->pc == 0x3E339Cu) {
        ctx->pc = 0x3E339Cu;
            // 0x3e339c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E33A0u;
        goto label_3e33a0;
    }
    ctx->pc = 0x3E3398u;
    {
        const bool branch_taken_0x3e3398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3398u;
            // 0x3e339c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3398) {
            ctx->pc = 0x3E32F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e32f4;
        }
    }
    ctx->pc = 0x3E33A0u;
label_3e33a0:
    // 0x3e33a0: 0x1000011d  b           . + 4 + (0x11D << 2)
label_3e33a4:
    if (ctx->pc == 0x3E33A4u) {
        ctx->pc = 0x3E33A8u;
        goto label_3e33a8;
    }
    ctx->pc = 0x3E33A0u;
    {
        const bool branch_taken_0x3e33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e33a0) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E33A8u;
label_3e33a8:
    // 0x3e33a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e33ac:
    // 0x3e33ac: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x3e33acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_3e33b0:
    // 0x3e33b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e33b4:
    // 0x3e33b4: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e33b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e33b8:
    // 0x3e33b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e33b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e33bc:
    // 0x3e33bc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e33c0:
    // 0x3e33c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3e33c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3e33c4:
    // 0x3e33c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e33c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e33c8:
    // 0x3e33c8: 0x45010113  bc1t        . + 4 + (0x113 << 2)
label_3e33cc:
    if (ctx->pc == 0x3E33CCu) {
        ctx->pc = 0x3E33CCu;
            // 0x3e33cc: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E33D0u;
        goto label_3e33d0;
    }
    ctx->pc = 0x3E33C8u;
    {
        const bool branch_taken_0x3e33c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E33CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E33C8u;
            // 0x3e33cc: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e33c8) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E33D0u;
label_3e33d0:
    // 0x3e33d0: 0xc072aaa  jal         func_1CAAA8
label_3e33d4:
    if (ctx->pc == 0x3E33D4u) {
        ctx->pc = 0x3E33D4u;
            // 0x3e33d4: 0x920402c0  lbu         $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->pc = 0x3E33D8u;
        goto label_3e33d8;
    }
    ctx->pc = 0x3E33D0u;
    SET_GPR_U32(ctx, 31, 0x3E33D8u);
    ctx->pc = 0x3E33D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E33D0u;
            // 0x3e33d4: 0x920402c0  lbu         $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E33D8u; }
        if (ctx->pc != 0x3E33D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E33D8u; }
        if (ctx->pc != 0x3E33D8u) { return; }
    }
    ctx->pc = 0x3E33D8u;
label_3e33d8:
    // 0x3e33d8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3e33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3e33dc:
    // 0x3e33dc: 0xc073234  jal         func_1CC8D0
label_3e33e0:
    if (ctx->pc == 0x3E33E0u) {
        ctx->pc = 0x3E33E0u;
            // 0x3e33e0: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E33E4u;
        goto label_3e33e4;
    }
    ctx->pc = 0x3E33DCu;
    SET_GPR_U32(ctx, 31, 0x3E33E4u);
    ctx->pc = 0x3E33E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E33DCu;
            // 0x3e33e0: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E33E4u; }
        if (ctx->pc != 0x3E33E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E33E4u; }
        if (ctx->pc != 0x3E33E4u) { return; }
    }
    ctx->pc = 0x3E33E4u;
label_3e33e4:
    // 0x3e33e4: 0xa20002d9  sb          $zero, 0x2D9($s0)
    ctx->pc = 0x3e33e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 729), (uint8_t)GPR_U32(ctx, 0));
label_3e33e8:
    // 0x3e33e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e33ec:
    // 0x3e33ec: 0x1000010a  b           . + 4 + (0x10A << 2)
label_3e33f0:
    if (ctx->pc == 0x3E33F0u) {
        ctx->pc = 0x3E33F0u;
            // 0x3e33f0: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->pc = 0x3E33F4u;
        goto label_3e33f4;
    }
    ctx->pc = 0x3E33ECu;
    {
        const bool branch_taken_0x3e33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E33F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E33ECu;
            // 0x3e33f0: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e33ec) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E33F4u;
label_3e33f4:
    // 0x3e33f4: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e33f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e33f8:
    // 0x3e33f8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3e33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3e33fc:
    // 0x3e33fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e33fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3400:
    // 0x3e3400: 0x0  nop
    ctx->pc = 0x3e3400u;
    // NOP
label_3e3404:
    // 0x3e3404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e3404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e3408:
    // 0x3e3408: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3e340c:
    if (ctx->pc == 0x3E340Cu) {
        ctx->pc = 0x3E340Cu;
            // 0x3e340c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E3410u;
        goto label_3e3410;
    }
    ctx->pc = 0x3E3408u;
    {
        const bool branch_taken_0x3e3408 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E340Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3408u;
            // 0x3e340c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3408) {
            ctx->pc = 0x3E3414u;
            goto label_3e3414;
        }
    }
    ctx->pc = 0x3E3410u;
label_3e3410:
    // 0x3e3410: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e3410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3414:
    // 0x3e3414: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3e3418:
    if (ctx->pc == 0x3E3418u) {
        ctx->pc = 0x3E3418u;
            // 0x3e3418: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3E341Cu;
        goto label_3e341c;
    }
    ctx->pc = 0x3E3414u;
    {
        const bool branch_taken_0x3e3414 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e3414) {
            ctx->pc = 0x3E3418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3414u;
            // 0x3e3418: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3428u;
            goto label_3e3428;
        }
    }
    ctx->pc = 0x3E341Cu;
label_3e341c:
    // 0x3e341c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e341cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3420:
    // 0x3e3420: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e3424:
    if (ctx->pc == 0x3E3424u) {
        ctx->pc = 0x3E3424u;
            // 0x3e3424: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3E3428u;
        goto label_3e3428;
    }
    ctx->pc = 0x3E3420u;
    {
        const bool branch_taken_0x3e3420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3420u;
            // 0x3e3424: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3420) {
            ctx->pc = 0x3E3440u;
            goto label_3e3440;
        }
    }
    ctx->pc = 0x3E3428u;
label_3e3428:
    // 0x3e3428: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e3428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3e342c:
    // 0x3e342c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e342cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e3430:
    // 0x3e3430: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e3430u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3434:
    // 0x3e3434: 0x0  nop
    ctx->pc = 0x3e3434u;
    // NOP
label_3e3438:
    // 0x3e3438: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3e3438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3e343c:
    // 0x3e343c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x3e343cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_3e3440:
    // 0x3e3440: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e3440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e3444:
    // 0x3e3444: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x3e3444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_3e3448:
    // 0x3e3448: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e3448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e344c:
    // 0x3e344c: 0xc602027c  lwc1        $f2, 0x27C($s0)
    ctx->pc = 0x3e344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e3450:
    // 0x3e3450: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e3450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e3454:
    // 0x3e3454: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e3454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3458:
    // 0x3e3458: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x3e3458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3e345c:
    // 0x3e345c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3e345cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3e3460:
    // 0x3e3460: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x3e3460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3e3464:
    // 0x3e3464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e3464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e3468:
    // 0x3e3468: 0x450100eb  bc1t        . + 4 + (0xEB << 2)
label_3e346c:
    if (ctx->pc == 0x3E346Cu) {
        ctx->pc = 0x3E346Cu;
            // 0x3e346c: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E3470u;
        goto label_3e3470;
    }
    ctx->pc = 0x3E3468u;
    {
        const bool branch_taken_0x3e3468 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3468u;
            // 0x3e346c: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3468) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E3470u;
label_3e3470:
    // 0x3e3470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e3474:
    // 0x3e3474: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x3e3474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_3e3478:
    // 0x3e3478: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e3478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e347c:
    // 0x3e347c: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x3e347cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e3480:
    // 0x3e3480: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e3480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e3484:
    // 0x3e3484: 0x8ca60788  lw          $a2, 0x788($a1)
    ctx->pc = 0x3e3484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
label_3e3488:
    // 0x3e3488: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x3e3488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e348c:
    // 0x3e348c: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x3e348cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3e3490:
    // 0x3e3490: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e3490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e3494:
    // 0x3e3494: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3e3498:
    if (ctx->pc == 0x3E3498u) {
        ctx->pc = 0x3E3498u;
            // 0x3e3498: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E349Cu;
        goto label_3e349c;
    }
    ctx->pc = 0x3E3494u;
    {
        const bool branch_taken_0x3e3494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E3498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3494u;
            // 0x3e3498: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3494) {
            ctx->pc = 0x3E34A8u;
            goto label_3e34a8;
        }
    }
    ctx->pc = 0x3E349Cu;
label_3e349c:
    // 0x3e349c: 0x2cc10003  sltiu       $at, $a2, 0x3
    ctx->pc = 0x3e349cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3e34a0:
    // 0x3e34a0: 0x102000dd  beqz        $at, . + 4 + (0xDD << 2)
label_3e34a4:
    if (ctx->pc == 0x3E34A4u) {
        ctx->pc = 0x3E34A8u;
        goto label_3e34a8;
    }
    ctx->pc = 0x3E34A0u;
    {
        const bool branch_taken_0x3e34a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e34a0) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E34A8u;
label_3e34a8:
    // 0x3e34a8: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x3e34a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_3e34ac:
    // 0x3e34ac: 0x24e70e80  addiu       $a3, $a3, 0xE80
    ctx->pc = 0x3e34acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
label_3e34b0:
    // 0x3e34b0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x3e34b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3e34b4:
    // 0x3e34b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3e34b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3e34b8:
    // 0x3e34b8: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x3e34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_3e34bc:
    // 0x3e34bc: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x3e34bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3e34c0:
    // 0x3e34c0: 0x8ca50d98  lw          $a1, 0xD98($a1)
    ctx->pc = 0x3e34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_3e34c4:
    // 0x3e34c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e34c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3e34c8:
    // 0x3e34c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e34cc:
    // 0x3e34cc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3e34d0:
    if (ctx->pc == 0x3E34D0u) {
        ctx->pc = 0x3E34D0u;
            // 0x3e34d0: 0xa08000b0  sb          $zero, 0xB0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E34D4u;
        goto label_3e34d4;
    }
    ctx->pc = 0x3E34CCu;
    {
        const bool branch_taken_0x3e34cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E34CCu;
            // 0x3e34d0: 0xa08000b0  sb          $zero, 0xB0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e34cc) {
            ctx->pc = 0x3E34B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e34b0;
        }
    }
    ctx->pc = 0x3E34D4u;
label_3e34d4:
    // 0x3e34d4: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_3e34d8:
    if (ctx->pc == 0x3E34D8u) {
        ctx->pc = 0x3E34DCu;
        goto label_3e34dc;
    }
    ctx->pc = 0x3E34D4u;
    {
        const bool branch_taken_0x3e34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e34d4) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E34DCu;
label_3e34dc:
    // 0x3e34dc: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3e34dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3e34e0:
    // 0x3e34e0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e34e4:
    // 0x3e34e4: 0x24639e38  addiu       $v1, $v1, -0x61C8
    ctx->pc = 0x3e34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942264));
label_3e34e8:
    // 0x3e34e8: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x3e34e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e34ec:
    // 0x3e34ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3e34f0:
    // 0x3e34f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e34f4:
    // 0x3e34f4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3e34f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e34f8:
    // 0x3e34f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e34f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e34fc:
    // 0x3e34fc: 0x450100c6  bc1t        . + 4 + (0xC6 << 2)
label_3e3500:
    if (ctx->pc == 0x3E3500u) {
        ctx->pc = 0x3E3504u;
        goto label_3e3504;
    }
    ctx->pc = 0x3E34FCu;
    {
        const bool branch_taken_0x3e34fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e34fc) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E3504u;
label_3e3504:
    // 0x3e3504: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e3508:
    // 0x3e3508: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e3508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e350c:
    // 0x3e350c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x3e350cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_3e3510:
    // 0x3e3510: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e3510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e3514:
    // 0x3e3514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e3514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e3518:
    // 0x3e3518: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x3e3518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_3e351c:
    // 0x3e351c: 0x8c53e360  lw          $s3, -0x1CA0($v0)
    ctx->pc = 0x3e351cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3e3520:
    // 0x3e3520: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e3520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e3524:
    // 0x3e3524: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3e3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3e3528:
    // 0x3e3528: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3e3528u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e352c:
    // 0x3e352c: 0x8e2202d4  lw          $v0, 0x2D4($s1)
    ctx->pc = 0x3e352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
label_3e3530:
    // 0x3e3530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e3530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e3534:
    // 0x3e3534: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e3534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e3538:
    // 0x3e3538: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x3e3538u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e353c:
    // 0x3e353c: 0xc04f278  jal         func_13C9E0
label_3e3540:
    if (ctx->pc == 0x3E3540u) {
        ctx->pc = 0x3E3540u;
            // 0x3e3540: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3E3544u;
        goto label_3e3544;
    }
    ctx->pc = 0x3E353Cu;
    SET_GPR_U32(ctx, 31, 0x3E3544u);
    ctx->pc = 0x3E3540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E353Cu;
            // 0x3e3540: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3544u; }
        if (ctx->pc != 0x3E3544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3544u; }
        if (ctx->pc != 0x3E3544u) { return; }
    }
    ctx->pc = 0x3E3544u;
label_3e3544:
    // 0x3e3544: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x3e3544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_3e3548:
    // 0x3e3548: 0xc04cce8  jal         func_1333A0
label_3e354c:
    if (ctx->pc == 0x3E354Cu) {
        ctx->pc = 0x3E354Cu;
            // 0x3e354c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E3550u;
        goto label_3e3550;
    }
    ctx->pc = 0x3E3548u;
    SET_GPR_U32(ctx, 31, 0x3E3550u);
    ctx->pc = 0x3E354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3548u;
            // 0x3e354c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3550u; }
        if (ctx->pc != 0x3E3550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3550u; }
        if (ctx->pc != 0x3E3550u) { return; }
    }
    ctx->pc = 0x3E3550u;
label_3e3550:
    // 0x3e3550: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e3550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e3554:
    // 0x3e3554: 0xc04ce80  jal         func_133A00
label_3e3558:
    if (ctx->pc == 0x3E3558u) {
        ctx->pc = 0x3E3558u;
            // 0x3e3558: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3E355Cu;
        goto label_3e355c;
    }
    ctx->pc = 0x3E3554u;
    SET_GPR_U32(ctx, 31, 0x3E355Cu);
    ctx->pc = 0x3E3558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3554u;
            // 0x3e3558: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E355Cu; }
        if (ctx->pc != 0x3E355Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E355Cu; }
        if (ctx->pc != 0x3E355Cu) { return; }
    }
    ctx->pc = 0x3E355Cu;
label_3e355c:
    // 0x3e355c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e355cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e3560:
    // 0x3e3560: 0xc62c0284  lwc1        $f12, 0x284($s1)
    ctx->pc = 0x3e3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e3564:
    // 0x3e3564: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e3564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e3568:
    // 0x3e3568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e3568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e356c:
    // 0x3e356c: 0xc0528ec  jal         func_14A3B0
label_3e3570:
    if (ctx->pc == 0x3E3570u) {
        ctx->pc = 0x3E3570u;
            // 0x3e3570: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E3574u;
        goto label_3e3574;
    }
    ctx->pc = 0x3E356Cu;
    SET_GPR_U32(ctx, 31, 0x3E3574u);
    ctx->pc = 0x3E3570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E356Cu;
            // 0x3e3570: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3574u; }
        if (ctx->pc != 0x3E3574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3574u; }
        if (ctx->pc != 0x3E3574u) { return; }
    }
    ctx->pc = 0x3E3574u;
label_3e3574:
    // 0x3e3574: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e3574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3e3578:
    // 0x3e3578: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x3e3578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_3e357c:
    // 0x3e357c: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x3e357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_3e3580:
    // 0x3e3580: 0xc04cca0  jal         func_133280
label_3e3584:
    if (ctx->pc == 0x3E3584u) {
        ctx->pc = 0x3E3584u;
            // 0x3e3584: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->pc = 0x3E3588u;
        goto label_3e3588;
    }
    ctx->pc = 0x3E3580u;
    SET_GPR_U32(ctx, 31, 0x3E3588u);
    ctx->pc = 0x3E3584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3580u;
            // 0x3e3584: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3588u; }
        if (ctx->pc != 0x3E3588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3588u; }
        if (ctx->pc != 0x3E3588u) { return; }
    }
    ctx->pc = 0x3E3588u;
label_3e3588:
    // 0x3e3588: 0x8e030354  lw          $v1, 0x354($s0)
    ctx->pc = 0x3e3588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
label_3e358c:
    // 0x3e358c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_3e3590:
    if (ctx->pc == 0x3E3590u) {
        ctx->pc = 0x3E3590u;
            // 0x3e3590: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x3E3594u;
        goto label_3e3594;
    }
    ctx->pc = 0x3E358Cu;
    {
        const bool branch_taken_0x3e358c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e358c) {
            ctx->pc = 0x3E3590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E358Cu;
            // 0x3e3590: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E35C0u;
            goto label_3e35c0;
        }
    }
    ctx->pc = 0x3E3594u;
label_3e3594:
    // 0x3e3594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e3598:
    // 0x3e3598: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e359c:
    // 0x3e359c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3e359cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3e35a0:
    // 0x3e35a0: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x3e35a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_3e35a4:
    // 0x3e35a4: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x3e35a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_3e35a8:
    // 0x3e35a8: 0x26070300  addiu       $a3, $s0, 0x300
    ctx->pc = 0x3e35a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_3e35ac:
    // 0x3e35ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e35acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e35b0:
    // 0x3e35b0: 0xc0bb0e8  jal         func_2EC3A0
label_3e35b4:
    if (ctx->pc == 0x3E35B4u) {
        ctx->pc = 0x3E35B4u;
            // 0x3e35b4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E35B8u;
        goto label_3e35b8;
    }
    ctx->pc = 0x3E35B0u;
    SET_GPR_U32(ctx, 31, 0x3E35B8u);
    ctx->pc = 0x3E35B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E35B0u;
            // 0x3e35b4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E35B8u; }
        if (ctx->pc != 0x3E35B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E35B8u; }
        if (ctx->pc != 0x3E35B8u) { return; }
    }
    ctx->pc = 0x3E35B8u;
label_3e35b8:
    // 0x3e35b8: 0xae020354  sw          $v0, 0x354($s0)
    ctx->pc = 0x3e35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 2));
label_3e35bc:
    // 0x3e35bc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3e35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3e35c0:
    // 0x3e35c0: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3e35c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3e35c4:
    // 0x3e35c4: 0xae03027c  sw          $v1, 0x27C($s0)
    ctx->pc = 0x3e35c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
label_3e35c8:
    // 0x3e35c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e35c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e35cc:
    // 0x3e35cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e35d0:
    // 0x3e35d0: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3e35d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3e35d4:
    // 0x3e35d4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e35d8:
    // 0x3e35d8: 0x8c710788  lw          $s1, 0x788($v1)
    ctx->pc = 0x3e35d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_3e35dc:
    // 0x3e35dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e35e0:
    // 0x3e35e0: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x3e35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e35e4:
    // 0x3e35e4: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x3e35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3e35e8:
    // 0x3e35e8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e35ec:
    // 0x3e35ec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3e35f0:
    if (ctx->pc == 0x3E35F0u) {
        ctx->pc = 0x3E35F0u;
            // 0x3e35f0: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3E35F4u;
        goto label_3e35f4;
    }
    ctx->pc = 0x3E35ECu;
    {
        const bool branch_taken_0x3e35ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E35F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E35ECu;
            // 0x3e35f0: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e35ec) {
            ctx->pc = 0x3E3628u;
            goto label_3e3628;
        }
    }
    ctx->pc = 0x3E35F4u;
label_3e35f4:
    // 0x3e35f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e35f8:
    // 0x3e35f8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e35f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e35fc:
    // 0x3e35fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e35fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e3600:
    // 0x3e3600: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3e3600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3e3604:
    // 0x3e3604: 0x320f809  jalr        $t9
label_3e3608:
    if (ctx->pc == 0x3E3608u) {
        ctx->pc = 0x3E3608u;
            // 0x3e3608: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E360Cu;
        goto label_3e360c;
    }
    ctx->pc = 0x3E3604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E360Cu);
        ctx->pc = 0x3E3608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3604u;
            // 0x3e3608: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E360Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E360Cu; }
            if (ctx->pc != 0x3E360Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E360Cu;
label_3e360c:
    // 0x3e360c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e360cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e3610:
    // 0x3e3610: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e3610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e3614:
    // 0x3e3614: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3e3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3e3618:
    // 0x3e3618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e361c:
    // 0x3e361c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e3620:
    if (ctx->pc == 0x3E3620u) {
        ctx->pc = 0x3E3620u;
            // 0x3e3620: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3E3624u;
        goto label_3e3624;
    }
    ctx->pc = 0x3E361Cu;
    {
        const bool branch_taken_0x3e361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E361Cu;
            // 0x3e3620: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e361c) {
            ctx->pc = 0x3E3638u;
            goto label_3e3638;
        }
    }
    ctx->pc = 0x3E3624u;
label_3e3624:
    // 0x3e3624: 0x0  nop
    ctx->pc = 0x3e3624u;
    // NOP
label_3e3628:
    // 0x3e3628: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x3e3628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e362c:
    // 0x3e362c: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
label_3e3630:
    if (ctx->pc == 0x3E3630u) {
        ctx->pc = 0x3E3634u;
        goto label_3e3634;
    }
    ctx->pc = 0x3E362Cu;
    {
        const bool branch_taken_0x3e362c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e362c) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E3634u;
label_3e3634:
    // 0x3e3634: 0x0  nop
    ctx->pc = 0x3e3634u;
    // NOP
label_3e3638:
    // 0x3e3638: 0x268402c0  addiu       $a0, $s4, 0x2C0
    ctx->pc = 0x3e3638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
label_3e363c:
    // 0x3e363c: 0xc04cc1c  jal         func_133070
label_3e3640:
    if (ctx->pc == 0x3E3640u) {
        ctx->pc = 0x3E3640u;
            // 0x3e3640: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3E3644u;
        goto label_3e3644;
    }
    ctx->pc = 0x3E363Cu;
    SET_GPR_U32(ctx, 31, 0x3E3644u);
    ctx->pc = 0x3E3640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E363Cu;
            // 0x3e3640: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3644u; }
        if (ctx->pc != 0x3E3644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3644u; }
        if (ctx->pc != 0x3E3644u) { return; }
    }
    ctx->pc = 0x3E3644u;
label_3e3644:
    // 0x3e3644: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x3e3644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_3e3648:
    // 0x3e3648: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e3648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e364c:
    // 0x3e364c: 0x0  nop
    ctx->pc = 0x3e364cu;
    // NOP
label_3e3650:
    // 0x3e3650: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e3650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e3654:
    // 0x3e3654: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3e3658:
    if (ctx->pc == 0x3E3658u) {
        ctx->pc = 0x3E365Cu;
        goto label_3e365c;
    }
    ctx->pc = 0x3E3654u;
    {
        const bool branch_taken_0x3e3654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e3654) {
            ctx->pc = 0x3E3678u;
            goto label_3e3678;
        }
    }
    ctx->pc = 0x3E365Cu;
label_3e365c:
    // 0x3e365c: 0x8e860d98  lw          $a2, 0xD98($s4)
    ctx->pc = 0x3e365cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_3e3660:
    // 0x3e3660: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e3660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e3664:
    // 0x3e3664: 0x8e0501e0  lw          $a1, 0x1E0($s0)
    ctx->pc = 0x3e3664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_3e3668:
    // 0x3e3668: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e366c:
    // 0x3e366c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e366cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3e3670:
    // 0x3e3670: 0xa0a400b0  sb          $a0, 0xB0($a1)
    ctx->pc = 0x3e3670u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 176), (uint8_t)GPR_U32(ctx, 4));
label_3e3674:
    // 0x3e3674: 0xa0a300b4  sb          $v1, 0xB4($a1)
    ctx->pc = 0x3e3674u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 180), (uint8_t)GPR_U32(ctx, 3));
label_3e3678:
    // 0x3e3678: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e3678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e367c:
    // 0x3e367c: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x3e367cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3e3680:
    // 0x3e3680: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_3e3684:
    if (ctx->pc == 0x3E3684u) {
        ctx->pc = 0x3E3684u;
            // 0x3e3684: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E3688u;
        goto label_3e3688;
    }
    ctx->pc = 0x3E3680u;
    {
        const bool branch_taken_0x3e3680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3680u;
            // 0x3e3684: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3680) {
            ctx->pc = 0x3E35DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e35dc;
        }
    }
    ctx->pc = 0x3E3688u;
label_3e3688:
    // 0x3e3688: 0x10000063  b           . + 4 + (0x63 << 2)
label_3e368c:
    if (ctx->pc == 0x3E368Cu) {
        ctx->pc = 0x3E3690u;
        goto label_3e3690;
    }
    ctx->pc = 0x3E3688u;
    {
        const bool branch_taken_0x3e3688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3688) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E3690u;
label_3e3690:
    // 0x3e3690: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e3690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e3694:
    // 0x3e3694: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x3e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_3e3698:
    // 0x3e3698: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e3698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e369c:
    // 0x3e369c: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e36a0:
    // 0x3e36a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e36a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e36a4:
    // 0x3e36a4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e36a8:
    // 0x3e36a8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e36a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3e36ac:
    // 0x3e36ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e36acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e36b0:
    // 0x3e36b0: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_3e36b4:
    if (ctx->pc == 0x3E36B4u) {
        ctx->pc = 0x3E36B4u;
            // 0x3e36b4: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E36B8u;
        goto label_3e36b8;
    }
    ctx->pc = 0x3E36B0u;
    {
        const bool branch_taken_0x3e36b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E36B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E36B0u;
            // 0x3e36b4: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36b0) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E36B8u;
label_3e36b8:
    // 0x3e36b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e36bc:
    // 0x3e36bc: 0xa20202d9  sb          $v0, 0x2D9($s0)
    ctx->pc = 0x3e36bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 729), (uint8_t)GPR_U32(ctx, 2));
label_3e36c0:
    // 0x3e36c0: 0xc072a56  jal         func_1CA958
label_3e36c4:
    if (ctx->pc == 0x3E36C4u) {
        ctx->pc = 0x3E36C4u;
            // 0x3e36c4: 0x920402c0  lbu         $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->pc = 0x3E36C8u;
        goto label_3e36c8;
    }
    ctx->pc = 0x3E36C0u;
    SET_GPR_U32(ctx, 31, 0x3E36C8u);
    ctx->pc = 0x3E36C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E36C0u;
            // 0x3e36c4: 0x920402c0  lbu         $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E36C8u; }
        if (ctx->pc != 0x3E36C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E36C8u; }
        if (ctx->pc != 0x3E36C8u) { return; }
    }
    ctx->pc = 0x3E36C8u;
label_3e36c8:
    // 0x3e36c8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3e36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3e36cc:
    // 0x3e36cc: 0xc073234  jal         func_1CC8D0
label_3e36d0:
    if (ctx->pc == 0x3E36D0u) {
        ctx->pc = 0x3E36D0u;
            // 0x3e36d0: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E36D4u;
        goto label_3e36d4;
    }
    ctx->pc = 0x3E36CCu;
    SET_GPR_U32(ctx, 31, 0x3E36D4u);
    ctx->pc = 0x3E36D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E36CCu;
            // 0x3e36d0: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E36D4u; }
        if (ctx->pc != 0x3E36D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E36D4u; }
        if (ctx->pc != 0x3E36D4u) { return; }
    }
    ctx->pc = 0x3E36D4u;
label_3e36d4:
    // 0x3e36d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e36d8:
    // 0x3e36d8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3e36dc:
    if (ctx->pc == 0x3E36DCu) {
        ctx->pc = 0x3E36DCu;
            // 0x3e36dc: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->pc = 0x3E36E0u;
        goto label_3e36e0;
    }
    ctx->pc = 0x3E36D8u;
    {
        const bool branch_taken_0x3e36d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E36D8u;
            // 0x3e36dc: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36d8) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E36E0u;
label_3e36e0:
    // 0x3e36e0: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e36e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e36e4:
    // 0x3e36e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e36e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e36e8:
    // 0x3e36e8: 0x0  nop
    ctx->pc = 0x3e36e8u;
    // NOP
label_3e36ec:
    // 0x3e36ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e36ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e36f0:
    // 0x3e36f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3e36f4:
    if (ctx->pc == 0x3E36F4u) {
        ctx->pc = 0x3E36F4u;
            // 0x3e36f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E36F8u;
        goto label_3e36f8;
    }
    ctx->pc = 0x3E36F0u;
    {
        const bool branch_taken_0x3e36f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E36F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E36F0u;
            // 0x3e36f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36f0) {
            ctx->pc = 0x3E36FCu;
            goto label_3e36fc;
        }
    }
    ctx->pc = 0x3E36F8u;
label_3e36f8:
    // 0x3e36f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e36f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e36fc:
    // 0x3e36fc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3e3700:
    if (ctx->pc == 0x3E3700u) {
        ctx->pc = 0x3E3700u;
            // 0x3e3700: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3E3704u;
        goto label_3e3704;
    }
    ctx->pc = 0x3E36FCu;
    {
        const bool branch_taken_0x3e36fc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e36fc) {
            ctx->pc = 0x3E3700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E36FCu;
            // 0x3e3700: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3710u;
            goto label_3e3710;
        }
    }
    ctx->pc = 0x3E3704u;
label_3e3704:
    // 0x3e3704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e3704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3708:
    // 0x3e3708: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e370c:
    if (ctx->pc == 0x3E370Cu) {
        ctx->pc = 0x3E370Cu;
            // 0x3e370c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3E3710u;
        goto label_3e3710;
    }
    ctx->pc = 0x3E3708u;
    {
        const bool branch_taken_0x3e3708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3708u;
            // 0x3e370c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3708) {
            ctx->pc = 0x3E3728u;
            goto label_3e3728;
        }
    }
    ctx->pc = 0x3E3710u;
label_3e3710:
    // 0x3e3710: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e3710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3e3714:
    // 0x3e3714: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e3714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e3718:
    // 0x3e3718: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e3718u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e371c:
    // 0x3e371c: 0x0  nop
    ctx->pc = 0x3e371cu;
    // NOP
label_3e3720:
    // 0x3e3720: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3e3720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3e3724:
    // 0x3e3724: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3e3724u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3e3728:
    // 0x3e3728: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e3728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e372c:
    // 0x3e372c: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e3730:
    // 0x3e3730: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e3730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e3734:
    // 0x3e3734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e3734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3738:
    // 0x3e3738: 0x0  nop
    ctx->pc = 0x3e3738u;
    // NOP
label_3e373c:
    // 0x3e373c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3e373cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e3740:
    // 0x3e3740: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3e3740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e3744:
    // 0x3e3744: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x3e3744u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3e3748:
    // 0x3e3748: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e3748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e374c:
    // 0x3e374c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_3e3750:
    if (ctx->pc == 0x3E3750u) {
        ctx->pc = 0x3E3750u;
            // 0x3e3750: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E3754u;
        goto label_3e3754;
    }
    ctx->pc = 0x3E374Cu;
    {
        const bool branch_taken_0x3e374c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E374Cu;
            // 0x3e3750: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e374c) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E3754u;
label_3e3754:
    // 0x3e3754: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x3e3754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
label_3e3758:
    // 0x3e3758: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e3758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e375c:
    // 0x3e375c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3e375cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3e3760:
    // 0x3e3760: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e3764:
    // 0x3e3764: 0x8c850e80  lw          $a1, 0xE80($a0)
    ctx->pc = 0x3e3764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_3e3768:
    // 0x3e3768: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e3768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3e376c:
    // 0x3e376c: 0x8ca60788  lw          $a2, 0x788($a1)
    ctx->pc = 0x3e376cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
label_3e3770:
    // 0x3e3770: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3e3770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e3774:
    // 0x3e3774: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_3e3778:
    if (ctx->pc == 0x3E3778u) {
        ctx->pc = 0x3E3778u;
            // 0x3e3778: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E377Cu;
        goto label_3e377c;
    }
    ctx->pc = 0x3E3774u;
    {
        const bool branch_taken_0x3e3774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3E3778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3774u;
            // 0x3e3778: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3774) {
            ctx->pc = 0x3E3788u;
            goto label_3e3788;
        }
    }
    ctx->pc = 0x3E377Cu;
label_3e377c:
    // 0x3e377c: 0x2cc10003  sltiu       $at, $a2, 0x3
    ctx->pc = 0x3e377cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3e3780:
    // 0x3e3780: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_3e3784:
    if (ctx->pc == 0x3E3784u) {
        ctx->pc = 0x3E3788u;
        goto label_3e3788;
    }
    ctx->pc = 0x3E3780u;
    {
        const bool branch_taken_0x3e3780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3780) {
            ctx->pc = 0x3E37B8u;
            goto label_3e37b8;
        }
    }
    ctx->pc = 0x3E3788u;
label_3e3788:
    // 0x3e3788: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x3e3788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_3e378c:
    // 0x3e378c: 0x24e70e80  addiu       $a3, $a3, 0xE80
    ctx->pc = 0x3e378cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
label_3e3790:
    // 0x3e3790: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x3e3790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3e3794:
    // 0x3e3794: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3e3794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3e3798:
    // 0x3e3798: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x3e3798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_3e379c:
    // 0x3e379c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x3e379cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3e37a0:
    // 0x3e37a0: 0x8ca50d98  lw          $a1, 0xD98($a1)
    ctx->pc = 0x3e37a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_3e37a4:
    // 0x3e37a4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e37a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3e37a8:
    // 0x3e37a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e37ac:
    // 0x3e37ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3e37b0:
    if (ctx->pc == 0x3E37B0u) {
        ctx->pc = 0x3E37B0u;
            // 0x3e37b0: 0xa08000b0  sb          $zero, 0xB0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E37B4u;
        goto label_3e37b4;
    }
    ctx->pc = 0x3E37ACu;
    {
        const bool branch_taken_0x3e37ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E37B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E37ACu;
            // 0x3e37b0: 0xa08000b0  sb          $zero, 0xB0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e37ac) {
            ctx->pc = 0x3E3790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e3790;
        }
    }
    ctx->pc = 0x3E37B4u;
label_3e37b4:
    // 0x3e37b4: 0x0  nop
    ctx->pc = 0x3e37b4u;
    // NOP
label_3e37b8:
    // 0x3e37b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e37bc:
    // 0x3e37bc: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x3e37bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_3e37c0:
    // 0x3e37c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e37c4:
    // 0x3e37c4: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x3e37c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e37c8:
    // 0x3e37c8: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x3e37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3e37cc:
    // 0x3e37cc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e37d0:
    // 0x3e37d0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_3e37d4:
    if (ctx->pc == 0x3E37D4u) {
        ctx->pc = 0x3E37D8u;
        goto label_3e37d8;
    }
    ctx->pc = 0x3E37D0u;
    {
        const bool branch_taken_0x3e37d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e37d0) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E37D8u;
label_3e37d8:
    // 0x3e37d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e37dc:
    // 0x3e37dc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e37e0:
    // 0x3e37e0: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x3e37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
label_3e37e4:
    // 0x3e37e4: 0x38640002  xori        $a0, $v1, 0x2
    ctx->pc = 0x3e37e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_3e37e8:
    // 0x3e37e8: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x3e37e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_3e37ec:
    // 0x3e37ec: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x3e37ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e37f0:
    // 0x3e37f0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3e37f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e37f4:
    // 0x3e37f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3e37f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e37f8:
    // 0x3e37f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3e37fc:
    if (ctx->pc == 0x3E37FCu) {
        ctx->pc = 0x3E3800u;
        goto label_3e3800;
    }
    ctx->pc = 0x3E37F8u;
    {
        const bool branch_taken_0x3e37f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e37f8) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E3800u;
label_3e3800:
    // 0x3e3800: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3e3800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3e3804:
    // 0x3e3804: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3e3808:
    if (ctx->pc == 0x3E3808u) {
        ctx->pc = 0x3E380Cu;
        goto label_3e380c;
    }
    ctx->pc = 0x3E3804u;
    {
        const bool branch_taken_0x3e3804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3804) {
            ctx->pc = 0x3E3818u;
            goto label_3e3818;
        }
    }
    ctx->pc = 0x3E380Cu;
label_3e380c:
    // 0x3e380c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e3810:
    // 0x3e3810: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x3e3810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_3e3814:
    // 0x3e3814: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x3e3814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_3e3818:
    // 0x3e3818: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x3e3818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3e381c:
    // 0x3e381c: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x3e381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e3820:
    // 0x3e3820: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x3e3820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_3e3824:
    // 0x3e3824: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e3824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3e3828:
    // 0x3e3828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e3828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e382c:
    // 0x3e382c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3e382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e3830:
    // 0x3e3830: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e3830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e3834:
    // 0x3e3834: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_3e3838:
    if (ctx->pc == 0x3E3838u) {
        ctx->pc = 0x3E3838u;
            // 0x3e3838: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3E383Cu;
        goto label_3e383c;
    }
    ctx->pc = 0x3E3834u;
    {
        const bool branch_taken_0x3e3834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e3834) {
            ctx->pc = 0x3E3838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3834u;
            // 0x3e3838: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E38ACu;
            goto label_3e38ac;
        }
    }
    ctx->pc = 0x3E383Cu;
label_3e383c:
    // 0x3e383c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e383cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e3840:
    // 0x3e3840: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e3840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e3844:
    // 0x3e3844: 0x38a30002  xori        $v1, $a1, 0x2
    ctx->pc = 0x3e3844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_3e3848:
    // 0x3e3848: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x3e3848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
label_3e384c:
    // 0x3e384c: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x3e384cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e3850:
    // 0x3e3850: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x3e3850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3e3854:
    // 0x3e3854: 0x3c034022  lui         $v1, 0x4022
    ctx->pc = 0x3e3854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16418 << 16));
label_3e3858:
    // 0x3e3858: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x3e3858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_3e385c:
    // 0x3e385c: 0x3465f685  ori         $a1, $v1, 0xF685
    ctx->pc = 0x3e385cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63109);
label_3e3860:
    // 0x3e3860: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x3e3860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_3e3864:
    // 0x3e3864: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e3864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e3868:
    // 0x3e3868: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3e3868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_3e386c:
    // 0x3e386c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3e386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e3870:
    // 0x3e3870: 0xae050280  sw          $a1, 0x280($s0)
    ctx->pc = 0x3e3870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 5));
label_3e3874:
    // 0x3e3874: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e3874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e3878:
    // 0x3e3878: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e3878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3e387c:
    // 0x3e387c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_3e3880:
    if (ctx->pc == 0x3E3880u) {
        ctx->pc = 0x3E3884u;
        goto label_3e3884;
    }
    ctx->pc = 0x3E387Cu;
    {
        const bool branch_taken_0x3e387c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e387c) {
            ctx->pc = 0x3E38A8u;
            goto label_3e38a8;
        }
    }
    ctx->pc = 0x3E3884u;
label_3e3884:
    // 0x3e3884: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e3884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e3888:
    // 0x3e3888: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3e3888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e388c:
    // 0x3e388c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e3890:
    // 0x3e3890: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x3e3890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
label_3e3894:
    // 0x3e3894: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_3e3898:
    if (ctx->pc == 0x3E3898u) {
        ctx->pc = 0x3E389Cu;
        goto label_3e389c;
    }
    ctx->pc = 0x3E3894u;
    {
        const bool branch_taken_0x3e3894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e3894) {
            ctx->pc = 0x3E38A8u;
            goto label_3e38a8;
        }
    }
    ctx->pc = 0x3E389Cu;
label_3e389c:
    // 0x3e389c: 0x3c034139  lui         $v1, 0x4139
    ctx->pc = 0x3e389cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16697 << 16));
label_3e38a0:
    // 0x3e38a0: 0x34632f68  ori         $v1, $v1, 0x2F68
    ctx->pc = 0x3e38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12136);
label_3e38a4:
    // 0x3e38a4: 0xae030280  sw          $v1, 0x280($s0)
    ctx->pc = 0x3e38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 3));
label_3e38a8:
    // 0x3e38a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e38a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e38ac:
    // 0x3e38ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e38acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e38b0:
    // 0x3e38b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e38b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e38b4:
    // 0x3e38b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e38b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e38b8:
    // 0x3e38b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e38b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e38bc:
    // 0x3e38bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e38bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e38c0:
    // 0x3e38c0: 0x3e00008  jr          $ra
label_3e38c4:
    if (ctx->pc == 0x3E38C4u) {
        ctx->pc = 0x3E38C4u;
            // 0x3e38c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3E38C8u;
        goto label_3e38c8;
    }
    ctx->pc = 0x3E38C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E38C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E38C0u;
            // 0x3e38c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E38C8u;
label_3e38c8:
    // 0x3e38c8: 0x0  nop
    ctx->pc = 0x3e38c8u;
    // NOP
label_3e38cc:
    // 0x3e38cc: 0x0  nop
    ctx->pc = 0x3e38ccu;
    // NOP
}
