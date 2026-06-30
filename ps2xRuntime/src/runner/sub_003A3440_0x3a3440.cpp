#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A3440
// Address: 0x3a3440 - 0x3a4ba0
void sub_003A3440_0x3a3440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3440_0x3a3440");
#endif

    switch (ctx->pc) {
        case 0x3a3440u: goto label_3a3440;
        case 0x3a3444u: goto label_3a3444;
        case 0x3a3448u: goto label_3a3448;
        case 0x3a344cu: goto label_3a344c;
        case 0x3a3450u: goto label_3a3450;
        case 0x3a3454u: goto label_3a3454;
        case 0x3a3458u: goto label_3a3458;
        case 0x3a345cu: goto label_3a345c;
        case 0x3a3460u: goto label_3a3460;
        case 0x3a3464u: goto label_3a3464;
        case 0x3a3468u: goto label_3a3468;
        case 0x3a346cu: goto label_3a346c;
        case 0x3a3470u: goto label_3a3470;
        case 0x3a3474u: goto label_3a3474;
        case 0x3a3478u: goto label_3a3478;
        case 0x3a347cu: goto label_3a347c;
        case 0x3a3480u: goto label_3a3480;
        case 0x3a3484u: goto label_3a3484;
        case 0x3a3488u: goto label_3a3488;
        case 0x3a348cu: goto label_3a348c;
        case 0x3a3490u: goto label_3a3490;
        case 0x3a3494u: goto label_3a3494;
        case 0x3a3498u: goto label_3a3498;
        case 0x3a349cu: goto label_3a349c;
        case 0x3a34a0u: goto label_3a34a0;
        case 0x3a34a4u: goto label_3a34a4;
        case 0x3a34a8u: goto label_3a34a8;
        case 0x3a34acu: goto label_3a34ac;
        case 0x3a34b0u: goto label_3a34b0;
        case 0x3a34b4u: goto label_3a34b4;
        case 0x3a34b8u: goto label_3a34b8;
        case 0x3a34bcu: goto label_3a34bc;
        case 0x3a34c0u: goto label_3a34c0;
        case 0x3a34c4u: goto label_3a34c4;
        case 0x3a34c8u: goto label_3a34c8;
        case 0x3a34ccu: goto label_3a34cc;
        case 0x3a34d0u: goto label_3a34d0;
        case 0x3a34d4u: goto label_3a34d4;
        case 0x3a34d8u: goto label_3a34d8;
        case 0x3a34dcu: goto label_3a34dc;
        case 0x3a34e0u: goto label_3a34e0;
        case 0x3a34e4u: goto label_3a34e4;
        case 0x3a34e8u: goto label_3a34e8;
        case 0x3a34ecu: goto label_3a34ec;
        case 0x3a34f0u: goto label_3a34f0;
        case 0x3a34f4u: goto label_3a34f4;
        case 0x3a34f8u: goto label_3a34f8;
        case 0x3a34fcu: goto label_3a34fc;
        case 0x3a3500u: goto label_3a3500;
        case 0x3a3504u: goto label_3a3504;
        case 0x3a3508u: goto label_3a3508;
        case 0x3a350cu: goto label_3a350c;
        case 0x3a3510u: goto label_3a3510;
        case 0x3a3514u: goto label_3a3514;
        case 0x3a3518u: goto label_3a3518;
        case 0x3a351cu: goto label_3a351c;
        case 0x3a3520u: goto label_3a3520;
        case 0x3a3524u: goto label_3a3524;
        case 0x3a3528u: goto label_3a3528;
        case 0x3a352cu: goto label_3a352c;
        case 0x3a3530u: goto label_3a3530;
        case 0x3a3534u: goto label_3a3534;
        case 0x3a3538u: goto label_3a3538;
        case 0x3a353cu: goto label_3a353c;
        case 0x3a3540u: goto label_3a3540;
        case 0x3a3544u: goto label_3a3544;
        case 0x3a3548u: goto label_3a3548;
        case 0x3a354cu: goto label_3a354c;
        case 0x3a3550u: goto label_3a3550;
        case 0x3a3554u: goto label_3a3554;
        case 0x3a3558u: goto label_3a3558;
        case 0x3a355cu: goto label_3a355c;
        case 0x3a3560u: goto label_3a3560;
        case 0x3a3564u: goto label_3a3564;
        case 0x3a3568u: goto label_3a3568;
        case 0x3a356cu: goto label_3a356c;
        case 0x3a3570u: goto label_3a3570;
        case 0x3a3574u: goto label_3a3574;
        case 0x3a3578u: goto label_3a3578;
        case 0x3a357cu: goto label_3a357c;
        case 0x3a3580u: goto label_3a3580;
        case 0x3a3584u: goto label_3a3584;
        case 0x3a3588u: goto label_3a3588;
        case 0x3a358cu: goto label_3a358c;
        case 0x3a3590u: goto label_3a3590;
        case 0x3a3594u: goto label_3a3594;
        case 0x3a3598u: goto label_3a3598;
        case 0x3a359cu: goto label_3a359c;
        case 0x3a35a0u: goto label_3a35a0;
        case 0x3a35a4u: goto label_3a35a4;
        case 0x3a35a8u: goto label_3a35a8;
        case 0x3a35acu: goto label_3a35ac;
        case 0x3a35b0u: goto label_3a35b0;
        case 0x3a35b4u: goto label_3a35b4;
        case 0x3a35b8u: goto label_3a35b8;
        case 0x3a35bcu: goto label_3a35bc;
        case 0x3a35c0u: goto label_3a35c0;
        case 0x3a35c4u: goto label_3a35c4;
        case 0x3a35c8u: goto label_3a35c8;
        case 0x3a35ccu: goto label_3a35cc;
        case 0x3a35d0u: goto label_3a35d0;
        case 0x3a35d4u: goto label_3a35d4;
        case 0x3a35d8u: goto label_3a35d8;
        case 0x3a35dcu: goto label_3a35dc;
        case 0x3a35e0u: goto label_3a35e0;
        case 0x3a35e4u: goto label_3a35e4;
        case 0x3a35e8u: goto label_3a35e8;
        case 0x3a35ecu: goto label_3a35ec;
        case 0x3a35f0u: goto label_3a35f0;
        case 0x3a35f4u: goto label_3a35f4;
        case 0x3a35f8u: goto label_3a35f8;
        case 0x3a35fcu: goto label_3a35fc;
        case 0x3a3600u: goto label_3a3600;
        case 0x3a3604u: goto label_3a3604;
        case 0x3a3608u: goto label_3a3608;
        case 0x3a360cu: goto label_3a360c;
        case 0x3a3610u: goto label_3a3610;
        case 0x3a3614u: goto label_3a3614;
        case 0x3a3618u: goto label_3a3618;
        case 0x3a361cu: goto label_3a361c;
        case 0x3a3620u: goto label_3a3620;
        case 0x3a3624u: goto label_3a3624;
        case 0x3a3628u: goto label_3a3628;
        case 0x3a362cu: goto label_3a362c;
        case 0x3a3630u: goto label_3a3630;
        case 0x3a3634u: goto label_3a3634;
        case 0x3a3638u: goto label_3a3638;
        case 0x3a363cu: goto label_3a363c;
        case 0x3a3640u: goto label_3a3640;
        case 0x3a3644u: goto label_3a3644;
        case 0x3a3648u: goto label_3a3648;
        case 0x3a364cu: goto label_3a364c;
        case 0x3a3650u: goto label_3a3650;
        case 0x3a3654u: goto label_3a3654;
        case 0x3a3658u: goto label_3a3658;
        case 0x3a365cu: goto label_3a365c;
        case 0x3a3660u: goto label_3a3660;
        case 0x3a3664u: goto label_3a3664;
        case 0x3a3668u: goto label_3a3668;
        case 0x3a366cu: goto label_3a366c;
        case 0x3a3670u: goto label_3a3670;
        case 0x3a3674u: goto label_3a3674;
        case 0x3a3678u: goto label_3a3678;
        case 0x3a367cu: goto label_3a367c;
        case 0x3a3680u: goto label_3a3680;
        case 0x3a3684u: goto label_3a3684;
        case 0x3a3688u: goto label_3a3688;
        case 0x3a368cu: goto label_3a368c;
        case 0x3a3690u: goto label_3a3690;
        case 0x3a3694u: goto label_3a3694;
        case 0x3a3698u: goto label_3a3698;
        case 0x3a369cu: goto label_3a369c;
        case 0x3a36a0u: goto label_3a36a0;
        case 0x3a36a4u: goto label_3a36a4;
        case 0x3a36a8u: goto label_3a36a8;
        case 0x3a36acu: goto label_3a36ac;
        case 0x3a36b0u: goto label_3a36b0;
        case 0x3a36b4u: goto label_3a36b4;
        case 0x3a36b8u: goto label_3a36b8;
        case 0x3a36bcu: goto label_3a36bc;
        case 0x3a36c0u: goto label_3a36c0;
        case 0x3a36c4u: goto label_3a36c4;
        case 0x3a36c8u: goto label_3a36c8;
        case 0x3a36ccu: goto label_3a36cc;
        case 0x3a36d0u: goto label_3a36d0;
        case 0x3a36d4u: goto label_3a36d4;
        case 0x3a36d8u: goto label_3a36d8;
        case 0x3a36dcu: goto label_3a36dc;
        case 0x3a36e0u: goto label_3a36e0;
        case 0x3a36e4u: goto label_3a36e4;
        case 0x3a36e8u: goto label_3a36e8;
        case 0x3a36ecu: goto label_3a36ec;
        case 0x3a36f0u: goto label_3a36f0;
        case 0x3a36f4u: goto label_3a36f4;
        case 0x3a36f8u: goto label_3a36f8;
        case 0x3a36fcu: goto label_3a36fc;
        case 0x3a3700u: goto label_3a3700;
        case 0x3a3704u: goto label_3a3704;
        case 0x3a3708u: goto label_3a3708;
        case 0x3a370cu: goto label_3a370c;
        case 0x3a3710u: goto label_3a3710;
        case 0x3a3714u: goto label_3a3714;
        case 0x3a3718u: goto label_3a3718;
        case 0x3a371cu: goto label_3a371c;
        case 0x3a3720u: goto label_3a3720;
        case 0x3a3724u: goto label_3a3724;
        case 0x3a3728u: goto label_3a3728;
        case 0x3a372cu: goto label_3a372c;
        case 0x3a3730u: goto label_3a3730;
        case 0x3a3734u: goto label_3a3734;
        case 0x3a3738u: goto label_3a3738;
        case 0x3a373cu: goto label_3a373c;
        case 0x3a3740u: goto label_3a3740;
        case 0x3a3744u: goto label_3a3744;
        case 0x3a3748u: goto label_3a3748;
        case 0x3a374cu: goto label_3a374c;
        case 0x3a3750u: goto label_3a3750;
        case 0x3a3754u: goto label_3a3754;
        case 0x3a3758u: goto label_3a3758;
        case 0x3a375cu: goto label_3a375c;
        case 0x3a3760u: goto label_3a3760;
        case 0x3a3764u: goto label_3a3764;
        case 0x3a3768u: goto label_3a3768;
        case 0x3a376cu: goto label_3a376c;
        case 0x3a3770u: goto label_3a3770;
        case 0x3a3774u: goto label_3a3774;
        case 0x3a3778u: goto label_3a3778;
        case 0x3a377cu: goto label_3a377c;
        case 0x3a3780u: goto label_3a3780;
        case 0x3a3784u: goto label_3a3784;
        case 0x3a3788u: goto label_3a3788;
        case 0x3a378cu: goto label_3a378c;
        case 0x3a3790u: goto label_3a3790;
        case 0x3a3794u: goto label_3a3794;
        case 0x3a3798u: goto label_3a3798;
        case 0x3a379cu: goto label_3a379c;
        case 0x3a37a0u: goto label_3a37a0;
        case 0x3a37a4u: goto label_3a37a4;
        case 0x3a37a8u: goto label_3a37a8;
        case 0x3a37acu: goto label_3a37ac;
        case 0x3a37b0u: goto label_3a37b0;
        case 0x3a37b4u: goto label_3a37b4;
        case 0x3a37b8u: goto label_3a37b8;
        case 0x3a37bcu: goto label_3a37bc;
        case 0x3a37c0u: goto label_3a37c0;
        case 0x3a37c4u: goto label_3a37c4;
        case 0x3a37c8u: goto label_3a37c8;
        case 0x3a37ccu: goto label_3a37cc;
        case 0x3a37d0u: goto label_3a37d0;
        case 0x3a37d4u: goto label_3a37d4;
        case 0x3a37d8u: goto label_3a37d8;
        case 0x3a37dcu: goto label_3a37dc;
        case 0x3a37e0u: goto label_3a37e0;
        case 0x3a37e4u: goto label_3a37e4;
        case 0x3a37e8u: goto label_3a37e8;
        case 0x3a37ecu: goto label_3a37ec;
        case 0x3a37f0u: goto label_3a37f0;
        case 0x3a37f4u: goto label_3a37f4;
        case 0x3a37f8u: goto label_3a37f8;
        case 0x3a37fcu: goto label_3a37fc;
        case 0x3a3800u: goto label_3a3800;
        case 0x3a3804u: goto label_3a3804;
        case 0x3a3808u: goto label_3a3808;
        case 0x3a380cu: goto label_3a380c;
        case 0x3a3810u: goto label_3a3810;
        case 0x3a3814u: goto label_3a3814;
        case 0x3a3818u: goto label_3a3818;
        case 0x3a381cu: goto label_3a381c;
        case 0x3a3820u: goto label_3a3820;
        case 0x3a3824u: goto label_3a3824;
        case 0x3a3828u: goto label_3a3828;
        case 0x3a382cu: goto label_3a382c;
        case 0x3a3830u: goto label_3a3830;
        case 0x3a3834u: goto label_3a3834;
        case 0x3a3838u: goto label_3a3838;
        case 0x3a383cu: goto label_3a383c;
        case 0x3a3840u: goto label_3a3840;
        case 0x3a3844u: goto label_3a3844;
        case 0x3a3848u: goto label_3a3848;
        case 0x3a384cu: goto label_3a384c;
        case 0x3a3850u: goto label_3a3850;
        case 0x3a3854u: goto label_3a3854;
        case 0x3a3858u: goto label_3a3858;
        case 0x3a385cu: goto label_3a385c;
        case 0x3a3860u: goto label_3a3860;
        case 0x3a3864u: goto label_3a3864;
        case 0x3a3868u: goto label_3a3868;
        case 0x3a386cu: goto label_3a386c;
        case 0x3a3870u: goto label_3a3870;
        case 0x3a3874u: goto label_3a3874;
        case 0x3a3878u: goto label_3a3878;
        case 0x3a387cu: goto label_3a387c;
        case 0x3a3880u: goto label_3a3880;
        case 0x3a3884u: goto label_3a3884;
        case 0x3a3888u: goto label_3a3888;
        case 0x3a388cu: goto label_3a388c;
        case 0x3a3890u: goto label_3a3890;
        case 0x3a3894u: goto label_3a3894;
        case 0x3a3898u: goto label_3a3898;
        case 0x3a389cu: goto label_3a389c;
        case 0x3a38a0u: goto label_3a38a0;
        case 0x3a38a4u: goto label_3a38a4;
        case 0x3a38a8u: goto label_3a38a8;
        case 0x3a38acu: goto label_3a38ac;
        case 0x3a38b0u: goto label_3a38b0;
        case 0x3a38b4u: goto label_3a38b4;
        case 0x3a38b8u: goto label_3a38b8;
        case 0x3a38bcu: goto label_3a38bc;
        case 0x3a38c0u: goto label_3a38c0;
        case 0x3a38c4u: goto label_3a38c4;
        case 0x3a38c8u: goto label_3a38c8;
        case 0x3a38ccu: goto label_3a38cc;
        case 0x3a38d0u: goto label_3a38d0;
        case 0x3a38d4u: goto label_3a38d4;
        case 0x3a38d8u: goto label_3a38d8;
        case 0x3a38dcu: goto label_3a38dc;
        case 0x3a38e0u: goto label_3a38e0;
        case 0x3a38e4u: goto label_3a38e4;
        case 0x3a38e8u: goto label_3a38e8;
        case 0x3a38ecu: goto label_3a38ec;
        case 0x3a38f0u: goto label_3a38f0;
        case 0x3a38f4u: goto label_3a38f4;
        case 0x3a38f8u: goto label_3a38f8;
        case 0x3a38fcu: goto label_3a38fc;
        case 0x3a3900u: goto label_3a3900;
        case 0x3a3904u: goto label_3a3904;
        case 0x3a3908u: goto label_3a3908;
        case 0x3a390cu: goto label_3a390c;
        case 0x3a3910u: goto label_3a3910;
        case 0x3a3914u: goto label_3a3914;
        case 0x3a3918u: goto label_3a3918;
        case 0x3a391cu: goto label_3a391c;
        case 0x3a3920u: goto label_3a3920;
        case 0x3a3924u: goto label_3a3924;
        case 0x3a3928u: goto label_3a3928;
        case 0x3a392cu: goto label_3a392c;
        case 0x3a3930u: goto label_3a3930;
        case 0x3a3934u: goto label_3a3934;
        case 0x3a3938u: goto label_3a3938;
        case 0x3a393cu: goto label_3a393c;
        case 0x3a3940u: goto label_3a3940;
        case 0x3a3944u: goto label_3a3944;
        case 0x3a3948u: goto label_3a3948;
        case 0x3a394cu: goto label_3a394c;
        case 0x3a3950u: goto label_3a3950;
        case 0x3a3954u: goto label_3a3954;
        case 0x3a3958u: goto label_3a3958;
        case 0x3a395cu: goto label_3a395c;
        case 0x3a3960u: goto label_3a3960;
        case 0x3a3964u: goto label_3a3964;
        case 0x3a3968u: goto label_3a3968;
        case 0x3a396cu: goto label_3a396c;
        case 0x3a3970u: goto label_3a3970;
        case 0x3a3974u: goto label_3a3974;
        case 0x3a3978u: goto label_3a3978;
        case 0x3a397cu: goto label_3a397c;
        case 0x3a3980u: goto label_3a3980;
        case 0x3a3984u: goto label_3a3984;
        case 0x3a3988u: goto label_3a3988;
        case 0x3a398cu: goto label_3a398c;
        case 0x3a3990u: goto label_3a3990;
        case 0x3a3994u: goto label_3a3994;
        case 0x3a3998u: goto label_3a3998;
        case 0x3a399cu: goto label_3a399c;
        case 0x3a39a0u: goto label_3a39a0;
        case 0x3a39a4u: goto label_3a39a4;
        case 0x3a39a8u: goto label_3a39a8;
        case 0x3a39acu: goto label_3a39ac;
        case 0x3a39b0u: goto label_3a39b0;
        case 0x3a39b4u: goto label_3a39b4;
        case 0x3a39b8u: goto label_3a39b8;
        case 0x3a39bcu: goto label_3a39bc;
        case 0x3a39c0u: goto label_3a39c0;
        case 0x3a39c4u: goto label_3a39c4;
        case 0x3a39c8u: goto label_3a39c8;
        case 0x3a39ccu: goto label_3a39cc;
        case 0x3a39d0u: goto label_3a39d0;
        case 0x3a39d4u: goto label_3a39d4;
        case 0x3a39d8u: goto label_3a39d8;
        case 0x3a39dcu: goto label_3a39dc;
        case 0x3a39e0u: goto label_3a39e0;
        case 0x3a39e4u: goto label_3a39e4;
        case 0x3a39e8u: goto label_3a39e8;
        case 0x3a39ecu: goto label_3a39ec;
        case 0x3a39f0u: goto label_3a39f0;
        case 0x3a39f4u: goto label_3a39f4;
        case 0x3a39f8u: goto label_3a39f8;
        case 0x3a39fcu: goto label_3a39fc;
        case 0x3a3a00u: goto label_3a3a00;
        case 0x3a3a04u: goto label_3a3a04;
        case 0x3a3a08u: goto label_3a3a08;
        case 0x3a3a0cu: goto label_3a3a0c;
        case 0x3a3a10u: goto label_3a3a10;
        case 0x3a3a14u: goto label_3a3a14;
        case 0x3a3a18u: goto label_3a3a18;
        case 0x3a3a1cu: goto label_3a3a1c;
        case 0x3a3a20u: goto label_3a3a20;
        case 0x3a3a24u: goto label_3a3a24;
        case 0x3a3a28u: goto label_3a3a28;
        case 0x3a3a2cu: goto label_3a3a2c;
        case 0x3a3a30u: goto label_3a3a30;
        case 0x3a3a34u: goto label_3a3a34;
        case 0x3a3a38u: goto label_3a3a38;
        case 0x3a3a3cu: goto label_3a3a3c;
        case 0x3a3a40u: goto label_3a3a40;
        case 0x3a3a44u: goto label_3a3a44;
        case 0x3a3a48u: goto label_3a3a48;
        case 0x3a3a4cu: goto label_3a3a4c;
        case 0x3a3a50u: goto label_3a3a50;
        case 0x3a3a54u: goto label_3a3a54;
        case 0x3a3a58u: goto label_3a3a58;
        case 0x3a3a5cu: goto label_3a3a5c;
        case 0x3a3a60u: goto label_3a3a60;
        case 0x3a3a64u: goto label_3a3a64;
        case 0x3a3a68u: goto label_3a3a68;
        case 0x3a3a6cu: goto label_3a3a6c;
        case 0x3a3a70u: goto label_3a3a70;
        case 0x3a3a74u: goto label_3a3a74;
        case 0x3a3a78u: goto label_3a3a78;
        case 0x3a3a7cu: goto label_3a3a7c;
        case 0x3a3a80u: goto label_3a3a80;
        case 0x3a3a84u: goto label_3a3a84;
        case 0x3a3a88u: goto label_3a3a88;
        case 0x3a3a8cu: goto label_3a3a8c;
        case 0x3a3a90u: goto label_3a3a90;
        case 0x3a3a94u: goto label_3a3a94;
        case 0x3a3a98u: goto label_3a3a98;
        case 0x3a3a9cu: goto label_3a3a9c;
        case 0x3a3aa0u: goto label_3a3aa0;
        case 0x3a3aa4u: goto label_3a3aa4;
        case 0x3a3aa8u: goto label_3a3aa8;
        case 0x3a3aacu: goto label_3a3aac;
        case 0x3a3ab0u: goto label_3a3ab0;
        case 0x3a3ab4u: goto label_3a3ab4;
        case 0x3a3ab8u: goto label_3a3ab8;
        case 0x3a3abcu: goto label_3a3abc;
        case 0x3a3ac0u: goto label_3a3ac0;
        case 0x3a3ac4u: goto label_3a3ac4;
        case 0x3a3ac8u: goto label_3a3ac8;
        case 0x3a3accu: goto label_3a3acc;
        case 0x3a3ad0u: goto label_3a3ad0;
        case 0x3a3ad4u: goto label_3a3ad4;
        case 0x3a3ad8u: goto label_3a3ad8;
        case 0x3a3adcu: goto label_3a3adc;
        case 0x3a3ae0u: goto label_3a3ae0;
        case 0x3a3ae4u: goto label_3a3ae4;
        case 0x3a3ae8u: goto label_3a3ae8;
        case 0x3a3aecu: goto label_3a3aec;
        case 0x3a3af0u: goto label_3a3af0;
        case 0x3a3af4u: goto label_3a3af4;
        case 0x3a3af8u: goto label_3a3af8;
        case 0x3a3afcu: goto label_3a3afc;
        case 0x3a3b00u: goto label_3a3b00;
        case 0x3a3b04u: goto label_3a3b04;
        case 0x3a3b08u: goto label_3a3b08;
        case 0x3a3b0cu: goto label_3a3b0c;
        case 0x3a3b10u: goto label_3a3b10;
        case 0x3a3b14u: goto label_3a3b14;
        case 0x3a3b18u: goto label_3a3b18;
        case 0x3a3b1cu: goto label_3a3b1c;
        case 0x3a3b20u: goto label_3a3b20;
        case 0x3a3b24u: goto label_3a3b24;
        case 0x3a3b28u: goto label_3a3b28;
        case 0x3a3b2cu: goto label_3a3b2c;
        case 0x3a3b30u: goto label_3a3b30;
        case 0x3a3b34u: goto label_3a3b34;
        case 0x3a3b38u: goto label_3a3b38;
        case 0x3a3b3cu: goto label_3a3b3c;
        case 0x3a3b40u: goto label_3a3b40;
        case 0x3a3b44u: goto label_3a3b44;
        case 0x3a3b48u: goto label_3a3b48;
        case 0x3a3b4cu: goto label_3a3b4c;
        case 0x3a3b50u: goto label_3a3b50;
        case 0x3a3b54u: goto label_3a3b54;
        case 0x3a3b58u: goto label_3a3b58;
        case 0x3a3b5cu: goto label_3a3b5c;
        case 0x3a3b60u: goto label_3a3b60;
        case 0x3a3b64u: goto label_3a3b64;
        case 0x3a3b68u: goto label_3a3b68;
        case 0x3a3b6cu: goto label_3a3b6c;
        case 0x3a3b70u: goto label_3a3b70;
        case 0x3a3b74u: goto label_3a3b74;
        case 0x3a3b78u: goto label_3a3b78;
        case 0x3a3b7cu: goto label_3a3b7c;
        case 0x3a3b80u: goto label_3a3b80;
        case 0x3a3b84u: goto label_3a3b84;
        case 0x3a3b88u: goto label_3a3b88;
        case 0x3a3b8cu: goto label_3a3b8c;
        case 0x3a3b90u: goto label_3a3b90;
        case 0x3a3b94u: goto label_3a3b94;
        case 0x3a3b98u: goto label_3a3b98;
        case 0x3a3b9cu: goto label_3a3b9c;
        case 0x3a3ba0u: goto label_3a3ba0;
        case 0x3a3ba4u: goto label_3a3ba4;
        case 0x3a3ba8u: goto label_3a3ba8;
        case 0x3a3bacu: goto label_3a3bac;
        case 0x3a3bb0u: goto label_3a3bb0;
        case 0x3a3bb4u: goto label_3a3bb4;
        case 0x3a3bb8u: goto label_3a3bb8;
        case 0x3a3bbcu: goto label_3a3bbc;
        case 0x3a3bc0u: goto label_3a3bc0;
        case 0x3a3bc4u: goto label_3a3bc4;
        case 0x3a3bc8u: goto label_3a3bc8;
        case 0x3a3bccu: goto label_3a3bcc;
        case 0x3a3bd0u: goto label_3a3bd0;
        case 0x3a3bd4u: goto label_3a3bd4;
        case 0x3a3bd8u: goto label_3a3bd8;
        case 0x3a3bdcu: goto label_3a3bdc;
        case 0x3a3be0u: goto label_3a3be0;
        case 0x3a3be4u: goto label_3a3be4;
        case 0x3a3be8u: goto label_3a3be8;
        case 0x3a3becu: goto label_3a3bec;
        case 0x3a3bf0u: goto label_3a3bf0;
        case 0x3a3bf4u: goto label_3a3bf4;
        case 0x3a3bf8u: goto label_3a3bf8;
        case 0x3a3bfcu: goto label_3a3bfc;
        case 0x3a3c00u: goto label_3a3c00;
        case 0x3a3c04u: goto label_3a3c04;
        case 0x3a3c08u: goto label_3a3c08;
        case 0x3a3c0cu: goto label_3a3c0c;
        case 0x3a3c10u: goto label_3a3c10;
        case 0x3a3c14u: goto label_3a3c14;
        case 0x3a3c18u: goto label_3a3c18;
        case 0x3a3c1cu: goto label_3a3c1c;
        case 0x3a3c20u: goto label_3a3c20;
        case 0x3a3c24u: goto label_3a3c24;
        case 0x3a3c28u: goto label_3a3c28;
        case 0x3a3c2cu: goto label_3a3c2c;
        case 0x3a3c30u: goto label_3a3c30;
        case 0x3a3c34u: goto label_3a3c34;
        case 0x3a3c38u: goto label_3a3c38;
        case 0x3a3c3cu: goto label_3a3c3c;
        case 0x3a3c40u: goto label_3a3c40;
        case 0x3a3c44u: goto label_3a3c44;
        case 0x3a3c48u: goto label_3a3c48;
        case 0x3a3c4cu: goto label_3a3c4c;
        case 0x3a3c50u: goto label_3a3c50;
        case 0x3a3c54u: goto label_3a3c54;
        case 0x3a3c58u: goto label_3a3c58;
        case 0x3a3c5cu: goto label_3a3c5c;
        case 0x3a3c60u: goto label_3a3c60;
        case 0x3a3c64u: goto label_3a3c64;
        case 0x3a3c68u: goto label_3a3c68;
        case 0x3a3c6cu: goto label_3a3c6c;
        case 0x3a3c70u: goto label_3a3c70;
        case 0x3a3c74u: goto label_3a3c74;
        case 0x3a3c78u: goto label_3a3c78;
        case 0x3a3c7cu: goto label_3a3c7c;
        case 0x3a3c80u: goto label_3a3c80;
        case 0x3a3c84u: goto label_3a3c84;
        case 0x3a3c88u: goto label_3a3c88;
        case 0x3a3c8cu: goto label_3a3c8c;
        case 0x3a3c90u: goto label_3a3c90;
        case 0x3a3c94u: goto label_3a3c94;
        case 0x3a3c98u: goto label_3a3c98;
        case 0x3a3c9cu: goto label_3a3c9c;
        case 0x3a3ca0u: goto label_3a3ca0;
        case 0x3a3ca4u: goto label_3a3ca4;
        case 0x3a3ca8u: goto label_3a3ca8;
        case 0x3a3cacu: goto label_3a3cac;
        case 0x3a3cb0u: goto label_3a3cb0;
        case 0x3a3cb4u: goto label_3a3cb4;
        case 0x3a3cb8u: goto label_3a3cb8;
        case 0x3a3cbcu: goto label_3a3cbc;
        case 0x3a3cc0u: goto label_3a3cc0;
        case 0x3a3cc4u: goto label_3a3cc4;
        case 0x3a3cc8u: goto label_3a3cc8;
        case 0x3a3cccu: goto label_3a3ccc;
        case 0x3a3cd0u: goto label_3a3cd0;
        case 0x3a3cd4u: goto label_3a3cd4;
        case 0x3a3cd8u: goto label_3a3cd8;
        case 0x3a3cdcu: goto label_3a3cdc;
        case 0x3a3ce0u: goto label_3a3ce0;
        case 0x3a3ce4u: goto label_3a3ce4;
        case 0x3a3ce8u: goto label_3a3ce8;
        case 0x3a3cecu: goto label_3a3cec;
        case 0x3a3cf0u: goto label_3a3cf0;
        case 0x3a3cf4u: goto label_3a3cf4;
        case 0x3a3cf8u: goto label_3a3cf8;
        case 0x3a3cfcu: goto label_3a3cfc;
        case 0x3a3d00u: goto label_3a3d00;
        case 0x3a3d04u: goto label_3a3d04;
        case 0x3a3d08u: goto label_3a3d08;
        case 0x3a3d0cu: goto label_3a3d0c;
        case 0x3a3d10u: goto label_3a3d10;
        case 0x3a3d14u: goto label_3a3d14;
        case 0x3a3d18u: goto label_3a3d18;
        case 0x3a3d1cu: goto label_3a3d1c;
        case 0x3a3d20u: goto label_3a3d20;
        case 0x3a3d24u: goto label_3a3d24;
        case 0x3a3d28u: goto label_3a3d28;
        case 0x3a3d2cu: goto label_3a3d2c;
        case 0x3a3d30u: goto label_3a3d30;
        case 0x3a3d34u: goto label_3a3d34;
        case 0x3a3d38u: goto label_3a3d38;
        case 0x3a3d3cu: goto label_3a3d3c;
        case 0x3a3d40u: goto label_3a3d40;
        case 0x3a3d44u: goto label_3a3d44;
        case 0x3a3d48u: goto label_3a3d48;
        case 0x3a3d4cu: goto label_3a3d4c;
        case 0x3a3d50u: goto label_3a3d50;
        case 0x3a3d54u: goto label_3a3d54;
        case 0x3a3d58u: goto label_3a3d58;
        case 0x3a3d5cu: goto label_3a3d5c;
        case 0x3a3d60u: goto label_3a3d60;
        case 0x3a3d64u: goto label_3a3d64;
        case 0x3a3d68u: goto label_3a3d68;
        case 0x3a3d6cu: goto label_3a3d6c;
        case 0x3a3d70u: goto label_3a3d70;
        case 0x3a3d74u: goto label_3a3d74;
        case 0x3a3d78u: goto label_3a3d78;
        case 0x3a3d7cu: goto label_3a3d7c;
        case 0x3a3d80u: goto label_3a3d80;
        case 0x3a3d84u: goto label_3a3d84;
        case 0x3a3d88u: goto label_3a3d88;
        case 0x3a3d8cu: goto label_3a3d8c;
        case 0x3a3d90u: goto label_3a3d90;
        case 0x3a3d94u: goto label_3a3d94;
        case 0x3a3d98u: goto label_3a3d98;
        case 0x3a3d9cu: goto label_3a3d9c;
        case 0x3a3da0u: goto label_3a3da0;
        case 0x3a3da4u: goto label_3a3da4;
        case 0x3a3da8u: goto label_3a3da8;
        case 0x3a3dacu: goto label_3a3dac;
        case 0x3a3db0u: goto label_3a3db0;
        case 0x3a3db4u: goto label_3a3db4;
        case 0x3a3db8u: goto label_3a3db8;
        case 0x3a3dbcu: goto label_3a3dbc;
        case 0x3a3dc0u: goto label_3a3dc0;
        case 0x3a3dc4u: goto label_3a3dc4;
        case 0x3a3dc8u: goto label_3a3dc8;
        case 0x3a3dccu: goto label_3a3dcc;
        case 0x3a3dd0u: goto label_3a3dd0;
        case 0x3a3dd4u: goto label_3a3dd4;
        case 0x3a3dd8u: goto label_3a3dd8;
        case 0x3a3ddcu: goto label_3a3ddc;
        case 0x3a3de0u: goto label_3a3de0;
        case 0x3a3de4u: goto label_3a3de4;
        case 0x3a3de8u: goto label_3a3de8;
        case 0x3a3decu: goto label_3a3dec;
        case 0x3a3df0u: goto label_3a3df0;
        case 0x3a3df4u: goto label_3a3df4;
        case 0x3a3df8u: goto label_3a3df8;
        case 0x3a3dfcu: goto label_3a3dfc;
        case 0x3a3e00u: goto label_3a3e00;
        case 0x3a3e04u: goto label_3a3e04;
        case 0x3a3e08u: goto label_3a3e08;
        case 0x3a3e0cu: goto label_3a3e0c;
        case 0x3a3e10u: goto label_3a3e10;
        case 0x3a3e14u: goto label_3a3e14;
        case 0x3a3e18u: goto label_3a3e18;
        case 0x3a3e1cu: goto label_3a3e1c;
        case 0x3a3e20u: goto label_3a3e20;
        case 0x3a3e24u: goto label_3a3e24;
        case 0x3a3e28u: goto label_3a3e28;
        case 0x3a3e2cu: goto label_3a3e2c;
        case 0x3a3e30u: goto label_3a3e30;
        case 0x3a3e34u: goto label_3a3e34;
        case 0x3a3e38u: goto label_3a3e38;
        case 0x3a3e3cu: goto label_3a3e3c;
        case 0x3a3e40u: goto label_3a3e40;
        case 0x3a3e44u: goto label_3a3e44;
        case 0x3a3e48u: goto label_3a3e48;
        case 0x3a3e4cu: goto label_3a3e4c;
        case 0x3a3e50u: goto label_3a3e50;
        case 0x3a3e54u: goto label_3a3e54;
        case 0x3a3e58u: goto label_3a3e58;
        case 0x3a3e5cu: goto label_3a3e5c;
        case 0x3a3e60u: goto label_3a3e60;
        case 0x3a3e64u: goto label_3a3e64;
        case 0x3a3e68u: goto label_3a3e68;
        case 0x3a3e6cu: goto label_3a3e6c;
        case 0x3a3e70u: goto label_3a3e70;
        case 0x3a3e74u: goto label_3a3e74;
        case 0x3a3e78u: goto label_3a3e78;
        case 0x3a3e7cu: goto label_3a3e7c;
        case 0x3a3e80u: goto label_3a3e80;
        case 0x3a3e84u: goto label_3a3e84;
        case 0x3a3e88u: goto label_3a3e88;
        case 0x3a3e8cu: goto label_3a3e8c;
        case 0x3a3e90u: goto label_3a3e90;
        case 0x3a3e94u: goto label_3a3e94;
        case 0x3a3e98u: goto label_3a3e98;
        case 0x3a3e9cu: goto label_3a3e9c;
        case 0x3a3ea0u: goto label_3a3ea0;
        case 0x3a3ea4u: goto label_3a3ea4;
        case 0x3a3ea8u: goto label_3a3ea8;
        case 0x3a3eacu: goto label_3a3eac;
        case 0x3a3eb0u: goto label_3a3eb0;
        case 0x3a3eb4u: goto label_3a3eb4;
        case 0x3a3eb8u: goto label_3a3eb8;
        case 0x3a3ebcu: goto label_3a3ebc;
        case 0x3a3ec0u: goto label_3a3ec0;
        case 0x3a3ec4u: goto label_3a3ec4;
        case 0x3a3ec8u: goto label_3a3ec8;
        case 0x3a3eccu: goto label_3a3ecc;
        case 0x3a3ed0u: goto label_3a3ed0;
        case 0x3a3ed4u: goto label_3a3ed4;
        case 0x3a3ed8u: goto label_3a3ed8;
        case 0x3a3edcu: goto label_3a3edc;
        case 0x3a3ee0u: goto label_3a3ee0;
        case 0x3a3ee4u: goto label_3a3ee4;
        case 0x3a3ee8u: goto label_3a3ee8;
        case 0x3a3eecu: goto label_3a3eec;
        case 0x3a3ef0u: goto label_3a3ef0;
        case 0x3a3ef4u: goto label_3a3ef4;
        case 0x3a3ef8u: goto label_3a3ef8;
        case 0x3a3efcu: goto label_3a3efc;
        case 0x3a3f00u: goto label_3a3f00;
        case 0x3a3f04u: goto label_3a3f04;
        case 0x3a3f08u: goto label_3a3f08;
        case 0x3a3f0cu: goto label_3a3f0c;
        case 0x3a3f10u: goto label_3a3f10;
        case 0x3a3f14u: goto label_3a3f14;
        case 0x3a3f18u: goto label_3a3f18;
        case 0x3a3f1cu: goto label_3a3f1c;
        case 0x3a3f20u: goto label_3a3f20;
        case 0x3a3f24u: goto label_3a3f24;
        case 0x3a3f28u: goto label_3a3f28;
        case 0x3a3f2cu: goto label_3a3f2c;
        case 0x3a3f30u: goto label_3a3f30;
        case 0x3a3f34u: goto label_3a3f34;
        case 0x3a3f38u: goto label_3a3f38;
        case 0x3a3f3cu: goto label_3a3f3c;
        case 0x3a3f40u: goto label_3a3f40;
        case 0x3a3f44u: goto label_3a3f44;
        case 0x3a3f48u: goto label_3a3f48;
        case 0x3a3f4cu: goto label_3a3f4c;
        case 0x3a3f50u: goto label_3a3f50;
        case 0x3a3f54u: goto label_3a3f54;
        case 0x3a3f58u: goto label_3a3f58;
        case 0x3a3f5cu: goto label_3a3f5c;
        case 0x3a3f60u: goto label_3a3f60;
        case 0x3a3f64u: goto label_3a3f64;
        case 0x3a3f68u: goto label_3a3f68;
        case 0x3a3f6cu: goto label_3a3f6c;
        case 0x3a3f70u: goto label_3a3f70;
        case 0x3a3f74u: goto label_3a3f74;
        case 0x3a3f78u: goto label_3a3f78;
        case 0x3a3f7cu: goto label_3a3f7c;
        case 0x3a3f80u: goto label_3a3f80;
        case 0x3a3f84u: goto label_3a3f84;
        case 0x3a3f88u: goto label_3a3f88;
        case 0x3a3f8cu: goto label_3a3f8c;
        case 0x3a3f90u: goto label_3a3f90;
        case 0x3a3f94u: goto label_3a3f94;
        case 0x3a3f98u: goto label_3a3f98;
        case 0x3a3f9cu: goto label_3a3f9c;
        case 0x3a3fa0u: goto label_3a3fa0;
        case 0x3a3fa4u: goto label_3a3fa4;
        case 0x3a3fa8u: goto label_3a3fa8;
        case 0x3a3facu: goto label_3a3fac;
        case 0x3a3fb0u: goto label_3a3fb0;
        case 0x3a3fb4u: goto label_3a3fb4;
        case 0x3a3fb8u: goto label_3a3fb8;
        case 0x3a3fbcu: goto label_3a3fbc;
        case 0x3a3fc0u: goto label_3a3fc0;
        case 0x3a3fc4u: goto label_3a3fc4;
        case 0x3a3fc8u: goto label_3a3fc8;
        case 0x3a3fccu: goto label_3a3fcc;
        case 0x3a3fd0u: goto label_3a3fd0;
        case 0x3a3fd4u: goto label_3a3fd4;
        case 0x3a3fd8u: goto label_3a3fd8;
        case 0x3a3fdcu: goto label_3a3fdc;
        case 0x3a3fe0u: goto label_3a3fe0;
        case 0x3a3fe4u: goto label_3a3fe4;
        case 0x3a3fe8u: goto label_3a3fe8;
        case 0x3a3fecu: goto label_3a3fec;
        case 0x3a3ff0u: goto label_3a3ff0;
        case 0x3a3ff4u: goto label_3a3ff4;
        case 0x3a3ff8u: goto label_3a3ff8;
        case 0x3a3ffcu: goto label_3a3ffc;
        case 0x3a4000u: goto label_3a4000;
        case 0x3a4004u: goto label_3a4004;
        case 0x3a4008u: goto label_3a4008;
        case 0x3a400cu: goto label_3a400c;
        case 0x3a4010u: goto label_3a4010;
        case 0x3a4014u: goto label_3a4014;
        case 0x3a4018u: goto label_3a4018;
        case 0x3a401cu: goto label_3a401c;
        case 0x3a4020u: goto label_3a4020;
        case 0x3a4024u: goto label_3a4024;
        case 0x3a4028u: goto label_3a4028;
        case 0x3a402cu: goto label_3a402c;
        case 0x3a4030u: goto label_3a4030;
        case 0x3a4034u: goto label_3a4034;
        case 0x3a4038u: goto label_3a4038;
        case 0x3a403cu: goto label_3a403c;
        case 0x3a4040u: goto label_3a4040;
        case 0x3a4044u: goto label_3a4044;
        case 0x3a4048u: goto label_3a4048;
        case 0x3a404cu: goto label_3a404c;
        case 0x3a4050u: goto label_3a4050;
        case 0x3a4054u: goto label_3a4054;
        case 0x3a4058u: goto label_3a4058;
        case 0x3a405cu: goto label_3a405c;
        case 0x3a4060u: goto label_3a4060;
        case 0x3a4064u: goto label_3a4064;
        case 0x3a4068u: goto label_3a4068;
        case 0x3a406cu: goto label_3a406c;
        case 0x3a4070u: goto label_3a4070;
        case 0x3a4074u: goto label_3a4074;
        case 0x3a4078u: goto label_3a4078;
        case 0x3a407cu: goto label_3a407c;
        case 0x3a4080u: goto label_3a4080;
        case 0x3a4084u: goto label_3a4084;
        case 0x3a4088u: goto label_3a4088;
        case 0x3a408cu: goto label_3a408c;
        case 0x3a4090u: goto label_3a4090;
        case 0x3a4094u: goto label_3a4094;
        case 0x3a4098u: goto label_3a4098;
        case 0x3a409cu: goto label_3a409c;
        case 0x3a40a0u: goto label_3a40a0;
        case 0x3a40a4u: goto label_3a40a4;
        case 0x3a40a8u: goto label_3a40a8;
        case 0x3a40acu: goto label_3a40ac;
        case 0x3a40b0u: goto label_3a40b0;
        case 0x3a40b4u: goto label_3a40b4;
        case 0x3a40b8u: goto label_3a40b8;
        case 0x3a40bcu: goto label_3a40bc;
        case 0x3a40c0u: goto label_3a40c0;
        case 0x3a40c4u: goto label_3a40c4;
        case 0x3a40c8u: goto label_3a40c8;
        case 0x3a40ccu: goto label_3a40cc;
        case 0x3a40d0u: goto label_3a40d0;
        case 0x3a40d4u: goto label_3a40d4;
        case 0x3a40d8u: goto label_3a40d8;
        case 0x3a40dcu: goto label_3a40dc;
        case 0x3a40e0u: goto label_3a40e0;
        case 0x3a40e4u: goto label_3a40e4;
        case 0x3a40e8u: goto label_3a40e8;
        case 0x3a40ecu: goto label_3a40ec;
        case 0x3a40f0u: goto label_3a40f0;
        case 0x3a40f4u: goto label_3a40f4;
        case 0x3a40f8u: goto label_3a40f8;
        case 0x3a40fcu: goto label_3a40fc;
        case 0x3a4100u: goto label_3a4100;
        case 0x3a4104u: goto label_3a4104;
        case 0x3a4108u: goto label_3a4108;
        case 0x3a410cu: goto label_3a410c;
        case 0x3a4110u: goto label_3a4110;
        case 0x3a4114u: goto label_3a4114;
        case 0x3a4118u: goto label_3a4118;
        case 0x3a411cu: goto label_3a411c;
        case 0x3a4120u: goto label_3a4120;
        case 0x3a4124u: goto label_3a4124;
        case 0x3a4128u: goto label_3a4128;
        case 0x3a412cu: goto label_3a412c;
        case 0x3a4130u: goto label_3a4130;
        case 0x3a4134u: goto label_3a4134;
        case 0x3a4138u: goto label_3a4138;
        case 0x3a413cu: goto label_3a413c;
        case 0x3a4140u: goto label_3a4140;
        case 0x3a4144u: goto label_3a4144;
        case 0x3a4148u: goto label_3a4148;
        case 0x3a414cu: goto label_3a414c;
        case 0x3a4150u: goto label_3a4150;
        case 0x3a4154u: goto label_3a4154;
        case 0x3a4158u: goto label_3a4158;
        case 0x3a415cu: goto label_3a415c;
        case 0x3a4160u: goto label_3a4160;
        case 0x3a4164u: goto label_3a4164;
        case 0x3a4168u: goto label_3a4168;
        case 0x3a416cu: goto label_3a416c;
        case 0x3a4170u: goto label_3a4170;
        case 0x3a4174u: goto label_3a4174;
        case 0x3a4178u: goto label_3a4178;
        case 0x3a417cu: goto label_3a417c;
        case 0x3a4180u: goto label_3a4180;
        case 0x3a4184u: goto label_3a4184;
        case 0x3a4188u: goto label_3a4188;
        case 0x3a418cu: goto label_3a418c;
        case 0x3a4190u: goto label_3a4190;
        case 0x3a4194u: goto label_3a4194;
        case 0x3a4198u: goto label_3a4198;
        case 0x3a419cu: goto label_3a419c;
        case 0x3a41a0u: goto label_3a41a0;
        case 0x3a41a4u: goto label_3a41a4;
        case 0x3a41a8u: goto label_3a41a8;
        case 0x3a41acu: goto label_3a41ac;
        case 0x3a41b0u: goto label_3a41b0;
        case 0x3a41b4u: goto label_3a41b4;
        case 0x3a41b8u: goto label_3a41b8;
        case 0x3a41bcu: goto label_3a41bc;
        case 0x3a41c0u: goto label_3a41c0;
        case 0x3a41c4u: goto label_3a41c4;
        case 0x3a41c8u: goto label_3a41c8;
        case 0x3a41ccu: goto label_3a41cc;
        case 0x3a41d0u: goto label_3a41d0;
        case 0x3a41d4u: goto label_3a41d4;
        case 0x3a41d8u: goto label_3a41d8;
        case 0x3a41dcu: goto label_3a41dc;
        case 0x3a41e0u: goto label_3a41e0;
        case 0x3a41e4u: goto label_3a41e4;
        case 0x3a41e8u: goto label_3a41e8;
        case 0x3a41ecu: goto label_3a41ec;
        case 0x3a41f0u: goto label_3a41f0;
        case 0x3a41f4u: goto label_3a41f4;
        case 0x3a41f8u: goto label_3a41f8;
        case 0x3a41fcu: goto label_3a41fc;
        case 0x3a4200u: goto label_3a4200;
        case 0x3a4204u: goto label_3a4204;
        case 0x3a4208u: goto label_3a4208;
        case 0x3a420cu: goto label_3a420c;
        case 0x3a4210u: goto label_3a4210;
        case 0x3a4214u: goto label_3a4214;
        case 0x3a4218u: goto label_3a4218;
        case 0x3a421cu: goto label_3a421c;
        case 0x3a4220u: goto label_3a4220;
        case 0x3a4224u: goto label_3a4224;
        case 0x3a4228u: goto label_3a4228;
        case 0x3a422cu: goto label_3a422c;
        case 0x3a4230u: goto label_3a4230;
        case 0x3a4234u: goto label_3a4234;
        case 0x3a4238u: goto label_3a4238;
        case 0x3a423cu: goto label_3a423c;
        case 0x3a4240u: goto label_3a4240;
        case 0x3a4244u: goto label_3a4244;
        case 0x3a4248u: goto label_3a4248;
        case 0x3a424cu: goto label_3a424c;
        case 0x3a4250u: goto label_3a4250;
        case 0x3a4254u: goto label_3a4254;
        case 0x3a4258u: goto label_3a4258;
        case 0x3a425cu: goto label_3a425c;
        case 0x3a4260u: goto label_3a4260;
        case 0x3a4264u: goto label_3a4264;
        case 0x3a4268u: goto label_3a4268;
        case 0x3a426cu: goto label_3a426c;
        case 0x3a4270u: goto label_3a4270;
        case 0x3a4274u: goto label_3a4274;
        case 0x3a4278u: goto label_3a4278;
        case 0x3a427cu: goto label_3a427c;
        case 0x3a4280u: goto label_3a4280;
        case 0x3a4284u: goto label_3a4284;
        case 0x3a4288u: goto label_3a4288;
        case 0x3a428cu: goto label_3a428c;
        case 0x3a4290u: goto label_3a4290;
        case 0x3a4294u: goto label_3a4294;
        case 0x3a4298u: goto label_3a4298;
        case 0x3a429cu: goto label_3a429c;
        case 0x3a42a0u: goto label_3a42a0;
        case 0x3a42a4u: goto label_3a42a4;
        case 0x3a42a8u: goto label_3a42a8;
        case 0x3a42acu: goto label_3a42ac;
        case 0x3a42b0u: goto label_3a42b0;
        case 0x3a42b4u: goto label_3a42b4;
        case 0x3a42b8u: goto label_3a42b8;
        case 0x3a42bcu: goto label_3a42bc;
        case 0x3a42c0u: goto label_3a42c0;
        case 0x3a42c4u: goto label_3a42c4;
        case 0x3a42c8u: goto label_3a42c8;
        case 0x3a42ccu: goto label_3a42cc;
        case 0x3a42d0u: goto label_3a42d0;
        case 0x3a42d4u: goto label_3a42d4;
        case 0x3a42d8u: goto label_3a42d8;
        case 0x3a42dcu: goto label_3a42dc;
        case 0x3a42e0u: goto label_3a42e0;
        case 0x3a42e4u: goto label_3a42e4;
        case 0x3a42e8u: goto label_3a42e8;
        case 0x3a42ecu: goto label_3a42ec;
        case 0x3a42f0u: goto label_3a42f0;
        case 0x3a42f4u: goto label_3a42f4;
        case 0x3a42f8u: goto label_3a42f8;
        case 0x3a42fcu: goto label_3a42fc;
        case 0x3a4300u: goto label_3a4300;
        case 0x3a4304u: goto label_3a4304;
        case 0x3a4308u: goto label_3a4308;
        case 0x3a430cu: goto label_3a430c;
        case 0x3a4310u: goto label_3a4310;
        case 0x3a4314u: goto label_3a4314;
        case 0x3a4318u: goto label_3a4318;
        case 0x3a431cu: goto label_3a431c;
        case 0x3a4320u: goto label_3a4320;
        case 0x3a4324u: goto label_3a4324;
        case 0x3a4328u: goto label_3a4328;
        case 0x3a432cu: goto label_3a432c;
        case 0x3a4330u: goto label_3a4330;
        case 0x3a4334u: goto label_3a4334;
        case 0x3a4338u: goto label_3a4338;
        case 0x3a433cu: goto label_3a433c;
        case 0x3a4340u: goto label_3a4340;
        case 0x3a4344u: goto label_3a4344;
        case 0x3a4348u: goto label_3a4348;
        case 0x3a434cu: goto label_3a434c;
        case 0x3a4350u: goto label_3a4350;
        case 0x3a4354u: goto label_3a4354;
        case 0x3a4358u: goto label_3a4358;
        case 0x3a435cu: goto label_3a435c;
        case 0x3a4360u: goto label_3a4360;
        case 0x3a4364u: goto label_3a4364;
        case 0x3a4368u: goto label_3a4368;
        case 0x3a436cu: goto label_3a436c;
        case 0x3a4370u: goto label_3a4370;
        case 0x3a4374u: goto label_3a4374;
        case 0x3a4378u: goto label_3a4378;
        case 0x3a437cu: goto label_3a437c;
        case 0x3a4380u: goto label_3a4380;
        case 0x3a4384u: goto label_3a4384;
        case 0x3a4388u: goto label_3a4388;
        case 0x3a438cu: goto label_3a438c;
        case 0x3a4390u: goto label_3a4390;
        case 0x3a4394u: goto label_3a4394;
        case 0x3a4398u: goto label_3a4398;
        case 0x3a439cu: goto label_3a439c;
        case 0x3a43a0u: goto label_3a43a0;
        case 0x3a43a4u: goto label_3a43a4;
        case 0x3a43a8u: goto label_3a43a8;
        case 0x3a43acu: goto label_3a43ac;
        case 0x3a43b0u: goto label_3a43b0;
        case 0x3a43b4u: goto label_3a43b4;
        case 0x3a43b8u: goto label_3a43b8;
        case 0x3a43bcu: goto label_3a43bc;
        case 0x3a43c0u: goto label_3a43c0;
        case 0x3a43c4u: goto label_3a43c4;
        case 0x3a43c8u: goto label_3a43c8;
        case 0x3a43ccu: goto label_3a43cc;
        case 0x3a43d0u: goto label_3a43d0;
        case 0x3a43d4u: goto label_3a43d4;
        case 0x3a43d8u: goto label_3a43d8;
        case 0x3a43dcu: goto label_3a43dc;
        case 0x3a43e0u: goto label_3a43e0;
        case 0x3a43e4u: goto label_3a43e4;
        case 0x3a43e8u: goto label_3a43e8;
        case 0x3a43ecu: goto label_3a43ec;
        case 0x3a43f0u: goto label_3a43f0;
        case 0x3a43f4u: goto label_3a43f4;
        case 0x3a43f8u: goto label_3a43f8;
        case 0x3a43fcu: goto label_3a43fc;
        case 0x3a4400u: goto label_3a4400;
        case 0x3a4404u: goto label_3a4404;
        case 0x3a4408u: goto label_3a4408;
        case 0x3a440cu: goto label_3a440c;
        case 0x3a4410u: goto label_3a4410;
        case 0x3a4414u: goto label_3a4414;
        case 0x3a4418u: goto label_3a4418;
        case 0x3a441cu: goto label_3a441c;
        case 0x3a4420u: goto label_3a4420;
        case 0x3a4424u: goto label_3a4424;
        case 0x3a4428u: goto label_3a4428;
        case 0x3a442cu: goto label_3a442c;
        case 0x3a4430u: goto label_3a4430;
        case 0x3a4434u: goto label_3a4434;
        case 0x3a4438u: goto label_3a4438;
        case 0x3a443cu: goto label_3a443c;
        case 0x3a4440u: goto label_3a4440;
        case 0x3a4444u: goto label_3a4444;
        case 0x3a4448u: goto label_3a4448;
        case 0x3a444cu: goto label_3a444c;
        case 0x3a4450u: goto label_3a4450;
        case 0x3a4454u: goto label_3a4454;
        case 0x3a4458u: goto label_3a4458;
        case 0x3a445cu: goto label_3a445c;
        case 0x3a4460u: goto label_3a4460;
        case 0x3a4464u: goto label_3a4464;
        case 0x3a4468u: goto label_3a4468;
        case 0x3a446cu: goto label_3a446c;
        case 0x3a4470u: goto label_3a4470;
        case 0x3a4474u: goto label_3a4474;
        case 0x3a4478u: goto label_3a4478;
        case 0x3a447cu: goto label_3a447c;
        case 0x3a4480u: goto label_3a4480;
        case 0x3a4484u: goto label_3a4484;
        case 0x3a4488u: goto label_3a4488;
        case 0x3a448cu: goto label_3a448c;
        case 0x3a4490u: goto label_3a4490;
        case 0x3a4494u: goto label_3a4494;
        case 0x3a4498u: goto label_3a4498;
        case 0x3a449cu: goto label_3a449c;
        case 0x3a44a0u: goto label_3a44a0;
        case 0x3a44a4u: goto label_3a44a4;
        case 0x3a44a8u: goto label_3a44a8;
        case 0x3a44acu: goto label_3a44ac;
        case 0x3a44b0u: goto label_3a44b0;
        case 0x3a44b4u: goto label_3a44b4;
        case 0x3a44b8u: goto label_3a44b8;
        case 0x3a44bcu: goto label_3a44bc;
        case 0x3a44c0u: goto label_3a44c0;
        case 0x3a44c4u: goto label_3a44c4;
        case 0x3a44c8u: goto label_3a44c8;
        case 0x3a44ccu: goto label_3a44cc;
        case 0x3a44d0u: goto label_3a44d0;
        case 0x3a44d4u: goto label_3a44d4;
        case 0x3a44d8u: goto label_3a44d8;
        case 0x3a44dcu: goto label_3a44dc;
        case 0x3a44e0u: goto label_3a44e0;
        case 0x3a44e4u: goto label_3a44e4;
        case 0x3a44e8u: goto label_3a44e8;
        case 0x3a44ecu: goto label_3a44ec;
        case 0x3a44f0u: goto label_3a44f0;
        case 0x3a44f4u: goto label_3a44f4;
        case 0x3a44f8u: goto label_3a44f8;
        case 0x3a44fcu: goto label_3a44fc;
        case 0x3a4500u: goto label_3a4500;
        case 0x3a4504u: goto label_3a4504;
        case 0x3a4508u: goto label_3a4508;
        case 0x3a450cu: goto label_3a450c;
        case 0x3a4510u: goto label_3a4510;
        case 0x3a4514u: goto label_3a4514;
        case 0x3a4518u: goto label_3a4518;
        case 0x3a451cu: goto label_3a451c;
        case 0x3a4520u: goto label_3a4520;
        case 0x3a4524u: goto label_3a4524;
        case 0x3a4528u: goto label_3a4528;
        case 0x3a452cu: goto label_3a452c;
        case 0x3a4530u: goto label_3a4530;
        case 0x3a4534u: goto label_3a4534;
        case 0x3a4538u: goto label_3a4538;
        case 0x3a453cu: goto label_3a453c;
        case 0x3a4540u: goto label_3a4540;
        case 0x3a4544u: goto label_3a4544;
        case 0x3a4548u: goto label_3a4548;
        case 0x3a454cu: goto label_3a454c;
        case 0x3a4550u: goto label_3a4550;
        case 0x3a4554u: goto label_3a4554;
        case 0x3a4558u: goto label_3a4558;
        case 0x3a455cu: goto label_3a455c;
        case 0x3a4560u: goto label_3a4560;
        case 0x3a4564u: goto label_3a4564;
        case 0x3a4568u: goto label_3a4568;
        case 0x3a456cu: goto label_3a456c;
        case 0x3a4570u: goto label_3a4570;
        case 0x3a4574u: goto label_3a4574;
        case 0x3a4578u: goto label_3a4578;
        case 0x3a457cu: goto label_3a457c;
        case 0x3a4580u: goto label_3a4580;
        case 0x3a4584u: goto label_3a4584;
        case 0x3a4588u: goto label_3a4588;
        case 0x3a458cu: goto label_3a458c;
        case 0x3a4590u: goto label_3a4590;
        case 0x3a4594u: goto label_3a4594;
        case 0x3a4598u: goto label_3a4598;
        case 0x3a459cu: goto label_3a459c;
        case 0x3a45a0u: goto label_3a45a0;
        case 0x3a45a4u: goto label_3a45a4;
        case 0x3a45a8u: goto label_3a45a8;
        case 0x3a45acu: goto label_3a45ac;
        case 0x3a45b0u: goto label_3a45b0;
        case 0x3a45b4u: goto label_3a45b4;
        case 0x3a45b8u: goto label_3a45b8;
        case 0x3a45bcu: goto label_3a45bc;
        case 0x3a45c0u: goto label_3a45c0;
        case 0x3a45c4u: goto label_3a45c4;
        case 0x3a45c8u: goto label_3a45c8;
        case 0x3a45ccu: goto label_3a45cc;
        case 0x3a45d0u: goto label_3a45d0;
        case 0x3a45d4u: goto label_3a45d4;
        case 0x3a45d8u: goto label_3a45d8;
        case 0x3a45dcu: goto label_3a45dc;
        case 0x3a45e0u: goto label_3a45e0;
        case 0x3a45e4u: goto label_3a45e4;
        case 0x3a45e8u: goto label_3a45e8;
        case 0x3a45ecu: goto label_3a45ec;
        case 0x3a45f0u: goto label_3a45f0;
        case 0x3a45f4u: goto label_3a45f4;
        case 0x3a45f8u: goto label_3a45f8;
        case 0x3a45fcu: goto label_3a45fc;
        case 0x3a4600u: goto label_3a4600;
        case 0x3a4604u: goto label_3a4604;
        case 0x3a4608u: goto label_3a4608;
        case 0x3a460cu: goto label_3a460c;
        case 0x3a4610u: goto label_3a4610;
        case 0x3a4614u: goto label_3a4614;
        case 0x3a4618u: goto label_3a4618;
        case 0x3a461cu: goto label_3a461c;
        case 0x3a4620u: goto label_3a4620;
        case 0x3a4624u: goto label_3a4624;
        case 0x3a4628u: goto label_3a4628;
        case 0x3a462cu: goto label_3a462c;
        case 0x3a4630u: goto label_3a4630;
        case 0x3a4634u: goto label_3a4634;
        case 0x3a4638u: goto label_3a4638;
        case 0x3a463cu: goto label_3a463c;
        case 0x3a4640u: goto label_3a4640;
        case 0x3a4644u: goto label_3a4644;
        case 0x3a4648u: goto label_3a4648;
        case 0x3a464cu: goto label_3a464c;
        case 0x3a4650u: goto label_3a4650;
        case 0x3a4654u: goto label_3a4654;
        case 0x3a4658u: goto label_3a4658;
        case 0x3a465cu: goto label_3a465c;
        case 0x3a4660u: goto label_3a4660;
        case 0x3a4664u: goto label_3a4664;
        case 0x3a4668u: goto label_3a4668;
        case 0x3a466cu: goto label_3a466c;
        case 0x3a4670u: goto label_3a4670;
        case 0x3a4674u: goto label_3a4674;
        case 0x3a4678u: goto label_3a4678;
        case 0x3a467cu: goto label_3a467c;
        case 0x3a4680u: goto label_3a4680;
        case 0x3a4684u: goto label_3a4684;
        case 0x3a4688u: goto label_3a4688;
        case 0x3a468cu: goto label_3a468c;
        case 0x3a4690u: goto label_3a4690;
        case 0x3a4694u: goto label_3a4694;
        case 0x3a4698u: goto label_3a4698;
        case 0x3a469cu: goto label_3a469c;
        case 0x3a46a0u: goto label_3a46a0;
        case 0x3a46a4u: goto label_3a46a4;
        case 0x3a46a8u: goto label_3a46a8;
        case 0x3a46acu: goto label_3a46ac;
        case 0x3a46b0u: goto label_3a46b0;
        case 0x3a46b4u: goto label_3a46b4;
        case 0x3a46b8u: goto label_3a46b8;
        case 0x3a46bcu: goto label_3a46bc;
        case 0x3a46c0u: goto label_3a46c0;
        case 0x3a46c4u: goto label_3a46c4;
        case 0x3a46c8u: goto label_3a46c8;
        case 0x3a46ccu: goto label_3a46cc;
        case 0x3a46d0u: goto label_3a46d0;
        case 0x3a46d4u: goto label_3a46d4;
        case 0x3a46d8u: goto label_3a46d8;
        case 0x3a46dcu: goto label_3a46dc;
        case 0x3a46e0u: goto label_3a46e0;
        case 0x3a46e4u: goto label_3a46e4;
        case 0x3a46e8u: goto label_3a46e8;
        case 0x3a46ecu: goto label_3a46ec;
        case 0x3a46f0u: goto label_3a46f0;
        case 0x3a46f4u: goto label_3a46f4;
        case 0x3a46f8u: goto label_3a46f8;
        case 0x3a46fcu: goto label_3a46fc;
        case 0x3a4700u: goto label_3a4700;
        case 0x3a4704u: goto label_3a4704;
        case 0x3a4708u: goto label_3a4708;
        case 0x3a470cu: goto label_3a470c;
        case 0x3a4710u: goto label_3a4710;
        case 0x3a4714u: goto label_3a4714;
        case 0x3a4718u: goto label_3a4718;
        case 0x3a471cu: goto label_3a471c;
        case 0x3a4720u: goto label_3a4720;
        case 0x3a4724u: goto label_3a4724;
        case 0x3a4728u: goto label_3a4728;
        case 0x3a472cu: goto label_3a472c;
        case 0x3a4730u: goto label_3a4730;
        case 0x3a4734u: goto label_3a4734;
        case 0x3a4738u: goto label_3a4738;
        case 0x3a473cu: goto label_3a473c;
        case 0x3a4740u: goto label_3a4740;
        case 0x3a4744u: goto label_3a4744;
        case 0x3a4748u: goto label_3a4748;
        case 0x3a474cu: goto label_3a474c;
        case 0x3a4750u: goto label_3a4750;
        case 0x3a4754u: goto label_3a4754;
        case 0x3a4758u: goto label_3a4758;
        case 0x3a475cu: goto label_3a475c;
        case 0x3a4760u: goto label_3a4760;
        case 0x3a4764u: goto label_3a4764;
        case 0x3a4768u: goto label_3a4768;
        case 0x3a476cu: goto label_3a476c;
        case 0x3a4770u: goto label_3a4770;
        case 0x3a4774u: goto label_3a4774;
        case 0x3a4778u: goto label_3a4778;
        case 0x3a477cu: goto label_3a477c;
        case 0x3a4780u: goto label_3a4780;
        case 0x3a4784u: goto label_3a4784;
        case 0x3a4788u: goto label_3a4788;
        case 0x3a478cu: goto label_3a478c;
        case 0x3a4790u: goto label_3a4790;
        case 0x3a4794u: goto label_3a4794;
        case 0x3a4798u: goto label_3a4798;
        case 0x3a479cu: goto label_3a479c;
        case 0x3a47a0u: goto label_3a47a0;
        case 0x3a47a4u: goto label_3a47a4;
        case 0x3a47a8u: goto label_3a47a8;
        case 0x3a47acu: goto label_3a47ac;
        case 0x3a47b0u: goto label_3a47b0;
        case 0x3a47b4u: goto label_3a47b4;
        case 0x3a47b8u: goto label_3a47b8;
        case 0x3a47bcu: goto label_3a47bc;
        case 0x3a47c0u: goto label_3a47c0;
        case 0x3a47c4u: goto label_3a47c4;
        case 0x3a47c8u: goto label_3a47c8;
        case 0x3a47ccu: goto label_3a47cc;
        case 0x3a47d0u: goto label_3a47d0;
        case 0x3a47d4u: goto label_3a47d4;
        case 0x3a47d8u: goto label_3a47d8;
        case 0x3a47dcu: goto label_3a47dc;
        case 0x3a47e0u: goto label_3a47e0;
        case 0x3a47e4u: goto label_3a47e4;
        case 0x3a47e8u: goto label_3a47e8;
        case 0x3a47ecu: goto label_3a47ec;
        case 0x3a47f0u: goto label_3a47f0;
        case 0x3a47f4u: goto label_3a47f4;
        case 0x3a47f8u: goto label_3a47f8;
        case 0x3a47fcu: goto label_3a47fc;
        case 0x3a4800u: goto label_3a4800;
        case 0x3a4804u: goto label_3a4804;
        case 0x3a4808u: goto label_3a4808;
        case 0x3a480cu: goto label_3a480c;
        case 0x3a4810u: goto label_3a4810;
        case 0x3a4814u: goto label_3a4814;
        case 0x3a4818u: goto label_3a4818;
        case 0x3a481cu: goto label_3a481c;
        case 0x3a4820u: goto label_3a4820;
        case 0x3a4824u: goto label_3a4824;
        case 0x3a4828u: goto label_3a4828;
        case 0x3a482cu: goto label_3a482c;
        case 0x3a4830u: goto label_3a4830;
        case 0x3a4834u: goto label_3a4834;
        case 0x3a4838u: goto label_3a4838;
        case 0x3a483cu: goto label_3a483c;
        case 0x3a4840u: goto label_3a4840;
        case 0x3a4844u: goto label_3a4844;
        case 0x3a4848u: goto label_3a4848;
        case 0x3a484cu: goto label_3a484c;
        case 0x3a4850u: goto label_3a4850;
        case 0x3a4854u: goto label_3a4854;
        case 0x3a4858u: goto label_3a4858;
        case 0x3a485cu: goto label_3a485c;
        case 0x3a4860u: goto label_3a4860;
        case 0x3a4864u: goto label_3a4864;
        case 0x3a4868u: goto label_3a4868;
        case 0x3a486cu: goto label_3a486c;
        case 0x3a4870u: goto label_3a4870;
        case 0x3a4874u: goto label_3a4874;
        case 0x3a4878u: goto label_3a4878;
        case 0x3a487cu: goto label_3a487c;
        case 0x3a4880u: goto label_3a4880;
        case 0x3a4884u: goto label_3a4884;
        case 0x3a4888u: goto label_3a4888;
        case 0x3a488cu: goto label_3a488c;
        case 0x3a4890u: goto label_3a4890;
        case 0x3a4894u: goto label_3a4894;
        case 0x3a4898u: goto label_3a4898;
        case 0x3a489cu: goto label_3a489c;
        case 0x3a48a0u: goto label_3a48a0;
        case 0x3a48a4u: goto label_3a48a4;
        case 0x3a48a8u: goto label_3a48a8;
        case 0x3a48acu: goto label_3a48ac;
        case 0x3a48b0u: goto label_3a48b0;
        case 0x3a48b4u: goto label_3a48b4;
        case 0x3a48b8u: goto label_3a48b8;
        case 0x3a48bcu: goto label_3a48bc;
        case 0x3a48c0u: goto label_3a48c0;
        case 0x3a48c4u: goto label_3a48c4;
        case 0x3a48c8u: goto label_3a48c8;
        case 0x3a48ccu: goto label_3a48cc;
        case 0x3a48d0u: goto label_3a48d0;
        case 0x3a48d4u: goto label_3a48d4;
        case 0x3a48d8u: goto label_3a48d8;
        case 0x3a48dcu: goto label_3a48dc;
        case 0x3a48e0u: goto label_3a48e0;
        case 0x3a48e4u: goto label_3a48e4;
        case 0x3a48e8u: goto label_3a48e8;
        case 0x3a48ecu: goto label_3a48ec;
        case 0x3a48f0u: goto label_3a48f0;
        case 0x3a48f4u: goto label_3a48f4;
        case 0x3a48f8u: goto label_3a48f8;
        case 0x3a48fcu: goto label_3a48fc;
        case 0x3a4900u: goto label_3a4900;
        case 0x3a4904u: goto label_3a4904;
        case 0x3a4908u: goto label_3a4908;
        case 0x3a490cu: goto label_3a490c;
        case 0x3a4910u: goto label_3a4910;
        case 0x3a4914u: goto label_3a4914;
        case 0x3a4918u: goto label_3a4918;
        case 0x3a491cu: goto label_3a491c;
        case 0x3a4920u: goto label_3a4920;
        case 0x3a4924u: goto label_3a4924;
        case 0x3a4928u: goto label_3a4928;
        case 0x3a492cu: goto label_3a492c;
        case 0x3a4930u: goto label_3a4930;
        case 0x3a4934u: goto label_3a4934;
        case 0x3a4938u: goto label_3a4938;
        case 0x3a493cu: goto label_3a493c;
        case 0x3a4940u: goto label_3a4940;
        case 0x3a4944u: goto label_3a4944;
        case 0x3a4948u: goto label_3a4948;
        case 0x3a494cu: goto label_3a494c;
        case 0x3a4950u: goto label_3a4950;
        case 0x3a4954u: goto label_3a4954;
        case 0x3a4958u: goto label_3a4958;
        case 0x3a495cu: goto label_3a495c;
        case 0x3a4960u: goto label_3a4960;
        case 0x3a4964u: goto label_3a4964;
        case 0x3a4968u: goto label_3a4968;
        case 0x3a496cu: goto label_3a496c;
        case 0x3a4970u: goto label_3a4970;
        case 0x3a4974u: goto label_3a4974;
        case 0x3a4978u: goto label_3a4978;
        case 0x3a497cu: goto label_3a497c;
        case 0x3a4980u: goto label_3a4980;
        case 0x3a4984u: goto label_3a4984;
        case 0x3a4988u: goto label_3a4988;
        case 0x3a498cu: goto label_3a498c;
        case 0x3a4990u: goto label_3a4990;
        case 0x3a4994u: goto label_3a4994;
        case 0x3a4998u: goto label_3a4998;
        case 0x3a499cu: goto label_3a499c;
        case 0x3a49a0u: goto label_3a49a0;
        case 0x3a49a4u: goto label_3a49a4;
        case 0x3a49a8u: goto label_3a49a8;
        case 0x3a49acu: goto label_3a49ac;
        case 0x3a49b0u: goto label_3a49b0;
        case 0x3a49b4u: goto label_3a49b4;
        case 0x3a49b8u: goto label_3a49b8;
        case 0x3a49bcu: goto label_3a49bc;
        case 0x3a49c0u: goto label_3a49c0;
        case 0x3a49c4u: goto label_3a49c4;
        case 0x3a49c8u: goto label_3a49c8;
        case 0x3a49ccu: goto label_3a49cc;
        case 0x3a49d0u: goto label_3a49d0;
        case 0x3a49d4u: goto label_3a49d4;
        case 0x3a49d8u: goto label_3a49d8;
        case 0x3a49dcu: goto label_3a49dc;
        case 0x3a49e0u: goto label_3a49e0;
        case 0x3a49e4u: goto label_3a49e4;
        case 0x3a49e8u: goto label_3a49e8;
        case 0x3a49ecu: goto label_3a49ec;
        case 0x3a49f0u: goto label_3a49f0;
        case 0x3a49f4u: goto label_3a49f4;
        case 0x3a49f8u: goto label_3a49f8;
        case 0x3a49fcu: goto label_3a49fc;
        case 0x3a4a00u: goto label_3a4a00;
        case 0x3a4a04u: goto label_3a4a04;
        case 0x3a4a08u: goto label_3a4a08;
        case 0x3a4a0cu: goto label_3a4a0c;
        case 0x3a4a10u: goto label_3a4a10;
        case 0x3a4a14u: goto label_3a4a14;
        case 0x3a4a18u: goto label_3a4a18;
        case 0x3a4a1cu: goto label_3a4a1c;
        case 0x3a4a20u: goto label_3a4a20;
        case 0x3a4a24u: goto label_3a4a24;
        case 0x3a4a28u: goto label_3a4a28;
        case 0x3a4a2cu: goto label_3a4a2c;
        case 0x3a4a30u: goto label_3a4a30;
        case 0x3a4a34u: goto label_3a4a34;
        case 0x3a4a38u: goto label_3a4a38;
        case 0x3a4a3cu: goto label_3a4a3c;
        case 0x3a4a40u: goto label_3a4a40;
        case 0x3a4a44u: goto label_3a4a44;
        case 0x3a4a48u: goto label_3a4a48;
        case 0x3a4a4cu: goto label_3a4a4c;
        case 0x3a4a50u: goto label_3a4a50;
        case 0x3a4a54u: goto label_3a4a54;
        case 0x3a4a58u: goto label_3a4a58;
        case 0x3a4a5cu: goto label_3a4a5c;
        case 0x3a4a60u: goto label_3a4a60;
        case 0x3a4a64u: goto label_3a4a64;
        case 0x3a4a68u: goto label_3a4a68;
        case 0x3a4a6cu: goto label_3a4a6c;
        case 0x3a4a70u: goto label_3a4a70;
        case 0x3a4a74u: goto label_3a4a74;
        case 0x3a4a78u: goto label_3a4a78;
        case 0x3a4a7cu: goto label_3a4a7c;
        case 0x3a4a80u: goto label_3a4a80;
        case 0x3a4a84u: goto label_3a4a84;
        case 0x3a4a88u: goto label_3a4a88;
        case 0x3a4a8cu: goto label_3a4a8c;
        case 0x3a4a90u: goto label_3a4a90;
        case 0x3a4a94u: goto label_3a4a94;
        case 0x3a4a98u: goto label_3a4a98;
        case 0x3a4a9cu: goto label_3a4a9c;
        case 0x3a4aa0u: goto label_3a4aa0;
        case 0x3a4aa4u: goto label_3a4aa4;
        case 0x3a4aa8u: goto label_3a4aa8;
        case 0x3a4aacu: goto label_3a4aac;
        case 0x3a4ab0u: goto label_3a4ab0;
        case 0x3a4ab4u: goto label_3a4ab4;
        case 0x3a4ab8u: goto label_3a4ab8;
        case 0x3a4abcu: goto label_3a4abc;
        case 0x3a4ac0u: goto label_3a4ac0;
        case 0x3a4ac4u: goto label_3a4ac4;
        case 0x3a4ac8u: goto label_3a4ac8;
        case 0x3a4accu: goto label_3a4acc;
        case 0x3a4ad0u: goto label_3a4ad0;
        case 0x3a4ad4u: goto label_3a4ad4;
        case 0x3a4ad8u: goto label_3a4ad8;
        case 0x3a4adcu: goto label_3a4adc;
        case 0x3a4ae0u: goto label_3a4ae0;
        case 0x3a4ae4u: goto label_3a4ae4;
        case 0x3a4ae8u: goto label_3a4ae8;
        case 0x3a4aecu: goto label_3a4aec;
        case 0x3a4af0u: goto label_3a4af0;
        case 0x3a4af4u: goto label_3a4af4;
        case 0x3a4af8u: goto label_3a4af8;
        case 0x3a4afcu: goto label_3a4afc;
        case 0x3a4b00u: goto label_3a4b00;
        case 0x3a4b04u: goto label_3a4b04;
        case 0x3a4b08u: goto label_3a4b08;
        case 0x3a4b0cu: goto label_3a4b0c;
        case 0x3a4b10u: goto label_3a4b10;
        case 0x3a4b14u: goto label_3a4b14;
        case 0x3a4b18u: goto label_3a4b18;
        case 0x3a4b1cu: goto label_3a4b1c;
        case 0x3a4b20u: goto label_3a4b20;
        case 0x3a4b24u: goto label_3a4b24;
        case 0x3a4b28u: goto label_3a4b28;
        case 0x3a4b2cu: goto label_3a4b2c;
        case 0x3a4b30u: goto label_3a4b30;
        case 0x3a4b34u: goto label_3a4b34;
        case 0x3a4b38u: goto label_3a4b38;
        case 0x3a4b3cu: goto label_3a4b3c;
        case 0x3a4b40u: goto label_3a4b40;
        case 0x3a4b44u: goto label_3a4b44;
        case 0x3a4b48u: goto label_3a4b48;
        case 0x3a4b4cu: goto label_3a4b4c;
        case 0x3a4b50u: goto label_3a4b50;
        case 0x3a4b54u: goto label_3a4b54;
        case 0x3a4b58u: goto label_3a4b58;
        case 0x3a4b5cu: goto label_3a4b5c;
        case 0x3a4b60u: goto label_3a4b60;
        case 0x3a4b64u: goto label_3a4b64;
        case 0x3a4b68u: goto label_3a4b68;
        case 0x3a4b6cu: goto label_3a4b6c;
        case 0x3a4b70u: goto label_3a4b70;
        case 0x3a4b74u: goto label_3a4b74;
        case 0x3a4b78u: goto label_3a4b78;
        case 0x3a4b7cu: goto label_3a4b7c;
        case 0x3a4b80u: goto label_3a4b80;
        case 0x3a4b84u: goto label_3a4b84;
        case 0x3a4b88u: goto label_3a4b88;
        case 0x3a4b8cu: goto label_3a4b8c;
        case 0x3a4b90u: goto label_3a4b90;
        case 0x3a4b94u: goto label_3a4b94;
        case 0x3a4b98u: goto label_3a4b98;
        case 0x3a4b9cu: goto label_3a4b9c;
        default: break;
    }

    ctx->pc = 0x3a3440u;

label_3a3440:
    // 0x3a3440: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a3440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3a3444:
    // 0x3a3444: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a3444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a3448:
    // 0x3a3448: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a3448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a344c:
    // 0x3a344c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a344cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3a3450:
    // 0x3a3450: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a3450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3a3454:
    // 0x3a3454: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a3454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a3458:
    // 0x3a3458: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a3458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a345c:
    // 0x3a345c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a3460:
    // 0x3a3460: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a3460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3464:
    // 0x3a3464: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a3464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a3468:
    // 0x3a3468: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a3468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a346c:
    // 0x3a346c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a3470:
    // 0x3a3470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a3474:
    // 0x3a3474: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3a3474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a3478:
    // 0x3a3478: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x3a3478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_3a347c:
    // 0x3a347c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a3480:
    // 0x3a3480: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3a3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3a3484:
    // 0x3a3484: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a3484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a3488:
    // 0x3a3488: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x3a3488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_3a348c:
    // 0x3a348c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3a348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a3490:
    // 0x3a3490: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a3490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a3494:
    // 0x3a3494: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a3494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3a3498:
    // 0x3a3498: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3a3498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a349c:
    // 0x3a349c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a349cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a34a0:
    // 0x3a34a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a34a4:
    // 0x3a34a4: 0xc0fe54c  jal         func_3F9530
label_3a34a8:
    if (ctx->pc == 0x3A34A8u) {
        ctx->pc = 0x3A34A8u;
            // 0x3a34a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3A34ACu;
        goto label_3a34ac;
    }
    ctx->pc = 0x3A34A4u;
    SET_GPR_U32(ctx, 31, 0x3A34ACu);
    ctx->pc = 0x3A34A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A34A4u;
            // 0x3a34a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A34ACu; }
        if (ctx->pc != 0x3A34ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A34ACu; }
        if (ctx->pc != 0x3A34ACu) { return; }
    }
    ctx->pc = 0x3A34ACu;
label_3a34ac:
    // 0x3a34ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3a34acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3a34b0:
    // 0x3a34b0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3a34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3a34b4:
    // 0x3a34b4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3a34b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a34b8:
    // 0x3a34b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a34b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a34bc:
    // 0x3a34bc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3a34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a34c0:
    // 0x3a34c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a34c4:
    // 0x3a34c4: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x3a34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
label_3a34c8:
    // 0x3a34c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3a34cc:
    // 0x3a34cc: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x3a34ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a34d0:
    // 0x3a34d0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a34d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a34d4:
    // 0x3a34d4: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x3a34d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a34d8:
    // 0x3a34d8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a34dc:
    // 0x3a34dc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3a34dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3a34e0:
    // 0x3a34e0: 0xc0fe54c  jal         func_3F9530
label_3a34e4:
    if (ctx->pc == 0x3A34E4u) {
        ctx->pc = 0x3A34E4u;
            // 0x3a34e4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A34E8u;
        goto label_3a34e8;
    }
    ctx->pc = 0x3A34E0u;
    SET_GPR_U32(ctx, 31, 0x3A34E8u);
    ctx->pc = 0x3A34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A34E0u;
            // 0x3a34e4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A34E8u; }
        if (ctx->pc != 0x3A34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A34E8u; }
        if (ctx->pc != 0x3A34E8u) { return; }
    }
    ctx->pc = 0x3A34E8u;
label_3a34e8:
    // 0x3a34e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a34e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a34ec:
    // 0x3a34ec: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_3a34f0:
    if (ctx->pc == 0x3A34F0u) {
        ctx->pc = 0x3A34F4u;
        goto label_3a34f4;
    }
    ctx->pc = 0x3A34ECu;
    {
        const bool branch_taken_0x3a34ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a34ec) {
            ctx->pc = 0x3A3578u;
            goto label_3a3578;
        }
    }
    ctx->pc = 0x3A34F4u;
label_3a34f4:
    // 0x3a34f4: 0x8eb10034  lw          $s1, 0x34($s5)
    ctx->pc = 0x3a34f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a34f8:
    // 0x3a34f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a34fc:
    // 0x3a34fc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3a34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a3500:
    // 0x3a3500: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a3500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a3504:
    // 0x3a3504: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a3504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a3508:
    // 0x3a3508: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a3508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a350c:
    // 0x3a350c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3a350cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3a3510:
    // 0x3a3510: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x3a3510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
label_3a3514:
    // 0x3a3514: 0xae46001c  sw          $a2, 0x1C($s2)
    ctx->pc = 0x3a3514u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 6));
label_3a3518:
    // 0x3a3518: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3a3518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3a351c:
    // 0x3a351c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3a351cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3a3520:
    // 0x3a3520: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3a3520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3a3524:
    // 0x3a3524: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a3524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a3528:
    // 0x3a3528: 0xc0fe54c  jal         func_3F9530
label_3a352c:
    if (ctx->pc == 0x3A352Cu) {
        ctx->pc = 0x3A352Cu;
            // 0x3a352c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3530u;
        goto label_3a3530;
    }
    ctx->pc = 0x3A3528u;
    SET_GPR_U32(ctx, 31, 0x3A3530u);
    ctx->pc = 0x3A352Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3528u;
            // 0x3a352c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3530u; }
        if (ctx->pc != 0x3A3530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3530u; }
        if (ctx->pc != 0x3A3530u) { return; }
    }
    ctx->pc = 0x3A3530u;
label_3a3530:
    // 0x3a3530: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3a3530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3a3534:
    // 0x3a3534: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a3534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a3538:
    // 0x3a3538: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3a3538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3a353c:
    // 0x3a353c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x3a353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a3540:
    // 0x3a3540: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3a3540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3a3544:
    // 0x3a3544: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x3a3544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
label_3a3548:
    // 0x3a3548: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3a3548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_3a354c:
    // 0x3a354c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3550:
    // 0x3a3550: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a3550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3a3554:
    // 0x3a3554: 0x24052800  addiu       $a1, $zero, 0x2800
    ctx->pc = 0x3a3554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
label_3a3558:
    // 0x3a3558: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x3a3558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_3a355c:
    // 0x3a355c: 0xae450034  sw          $a1, 0x34($s2)
    ctx->pc = 0x3a355cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 5));
label_3a3560:
    // 0x3a3560: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x3a3560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_3a3564:
    // 0x3a3564: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a3564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a3568:
    // 0x3a3568: 0xc0fe54c  jal         func_3F9530
label_3a356c:
    if (ctx->pc == 0x3A356Cu) {
        ctx->pc = 0x3A356Cu;
            // 0x3a356c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3A3570u;
        goto label_3a3570;
    }
    ctx->pc = 0x3A3568u;
    SET_GPR_U32(ctx, 31, 0x3A3570u);
    ctx->pc = 0x3A356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3568u;
            // 0x3a356c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3570u; }
        if (ctx->pc != 0x3A3570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3570u; }
        if (ctx->pc != 0x3A3570u) { return; }
    }
    ctx->pc = 0x3A3570u;
label_3a3570:
    // 0x3a3570: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x3a3570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_3a3574:
    // 0x3a3574: 0x0  nop
    ctx->pc = 0x3a3574u;
    // NOP
label_3a3578:
    // 0x3a3578: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a3578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a357c:
    // 0x3a357c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a357cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a3580:
    // 0x3a3580: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x3a3580u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_3a3584:
    // 0x3a3584: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a3584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a3588:
    // 0x3a3588: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_3a358c:
    if (ctx->pc == 0x3A358Cu) {
        ctx->pc = 0x3A358Cu;
            // 0x3a358c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A3590u;
        goto label_3a3590;
    }
    ctx->pc = 0x3A3588u;
    {
        const bool branch_taken_0x3a3588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3588u;
            // 0x3a358c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3588) {
            ctx->pc = 0x3A34D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a34d8;
        }
    }
    ctx->pc = 0x3A3590u;
label_3a3590:
    // 0x3a3590: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x3a3590u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a3594:
    // 0x3a3594: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a3594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3598:
    // 0x3a3598: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a3598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a359c:
    // 0x3a359c: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x3a359cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a35a0:
    // 0x3a35a0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3a35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3a35a4:
    // 0x3a35a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a35a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a35a8:
    // 0x3a35a8: 0x111023  negu        $v0, $s1
    ctx->pc = 0x3a35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_3a35ac:
    // 0x3a35ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a35acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a35b0:
    // 0x3a35b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a35b4:
    // 0x3a35b4: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x3a35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_3a35b8:
    // 0x3a35b8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3a35b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a35bc:
    // 0x3a35bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x3a35bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3a35c0:
    // 0x3a35c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3a35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3a35c4:
    // 0x3a35c4: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3a35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3a35c8:
    // 0x3a35c8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3a35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_3a35cc:
    // 0x3a35cc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_3a35d0:
    if (ctx->pc == 0x3A35D0u) {
        ctx->pc = 0x3A35D0u;
            // 0x3a35d0: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->pc = 0x3A35D4u;
        goto label_3a35d4;
    }
    ctx->pc = 0x3A35CCu;
    {
        const bool branch_taken_0x3a35cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A35D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A35CCu;
            // 0x3a35d0: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35cc) {
            ctx->pc = 0x3A35F8u;
            goto label_3a35f8;
        }
    }
    ctx->pc = 0x3A35D4u;
label_3a35d4:
    // 0x3a35d4: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x3a35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_3a35d8:
    // 0x3a35d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a35dc:
    if (ctx->pc == 0x3A35DCu) {
        ctx->pc = 0x3A35E0u;
        goto label_3a35e0;
    }
    ctx->pc = 0x3A35D8u;
    {
        const bool branch_taken_0x3a35d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a35d8) {
            ctx->pc = 0x3A35E8u;
            goto label_3a35e8;
        }
    }
    ctx->pc = 0x3A35E0u;
label_3a35e0:
    // 0x3a35e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a35e4:
    if (ctx->pc == 0x3A35E4u) {
        ctx->pc = 0x3A35E4u;
            // 0x3a35e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A35E8u;
        goto label_3a35e8;
    }
    ctx->pc = 0x3A35E0u;
    {
        const bool branch_taken_0x3a35e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A35E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A35E0u;
            // 0x3a35e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35e0) {
            ctx->pc = 0x3A3608u;
            goto label_3a3608;
        }
    }
    ctx->pc = 0x3A35E8u;
label_3a35e8:
    // 0x3a35e8: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x3a35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_3a35ec:
    // 0x3a35ec: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a35ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a35f0:
    // 0x3a35f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a35f4:
    if (ctx->pc == 0x3A35F4u) {
        ctx->pc = 0x3A35F4u;
            // 0x3a35f4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A35F8u;
        goto label_3a35f8;
    }
    ctx->pc = 0x3A35F0u;
    {
        const bool branch_taken_0x3a35f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A35F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A35F0u;
            // 0x3a35f4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35f0) {
            ctx->pc = 0x3A3608u;
            goto label_3a3608;
        }
    }
    ctx->pc = 0x3A35F8u;
label_3a35f8:
    // 0x3a35f8: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x3a35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3a35fc:
    // 0x3a35fc: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a35fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a3600:
    // 0x3a3600: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3a3600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3a3604:
    // 0x3a3604: 0x0  nop
    ctx->pc = 0x3a3604u;
    // NOP
label_3a3608:
    // 0x3a3608: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a3608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a360c:
    // 0x3a360c: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_3a3610:
    if (ctx->pc == 0x3A3610u) {
        ctx->pc = 0x3A3614u;
        goto label_3a3614;
    }
    ctx->pc = 0x3A360Cu;
    {
        const bool branch_taken_0x3a360c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a360c) {
            ctx->pc = 0x3A3638u;
            goto label_3a3638;
        }
    }
    ctx->pc = 0x3A3614u;
label_3a3614:
    // 0x3a3614: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x3a3614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_3a3618:
    // 0x3a3618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a361c:
    if (ctx->pc == 0x3A361Cu) {
        ctx->pc = 0x3A3620u;
        goto label_3a3620;
    }
    ctx->pc = 0x3A3618u;
    {
        const bool branch_taken_0x3a3618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3618) {
            ctx->pc = 0x3A3628u;
            goto label_3a3628;
        }
    }
    ctx->pc = 0x3A3620u;
label_3a3620:
    // 0x3a3620: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a3624:
    if (ctx->pc == 0x3A3624u) {
        ctx->pc = 0x3A3624u;
            // 0x3a3624: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3628u;
        goto label_3a3628;
    }
    ctx->pc = 0x3A3620u;
    {
        const bool branch_taken_0x3a3620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3620u;
            // 0x3a3624: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3620) {
            ctx->pc = 0x3A3648u;
            goto label_3a3648;
        }
    }
    ctx->pc = 0x3A3628u;
label_3a3628:
    // 0x3a3628: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x3a3628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3a362c:
    // 0x3a362c: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x3a362cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
label_3a3630:
    // 0x3a3630: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a3634:
    if (ctx->pc == 0x3A3634u) {
        ctx->pc = 0x3A3634u;
            // 0x3a3634: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3638u;
        goto label_3a3638;
    }
    ctx->pc = 0x3A3630u;
    {
        const bool branch_taken_0x3a3630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3630u;
            // 0x3a3634: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3630) {
            ctx->pc = 0x3A3648u;
            goto label_3a3648;
        }
    }
    ctx->pc = 0x3A3638u;
label_3a3638:
    // 0x3a3638: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a363c:
    // 0x3a363c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a363cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a3640:
    // 0x3a3640: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3a3640u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_3a3644:
    // 0x3a3644: 0x0  nop
    ctx->pc = 0x3a3644u;
    // NOP
label_3a3648:
    // 0x3a3648: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a364c:
    // 0x3a364c: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
label_3a3650:
    if (ctx->pc == 0x3A3650u) {
        ctx->pc = 0x3A3654u;
        goto label_3a3654;
    }
    ctx->pc = 0x3A364Cu;
    {
        const bool branch_taken_0x3a364c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a364c) {
            ctx->pc = 0x3A36A0u;
            goto label_3a36a0;
        }
    }
    ctx->pc = 0x3A3654u;
label_3a3654:
    // 0x3a3654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3658:
    // 0x3a3658: 0x1263000d  beq         $s3, $v1, . + 4 + (0xD << 2)
label_3a365c:
    if (ctx->pc == 0x3A365Cu) {
        ctx->pc = 0x3A3660u;
        goto label_3a3660;
    }
    ctx->pc = 0x3A3658u;
    {
        const bool branch_taken_0x3a3658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3658) {
            ctx->pc = 0x3A3690u;
            goto label_3a3690;
        }
    }
    ctx->pc = 0x3A3660u;
label_3a3660:
    // 0x3a3660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3664:
    // 0x3a3664: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_3a3668:
    if (ctx->pc == 0x3A3668u) {
        ctx->pc = 0x3A366Cu;
        goto label_3a366c;
    }
    ctx->pc = 0x3A3664u;
    {
        const bool branch_taken_0x3a3664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a3664) {
            ctx->pc = 0x3A3688u;
            goto label_3a3688;
        }
    }
    ctx->pc = 0x3A366Cu;
label_3a366c:
    // 0x3a366c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3a3670:
    if (ctx->pc == 0x3A3670u) {
        ctx->pc = 0x3A3674u;
        goto label_3a3674;
    }
    ctx->pc = 0x3A366Cu;
    {
        const bool branch_taken_0x3a366c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a366c) {
            ctx->pc = 0x3A3680u;
            goto label_3a3680;
        }
    }
    ctx->pc = 0x3A3674u;
label_3a3674:
    // 0x3a3674: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a3678:
    if (ctx->pc == 0x3A3678u) {
        ctx->pc = 0x3A367Cu;
        goto label_3a367c;
    }
    ctx->pc = 0x3A3674u;
    {
        const bool branch_taken_0x3a3674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3674) {
            ctx->pc = 0x3A36A8u;
            goto label_3a36a8;
        }
    }
    ctx->pc = 0x3A367Cu;
label_3a367c:
    // 0x3a367c: 0x0  nop
    ctx->pc = 0x3a367cu;
    // NOP
label_3a3680:
    // 0x3a3680: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a3684:
    if (ctx->pc == 0x3A3684u) {
        ctx->pc = 0x3A3684u;
            // 0x3a3684: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3A3688u;
        goto label_3a3688;
    }
    ctx->pc = 0x3A3680u;
    {
        const bool branch_taken_0x3a3680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3680u;
            // 0x3a3684: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3680) {
            ctx->pc = 0x3A36A8u;
            goto label_3a36a8;
        }
    }
    ctx->pc = 0x3A3688u;
label_3a3688:
    // 0x3a3688: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a368c:
    if (ctx->pc == 0x3A368Cu) {
        ctx->pc = 0x3A368Cu;
            // 0x3a368c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3A3690u;
        goto label_3a3690;
    }
    ctx->pc = 0x3A3688u;
    {
        const bool branch_taken_0x3a3688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3688u;
            // 0x3a368c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3688) {
            ctx->pc = 0x3A36A8u;
            goto label_3a36a8;
        }
    }
    ctx->pc = 0x3A3690u;
label_3a3690:
    // 0x3a3690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3694:
    // 0x3a3694: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a3698:
    if (ctx->pc == 0x3A3698u) {
        ctx->pc = 0x3A3698u;
            // 0x3a3698: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A369Cu;
        goto label_3a369c;
    }
    ctx->pc = 0x3A3694u;
    {
        const bool branch_taken_0x3a3694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3694u;
            // 0x3a3698: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3694) {
            ctx->pc = 0x3A36A8u;
            goto label_3a36a8;
        }
    }
    ctx->pc = 0x3A369Cu;
label_3a369c:
    // 0x3a369c: 0x0  nop
    ctx->pc = 0x3a369cu;
    // NOP
label_3a36a0:
    // 0x3a36a0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3a36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3a36a4:
    // 0x3a36a4: 0x0  nop
    ctx->pc = 0x3a36a4u;
    // NOP
label_3a36a8:
    // 0x3a36a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a36ac:
    // 0x3a36ac: 0x8c4267e8  lw          $v0, 0x67E8($v0)
    ctx->pc = 0x3a36acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
label_3a36b0:
    // 0x3a36b0: 0x40f809  jalr        $v0
label_3a36b4:
    if (ctx->pc == 0x3A36B4u) {
        ctx->pc = 0x3A36B8u;
        goto label_3a36b8;
    }
    ctx->pc = 0x3A36B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A36B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A36B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A36B8u; }
            if (ctx->pc != 0x3A36B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A36B8u;
label_3a36b8:
    // 0x3a36b8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3a36b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3a36bc:
    // 0x3a36bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a36c0:
    // 0x3a36c0: 0x8c6664a8  lw          $a2, 0x64A8($v1)
    ctx->pc = 0x3a36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25768)));
label_3a36c4:
    // 0x3a36c4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3a36c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a36c8:
    // 0x3a36c8: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3a36c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_3a36cc:
    // 0x3a36cc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_3a36d0:
    // 0x3a36d0: 0x24632b90  addiu       $v1, $v1, 0x2B90
    ctx->pc = 0x3a36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11152));
label_3a36d4:
    // 0x3a36d4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3a36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3a36d8:
    // 0x3a36d8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3a36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a36dc:
    // 0x3a36dc: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x3a36dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_3a36e0:
    // 0x3a36e0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3a36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_3a36e4:
    // 0x3a36e4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x3a36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_3a36e8:
    // 0x3a36e8: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x3a36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_3a36ec:
    // 0x3a36ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3a36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3a36f0:
    // 0x3a36f0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a36f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a36f4:
    // 0x3a36f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a36f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a36f8:
    // 0x3a36f8: 0x320f809  jalr        $t9
label_3a36fc:
    if (ctx->pc == 0x3A36FCu) {
        ctx->pc = 0x3A36FCu;
            // 0x3a36fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3700u;
        goto label_3a3700;
    }
    ctx->pc = 0x3A36F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A3700u);
        ctx->pc = 0x3A36FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A36F8u;
            // 0x3a36fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A3700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A3700u; }
            if (ctx->pc != 0x3A3700u) { return; }
        }
        }
    }
    ctx->pc = 0x3A3700u;
label_3a3700:
    // 0x3a3700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3704:
    // 0x3a3704: 0xa2e2001c  sb          $v0, 0x1C($s7)
    ctx->pc = 0x3a3704u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 2));
label_3a3708:
    // 0x3a3708: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3a3708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3a370c:
    // 0x3a370c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a370cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a3710:
    // 0x3a3710: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a3710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a3714:
    // 0x3a3714: 0x320f809  jalr        $t9
label_3a3718:
    if (ctx->pc == 0x3A3718u) {
        ctx->pc = 0x3A371Cu;
        goto label_3a371c;
    }
    ctx->pc = 0x3A3714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A371Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A371Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A371Cu; }
            if (ctx->pc != 0x3A371Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A371Cu;
label_3a371c:
    // 0x3a371c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3a371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a3720:
    // 0x3a3720: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a3720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a3724:
    // 0x3a3724: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x3a3724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_3a3728:
    // 0x3a3728: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3a3728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3a372c:
    // 0x3a372c: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x3a372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_3a3730:
    // 0x3a3730: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a3730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a3734:
    // 0x3a3734: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x3a3734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a3738:
    // 0x3a3738: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
label_3a373c:
    if (ctx->pc == 0x3A373Cu) {
        ctx->pc = 0x3A373Cu;
            // 0x3a373c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A3740u;
        goto label_3a3740;
    }
    ctx->pc = 0x3A3738u;
    {
        const bool branch_taken_0x3a3738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3738u;
            // 0x3a373c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3738) {
            ctx->pc = 0x3A35A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a35a0;
        }
    }
    ctx->pc = 0x3A3740u;
label_3a3740:
    // 0x3a3740: 0x8fb300d0  lw          $s3, 0xD0($sp)
    ctx->pc = 0x3a3740u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a3744:
    // 0x3a3744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3748:
    // 0x3a3748: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a3748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a374c:
    // 0x3a374c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a3750:
    // 0x3a3750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a3750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a3754:
    // 0x3a3754: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a3754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a3758:
    // 0x3a3758: 0x320f809  jalr        $t9
label_3a375c:
    if (ctx->pc == 0x3A375Cu) {
        ctx->pc = 0x3A375Cu;
            // 0x3a375c: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->pc = 0x3A3760u;
        goto label_3a3760;
    }
    ctx->pc = 0x3A3758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A3760u);
        ctx->pc = 0x3A375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3758u;
            // 0x3a375c: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A3760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A3760u; }
            if (ctx->pc != 0x3A3760u) { return; }
        }
        }
    }
    ctx->pc = 0x3A3760u;
label_3a3760:
    // 0x3a3760: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
label_3a3764:
    if (ctx->pc == 0x3A3764u) {
        ctx->pc = 0x3A3768u;
        goto label_3a3768;
    }
    ctx->pc = 0x3A3760u;
    {
        const bool branch_taken_0x3a3760 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x3a3760) {
            ctx->pc = 0x3A3770u;
            goto label_3a3770;
        }
    }
    ctx->pc = 0x3A3768u;
label_3a3768:
    // 0x3a3768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a3768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a376c:
    // 0x3a376c: 0x0  nop
    ctx->pc = 0x3a376cu;
    // NOP
label_3a3770:
    // 0x3a3770: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a3770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a3774:
    // 0x3a3774: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a3774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a3778:
    // 0x3a3778: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3a377c:
    if (ctx->pc == 0x3A377Cu) {
        ctx->pc = 0x3A377Cu;
            // 0x3a377c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A3780u;
        goto label_3a3780;
    }
    ctx->pc = 0x3A3778u;
    {
        const bool branch_taken_0x3a3778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A377Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3778u;
            // 0x3a377c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3778) {
            ctx->pc = 0x3A374Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a374c;
        }
    }
    ctx->pc = 0x3A3780u;
label_3a3780:
    // 0x3a3780: 0x8fb300d0  lw          $s3, 0xD0($sp)
    ctx->pc = 0x3a3780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a3784:
    // 0x3a3784: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3788:
    // 0x3a3788: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a3788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a378c:
    // 0x3a378c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a3790:
    if (ctx->pc == 0x3A3790u) {
        ctx->pc = 0x3A3794u;
        goto label_3a3794;
    }
    ctx->pc = 0x3A378Cu;
    {
        const bool branch_taken_0x3a378c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a378c) {
            ctx->pc = 0x3A37A8u;
            goto label_3a37a8;
        }
    }
    ctx->pc = 0x3A3794u;
label_3a3794:
    // 0x3a3794: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a3794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a3798:
    // 0x3a3798: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a3798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a379c:
    // 0x3a379c: 0x320f809  jalr        $t9
label_3a37a0:
    if (ctx->pc == 0x3A37A0u) {
        ctx->pc = 0x3A37A0u;
            // 0x3a37a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A37A4u;
        goto label_3a37a4;
    }
    ctx->pc = 0x3A379Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A37A4u);
        ctx->pc = 0x3A37A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A379Cu;
            // 0x3a37a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A37A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A37A4u; }
            if (ctx->pc != 0x3A37A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A37A4u;
label_3a37a4:
    // 0x3a37a4: 0x0  nop
    ctx->pc = 0x3a37a4u;
    // NOP
label_3a37a8:
    // 0x3a37a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a37a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a37ac:
    // 0x3a37ac: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a37acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a37b0:
    // 0x3a37b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a37b4:
    if (ctx->pc == 0x3A37B4u) {
        ctx->pc = 0x3A37B4u;
            // 0x3a37b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A37B8u;
        goto label_3a37b8;
    }
    ctx->pc = 0x3A37B0u;
    {
        const bool branch_taken_0x3a37b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A37B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A37B0u;
            // 0x3a37b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37b0) {
            ctx->pc = 0x3A3788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a3788;
        }
    }
    ctx->pc = 0x3A37B8u;
label_3a37b8:
    // 0x3a37b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a37b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a37bc:
    // 0x3a37bc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3a37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a37c0:
    // 0x3a37c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3a37c4:
    if (ctx->pc == 0x3A37C4u) {
        ctx->pc = 0x3A37C8u;
        goto label_3a37c8;
    }
    ctx->pc = 0x3A37C0u;
    {
        const bool branch_taken_0x3a37c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a37c0) {
            ctx->pc = 0x3A37D8u;
            goto label_3a37d8;
        }
    }
    ctx->pc = 0x3A37C8u;
label_3a37c8:
    // 0x3a37c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a37c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a37cc:
    // 0x3a37cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a37ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a37d0:
    // 0x3a37d0: 0x320f809  jalr        $t9
label_3a37d4:
    if (ctx->pc == 0x3A37D4u) {
        ctx->pc = 0x3A37D4u;
            // 0x3a37d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A37D8u;
        goto label_3a37d8;
    }
    ctx->pc = 0x3A37D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A37D8u);
        ctx->pc = 0x3A37D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A37D0u;
            // 0x3a37d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A37D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A37D8u; }
            if (ctx->pc != 0x3A37D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A37D8u;
label_3a37d8:
    // 0x3a37d8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a37d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a37dc:
    // 0x3a37dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a37dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a37e0:
    // 0x3a37e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a37e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a37e4:
    // 0x3a37e4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a37e8:
    if (ctx->pc == 0x3A37E8u) {
        ctx->pc = 0x3A37E8u;
            // 0x3a37e8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x3A37ECu;
        goto label_3a37ec;
    }
    ctx->pc = 0x3A37E4u;
    {
        const bool branch_taken_0x3a37e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A37E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A37E4u;
            // 0x3a37e8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37e4) {
            ctx->pc = 0x3A37BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a37bc;
        }
    }
    ctx->pc = 0x3A37ECu;
label_3a37ec:
    // 0x3a37ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3a37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a37f0:
    // 0x3a37f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a37f4:
    if (ctx->pc == 0x3A37F4u) {
        ctx->pc = 0x3A37F4u;
            // 0x3a37f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A37F8u;
        goto label_3a37f8;
    }
    ctx->pc = 0x3A37F0u;
    {
        const bool branch_taken_0x3a37f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a37f0) {
            ctx->pc = 0x3A37F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A37F0u;
            // 0x3a37f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3808u;
            goto label_3a3808;
        }
    }
    ctx->pc = 0x3A37F8u;
label_3a37f8:
    // 0x3a37f8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a37fc:
    // 0x3a37fc: 0xc0fe48c  jal         func_3F9230
label_3a3800:
    if (ctx->pc == 0x3A3800u) {
        ctx->pc = 0x3A3800u;
            // 0x3a3800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3804u;
        goto label_3a3804;
    }
    ctx->pc = 0x3A37FCu;
    SET_GPR_U32(ctx, 31, 0x3A3804u);
    ctx->pc = 0x3A3800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A37FCu;
            // 0x3a3800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3804u; }
        if (ctx->pc != 0x3A3804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3804u; }
        if (ctx->pc != 0x3A3804u) { return; }
    }
    ctx->pc = 0x3A3804u;
label_3a3804:
    // 0x3a3804: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a3804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3808:
    // 0x3a3808: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a3808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a380c:
    // 0x3a380c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a380cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a3810:
    // 0x3a3810: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a3810u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a3814:
    // 0x3a3814: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a3814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a3818:
    // 0x3a3818: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a3818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a381c:
    // 0x3a381c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a381cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a3820:
    // 0x3a3820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a3820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a3824:
    // 0x3a3824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a3824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3828:
    // 0x3a3828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a382c:
    // 0x3a382c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a382cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3830:
    // 0x3a3830: 0x3e00008  jr          $ra
label_3a3834:
    if (ctx->pc == 0x3A3834u) {
        ctx->pc = 0x3A3834u;
            // 0x3a3834: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3A3838u;
        goto label_3a3838;
    }
    ctx->pc = 0x3A3830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3830u;
            // 0x3a3834: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A3838u;
label_3a3838:
    // 0x3a3838: 0x0  nop
    ctx->pc = 0x3a3838u;
    // NOP
label_3a383c:
    // 0x3a383c: 0x0  nop
    ctx->pc = 0x3a383cu;
    // NOP
label_3a3840:
    // 0x3a3840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a3844:
    // 0x3a3844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a3844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a3848:
    // 0x3a3848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a384c:
    // 0x3a384c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a384cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3850:
    // 0x3a3850: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3a3854:
    if (ctx->pc == 0x3A3854u) {
        ctx->pc = 0x3A3854u;
            // 0x3a3854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3858u;
        goto label_3a3858;
    }
    ctx->pc = 0x3A3850u;
    {
        const bool branch_taken_0x3a3850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3850) {
            ctx->pc = 0x3A3854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3850u;
            // 0x3a3854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3890u;
            goto label_3a3890;
        }
    }
    ctx->pc = 0x3A3858u;
label_3a3858:
    // 0x3a3858: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a3858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3a385c:
    // 0x3a385c: 0x24428800  addiu       $v0, $v0, -0x7800
    ctx->pc = 0x3a385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936576));
label_3a3860:
    // 0x3a3860: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3a3864:
    if (ctx->pc == 0x3A3864u) {
        ctx->pc = 0x3A3864u;
            // 0x3a3864: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3868u;
        goto label_3a3868;
    }
    ctx->pc = 0x3A3860u;
    {
        const bool branch_taken_0x3a3860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3860u;
            // 0x3a3864: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3860) {
            ctx->pc = 0x3A3874u;
            goto label_3a3874;
        }
    }
    ctx->pc = 0x3A3868u;
label_3a3868:
    // 0x3a3868: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a3868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a386c:
    // 0x3a386c: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x3a386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
label_3a3870:
    // 0x3a3870: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a3870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3a3874:
    // 0x3a3874: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3a3874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3a3878:
    // 0x3a3878: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a3878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3a387c:
    // 0x3a387c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3a3880:
    if (ctx->pc == 0x3A3880u) {
        ctx->pc = 0x3A3884u;
        goto label_3a3884;
    }
    ctx->pc = 0x3A387Cu;
    {
        const bool branch_taken_0x3a387c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a387c) {
            ctx->pc = 0x3A388Cu;
            goto label_3a388c;
        }
    }
    ctx->pc = 0x3A3884u;
label_3a3884:
    // 0x3a3884: 0xc0400a8  jal         func_1002A0
label_3a3888:
    if (ctx->pc == 0x3A3888u) {
        ctx->pc = 0x3A3888u;
            // 0x3a3888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A388Cu;
        goto label_3a388c;
    }
    ctx->pc = 0x3A3884u;
    SET_GPR_U32(ctx, 31, 0x3A388Cu);
    ctx->pc = 0x3A3888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3884u;
            // 0x3a3888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A388Cu; }
        if (ctx->pc != 0x3A388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A388Cu; }
        if (ctx->pc != 0x3A388Cu) { return; }
    }
    ctx->pc = 0x3A388Cu;
label_3a388c:
    // 0x3a388c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a388cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3890:
    // 0x3a3890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a3890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3894:
    // 0x3a3894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3898:
    // 0x3a3898: 0x3e00008  jr          $ra
label_3a389c:
    if (ctx->pc == 0x3A389Cu) {
        ctx->pc = 0x3A389Cu;
            // 0x3a389c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A38A0u;
        goto label_3a38a0;
    }
    ctx->pc = 0x3A3898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3898u;
            // 0x3a389c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A38A0u;
label_3a38a0:
    // 0x3a38a0: 0x3e00008  jr          $ra
label_3a38a4:
    if (ctx->pc == 0x3A38A4u) {
        ctx->pc = 0x3A38A4u;
            // 0x3a38a4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3A38A8u;
        goto label_3a38a8;
    }
    ctx->pc = 0x3A38A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A38A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A38A0u;
            // 0x3a38a4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A38A8u;
label_3a38a8:
    // 0x3a38a8: 0x0  nop
    ctx->pc = 0x3a38a8u;
    // NOP
label_3a38ac:
    // 0x3a38ac: 0x0  nop
    ctx->pc = 0x3a38acu;
    // NOP
label_3a38b0:
    // 0x3a38b0: 0x3e00008  jr          $ra
label_3a38b4:
    if (ctx->pc == 0x3A38B4u) {
        ctx->pc = 0x3A38B8u;
        goto label_3a38b8;
    }
    ctx->pc = 0x3A38B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A38B8u;
label_3a38b8:
    // 0x3a38b8: 0x0  nop
    ctx->pc = 0x3a38b8u;
    // NOP
label_3a38bc:
    // 0x3a38bc: 0x0  nop
    ctx->pc = 0x3a38bcu;
    // NOP
label_3a38c0:
    // 0x3a38c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a38c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a38c4:
    // 0x3a38c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a38c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a38c8:
    // 0x3a38c8: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x3a38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
label_3a38cc:
    // 0x3a38cc: 0x5460003d  bnel        $v1, $zero, . + 4 + (0x3D << 2)
label_3a38d0:
    if (ctx->pc == 0x3A38D0u) {
        ctx->pc = 0x3A38D0u;
            // 0x3a38d0: 0x30630100  andi        $v1, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x3A38D4u;
        goto label_3a38d4;
    }
    ctx->pc = 0x3A38CCu;
    {
        const bool branch_taken_0x3a38cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a38cc) {
            ctx->pc = 0x3A38D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A38CCu;
            // 0x3a38d0: 0x30630100  andi        $v1, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A39C4u;
            goto label_3a39c4;
        }
    }
    ctx->pc = 0x3A38D4u;
label_3a38d4:
    // 0x3a38d4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3a38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3a38d8:
    // 0x3a38d8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x3a38d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_3a38dc:
    // 0x3a38dc: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3a38dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a38e0:
    // 0x3a38e0: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x3a38e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
label_3a38e4:
    // 0x3a38e4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x3a38e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a38e8:
    // 0x3a38e8: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x3a38e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_3a38ec:
    // 0x3a38ec: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x3a38ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a38f0:
    // 0x3a38f0: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x3a38f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_3a38f4:
    // 0x3a38f4: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x3a38f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a38f8:
    // 0x3a38f8: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x3a38f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_3a38fc:
    // 0x3a38fc: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x3a38fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3900:
    // 0x3a3900: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x3a3900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_3a3904:
    // 0x3a3904: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x3a3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3908:
    // 0x3a3908: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x3a3908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_3a390c:
    // 0x3a390c: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x3a390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3910:
    // 0x3a3910: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x3a3910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_3a3914:
    // 0x3a3914: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x3a3914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3918:
    // 0x3a3918: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x3a3918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_3a391c:
    // 0x3a391c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x3a391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3920:
    // 0x3a3920: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x3a3920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_3a3924:
    // 0x3a3924: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x3a3924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3928:
    // 0x3a3928: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x3a3928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_3a392c:
    // 0x3a392c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x3a392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3930:
    // 0x3a3930: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x3a3930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_3a3934:
    // 0x3a3934: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x3a3934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3938:
    // 0x3a3938: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x3a3938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_3a393c:
    // 0x3a393c: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x3a393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3940:
    // 0x3a3940: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x3a3940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_3a3944:
    // 0x3a3944: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x3a3944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3948:
    // 0x3a3948: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x3a3948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_3a394c:
    // 0x3a394c: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x3a394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3950:
    // 0x3a3950: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x3a3950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_3a3954:
    // 0x3a3954: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x3a3954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3958:
    // 0x3a3958: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x3a3958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_3a395c:
    // 0x3a395c: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x3a395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3960:
    // 0x3a3960: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x3a3960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_3a3964:
    // 0x3a3964: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x3a3964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3968:
    // 0x3a3968: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x3a3968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_3a396c:
    // 0x3a396c: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x3a396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3970:
    // 0x3a3970: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x3a3970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_3a3974:
    // 0x3a3974: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x3a3974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3978:
    // 0x3a3978: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x3a3978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_3a397c:
    // 0x3a397c: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x3a397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3980:
    // 0x3a3980: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x3a3980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_3a3984:
    // 0x3a3984: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3a3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_3a3988:
    // 0x3a3988: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x3a3988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_3a398c:
    // 0x3a398c: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x3a398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3990:
    // 0x3a3990: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a3990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a3994:
    // 0x3a3994: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3a3994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3a3998:
    // 0x3a3998: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x3a3998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_3a399c:
    // 0x3a399c: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x3a399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_3a39a0:
    // 0x3a39a0: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3a39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3a39a4:
    // 0x3a39a4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3a39a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3a39a8:
    // 0x3a39a8: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x3a39a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
label_3a39ac:
    // 0x3a39ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a39acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a39b0:
    // 0x3a39b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3a39b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3a39b4:
    // 0x3a39b4: 0x320f809  jalr        $t9
label_3a39b8:
    if (ctx->pc == 0x3A39B8u) {
        ctx->pc = 0x3A39BCu;
        goto label_3a39bc;
    }
    ctx->pc = 0x3A39B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A39BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A39BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A39BCu; }
            if (ctx->pc != 0x3A39BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A39BCu;
label_3a39bc:
    // 0x3a39bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a39c0:
    if (ctx->pc == 0x3A39C0u) {
        ctx->pc = 0x3A39C0u;
            // 0x3a39c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3A39C4u;
        goto label_3a39c4;
    }
    ctx->pc = 0x3A39BCu;
    {
        const bool branch_taken_0x3a39bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A39C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A39BCu;
            // 0x3a39c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39bc) {
            ctx->pc = 0x3A39D8u;
            goto label_3a39d8;
        }
    }
    ctx->pc = 0x3A39C4u;
label_3a39c4:
    // 0x3a39c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3a39c8:
    if (ctx->pc == 0x3A39C8u) {
        ctx->pc = 0x3A39CCu;
        goto label_3a39cc;
    }
    ctx->pc = 0x3A39C4u;
    {
        const bool branch_taken_0x3a39c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a39c4) {
            ctx->pc = 0x3A39D4u;
            goto label_3a39d4;
        }
    }
    ctx->pc = 0x3A39CCu;
label_3a39cc:
    // 0x3a39cc: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x3a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_3a39d0:
    // 0x3a39d0: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x3a39d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
label_3a39d4:
    // 0x3a39d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a39d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a39d8:
    // 0x3a39d8: 0x3e00008  jr          $ra
label_3a39dc:
    if (ctx->pc == 0x3A39DCu) {
        ctx->pc = 0x3A39DCu;
            // 0x3a39dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3A39E0u;
        goto label_3a39e0;
    }
    ctx->pc = 0x3A39D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A39DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A39D8u;
            // 0x3a39dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A39E0u;
label_3a39e0:
    // 0x3a39e0: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x3a39e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_3a39e4:
    // 0x3a39e4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3a39e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3a39e8:
    // 0x3a39e8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3a39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3a39ec:
    // 0x3a39ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3a39ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3a39f0:
    // 0x3a39f0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3a39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a39f4:
    // 0x3a39f4: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x3a39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_3a39f8:
    // 0x3a39f8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3a39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a39fc:
    // 0x3a39fc: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x3a39fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_3a3a00:
    // 0x3a3a00: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3a3a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a04:
    // 0x3a3a04: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x3a3a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_3a3a08:
    // 0x3a3a08: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x3a3a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a0c:
    // 0x3a3a0c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x3a3a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3a3a10:
    // 0x3a3a10: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3a3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a14:
    // 0x3a3a14: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x3a3a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_3a3a18:
    // 0x3a3a18: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3a3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a1c:
    // 0x3a3a1c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x3a3a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_3a3a20:
    // 0x3a3a20: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x3a3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a24:
    // 0x3a3a24: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x3a3a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_3a3a28:
    // 0x3a3a28: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x3a3a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a2c:
    // 0x3a3a2c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x3a3a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_3a3a30:
    // 0x3a3a30: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x3a3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a34:
    // 0x3a3a34: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x3a3a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_3a3a38:
    // 0x3a3a38: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x3a3a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a3c:
    // 0x3a3a3c: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x3a3a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_3a3a40:
    // 0x3a3a40: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x3a3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a44:
    // 0x3a3a44: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x3a3a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_3a3a48:
    // 0x3a3a48: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x3a3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a4c:
    // 0x3a3a4c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x3a3a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_3a3a50:
    // 0x3a3a50: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x3a3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a54:
    // 0x3a3a54: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x3a3a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_3a3a58:
    // 0x3a3a58: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x3a3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a5c:
    // 0x3a3a5c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x3a3a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_3a3a60:
    // 0x3a3a60: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x3a3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a64:
    // 0x3a3a64: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x3a3a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_3a3a68:
    // 0x3a3a68: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x3a3a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a6c:
    // 0x3a3a6c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x3a3a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_3a3a70:
    // 0x3a3a70: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x3a3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3a74:
    // 0x3a3a74: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x3a3a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_3a3a78:
    // 0x3a3a78: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x3a3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3a3a7c:
    // 0x3a3a7c: 0x3e00008  jr          $ra
label_3a3a80:
    if (ctx->pc == 0x3A3A80u) {
        ctx->pc = 0x3A3A80u;
            // 0x3a3a80: 0xaca30054  sw          $v1, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3A3A84u;
        goto label_3a3a84;
    }
    ctx->pc = 0x3A3A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3A7Cu;
            // 0x3a3a80: 0xaca30054  sw          $v1, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A3A84u;
label_3a3a84:
    // 0x3a3a84: 0x0  nop
    ctx->pc = 0x3a3a84u;
    // NOP
label_3a3a88:
    // 0x3a3a88: 0x0  nop
    ctx->pc = 0x3a3a88u;
    // NOP
label_3a3a8c:
    // 0x3a3a8c: 0x0  nop
    ctx->pc = 0x3a3a8cu;
    // NOP
label_3a3a90:
    // 0x3a3a90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3a3a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3a3a94:
    // 0x3a3a94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a3a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3a3a98:
    // 0x3a3a98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a3a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a3a9c:
    // 0x3a3a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a3aa0:
    // 0x3a3aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a3aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3aa4:
    // 0x3a3aa4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a3aa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a3aa8:
    // 0x3a3aa8: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x3a3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_3a3aac:
    // 0x3a3aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a3ab0:
    if (ctx->pc == 0x3A3AB0u) {
        ctx->pc = 0x3A3AB0u;
            // 0x3a3ab0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3AB4u;
        goto label_3a3ab4;
    }
    ctx->pc = 0x3A3AACu;
    {
        const bool branch_taken_0x3a3aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3AACu;
            // 0x3a3ab0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3aac) {
            ctx->pc = 0x3A3ABCu;
            goto label_3a3abc;
        }
    }
    ctx->pc = 0x3A3AB4u;
label_3a3ab4:
    // 0x3a3ab4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a3ab8:
    if (ctx->pc == 0x3A3AB8u) {
        ctx->pc = 0x3A3AB8u;
            // 0x3a3ab8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3A3ABCu;
        goto label_3a3abc;
    }
    ctx->pc = 0x3A3AB4u;
    {
        const bool branch_taken_0x3a3ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3AB4u;
            // 0x3a3ab8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ab4) {
            ctx->pc = 0x3A3AD4u;
            goto label_3a3ad4;
        }
    }
    ctx->pc = 0x3A3ABCu;
label_3a3abc:
    // 0x3a3abc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3a3abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a3ac0:
    // 0x3a3ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a3ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3ac4:
    // 0x3a3ac4: 0xc04a576  jal         func_1295D8
label_3a3ac8:
    if (ctx->pc == 0x3A3AC8u) {
        ctx->pc = 0x3A3AC8u;
            // 0x3a3ac8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x3A3ACCu;
        goto label_3a3acc;
    }
    ctx->pc = 0x3A3AC4u;
    SET_GPR_U32(ctx, 31, 0x3A3ACCu);
    ctx->pc = 0x3A3AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3AC4u;
            // 0x3a3ac8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3ACCu; }
        if (ctx->pc != 0x3A3ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3ACCu; }
        if (ctx->pc != 0x3A3ACCu) { return; }
    }
    ctx->pc = 0x3A3ACCu;
label_3a3acc:
    // 0x3a3acc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3a3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a3ad0:
    // 0x3a3ad0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3a3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a3ad4:
    // 0x3a3ad4: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x3a3ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3a3ad8:
    // 0x3a3ad8: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3a3ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3a3adc:
    // 0x3a3adc: 0xc04cbd8  jal         func_132F60
label_3a3ae0:
    if (ctx->pc == 0x3A3AE0u) {
        ctx->pc = 0x3A3AE0u;
            // 0x3a3ae0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3A3AE4u;
        goto label_3a3ae4;
    }
    ctx->pc = 0x3A3ADCu;
    SET_GPR_U32(ctx, 31, 0x3A3AE4u);
    ctx->pc = 0x3A3AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3ADCu;
            // 0x3a3ae0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3AE4u; }
        if (ctx->pc != 0x3A3AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3AE4u; }
        if (ctx->pc != 0x3A3AE4u) { return; }
    }
    ctx->pc = 0x3A3AE4u;
label_3a3ae4:
    // 0x3a3ae4: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x3a3ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_3a3ae8:
    // 0x3a3ae8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3a3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a3aec:
    // 0x3a3aec: 0xc04cca0  jal         func_133280
label_3a3af0:
    if (ctx->pc == 0x3A3AF0u) {
        ctx->pc = 0x3A3AF0u;
            // 0x3a3af0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3AF4u;
        goto label_3a3af4;
    }
    ctx->pc = 0x3A3AECu;
    SET_GPR_U32(ctx, 31, 0x3A3AF4u);
    ctx->pc = 0x3A3AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3AECu;
            // 0x3a3af0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3AF4u; }
        if (ctx->pc != 0x3A3AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3AF4u; }
        if (ctx->pc != 0x3A3AF4u) { return; }
    }
    ctx->pc = 0x3A3AF4u;
label_3a3af4:
    // 0x3a3af4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3a3af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3a3af8:
    // 0x3a3af8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3a3af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3a3afc:
    // 0x3a3afc: 0xc04cc90  jal         func_133240
label_3a3b00:
    if (ctx->pc == 0x3A3B00u) {
        ctx->pc = 0x3A3B00u;
            // 0x3a3b00: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3A3B04u;
        goto label_3a3b04;
    }
    ctx->pc = 0x3A3AFCu;
    SET_GPR_U32(ctx, 31, 0x3A3B04u);
    ctx->pc = 0x3A3B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3AFCu;
            // 0x3a3b00: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B04u; }
        if (ctx->pc != 0x3A3B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B04u; }
        if (ctx->pc != 0x3A3B04u) { return; }
    }
    ctx->pc = 0x3A3B04u;
label_3a3b04:
    // 0x3a3b04: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3a3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3a3b08:
    // 0x3a3b08: 0xc04cc44  jal         func_133110
label_3a3b0c:
    if (ctx->pc == 0x3A3B0Cu) {
        ctx->pc = 0x3A3B0Cu;
            // 0x3a3b0c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3A3B10u;
        goto label_3a3b10;
    }
    ctx->pc = 0x3A3B08u;
    SET_GPR_U32(ctx, 31, 0x3A3B10u);
    ctx->pc = 0x3A3B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3B08u;
            // 0x3a3b0c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B10u; }
        if (ctx->pc != 0x3A3B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B10u; }
        if (ctx->pc != 0x3A3B10u) { return; }
    }
    ctx->pc = 0x3A3B10u;
label_3a3b10:
    // 0x3a3b10: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x3a3b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a3b14:
    // 0x3a3b14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3a3b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3a3b18:
    // 0x3a3b18: 0xc04cc70  jal         func_1331C0
label_3a3b1c:
    if (ctx->pc == 0x3A3B1Cu) {
        ctx->pc = 0x3A3B1Cu;
            // 0x3a3b1c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3A3B20u;
        goto label_3a3b20;
    }
    ctx->pc = 0x3A3B18u;
    SET_GPR_U32(ctx, 31, 0x3A3B20u);
    ctx->pc = 0x3A3B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3B18u;
            // 0x3a3b1c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B20u; }
        if (ctx->pc != 0x3A3B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B20u; }
        if (ctx->pc != 0x3A3B20u) { return; }
    }
    ctx->pc = 0x3A3B20u;
label_3a3b20:
    // 0x3a3b20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3a3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3a3b24:
    // 0x3a3b24: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x3a3b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3a3b28:
    // 0x3a3b28: 0xc04cbe0  jal         func_132F80
label_3a3b2c:
    if (ctx->pc == 0x3A3B2Cu) {
        ctx->pc = 0x3A3B2Cu;
            // 0x3a3b2c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3A3B30u;
        goto label_3a3b30;
    }
    ctx->pc = 0x3A3B28u;
    SET_GPR_U32(ctx, 31, 0x3A3B30u);
    ctx->pc = 0x3A3B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3B28u;
            // 0x3a3b2c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B30u; }
        if (ctx->pc != 0x3A3B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3B30u; }
        if (ctx->pc != 0x3A3B30u) { return; }
    }
    ctx->pc = 0x3A3B30u;
label_3a3b30:
    // 0x3a3b30: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x3a3b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b34:
    // 0x3a3b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a3b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a3b38:
    // 0x3a3b38: 0x0  nop
    ctx->pc = 0x3a3b38u;
    // NOP
label_3a3b3c:
    // 0x3a3b3c: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x3a3b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_3a3b40:
    // 0x3a3b40: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x3a3b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b44:
    // 0x3a3b44: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x3a3b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_3a3b48:
    // 0x3a3b48: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x3a3b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b4c:
    // 0x3a3b4c: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x3a3b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_3a3b50:
    // 0x3a3b50: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x3a3b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b54:
    // 0x3a3b54: 0xe621006c  swc1        $f1, 0x6C($s1)
    ctx->pc = 0x3a3b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_3a3b58:
    // 0x3a3b58: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x3a3b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b5c:
    // 0x3a3b5c: 0xe60101a4  swc1        $f1, 0x1A4($s0)
    ctx->pc = 0x3a3b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_3a3b60:
    // 0x3a3b60: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x3a3b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b64:
    // 0x3a3b64: 0xe60101a8  swc1        $f1, 0x1A8($s0)
    ctx->pc = 0x3a3b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_3a3b68:
    // 0x3a3b68: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x3a3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b6c:
    // 0x3a3b6c: 0xe60101ac  swc1        $f1, 0x1AC($s0)
    ctx->pc = 0x3a3b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_3a3b70:
    // 0x3a3b70: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x3a3b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3b74:
    // 0x3a3b74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3a3b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a3b78:
    // 0x3a3b78: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_3a3b7c:
    if (ctx->pc == 0x3A3B7Cu) {
        ctx->pc = 0x3A3B7Cu;
            // 0x3a3b7c: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x3A3B80u;
        goto label_3a3b80;
    }
    ctx->pc = 0x3A3B78u;
    {
        const bool branch_taken_0x3a3b78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a3b78) {
            ctx->pc = 0x3A3B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3B78u;
            // 0x3a3b7c: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3B9Cu;
            goto label_3a3b9c;
        }
    }
    ctx->pc = 0x3A3B80u;
label_3a3b80:
    // 0x3a3b80: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x3a3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3b84:
    // 0x3a3b84: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x3a3b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_3a3b88:
    // 0x3a3b88: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x3a3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3b8c:
    // 0x3a3b8c: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x3a3b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_3a3b90:
    // 0x3a3b90: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x3a3b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3b94:
    // 0x3a3b94: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a3b98:
    if (ctx->pc == 0x3A3B98u) {
        ctx->pc = 0x3A3B98u;
            // 0x3a3b98: 0xe60001b8  swc1        $f0, 0x1B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
        ctx->pc = 0x3A3B9Cu;
        goto label_3a3b9c;
    }
    ctx->pc = 0x3A3B94u;
    {
        const bool branch_taken_0x3a3b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3B94u;
            // 0x3a3b98: 0xe60001b8  swc1        $f0, 0x1B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b94) {
            ctx->pc = 0x3A3BC0u;
            goto label_3a3bc0;
        }
    }
    ctx->pc = 0x3A3B9Cu;
label_3a3b9c:
    // 0x3a3b9c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3a3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a3ba0:
    // 0x3a3ba0: 0xc04cbe0  jal         func_132F80
label_3a3ba4:
    if (ctx->pc == 0x3A3BA4u) {
        ctx->pc = 0x3A3BA4u;
            // 0x3a3ba4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3BA8u;
        goto label_3a3ba8;
    }
    ctx->pc = 0x3A3BA0u;
    SET_GPR_U32(ctx, 31, 0x3A3BA8u);
    ctx->pc = 0x3A3BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3BA0u;
            // 0x3a3ba4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BA8u; }
        if (ctx->pc != 0x3A3BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BA8u; }
        if (ctx->pc != 0x3A3BA8u) { return; }
    }
    ctx->pc = 0x3A3BA8u;
label_3a3ba8:
    // 0x3a3ba8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3a3ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3bac:
    // 0x3a3bac: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x3a3bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_3a3bb0:
    // 0x3a3bb0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3a3bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3bb4:
    // 0x3a3bb4: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x3a3bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_3a3bb8:
    // 0x3a3bb8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x3a3bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3bbc:
    // 0x3a3bbc: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x3a3bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_3a3bc0:
    // 0x3a3bc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3a3bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3a3bc4:
    // 0x3a3bc4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3a3bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3a3bc8:
    // 0x3a3bc8: 0xc04cc90  jal         func_133240
label_3a3bcc:
    if (ctx->pc == 0x3A3BCCu) {
        ctx->pc = 0x3A3BCCu;
            // 0x3a3bcc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3A3BD0u;
        goto label_3a3bd0;
    }
    ctx->pc = 0x3A3BC8u;
    SET_GPR_U32(ctx, 31, 0x3A3BD0u);
    ctx->pc = 0x3A3BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3BC8u;
            // 0x3a3bcc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BD0u; }
        if (ctx->pc != 0x3A3BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BD0u; }
        if (ctx->pc != 0x3A3BD0u) { return; }
    }
    ctx->pc = 0x3A3BD0u;
label_3a3bd0:
    // 0x3a3bd0: 0xc04cc14  jal         func_133050
label_3a3bd4:
    if (ctx->pc == 0x3A3BD4u) {
        ctx->pc = 0x3A3BD4u;
            // 0x3a3bd4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3A3BD8u;
        goto label_3a3bd8;
    }
    ctx->pc = 0x3A3BD0u;
    SET_GPR_U32(ctx, 31, 0x3A3BD8u);
    ctx->pc = 0x3A3BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3BD0u;
            // 0x3a3bd4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BD8u; }
        if (ctx->pc != 0x3A3BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BD8u; }
        if (ctx->pc != 0x3A3BD8u) { return; }
    }
    ctx->pc = 0x3A3BD8u;
label_3a3bd8:
    // 0x3a3bd8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a3bd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3a3bdc:
    // 0x3a3bdc: 0xc04cc14  jal         func_133050
label_3a3be0:
    if (ctx->pc == 0x3A3BE0u) {
        ctx->pc = 0x3A3BE0u;
            // 0x3a3be0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3A3BE4u;
        goto label_3a3be4;
    }
    ctx->pc = 0x3A3BDCu;
    SET_GPR_U32(ctx, 31, 0x3A3BE4u);
    ctx->pc = 0x3A3BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3BDCu;
            // 0x3a3be0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BE4u; }
        if (ctx->pc != 0x3A3BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3BE4u; }
        if (ctx->pc != 0x3A3BE4u) { return; }
    }
    ctx->pc = 0x3A3BE4u;
label_3a3be4:
    // 0x3a3be4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3a3be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3a3be8:
    // 0x3a3be8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a3bec:
    // 0x3a3bec: 0x461401c3  div.s       $f7, $f0, $f20
    ctx->pc = 0x3a3becu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[20];
label_3a3bf0:
    // 0x3a3bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a3bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a3bf4:
    // 0x3a3bf4: 0x0  nop
    ctx->pc = 0x3a3bf4u;
    // NOP
label_3a3bf8:
    // 0x3a3bf8: 0x46070181  sub.s       $f6, $f0, $f7
    ctx->pc = 0x3a3bf8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_3a3bfc:
    // 0x3a3bfc: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x3a3bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a3c00:
    // 0x3a3c00: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x3a3c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a3c04:
    // 0x3a3c04: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3a3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3c08:
    // 0x3a3c08: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x3a3c08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_3a3c0c:
    // 0x3a3c0c: 0x4606195c  madd.s      $f5, $f3, $f6
    ctx->pc = 0x3a3c0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_3a3c10:
    // 0x3a3c10: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x3a3c10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_3a3c14:
    // 0x3a3c14: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x3a3c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3c18:
    // 0x3a3c18: 0xc6230048  lwc1        $f3, 0x48($s1)
    ctx->pc = 0x3a3c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a3c1c:
    // 0x3a3c1c: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x3a3c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a3c20:
    // 0x3a3c20: 0x4606091c  madd.s      $f4, $f1, $f6
    ctx->pc = 0x3a3c20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_3a3c24:
    // 0x3a3c24: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x3a3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3c28:
    // 0x3a3c28: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x3a3c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3c2c:
    // 0x3a3c2c: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x3a3c2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_3a3c30:
    // 0x3a3c30: 0x4606189c  madd.s      $f2, $f3, $f6
    ctx->pc = 0x3a3c30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_3a3c34:
    // 0x3a3c34: 0xe60501bc  swc1        $f5, 0x1BC($s0)
    ctx->pc = 0x3a3c34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_3a3c38:
    // 0x3a3c38: 0xe60401c0  swc1        $f4, 0x1C0($s0)
    ctx->pc = 0x3a3c38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
label_3a3c3c:
    // 0x3a3c3c: 0xe60201c4  swc1        $f2, 0x1C4($s0)
    ctx->pc = 0x3a3c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
label_3a3c40:
    // 0x3a3c40: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x3a3c40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_3a3c44:
    // 0x3a3c44: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3a3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3a3c48:
    // 0x3a3c48: 0x4606081c  madd.s      $f0, $f1, $f6
    ctx->pc = 0x3a3c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_3a3c4c:
    // 0x3a3c4c: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x3a3c4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3a3c50:
    // 0x3a3c50: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x3a3c50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3a3c54:
    // 0x3a3c54: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x3a3c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3a3c58:
    // 0x3a3c58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3a3c5c:
    if (ctx->pc == 0x3A3C5Cu) {
        ctx->pc = 0x3A3C5Cu;
            // 0x3a3c5c: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x3A3C60u;
        goto label_3a3c60;
    }
    ctx->pc = 0x3A3C58u;
    {
        const bool branch_taken_0x3a3c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3C58u;
            // 0x3a3c5c: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c58) {
            ctx->pc = 0x3A3C64u;
            goto label_3a3c64;
        }
    }
    ctx->pc = 0x3A3C60u;
label_3a3c60:
    // 0x3a3c60: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x3a3c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_3a3c64:
    // 0x3a3c64: 0xc0a9388  jal         func_2A4E20
label_3a3c68:
    if (ctx->pc == 0x3A3C68u) {
        ctx->pc = 0x3A3C68u;
            // 0x3a3c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C6Cu;
        goto label_3a3c6c;
    }
    ctx->pc = 0x3A3C64u;
    SET_GPR_U32(ctx, 31, 0x3A3C6Cu);
    ctx->pc = 0x3A3C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3C64u;
            // 0x3a3c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E20u;
    if (runtime->hasFunction(0x2A4E20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3C6Cu; }
        if (ctx->pc != 0x3A3C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4E20_0x2a4e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3C6Cu; }
        if (ctx->pc != 0x3A3C6Cu) { return; }
    }
    ctx->pc = 0x3A3C6Cu;
label_3a3c6c:
    // 0x3a3c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a3c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a3c70:
    // 0x3a3c70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a3c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a3c74:
    // 0x3a3c74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a3c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3c78:
    // 0x3a3c78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a3c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3c7c:
    // 0x3a3c7c: 0x3e00008  jr          $ra
label_3a3c80:
    if (ctx->pc == 0x3A3C80u) {
        ctx->pc = 0x3A3C80u;
            // 0x3a3c80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3A3C84u;
        goto label_3a3c84;
    }
    ctx->pc = 0x3A3C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3C7Cu;
            // 0x3a3c80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A3C84u;
label_3a3c84:
    // 0x3a3c84: 0x0  nop
    ctx->pc = 0x3a3c84u;
    // NOP
label_3a3c88:
    // 0x3a3c88: 0x0  nop
    ctx->pc = 0x3a3c88u;
    // NOP
label_3a3c8c:
    // 0x3a3c8c: 0x0  nop
    ctx->pc = 0x3a3c8cu;
    // NOP
label_3a3c90:
    // 0x3a3c90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a3c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a3c94:
    // 0x3a3c94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3a3c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a3c98:
    // 0x3a3c98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a3c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a3c9c:
    // 0x3a3c9c: 0x3200008  jr          $t9
label_3a3ca0:
    if (ctx->pc == 0x3A3CA0u) {
        ctx->pc = 0x3A3CA4u;
        goto label_3a3ca4;
    }
    ctx->pc = 0x3A3C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A3CA4u;
label_3a3ca4:
    // 0x3a3ca4: 0x0  nop
    ctx->pc = 0x3a3ca4u;
    // NOP
label_3a3ca8:
    // 0x3a3ca8: 0x0  nop
    ctx->pc = 0x3a3ca8u;
    // NOP
label_3a3cac:
    // 0x3a3cac: 0x0  nop
    ctx->pc = 0x3a3cacu;
    // NOP
label_3a3cb0:
    // 0x3a3cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a3cb4:
    // 0x3a3cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a3cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a3cb8:
    // 0x3a3cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a3cbc:
    // 0x3a3cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3cc0:
    // 0x3a3cc0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3a3cc4:
    if (ctx->pc == 0x3A3CC4u) {
        ctx->pc = 0x3A3CC4u;
            // 0x3a3cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A3CC8u;
        goto label_3a3cc8;
    }
    ctx->pc = 0x3A3CC0u;
    {
        const bool branch_taken_0x3a3cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3CC0u;
            // 0x3a3cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3cc0) {
            ctx->pc = 0x3A3CE8u;
            goto label_3a3ce8;
        }
    }
    ctx->pc = 0x3A3CC8u;
label_3a3cc8:
    // 0x3a3cc8: 0xc0888a8  jal         func_2222A0
label_3a3ccc:
    if (ctx->pc == 0x3A3CCCu) {
        ctx->pc = 0x3A3CD0u;
        goto label_3a3cd0;
    }
    ctx->pc = 0x3A3CC8u;
    SET_GPR_U32(ctx, 31, 0x3A3CD0u);
    ctx->pc = 0x2222A0u;
    if (runtime->hasFunction(0x2222A0u)) {
        auto targetFn = runtime->lookupFunction(0x2222A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3CD0u; }
        if (ctx->pc != 0x3A3CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002222A0_0x2222a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3CD0u; }
        if (ctx->pc != 0x3A3CD0u) { return; }
    }
    ctx->pc = 0x3A3CD0u;
label_3a3cd0:
    // 0x3a3cd0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3a3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3a3cd4:
    // 0x3a3cd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a3cd8:
    // 0x3a3cd8: 0x2484ebf0  addiu       $a0, $a0, -0x1410
    ctx->pc = 0x3a3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
label_3a3cdc:
    // 0x3a3cdc: 0x24632240  addiu       $v1, $v1, 0x2240
    ctx->pc = 0x3a3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8768));
label_3a3ce0:
    // 0x3a3ce0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3a3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3a3ce4:
    // 0x3a3ce4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3a3ce8:
    // 0x3a3ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a3ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3cec:
    // 0x3a3cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3cf0:
    // 0x3a3cf0: 0x3e00008  jr          $ra
label_3a3cf4:
    if (ctx->pc == 0x3A3CF4u) {
        ctx->pc = 0x3A3CF4u;
            // 0x3a3cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A3CF8u;
        goto label_3a3cf8;
    }
    ctx->pc = 0x3A3CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3CF0u;
            // 0x3a3cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A3CF8u;
label_3a3cf8:
    // 0x3a3cf8: 0x0  nop
    ctx->pc = 0x3a3cf8u;
    // NOP
label_3a3cfc:
    // 0x3a3cfc: 0x0  nop
    ctx->pc = 0x3a3cfcu;
    // NOP
label_3a3d00:
    // 0x3a3d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a3d04:
    // 0x3a3d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a3d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a3d08:
    // 0x3a3d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a3d0c:
    // 0x3a3d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a3d10:
    // 0x3a3d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a3d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3d14:
    // 0x3a3d14: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_3a3d18:
    if (ctx->pc == 0x3A3D18u) {
        ctx->pc = 0x3A3D18u;
            // 0x3a3d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D1Cu;
        goto label_3a3d1c;
    }
    ctx->pc = 0x3A3D14u;
    {
        const bool branch_taken_0x3a3d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D14u;
            // 0x3a3d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d14) {
            ctx->pc = 0x3A3D88u;
            goto label_3a3d88;
        }
    }
    ctx->pc = 0x3A3D1Cu;
label_3a3d1c:
    // 0x3a3d1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3a3d20:
    // 0x3a3d20: 0x24428830  addiu       $v0, $v0, -0x77D0
    ctx->pc = 0x3a3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936624));
label_3a3d24:
    // 0x3a3d24: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_3a3d28:
    if (ctx->pc == 0x3A3D28u) {
        ctx->pc = 0x3A3D28u;
            // 0x3a3d28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3D2Cu;
        goto label_3a3d2c;
    }
    ctx->pc = 0x3A3D24u;
    {
        const bool branch_taken_0x3a3d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D24u;
            // 0x3a3d28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d24) {
            ctx->pc = 0x3A3D70u;
            goto label_3a3d70;
        }
    }
    ctx->pc = 0x3A3D2Cu;
label_3a3d2c:
    // 0x3a3d2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a3d30:
    // 0x3a3d30: 0x244257b0  addiu       $v0, $v0, 0x57B0
    ctx->pc = 0x3a3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
label_3a3d34:
    // 0x3a3d34: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3a3d38:
    if (ctx->pc == 0x3A3D38u) {
        ctx->pc = 0x3A3D38u;
            // 0x3a3d38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3D3Cu;
        goto label_3a3d3c;
    }
    ctx->pc = 0x3A3D34u;
    {
        const bool branch_taken_0x3a3d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D34u;
            // 0x3a3d38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d34) {
            ctx->pc = 0x3A3D70u;
            goto label_3a3d70;
        }
    }
    ctx->pc = 0x3A3D3Cu;
label_3a3d3c:
    // 0x3a3d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a3d40:
    // 0x3a3d40: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3a3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_3a3d44:
    // 0x3a3d44: 0xc0d37dc  jal         func_34DF70
label_3a3d48:
    if (ctx->pc == 0x3A3D48u) {
        ctx->pc = 0x3A3D48u;
            // 0x3a3d48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3D4Cu;
        goto label_3a3d4c;
    }
    ctx->pc = 0x3A3D44u;
    SET_GPR_U32(ctx, 31, 0x3A3D4Cu);
    ctx->pc = 0x3A3D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D44u;
            // 0x3a3d48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3D4Cu; }
        if (ctx->pc != 0x3A3D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3D4Cu; }
        if (ctx->pc != 0x3A3D4Cu) { return; }
    }
    ctx->pc = 0x3A3D4Cu;
label_3a3d4c:
    // 0x3a3d4c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3a3d50:
    if (ctx->pc == 0x3A3D50u) {
        ctx->pc = 0x3A3D50u;
            // 0x3a3d50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3A3D54u;
        goto label_3a3d54;
    }
    ctx->pc = 0x3A3D4Cu;
    {
        const bool branch_taken_0x3a3d4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3d4c) {
            ctx->pc = 0x3A3D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D4Cu;
            // 0x3a3d50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3D74u;
            goto label_3a3d74;
        }
    }
    ctx->pc = 0x3A3D54u;
label_3a3d54:
    // 0x3a3d54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a3d58:
    // 0x3a3d58: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3a3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_3a3d5c:
    // 0x3a3d5c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3a3d60:
    if (ctx->pc == 0x3A3D60u) {
        ctx->pc = 0x3A3D60u;
            // 0x3a3d60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A3D64u;
        goto label_3a3d64;
    }
    ctx->pc = 0x3A3D5Cu;
    {
        const bool branch_taken_0x3a3d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D5Cu;
            // 0x3a3d60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d5c) {
            ctx->pc = 0x3A3D70u;
            goto label_3a3d70;
        }
    }
    ctx->pc = 0x3A3D64u;
label_3a3d64:
    // 0x3a3d64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a3d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a3d68:
    // 0x3a3d68: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3a3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3a3d6c:
    // 0x3a3d6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a3d70:
    // 0x3a3d70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3a3d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3a3d74:
    // 0x3a3d74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a3d74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3a3d78:
    // 0x3a3d78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3a3d7c:
    if (ctx->pc == 0x3A3D7Cu) {
        ctx->pc = 0x3A3D7Cu;
            // 0x3a3d7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D80u;
        goto label_3a3d80;
    }
    ctx->pc = 0x3A3D78u;
    {
        const bool branch_taken_0x3a3d78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a3d78) {
            ctx->pc = 0x3A3D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D78u;
            // 0x3a3d7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3D8Cu;
            goto label_3a3d8c;
        }
    }
    ctx->pc = 0x3A3D80u;
label_3a3d80:
    // 0x3a3d80: 0xc0400a8  jal         func_1002A0
label_3a3d84:
    if (ctx->pc == 0x3A3D84u) {
        ctx->pc = 0x3A3D84u;
            // 0x3a3d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D88u;
        goto label_3a3d88;
    }
    ctx->pc = 0x3A3D80u;
    SET_GPR_U32(ctx, 31, 0x3A3D88u);
    ctx->pc = 0x3A3D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D80u;
            // 0x3a3d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3D88u; }
        if (ctx->pc != 0x3A3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3D88u; }
        if (ctx->pc != 0x3A3D88u) { return; }
    }
    ctx->pc = 0x3A3D88u;
label_3a3d88:
    // 0x3a3d88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a3d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3d8c:
    // 0x3a3d8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a3d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3d90:
    // 0x3a3d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3d94:
    // 0x3a3d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3d98:
    // 0x3a3d98: 0x3e00008  jr          $ra
label_3a3d9c:
    if (ctx->pc == 0x3A3D9Cu) {
        ctx->pc = 0x3A3D9Cu;
            // 0x3a3d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A3DA0u;
        goto label_3a3da0;
    }
    ctx->pc = 0x3A3D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3D98u;
            // 0x3a3d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A3DA0u;
label_3a3da0:
    // 0x3a3da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a3da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a3da4:
    // 0x3a3da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a3da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3a3da8:
    // 0x3a3da8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a3da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a3dac:
    // 0x3a3dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a3db0:
    // 0x3a3db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a3db4:
    // 0x3a3db4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a3db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3db8:
    // 0x3a3db8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a3db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3dbc:
    // 0x3a3dbc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3a3dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3a3dc0:
    // 0x3a3dc0: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3a3dc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3a3dc4:
    // 0x3a3dc4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3a3dc8:
    if (ctx->pc == 0x3A3DC8u) {
        ctx->pc = 0x3A3DC8u;
            // 0x3a3dc8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3A3DCCu;
        goto label_3a3dcc;
    }
    ctx->pc = 0x3A3DC4u;
    {
        const bool branch_taken_0x3a3dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3DC4u;
            // 0x3a3dc8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3dc4) {
            ctx->pc = 0x3A3DDCu;
            goto label_3a3ddc;
        }
    }
    ctx->pc = 0x3A3DCCu;
label_3a3dcc:
    // 0x3a3dcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3dd0:
    // 0x3a3dd0: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3a3dd4:
    if (ctx->pc == 0x3A3DD4u) {
        ctx->pc = 0x3A3DD4u;
            // 0x3a3dd4: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3A3DD8u;
        goto label_3a3dd8;
    }
    ctx->pc = 0x3A3DD0u;
    {
        const bool branch_taken_0x3a3dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3dd0) {
            ctx->pc = 0x3A3DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3DD0u;
            // 0x3a3dd4: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3DE0u;
            goto label_3a3de0;
        }
    }
    ctx->pc = 0x3A3DD8u;
label_3a3dd8:
    // 0x3a3dd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3ddc:
    // 0x3a3ddc: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3a3ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3a3de0:
    // 0x3a3de0: 0x506000a7  beql        $v1, $zero, . + 4 + (0xA7 << 2)
label_3a3de4:
    if (ctx->pc == 0x3A3DE4u) {
        ctx->pc = 0x3A3DE4u;
            // 0x3a3de4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3A3DE8u;
        goto label_3a3de8;
    }
    ctx->pc = 0x3A3DE0u;
    {
        const bool branch_taken_0x3a3de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3de0) {
            ctx->pc = 0x3A3DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3DE0u;
            // 0x3a3de4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4080u;
            goto label_3a4080;
        }
    }
    ctx->pc = 0x3A3DE8u;
label_3a3de8:
    // 0x3a3de8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3a3de8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a3dec:
    // 0x3a3dec: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3a3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3a3df0:
    // 0x3a3df0: 0x50830086  beql        $a0, $v1, . + 4 + (0x86 << 2)
label_3a3df4:
    if (ctx->pc == 0x3A3DF4u) {
        ctx->pc = 0x3A3DF4u;
            // 0x3a3df4: 0x8e030e38  lw          $v1, 0xE38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
        ctx->pc = 0x3A3DF8u;
        goto label_3a3df8;
    }
    ctx->pc = 0x3A3DF0u;
    {
        const bool branch_taken_0x3a3df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3df0) {
            ctx->pc = 0x3A3DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3DF0u;
            // 0x3a3df4: 0x8e030e38  lw          $v1, 0xE38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A400Cu;
            goto label_3a400c;
        }
    }
    ctx->pc = 0x3A3DF8u;
label_3a3df8:
    // 0x3a3df8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3a3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3a3dfc:
    // 0x3a3dfc: 0x50830066  beql        $a0, $v1, . + 4 + (0x66 << 2)
label_3a3e00:
    if (ctx->pc == 0x3A3E00u) {
        ctx->pc = 0x3A3E00u;
            // 0x3a3e00: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x3A3E04u;
        goto label_3a3e04;
    }
    ctx->pc = 0x3A3DFCu;
    {
        const bool branch_taken_0x3a3dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3dfc) {
            ctx->pc = 0x3A3E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3DFCu;
            // 0x3a3e00: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3F98u;
            goto label_3a3f98;
        }
    }
    ctx->pc = 0x3A3E04u;
label_3a3e04:
    // 0x3a3e04: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3a3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a3e08:
    // 0x3a3e08: 0x50830060  beql        $a0, $v1, . + 4 + (0x60 << 2)
label_3a3e0c:
    if (ctx->pc == 0x3A3E0Cu) {
        ctx->pc = 0x3A3E0Cu;
            // 0x3a3e0c: 0x8e030a5c  lw          $v1, 0xA5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2652)));
        ctx->pc = 0x3A3E10u;
        goto label_3a3e10;
    }
    ctx->pc = 0x3A3E08u;
    {
        const bool branch_taken_0x3a3e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3e08) {
            ctx->pc = 0x3A3E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3E08u;
            // 0x3a3e0c: 0x8e030a5c  lw          $v1, 0xA5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2652)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3F8Cu;
            goto label_3a3f8c;
        }
    }
    ctx->pc = 0x3A3E10u;
label_3a3e10:
    // 0x3a3e10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3a3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3a3e14:
    // 0x3a3e14: 0x10830099  beq         $a0, $v1, . + 4 + (0x99 << 2)
label_3a3e18:
    if (ctx->pc == 0x3A3E18u) {
        ctx->pc = 0x3A3E1Cu;
        goto label_3a3e1c;
    }
    ctx->pc = 0x3A3E14u;
    {
        const bool branch_taken_0x3a3e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3e14) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3E1Cu;
label_3a3e1c:
    // 0x3a3e1c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3a3e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a3e20:
    // 0x3a3e20: 0x50830056  beql        $a0, $v1, . + 4 + (0x56 << 2)
label_3a3e24:
    if (ctx->pc == 0x3A3E24u) {
        ctx->pc = 0x3A3E24u;
            // 0x3a3e24: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x3A3E28u;
        goto label_3a3e28;
    }
    ctx->pc = 0x3A3E20u;
    {
        const bool branch_taken_0x3a3e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3e20) {
            ctx->pc = 0x3A3E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3E20u;
            // 0x3a3e24: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3F7Cu;
            goto label_3a3f7c;
        }
    }
    ctx->pc = 0x3A3E28u;
label_3a3e28:
    // 0x3a3e28: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a3e2c:
    // 0x3a3e2c: 0x10830093  beq         $a0, $v1, . + 4 + (0x93 << 2)
label_3a3e30:
    if (ctx->pc == 0x3A3E30u) {
        ctx->pc = 0x3A3E34u;
        goto label_3a3e34;
    }
    ctx->pc = 0x3A3E2Cu;
    {
        const bool branch_taken_0x3a3e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3e2c) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3E34u;
label_3a3e34:
    // 0x3a3e34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a3e38:
    // 0x3a3e38: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
label_3a3e3c:
    if (ctx->pc == 0x3A3E3Cu) {
        ctx->pc = 0x3A3E40u;
        goto label_3a3e40;
    }
    ctx->pc = 0x3A3E38u;
    {
        const bool branch_taken_0x3a3e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3e38) {
            ctx->pc = 0x3A3EECu;
            goto label_3a3eec;
        }
    }
    ctx->pc = 0x3A3E40u;
label_3a3e40:
    // 0x3a3e40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3e44:
    // 0x3a3e44: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3a3e48:
    if (ctx->pc == 0x3A3E48u) {
        ctx->pc = 0x3A3E48u;
            // 0x3a3e48: 0x8e030e38  lw          $v1, 0xE38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
        ctx->pc = 0x3A3E4Cu;
        goto label_3a3e4c;
    }
    ctx->pc = 0x3A3E44u;
    {
        const bool branch_taken_0x3a3e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3e44) {
            ctx->pc = 0x3A3E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3E44u;
            // 0x3a3e48: 0x8e030e38  lw          $v1, 0xE38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3E54u;
            goto label_3a3e54;
        }
    }
    ctx->pc = 0x3A3E4Cu;
label_3a3e4c:
    // 0x3a3e4c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_3a3e50:
    if (ctx->pc == 0x3A3E50u) {
        ctx->pc = 0x3A3E54u;
        goto label_3a3e54;
    }
    ctx->pc = 0x3A3E4Cu;
    {
        const bool branch_taken_0x3a3e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3e4c) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3E54u;
label_3a3e54:
    // 0x3a3e54: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3a3e54u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a3e58:
    // 0x3a3e58: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a3e5c:
    if (ctx->pc == 0x3A3E5Cu) {
        ctx->pc = 0x3A3E5Cu;
            // 0x3a3e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E60u;
        goto label_3a3e60;
    }
    ctx->pc = 0x3A3E58u;
    {
        const bool branch_taken_0x3a3e58 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A3E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3E58u;
            // 0x3a3e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e58) {
            ctx->pc = 0x3A3E70u;
            goto label_3a3e70;
        }
    }
    ctx->pc = 0x3A3E60u;
label_3a3e60:
    // 0x3a3e60: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a3e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a3e64:
    // 0x3a3e64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a3e68:
    if (ctx->pc == 0x3A3E68u) {
        ctx->pc = 0x3A3E6Cu;
        goto label_3a3e6c;
    }
    ctx->pc = 0x3A3E64u;
    {
        const bool branch_taken_0x3a3e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3e64) {
            ctx->pc = 0x3A3E70u;
            goto label_3a3e70;
        }
    }
    ctx->pc = 0x3A3E6Cu;
label_3a3e6c:
    // 0x3a3e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a3e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a3e70:
    // 0x3a3e70: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a3e74:
    if (ctx->pc == 0x3A3E74u) {
        ctx->pc = 0x3A3E78u;
        goto label_3a3e78;
    }
    ctx->pc = 0x3A3E70u;
    {
        const bool branch_taken_0x3a3e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3e70) {
            ctx->pc = 0x3A3E8Cu;
            goto label_3a3e8c;
        }
    }
    ctx->pc = 0x3A3E78u;
label_3a3e78:
    // 0x3a3e78: 0xc075eb4  jal         func_1D7AD0
label_3a3e7c:
    if (ctx->pc == 0x3A3E7Cu) {
        ctx->pc = 0x3A3E7Cu;
            // 0x3a3e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E80u;
        goto label_3a3e80;
    }
    ctx->pc = 0x3A3E78u;
    SET_GPR_U32(ctx, 31, 0x3A3E80u);
    ctx->pc = 0x3A3E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3E78u;
            // 0x3a3e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3E80u; }
        if (ctx->pc != 0x3A3E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3E80u; }
        if (ctx->pc != 0x3A3E80u) { return; }
    }
    ctx->pc = 0x3A3E80u;
label_3a3e80:
    // 0x3a3e80: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a3e84:
    if (ctx->pc == 0x3A3E84u) {
        ctx->pc = 0x3A3E88u;
        goto label_3a3e88;
    }
    ctx->pc = 0x3A3E80u;
    {
        const bool branch_taken_0x3a3e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3e80) {
            ctx->pc = 0x3A3E8Cu;
            goto label_3a3e8c;
        }
    }
    ctx->pc = 0x3A3E88u;
label_3a3e88:
    // 0x3a3e88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3e8c:
    // 0x3a3e8c: 0x1240007b  beqz        $s2, . + 4 + (0x7B << 2)
label_3a3e90:
    if (ctx->pc == 0x3A3E90u) {
        ctx->pc = 0x3A3E94u;
        goto label_3a3e94;
    }
    ctx->pc = 0x3A3E8Cu;
    {
        const bool branch_taken_0x3a3e8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3e8c) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3E94u;
label_3a3e94:
    // 0x3a3e94: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a3e98:
    // 0x3a3e98: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x3a3e98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_3a3e9c:
    // 0x3a3e9c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3a3ea0:
    if (ctx->pc == 0x3A3EA0u) {
        ctx->pc = 0x3A3EA4u;
        goto label_3a3ea4;
    }
    ctx->pc = 0x3A3E9Cu;
    {
        const bool branch_taken_0x3a3e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3e9c) {
            ctx->pc = 0x3A3ECCu;
            goto label_3a3ecc;
        }
    }
    ctx->pc = 0x3A3EA4u;
label_3a3ea4:
    // 0x3a3ea4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a3ea8:
    // 0x3a3ea8: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x3a3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3a3eac:
    // 0x3a3eac: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3a3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a3eb0:
    // 0x3a3eb0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3a3eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3a3eb4:
    // 0x3a3eb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a3eb8:
    // 0x3a3eb8: 0x9046000c  lbu         $a2, 0xC($v0)
    ctx->pc = 0x3a3eb8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_3a3ebc:
    // 0x3a3ebc: 0xc0bc1d4  jal         func_2F0750
label_3a3ec0:
    if (ctx->pc == 0x3A3EC0u) {
        ctx->pc = 0x3A3EC0u;
            // 0x3a3ec0: 0x8c6407b8  lw          $a0, 0x7B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1976)));
        ctx->pc = 0x3A3EC4u;
        goto label_3a3ec4;
    }
    ctx->pc = 0x3A3EBCu;
    SET_GPR_U32(ctx, 31, 0x3A3EC4u);
    ctx->pc = 0x3A3EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3EBCu;
            // 0x3a3ec0: 0x8c6407b8  lw          $a0, 0x7B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1976)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3EC4u; }
        if (ctx->pc != 0x3A3EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3EC4u; }
        if (ctx->pc != 0x3A3EC4u) { return; }
    }
    ctx->pc = 0x3A3EC4u;
label_3a3ec4:
    // 0x3a3ec4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_3a3ec8:
    if (ctx->pc == 0x3A3EC8u) {
        ctx->pc = 0x3A3ECCu;
        goto label_3a3ecc;
    }
    ctx->pc = 0x3A3EC4u;
    {
        const bool branch_taken_0x3a3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3ec4) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3ECCu;
label_3a3ecc:
    // 0x3a3ecc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a3ed0:
    // 0x3a3ed0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a3ed4:
    // 0x3a3ed4: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x3a3ed4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3a3ed8:
    // 0x3a3ed8: 0x8c4407b8  lw          $a0, 0x7B8($v0)
    ctx->pc = 0x3a3ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
label_3a3edc:
    // 0x3a3edc: 0xc0bc1d4  jal         func_2F0750
label_3a3ee0:
    if (ctx->pc == 0x3A3EE0u) {
        ctx->pc = 0x3A3EE0u;
            // 0x3a3ee0: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->pc = 0x3A3EE4u;
        goto label_3a3ee4;
    }
    ctx->pc = 0x3A3EDCu;
    SET_GPR_U32(ctx, 31, 0x3A3EE4u);
    ctx->pc = 0x3A3EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3EDCu;
            // 0x3a3ee0: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3EE4u; }
        if (ctx->pc != 0x3A3EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3EE4u; }
        if (ctx->pc != 0x3A3EE4u) { return; }
    }
    ctx->pc = 0x3A3EE4u;
label_3a3ee4:
    // 0x3a3ee4: 0x10000065  b           . + 4 + (0x65 << 2)
label_3a3ee8:
    if (ctx->pc == 0x3A3EE8u) {
        ctx->pc = 0x3A3EECu;
        goto label_3a3eec;
    }
    ctx->pc = 0x3A3EE4u;
    {
        const bool branch_taken_0x3a3ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3ee4) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3EECu;
label_3a3eec:
    // 0x3a3eec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3a3ef0:
    // 0x3a3ef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3ef4:
    // 0x3a3ef4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3a3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3a3ef8:
    // 0x3a3ef8: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x3a3ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_3a3efc:
    // 0x3a3efc: 0x1464005f  bne         $v1, $a0, . + 4 + (0x5F << 2)
label_3a3f00:
    if (ctx->pc == 0x3A3F00u) {
        ctx->pc = 0x3A3F04u;
        goto label_3a3f04;
    }
    ctx->pc = 0x3A3EFCu;
    {
        const bool branch_taken_0x3a3efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a3efc) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3F04u;
label_3a3f04:
    // 0x3a3f04: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3a3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3a3f08:
    // 0x3a3f08: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x3a3f08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3a3f0c:
    // 0x3a3f0c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a3f10:
    if (ctx->pc == 0x3A3F10u) {
        ctx->pc = 0x3A3F10u;
            // 0x3a3f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F14u;
        goto label_3a3f14;
    }
    ctx->pc = 0x3A3F0Cu;
    {
        const bool branch_taken_0x3a3f0c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A3F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F0Cu;
            // 0x3a3f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f0c) {
            ctx->pc = 0x3A3F24u;
            goto label_3a3f24;
        }
    }
    ctx->pc = 0x3A3F14u;
label_3a3f14:
    // 0x3a3f14: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a3f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a3f18:
    // 0x3a3f18: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a3f1c:
    if (ctx->pc == 0x3A3F1Cu) {
        ctx->pc = 0x3A3F20u;
        goto label_3a3f20;
    }
    ctx->pc = 0x3A3F18u;
    {
        const bool branch_taken_0x3a3f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f18) {
            ctx->pc = 0x3A3F24u;
            goto label_3a3f24;
        }
    }
    ctx->pc = 0x3A3F20u;
label_3a3f20:
    // 0x3a3f20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a3f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f24:
    // 0x3a3f24: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a3f28:
    if (ctx->pc == 0x3A3F28u) {
        ctx->pc = 0x3A3F2Cu;
        goto label_3a3f2c;
    }
    ctx->pc = 0x3A3F24u;
    {
        const bool branch_taken_0x3a3f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f24) {
            ctx->pc = 0x3A3F40u;
            goto label_3a3f40;
        }
    }
    ctx->pc = 0x3A3F2Cu;
label_3a3f2c:
    // 0x3a3f2c: 0xc075eb4  jal         func_1D7AD0
label_3a3f30:
    if (ctx->pc == 0x3A3F30u) {
        ctx->pc = 0x3A3F30u;
            // 0x3a3f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F34u;
        goto label_3a3f34;
    }
    ctx->pc = 0x3A3F2Cu;
    SET_GPR_U32(ctx, 31, 0x3A3F34u);
    ctx->pc = 0x3A3F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F2Cu;
            // 0x3a3f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F34u; }
        if (ctx->pc != 0x3A3F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F34u; }
        if (ctx->pc != 0x3A3F34u) { return; }
    }
    ctx->pc = 0x3A3F34u;
label_3a3f34:
    // 0x3a3f34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a3f38:
    if (ctx->pc == 0x3A3F38u) {
        ctx->pc = 0x3A3F3Cu;
        goto label_3a3f3c;
    }
    ctx->pc = 0x3A3F34u;
    {
        const bool branch_taken_0x3a3f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f34) {
            ctx->pc = 0x3A3F40u;
            goto label_3a3f40;
        }
    }
    ctx->pc = 0x3A3F3Cu;
label_3a3f3c:
    // 0x3a3f3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f40:
    // 0x3a3f40: 0x1240004e  beqz        $s2, . + 4 + (0x4E << 2)
label_3a3f44:
    if (ctx->pc == 0x3A3F44u) {
        ctx->pc = 0x3A3F48u;
        goto label_3a3f48;
    }
    ctx->pc = 0x3A3F40u;
    {
        const bool branch_taken_0x3a3f40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f40) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3F48u;
label_3a3f48:
    // 0x3a3f48: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a3f4c:
    // 0x3a3f4c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3a3f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3a3f50:
    // 0x3a3f50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3a3f54:
    if (ctx->pc == 0x3A3F54u) {
        ctx->pc = 0x3A3F54u;
            // 0x3a3f54: 0x3c04a400  lui         $a0, 0xA400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41984 << 16));
        ctx->pc = 0x3A3F58u;
        goto label_3a3f58;
    }
    ctx->pc = 0x3A3F50u;
    {
        const bool branch_taken_0x3a3f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f50) {
            ctx->pc = 0x3A3F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F50u;
            // 0x3a3f54: 0x3c04a400  lui         $a0, 0xA400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41984 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3F6Cu;
            goto label_3a3f6c;
        }
    }
    ctx->pc = 0x3A3F58u;
label_3a3f58:
    // 0x3a3f58: 0x3c04a400  lui         $a0, 0xA400
    ctx->pc = 0x3a3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41984 << 16));
label_3a3f5c:
    // 0x3a3f5c: 0xc0733ec  jal         func_1CCFB0
label_3a3f60:
    if (ctx->pc == 0x3A3F60u) {
        ctx->pc = 0x3A3F60u;
            // 0x3a3f60: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x3A3F64u;
        goto label_3a3f64;
    }
    ctx->pc = 0x3A3F5Cu;
    SET_GPR_U32(ctx, 31, 0x3A3F64u);
    ctx->pc = 0x3A3F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F5Cu;
            // 0x3a3f60: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFB0u;
    if (runtime->hasFunction(0x1CCFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CCFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F64u; }
        if (ctx->pc != 0x3A3F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFB0_0x1ccfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F64u; }
        if (ctx->pc != 0x3A3F64u) { return; }
    }
    ctx->pc = 0x3A3F64u;
label_3a3f64:
    // 0x3a3f64: 0x10000045  b           . + 4 + (0x45 << 2)
label_3a3f68:
    if (ctx->pc == 0x3A3F68u) {
        ctx->pc = 0x3A3F6Cu;
        goto label_3a3f6c;
    }
    ctx->pc = 0x3A3F64u;
    {
        const bool branch_taken_0x3a3f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f64) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3F6Cu;
label_3a3f6c:
    // 0x3a3f6c: 0xc0733ec  jal         func_1CCFB0
label_3a3f70:
    if (ctx->pc == 0x3A3F70u) {
        ctx->pc = 0x3A3F70u;
            // 0x3a3f70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F74u;
        goto label_3a3f74;
    }
    ctx->pc = 0x3A3F6Cu;
    SET_GPR_U32(ctx, 31, 0x3A3F74u);
    ctx->pc = 0x3A3F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F6Cu;
            // 0x3a3f70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFB0u;
    if (runtime->hasFunction(0x1CCFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CCFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F74u; }
        if (ctx->pc != 0x3A3F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFB0_0x1ccfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F74u; }
        if (ctx->pc != 0x3A3F74u) { return; }
    }
    ctx->pc = 0x3A3F74u;
label_3a3f74:
    // 0x3a3f74: 0x10000041  b           . + 4 + (0x41 << 2)
label_3a3f78:
    if (ctx->pc == 0x3A3F78u) {
        ctx->pc = 0x3A3F7Cu;
        goto label_3a3f7c;
    }
    ctx->pc = 0x3A3F74u;
    {
        const bool branch_taken_0x3a3f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f74) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3F7Cu;
label_3a3f7c:
    // 0x3a3f7c: 0xc0ba488  jal         func_2E9220
label_3a3f80:
    if (ctx->pc == 0x3A3F80u) {
        ctx->pc = 0x3A3F80u;
            // 0x3a3f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F84u;
        goto label_3a3f84;
    }
    ctx->pc = 0x3A3F7Cu;
    SET_GPR_U32(ctx, 31, 0x3A3F84u);
    ctx->pc = 0x3A3F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F7Cu;
            // 0x3a3f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9220u;
    if (runtime->hasFunction(0x2E9220u)) {
        auto targetFn = runtime->lookupFunction(0x2E9220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F84u; }
        if (ctx->pc != 0x3A3F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9220_0x2e9220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A3F84u; }
        if (ctx->pc != 0x3A3F84u) { return; }
    }
    ctx->pc = 0x3A3F84u;
label_3a3f84:
    // 0x3a3f84: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3a3f88:
    if (ctx->pc == 0x3A3F88u) {
        ctx->pc = 0x3A3F8Cu;
        goto label_3a3f8c;
    }
    ctx->pc = 0x3A3F84u;
    {
        const bool branch_taken_0x3a3f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3f84) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3F8Cu;
label_3a3f8c:
    // 0x3a3f8c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3a3f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3f90:
    // 0x3a3f90: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3a3f94:
    if (ctx->pc == 0x3A3F94u) {
        ctx->pc = 0x3A3F94u;
            // 0x3a3f94: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->pc = 0x3A3F98u;
        goto label_3a3f98;
    }
    ctx->pc = 0x3A3F90u;
    {
        const bool branch_taken_0x3a3f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F90u;
            // 0x3a3f94: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f90) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3F98u;
label_3a3f98:
    // 0x3a3f98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3f9c:
    // 0x3a3f9c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_3a3fa0:
    if (ctx->pc == 0x3A3FA0u) {
        ctx->pc = 0x3A3FA0u;
            // 0x3a3fa0: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x3A3FA4u;
        goto label_3a3fa4;
    }
    ctx->pc = 0x3A3F9Cu;
    {
        const bool branch_taken_0x3a3f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A3FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3F9Cu;
            // 0x3a3fa0: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f9c) {
            ctx->pc = 0x3A3FF0u;
            goto label_3a3ff0;
        }
    }
    ctx->pc = 0x3A3FA4u;
label_3a3fa4:
    // 0x3a3fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3fa8:
    // 0x3a3fa8: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
label_3a3fac:
    if (ctx->pc == 0x3A3FACu) {
        ctx->pc = 0x3A3FACu;
            // 0x3a3fac: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x3A3FB0u;
        goto label_3a3fb0;
    }
    ctx->pc = 0x3A3FA8u;
    {
        const bool branch_taken_0x3a3fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a3fa8) {
            ctx->pc = 0x3A3FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3FA8u;
            // 0x3a3fac: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3FD8u;
            goto label_3a3fd8;
        }
    }
    ctx->pc = 0x3A3FB0u;
label_3a3fb0:
    // 0x3a3fb0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3a3fb4:
    if (ctx->pc == 0x3A3FB4u) {
        ctx->pc = 0x3A3FB4u;
            // 0x3a3fb4: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x3A3FB8u;
        goto label_3a3fb8;
    }
    ctx->pc = 0x3A3FB0u;
    {
        const bool branch_taken_0x3a3fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3fb0) {
            ctx->pc = 0x3A3FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3FB0u;
            // 0x3a3fb4: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3FC0u;
            goto label_3a3fc0;
        }
    }
    ctx->pc = 0x3A3FB8u;
label_3a3fb8:
    // 0x3a3fb8: 0x10000030  b           . + 4 + (0x30 << 2)
label_3a3fbc:
    if (ctx->pc == 0x3A3FBCu) {
        ctx->pc = 0x3A3FC0u;
        goto label_3a3fc0;
    }
    ctx->pc = 0x3A3FB8u;
    {
        const bool branch_taken_0x3a3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3fb8) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3FC0u;
label_3a3fc0:
    // 0x3a3fc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3a3fc4:
    // 0x3a3fc4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a3fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a3fc8:
    // 0x3a3fc8: 0x320f809  jalr        $t9
label_3a3fcc:
    if (ctx->pc == 0x3A3FCCu) {
        ctx->pc = 0x3A3FCCu;
            // 0x3a3fcc: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->pc = 0x3A3FD0u;
        goto label_3a3fd0;
    }
    ctx->pc = 0x3A3FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A3FD0u);
        ctx->pc = 0x3A3FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3FC8u;
            // 0x3a3fcc: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A3FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A3FD0u; }
            if (ctx->pc != 0x3A3FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A3FD0u;
label_3a3fd0:
    // 0x3a3fd0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3a3fd4:
    if (ctx->pc == 0x3A3FD4u) {
        ctx->pc = 0x3A3FD8u;
        goto label_3a3fd8;
    }
    ctx->pc = 0x3A3FD0u;
    {
        const bool branch_taken_0x3a3fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3fd0) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3FD8u;
label_3a3fd8:
    // 0x3a3fd8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3a3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_3a3fdc:
    // 0x3a3fdc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a3fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a3fe0:
    // 0x3a3fe0: 0x320f809  jalr        $t9
label_3a3fe4:
    if (ctx->pc == 0x3A3FE4u) {
        ctx->pc = 0x3A3FE4u;
            // 0x3a3fe4: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->pc = 0x3A3FE8u;
        goto label_3a3fe8;
    }
    ctx->pc = 0x3A3FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A3FE8u);
        ctx->pc = 0x3A3FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3FE0u;
            // 0x3a3fe4: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A3FE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A3FE8u; }
            if (ctx->pc != 0x3A3FE8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A3FE8u;
label_3a3fe8:
    // 0x3a3fe8: 0x10000024  b           . + 4 + (0x24 << 2)
label_3a3fec:
    if (ctx->pc == 0x3A3FECu) {
        ctx->pc = 0x3A3FF0u;
        goto label_3a3ff0;
    }
    ctx->pc = 0x3A3FE8u;
    {
        const bool branch_taken_0x3a3fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3fe8) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A3FF0u;
label_3a3ff0:
    // 0x3a3ff0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3a3ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3a3ff4:
    // 0x3a3ff4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3a3ff8:
    // 0x3a3ff8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a3ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a3ffc:
    // 0x3a3ffc: 0x320f809  jalr        $t9
label_3a4000:
    if (ctx->pc == 0x3A4000u) {
        ctx->pc = 0x3A4000u;
            // 0x3a4000: 0x344516a9  ori         $a1, $v0, 0x16A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5801);
        ctx->pc = 0x3A4004u;
        goto label_3a4004;
    }
    ctx->pc = 0x3A3FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4004u);
        ctx->pc = 0x3A4000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3FFCu;
            // 0x3a4000: 0x344516a9  ori         $a1, $v0, 0x16A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5801);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4004u; }
            if (ctx->pc != 0x3A4004u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4004u;
label_3a4004:
    // 0x3a4004: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3a4008:
    if (ctx->pc == 0x3A4008u) {
        ctx->pc = 0x3A400Cu;
        goto label_3a400c;
    }
    ctx->pc = 0x3A4004u;
    {
        const bool branch_taken_0x3a4004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4004) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A400Cu;
label_3a400c:
    // 0x3a400c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3a400cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a4010:
    // 0x3a4010: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a4014:
    if (ctx->pc == 0x3A4014u) {
        ctx->pc = 0x3A4014u;
            // 0x3a4014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4018u;
        goto label_3a4018;
    }
    ctx->pc = 0x3A4010u;
    {
        const bool branch_taken_0x3a4010 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A4014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4010u;
            // 0x3a4014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4010) {
            ctx->pc = 0x3A4028u;
            goto label_3a4028;
        }
    }
    ctx->pc = 0x3A4018u;
label_3a4018:
    // 0x3a4018: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a4018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a401c:
    // 0x3a401c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a4020:
    if (ctx->pc == 0x3A4020u) {
        ctx->pc = 0x3A4024u;
        goto label_3a4024;
    }
    ctx->pc = 0x3A401Cu;
    {
        const bool branch_taken_0x3a401c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a401c) {
            ctx->pc = 0x3A4028u;
            goto label_3a4028;
        }
    }
    ctx->pc = 0x3A4024u;
label_3a4024:
    // 0x3a4024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a4028:
    // 0x3a4028: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a402c:
    if (ctx->pc == 0x3A402Cu) {
        ctx->pc = 0x3A4030u;
        goto label_3a4030;
    }
    ctx->pc = 0x3A4028u;
    {
        const bool branch_taken_0x3a4028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4028) {
            ctx->pc = 0x3A4044u;
            goto label_3a4044;
        }
    }
    ctx->pc = 0x3A4030u;
label_3a4030:
    // 0x3a4030: 0xc075eb4  jal         func_1D7AD0
label_3a4034:
    if (ctx->pc == 0x3A4034u) {
        ctx->pc = 0x3A4034u;
            // 0x3a4034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4038u;
        goto label_3a4038;
    }
    ctx->pc = 0x3A4030u;
    SET_GPR_U32(ctx, 31, 0x3A4038u);
    ctx->pc = 0x3A4034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4030u;
            // 0x3a4034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4038u; }
        if (ctx->pc != 0x3A4038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4038u; }
        if (ctx->pc != 0x3A4038u) { return; }
    }
    ctx->pc = 0x3A4038u;
label_3a4038:
    // 0x3a4038: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a403c:
    if (ctx->pc == 0x3A403Cu) {
        ctx->pc = 0x3A4040u;
        goto label_3a4040;
    }
    ctx->pc = 0x3A4038u;
    {
        const bool branch_taken_0x3a4038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4038) {
            ctx->pc = 0x3A4044u;
            goto label_3a4044;
        }
    }
    ctx->pc = 0x3A4040u;
label_3a4040:
    // 0x3a4040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a4040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4044:
    // 0x3a4044: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_3a4048:
    if (ctx->pc == 0x3A4048u) {
        ctx->pc = 0x3A404Cu;
        goto label_3a404c;
    }
    ctx->pc = 0x3A4044u;
    {
        const bool branch_taken_0x3a4044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4044) {
            ctx->pc = 0x3A407Cu;
            goto label_3a407c;
        }
    }
    ctx->pc = 0x3A404Cu;
label_3a404c:
    // 0x3a404c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a4050:
    // 0x3a4050: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x3a4050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3a4054:
    // 0x3a4054: 0x8c660ea4  lw          $a2, 0xEA4($v1)
    ctx->pc = 0x3a4054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_3a4058:
    // 0x3a4058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a405c:
    // 0x3a405c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a405cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a4060:
    // 0x3a4060: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3a4060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3a4064:
    // 0x3a4064: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a4064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3a4068:
    // 0x3a4068: 0xac850494  sw          $a1, 0x494($a0)
    ctx->pc = 0x3a4068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 5));
label_3a406c:
    // 0x3a406c: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x3a406cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
label_3a4070:
    // 0x3a4070: 0x8e040d94  lw          $a0, 0xD94($s0)
    ctx->pc = 0x3a4070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3476)));
label_3a4074:
    // 0x3a4074: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a4074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3a4078:
    // 0x3a4078: 0xae030d94  sw          $v1, 0xD94($s0)
    ctx->pc = 0x3a4078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 3));
label_3a407c:
    // 0x3a407c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a407cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a4080:
    // 0x3a4080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a4080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a4084:
    // 0x3a4084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a4088:
    // 0x3a4088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a4088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a408c:
    // 0x3a408c: 0x3e00008  jr          $ra
label_3a4090:
    if (ctx->pc == 0x3A4090u) {
        ctx->pc = 0x3A4090u;
            // 0x3a4090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3A4094u;
        goto label_3a4094;
    }
    ctx->pc = 0x3A408Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A408Cu;
            // 0x3a4090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4094u;
label_3a4094:
    // 0x3a4094: 0x0  nop
    ctx->pc = 0x3a4094u;
    // NOP
label_3a4098:
    // 0x3a4098: 0x0  nop
    ctx->pc = 0x3a4098u;
    // NOP
label_3a409c:
    // 0x3a409c: 0x0  nop
    ctx->pc = 0x3a409cu;
    // NOP
label_3a40a0:
    // 0x3a40a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a40a4:
    // 0x3a40a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a40a8:
    // 0x3a40a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a40a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a40ac:
    // 0x3a40ac: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3a40acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3a40b0:
    // 0x3a40b0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3a40b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3a40b4:
    // 0x3a40b4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x3a40b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_3a40b8:
    // 0x3a40b8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3a40b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3a40bc:
    // 0x3a40bc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3a40c0:
    if (ctx->pc == 0x3A40C0u) {
        ctx->pc = 0x3A40C0u;
            // 0x3a40c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A40C4u;
        goto label_3a40c4;
    }
    ctx->pc = 0x3A40BCu;
    {
        const bool branch_taken_0x3a40bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A40BCu;
            // 0x3a40c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40bc) {
            ctx->pc = 0x3A4128u;
            goto label_3a4128;
        }
    }
    ctx->pc = 0x3A40C4u;
label_3a40c4:
    // 0x3a40c4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3a40c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a40c8:
    // 0x3a40c8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3a40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3a40cc:
    // 0x3a40cc: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3a40d0:
    if (ctx->pc == 0x3A40D0u) {
        ctx->pc = 0x3A40D0u;
            // 0x3a40d0: 0xc6011190  lwc1        $f1, 0x1190($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3A40D4u;
        goto label_3a40d4;
    }
    ctx->pc = 0x3A40CCu;
    {
        const bool branch_taken_0x3a40cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a40cc) {
            ctx->pc = 0x3A40D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A40CCu;
            // 0x3a40d0: 0xc6011190  lwc1        $f1, 0x1190($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A40DCu;
            goto label_3a40dc;
        }
    }
    ctx->pc = 0x3A40D4u;
label_3a40d4:
    // 0x3a40d4: 0x10000015  b           . + 4 + (0x15 << 2)
label_3a40d8:
    if (ctx->pc == 0x3A40D8u) {
        ctx->pc = 0x3A40D8u;
            // 0x3a40d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3A40DCu;
        goto label_3a40dc;
    }
    ctx->pc = 0x3A40D4u;
    {
        const bool branch_taken_0x3a40d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A40D4u;
            // 0x3a40d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40d4) {
            ctx->pc = 0x3A412Cu;
            goto label_3a412c;
        }
    }
    ctx->pc = 0x3A40DCu;
label_3a40dc:
    // 0x3a40dc: 0x3c03430a  lui         $v1, 0x430A
    ctx->pc = 0x3a40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17162 << 16));
label_3a40e0:
    // 0x3a40e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a40e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a40e4:
    // 0x3a40e4: 0x0  nop
    ctx->pc = 0x3a40e4u;
    // NOP
label_3a40e8:
    // 0x3a40e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a40e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a40ec:
    // 0x3a40ec: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_3a40f0:
    if (ctx->pc == 0x3A40F0u) {
        ctx->pc = 0x3A40F4u;
        goto label_3a40f4;
    }
    ctx->pc = 0x3A40ECu;
    {
        const bool branch_taken_0x3a40ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a40ec) {
            ctx->pc = 0x3A4128u;
            goto label_3a4128;
        }
    }
    ctx->pc = 0x3A40F4u;
label_3a40f4:
    // 0x3a40f4: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x3a40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_3a40f8:
    // 0x3a40f8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3a40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3a40fc:
    // 0x3a40fc: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
label_3a4100:
    if (ctx->pc == 0x3A4100u) {
        ctx->pc = 0x3A4104u;
        goto label_3a4104;
    }
    ctx->pc = 0x3A40FCu;
    {
        const bool branch_taken_0x3a40fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a40fc) {
            ctx->pc = 0x3A4128u;
            goto label_3a4128;
        }
    }
    ctx->pc = 0x3A4104u;
label_3a4104:
    // 0x3a4104: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3a4104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a4108:
    // 0x3a4108: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a4108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a410c:
    // 0x3a410c: 0x320f809  jalr        $t9
label_3a4110:
    if (ctx->pc == 0x3A4110u) {
        ctx->pc = 0x3A4110u;
            // 0x3a4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4114u;
        goto label_3a4114;
    }
    ctx->pc = 0x3A410Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4114u);
        ctx->pc = 0x3A4110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A410Cu;
            // 0x3a4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4114u; }
            if (ctx->pc != 0x3A4114u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4114u;
label_3a4114:
    // 0x3a4114: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x3a4114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_3a4118:
    // 0x3a4118: 0xc12ca3c  jal         func_4B28F0
label_3a411c:
    if (ctx->pc == 0x3A411Cu) {
        ctx->pc = 0x3A411Cu;
            // 0x3a411c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3A4120u;
        goto label_3a4120;
    }
    ctx->pc = 0x3A4118u;
    SET_GPR_U32(ctx, 31, 0x3A4120u);
    ctx->pc = 0x3A411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4118u;
            // 0x3a411c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4120u; }
        if (ctx->pc != 0x3A4120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4120u; }
        if (ctx->pc != 0x3A4120u) { return; }
    }
    ctx->pc = 0x3A4120u;
label_3a4120:
    // 0x3a4120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a4120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4124:
    // 0x3a4124: 0xa20311c0  sb          $v1, 0x11C0($s0)
    ctx->pc = 0x3a4124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4544), (uint8_t)GPR_U32(ctx, 3));
label_3a4128:
    // 0x3a4128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a4128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a412c:
    // 0x3a412c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a412cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4130:
    // 0x3a4130: 0x3e00008  jr          $ra
label_3a4134:
    if (ctx->pc == 0x3A4134u) {
        ctx->pc = 0x3A4134u;
            // 0x3a4134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A4138u;
        goto label_3a4138;
    }
    ctx->pc = 0x3A4130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4130u;
            // 0x3a4134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4138u;
label_3a4138:
    // 0x3a4138: 0x0  nop
    ctx->pc = 0x3a4138u;
    // NOP
label_3a413c:
    // 0x3a413c: 0x0  nop
    ctx->pc = 0x3a413cu;
    // NOP
label_3a4140:
    // 0x3a4140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a4144:
    // 0x3a4144: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x3a4144u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a4148:
    // 0x3a4148: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3a414c:
    // 0x3a414c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a4150:
    // 0x3a4150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a4154:
    // 0x3a4154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a4154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a4158:
    // 0x3a4158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a4158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a415c:
    // 0x3a415c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a415cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a4160:
    // 0x3a4160: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3a4160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3a4164:
    // 0x3a4164: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3a4164u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3a4168:
    // 0x3a4168: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3a416c:
    if (ctx->pc == 0x3A416Cu) {
        ctx->pc = 0x3A416Cu;
            // 0x3a416c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4170u;
        goto label_3a4170;
    }
    ctx->pc = 0x3A4168u;
    {
        const bool branch_taken_0x3a4168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4168u;
            // 0x3a416c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4168) {
            ctx->pc = 0x3A417Cu;
            goto label_3a417c;
        }
    }
    ctx->pc = 0x3A4170u;
label_3a4170:
    // 0x3a4170: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_3a4174:
    if (ctx->pc == 0x3A4174u) {
        ctx->pc = 0x3A4174u;
            // 0x3a4174: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3A4178u;
        goto label_3a4178;
    }
    ctx->pc = 0x3A4170u;
    {
        const bool branch_taken_0x3a4170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a4170) {
            ctx->pc = 0x3A4174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4170u;
            // 0x3a4174: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4180u;
            goto label_3a4180;
        }
    }
    ctx->pc = 0x3A4178u;
label_3a4178:
    // 0x3a4178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a4178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a417c:
    // 0x3a417c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3a417cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3a4180:
    // 0x3a4180: 0x506000f8  beql        $v1, $zero, . + 4 + (0xF8 << 2)
label_3a4184:
    if (ctx->pc == 0x3A4184u) {
        ctx->pc = 0x3A4184u;
            // 0x3a4184: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3A4188u;
        goto label_3a4188;
    }
    ctx->pc = 0x3A4180u;
    {
        const bool branch_taken_0x3a4180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4180) {
            ctx->pc = 0x3A4184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4180u;
            // 0x3a4184: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4564u;
            goto label_3a4564;
        }
    }
    ctx->pc = 0x3A4188u;
label_3a4188:
    // 0x3a4188: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a4188u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a418c:
    // 0x3a418c: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x3a418cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_3a4190:
    // 0x3a4190: 0x102000f3  beqz        $at, . + 4 + (0xF3 << 2)
label_3a4194:
    if (ctx->pc == 0x3A4194u) {
        ctx->pc = 0x3A4198u;
        goto label_3a4198;
    }
    ctx->pc = 0x3A4190u;
    {
        const bool branch_taken_0x3a4190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4190) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4198u;
label_3a4198:
    // 0x3a4198: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3a4198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3a419c:
    // 0x3a419c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a419cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a41a0:
    // 0x3a41a0: 0x248475f0  addiu       $a0, $a0, 0x75F0
    ctx->pc = 0x3a41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30192));
label_3a41a4:
    // 0x3a41a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a41a8:
    // 0x3a41a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a41ac:
    // 0x3a41ac: 0x600008  jr          $v1
label_3a41b0:
    if (ctx->pc == 0x3A41B0u) {
        ctx->pc = 0x3A41B4u;
        goto label_3a41b4;
    }
    ctx->pc = 0x3A41ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A41B4u: goto label_3a41b4;
            case 0x3A4240u: goto label_3a4240;
            case 0x3A42B0u: goto label_3a42b0;
            case 0x3A42E8u: goto label_3a42e8;
            case 0x3A42FCu: goto label_3a42fc;
            case 0x3A4314u: goto label_3a4314;
            case 0x3A4328u: goto label_3a4328;
            case 0x3A434Cu: goto label_3a434c;
            case 0x3A43B0u: goto label_3a43b0;
            case 0x3A43D8u: goto label_3a43d8;
            case 0x3A43FCu: goto label_3a43fc;
            case 0x3A4428u: goto label_3a4428;
            case 0x3A4430u: goto label_3a4430;
            case 0x3A4490u: goto label_3a4490;
            case 0x3A44ECu: goto label_3a44ec;
            case 0x3A4560u: goto label_3a4560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3A41B4u;
label_3a41b4:
    // 0x3a41b4: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3a41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3a41b8:
    // 0x3a41b8: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3a41b8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a41bc:
    // 0x3a41bc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a41c0:
    if (ctx->pc == 0x3A41C0u) {
        ctx->pc = 0x3A41C0u;
            // 0x3a41c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A41C4u;
        goto label_3a41c4;
    }
    ctx->pc = 0x3A41BCu;
    {
        const bool branch_taken_0x3a41bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A41C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A41BCu;
            // 0x3a41c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41bc) {
            ctx->pc = 0x3A41D4u;
            goto label_3a41d4;
        }
    }
    ctx->pc = 0x3A41C4u;
label_3a41c4:
    // 0x3a41c4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a41c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a41c8:
    // 0x3a41c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a41cc:
    if (ctx->pc == 0x3A41CCu) {
        ctx->pc = 0x3A41D0u;
        goto label_3a41d0;
    }
    ctx->pc = 0x3A41C8u;
    {
        const bool branch_taken_0x3a41c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a41c8) {
            ctx->pc = 0x3A41D4u;
            goto label_3a41d4;
        }
    }
    ctx->pc = 0x3A41D0u;
label_3a41d0:
    // 0x3a41d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a41d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a41d4:
    // 0x3a41d4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a41d8:
    if (ctx->pc == 0x3A41D8u) {
        ctx->pc = 0x3A41DCu;
        goto label_3a41dc;
    }
    ctx->pc = 0x3A41D4u;
    {
        const bool branch_taken_0x3a41d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a41d4) {
            ctx->pc = 0x3A41F0u;
            goto label_3a41f0;
        }
    }
    ctx->pc = 0x3A41DCu;
label_3a41dc:
    // 0x3a41dc: 0xc075eb4  jal         func_1D7AD0
label_3a41e0:
    if (ctx->pc == 0x3A41E0u) {
        ctx->pc = 0x3A41E0u;
            // 0x3a41e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A41E4u;
        goto label_3a41e4;
    }
    ctx->pc = 0x3A41DCu;
    SET_GPR_U32(ctx, 31, 0x3A41E4u);
    ctx->pc = 0x3A41E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A41DCu;
            // 0x3a41e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A41E4u; }
        if (ctx->pc != 0x3A41E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A41E4u; }
        if (ctx->pc != 0x3A41E4u) { return; }
    }
    ctx->pc = 0x3A41E4u;
label_3a41e4:
    // 0x3a41e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a41e8:
    if (ctx->pc == 0x3A41E8u) {
        ctx->pc = 0x3A41ECu;
        goto label_3a41ec;
    }
    ctx->pc = 0x3A41E4u;
    {
        const bool branch_taken_0x3a41e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a41e4) {
            ctx->pc = 0x3A41F0u;
            goto label_3a41f0;
        }
    }
    ctx->pc = 0x3A41ECu;
label_3a41ec:
    // 0x3a41ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a41ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a41f0:
    // 0x3a41f0: 0x124000db  beqz        $s2, . + 4 + (0xDB << 2)
label_3a41f4:
    if (ctx->pc == 0x3A41F4u) {
        ctx->pc = 0x3A41F8u;
        goto label_3a41f8;
    }
    ctx->pc = 0x3A41F0u;
    {
        const bool branch_taken_0x3a41f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a41f0) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A41F8u;
label_3a41f8:
    // 0x3a41f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a41fc:
    // 0x3a41fc: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x3a41fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3a4200:
    // 0x3a4200: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3a4200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a4204:
    // 0x3a4204: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3a4204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3a4208:
    // 0x3a4208: 0x8c8407b8  lw          $a0, 0x7B8($a0)
    ctx->pc = 0x3a4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1976)));
label_3a420c:
    // 0x3a420c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3a420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3a4210:
    // 0x3a4210: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4214:
    // 0x3a4214: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3a4214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3a4218:
    // 0x3a4218: 0x90840054  lbu         $a0, 0x54($a0)
    ctx->pc = 0x3a4218u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_3a421c:
    // 0x3a421c: 0xa064000c  sb          $a0, 0xC($v1)
    ctx->pc = 0x3a421cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a4220:
    // 0x3a4220: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3a4220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a4224:
    // 0x3a4224: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a4224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a4228:
    // 0x3a4228: 0x8c6407b8  lw          $a0, 0x7B8($v1)
    ctx->pc = 0x3a4228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1976)));
label_3a422c:
    // 0x3a422c: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x3a422cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3a4230:
    // 0x3a4230: 0xc0bc1d4  jal         func_2F0750
label_3a4234:
    if (ctx->pc == 0x3A4234u) {
        ctx->pc = 0x3A4234u;
            // 0x3a4234: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->pc = 0x3A4238u;
        goto label_3a4238;
    }
    ctx->pc = 0x3A4230u;
    SET_GPR_U32(ctx, 31, 0x3A4238u);
    ctx->pc = 0x3A4234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4230u;
            // 0x3a4234: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4238u; }
        if (ctx->pc != 0x3A4238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4238u; }
        if (ctx->pc != 0x3A4238u) { return; }
    }
    ctx->pc = 0x3A4238u;
label_3a4238:
    // 0x3a4238: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_3a423c:
    if (ctx->pc == 0x3A423Cu) {
        ctx->pc = 0x3A4240u;
        goto label_3a4240;
    }
    ctx->pc = 0x3A4238u;
    {
        const bool branch_taken_0x3a4238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4238) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4240u;
label_3a4240:
    // 0x3a4240: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a4240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3a4244:
    // 0x3a4244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a4244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4248:
    // 0x3a4248: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3a4248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3a424c:
    // 0x3a424c: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x3a424cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_3a4250:
    // 0x3a4250: 0x146400c3  bne         $v1, $a0, . + 4 + (0xC3 << 2)
label_3a4254:
    if (ctx->pc == 0x3A4254u) {
        ctx->pc = 0x3A4258u;
        goto label_3a4258;
    }
    ctx->pc = 0x3A4250u;
    {
        const bool branch_taken_0x3a4250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a4250) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4258u;
label_3a4258:
    // 0x3a4258: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3a4258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3a425c:
    // 0x3a425c: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x3a425cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3a4260:
    // 0x3a4260: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a4264:
    if (ctx->pc == 0x3A4264u) {
        ctx->pc = 0x3A4264u;
            // 0x3a4264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4268u;
        goto label_3a4268;
    }
    ctx->pc = 0x3A4260u;
    {
        const bool branch_taken_0x3a4260 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A4264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4260u;
            // 0x3a4264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4260) {
            ctx->pc = 0x3A4278u;
            goto label_3a4278;
        }
    }
    ctx->pc = 0x3A4268u;
label_3a4268:
    // 0x3a4268: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a4268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a426c:
    // 0x3a426c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a4270:
    if (ctx->pc == 0x3A4270u) {
        ctx->pc = 0x3A4274u;
        goto label_3a4274;
    }
    ctx->pc = 0x3A426Cu;
    {
        const bool branch_taken_0x3a426c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a426c) {
            ctx->pc = 0x3A4278u;
            goto label_3a4278;
        }
    }
    ctx->pc = 0x3A4274u;
label_3a4274:
    // 0x3a4274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a4278:
    // 0x3a4278: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a427c:
    if (ctx->pc == 0x3A427Cu) {
        ctx->pc = 0x3A4280u;
        goto label_3a4280;
    }
    ctx->pc = 0x3A4278u;
    {
        const bool branch_taken_0x3a4278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4278) {
            ctx->pc = 0x3A4294u;
            goto label_3a4294;
        }
    }
    ctx->pc = 0x3A4280u;
label_3a4280:
    // 0x3a4280: 0xc075eb4  jal         func_1D7AD0
label_3a4284:
    if (ctx->pc == 0x3A4284u) {
        ctx->pc = 0x3A4284u;
            // 0x3a4284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4288u;
        goto label_3a4288;
    }
    ctx->pc = 0x3A4280u;
    SET_GPR_U32(ctx, 31, 0x3A4288u);
    ctx->pc = 0x3A4284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4280u;
            // 0x3a4284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4288u; }
        if (ctx->pc != 0x3A4288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4288u; }
        if (ctx->pc != 0x3A4288u) { return; }
    }
    ctx->pc = 0x3A4288u;
label_3a4288:
    // 0x3a4288: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a428c:
    if (ctx->pc == 0x3A428Cu) {
        ctx->pc = 0x3A4290u;
        goto label_3a4290;
    }
    ctx->pc = 0x3A4288u;
    {
        const bool branch_taken_0x3a4288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4288) {
            ctx->pc = 0x3A4294u;
            goto label_3a4294;
        }
    }
    ctx->pc = 0x3A4290u;
label_3a4290:
    // 0x3a4290: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a4290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4294:
    // 0x3a4294: 0x122000b2  beqz        $s1, . + 4 + (0xB2 << 2)
label_3a4298:
    if (ctx->pc == 0x3A4298u) {
        ctx->pc = 0x3A429Cu;
        goto label_3a429c;
    }
    ctx->pc = 0x3A4294u;
    {
        const bool branch_taken_0x3a4294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4294) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A429Cu;
label_3a429c:
    // 0x3a429c: 0x3c04a400  lui         $a0, 0xA400
    ctx->pc = 0x3a429cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41984 << 16));
label_3a42a0:
    // 0x3a42a0: 0xc0733ec  jal         func_1CCFB0
label_3a42a4:
    if (ctx->pc == 0x3A42A4u) {
        ctx->pc = 0x3A42A4u;
            // 0x3a42a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A42A8u;
        goto label_3a42a8;
    }
    ctx->pc = 0x3A42A0u;
    SET_GPR_U32(ctx, 31, 0x3A42A8u);
    ctx->pc = 0x3A42A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A42A0u;
            // 0x3a42a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFB0u;
    if (runtime->hasFunction(0x1CCFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CCFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A42A8u; }
        if (ctx->pc != 0x3A42A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFB0_0x1ccfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A42A8u; }
        if (ctx->pc != 0x3A42A8u) { return; }
    }
    ctx->pc = 0x3A42A8u;
label_3a42a8:
    // 0x3a42a8: 0x100000ad  b           . + 4 + (0xAD << 2)
label_3a42ac:
    if (ctx->pc == 0x3A42ACu) {
        ctx->pc = 0x3A42B0u;
        goto label_3a42b0;
    }
    ctx->pc = 0x3A42A8u;
    {
        const bool branch_taken_0x3a42a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a42a8) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A42B0u;
label_3a42b0:
    // 0x3a42b0: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x3a42b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_3a42b4:
    // 0x3a42b4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3a42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3a42b8:
    // 0x3a42b8: 0x106500a9  beq         $v1, $a1, . + 4 + (0xA9 << 2)
label_3a42bc:
    if (ctx->pc == 0x3A42BCu) {
        ctx->pc = 0x3A42C0u;
        goto label_3a42c0;
    }
    ctx->pc = 0x3A42B8u;
    {
        const bool branch_taken_0x3a42b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a42b8) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A42C0u;
label_3a42c0:
    // 0x3a42c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3a42c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a42c4:
    // 0x3a42c4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a42c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a42c8:
    // 0x3a42c8: 0x320f809  jalr        $t9
label_3a42cc:
    if (ctx->pc == 0x3A42CCu) {
        ctx->pc = 0x3A42CCu;
            // 0x3a42cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A42D0u;
        goto label_3a42d0;
    }
    ctx->pc = 0x3A42C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A42D0u);
        ctx->pc = 0x3A42CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A42C8u;
            // 0x3a42cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A42D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A42D0u; }
            if (ctx->pc != 0x3A42D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A42D0u;
label_3a42d0:
    // 0x3a42d0: 0x26041150  addiu       $a0, $s0, 0x1150
    ctx->pc = 0x3a42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_3a42d4:
    // 0x3a42d4: 0xc12ca3c  jal         func_4B28F0
label_3a42d8:
    if (ctx->pc == 0x3A42D8u) {
        ctx->pc = 0x3A42D8u;
            // 0x3a42d8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3A42DCu;
        goto label_3a42dc;
    }
    ctx->pc = 0x3A42D4u;
    SET_GPR_U32(ctx, 31, 0x3A42DCu);
    ctx->pc = 0x3A42D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A42D4u;
            // 0x3a42d8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A42DCu; }
        if (ctx->pc != 0x3A42DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A42DCu; }
        if (ctx->pc != 0x3A42DCu) { return; }
    }
    ctx->pc = 0x3A42DCu;
label_3a42dc:
    // 0x3a42dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a42e0:
    // 0x3a42e0: 0x1000009f  b           . + 4 + (0x9F << 2)
label_3a42e4:
    if (ctx->pc == 0x3A42E4u) {
        ctx->pc = 0x3A42E4u;
            // 0x3a42e4: 0xa20311c0  sb          $v1, 0x11C0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4544), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3A42E8u;
        goto label_3a42e8;
    }
    ctx->pc = 0x3A42E0u;
    {
        const bool branch_taken_0x3a42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A42E0u;
            // 0x3a42e4: 0xa20311c0  sb          $v1, 0x11C0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4544), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42e0) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A42E8u;
label_3a42e8:
    // 0x3a42e8: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x3a42e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3a42ec:
    // 0x3a42ec: 0xc0ba500  jal         func_2E9400
label_3a42f0:
    if (ctx->pc == 0x3A42F0u) {
        ctx->pc = 0x3A42F0u;
            // 0x3a42f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A42F4u;
        goto label_3a42f4;
    }
    ctx->pc = 0x3A42ECu;
    SET_GPR_U32(ctx, 31, 0x3A42F4u);
    ctx->pc = 0x3A42F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A42ECu;
            // 0x3a42f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9400u;
    if (runtime->hasFunction(0x2E9400u)) {
        auto targetFn = runtime->lookupFunction(0x2E9400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A42F4u; }
        if (ctx->pc != 0x3A42F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9400_0x2e9400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A42F4u; }
        if (ctx->pc != 0x3A42F4u) { return; }
    }
    ctx->pc = 0x3A42F4u;
label_3a42f4:
    // 0x3a42f4: 0x1000009a  b           . + 4 + (0x9A << 2)
label_3a42f8:
    if (ctx->pc == 0x3A42F8u) {
        ctx->pc = 0x3A42FCu;
        goto label_3a42fc;
    }
    ctx->pc = 0x3A42F4u;
    {
        const bool branch_taken_0x3a42f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a42f4) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A42FCu;
label_3a42fc:
    // 0x3a42fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4300:
    // 0x3a4300: 0x8c444018  lw          $a0, 0x4018($v0)
    ctx->pc = 0x3a4300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16408)));
label_3a4304:
    // 0x3a4304: 0xc0d8bcc  jal         func_362F30
label_3a4308:
    if (ctx->pc == 0x3A4308u) {
        ctx->pc = 0x3A4308u;
            // 0x3a4308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A430Cu;
        goto label_3a430c;
    }
    ctx->pc = 0x3A4304u;
    SET_GPR_U32(ctx, 31, 0x3A430Cu);
    ctx->pc = 0x3A4308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4304u;
            // 0x3a4308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362F30u;
    if (runtime->hasFunction(0x362F30u)) {
        auto targetFn = runtime->lookupFunction(0x362F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A430Cu; }
        if (ctx->pc != 0x3A430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362F30_0x362f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A430Cu; }
        if (ctx->pc != 0x3A430Cu) { return; }
    }
    ctx->pc = 0x3A430Cu;
label_3a430c:
    // 0x3a430c: 0x10000094  b           . + 4 + (0x94 << 2)
label_3a4310:
    if (ctx->pc == 0x3A4310u) {
        ctx->pc = 0x3A4314u;
        goto label_3a4314;
    }
    ctx->pc = 0x3A430Cu;
    {
        const bool branch_taken_0x3a430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a430c) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4314u;
label_3a4314:
    // 0x3a4314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a4314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4318:
    // 0x3a4318: 0xc077fb0  jal         func_1DFEC0
label_3a431c:
    if (ctx->pc == 0x3A431Cu) {
        ctx->pc = 0x3A431Cu;
            // 0x3a431c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x3A4320u;
        goto label_3a4320;
    }
    ctx->pc = 0x3A4318u;
    SET_GPR_U32(ctx, 31, 0x3A4320u);
    ctx->pc = 0x3A431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4318u;
            // 0x3a431c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4320u; }
        if (ctx->pc != 0x3A4320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4320u; }
        if (ctx->pc != 0x3A4320u) { return; }
    }
    ctx->pc = 0x3A4320u;
label_3a4320:
    // 0x3a4320: 0x1000008f  b           . + 4 + (0x8F << 2)
label_3a4324:
    if (ctx->pc == 0x3A4324u) {
        ctx->pc = 0x3A4328u;
        goto label_3a4328;
    }
    ctx->pc = 0x3A4320u;
    {
        const bool branch_taken_0x3a4320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4320) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4328u;
label_3a4328:
    // 0x3a4328: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x3a4328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_3a432c:
    // 0x3a432c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3a432cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3a4330:
    // 0x3a4330: 0xae020da0  sw          $v0, 0xDA0($s0)
    ctx->pc = 0x3a4330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 2));
label_3a4334:
    // 0x3a4334: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a4334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a4338:
    // 0x3a4338: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x3a4338u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3a433c:
    // 0x3a433c: 0xc07620c  jal         func_1D8830
label_3a4340:
    if (ctx->pc == 0x3A4340u) {
        ctx->pc = 0x3A4340u;
            // 0x3a4340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4344u;
        goto label_3a4344;
    }
    ctx->pc = 0x3A433Cu;
    SET_GPR_U32(ctx, 31, 0x3A4344u);
    ctx->pc = 0x3A4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A433Cu;
            // 0x3a4340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8830u;
    if (runtime->hasFunction(0x1D8830u)) {
        auto targetFn = runtime->lookupFunction(0x1D8830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4344u; }
        if (ctx->pc != 0x3A4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8830_0x1d8830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4344u; }
        if (ctx->pc != 0x3A4344u) { return; }
    }
    ctx->pc = 0x3A4344u;
label_3a4344:
    // 0x3a4344: 0x10000086  b           . + 4 + (0x86 << 2)
label_3a4348:
    if (ctx->pc == 0x3A4348u) {
        ctx->pc = 0x3A434Cu;
        goto label_3a434c;
    }
    ctx->pc = 0x3A4344u;
    {
        const bool branch_taken_0x3a4344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4344) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A434Cu;
label_3a434c:
    // 0x3a434c: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3a434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3a4350:
    // 0x3a4350: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3a4350u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a4354:
    // 0x3a4354: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a4358:
    if (ctx->pc == 0x3A4358u) {
        ctx->pc = 0x3A4358u;
            // 0x3a4358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A435Cu;
        goto label_3a435c;
    }
    ctx->pc = 0x3A4354u;
    {
        const bool branch_taken_0x3a4354 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A4358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4354u;
            // 0x3a4358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4354) {
            ctx->pc = 0x3A436Cu;
            goto label_3a436c;
        }
    }
    ctx->pc = 0x3A435Cu;
label_3a435c:
    // 0x3a435c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a435cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a4360:
    // 0x3a4360: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a4364:
    if (ctx->pc == 0x3A4364u) {
        ctx->pc = 0x3A4368u;
        goto label_3a4368;
    }
    ctx->pc = 0x3A4360u;
    {
        const bool branch_taken_0x3a4360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4360) {
            ctx->pc = 0x3A436Cu;
            goto label_3a436c;
        }
    }
    ctx->pc = 0x3A4368u;
label_3a4368:
    // 0x3a4368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a436c:
    // 0x3a436c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a4370:
    if (ctx->pc == 0x3A4370u) {
        ctx->pc = 0x3A4374u;
        goto label_3a4374;
    }
    ctx->pc = 0x3A436Cu;
    {
        const bool branch_taken_0x3a436c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a436c) {
            ctx->pc = 0x3A4388u;
            goto label_3a4388;
        }
    }
    ctx->pc = 0x3A4374u;
label_3a4374:
    // 0x3a4374: 0xc075eb4  jal         func_1D7AD0
label_3a4378:
    if (ctx->pc == 0x3A4378u) {
        ctx->pc = 0x3A4378u;
            // 0x3a4378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A437Cu;
        goto label_3a437c;
    }
    ctx->pc = 0x3A4374u;
    SET_GPR_U32(ctx, 31, 0x3A437Cu);
    ctx->pc = 0x3A4378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4374u;
            // 0x3a4378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A437Cu; }
        if (ctx->pc != 0x3A437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A437Cu; }
        if (ctx->pc != 0x3A437Cu) { return; }
    }
    ctx->pc = 0x3A437Cu;
label_3a437c:
    // 0x3a437c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a4380:
    if (ctx->pc == 0x3A4380u) {
        ctx->pc = 0x3A4384u;
        goto label_3a4384;
    }
    ctx->pc = 0x3A437Cu;
    {
        const bool branch_taken_0x3a437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a437c) {
            ctx->pc = 0x3A4388u;
            goto label_3a4388;
        }
    }
    ctx->pc = 0x3A4384u;
label_3a4384:
    // 0x3a4384: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a4384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4388:
    // 0x3a4388: 0x12200075  beqz        $s1, . + 4 + (0x75 << 2)
label_3a438c:
    if (ctx->pc == 0x3A438Cu) {
        ctx->pc = 0x3A4390u;
        goto label_3a4390;
    }
    ctx->pc = 0x3A4388u;
    {
        const bool branch_taken_0x3a4388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4388) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4390u;
label_3a4390:
    // 0x3a4390: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x3a4390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3a4394:
    // 0x3a4394: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a4398:
    // 0x3a4398: 0x8c630ea4  lw          $v1, 0xEA4($v1)
    ctx->pc = 0x3a4398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_3a439c:
    // 0x3a439c: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x3a439cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_3a43a0:
    // 0x3a43a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a43a4:
    // 0x3a43a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3a43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3a43a8:
    // 0x3a43a8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_3a43ac:
    if (ctx->pc == 0x3A43ACu) {
        ctx->pc = 0x3A43ACu;
            // 0x3a43ac: 0xac6504b8  sw          $a1, 0x4B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1208), GPR_U32(ctx, 5));
        ctx->pc = 0x3A43B0u;
        goto label_3a43b0;
    }
    ctx->pc = 0x3A43A8u;
    {
        const bool branch_taken_0x3a43a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A43A8u;
            // 0x3a43ac: 0xac6504b8  sw          $a1, 0x4B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43a8) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A43B0u;
label_3a43b0:
    // 0x3a43b0: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x3a43b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3a43b4:
    // 0x3a43b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a43b8:
    // 0x3a43b8: 0x2ca10080  sltiu       $at, $a1, 0x80
    ctx->pc = 0x3a43b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_3a43bc:
    // 0x3a43bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_3a43c0:
    if (ctx->pc == 0x3A43C0u) {
        ctx->pc = 0x3A43C0u;
            // 0x3a43c0: 0x8c420ea4  lw          $v0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->pc = 0x3A43C4u;
        goto label_3a43c4;
    }
    ctx->pc = 0x3A43BCu;
    {
        const bool branch_taken_0x3a43bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A43C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A43BCu;
            // 0x3a43c0: 0x8c420ea4  lw          $v0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43bc) {
            ctx->pc = 0x3A43C8u;
            goto label_3a43c8;
        }
    }
    ctx->pc = 0x3A43C4u;
label_3a43c4:
    // 0x3a43c4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x3a43c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3a43c8:
    // 0x3a43c8: 0xc072ac6  jal         func_1CAB18
label_3a43cc:
    if (ctx->pc == 0x3A43CCu) {
        ctx->pc = 0x3A43CCu;
            // 0x3a43cc: 0x904404b8  lbu         $a0, 0x4B8($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1208)));
        ctx->pc = 0x3A43D0u;
        goto label_3a43d0;
    }
    ctx->pc = 0x3A43C8u;
    SET_GPR_U32(ctx, 31, 0x3A43D0u);
    ctx->pc = 0x3A43CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A43C8u;
            // 0x3a43cc: 0x904404b8  lbu         $a0, 0x4B8($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB18u;
    if (runtime->hasFunction(0x1CAB18u)) {
        auto targetFn = runtime->lookupFunction(0x1CAB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A43D0u; }
        if (ctx->pc != 0x3A43D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAB18_0x1cab18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A43D0u; }
        if (ctx->pc != 0x3A43D0u) { return; }
    }
    ctx->pc = 0x3A43D0u;
label_3a43d0:
    // 0x3a43d0: 0x10000063  b           . + 4 + (0x63 << 2)
label_3a43d4:
    if (ctx->pc == 0x3A43D4u) {
        ctx->pc = 0x3A43D8u;
        goto label_3a43d8;
    }
    ctx->pc = 0x3A43D0u;
    {
        const bool branch_taken_0x3a43d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43d0) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A43D8u;
label_3a43d8:
    // 0x3a43d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a43dc:
    // 0x3a43dc: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x3a43dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3a43e0:
    // 0x3a43e0: 0x8c42e408  lw          $v0, -0x1BF8($v0)
    ctx->pc = 0x3a43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960136)));
label_3a43e4:
    // 0x3a43e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a43e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a43e8:
    // 0x3a43e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3a43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3a43ec:
    // 0x3a43ec: 0xc052774  jal         func_149DD0
label_3a43f0:
    if (ctx->pc == 0x3A43F0u) {
        ctx->pc = 0x3A43F0u;
            // 0x3a43f0: 0xe44d0008  swc1        $f13, 0x8($v0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->pc = 0x3A43F4u;
        goto label_3a43f4;
    }
    ctx->pc = 0x3A43ECu;
    SET_GPR_U32(ctx, 31, 0x3A43F4u);
    ctx->pc = 0x3A43F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A43ECu;
            // 0x3a43f0: 0xe44d0008  swc1        $f13, 0x8($v0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DD0u;
    if (runtime->hasFunction(0x149DD0u)) {
        auto targetFn = runtime->lookupFunction(0x149DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A43F4u; }
        if (ctx->pc != 0x3A43F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DD0_0x149dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A43F4u; }
        if (ctx->pc != 0x3A43F4u) { return; }
    }
    ctx->pc = 0x3A43F4u;
label_3a43f4:
    // 0x3a43f4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3a43f8:
    if (ctx->pc == 0x3A43F8u) {
        ctx->pc = 0x3A43FCu;
        goto label_3a43fc;
    }
    ctx->pc = 0x3A43F4u;
    {
        const bool branch_taken_0x3a43f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43f4) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A43FCu;
label_3a43fc:
    // 0x3a43fc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3a43fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a4400:
    // 0x3a4400: 0x8e020a5c  lw          $v0, 0xA5C($s0)
    ctx->pc = 0x3a4400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2652)));
label_3a4404:
    // 0x3a4404: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x3a4404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_3a4408:
    // 0x3a4408: 0xc0eeb1c  jal         func_3BAC70
label_3a440c:
    if (ctx->pc == 0x3A440Cu) {
        ctx->pc = 0x3A440Cu;
            // 0x3a440c: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->pc = 0x3A4410u;
        goto label_3a4410;
    }
    ctx->pc = 0x3A4408u;
    SET_GPR_U32(ctx, 31, 0x3A4410u);
    ctx->pc = 0x3A440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4408u;
            // 0x3a440c: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC70u;
    if (runtime->hasFunction(0x3BAC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4410u; }
        if (ctx->pc != 0x3A4410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAC70_0x3bac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4410u; }
        if (ctx->pc != 0x3A4410u) { return; }
    }
    ctx->pc = 0x3A4410u;
label_3a4410:
    // 0x3a4410: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a4410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a4414:
    // 0x3a4414: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x3a4414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a4418:
    // 0x3a4418: 0xc0eeb2c  jal         func_3BACB0
label_3a441c:
    if (ctx->pc == 0x3A441Cu) {
        ctx->pc = 0x3A441Cu;
            // 0x3a441c: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->pc = 0x3A4420u;
        goto label_3a4420;
    }
    ctx->pc = 0x3A4418u;
    SET_GPR_U32(ctx, 31, 0x3A4420u);
    ctx->pc = 0x3A441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4418u;
            // 0x3a441c: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BACB0u;
    if (runtime->hasFunction(0x3BACB0u)) {
        auto targetFn = runtime->lookupFunction(0x3BACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4420u; }
        if (ctx->pc != 0x3A4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BACB0_0x3bacb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4420u; }
        if (ctx->pc != 0x3A4420u) { return; }
    }
    ctx->pc = 0x3A4420u;
label_3a4420:
    // 0x3a4420: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3a4424:
    if (ctx->pc == 0x3A4424u) {
        ctx->pc = 0x3A4428u;
        goto label_3a4428;
    }
    ctx->pc = 0x3A4420u;
    {
        const bool branch_taken_0x3a4420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4420) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4428u;
label_3a4428:
    // 0x3a4428: 0x1000004d  b           . + 4 + (0x4D << 2)
label_3a442c:
    if (ctx->pc == 0x3A442Cu) {
        ctx->pc = 0x3A442Cu;
            // 0x3a442c: 0xae001190  sw          $zero, 0x1190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4496), GPR_U32(ctx, 0));
        ctx->pc = 0x3A4430u;
        goto label_3a4430;
    }
    ctx->pc = 0x3A4428u;
    {
        const bool branch_taken_0x3a4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4428u;
            // 0x3a442c: 0xae001190  sw          $zero, 0x1190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4428) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4430u;
label_3a4430:
    // 0x3a4430: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3a4430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3a4434:
    // 0x3a4434: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3a4434u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a4438:
    // 0x3a4438: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a443c:
    if (ctx->pc == 0x3A443Cu) {
        ctx->pc = 0x3A443Cu;
            // 0x3a443c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4440u;
        goto label_3a4440;
    }
    ctx->pc = 0x3A4438u;
    {
        const bool branch_taken_0x3a4438 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4438u;
            // 0x3a443c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4438) {
            ctx->pc = 0x3A4450u;
            goto label_3a4450;
        }
    }
    ctx->pc = 0x3A4440u;
label_3a4440:
    // 0x3a4440: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a4440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a4444:
    // 0x3a4444: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a4448:
    if (ctx->pc == 0x3A4448u) {
        ctx->pc = 0x3A444Cu;
        goto label_3a444c;
    }
    ctx->pc = 0x3A4444u;
    {
        const bool branch_taken_0x3a4444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4444) {
            ctx->pc = 0x3A4450u;
            goto label_3a4450;
        }
    }
    ctx->pc = 0x3A444Cu;
label_3a444c:
    // 0x3a444c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a4450:
    // 0x3a4450: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a4454:
    if (ctx->pc == 0x3A4454u) {
        ctx->pc = 0x3A4458u;
        goto label_3a4458;
    }
    ctx->pc = 0x3A4450u;
    {
        const bool branch_taken_0x3a4450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4450) {
            ctx->pc = 0x3A446Cu;
            goto label_3a446c;
        }
    }
    ctx->pc = 0x3A4458u;
label_3a4458:
    // 0x3a4458: 0xc075eb4  jal         func_1D7AD0
label_3a445c:
    if (ctx->pc == 0x3A445Cu) {
        ctx->pc = 0x3A445Cu;
            // 0x3a445c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4460u;
        goto label_3a4460;
    }
    ctx->pc = 0x3A4458u;
    SET_GPR_U32(ctx, 31, 0x3A4460u);
    ctx->pc = 0x3A445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4458u;
            // 0x3a445c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4460u; }
        if (ctx->pc != 0x3A4460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4460u; }
        if (ctx->pc != 0x3A4460u) { return; }
    }
    ctx->pc = 0x3A4460u;
label_3a4460:
    // 0x3a4460: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a4464:
    if (ctx->pc == 0x3A4464u) {
        ctx->pc = 0x3A4468u;
        goto label_3a4468;
    }
    ctx->pc = 0x3A4460u;
    {
        const bool branch_taken_0x3a4460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4460) {
            ctx->pc = 0x3A446Cu;
            goto label_3a446c;
        }
    }
    ctx->pc = 0x3A4468u;
label_3a4468:
    // 0x3a4468: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a4468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a446c:
    // 0x3a446c: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
label_3a4470:
    if (ctx->pc == 0x3A4470u) {
        ctx->pc = 0x3A4474u;
        goto label_3a4474;
    }
    ctx->pc = 0x3A446Cu;
    {
        const bool branch_taken_0x3a446c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a446c) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4474u;
label_3a4474:
    // 0x3a4474: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a4478:
    // 0x3a4478: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a447c:
    // 0x3a447c: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x3a447cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3a4480:
    // 0x3a4480: 0xc13d01c  jal         func_4F4070
label_3a4484:
    if (ctx->pc == 0x3A4484u) {
        ctx->pc = 0x3A4484u;
            // 0x3a4484: 0x8c4464c0  lw          $a0, 0x64C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25792)));
        ctx->pc = 0x3A4488u;
        goto label_3a4488;
    }
    ctx->pc = 0x3A4480u;
    SET_GPR_U32(ctx, 31, 0x3A4488u);
    ctx->pc = 0x3A4484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4480u;
            // 0x3a4484: 0x8c4464c0  lw          $a0, 0x64C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25792)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F4070u;
    if (runtime->hasFunction(0x4F4070u)) {
        auto targetFn = runtime->lookupFunction(0x4F4070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4488u; }
        if (ctx->pc != 0x3A4488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F4070_0x4f4070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4488u; }
        if (ctx->pc != 0x3A4488u) { return; }
    }
    ctx->pc = 0x3A4488u;
label_3a4488:
    // 0x3a4488: 0x10000035  b           . + 4 + (0x35 << 2)
label_3a448c:
    if (ctx->pc == 0x3A448Cu) {
        ctx->pc = 0x3A4490u;
        goto label_3a4490;
    }
    ctx->pc = 0x3A4488u;
    {
        const bool branch_taken_0x3a4488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4488) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4490u;
label_3a4490:
    // 0x3a4490: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x3a4490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_3a4494:
    // 0x3a4494: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x3a4494u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3a4498:
    // 0x3a4498: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x3a4498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a449c:
    // 0x3a449c: 0x14660030  bne         $v1, $a2, . + 4 + (0x30 << 2)
label_3a44a0:
    if (ctx->pc == 0x3A44A0u) {
        ctx->pc = 0x3A44A4u;
        goto label_3a44a4;
    }
    ctx->pc = 0x3A449Cu;
    {
        const bool branch_taken_0x3a449c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3a449c) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A44A4u;
label_3a44a4:
    // 0x3a44a4: 0x82070e3f  lb          $a3, 0xE3F($s0)
    ctx->pc = 0x3a44a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_3a44a8:
    // 0x3a44a8: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x3a44a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
label_3a44ac:
    // 0x3a44ac: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_3a44b0:
    if (ctx->pc == 0x3A44B0u) {
        ctx->pc = 0x3A44B4u;
        goto label_3a44b4;
    }
    ctx->pc = 0x3A44ACu;
    {
        const bool branch_taken_0x3a44ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a44ac) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A44B4u;
label_3a44b4:
    // 0x3a44b4: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
label_3a44b8:
    if (ctx->pc == 0x3A44B8u) {
        ctx->pc = 0x3A44BCu;
        goto label_3a44bc;
    }
    ctx->pc = 0x3A44B4u;
    {
        const bool branch_taken_0x3a44b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a44b4) {
            ctx->pc = 0x3A44D4u;
            goto label_3a44d4;
        }
    }
    ctx->pc = 0x3A44BCu;
label_3a44bc:
    // 0x3a44bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a44c0:
    // 0x3a44c0: 0x8c4464b0  lw          $a0, 0x64B0($v0)
    ctx->pc = 0x3a44c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25776)));
label_3a44c4:
    // 0x3a44c4: 0xc137070  jal         func_4DC1C0
label_3a44c8:
    if (ctx->pc == 0x3A44C8u) {
        ctx->pc = 0x3A44C8u;
            // 0x3a44c8: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x3A44CCu;
        goto label_3a44cc;
    }
    ctx->pc = 0x3A44C4u;
    SET_GPR_U32(ctx, 31, 0x3A44CCu);
    ctx->pc = 0x3A44C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A44C4u;
            // 0x3a44c8: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DC1C0u;
    if (runtime->hasFunction(0x4DC1C0u)) {
        auto targetFn = runtime->lookupFunction(0x4DC1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A44CCu; }
        if (ctx->pc != 0x3A44CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DC1C0_0x4dc1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A44CCu; }
        if (ctx->pc != 0x3A44CCu) { return; }
    }
    ctx->pc = 0x3A44CCu;
label_3a44cc:
    // 0x3a44cc: 0x10000024  b           . + 4 + (0x24 << 2)
label_3a44d0:
    if (ctx->pc == 0x3A44D0u) {
        ctx->pc = 0x3A44D4u;
        goto label_3a44d4;
    }
    ctx->pc = 0x3A44CCu;
    {
        const bool branch_taken_0x3a44cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a44cc) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A44D4u;
label_3a44d4:
    // 0x3a44d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a44d8:
    // 0x3a44d8: 0x8c4464b8  lw          $a0, 0x64B8($v0)
    ctx->pc = 0x3a44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25784)));
label_3a44dc:
    // 0x3a44dc: 0xc1369e8  jal         func_4DA7A0
label_3a44e0:
    if (ctx->pc == 0x3A44E0u) {
        ctx->pc = 0x3A44E0u;
            // 0x3a44e0: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x3A44E4u;
        goto label_3a44e4;
    }
    ctx->pc = 0x3A44DCu;
    SET_GPR_U32(ctx, 31, 0x3A44E4u);
    ctx->pc = 0x3A44E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A44DCu;
            // 0x3a44e0: 0x90a50002  lbu         $a1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DA7A0u;
    if (runtime->hasFunction(0x4DA7A0u)) {
        auto targetFn = runtime->lookupFunction(0x4DA7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A44E4u; }
        if (ctx->pc != 0x3A44E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DA7A0_0x4da7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A44E4u; }
        if (ctx->pc != 0x3A44E4u) { return; }
    }
    ctx->pc = 0x3A44E4u;
label_3a44e4:
    // 0x3a44e4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3a44e8:
    if (ctx->pc == 0x3A44E8u) {
        ctx->pc = 0x3A44ECu;
        goto label_3a44ec;
    }
    ctx->pc = 0x3A44E4u;
    {
        const bool branch_taken_0x3a44e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a44e4) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A44ECu;
label_3a44ec:
    // 0x3a44ec: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x3a44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_3a44f0:
    // 0x3a44f0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3a44f0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a44f4:
    // 0x3a44f4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3a44f8:
    if (ctx->pc == 0x3A44F8u) {
        ctx->pc = 0x3A44F8u;
            // 0x3a44f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A44FCu;
        goto label_3a44fc;
    }
    ctx->pc = 0x3A44F4u;
    {
        const bool branch_taken_0x3a44f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3A44F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A44F4u;
            // 0x3a44f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44f4) {
            ctx->pc = 0x3A450Cu;
            goto label_3a450c;
        }
    }
    ctx->pc = 0x3A44FCu;
label_3a44fc:
    // 0x3a44fc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3a44fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a4500:
    // 0x3a4500: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a4504:
    if (ctx->pc == 0x3A4504u) {
        ctx->pc = 0x3A4508u;
        goto label_3a4508;
    }
    ctx->pc = 0x3A4500u;
    {
        const bool branch_taken_0x3a4500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4500) {
            ctx->pc = 0x3A450Cu;
            goto label_3a450c;
        }
    }
    ctx->pc = 0x3A4508u;
label_3a4508:
    // 0x3a4508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a450c:
    // 0x3a450c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a4510:
    if (ctx->pc == 0x3A4510u) {
        ctx->pc = 0x3A4514u;
        goto label_3a4514;
    }
    ctx->pc = 0x3A450Cu;
    {
        const bool branch_taken_0x3a450c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a450c) {
            ctx->pc = 0x3A4528u;
            goto label_3a4528;
        }
    }
    ctx->pc = 0x3A4514u;
label_3a4514:
    // 0x3a4514: 0xc075eb4  jal         func_1D7AD0
label_3a4518:
    if (ctx->pc == 0x3A4518u) {
        ctx->pc = 0x3A4518u;
            // 0x3a4518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A451Cu;
        goto label_3a451c;
    }
    ctx->pc = 0x3A4514u;
    SET_GPR_U32(ctx, 31, 0x3A451Cu);
    ctx->pc = 0x3A4518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4514u;
            // 0x3a4518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A451Cu; }
        if (ctx->pc != 0x3A451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A451Cu; }
        if (ctx->pc != 0x3A451Cu) { return; }
    }
    ctx->pc = 0x3A451Cu;
label_3a451c:
    // 0x3a451c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3a4520:
    if (ctx->pc == 0x3A4520u) {
        ctx->pc = 0x3A4524u;
        goto label_3a4524;
    }
    ctx->pc = 0x3A451Cu;
    {
        const bool branch_taken_0x3a451c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a451c) {
            ctx->pc = 0x3A4528u;
            goto label_3a4528;
        }
    }
    ctx->pc = 0x3A4524u;
label_3a4524:
    // 0x3a4524: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a4524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4528:
    // 0x3a4528: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_3a452c:
    if (ctx->pc == 0x3A452Cu) {
        ctx->pc = 0x3A4530u;
        goto label_3a4530;
    }
    ctx->pc = 0x3A4528u;
    {
        const bool branch_taken_0x3a4528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4528) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4530u;
label_3a4530:
    // 0x3a4530: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a4534:
    // 0x3a4534: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x3a4534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3a4538:
    // 0x3a4538: 0x8c650ea4  lw          $a1, 0xEA4($v1)
    ctx->pc = 0x3a4538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_3a453c:
    // 0x3a453c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a453cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a4540:
    // 0x3a4540: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a4540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3a4544:
    // 0x3a4544: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a4544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3a4548:
    // 0x3a4548: 0xac800494  sw          $zero, 0x494($a0)
    ctx->pc = 0x3a4548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 0));
label_3a454c:
    // 0x3a454c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x3a454cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
label_3a4550:
    // 0x3a4550: 0x8e040d94  lw          $a0, 0xD94($s0)
    ctx->pc = 0x3a4550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3476)));
label_3a4554:
    // 0x3a4554: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a4554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3a4558:
    // 0x3a4558: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3a4558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3a455c:
    // 0x3a455c: 0xae030d94  sw          $v1, 0xD94($s0)
    ctx->pc = 0x3a455cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 3));
label_3a4560:
    // 0x3a4560: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a4560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a4564:
    // 0x3a4564: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a4564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a4568:
    // 0x3a4568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a456c:
    // 0x3a456c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a456cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4570:
    // 0x3a4570: 0x3e00008  jr          $ra
label_3a4574:
    if (ctx->pc == 0x3A4574u) {
        ctx->pc = 0x3A4574u;
            // 0x3a4574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3A4578u;
        goto label_3a4578;
    }
    ctx->pc = 0x3A4570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4570u;
            // 0x3a4574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4578u;
label_3a4578:
    // 0x3a4578: 0x0  nop
    ctx->pc = 0x3a4578u;
    // NOP
label_3a457c:
    // 0x3a457c: 0x0  nop
    ctx->pc = 0x3a457cu;
    // NOP
label_3a4580:
    // 0x3a4580: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a4580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3a4584:
    // 0x3a4584: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a4584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3a4588:
    // 0x3a4588: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a4588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a458c:
    // 0x3a458c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3a4590:
    // 0x3a4590: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a4590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3a4594:
    // 0x3a4594: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a4594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a4598:
    // 0x3a4598: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a4598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a459c:
    // 0x3a459c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a45a0:
    // 0x3a45a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a45a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a45a4:
    // 0x3a45a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a45a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a45a8:
    // 0x3a45a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a45a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a45ac:
    // 0x3a45ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a45acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a45b0:
    // 0x3a45b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a45b4:
    // 0x3a45b4: 0x8c7e89f0  lw          $fp, -0x7610($v1)
    ctx->pc = 0x3a45b4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_3a45b8:
    // 0x3a45b8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3a45b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3a45bc:
    // 0x3a45bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a45c0:
    // 0x3a45c0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_3a45c4:
    if (ctx->pc == 0x3A45C4u) {
        ctx->pc = 0x3A45C8u;
        goto label_3a45c8;
    }
    ctx->pc = 0x3A45C0u;
    {
        const bool branch_taken_0x3a45c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a45c0) {
            ctx->pc = 0x3A4628u;
            goto label_3a4628;
        }
    }
    ctx->pc = 0x3A45C8u;
label_3a45c8:
    // 0x3a45c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a45cc:
    // 0x3a45cc: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3a45d0:
    if (ctx->pc == 0x3A45D0u) {
        ctx->pc = 0x3A45D0u;
            // 0x3a45d0: 0x82a2011b  lb          $v0, 0x11B($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 283)));
        ctx->pc = 0x3A45D4u;
        goto label_3a45d4;
    }
    ctx->pc = 0x3A45CCu;
    {
        const bool branch_taken_0x3a45cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a45cc) {
            ctx->pc = 0x3A45D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A45CCu;
            // 0x3a45d0: 0x82a2011b  lb          $v0, 0x11B($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 283)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A45DCu;
            goto label_3a45dc;
        }
    }
    ctx->pc = 0x3A45D4u;
label_3a45d4:
    // 0x3a45d4: 0x10000160  b           . + 4 + (0x160 << 2)
label_3a45d8:
    if (ctx->pc == 0x3A45D8u) {
        ctx->pc = 0x3A45D8u;
            // 0x3a45d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3A45DCu;
        goto label_3a45dc;
    }
    ctx->pc = 0x3A45D4u;
    {
        const bool branch_taken_0x3a45d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A45D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A45D4u;
            // 0x3a45d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45d4) {
            ctx->pc = 0x3A4B58u;
            goto label_3a4b58;
        }
    }
    ctx->pc = 0x3A45DCu;
label_3a45dc:
    // 0x3a45dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a45e0:
    // 0x3a45e0: 0xa2a2011b  sb          $v0, 0x11B($s5)
    ctx->pc = 0x3a45e0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 283), (uint8_t)GPR_U32(ctx, 2));
label_3a45e4:
    // 0x3a45e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3a45e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_3a45e8:
    // 0x3a45e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3a45e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_3a45ec:
    // 0x3a45ec: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x3a45ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_3a45f0:
    // 0x3a45f0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_3a45f4:
    if (ctx->pc == 0x3A45F4u) {
        ctx->pc = 0x3A45F8u;
        goto label_3a45f8;
    }
    ctx->pc = 0x3A45F0u;
    {
        const bool branch_taken_0x3a45f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a45f0) {
            ctx->pc = 0x3A4600u;
            goto label_3a4600;
        }
    }
    ctx->pc = 0x3A45F8u;
label_3a45f8:
    // 0x3a45f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3a45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3a45fc:
    // 0x3a45fc: 0xa2a2011b  sb          $v0, 0x11B($s5)
    ctx->pc = 0x3a45fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 283), (uint8_t)GPR_U32(ctx, 2));
label_3a4600:
    // 0x3a4600: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a4600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a4604:
    // 0x3a4604: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3a4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3a4608:
    // 0x3a4608: 0x9042007d  lbu         $v0, 0x7D($v0)
    ctx->pc = 0x3a4608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_3a460c:
    // 0x3a460c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3a4610:
    if (ctx->pc == 0x3A4610u) {
        ctx->pc = 0x3A4614u;
        goto label_3a4614;
    }
    ctx->pc = 0x3A460Cu;
    {
        const bool branch_taken_0x3a460c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a460c) {
            ctx->pc = 0x3A4628u;
            goto label_3a4628;
        }
    }
    ctx->pc = 0x3A4614u;
label_3a4614:
    // 0x3a4614: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3a4614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a4618:
    // 0x3a4618: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a4618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a461c:
    // 0x3a461c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a461cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a4620:
    // 0x3a4620: 0x320f809  jalr        $t9
label_3a4624:
    if (ctx->pc == 0x3A4624u) {
        ctx->pc = 0x3A4624u;
            // 0x3a4624: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3A4628u;
        goto label_3a4628;
    }
    ctx->pc = 0x3A4620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4628u);
        ctx->pc = 0x3A4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4620u;
            // 0x3a4624: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4628u; }
            if (ctx->pc != 0x3A4628u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4628u;
label_3a4628:
    // 0x3a4628: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a4628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a462c:
    // 0x3a462c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3a462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3a4630:
    // 0x3a4630: 0x9042007d  lbu         $v0, 0x7D($v0)
    ctx->pc = 0x3a4630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_3a4634:
    // 0x3a4634: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3a4638:
    if (ctx->pc == 0x3A4638u) {
        ctx->pc = 0x3A4638u;
            // 0x3a4638: 0x82a3011b  lb          $v1, 0x11B($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 283)));
        ctx->pc = 0x3A463Cu;
        goto label_3a463c;
    }
    ctx->pc = 0x3A4634u;
    {
        const bool branch_taken_0x3a4634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4634) {
            ctx->pc = 0x3A4638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4634u;
            // 0x3a4638: 0x82a3011b  lb          $v1, 0x11B($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 283)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4664u;
            goto label_3a4664;
        }
    }
    ctx->pc = 0x3A463Cu;
label_3a463c:
    // 0x3a463c: 0x92a30010  lbu         $v1, 0x10($s5)
    ctx->pc = 0x3a463cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_3a4640:
    // 0x3a4640: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a4640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a4644:
    // 0x3a4644: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3a4648:
    if (ctx->pc == 0x3A4648u) {
        ctx->pc = 0x3A464Cu;
        goto label_3a464c;
    }
    ctx->pc = 0x3A4644u;
    {
        const bool branch_taken_0x3a4644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a4644) {
            ctx->pc = 0x3A4660u;
            goto label_3a4660;
        }
    }
    ctx->pc = 0x3A464Cu;
label_3a464c:
    // 0x3a464c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3a464cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a4650:
    // 0x3a4650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a4654:
    // 0x3a4654: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a4654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a4658:
    // 0x3a4658: 0x320f809  jalr        $t9
label_3a465c:
    if (ctx->pc == 0x3A465Cu) {
        ctx->pc = 0x3A465Cu;
            // 0x3a465c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A4660u;
        goto label_3a4660;
    }
    ctx->pc = 0x3A4658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4660u);
        ctx->pc = 0x3A465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4658u;
            // 0x3a465c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4660u; }
            if (ctx->pc != 0x3A4660u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4660u;
label_3a4660:
    // 0x3a4660: 0x82a3011b  lb          $v1, 0x11B($s5)
    ctx->pc = 0x3a4660u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 283)));
label_3a4664:
    // 0x3a4664: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x3a4664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3a4668:
    // 0x3a4668: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x3a4668u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
label_3a466c:
    // 0x3a466c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a466cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a4670:
    // 0x3a4670: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_3a4674:
    if (ctx->pc == 0x3A4674u) {
        ctx->pc = 0x3A4674u;
            // 0x3a4674: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->pc = 0x3A4678u;
        goto label_3a4678;
    }
    ctx->pc = 0x3A4670u;
    {
        const bool branch_taken_0x3a4670 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3A4674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4670u;
            // 0x3a4674: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4670) {
            ctx->pc = 0x3A4680u;
            goto label_3a4680;
        }
    }
    ctx->pc = 0x3A4678u;
label_3a4678:
    // 0x3a4678: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x3a4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_3a467c:
    // 0x3a467c: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x3a467cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_3a4680:
    // 0x3a4680: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3a4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a4684:
    // 0x3a4684: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3a4684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a4688:
    // 0x3a4688: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a4688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a468c:
    // 0x3a468c: 0xa2a20116  sb          $v0, 0x116($s5)
    ctx->pc = 0x3a468cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 278), (uint8_t)GPR_U32(ctx, 2));
label_3a4690:
    // 0x3a4690: 0x82a20119  lb          $v0, 0x119($s5)
    ctx->pc = 0x3a4690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 281)));
label_3a4694:
    // 0x3a4694: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x3a4694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3a4698:
    // 0x3a4698: 0xa2a20117  sb          $v0, 0x117($s5)
    ctx->pc = 0x3a4698u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 279), (uint8_t)GPR_U32(ctx, 2));
label_3a469c:
    // 0x3a469c: 0x82a2011a  lb          $v0, 0x11A($s5)
    ctx->pc = 0x3a469cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 282)));
label_3a46a0:
    // 0x3a46a0: 0x70461018  mult1       $v0, $v0, $a2
    ctx->pc = 0x3a46a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3a46a4:
    // 0x3a46a4: 0xa2a20118  sb          $v0, 0x118($s5)
    ctx->pc = 0x3a46a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 280), (uint8_t)GPR_U32(ctx, 2));
label_3a46a8:
    // 0x3a46a8: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x3a46a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a46ac:
    // 0x3a46ac: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x3a46acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_3a46b0:
    // 0x3a46b0: 0x320f809  jalr        $t9
label_3a46b4:
    if (ctx->pc == 0x3A46B4u) {
        ctx->pc = 0x3A46B4u;
            // 0x3a46b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A46B8u;
        goto label_3a46b8;
    }
    ctx->pc = 0x3A46B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A46B8u);
        ctx->pc = 0x3A46B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A46B0u;
            // 0x3a46b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A46B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A46B8u; }
            if (ctx->pc != 0x3A46B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A46B8u;
label_3a46b8:
    // 0x3a46b8: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x3a46b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a46bc:
    // 0x3a46bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3a46bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a46c0:
    // 0x3a46c0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a46c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a46c4:
    // 0x3a46c4: 0x320f809  jalr        $t9
label_3a46c8:
    if (ctx->pc == 0x3A46C8u) {
        ctx->pc = 0x3A46C8u;
            // 0x3a46c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A46CCu;
        goto label_3a46cc;
    }
    ctx->pc = 0x3A46C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A46CCu);
        ctx->pc = 0x3A46C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A46C4u;
            // 0x3a46c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A46CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A46CCu; }
            if (ctx->pc != 0x3A46CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A46CCu;
label_3a46cc:
    // 0x3a46cc: 0x8ea30110  lw          $v1, 0x110($s5)
    ctx->pc = 0x3a46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_3a46d0:
    // 0x3a46d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a46d4:
    // 0x3a46d4: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
label_3a46d8:
    if (ctx->pc == 0x3A46D8u) {
        ctx->pc = 0x3A46D8u;
            // 0x3a46d8: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3A46DCu;
        goto label_3a46dc;
    }
    ctx->pc = 0x3A46D4u;
    {
        const bool branch_taken_0x3a46d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a46d4) {
            ctx->pc = 0x3A46D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A46D4u;
            // 0x3a46d8: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4784u;
            goto label_3a4784;
        }
    }
    ctx->pc = 0x3A46DCu;
label_3a46dc:
    // 0x3a46dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a46e0:
    // 0x3a46e0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3a46e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3a46e4:
    // 0x3a46e4: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x3a46e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a46e8:
    // 0x3a46e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3a46e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3a46ec:
    // 0x3a46ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a46f0:
    // 0x3a46f0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a46f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a46f4:
    // 0x3a46f4: 0xc0506ac  jal         func_141AB0
label_3a46f8:
    if (ctx->pc == 0x3A46F8u) {
        ctx->pc = 0x3A46F8u;
            // 0x3a46f8: 0x26102118  addiu       $s0, $s0, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8472));
        ctx->pc = 0x3A46FCu;
        goto label_3a46fc;
    }
    ctx->pc = 0x3A46F4u;
    SET_GPR_U32(ctx, 31, 0x3A46FCu);
    ctx->pc = 0x3A46F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A46F4u;
            // 0x3a46f8: 0x26102118  addiu       $s0, $s0, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A46FCu; }
        if (ctx->pc != 0x3A46FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A46FCu; }
        if (ctx->pc != 0x3A46FCu) { return; }
    }
    ctx->pc = 0x3A46FCu;
label_3a46fc:
    // 0x3a46fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3a46fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a4700:
    // 0x3a4700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a4704:
    // 0x3a4704: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a4704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a4708:
    // 0x3a4708: 0x320f809  jalr        $t9
label_3a470c:
    if (ctx->pc == 0x3A470Cu) {
        ctx->pc = 0x3A470Cu;
            // 0x3a470c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A4710u;
        goto label_3a4710;
    }
    ctx->pc = 0x3A4708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4710u);
        ctx->pc = 0x3A470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4708u;
            // 0x3a470c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4710u; }
            if (ctx->pc != 0x3A4710u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4710u;
label_3a4710:
    // 0x3a4710: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x3a4710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a4714:
    // 0x3a4714: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a4714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a4718:
    // 0x3a4718: 0xc6a20088  lwc1        $f2, 0x88($s5)
    ctx->pc = 0x3a4718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a471c:
    // 0x3a471c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a471cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a4720:
    // 0x3a4720: 0xc6a1008c  lwc1        $f1, 0x8C($s5)
    ctx->pc = 0x3a4720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a4724:
    // 0x3a4724: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3a4724u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3a4728:
    // 0x3a4728: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3a4728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3a472c:
    // 0x3a472c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a472cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3a4730:
    // 0x3a4730: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a4730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a4734:
    // 0x3a4734: 0x24a59b70  addiu       $a1, $a1, -0x6490
    ctx->pc = 0x3a4734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
label_3a4738:
    // 0x3a4738: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a4738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a473c:
    // 0x3a473c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a473cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4740:
    // 0x3a4740: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a4740u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4744:
    // 0x3a4744: 0x0  nop
    ctx->pc = 0x3a4744u;
    // NOP
label_3a4748:
    // 0x3a4748: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a4748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a474c:
    // 0x3a474c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a474cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4750:
    // 0x3a4750: 0x0  nop
    ctx->pc = 0x3a4750u;
    // NOP
label_3a4754:
    // 0x3a4754: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a4754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a4758:
    // 0x3a4758: 0xc6a0006c  lwc1        $f0, 0x6C($s5)
    ctx->pc = 0x3a4758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a475c:
    // 0x3a475c: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x3a475cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3a4760:
    // 0x3a4760: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x3a4760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3a4764:
    // 0x3a4764: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a4764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a4768:
    // 0x3a4768: 0xc0bc284  jal         func_2F0A10
label_3a476c:
    if (ctx->pc == 0x3A476Cu) {
        ctx->pc = 0x3A476Cu;
            // 0x3a476c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A4770u;
        goto label_3a4770;
    }
    ctx->pc = 0x3A4768u;
    SET_GPR_U32(ctx, 31, 0x3A4770u);
    ctx->pc = 0x3A476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4768u;
            // 0x3a476c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4770u; }
        if (ctx->pc != 0x3A4770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4770u; }
        if (ctx->pc != 0x3A4770u) { return; }
    }
    ctx->pc = 0x3A4770u;
label_3a4770:
    // 0x3a4770: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3a4770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a4774:
    // 0x3a4774: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a4774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a4778:
    // 0x3a4778: 0x320f809  jalr        $t9
label_3a477c:
    if (ctx->pc == 0x3A477Cu) {
        ctx->pc = 0x3A477Cu;
            // 0x3a477c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4780u;
        goto label_3a4780;
    }
    ctx->pc = 0x3A4778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4780u);
        ctx->pc = 0x3A477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4778u;
            // 0x3a477c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4780u; }
            if (ctx->pc != 0x3A4780u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4780u;
label_3a4780:
    // 0x3a4780: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x3a4780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a4784:
    // 0x3a4784: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3a4788:
    if (ctx->pc == 0x3A4788u) {
        ctx->pc = 0x3A4788u;
            // 0x3a4788: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3A478Cu;
        goto label_3a478c;
    }
    ctx->pc = 0x3A4784u;
    {
        const bool branch_taken_0x3a4784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4784u;
            // 0x3a4788: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4784) {
            ctx->pc = 0x3A47A8u;
            goto label_3a47a8;
        }
    }
    ctx->pc = 0x3A478Cu;
label_3a478c:
    // 0x3a478c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a478cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a4790:
    // 0x3a4790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a4790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a4794:
    // 0x3a4794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a4794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a4798:
    // 0x3a4798: 0x0  nop
    ctx->pc = 0x3a4798u;
    // NOP
label_3a479c:
    // 0x3a479c: 0x0  nop
    ctx->pc = 0x3a479cu;
    // NOP
label_3a47a0:
    // 0x3a47a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3a47a4:
    if (ctx->pc == 0x3A47A4u) {
        ctx->pc = 0x3A47A8u;
        goto label_3a47a8;
    }
    ctx->pc = 0x3A47A0u;
    {
        const bool branch_taken_0x3a47a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a47a0) {
            ctx->pc = 0x3A478Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a478c;
        }
    }
    ctx->pc = 0x3A47A8u;
label_3a47a8:
    // 0x3a47a8: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x3a47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a47ac:
    // 0x3a47ac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3a47acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3a47b0:
    // 0x3a47b0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3a47b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3a47b4:
    // 0x3a47b4: 0x24427680  addiu       $v0, $v0, 0x7680
    ctx->pc = 0x3a47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30336));
label_3a47b8:
    // 0x3a47b8: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x3a47b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
label_3a47bc:
    // 0x3a47bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a47bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a47c0:
    // 0x3a47c0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3a47c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3a47c4:
    // 0x3a47c4: 0xc6a0008c  lwc1        $f0, 0x8C($s5)
    ctx->pc = 0x3a47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a47c8:
    // 0x3a47c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a47c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a47cc:
    // 0x3a47cc: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3a47ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3a47d0:
    // 0x3a47d0: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x3a47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a47d4:
    // 0x3a47d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a47d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a47d8:
    // 0x3a47d8: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x3a47d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_3a47dc:
    // 0x3a47dc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3a47dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3a47e0:
    // 0x3a47e0: 0xc6a00088  lwc1        $f0, 0x88($s5)
    ctx->pc = 0x3a47e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a47e4:
    // 0x3a47e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a47e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a47e8:
    // 0x3a47e8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3a47e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3a47ec:
    // 0x3a47ec: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x3a47ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a47f0:
    // 0x3a47f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a47f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a47f4:
    // 0x3a47f4: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3a47f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3a47f8:
    // 0x3a47f8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3a47f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3a47fc:
    // 0x3a47fc: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x3a47fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a4800:
    // 0x3a4800: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a4800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a4804:
    // 0x3a4804: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3a4804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3a4808:
    // 0x3a4808: 0x8ea30110  lw          $v1, 0x110($s5)
    ctx->pc = 0x3a4808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_3a480c:
    // 0x3a480c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a480cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a4810:
    // 0x3a4810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a4814:
    // 0x3a4814: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3a4814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a4818:
    // 0x3a4818: 0xc050aa8  jal         func_142AA0
label_3a481c:
    if (ctx->pc == 0x3A481Cu) {
        ctx->pc = 0x3A481Cu;
            // 0x3a481c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4820u;
        goto label_3a4820;
    }
    ctx->pc = 0x3A4818u;
    SET_GPR_U32(ctx, 31, 0x3A4820u);
    ctx->pc = 0x3A481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4818u;
            // 0x3a481c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142AA0u;
    if (runtime->hasFunction(0x142AA0u)) {
        auto targetFn = runtime->lookupFunction(0x142AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4820u; }
        if (ctx->pc != 0x3A4820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142AA0_0x142aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4820u; }
        if (ctx->pc != 0x3A4820u) { return; }
    }
    ctx->pc = 0x3A4820u;
label_3a4820:
    // 0x3a4820: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a4820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a4824:
    // 0x3a4824: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a4824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4828:
    // 0x3a4828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a4828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a482c:
    // 0x3a482c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4830:
    // 0x3a4830: 0xc050b58  jal         func_142D60
label_3a4834:
    if (ctx->pc == 0x3A4834u) {
        ctx->pc = 0x3A4834u;
            // 0x3a4834: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3A4838u;
        goto label_3a4838;
    }
    ctx->pc = 0x3A4830u;
    SET_GPR_U32(ctx, 31, 0x3A4838u);
    ctx->pc = 0x3A4834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4830u;
            // 0x3a4834: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142D60u;
    if (runtime->hasFunction(0x142D60u)) {
        auto targetFn = runtime->lookupFunction(0x142D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4838u; }
        if (ctx->pc != 0x3A4838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142D60_0x142d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4838u; }
        if (ctx->pc != 0x3A4838u) { return; }
    }
    ctx->pc = 0x3A4838u;
label_3a4838:
    // 0x3a4838: 0xc050dc0  jal         func_143700
label_3a483c:
    if (ctx->pc == 0x3A483Cu) {
        ctx->pc = 0x3A4840u;
        goto label_3a4840;
    }
    ctx->pc = 0x3A4838u;
    SET_GPR_U32(ctx, 31, 0x3A4840u);
    ctx->pc = 0x143700u;
    if (runtime->hasFunction(0x143700u)) {
        auto targetFn = runtime->lookupFunction(0x143700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4840u; }
        if (ctx->pc != 0x3A4840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143700_0x143700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4840u; }
        if (ctx->pc != 0x3A4840u) { return; }
    }
    ctx->pc = 0x3A4840u;
label_3a4840:
    // 0x3a4840: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4844:
    // 0x3a4844: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a4844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a4848:
    // 0x3a4848: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3a4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3a484c:
    // 0x3a484c: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x3a484cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_3a4850:
    // 0x3a4850: 0x502000b7  beql        $at, $zero, . + 4 + (0xB7 << 2)
label_3a4854:
    if (ctx->pc == 0x3A4854u) {
        ctx->pc = 0x3A4854u;
            // 0x3a4854: 0x8fd90000  lw          $t9, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x3A4858u;
        goto label_3a4858;
    }
    ctx->pc = 0x3A4850u;
    {
        const bool branch_taken_0x3a4850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4850) {
            ctx->pc = 0x3A4854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4850u;
            // 0x3a4854: 0x8fd90000  lw          $t9, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4B30u;
            goto label_3a4b30;
        }
    }
    ctx->pc = 0x3A4858u;
label_3a4858:
    // 0x3a4858: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a485c:
    // 0x3a485c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a485cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a4860:
    // 0x3a4860: 0xc0506ac  jal         func_141AB0
label_3a4864:
    if (ctx->pc == 0x3A4864u) {
        ctx->pc = 0x3A4864u;
            // 0x3a4864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4868u;
        goto label_3a4868;
    }
    ctx->pc = 0x3A4860u;
    SET_GPR_U32(ctx, 31, 0x3A4868u);
    ctx->pc = 0x3A4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4860u;
            // 0x3a4864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4868u; }
        if (ctx->pc != 0x3A4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4868u; }
        if (ctx->pc != 0x3A4868u) { return; }
    }
    ctx->pc = 0x3A4868u;
label_3a4868:
    // 0x3a4868: 0xc0ecb00  jal         func_3B2C00
label_3a486c:
    if (ctx->pc == 0x3A486Cu) {
        ctx->pc = 0x3A486Cu;
            // 0x3a486c: 0x8ea400fc  lw          $a0, 0xFC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 252)));
        ctx->pc = 0x3A4870u;
        goto label_3a4870;
    }
    ctx->pc = 0x3A4868u;
    SET_GPR_U32(ctx, 31, 0x3A4870u);
    ctx->pc = 0x3A486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4868u;
            // 0x3a486c: 0x8ea400fc  lw          $a0, 0xFC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C00u;
    if (runtime->hasFunction(0x3B2C00u)) {
        auto targetFn = runtime->lookupFunction(0x3B2C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4870u; }
        if (ctx->pc != 0x3A4870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2C00_0x3b2c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4870u; }
        if (ctx->pc != 0x3A4870u) { return; }
    }
    ctx->pc = 0x3A4870u;
label_3a4870:
    // 0x3a4870: 0x8ea40108  lw          $a0, 0x108($s5)
    ctx->pc = 0x3a4870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_3a4874:
    // 0x3a4874: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4878:
    // 0x3a4878: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a4878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a487c:
    // 0x3a487c: 0x320f809  jalr        $t9
label_3a4880:
    if (ctx->pc == 0x3A4880u) {
        ctx->pc = 0x3A4884u;
        goto label_3a4884;
    }
    ctx->pc = 0x3A487Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4884u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4884u; }
            if (ctx->pc != 0x3A4884u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4884u;
label_3a4884:
    // 0x3a4884: 0x8ea400ec  lw          $a0, 0xEC($s5)
    ctx->pc = 0x3a4884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 236)));
label_3a4888:
    // 0x3a4888: 0x8c990128  lw          $t9, 0x128($a0)
    ctx->pc = 0x3a4888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_3a488c:
    // 0x3a488c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a488cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a4890:
    // 0x3a4890: 0x320f809  jalr        $t9
label_3a4894:
    if (ctx->pc == 0x3A4894u) {
        ctx->pc = 0x3A4898u;
        goto label_3a4898;
    }
    ctx->pc = 0x3A4890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4898u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4898u; }
            if (ctx->pc != 0x3A4898u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4898u;
label_3a4898:
    // 0x3a4898: 0xc0ec5a0  jal         func_3B1680
label_3a489c:
    if (ctx->pc == 0x3A489Cu) {
        ctx->pc = 0x3A489Cu;
            // 0x3a489c: 0x8ea40100  lw          $a0, 0x100($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
        ctx->pc = 0x3A48A0u;
        goto label_3a48a0;
    }
    ctx->pc = 0x3A4898u;
    SET_GPR_U32(ctx, 31, 0x3A48A0u);
    ctx->pc = 0x3A489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4898u;
            // 0x3a489c: 0x8ea40100  lw          $a0, 0x100($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B1680u;
    if (runtime->hasFunction(0x3B1680u)) {
        auto targetFn = runtime->lookupFunction(0x3B1680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A48A0u; }
        if (ctx->pc != 0x3A48A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B1680_0x3b1680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A48A0u; }
        if (ctx->pc != 0x3A48A0u) { return; }
    }
    ctx->pc = 0x3A48A0u;
label_3a48a0:
    // 0x3a48a0: 0x8ea400f4  lw          $a0, 0xF4($s5)
    ctx->pc = 0x3a48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_3a48a4:
    // 0x3a48a4: 0x8c99006c  lw          $t9, 0x6C($a0)
    ctx->pc = 0x3a48a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_3a48a8:
    // 0x3a48a8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a48a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a48ac:
    // 0x3a48ac: 0x320f809  jalr        $t9
label_3a48b0:
    if (ctx->pc == 0x3A48B0u) {
        ctx->pc = 0x3A48B4u;
        goto label_3a48b4;
    }
    ctx->pc = 0x3A48ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A48B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A48B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A48B4u; }
            if (ctx->pc != 0x3A48B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A48B4u;
label_3a48b4:
    // 0x3a48b4: 0x8ea400f0  lw          $a0, 0xF0($s5)
    ctx->pc = 0x3a48b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_3a48b8:
    // 0x3a48b8: 0x8c990374  lw          $t9, 0x374($a0)
    ctx->pc = 0x3a48b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
label_3a48bc:
    // 0x3a48bc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a48bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a48c0:
    // 0x3a48c0: 0x320f809  jalr        $t9
label_3a48c4:
    if (ctx->pc == 0x3A48C4u) {
        ctx->pc = 0x3A48C8u;
        goto label_3a48c8;
    }
    ctx->pc = 0x3A48C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A48C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A48C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A48C8u; }
            if (ctx->pc != 0x3A48C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A48C8u;
label_3a48c8:
    // 0x3a48c8: 0x8ea40104  lw          $a0, 0x104($s5)
    ctx->pc = 0x3a48c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_3a48cc:
    // 0x3a48cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a48ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a48d0:
    // 0x3a48d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a48d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a48d4:
    // 0x3a48d4: 0x320f809  jalr        $t9
label_3a48d8:
    if (ctx->pc == 0x3A48D8u) {
        ctx->pc = 0x3A48DCu;
        goto label_3a48dc;
    }
    ctx->pc = 0x3A48D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A48DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A48DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A48DCu; }
            if (ctx->pc != 0x3A48DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A48DCu;
label_3a48dc:
    // 0x3a48dc: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3a48dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3a48e0:
    // 0x3a48e0: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x3a48e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_3a48e4:
    // 0x3a48e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a48e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a48e8:
    // 0x3a48e8: 0x26312108  addiu       $s1, $s1, 0x2108
    ctx->pc = 0x3a48e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8456));
label_3a48ec:
    // 0x3a48ec: 0x26f7a9c0  addiu       $s7, $s7, -0x5640
    ctx->pc = 0x3a48ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945216));
label_3a48f0:
    // 0x3a48f0: 0xc0e92f4  jal         func_3A4BD0
label_3a48f4:
    if (ctx->pc == 0x3A48F4u) {
        ctx->pc = 0x3A48F4u;
            // 0x3a48f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A48F8u;
        goto label_3a48f8;
    }
    ctx->pc = 0x3A48F0u;
    SET_GPR_U32(ctx, 31, 0x3A48F8u);
    ctx->pc = 0x3A48F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A48F0u;
            // 0x3a48f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (runtime->hasFunction(0x3A4BD0u)) {
        auto targetFn = runtime->lookupFunction(0x3A4BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A48F8u; }
        if (ctx->pc != 0x3A48F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A4BD0_0x3a4bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A48F8u; }
        if (ctx->pc != 0x3A48F8u) { return; }
    }
    ctx->pc = 0x3A48F8u;
label_3a48f8:
    // 0x3a48f8: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3a48f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3a48fc:
    // 0x3a48fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3a48fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3a4900:
    // 0x3a4900: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a4900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4904:
    // 0x3a4904: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3a4904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3a4908:
    // 0x3a4908: 0xc0775b0  jal         func_1DD6C0
label_3a490c:
    if (ctx->pc == 0x3A490Cu) {
        ctx->pc = 0x3A4910u;
        goto label_3a4910;
    }
    ctx->pc = 0x3A4908u;
    SET_GPR_U32(ctx, 31, 0x3A4910u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4910u; }
        if (ctx->pc != 0x3A4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4910u; }
        if (ctx->pc != 0x3A4910u) { return; }
    }
    ctx->pc = 0x3A4910u;
label_3a4910:
    // 0x3a4910: 0xc0775ac  jal         func_1DD6B0
label_3a4914:
    if (ctx->pc == 0x3A4914u) {
        ctx->pc = 0x3A4914u;
            // 0x3a4914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4918u;
        goto label_3a4918;
    }
    ctx->pc = 0x3A4910u;
    SET_GPR_U32(ctx, 31, 0x3A4918u);
    ctx->pc = 0x3A4914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4910u;
            // 0x3a4914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4918u; }
        if (ctx->pc != 0x3A4918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4918u; }
        if (ctx->pc != 0x3A4918u) { return; }
    }
    ctx->pc = 0x3A4918u;
label_3a4918:
    // 0x3a4918: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3a4918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3a491c:
    // 0x3a491c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_3a4920:
    if (ctx->pc == 0x3A4920u) {
        ctx->pc = 0x3A4920u;
            // 0x3a4920: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3A4924u;
        goto label_3a4924;
    }
    ctx->pc = 0x3A491Cu;
    {
        const bool branch_taken_0x3a491c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a491c) {
            ctx->pc = 0x3A4920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A491Cu;
            // 0x3a4920: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4950u;
            goto label_3a4950;
        }
    }
    ctx->pc = 0x3A4924u;
label_3a4924:
    // 0x3a4924: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4928:
    // 0x3a4928: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3a4928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a492c:
    // 0x3a492c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a492cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4930:
    // 0x3a4930: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a4930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a4934:
    // 0x3a4934: 0x320f809  jalr        $t9
label_3a4938:
    if (ctx->pc == 0x3A4938u) {
        ctx->pc = 0x3A4938u;
            // 0x3a4938: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A493Cu;
        goto label_3a493c;
    }
    ctx->pc = 0x3A4934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A493Cu);
        ctx->pc = 0x3A4938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4934u;
            // 0x3a4938: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A493Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A493Cu; }
            if (ctx->pc != 0x3A493Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A493Cu;
label_3a493c:
    // 0x3a493c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3a493cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a4940:
    // 0x3a4940: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4944:
    // 0x3a4944: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3a4944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3a4948:
    // 0x3a4948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a494c:
    // 0x3a494c: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x3a494cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a4950:
    // 0x3a4950: 0xc077588  jal         func_1DD620
label_3a4954:
    if (ctx->pc == 0x3A4954u) {
        ctx->pc = 0x3A4954u;
            // 0x3a4954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4958u;
        goto label_3a4958;
    }
    ctx->pc = 0x3A4950u;
    SET_GPR_U32(ctx, 31, 0x3A4958u);
    ctx->pc = 0x3A4954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4950u;
            // 0x3a4954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4958u; }
        if (ctx->pc != 0x3A4958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4958u; }
        if (ctx->pc != 0x3A4958u) { return; }
    }
    ctx->pc = 0x3A4958u;
label_3a4958:
    // 0x3a4958: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3a4958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_3a495c:
    // 0x3a495c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_3a4960:
    if (ctx->pc == 0x3A4960u) {
        ctx->pc = 0x3A4964u;
        goto label_3a4964;
    }
    ctx->pc = 0x3A495Cu;
    {
        const bool branch_taken_0x3a495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a495c) {
            ctx->pc = 0x3A4AA8u;
            goto label_3a4aa8;
        }
    }
    ctx->pc = 0x3A4964u;
label_3a4964:
    // 0x3a4964: 0x16c0000e  bnez        $s6, . + 4 + (0xE << 2)
label_3a4968:
    if (ctx->pc == 0x3A4968u) {
        ctx->pc = 0x3A496Cu;
        goto label_3a496c;
    }
    ctx->pc = 0x3A4964u;
    {
        const bool branch_taken_0x3a4964 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4964) {
            ctx->pc = 0x3A49A0u;
            goto label_3a49a0;
        }
    }
    ctx->pc = 0x3A496Cu;
label_3a496c:
    // 0x3a496c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a496cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4970:
    // 0x3a4970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a4974:
    // 0x3a4974: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a4974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a4978:
    // 0x3a4978: 0xc0506ac  jal         func_141AB0
label_3a497c:
    if (ctx->pc == 0x3A497Cu) {
        ctx->pc = 0x3A497Cu;
            // 0x3a497c: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3A4980u;
        goto label_3a4980;
    }
    ctx->pc = 0x3A4978u;
    SET_GPR_U32(ctx, 31, 0x3A4980u);
    ctx->pc = 0x3A497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4978u;
            // 0x3a497c: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4980u; }
        if (ctx->pc != 0x3A4980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4980u; }
        if (ctx->pc != 0x3A4980u) { return; }
    }
    ctx->pc = 0x3A4980u;
label_3a4980:
    // 0x3a4980: 0xc0bcf34  jal         func_2F3CD0
label_3a4984:
    if (ctx->pc == 0x3A4984u) {
        ctx->pc = 0x3A4988u;
        goto label_3a4988;
    }
    ctx->pc = 0x3A4980u;
    SET_GPR_U32(ctx, 31, 0x3A4988u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4988u; }
        if (ctx->pc != 0x3A4988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4988u; }
        if (ctx->pc != 0x3A4988u) { return; }
    }
    ctx->pc = 0x3A4988u;
label_3a4988:
    // 0x3a4988: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a4988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a498c:
    // 0x3a498c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a4990:
    // 0x3a4990: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a4990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a4994:
    // 0x3a4994: 0x320f809  jalr        $t9
label_3a4998:
    if (ctx->pc == 0x3A4998u) {
        ctx->pc = 0x3A4998u;
            // 0x3a4998: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A499Cu;
        goto label_3a499c;
    }
    ctx->pc = 0x3A4994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A499Cu);
        ctx->pc = 0x3A4998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4994u;
            // 0x3a4998: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A499Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A499Cu; }
            if (ctx->pc != 0x3A499Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A499Cu;
label_3a499c:
    // 0x3a499c: 0x0  nop
    ctx->pc = 0x3a499cu;
    // NOP
label_3a49a0:
    // 0x3a49a0: 0xc0e92f0  jal         func_3A4BC0
label_3a49a4:
    if (ctx->pc == 0x3A49A4u) {
        ctx->pc = 0x3A49A4u;
            // 0x3a49a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A49A8u;
        goto label_3a49a8;
    }
    ctx->pc = 0x3A49A0u;
    SET_GPR_U32(ctx, 31, 0x3A49A8u);
    ctx->pc = 0x3A49A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A49A0u;
            // 0x3a49a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BC0u;
    if (runtime->hasFunction(0x3A4BC0u)) {
        auto targetFn = runtime->lookupFunction(0x3A4BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A49A8u; }
        if (ctx->pc != 0x3A49A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A4BC0_0x3a4bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A49A8u; }
        if (ctx->pc != 0x3A49A8u) { return; }
    }
    ctx->pc = 0x3A49A8u;
label_3a49a8:
    // 0x3a49a8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3a49a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3a49ac:
    // 0x3a49ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a49acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a49b0:
    // 0x3a49b0: 0xc0e92ec  jal         func_3A4BB0
label_3a49b4:
    if (ctx->pc == 0x3A49B4u) {
        ctx->pc = 0x3A49B4u;
            // 0x3a49b4: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x3A49B8u;
        goto label_3a49b8;
    }
    ctx->pc = 0x3A49B0u;
    SET_GPR_U32(ctx, 31, 0x3A49B8u);
    ctx->pc = 0x3A49B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A49B0u;
            // 0x3a49b4: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BB0u;
    if (runtime->hasFunction(0x3A4BB0u)) {
        auto targetFn = runtime->lookupFunction(0x3A4BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A49B8u; }
        if (ctx->pc != 0x3A49B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A4BB0_0x3a4bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A49B8u; }
        if (ctx->pc != 0x3A49B8u) { return; }
    }
    ctx->pc = 0x3A49B8u;
label_3a49b8:
    // 0x3a49b8: 0x96a40114  lhu         $a0, 0x114($s5)
    ctx->pc = 0x3a49b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 276)));
label_3a49bc:
    // 0x3a49bc: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x3a49bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_3a49c0:
    // 0x3a49c0: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_3a49c4:
    if (ctx->pc == 0x3A49C4u) {
        ctx->pc = 0x3A49C4u;
            // 0x3a49c4: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x3A49C8u;
        goto label_3a49c8;
    }
    ctx->pc = 0x3A49C0u;
    {
        const bool branch_taken_0x3a49c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a49c0) {
            ctx->pc = 0x3A49C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A49C0u;
            // 0x3a49c4: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A49D0u;
            goto label_3a49d0;
        }
    }
    ctx->pc = 0x3A49C8u;
label_3a49c8:
    // 0x3a49c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a49cc:
    if (ctx->pc == 0x3A49CCu) {
        ctx->pc = 0x3A49CCu;
            // 0x3a49cc: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3A49D0u;
        goto label_3a49d0;
    }
    ctx->pc = 0x3A49C8u;
    {
        const bool branch_taken_0x3a49c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A49CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A49C8u;
            // 0x3a49cc: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a49c8) {
            ctx->pc = 0x3A49D8u;
            goto label_3a49d8;
        }
    }
    ctx->pc = 0x3A49D0u;
label_3a49d0:
    // 0x3a49d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a49d4:
    // 0x3a49d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a49d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a49d8:
    // 0x3a49d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a49d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a49dc:
    // 0x3a49dc: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x3a49dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a49e0:
    // 0x3a49e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3a49e4:
    if (ctx->pc == 0x3A49E4u) {
        ctx->pc = 0x3A49E8u;
        goto label_3a49e8;
    }
    ctx->pc = 0x3A49E0u;
    {
        const bool branch_taken_0x3a49e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a49e0) {
            ctx->pc = 0x3A49F0u;
            goto label_3a49f0;
        }
    }
    ctx->pc = 0x3A49E8u;
label_3a49e8:
    // 0x3a49e8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3a49e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3a49ec:
    // 0x3a49ec: 0x0  nop
    ctx->pc = 0x3a49ecu;
    // NOP
label_3a49f0:
    // 0x3a49f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3a49f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a49f4:
    // 0x3a49f4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a49f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a49f8:
    // 0x3a49f8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x3a49f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a49fc:
    // 0x3a49fc: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3a49fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a4a00:
    // 0x3a4a00: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x3a4a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a4a04:
    // 0x3a4a04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a4a08:
    // 0x3a4a08: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3a4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3a4a0c:
    // 0x3a4a0c: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x3a4a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a4a10:
    // 0x3a4a10: 0x82a8011e  lb          $t0, 0x11E($s5)
    ctx->pc = 0x3a4a10u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 286)));
label_3a4a14:
    // 0x3a4a14: 0x82a5011f  lb          $a1, 0x11F($s5)
    ctx->pc = 0x3a4a14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 287)));
label_3a4a18:
    // 0x3a4a18: 0x891823  subu        $v1, $a0, $t1
    ctx->pc = 0x3a4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_3a4a1c:
    // 0x3a4a1c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3a4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3a4a20:
    // 0x3a4a20: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3a4a20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3a4a24:
    // 0x3a4a24: 0x92a4011c  lbu         $a0, 0x11C($s5)
    ctx->pc = 0x3a4a24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 284)));
label_3a4a28:
    // 0x3a4a28: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x3a4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_3a4a2c:
    // 0x3a4a2c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x3a4a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3a4a30:
    // 0x3a4a30: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3a4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a4a34:
    // 0x3a4a34: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x3a4a34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_3a4a38:
    // 0x3a4a38: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3a4a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3a4a3c:
    // 0x3a4a3c: 0x92a2011d  lbu         $v0, 0x11D($s5)
    ctx->pc = 0x3a4a3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 285)));
label_3a4a40:
    // 0x3a4a40: 0x1041823  subu        $v1, $t0, $a0
    ctx->pc = 0x3a4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3a4a44:
    // 0x3a4a44: 0xa75021  addu        $t2, $a1, $a3
    ctx->pc = 0x3a4a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3a4a48:
    // 0x3a4a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a4a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4a4c:
    // 0x3a4a4c: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x3a4a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3a4a50:
    // 0x3a4a50: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3a4a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3a4a54:
    // 0x3a4a54: 0x1424823  subu        $t1, $t2, $v0
    ctx->pc = 0x3a4a54u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a4a58:
    // 0x3a4a58: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x3a4a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3a4a5c:
    // 0x3a4a5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a4a60:
    // 0x3a4a60: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x3a4a60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3a4a64:
    // 0x3a4a64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3a4a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a4a68:
    // 0x3a4a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a4a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4a6c:
    // 0x3a4a6c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a4a6cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4a70:
    // 0x3a4a70: 0x0  nop
    ctx->pc = 0x3a4a70u;
    // NOP
label_3a4a74:
    // 0x3a4a74: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3a4a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3a4a78:
    // 0x3a4a78: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a4a78u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4a7c:
    // 0x3a4a7c: 0x0  nop
    ctx->pc = 0x3a4a7cu;
    // NOP
label_3a4a80:
    // 0x3a4a80: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3a4a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3a4a84:
    // 0x3a4a84: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3a4a84u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4a88:
    // 0x3a4a88: 0x0  nop
    ctx->pc = 0x3a4a88u;
    // NOP
label_3a4a8c:
    // 0x3a4a8c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3a4a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3a4a90:
    // 0x3a4a90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a4a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4a94:
    // 0x3a4a94: 0x0  nop
    ctx->pc = 0x3a4a94u;
    // NOP
label_3a4a98:
    // 0x3a4a98: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a4a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a4a9c:
    // 0x3a4a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a4a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4aa0:
    // 0x3a4aa0: 0xc0bc284  jal         func_2F0A10
label_3a4aa4:
    if (ctx->pc == 0x3A4AA4u) {
        ctx->pc = 0x3A4AA4u;
            // 0x3a4aa4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A4AA8u;
        goto label_3a4aa8;
    }
    ctx->pc = 0x3A4AA0u;
    SET_GPR_U32(ctx, 31, 0x3A4AA8u);
    ctx->pc = 0x3A4AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4AA0u;
            // 0x3a4aa4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4AA8u; }
        if (ctx->pc != 0x3A4AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4AA8u; }
        if (ctx->pc != 0x3A4AA8u) { return; }
    }
    ctx->pc = 0x3A4AA8u;
label_3a4aa8:
    // 0x3a4aa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a4aac:
    // 0x3a4aac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3a4aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3a4ab0:
    // 0x3a4ab0: 0xc0e92e8  jal         func_3A4BA0
label_3a4ab4:
    if (ctx->pc == 0x3A4AB4u) {
        ctx->pc = 0x3A4AB4u;
            // 0x3a4ab4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x3A4AB8u;
        goto label_3a4ab8;
    }
    ctx->pc = 0x3A4AB0u;
    SET_GPR_U32(ctx, 31, 0x3A4AB8u);
    ctx->pc = 0x3A4AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4AB0u;
            // 0x3a4ab4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BA0u;
    if (runtime->hasFunction(0x3A4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x3A4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4AB8u; }
        if (ctx->pc != 0x3A4AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A4BA0_0x3a4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4AB8u; }
        if (ctx->pc != 0x3A4AB8u) { return; }
    }
    ctx->pc = 0x3A4AB8u;
label_3a4ab8:
    // 0x3a4ab8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3a4ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a4abc:
    // 0x3a4abc: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_3a4ac0:
    if (ctx->pc == 0x3A4AC0u) {
        ctx->pc = 0x3A4AC4u;
        goto label_3a4ac4;
    }
    ctx->pc = 0x3A4ABCu;
    {
        const bool branch_taken_0x3a4abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4abc) {
            ctx->pc = 0x3A4908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a4908;
        }
    }
    ctx->pc = 0x3A4AC4u;
label_3a4ac4:
    // 0x3a4ac4: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_3a4ac8:
    if (ctx->pc == 0x3A4AC8u) {
        ctx->pc = 0x3A4ACCu;
        goto label_3a4acc;
    }
    ctx->pc = 0x3A4AC4u;
    {
        const bool branch_taken_0x3a4ac4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4ac4) {
            ctx->pc = 0x3A4AE4u;
            goto label_3a4ae4;
        }
    }
    ctx->pc = 0x3A4ACCu;
label_3a4acc:
    // 0x3a4acc: 0xc0bcf34  jal         func_2F3CD0
label_3a4ad0:
    if (ctx->pc == 0x3A4AD0u) {
        ctx->pc = 0x3A4AD4u;
        goto label_3a4ad4;
    }
    ctx->pc = 0x3A4ACCu;
    SET_GPR_U32(ctx, 31, 0x3A4AD4u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4AD4u; }
        if (ctx->pc != 0x3A4AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4AD4u; }
        if (ctx->pc != 0x3A4AD4u) { return; }
    }
    ctx->pc = 0x3A4AD4u;
label_3a4ad4:
    // 0x3a4ad4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a4ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a4ad8:
    // 0x3a4ad8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a4ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a4adc:
    // 0x3a4adc: 0x320f809  jalr        $t9
label_3a4ae0:
    if (ctx->pc == 0x3A4AE0u) {
        ctx->pc = 0x3A4AE0u;
            // 0x3a4ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4AE4u;
        goto label_3a4ae4;
    }
    ctx->pc = 0x3A4ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4AE4u);
        ctx->pc = 0x3A4AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4ADCu;
            // 0x3a4ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4AE4u; }
            if (ctx->pc != 0x3A4AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4AE4u;
label_3a4ae4:
    // 0x3a4ae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a4ae8:
    // 0x3a4ae8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3a4ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3a4aec:
    // 0x3a4aec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a4af0:
    // 0x3a4af0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3a4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3a4af4:
    // 0x3a4af4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_3a4af8:
    if (ctx->pc == 0x3A4AF8u) {
        ctx->pc = 0x3A4AF8u;
            // 0x3a4af8: 0x8ea4010c  lw          $a0, 0x10C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
        ctx->pc = 0x3A4AFCu;
        goto label_3a4afc;
    }
    ctx->pc = 0x3A4AF4u;
    {
        const bool branch_taken_0x3a4af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a4af4) {
            ctx->pc = 0x3A4AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4AF4u;
            // 0x3a4af8: 0x8ea4010c  lw          $a0, 0x10C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4B14u;
            goto label_3a4b14;
        }
    }
    ctx->pc = 0x3A4AFCu;
label_3a4afc:
    // 0x3a4afc: 0x8ea400f8  lw          $a0, 0xF8($s5)
    ctx->pc = 0x3a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_3a4b00:
    // 0x3a4b00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4b04:
    // 0x3a4b04: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a4b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a4b08:
    // 0x3a4b08: 0x320f809  jalr        $t9
label_3a4b0c:
    if (ctx->pc == 0x3A4B0Cu) {
        ctx->pc = 0x3A4B10u;
        goto label_3a4b10;
    }
    ctx->pc = 0x3A4B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4B10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4B10u; }
            if (ctx->pc != 0x3A4B10u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4B10u;
label_3a4b10:
    // 0x3a4b10: 0x8ea4010c  lw          $a0, 0x10C($s5)
    ctx->pc = 0x3a4b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_3a4b14:
    // 0x3a4b14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3a4b18:
    if (ctx->pc == 0x3A4B18u) {
        ctx->pc = 0x3A4B1Cu;
        goto label_3a4b1c;
    }
    ctx->pc = 0x3A4B14u;
    {
        const bool branch_taken_0x3a4b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4b14) {
            ctx->pc = 0x3A4B2Cu;
            goto label_3a4b2c;
        }
    }
    ctx->pc = 0x3A4B1Cu;
label_3a4b1c:
    // 0x3a4b1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4b20:
    // 0x3a4b20: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a4b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a4b24:
    // 0x3a4b24: 0x320f809  jalr        $t9
label_3a4b28:
    if (ctx->pc == 0x3A4B28u) {
        ctx->pc = 0x3A4B2Cu;
        goto label_3a4b2c;
    }
    ctx->pc = 0x3A4B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4B2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4B2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4B2Cu; }
            if (ctx->pc != 0x3A4B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A4B2Cu;
label_3a4b2c:
    // 0x3a4b2c: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x3a4b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a4b30:
    // 0x3a4b30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3a4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a4b34:
    // 0x3a4b34: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x3a4b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_3a4b38:
    // 0x3a4b38: 0x320f809  jalr        $t9
label_3a4b3c:
    if (ctx->pc == 0x3A4B3Cu) {
        ctx->pc = 0x3A4B3Cu;
            // 0x3a4b3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4B40u;
        goto label_3a4b40;
    }
    ctx->pc = 0x3A4B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4B40u);
        ctx->pc = 0x3A4B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4B38u;
            // 0x3a4b3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4B40u; }
            if (ctx->pc != 0x3A4B40u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4B40u;
label_3a4b40:
    // 0x3a4b40: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x3a4b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a4b44:
    // 0x3a4b44: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3a4b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a4b48:
    // 0x3a4b48: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3a4b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3a4b4c:
    // 0x3a4b4c: 0x320f809  jalr        $t9
label_3a4b50:
    if (ctx->pc == 0x3A4B50u) {
        ctx->pc = 0x3A4B50u;
            // 0x3a4b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B54u;
        goto label_3a4b54;
    }
    ctx->pc = 0x3A4B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4B54u);
        ctx->pc = 0x3A4B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4B4Cu;
            // 0x3a4b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4B54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4B54u; }
            if (ctx->pc != 0x3A4B54u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4B54u;
label_3a4b54:
    // 0x3a4b54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a4b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a4b58:
    // 0x3a4b58: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a4b58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a4b5c:
    // 0x3a4b5c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a4b5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a4b60:
    // 0x3a4b60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a4b60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a4b64:
    // 0x3a4b64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a4b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a4b68:
    // 0x3a4b68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a4b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a4b6c:
    // 0x3a4b6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a4b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a4b70:
    // 0x3a4b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a4b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a4b74:
    // 0x3a4b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a4b78:
    // 0x3a4b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a4b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4b7c:
    // 0x3a4b7c: 0x3e00008  jr          $ra
label_3a4b80:
    if (ctx->pc == 0x3A4B80u) {
        ctx->pc = 0x3A4B80u;
            // 0x3a4b80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3A4B84u;
        goto label_3a4b84;
    }
    ctx->pc = 0x3A4B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4B7Cu;
            // 0x3a4b80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4B84u;
label_3a4b84:
    // 0x3a4b84: 0x0  nop
    ctx->pc = 0x3a4b84u;
    // NOP
label_3a4b88:
    // 0x3a4b88: 0x0  nop
    ctx->pc = 0x3a4b88u;
    // NOP
label_3a4b8c:
    // 0x3a4b8c: 0x0  nop
    ctx->pc = 0x3a4b8cu;
    // NOP
label_3a4b90:
    // 0x3a4b90: 0x3e00008  jr          $ra
label_3a4b94:
    if (ctx->pc == 0x3A4B94u) {
        ctx->pc = 0x3A4B98u;
        goto label_3a4b98;
    }
    ctx->pc = 0x3A4B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4B98u;
label_3a4b98:
    // 0x3a4b98: 0x0  nop
    ctx->pc = 0x3a4b98u;
    // NOP
label_3a4b9c:
    // 0x3a4b9c: 0x0  nop
    ctx->pc = 0x3a4b9cu;
    // NOP
}
