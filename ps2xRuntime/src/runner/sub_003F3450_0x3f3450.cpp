#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F3450
// Address: 0x3f3450 - 0x3f3f80
void sub_003F3450_0x3f3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3450_0x3f3450");
#endif

    switch (ctx->pc) {
        case 0x3f3450u: goto label_3f3450;
        case 0x3f3454u: goto label_3f3454;
        case 0x3f3458u: goto label_3f3458;
        case 0x3f345cu: goto label_3f345c;
        case 0x3f3460u: goto label_3f3460;
        case 0x3f3464u: goto label_3f3464;
        case 0x3f3468u: goto label_3f3468;
        case 0x3f346cu: goto label_3f346c;
        case 0x3f3470u: goto label_3f3470;
        case 0x3f3474u: goto label_3f3474;
        case 0x3f3478u: goto label_3f3478;
        case 0x3f347cu: goto label_3f347c;
        case 0x3f3480u: goto label_3f3480;
        case 0x3f3484u: goto label_3f3484;
        case 0x3f3488u: goto label_3f3488;
        case 0x3f348cu: goto label_3f348c;
        case 0x3f3490u: goto label_3f3490;
        case 0x3f3494u: goto label_3f3494;
        case 0x3f3498u: goto label_3f3498;
        case 0x3f349cu: goto label_3f349c;
        case 0x3f34a0u: goto label_3f34a0;
        case 0x3f34a4u: goto label_3f34a4;
        case 0x3f34a8u: goto label_3f34a8;
        case 0x3f34acu: goto label_3f34ac;
        case 0x3f34b0u: goto label_3f34b0;
        case 0x3f34b4u: goto label_3f34b4;
        case 0x3f34b8u: goto label_3f34b8;
        case 0x3f34bcu: goto label_3f34bc;
        case 0x3f34c0u: goto label_3f34c0;
        case 0x3f34c4u: goto label_3f34c4;
        case 0x3f34c8u: goto label_3f34c8;
        case 0x3f34ccu: goto label_3f34cc;
        case 0x3f34d0u: goto label_3f34d0;
        case 0x3f34d4u: goto label_3f34d4;
        case 0x3f34d8u: goto label_3f34d8;
        case 0x3f34dcu: goto label_3f34dc;
        case 0x3f34e0u: goto label_3f34e0;
        case 0x3f34e4u: goto label_3f34e4;
        case 0x3f34e8u: goto label_3f34e8;
        case 0x3f34ecu: goto label_3f34ec;
        case 0x3f34f0u: goto label_3f34f0;
        case 0x3f34f4u: goto label_3f34f4;
        case 0x3f34f8u: goto label_3f34f8;
        case 0x3f34fcu: goto label_3f34fc;
        case 0x3f3500u: goto label_3f3500;
        case 0x3f3504u: goto label_3f3504;
        case 0x3f3508u: goto label_3f3508;
        case 0x3f350cu: goto label_3f350c;
        case 0x3f3510u: goto label_3f3510;
        case 0x3f3514u: goto label_3f3514;
        case 0x3f3518u: goto label_3f3518;
        case 0x3f351cu: goto label_3f351c;
        case 0x3f3520u: goto label_3f3520;
        case 0x3f3524u: goto label_3f3524;
        case 0x3f3528u: goto label_3f3528;
        case 0x3f352cu: goto label_3f352c;
        case 0x3f3530u: goto label_3f3530;
        case 0x3f3534u: goto label_3f3534;
        case 0x3f3538u: goto label_3f3538;
        case 0x3f353cu: goto label_3f353c;
        case 0x3f3540u: goto label_3f3540;
        case 0x3f3544u: goto label_3f3544;
        case 0x3f3548u: goto label_3f3548;
        case 0x3f354cu: goto label_3f354c;
        case 0x3f3550u: goto label_3f3550;
        case 0x3f3554u: goto label_3f3554;
        case 0x3f3558u: goto label_3f3558;
        case 0x3f355cu: goto label_3f355c;
        case 0x3f3560u: goto label_3f3560;
        case 0x3f3564u: goto label_3f3564;
        case 0x3f3568u: goto label_3f3568;
        case 0x3f356cu: goto label_3f356c;
        case 0x3f3570u: goto label_3f3570;
        case 0x3f3574u: goto label_3f3574;
        case 0x3f3578u: goto label_3f3578;
        case 0x3f357cu: goto label_3f357c;
        case 0x3f3580u: goto label_3f3580;
        case 0x3f3584u: goto label_3f3584;
        case 0x3f3588u: goto label_3f3588;
        case 0x3f358cu: goto label_3f358c;
        case 0x3f3590u: goto label_3f3590;
        case 0x3f3594u: goto label_3f3594;
        case 0x3f3598u: goto label_3f3598;
        case 0x3f359cu: goto label_3f359c;
        case 0x3f35a0u: goto label_3f35a0;
        case 0x3f35a4u: goto label_3f35a4;
        case 0x3f35a8u: goto label_3f35a8;
        case 0x3f35acu: goto label_3f35ac;
        case 0x3f35b0u: goto label_3f35b0;
        case 0x3f35b4u: goto label_3f35b4;
        case 0x3f35b8u: goto label_3f35b8;
        case 0x3f35bcu: goto label_3f35bc;
        case 0x3f35c0u: goto label_3f35c0;
        case 0x3f35c4u: goto label_3f35c4;
        case 0x3f35c8u: goto label_3f35c8;
        case 0x3f35ccu: goto label_3f35cc;
        case 0x3f35d0u: goto label_3f35d0;
        case 0x3f35d4u: goto label_3f35d4;
        case 0x3f35d8u: goto label_3f35d8;
        case 0x3f35dcu: goto label_3f35dc;
        case 0x3f35e0u: goto label_3f35e0;
        case 0x3f35e4u: goto label_3f35e4;
        case 0x3f35e8u: goto label_3f35e8;
        case 0x3f35ecu: goto label_3f35ec;
        case 0x3f35f0u: goto label_3f35f0;
        case 0x3f35f4u: goto label_3f35f4;
        case 0x3f35f8u: goto label_3f35f8;
        case 0x3f35fcu: goto label_3f35fc;
        case 0x3f3600u: goto label_3f3600;
        case 0x3f3604u: goto label_3f3604;
        case 0x3f3608u: goto label_3f3608;
        case 0x3f360cu: goto label_3f360c;
        case 0x3f3610u: goto label_3f3610;
        case 0x3f3614u: goto label_3f3614;
        case 0x3f3618u: goto label_3f3618;
        case 0x3f361cu: goto label_3f361c;
        case 0x3f3620u: goto label_3f3620;
        case 0x3f3624u: goto label_3f3624;
        case 0x3f3628u: goto label_3f3628;
        case 0x3f362cu: goto label_3f362c;
        case 0x3f3630u: goto label_3f3630;
        case 0x3f3634u: goto label_3f3634;
        case 0x3f3638u: goto label_3f3638;
        case 0x3f363cu: goto label_3f363c;
        case 0x3f3640u: goto label_3f3640;
        case 0x3f3644u: goto label_3f3644;
        case 0x3f3648u: goto label_3f3648;
        case 0x3f364cu: goto label_3f364c;
        case 0x3f3650u: goto label_3f3650;
        case 0x3f3654u: goto label_3f3654;
        case 0x3f3658u: goto label_3f3658;
        case 0x3f365cu: goto label_3f365c;
        case 0x3f3660u: goto label_3f3660;
        case 0x3f3664u: goto label_3f3664;
        case 0x3f3668u: goto label_3f3668;
        case 0x3f366cu: goto label_3f366c;
        case 0x3f3670u: goto label_3f3670;
        case 0x3f3674u: goto label_3f3674;
        case 0x3f3678u: goto label_3f3678;
        case 0x3f367cu: goto label_3f367c;
        case 0x3f3680u: goto label_3f3680;
        case 0x3f3684u: goto label_3f3684;
        case 0x3f3688u: goto label_3f3688;
        case 0x3f368cu: goto label_3f368c;
        case 0x3f3690u: goto label_3f3690;
        case 0x3f3694u: goto label_3f3694;
        case 0x3f3698u: goto label_3f3698;
        case 0x3f369cu: goto label_3f369c;
        case 0x3f36a0u: goto label_3f36a0;
        case 0x3f36a4u: goto label_3f36a4;
        case 0x3f36a8u: goto label_3f36a8;
        case 0x3f36acu: goto label_3f36ac;
        case 0x3f36b0u: goto label_3f36b0;
        case 0x3f36b4u: goto label_3f36b4;
        case 0x3f36b8u: goto label_3f36b8;
        case 0x3f36bcu: goto label_3f36bc;
        case 0x3f36c0u: goto label_3f36c0;
        case 0x3f36c4u: goto label_3f36c4;
        case 0x3f36c8u: goto label_3f36c8;
        case 0x3f36ccu: goto label_3f36cc;
        case 0x3f36d0u: goto label_3f36d0;
        case 0x3f36d4u: goto label_3f36d4;
        case 0x3f36d8u: goto label_3f36d8;
        case 0x3f36dcu: goto label_3f36dc;
        case 0x3f36e0u: goto label_3f36e0;
        case 0x3f36e4u: goto label_3f36e4;
        case 0x3f36e8u: goto label_3f36e8;
        case 0x3f36ecu: goto label_3f36ec;
        case 0x3f36f0u: goto label_3f36f0;
        case 0x3f36f4u: goto label_3f36f4;
        case 0x3f36f8u: goto label_3f36f8;
        case 0x3f36fcu: goto label_3f36fc;
        case 0x3f3700u: goto label_3f3700;
        case 0x3f3704u: goto label_3f3704;
        case 0x3f3708u: goto label_3f3708;
        case 0x3f370cu: goto label_3f370c;
        case 0x3f3710u: goto label_3f3710;
        case 0x3f3714u: goto label_3f3714;
        case 0x3f3718u: goto label_3f3718;
        case 0x3f371cu: goto label_3f371c;
        case 0x3f3720u: goto label_3f3720;
        case 0x3f3724u: goto label_3f3724;
        case 0x3f3728u: goto label_3f3728;
        case 0x3f372cu: goto label_3f372c;
        case 0x3f3730u: goto label_3f3730;
        case 0x3f3734u: goto label_3f3734;
        case 0x3f3738u: goto label_3f3738;
        case 0x3f373cu: goto label_3f373c;
        case 0x3f3740u: goto label_3f3740;
        case 0x3f3744u: goto label_3f3744;
        case 0x3f3748u: goto label_3f3748;
        case 0x3f374cu: goto label_3f374c;
        case 0x3f3750u: goto label_3f3750;
        case 0x3f3754u: goto label_3f3754;
        case 0x3f3758u: goto label_3f3758;
        case 0x3f375cu: goto label_3f375c;
        case 0x3f3760u: goto label_3f3760;
        case 0x3f3764u: goto label_3f3764;
        case 0x3f3768u: goto label_3f3768;
        case 0x3f376cu: goto label_3f376c;
        case 0x3f3770u: goto label_3f3770;
        case 0x3f3774u: goto label_3f3774;
        case 0x3f3778u: goto label_3f3778;
        case 0x3f377cu: goto label_3f377c;
        case 0x3f3780u: goto label_3f3780;
        case 0x3f3784u: goto label_3f3784;
        case 0x3f3788u: goto label_3f3788;
        case 0x3f378cu: goto label_3f378c;
        case 0x3f3790u: goto label_3f3790;
        case 0x3f3794u: goto label_3f3794;
        case 0x3f3798u: goto label_3f3798;
        case 0x3f379cu: goto label_3f379c;
        case 0x3f37a0u: goto label_3f37a0;
        case 0x3f37a4u: goto label_3f37a4;
        case 0x3f37a8u: goto label_3f37a8;
        case 0x3f37acu: goto label_3f37ac;
        case 0x3f37b0u: goto label_3f37b0;
        case 0x3f37b4u: goto label_3f37b4;
        case 0x3f37b8u: goto label_3f37b8;
        case 0x3f37bcu: goto label_3f37bc;
        case 0x3f37c0u: goto label_3f37c0;
        case 0x3f37c4u: goto label_3f37c4;
        case 0x3f37c8u: goto label_3f37c8;
        case 0x3f37ccu: goto label_3f37cc;
        case 0x3f37d0u: goto label_3f37d0;
        case 0x3f37d4u: goto label_3f37d4;
        case 0x3f37d8u: goto label_3f37d8;
        case 0x3f37dcu: goto label_3f37dc;
        case 0x3f37e0u: goto label_3f37e0;
        case 0x3f37e4u: goto label_3f37e4;
        case 0x3f37e8u: goto label_3f37e8;
        case 0x3f37ecu: goto label_3f37ec;
        case 0x3f37f0u: goto label_3f37f0;
        case 0x3f37f4u: goto label_3f37f4;
        case 0x3f37f8u: goto label_3f37f8;
        case 0x3f37fcu: goto label_3f37fc;
        case 0x3f3800u: goto label_3f3800;
        case 0x3f3804u: goto label_3f3804;
        case 0x3f3808u: goto label_3f3808;
        case 0x3f380cu: goto label_3f380c;
        case 0x3f3810u: goto label_3f3810;
        case 0x3f3814u: goto label_3f3814;
        case 0x3f3818u: goto label_3f3818;
        case 0x3f381cu: goto label_3f381c;
        case 0x3f3820u: goto label_3f3820;
        case 0x3f3824u: goto label_3f3824;
        case 0x3f3828u: goto label_3f3828;
        case 0x3f382cu: goto label_3f382c;
        case 0x3f3830u: goto label_3f3830;
        case 0x3f3834u: goto label_3f3834;
        case 0x3f3838u: goto label_3f3838;
        case 0x3f383cu: goto label_3f383c;
        case 0x3f3840u: goto label_3f3840;
        case 0x3f3844u: goto label_3f3844;
        case 0x3f3848u: goto label_3f3848;
        case 0x3f384cu: goto label_3f384c;
        case 0x3f3850u: goto label_3f3850;
        case 0x3f3854u: goto label_3f3854;
        case 0x3f3858u: goto label_3f3858;
        case 0x3f385cu: goto label_3f385c;
        case 0x3f3860u: goto label_3f3860;
        case 0x3f3864u: goto label_3f3864;
        case 0x3f3868u: goto label_3f3868;
        case 0x3f386cu: goto label_3f386c;
        case 0x3f3870u: goto label_3f3870;
        case 0x3f3874u: goto label_3f3874;
        case 0x3f3878u: goto label_3f3878;
        case 0x3f387cu: goto label_3f387c;
        case 0x3f3880u: goto label_3f3880;
        case 0x3f3884u: goto label_3f3884;
        case 0x3f3888u: goto label_3f3888;
        case 0x3f388cu: goto label_3f388c;
        case 0x3f3890u: goto label_3f3890;
        case 0x3f3894u: goto label_3f3894;
        case 0x3f3898u: goto label_3f3898;
        case 0x3f389cu: goto label_3f389c;
        case 0x3f38a0u: goto label_3f38a0;
        case 0x3f38a4u: goto label_3f38a4;
        case 0x3f38a8u: goto label_3f38a8;
        case 0x3f38acu: goto label_3f38ac;
        case 0x3f38b0u: goto label_3f38b0;
        case 0x3f38b4u: goto label_3f38b4;
        case 0x3f38b8u: goto label_3f38b8;
        case 0x3f38bcu: goto label_3f38bc;
        case 0x3f38c0u: goto label_3f38c0;
        case 0x3f38c4u: goto label_3f38c4;
        case 0x3f38c8u: goto label_3f38c8;
        case 0x3f38ccu: goto label_3f38cc;
        case 0x3f38d0u: goto label_3f38d0;
        case 0x3f38d4u: goto label_3f38d4;
        case 0x3f38d8u: goto label_3f38d8;
        case 0x3f38dcu: goto label_3f38dc;
        case 0x3f38e0u: goto label_3f38e0;
        case 0x3f38e4u: goto label_3f38e4;
        case 0x3f38e8u: goto label_3f38e8;
        case 0x3f38ecu: goto label_3f38ec;
        case 0x3f38f0u: goto label_3f38f0;
        case 0x3f38f4u: goto label_3f38f4;
        case 0x3f38f8u: goto label_3f38f8;
        case 0x3f38fcu: goto label_3f38fc;
        case 0x3f3900u: goto label_3f3900;
        case 0x3f3904u: goto label_3f3904;
        case 0x3f3908u: goto label_3f3908;
        case 0x3f390cu: goto label_3f390c;
        case 0x3f3910u: goto label_3f3910;
        case 0x3f3914u: goto label_3f3914;
        case 0x3f3918u: goto label_3f3918;
        case 0x3f391cu: goto label_3f391c;
        case 0x3f3920u: goto label_3f3920;
        case 0x3f3924u: goto label_3f3924;
        case 0x3f3928u: goto label_3f3928;
        case 0x3f392cu: goto label_3f392c;
        case 0x3f3930u: goto label_3f3930;
        case 0x3f3934u: goto label_3f3934;
        case 0x3f3938u: goto label_3f3938;
        case 0x3f393cu: goto label_3f393c;
        case 0x3f3940u: goto label_3f3940;
        case 0x3f3944u: goto label_3f3944;
        case 0x3f3948u: goto label_3f3948;
        case 0x3f394cu: goto label_3f394c;
        case 0x3f3950u: goto label_3f3950;
        case 0x3f3954u: goto label_3f3954;
        case 0x3f3958u: goto label_3f3958;
        case 0x3f395cu: goto label_3f395c;
        case 0x3f3960u: goto label_3f3960;
        case 0x3f3964u: goto label_3f3964;
        case 0x3f3968u: goto label_3f3968;
        case 0x3f396cu: goto label_3f396c;
        case 0x3f3970u: goto label_3f3970;
        case 0x3f3974u: goto label_3f3974;
        case 0x3f3978u: goto label_3f3978;
        case 0x3f397cu: goto label_3f397c;
        case 0x3f3980u: goto label_3f3980;
        case 0x3f3984u: goto label_3f3984;
        case 0x3f3988u: goto label_3f3988;
        case 0x3f398cu: goto label_3f398c;
        case 0x3f3990u: goto label_3f3990;
        case 0x3f3994u: goto label_3f3994;
        case 0x3f3998u: goto label_3f3998;
        case 0x3f399cu: goto label_3f399c;
        case 0x3f39a0u: goto label_3f39a0;
        case 0x3f39a4u: goto label_3f39a4;
        case 0x3f39a8u: goto label_3f39a8;
        case 0x3f39acu: goto label_3f39ac;
        case 0x3f39b0u: goto label_3f39b0;
        case 0x3f39b4u: goto label_3f39b4;
        case 0x3f39b8u: goto label_3f39b8;
        case 0x3f39bcu: goto label_3f39bc;
        case 0x3f39c0u: goto label_3f39c0;
        case 0x3f39c4u: goto label_3f39c4;
        case 0x3f39c8u: goto label_3f39c8;
        case 0x3f39ccu: goto label_3f39cc;
        case 0x3f39d0u: goto label_3f39d0;
        case 0x3f39d4u: goto label_3f39d4;
        case 0x3f39d8u: goto label_3f39d8;
        case 0x3f39dcu: goto label_3f39dc;
        case 0x3f39e0u: goto label_3f39e0;
        case 0x3f39e4u: goto label_3f39e4;
        case 0x3f39e8u: goto label_3f39e8;
        case 0x3f39ecu: goto label_3f39ec;
        case 0x3f39f0u: goto label_3f39f0;
        case 0x3f39f4u: goto label_3f39f4;
        case 0x3f39f8u: goto label_3f39f8;
        case 0x3f39fcu: goto label_3f39fc;
        case 0x3f3a00u: goto label_3f3a00;
        case 0x3f3a04u: goto label_3f3a04;
        case 0x3f3a08u: goto label_3f3a08;
        case 0x3f3a0cu: goto label_3f3a0c;
        case 0x3f3a10u: goto label_3f3a10;
        case 0x3f3a14u: goto label_3f3a14;
        case 0x3f3a18u: goto label_3f3a18;
        case 0x3f3a1cu: goto label_3f3a1c;
        case 0x3f3a20u: goto label_3f3a20;
        case 0x3f3a24u: goto label_3f3a24;
        case 0x3f3a28u: goto label_3f3a28;
        case 0x3f3a2cu: goto label_3f3a2c;
        case 0x3f3a30u: goto label_3f3a30;
        case 0x3f3a34u: goto label_3f3a34;
        case 0x3f3a38u: goto label_3f3a38;
        case 0x3f3a3cu: goto label_3f3a3c;
        case 0x3f3a40u: goto label_3f3a40;
        case 0x3f3a44u: goto label_3f3a44;
        case 0x3f3a48u: goto label_3f3a48;
        case 0x3f3a4cu: goto label_3f3a4c;
        case 0x3f3a50u: goto label_3f3a50;
        case 0x3f3a54u: goto label_3f3a54;
        case 0x3f3a58u: goto label_3f3a58;
        case 0x3f3a5cu: goto label_3f3a5c;
        case 0x3f3a60u: goto label_3f3a60;
        case 0x3f3a64u: goto label_3f3a64;
        case 0x3f3a68u: goto label_3f3a68;
        case 0x3f3a6cu: goto label_3f3a6c;
        case 0x3f3a70u: goto label_3f3a70;
        case 0x3f3a74u: goto label_3f3a74;
        case 0x3f3a78u: goto label_3f3a78;
        case 0x3f3a7cu: goto label_3f3a7c;
        case 0x3f3a80u: goto label_3f3a80;
        case 0x3f3a84u: goto label_3f3a84;
        case 0x3f3a88u: goto label_3f3a88;
        case 0x3f3a8cu: goto label_3f3a8c;
        case 0x3f3a90u: goto label_3f3a90;
        case 0x3f3a94u: goto label_3f3a94;
        case 0x3f3a98u: goto label_3f3a98;
        case 0x3f3a9cu: goto label_3f3a9c;
        case 0x3f3aa0u: goto label_3f3aa0;
        case 0x3f3aa4u: goto label_3f3aa4;
        case 0x3f3aa8u: goto label_3f3aa8;
        case 0x3f3aacu: goto label_3f3aac;
        case 0x3f3ab0u: goto label_3f3ab0;
        case 0x3f3ab4u: goto label_3f3ab4;
        case 0x3f3ab8u: goto label_3f3ab8;
        case 0x3f3abcu: goto label_3f3abc;
        case 0x3f3ac0u: goto label_3f3ac0;
        case 0x3f3ac4u: goto label_3f3ac4;
        case 0x3f3ac8u: goto label_3f3ac8;
        case 0x3f3accu: goto label_3f3acc;
        case 0x3f3ad0u: goto label_3f3ad0;
        case 0x3f3ad4u: goto label_3f3ad4;
        case 0x3f3ad8u: goto label_3f3ad8;
        case 0x3f3adcu: goto label_3f3adc;
        case 0x3f3ae0u: goto label_3f3ae0;
        case 0x3f3ae4u: goto label_3f3ae4;
        case 0x3f3ae8u: goto label_3f3ae8;
        case 0x3f3aecu: goto label_3f3aec;
        case 0x3f3af0u: goto label_3f3af0;
        case 0x3f3af4u: goto label_3f3af4;
        case 0x3f3af8u: goto label_3f3af8;
        case 0x3f3afcu: goto label_3f3afc;
        case 0x3f3b00u: goto label_3f3b00;
        case 0x3f3b04u: goto label_3f3b04;
        case 0x3f3b08u: goto label_3f3b08;
        case 0x3f3b0cu: goto label_3f3b0c;
        case 0x3f3b10u: goto label_3f3b10;
        case 0x3f3b14u: goto label_3f3b14;
        case 0x3f3b18u: goto label_3f3b18;
        case 0x3f3b1cu: goto label_3f3b1c;
        case 0x3f3b20u: goto label_3f3b20;
        case 0x3f3b24u: goto label_3f3b24;
        case 0x3f3b28u: goto label_3f3b28;
        case 0x3f3b2cu: goto label_3f3b2c;
        case 0x3f3b30u: goto label_3f3b30;
        case 0x3f3b34u: goto label_3f3b34;
        case 0x3f3b38u: goto label_3f3b38;
        case 0x3f3b3cu: goto label_3f3b3c;
        case 0x3f3b40u: goto label_3f3b40;
        case 0x3f3b44u: goto label_3f3b44;
        case 0x3f3b48u: goto label_3f3b48;
        case 0x3f3b4cu: goto label_3f3b4c;
        case 0x3f3b50u: goto label_3f3b50;
        case 0x3f3b54u: goto label_3f3b54;
        case 0x3f3b58u: goto label_3f3b58;
        case 0x3f3b5cu: goto label_3f3b5c;
        case 0x3f3b60u: goto label_3f3b60;
        case 0x3f3b64u: goto label_3f3b64;
        case 0x3f3b68u: goto label_3f3b68;
        case 0x3f3b6cu: goto label_3f3b6c;
        case 0x3f3b70u: goto label_3f3b70;
        case 0x3f3b74u: goto label_3f3b74;
        case 0x3f3b78u: goto label_3f3b78;
        case 0x3f3b7cu: goto label_3f3b7c;
        case 0x3f3b80u: goto label_3f3b80;
        case 0x3f3b84u: goto label_3f3b84;
        case 0x3f3b88u: goto label_3f3b88;
        case 0x3f3b8cu: goto label_3f3b8c;
        case 0x3f3b90u: goto label_3f3b90;
        case 0x3f3b94u: goto label_3f3b94;
        case 0x3f3b98u: goto label_3f3b98;
        case 0x3f3b9cu: goto label_3f3b9c;
        case 0x3f3ba0u: goto label_3f3ba0;
        case 0x3f3ba4u: goto label_3f3ba4;
        case 0x3f3ba8u: goto label_3f3ba8;
        case 0x3f3bacu: goto label_3f3bac;
        case 0x3f3bb0u: goto label_3f3bb0;
        case 0x3f3bb4u: goto label_3f3bb4;
        case 0x3f3bb8u: goto label_3f3bb8;
        case 0x3f3bbcu: goto label_3f3bbc;
        case 0x3f3bc0u: goto label_3f3bc0;
        case 0x3f3bc4u: goto label_3f3bc4;
        case 0x3f3bc8u: goto label_3f3bc8;
        case 0x3f3bccu: goto label_3f3bcc;
        case 0x3f3bd0u: goto label_3f3bd0;
        case 0x3f3bd4u: goto label_3f3bd4;
        case 0x3f3bd8u: goto label_3f3bd8;
        case 0x3f3bdcu: goto label_3f3bdc;
        case 0x3f3be0u: goto label_3f3be0;
        case 0x3f3be4u: goto label_3f3be4;
        case 0x3f3be8u: goto label_3f3be8;
        case 0x3f3becu: goto label_3f3bec;
        case 0x3f3bf0u: goto label_3f3bf0;
        case 0x3f3bf4u: goto label_3f3bf4;
        case 0x3f3bf8u: goto label_3f3bf8;
        case 0x3f3bfcu: goto label_3f3bfc;
        case 0x3f3c00u: goto label_3f3c00;
        case 0x3f3c04u: goto label_3f3c04;
        case 0x3f3c08u: goto label_3f3c08;
        case 0x3f3c0cu: goto label_3f3c0c;
        case 0x3f3c10u: goto label_3f3c10;
        case 0x3f3c14u: goto label_3f3c14;
        case 0x3f3c18u: goto label_3f3c18;
        case 0x3f3c1cu: goto label_3f3c1c;
        case 0x3f3c20u: goto label_3f3c20;
        case 0x3f3c24u: goto label_3f3c24;
        case 0x3f3c28u: goto label_3f3c28;
        case 0x3f3c2cu: goto label_3f3c2c;
        case 0x3f3c30u: goto label_3f3c30;
        case 0x3f3c34u: goto label_3f3c34;
        case 0x3f3c38u: goto label_3f3c38;
        case 0x3f3c3cu: goto label_3f3c3c;
        case 0x3f3c40u: goto label_3f3c40;
        case 0x3f3c44u: goto label_3f3c44;
        case 0x3f3c48u: goto label_3f3c48;
        case 0x3f3c4cu: goto label_3f3c4c;
        case 0x3f3c50u: goto label_3f3c50;
        case 0x3f3c54u: goto label_3f3c54;
        case 0x3f3c58u: goto label_3f3c58;
        case 0x3f3c5cu: goto label_3f3c5c;
        case 0x3f3c60u: goto label_3f3c60;
        case 0x3f3c64u: goto label_3f3c64;
        case 0x3f3c68u: goto label_3f3c68;
        case 0x3f3c6cu: goto label_3f3c6c;
        case 0x3f3c70u: goto label_3f3c70;
        case 0x3f3c74u: goto label_3f3c74;
        case 0x3f3c78u: goto label_3f3c78;
        case 0x3f3c7cu: goto label_3f3c7c;
        case 0x3f3c80u: goto label_3f3c80;
        case 0x3f3c84u: goto label_3f3c84;
        case 0x3f3c88u: goto label_3f3c88;
        case 0x3f3c8cu: goto label_3f3c8c;
        case 0x3f3c90u: goto label_3f3c90;
        case 0x3f3c94u: goto label_3f3c94;
        case 0x3f3c98u: goto label_3f3c98;
        case 0x3f3c9cu: goto label_3f3c9c;
        case 0x3f3ca0u: goto label_3f3ca0;
        case 0x3f3ca4u: goto label_3f3ca4;
        case 0x3f3ca8u: goto label_3f3ca8;
        case 0x3f3cacu: goto label_3f3cac;
        case 0x3f3cb0u: goto label_3f3cb0;
        case 0x3f3cb4u: goto label_3f3cb4;
        case 0x3f3cb8u: goto label_3f3cb8;
        case 0x3f3cbcu: goto label_3f3cbc;
        case 0x3f3cc0u: goto label_3f3cc0;
        case 0x3f3cc4u: goto label_3f3cc4;
        case 0x3f3cc8u: goto label_3f3cc8;
        case 0x3f3cccu: goto label_3f3ccc;
        case 0x3f3cd0u: goto label_3f3cd0;
        case 0x3f3cd4u: goto label_3f3cd4;
        case 0x3f3cd8u: goto label_3f3cd8;
        case 0x3f3cdcu: goto label_3f3cdc;
        case 0x3f3ce0u: goto label_3f3ce0;
        case 0x3f3ce4u: goto label_3f3ce4;
        case 0x3f3ce8u: goto label_3f3ce8;
        case 0x3f3cecu: goto label_3f3cec;
        case 0x3f3cf0u: goto label_3f3cf0;
        case 0x3f3cf4u: goto label_3f3cf4;
        case 0x3f3cf8u: goto label_3f3cf8;
        case 0x3f3cfcu: goto label_3f3cfc;
        case 0x3f3d00u: goto label_3f3d00;
        case 0x3f3d04u: goto label_3f3d04;
        case 0x3f3d08u: goto label_3f3d08;
        case 0x3f3d0cu: goto label_3f3d0c;
        case 0x3f3d10u: goto label_3f3d10;
        case 0x3f3d14u: goto label_3f3d14;
        case 0x3f3d18u: goto label_3f3d18;
        case 0x3f3d1cu: goto label_3f3d1c;
        case 0x3f3d20u: goto label_3f3d20;
        case 0x3f3d24u: goto label_3f3d24;
        case 0x3f3d28u: goto label_3f3d28;
        case 0x3f3d2cu: goto label_3f3d2c;
        case 0x3f3d30u: goto label_3f3d30;
        case 0x3f3d34u: goto label_3f3d34;
        case 0x3f3d38u: goto label_3f3d38;
        case 0x3f3d3cu: goto label_3f3d3c;
        case 0x3f3d40u: goto label_3f3d40;
        case 0x3f3d44u: goto label_3f3d44;
        case 0x3f3d48u: goto label_3f3d48;
        case 0x3f3d4cu: goto label_3f3d4c;
        case 0x3f3d50u: goto label_3f3d50;
        case 0x3f3d54u: goto label_3f3d54;
        case 0x3f3d58u: goto label_3f3d58;
        case 0x3f3d5cu: goto label_3f3d5c;
        case 0x3f3d60u: goto label_3f3d60;
        case 0x3f3d64u: goto label_3f3d64;
        case 0x3f3d68u: goto label_3f3d68;
        case 0x3f3d6cu: goto label_3f3d6c;
        case 0x3f3d70u: goto label_3f3d70;
        case 0x3f3d74u: goto label_3f3d74;
        case 0x3f3d78u: goto label_3f3d78;
        case 0x3f3d7cu: goto label_3f3d7c;
        case 0x3f3d80u: goto label_3f3d80;
        case 0x3f3d84u: goto label_3f3d84;
        case 0x3f3d88u: goto label_3f3d88;
        case 0x3f3d8cu: goto label_3f3d8c;
        case 0x3f3d90u: goto label_3f3d90;
        case 0x3f3d94u: goto label_3f3d94;
        case 0x3f3d98u: goto label_3f3d98;
        case 0x3f3d9cu: goto label_3f3d9c;
        case 0x3f3da0u: goto label_3f3da0;
        case 0x3f3da4u: goto label_3f3da4;
        case 0x3f3da8u: goto label_3f3da8;
        case 0x3f3dacu: goto label_3f3dac;
        case 0x3f3db0u: goto label_3f3db0;
        case 0x3f3db4u: goto label_3f3db4;
        case 0x3f3db8u: goto label_3f3db8;
        case 0x3f3dbcu: goto label_3f3dbc;
        case 0x3f3dc0u: goto label_3f3dc0;
        case 0x3f3dc4u: goto label_3f3dc4;
        case 0x3f3dc8u: goto label_3f3dc8;
        case 0x3f3dccu: goto label_3f3dcc;
        case 0x3f3dd0u: goto label_3f3dd0;
        case 0x3f3dd4u: goto label_3f3dd4;
        case 0x3f3dd8u: goto label_3f3dd8;
        case 0x3f3ddcu: goto label_3f3ddc;
        case 0x3f3de0u: goto label_3f3de0;
        case 0x3f3de4u: goto label_3f3de4;
        case 0x3f3de8u: goto label_3f3de8;
        case 0x3f3decu: goto label_3f3dec;
        case 0x3f3df0u: goto label_3f3df0;
        case 0x3f3df4u: goto label_3f3df4;
        case 0x3f3df8u: goto label_3f3df8;
        case 0x3f3dfcu: goto label_3f3dfc;
        case 0x3f3e00u: goto label_3f3e00;
        case 0x3f3e04u: goto label_3f3e04;
        case 0x3f3e08u: goto label_3f3e08;
        case 0x3f3e0cu: goto label_3f3e0c;
        case 0x3f3e10u: goto label_3f3e10;
        case 0x3f3e14u: goto label_3f3e14;
        case 0x3f3e18u: goto label_3f3e18;
        case 0x3f3e1cu: goto label_3f3e1c;
        case 0x3f3e20u: goto label_3f3e20;
        case 0x3f3e24u: goto label_3f3e24;
        case 0x3f3e28u: goto label_3f3e28;
        case 0x3f3e2cu: goto label_3f3e2c;
        case 0x3f3e30u: goto label_3f3e30;
        case 0x3f3e34u: goto label_3f3e34;
        case 0x3f3e38u: goto label_3f3e38;
        case 0x3f3e3cu: goto label_3f3e3c;
        case 0x3f3e40u: goto label_3f3e40;
        case 0x3f3e44u: goto label_3f3e44;
        case 0x3f3e48u: goto label_3f3e48;
        case 0x3f3e4cu: goto label_3f3e4c;
        case 0x3f3e50u: goto label_3f3e50;
        case 0x3f3e54u: goto label_3f3e54;
        case 0x3f3e58u: goto label_3f3e58;
        case 0x3f3e5cu: goto label_3f3e5c;
        case 0x3f3e60u: goto label_3f3e60;
        case 0x3f3e64u: goto label_3f3e64;
        case 0x3f3e68u: goto label_3f3e68;
        case 0x3f3e6cu: goto label_3f3e6c;
        case 0x3f3e70u: goto label_3f3e70;
        case 0x3f3e74u: goto label_3f3e74;
        case 0x3f3e78u: goto label_3f3e78;
        case 0x3f3e7cu: goto label_3f3e7c;
        case 0x3f3e80u: goto label_3f3e80;
        case 0x3f3e84u: goto label_3f3e84;
        case 0x3f3e88u: goto label_3f3e88;
        case 0x3f3e8cu: goto label_3f3e8c;
        case 0x3f3e90u: goto label_3f3e90;
        case 0x3f3e94u: goto label_3f3e94;
        case 0x3f3e98u: goto label_3f3e98;
        case 0x3f3e9cu: goto label_3f3e9c;
        case 0x3f3ea0u: goto label_3f3ea0;
        case 0x3f3ea4u: goto label_3f3ea4;
        case 0x3f3ea8u: goto label_3f3ea8;
        case 0x3f3eacu: goto label_3f3eac;
        case 0x3f3eb0u: goto label_3f3eb0;
        case 0x3f3eb4u: goto label_3f3eb4;
        case 0x3f3eb8u: goto label_3f3eb8;
        case 0x3f3ebcu: goto label_3f3ebc;
        case 0x3f3ec0u: goto label_3f3ec0;
        case 0x3f3ec4u: goto label_3f3ec4;
        case 0x3f3ec8u: goto label_3f3ec8;
        case 0x3f3eccu: goto label_3f3ecc;
        case 0x3f3ed0u: goto label_3f3ed0;
        case 0x3f3ed4u: goto label_3f3ed4;
        case 0x3f3ed8u: goto label_3f3ed8;
        case 0x3f3edcu: goto label_3f3edc;
        case 0x3f3ee0u: goto label_3f3ee0;
        case 0x3f3ee4u: goto label_3f3ee4;
        case 0x3f3ee8u: goto label_3f3ee8;
        case 0x3f3eecu: goto label_3f3eec;
        case 0x3f3ef0u: goto label_3f3ef0;
        case 0x3f3ef4u: goto label_3f3ef4;
        case 0x3f3ef8u: goto label_3f3ef8;
        case 0x3f3efcu: goto label_3f3efc;
        case 0x3f3f00u: goto label_3f3f00;
        case 0x3f3f04u: goto label_3f3f04;
        case 0x3f3f08u: goto label_3f3f08;
        case 0x3f3f0cu: goto label_3f3f0c;
        case 0x3f3f10u: goto label_3f3f10;
        case 0x3f3f14u: goto label_3f3f14;
        case 0x3f3f18u: goto label_3f3f18;
        case 0x3f3f1cu: goto label_3f3f1c;
        case 0x3f3f20u: goto label_3f3f20;
        case 0x3f3f24u: goto label_3f3f24;
        case 0x3f3f28u: goto label_3f3f28;
        case 0x3f3f2cu: goto label_3f3f2c;
        case 0x3f3f30u: goto label_3f3f30;
        case 0x3f3f34u: goto label_3f3f34;
        case 0x3f3f38u: goto label_3f3f38;
        case 0x3f3f3cu: goto label_3f3f3c;
        case 0x3f3f40u: goto label_3f3f40;
        case 0x3f3f44u: goto label_3f3f44;
        case 0x3f3f48u: goto label_3f3f48;
        case 0x3f3f4cu: goto label_3f3f4c;
        case 0x3f3f50u: goto label_3f3f50;
        case 0x3f3f54u: goto label_3f3f54;
        case 0x3f3f58u: goto label_3f3f58;
        case 0x3f3f5cu: goto label_3f3f5c;
        case 0x3f3f60u: goto label_3f3f60;
        case 0x3f3f64u: goto label_3f3f64;
        case 0x3f3f68u: goto label_3f3f68;
        case 0x3f3f6cu: goto label_3f3f6c;
        case 0x3f3f70u: goto label_3f3f70;
        case 0x3f3f74u: goto label_3f3f74;
        case 0x3f3f78u: goto label_3f3f78;
        case 0x3f3f7cu: goto label_3f3f7c;
        default: break;
    }

    ctx->pc = 0x3f3450u;

label_3f3450:
    // 0x3f3450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f3454:
    // 0x3f3454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f3454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f3458:
    // 0x3f3458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f3458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f345c:
    // 0x3f345c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f3460:
    // 0x3f3460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f3460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f3464:
    // 0x3f3464: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f3464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f3468:
    // 0x3f3468: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f3468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f346c:
    // 0x3f346c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x3f346cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3f3470:
    // 0x3f3470: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
label_3f3474:
    if (ctx->pc == 0x3F3474u) {
        ctx->pc = 0x3F3474u;
            // 0x3f3474: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3478u;
        goto label_3f3478;
    }
    ctx->pc = 0x3F3470u;
    {
        const bool branch_taken_0x3f3470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3470u;
            // 0x3f3474: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3470) {
            ctx->pc = 0x3F3590u;
            goto label_3f3590;
        }
    }
    ctx->pc = 0x3F3478u;
label_3f3478:
    // 0x3f3478: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x3f3478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_3f347c:
    // 0x3f347c: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x3f347cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_3f3480:
    // 0x3f3480: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
label_3f3484:
    if (ctx->pc == 0x3F3484u) {
        ctx->pc = 0x3F3484u;
            // 0x3f3484: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x3F3488u;
        goto label_3f3488;
    }
    ctx->pc = 0x3F3480u;
    {
        const bool branch_taken_0x3f3480 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3480) {
            ctx->pc = 0x3F3484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3480u;
            // 0x3f3484: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F34ACu;
            goto label_3f34ac;
        }
    }
    ctx->pc = 0x3F3488u;
label_3f3488:
    // 0x3f3488: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3f3488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_3f348c:
    // 0x3f348c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f348cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3f3490:
    // 0x3f3490: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3f3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_3f3494:
    // 0x3f3494: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3f3494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3f3498:
    // 0x3f3498: 0xc049e92  jal         func_127A48
label_3f349c:
    if (ctx->pc == 0x3F349Cu) {
        ctx->pc = 0x3F349Cu;
            // 0x3f349c: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
        ctx->pc = 0x3F34A0u;
        goto label_3f34a0;
    }
    ctx->pc = 0x3F3498u;
    SET_GPR_U32(ctx, 31, 0x3F34A0u);
    ctx->pc = 0x3F349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3498u;
            // 0x3f349c: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34A0u; }
        if (ctx->pc != 0x3F34A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34A0u; }
        if (ctx->pc != 0x3F34A0u) { return; }
    }
    ctx->pc = 0x3F34A0u;
label_3f34a0:
    // 0x3f34a0: 0xc04981a  jal         func_126068
label_3f34a4:
    if (ctx->pc == 0x3F34A4u) {
        ctx->pc = 0x3F34A8u;
        goto label_3f34a8;
    }
    ctx->pc = 0x3F34A0u;
    SET_GPR_U32(ctx, 31, 0x3F34A8u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34A8u; }
        if (ctx->pc != 0x3F34A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34A8u; }
        if (ctx->pc != 0x3F34A8u) { return; }
    }
    ctx->pc = 0x3F34A8u;
label_3f34a8:
    // 0x3f34a8: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x3f34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_3f34ac:
    // 0x3f34ac: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3f34acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3f34b0:
    // 0x3f34b0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3f34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3f34b4:
    // 0x3f34b4: 0xc040180  jal         func_100600
label_3f34b8:
    if (ctx->pc == 0x3F34B8u) {
        ctx->pc = 0x3F34B8u;
            // 0x3f34b8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x3F34BCu;
        goto label_3f34bc;
    }
    ctx->pc = 0x3F34B4u;
    SET_GPR_U32(ctx, 31, 0x3F34BCu);
    ctx->pc = 0x3F34B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F34B4u;
            // 0x3f34b8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34BCu; }
        if (ctx->pc != 0x3F34BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34BCu; }
        if (ctx->pc != 0x3F34BCu) { return; }
    }
    ctx->pc = 0x3F34BCu;
label_3f34bc:
    // 0x3f34bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f34bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f34c0:
    // 0x3f34c0: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
label_3f34c4:
    if (ctx->pc == 0x3F34C4u) {
        ctx->pc = 0x3F34C4u;
            // 0x3f34c4: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->pc = 0x3F34C8u;
        goto label_3f34c8;
    }
    ctx->pc = 0x3F34C0u;
    {
        const bool branch_taken_0x3f34c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f34c0) {
            ctx->pc = 0x3F34C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F34C0u;
            // 0x3f34c4: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F34ECu;
            goto label_3f34ec;
        }
    }
    ctx->pc = 0x3F34C8u;
label_3f34c8:
    // 0x3f34c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3f34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_3f34cc:
    // 0x3f34cc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f34ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3f34d0:
    // 0x3f34d0: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3f34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_3f34d4:
    // 0x3f34d4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3f34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3f34d8:
    // 0x3f34d8: 0xc049e92  jal         func_127A48
label_3f34dc:
    if (ctx->pc == 0x3F34DCu) {
        ctx->pc = 0x3F34DCu;
            // 0x3f34dc: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
        ctx->pc = 0x3F34E0u;
        goto label_3f34e0;
    }
    ctx->pc = 0x3F34D8u;
    SET_GPR_U32(ctx, 31, 0x3F34E0u);
    ctx->pc = 0x3F34DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F34D8u;
            // 0x3f34dc: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34E0u; }
        if (ctx->pc != 0x3F34E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34E0u; }
        if (ctx->pc != 0x3F34E0u) { return; }
    }
    ctx->pc = 0x3F34E0u;
label_3f34e0:
    // 0x3f34e0: 0xc04981a  jal         func_126068
label_3f34e4:
    if (ctx->pc == 0x3F34E4u) {
        ctx->pc = 0x3F34E8u;
        goto label_3f34e8;
    }
    ctx->pc = 0x3F34E0u;
    SET_GPR_U32(ctx, 31, 0x3F34E8u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34E8u; }
        if (ctx->pc != 0x3F34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F34E8u; }
        if (ctx->pc != 0x3F34E8u) { return; }
    }
    ctx->pc = 0x3F34E8u;
label_3f34e8:
    // 0x3f34e8: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x3f34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
label_3f34ec:
    // 0x3f34ec: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x3f34ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
label_3f34f0:
    // 0x3f34f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3f34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3f34f4:
    // 0x3f34f4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3f34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3f34f8:
    // 0x3f34f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3f34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3f34fc:
    // 0x3f34fc: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3f34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3f3500:
    // 0x3f3500: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3f3500u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f3504:
    // 0x3f3504: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_3f3508:
    if (ctx->pc == 0x3F3508u) {
        ctx->pc = 0x3F350Cu;
        goto label_3f350c;
    }
    ctx->pc = 0x3F3504u;
    {
        const bool branch_taken_0x3f3504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3504) {
            ctx->pc = 0x3F3548u;
            goto label_3f3548;
        }
    }
    ctx->pc = 0x3F350Cu;
label_3f350c:
    // 0x3f350c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3f3510:
    if (ctx->pc == 0x3F3510u) {
        ctx->pc = 0x3F3514u;
        goto label_3f3514;
    }
    ctx->pc = 0x3F350Cu;
    {
        const bool branch_taken_0x3f350c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f350c) {
            ctx->pc = 0x3F3528u;
            goto label_3f3528;
        }
    }
    ctx->pc = 0x3F3514u;
label_3f3514:
    // 0x3f3514: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3f3514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f3518:
    // 0x3f3518: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3f3518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f351c:
    // 0x3f351c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x3f351cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_3f3520:
    // 0x3f3520: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3f3520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3f3524:
    // 0x3f3524: 0x0  nop
    ctx->pc = 0x3f3524u;
    // NOP
label_3f3528:
    // 0x3f3528: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3f3528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3f352c:
    // 0x3f352c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3f352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3f3530:
    // 0x3f3530: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3f3530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3f3534:
    // 0x3f3534: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3f3534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f3538:
    // 0x3f3538: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f3538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f353c:
    // 0x3f353c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_3f3540:
    if (ctx->pc == 0x3F3540u) {
        ctx->pc = 0x3F3540u;
            // 0x3f3540: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x3F3544u;
        goto label_3f3544;
    }
    ctx->pc = 0x3F353Cu;
    {
        const bool branch_taken_0x3f353c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F353Cu;
            // 0x3f3540: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f353c) {
            ctx->pc = 0x3F350Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f350c;
        }
    }
    ctx->pc = 0x3F3544u;
label_3f3544:
    // 0x3f3544: 0x0  nop
    ctx->pc = 0x3f3544u;
    // NOP
label_3f3548:
    // 0x3f3548: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3f3548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f354c:
    // 0x3f354c: 0x5052000e  beql        $v0, $s2, . + 4 + (0xE << 2)
label_3f3550:
    if (ctx->pc == 0x3F3550u) {
        ctx->pc = 0x3F3550u;
            // 0x3f3550: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F3554u;
        goto label_3f3554;
    }
    ctx->pc = 0x3F354Cu;
    {
        const bool branch_taken_0x3f354c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3f354c) {
            ctx->pc = 0x3F3550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F354Cu;
            // 0x3f3550: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3588u;
            goto label_3f3588;
        }
    }
    ctx->pc = 0x3F3554u;
label_3f3554:
    // 0x3f3554: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3f3554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3f3558:
    // 0x3f3558: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f355c:
    // 0x3f355c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3f355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_3f3560:
    // 0x3f3560: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3f3560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3f3564:
    // 0x3f3564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3f3564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3f3568:
    // 0x3f3568: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3f3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3f356c:
    // 0x3f356c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3f356cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_3f3570:
    // 0x3f3570: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3f3570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_3f3574:
    // 0x3f3574: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3f3574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3f3578:
    // 0x3f3578: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3f3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3f357c:
    // 0x3f357c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3f357cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3f3580:
    // 0x3f3580: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3f3580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3f3584:
    // 0x3f3584: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3f3584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f3588:
    // 0x3f3588: 0xc0b4b3c  jal         func_2D2CF0
label_3f358c:
    if (ctx->pc == 0x3F358Cu) {
        ctx->pc = 0x3F358Cu;
            // 0x3f358c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F3590u;
        goto label_3f3590;
    }
    ctx->pc = 0x3F3588u;
    SET_GPR_U32(ctx, 31, 0x3F3590u);
    ctx->pc = 0x3F358Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3588u;
            // 0x3f358c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (runtime->hasFunction(0x2D2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3590u; }
        if (ctx->pc != 0x3F3590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2CF0_0x2d2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3590u; }
        if (ctx->pc != 0x3F3590u) { return; }
    }
    ctx->pc = 0x3F3590u;
label_3f3590:
    // 0x3f3590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f3590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3594:
    // 0x3f3594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f3594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3598:
    // 0x3f3598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f3598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f359c:
    // 0x3f359c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f35a0:
    // 0x3f35a0: 0x3e00008  jr          $ra
label_3f35a4:
    if (ctx->pc == 0x3F35A4u) {
        ctx->pc = 0x3F35A4u;
            // 0x3f35a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F35A8u;
        goto label_3f35a8;
    }
    ctx->pc = 0x3F35A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F35A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F35A0u;
            // 0x3f35a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F35A8u;
label_3f35a8:
    // 0x3f35a8: 0x0  nop
    ctx->pc = 0x3f35a8u;
    // NOP
label_3f35ac:
    // 0x3f35ac: 0x0  nop
    ctx->pc = 0x3f35acu;
    // NOP
label_3f35b0:
    // 0x3f35b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f35b4:
    // 0x3f35b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f35b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f35b8:
    // 0x3f35b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f35bc:
    // 0x3f35bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f35bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f35c0:
    // 0x3f35c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f35c4:
    // 0x3f35c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f35c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f35c8:
    // 0x3f35c8: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_3f35cc:
    if (ctx->pc == 0x3F35CCu) {
        ctx->pc = 0x3F35CCu;
            // 0x3f35cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F35D0u;
        goto label_3f35d0;
    }
    ctx->pc = 0x3F35C8u;
    {
        const bool branch_taken_0x3f35c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F35CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F35C8u;
            // 0x3f35cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f35c8) {
            ctx->pc = 0x3F3698u;
            goto label_3f3698;
        }
    }
    ctx->pc = 0x3F35D0u;
label_3f35d0:
    // 0x3f35d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f35d4:
    // 0x3f35d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f35d8:
    // 0x3f35d8: 0x2463a230  addiu       $v1, $v1, -0x5DD0
    ctx->pc = 0x3f35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943280));
label_3f35dc:
    // 0x3f35dc: 0x2442a25c  addiu       $v0, $v0, -0x5DA4
    ctx->pc = 0x3f35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943324));
label_3f35e0:
    // 0x3f35e0: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x3f35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_3f35e4:
    // 0x3f35e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f35e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f35e8:
    // 0x3f35e8: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x3f35e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_3f35ec:
    // 0x3f35ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f35ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f35f0:
    // 0x3f35f0: 0xc0fd080  jal         func_3F4200
label_3f35f4:
    if (ctx->pc == 0x3F35F4u) {
        ctx->pc = 0x3F35F4u;
            // 0x3f35f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F35F8u;
        goto label_3f35f8;
    }
    ctx->pc = 0x3F35F0u;
    SET_GPR_U32(ctx, 31, 0x3F35F8u);
    ctx->pc = 0x3F35F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F35F0u;
            // 0x3f35f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F35F8u; }
        if (ctx->pc != 0x3F35F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F35F8u; }
        if (ctx->pc != 0x3F35F8u) { return; }
    }
    ctx->pc = 0x3F35F8u;
label_3f35f8:
    // 0x3f35f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f35f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3f35fc:
    // 0x3f35fc: 0x2a420015  slti        $v0, $s2, 0x15
    ctx->pc = 0x3f35fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)21) ? 1 : 0);
label_3f3600:
    // 0x3f3600: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3f3604:
    if (ctx->pc == 0x3F3604u) {
        ctx->pc = 0x3F3608u;
        goto label_3f3608;
    }
    ctx->pc = 0x3F3600u;
    {
        const bool branch_taken_0x3f3600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3600) {
            ctx->pc = 0x3F35ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f35ec;
        }
    }
    ctx->pc = 0x3F3608u;
label_3f3608:
    // 0x3f3608: 0x8e25039c  lw          $a1, 0x39C($s1)
    ctx->pc = 0x3f3608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 924)));
label_3f360c:
    // 0x3f360c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3f3610:
    if (ctx->pc == 0x3F3610u) {
        ctx->pc = 0x3F3610u;
            // 0x3f3610: 0x8e240398  lw          $a0, 0x398($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
        ctx->pc = 0x3F3614u;
        goto label_3f3614;
    }
    ctx->pc = 0x3F360Cu;
    {
        const bool branch_taken_0x3f360c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f360c) {
            ctx->pc = 0x3F3610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F360Cu;
            // 0x3f3610: 0x8e240398  lw          $a0, 0x398($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3628u;
            goto label_3f3628;
        }
    }
    ctx->pc = 0x3F3614u;
label_3f3614:
    // 0x3f3614: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f3614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f3618:
    // 0x3f3618: 0xc0fe48c  jal         func_3F9230
label_3f361c:
    if (ctx->pc == 0x3F361Cu) {
        ctx->pc = 0x3F361Cu;
            // 0x3f361c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3F3620u;
        goto label_3f3620;
    }
    ctx->pc = 0x3F3618u;
    SET_GPR_U32(ctx, 31, 0x3F3620u);
    ctx->pc = 0x3F361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3618u;
            // 0x3f361c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3620u; }
        if (ctx->pc != 0x3F3620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3620u; }
        if (ctx->pc != 0x3F3620u) { return; }
    }
    ctx->pc = 0x3F3620u;
label_3f3620:
    // 0x3f3620: 0xae20039c  sw          $zero, 0x39C($s1)
    ctx->pc = 0x3f3620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 0));
label_3f3624:
    // 0x3f3624: 0x8e240398  lw          $a0, 0x398($s1)
    ctx->pc = 0x3f3624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 920)));
label_3f3628:
    // 0x3f3628: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f362c:
    if (ctx->pc == 0x3F362Cu) {
        ctx->pc = 0x3F362Cu;
            // 0x3f362c: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->pc = 0x3F3630u;
        goto label_3f3630;
    }
    ctx->pc = 0x3F3628u;
    {
        const bool branch_taken_0x3f3628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3628) {
            ctx->pc = 0x3F362Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3628u;
            // 0x3f362c: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3644u;
            goto label_3f3644;
        }
    }
    ctx->pc = 0x3F3630u;
label_3f3630:
    // 0x3f3630: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f3630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f3634:
    // 0x3f3634: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f3634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f3638:
    // 0x3f3638: 0x320f809  jalr        $t9
label_3f363c:
    if (ctx->pc == 0x3F363Cu) {
        ctx->pc = 0x3F363Cu;
            // 0x3f363c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F3640u;
        goto label_3f3640;
    }
    ctx->pc = 0x3F3638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F3640u);
        ctx->pc = 0x3F363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3638u;
            // 0x3f363c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F3640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F3640u; }
            if (ctx->pc != 0x3F3640u) { return; }
        }
        }
    }
    ctx->pc = 0x3F3640u;
label_3f3640:
    // 0x3f3640: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x3f3640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_3f3644:
    // 0x3f3644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3f3648:
    if (ctx->pc == 0x3F3648u) {
        ctx->pc = 0x3F3648u;
            // 0x3f3648: 0xae200398  sw          $zero, 0x398($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 0));
        ctx->pc = 0x3F364Cu;
        goto label_3f364c;
    }
    ctx->pc = 0x3F3644u;
    {
        const bool branch_taken_0x3f3644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3644u;
            // 0x3f3648: 0xae200398  sw          $zero, 0x398($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3644) {
            ctx->pc = 0x3F3660u;
            goto label_3f3660;
        }
    }
    ctx->pc = 0x3F364Cu;
label_3f364c:
    // 0x3f364c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f364cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f3650:
    // 0x3f3650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f3650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f3654:
    // 0x3f3654: 0x2463a2b0  addiu       $v1, $v1, -0x5D50
    ctx->pc = 0x3f3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943408));
label_3f3658:
    // 0x3f3658: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x3f3658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_3f365c:
    // 0x3f365c: 0xac400e68  sw          $zero, 0xE68($v0)
    ctx->pc = 0x3f365cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3688), GPR_U32(ctx, 0));
label_3f3660:
    // 0x3f3660: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3f3664:
    if (ctx->pc == 0x3F3664u) {
        ctx->pc = 0x3F3664u;
            // 0x3f3664: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3F3668u;
        goto label_3f3668;
    }
    ctx->pc = 0x3F3660u;
    {
        const bool branch_taken_0x3f3660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3660) {
            ctx->pc = 0x3F3664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3660u;
            // 0x3f3664: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3684u;
            goto label_3f3684;
        }
    }
    ctx->pc = 0x3F3668u;
label_3f3668:
    // 0x3f3668: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f3668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f366c:
    // 0x3f366c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3670:
    // 0x3f3670: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x3f3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
label_3f3674:
    // 0x3f3674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3678:
    // 0x3f3678: 0xc0edb38  jal         func_3B6CE0
label_3f367c:
    if (ctx->pc == 0x3F367Cu) {
        ctx->pc = 0x3F367Cu;
            // 0x3f367c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x3F3680u;
        goto label_3f3680;
    }
    ctx->pc = 0x3F3678u;
    SET_GPR_U32(ctx, 31, 0x3F3680u);
    ctx->pc = 0x3F367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3678u;
            // 0x3f367c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B6CE0u;
    if (runtime->hasFunction(0x3B6CE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B6CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3680u; }
        if (ctx->pc != 0x3F3680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B6CE0_0x3b6ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3680u; }
        if (ctx->pc != 0x3F3680u) { return; }
    }
    ctx->pc = 0x3F3680u;
label_3f3680:
    // 0x3f3680: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3f3680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3f3684:
    // 0x3f3684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f3684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f3688:
    // 0x3f3688: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f368c:
    if (ctx->pc == 0x3F368Cu) {
        ctx->pc = 0x3F368Cu;
            // 0x3f368c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3690u;
        goto label_3f3690;
    }
    ctx->pc = 0x3F3688u;
    {
        const bool branch_taken_0x3f3688 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f3688) {
            ctx->pc = 0x3F368Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3688u;
            // 0x3f368c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F369Cu;
            goto label_3f369c;
        }
    }
    ctx->pc = 0x3F3690u;
label_3f3690:
    // 0x3f3690: 0xc0400a8  jal         func_1002A0
label_3f3694:
    if (ctx->pc == 0x3F3694u) {
        ctx->pc = 0x3F3694u;
            // 0x3f3694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3698u;
        goto label_3f3698;
    }
    ctx->pc = 0x3F3690u;
    SET_GPR_U32(ctx, 31, 0x3F3698u);
    ctx->pc = 0x3F3694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3690u;
            // 0x3f3694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3698u; }
        if (ctx->pc != 0x3F3698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3698u; }
        if (ctx->pc != 0x3F3698u) { return; }
    }
    ctx->pc = 0x3F3698u;
label_3f3698:
    // 0x3f3698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f3698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f369c:
    // 0x3f369c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f369cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f36a0:
    // 0x3f36a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f36a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f36a4:
    // 0x3f36a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f36a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f36a8:
    // 0x3f36a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f36a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f36ac:
    // 0x3f36ac: 0x3e00008  jr          $ra
label_3f36b0:
    if (ctx->pc == 0x3F36B0u) {
        ctx->pc = 0x3F36B0u;
            // 0x3f36b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F36B4u;
        goto label_3f36b4;
    }
    ctx->pc = 0x3F36ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F36B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F36ACu;
            // 0x3f36b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F36B4u;
label_3f36b4:
    // 0x3f36b4: 0x0  nop
    ctx->pc = 0x3f36b4u;
    // NOP
label_3f36b8:
    // 0x3f36b8: 0x0  nop
    ctx->pc = 0x3f36b8u;
    // NOP
label_3f36bc:
    // 0x3f36bc: 0x0  nop
    ctx->pc = 0x3f36bcu;
    // NOP
label_3f36c0:
    // 0x3f36c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3f36c4:
    // 0x3f36c4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3f36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3f36c8:
    // 0x3f36c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3f36c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3f36cc:
    // 0x3f36cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3f36ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3f36d0:
    // 0x3f36d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f36d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3f36d4:
    // 0x3f36d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f36d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3f36d8:
    // 0x3f36d8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3f36d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f36dc:
    // 0x3f36dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f36e0:
    // 0x3f36e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f36e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f36e4:
    // 0x3f36e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f36e8:
    // 0x3f36e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3f36e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f36ec:
    // 0x3f36ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f36ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f36f0:
    // 0x3f36f0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3f36f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f36f4:
    // 0x3f36f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f36f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f36f8:
    // 0x3f36f8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3f36f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f36fc:
    // 0x3f36fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f36fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f3700:
    // 0x3f3700: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3f3700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f3704:
    // 0x3f3704: 0x10a300e7  beq         $a1, $v1, . + 4 + (0xE7 << 2)
label_3f3708:
    if (ctx->pc == 0x3F3708u) {
        ctx->pc = 0x3F3708u;
            // 0x3f3708: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F370Cu;
        goto label_3f370c;
    }
    ctx->pc = 0x3F3704u;
    {
        const bool branch_taken_0x3f3704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F3708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3704u;
            // 0x3f3708: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3704) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F370Cu;
label_3f370c:
    // 0x3f370c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x3f370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3f3710:
    // 0x3f3710: 0x50a300c5  beql        $a1, $v1, . + 4 + (0xC5 << 2)
label_3f3714:
    if (ctx->pc == 0x3F3714u) {
        ctx->pc = 0x3F3714u;
            // 0x3f3714: 0x8ea203d0  lw          $v0, 0x3D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 976)));
        ctx->pc = 0x3F3718u;
        goto label_3f3718;
    }
    ctx->pc = 0x3F3710u;
    {
        const bool branch_taken_0x3f3710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3710) {
            ctx->pc = 0x3F3714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3710u;
            // 0x3f3714: 0x8ea203d0  lw          $v0, 0x3D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 976)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3A28u;
            goto label_3f3a28;
        }
    }
    ctx->pc = 0x3F3718u;
label_3f3718:
    // 0x3f3718: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x3f3718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_3f371c:
    // 0x3f371c: 0x50a300b0  beql        $a1, $v1, . + 4 + (0xB0 << 2)
label_3f3720:
    if (ctx->pc == 0x3F3720u) {
        ctx->pc = 0x3F3720u;
            // 0x3f3720: 0x8ea503cc  lw          $a1, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->pc = 0x3F3724u;
        goto label_3f3724;
    }
    ctx->pc = 0x3F371Cu;
    {
        const bool branch_taken_0x3f371c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f371c) {
            ctx->pc = 0x3F3720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F371Cu;
            // 0x3f3720: 0x8ea503cc  lw          $a1, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F39E0u;
            goto label_3f39e0;
        }
    }
    ctx->pc = 0x3F3724u;
label_3f3724:
    // 0x3f3724: 0x28a3001f  slti        $v1, $a1, 0x1F
    ctx->pc = 0x3f3724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
label_3f3728:
    // 0x3f3728: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3f372c:
    if (ctx->pc == 0x3F372Cu) {
        ctx->pc = 0x3F372Cu;
            // 0x3f372c: 0x28a3000b  slti        $v1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->pc = 0x3F3730u;
        goto label_3f3730;
    }
    ctx->pc = 0x3F3728u;
    {
        const bool branch_taken_0x3f3728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3728) {
            ctx->pc = 0x3F372Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3728u;
            // 0x3f372c: 0x28a3000b  slti        $v1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3740u;
            goto label_3f3740;
        }
    }
    ctx->pc = 0x3F3730u;
label_3f3730:
    // 0x3f3730: 0x28a30029  slti        $v1, $a1, 0x29
    ctx->pc = 0x3f3730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
label_3f3734:
    // 0x3f3734: 0x546000a6  bnel        $v1, $zero, . + 4 + (0xA6 << 2)
label_3f3738:
    if (ctx->pc == 0x3F3738u) {
        ctx->pc = 0x3F3738u;
            // 0x3f3738: 0x24a5fffb  addiu       $a1, $a1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
        ctx->pc = 0x3F373Cu;
        goto label_3f373c;
    }
    ctx->pc = 0x3F3734u;
    {
        const bool branch_taken_0x3f3734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3734) {
            ctx->pc = 0x3F3738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3734u;
            // 0x3f3738: 0x24a5fffb  addiu       $a1, $a1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F39D0u;
            goto label_3f39d0;
        }
    }
    ctx->pc = 0x3F373Cu;
label_3f373c:
    // 0x3f373c: 0x28a3000b  slti        $v1, $a1, 0xB
    ctx->pc = 0x3f373cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
label_3f3740:
    // 0x3f3740: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3f3744:
    if (ctx->pc == 0x3F3744u) {
        ctx->pc = 0x3F3744u;
            // 0x3f3744: 0x28a30008  slti        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x3F3748u;
        goto label_3f3748;
    }
    ctx->pc = 0x3F3740u;
    {
        const bool branch_taken_0x3f3740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3740) {
            ctx->pc = 0x3F3744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3740u;
            // 0x3f3744: 0x28a30008  slti        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3758u;
            goto label_3f3758;
        }
    }
    ctx->pc = 0x3F3748u;
label_3f3748:
    // 0x3f3748: 0x28a30019  slti        $v1, $a1, 0x19
    ctx->pc = 0x3f3748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)25) ? 1 : 0);
label_3f374c:
    // 0x3f374c: 0x5460006a  bnel        $v1, $zero, . + 4 + (0x6A << 2)
label_3f3750:
    if (ctx->pc == 0x3F3750u) {
        ctx->pc = 0x3F3750u;
            // 0x3f3750: 0x8ea203a8  lw          $v0, 0x3A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 936)));
        ctx->pc = 0x3F3754u;
        goto label_3f3754;
    }
    ctx->pc = 0x3F374Cu;
    {
        const bool branch_taken_0x3f374c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f374c) {
            ctx->pc = 0x3F3750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F374Cu;
            // 0x3f3750: 0x8ea203a8  lw          $v0, 0x3A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 936)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F38F8u;
            goto label_3f38f8;
        }
    }
    ctx->pc = 0x3F3754u;
label_3f3754:
    // 0x3f3754: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x3f3754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_3f3758:
    // 0x3f3758: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3f375c:
    if (ctx->pc == 0x3F375Cu) {
        ctx->pc = 0x3F375Cu;
            // 0x3f375c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3F3760u;
        goto label_3f3760;
    }
    ctx->pc = 0x3F3758u;
    {
        const bool branch_taken_0x3f3758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3758) {
            ctx->pc = 0x3F375Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3758u;
            // 0x3f375c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3770u;
            goto label_3f3770;
        }
    }
    ctx->pc = 0x3F3760u;
label_3f3760:
    // 0x3f3760: 0x28a3000b  slti        $v1, $a1, 0xB
    ctx->pc = 0x3f3760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
label_3f3764:
    // 0x3f3764: 0x5460005a  bnel        $v1, $zero, . + 4 + (0x5A << 2)
label_3f3768:
    if (ctx->pc == 0x3F3768u) {
        ctx->pc = 0x3F3768u;
            // 0x3f3768: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F376Cu;
        goto label_3f376c;
    }
    ctx->pc = 0x3F3764u;
    {
        const bool branch_taken_0x3f3764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3764) {
            ctx->pc = 0x3F3768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3764u;
            // 0x3f3768: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F38D0u;
            goto label_3f38d0;
        }
    }
    ctx->pc = 0x3F376Cu;
label_3f376c:
    // 0x3f376c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3f376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f3770:
    // 0x3f3770: 0x50a3004c  beql        $a1, $v1, . + 4 + (0x4C << 2)
label_3f3774:
    if (ctx->pc == 0x3F3774u) {
        ctx->pc = 0x3F3774u;
            // 0x3f3774: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->pc = 0x3F3778u;
        goto label_3f3778;
    }
    ctx->pc = 0x3F3770u;
    {
        const bool branch_taken_0x3f3770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3770) {
            ctx->pc = 0x3F3774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3770u;
            // 0x3f3774: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F38A4u;
            goto label_3f38a4;
        }
    }
    ctx->pc = 0x3F3778u;
label_3f3778:
    // 0x3f3778: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3f3778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f377c:
    // 0x3f377c: 0x50a3003e  beql        $a1, $v1, . + 4 + (0x3E << 2)
label_3f3780:
    if (ctx->pc == 0x3F3780u) {
        ctx->pc = 0x3F3780u;
            // 0x3f3780: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->pc = 0x3F3784u;
        goto label_3f3784;
    }
    ctx->pc = 0x3F377Cu;
    {
        const bool branch_taken_0x3f377c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f377c) {
            ctx->pc = 0x3F3780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F377Cu;
            // 0x3f3780: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3878u;
            goto label_3f3878;
        }
    }
    ctx->pc = 0x3F3784u;
label_3f3784:
    // 0x3f3784: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f3788:
    // 0x3f3788: 0x50a30030  beql        $a1, $v1, . + 4 + (0x30 << 2)
label_3f378c:
    if (ctx->pc == 0x3F378Cu) {
        ctx->pc = 0x3F378Cu;
            // 0x3f378c: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->pc = 0x3F3790u;
        goto label_3f3790;
    }
    ctx->pc = 0x3F3788u;
    {
        const bool branch_taken_0x3f3788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3788) {
            ctx->pc = 0x3F378Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3788u;
            // 0x3f378c: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F384Cu;
            goto label_3f384c;
        }
    }
    ctx->pc = 0x3F3790u;
label_3f3790:
    // 0x3f3790: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f3790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f3794:
    // 0x3f3794: 0x50a30022  beql        $a1, $v1, . + 4 + (0x22 << 2)
label_3f3798:
    if (ctx->pc == 0x3F3798u) {
        ctx->pc = 0x3F3798u;
            // 0x3f3798: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->pc = 0x3F379Cu;
        goto label_3f379c;
    }
    ctx->pc = 0x3F3794u;
    {
        const bool branch_taken_0x3f3794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3794) {
            ctx->pc = 0x3F3798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3794u;
            // 0x3f3798: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3820u;
            goto label_3f3820;
        }
    }
    ctx->pc = 0x3F379Cu;
label_3f379c:
    // 0x3f379c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f37a0:
    // 0x3f37a0: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
label_3f37a4:
    if (ctx->pc == 0x3F37A4u) {
        ctx->pc = 0x3F37A4u;
            // 0x3f37a4: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->pc = 0x3F37A8u;
        goto label_3f37a8;
    }
    ctx->pc = 0x3F37A0u;
    {
        const bool branch_taken_0x3f37a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f37a0) {
            ctx->pc = 0x3F37A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F37A0u;
            // 0x3f37a4: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F37F4u;
            goto label_3f37f4;
        }
    }
    ctx->pc = 0x3F37A8u;
label_3f37a8:
    // 0x3f37a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f37ac:
    // 0x3f37ac: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3f37b0:
    if (ctx->pc == 0x3F37B0u) {
        ctx->pc = 0x3F37B0u;
            // 0x3f37b0: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->pc = 0x3F37B4u;
        goto label_3f37b4;
    }
    ctx->pc = 0x3F37ACu;
    {
        const bool branch_taken_0x3f37ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f37ac) {
            ctx->pc = 0x3F37B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F37ACu;
            // 0x3f37b0: 0x8ea203cc  lw          $v0, 0x3CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 972)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F37C8u;
            goto label_3f37c8;
        }
    }
    ctx->pc = 0x3F37B4u;
label_3f37b4:
    // 0x3f37b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f37b8:
    // 0x3f37b8: 0x50a300bb  beql        $a1, $v1, . + 4 + (0xBB << 2)
label_3f37bc:
    if (ctx->pc == 0x3F37BCu) {
        ctx->pc = 0x3F37BCu;
            // 0x3f37bc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x3F37C0u;
        goto label_3f37c0;
    }
    ctx->pc = 0x3F37B8u;
    {
        const bool branch_taken_0x3f37b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f37b8) {
            ctx->pc = 0x3F37BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F37B8u;
            // 0x3f37bc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3AA8u;
            goto label_3f3aa8;
        }
    }
    ctx->pc = 0x3F37C0u;
label_3f37c0:
    // 0x3f37c0: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_3f37c4:
    if (ctx->pc == 0x3F37C4u) {
        ctx->pc = 0x3F37C8u;
        goto label_3f37c8;
    }
    ctx->pc = 0x3F37C0u;
    {
        const bool branch_taken_0x3f37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f37c0) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F37C8u;
label_3f37c8:
    // 0x3f37c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f37c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f37cc:
    // 0x3f37cc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f37ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f37d0:
    // 0x3f37d0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f37d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f37d4:
    // 0x3f37d4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f37d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f37d8:
    // 0x3f37d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f37d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f37dc:
    // 0x3f37dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f37dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f37e0:
    // 0x3f37e0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f37e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f37e4:
    // 0x3f37e4: 0xc0ee334  jal         func_3B8CD0
label_3f37e8:
    if (ctx->pc == 0x3F37E8u) {
        ctx->pc = 0x3F37E8u;
            // 0x3f37e8: 0x244500ea  addiu       $a1, $v0, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 234));
        ctx->pc = 0x3F37ECu;
        goto label_3f37ec;
    }
    ctx->pc = 0x3F37E4u;
    SET_GPR_U32(ctx, 31, 0x3F37ECu);
    ctx->pc = 0x3F37E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F37E4u;
            // 0x3f37e8: 0x244500ea  addiu       $a1, $v0, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 234));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F37ECu; }
        if (ctx->pc != 0x3F37ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F37ECu; }
        if (ctx->pc != 0x3F37ECu) { return; }
    }
    ctx->pc = 0x3F37ECu;
label_3f37ec:
    // 0x3f37ec: 0x100000ad  b           . + 4 + (0xAD << 2)
label_3f37f0:
    if (ctx->pc == 0x3F37F0u) {
        ctx->pc = 0x3F37F4u;
        goto label_3f37f4;
    }
    ctx->pc = 0x3F37ECu;
    {
        const bool branch_taken_0x3f37ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f37ec) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F37F4u;
label_3f37f4:
    // 0x3f37f4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f37f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f37f8:
    // 0x3f37f8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f37f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f37fc:
    // 0x3f37fc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f37fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3800:
    // 0x3f3800: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3800u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3804:
    // 0x3f3804: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f3804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3808:
    // 0x3f3808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f380c:
    // 0x3f380c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f380cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f3810:
    // 0x3f3810: 0xc0ee334  jal         func_3B8CD0
label_3f3814:
    if (ctx->pc == 0x3F3814u) {
        ctx->pc = 0x3F3814u;
            // 0x3f3814: 0x24450101  addiu       $a1, $v0, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 257));
        ctx->pc = 0x3F3818u;
        goto label_3f3818;
    }
    ctx->pc = 0x3F3810u;
    SET_GPR_U32(ctx, 31, 0x3F3818u);
    ctx->pc = 0x3F3814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3810u;
            // 0x3f3814: 0x24450101  addiu       $a1, $v0, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 257));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3818u; }
        if (ctx->pc != 0x3F3818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3818u; }
        if (ctx->pc != 0x3F3818u) { return; }
    }
    ctx->pc = 0x3F3818u;
label_3f3818:
    // 0x3f3818: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_3f381c:
    if (ctx->pc == 0x3F381Cu) {
        ctx->pc = 0x3F3820u;
        goto label_3f3820;
    }
    ctx->pc = 0x3F3818u;
    {
        const bool branch_taken_0x3f3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3818) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F3820u;
label_3f3820:
    // 0x3f3820: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3824:
    // 0x3f3824: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3828:
    // 0x3f3828: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f382c:
    // 0x3f382c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f382cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3830:
    // 0x3f3830: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f3830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3834:
    // 0x3f3834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3838:
    // 0x3f3838: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f3838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f383c:
    // 0x3f383c: 0xc0ee334  jal         func_3B8CD0
label_3f3840:
    if (ctx->pc == 0x3F3840u) {
        ctx->pc = 0x3F3840u;
            // 0x3f3840: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->pc = 0x3F3844u;
        goto label_3f3844;
    }
    ctx->pc = 0x3F383Cu;
    SET_GPR_U32(ctx, 31, 0x3F3844u);
    ctx->pc = 0x3F3840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F383Cu;
            // 0x3f3840: 0x24450108  addiu       $a1, $v0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3844u; }
        if (ctx->pc != 0x3F3844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3844u; }
        if (ctx->pc != 0x3F3844u) { return; }
    }
    ctx->pc = 0x3F3844u;
label_3f3844:
    // 0x3f3844: 0x10000097  b           . + 4 + (0x97 << 2)
label_3f3848:
    if (ctx->pc == 0x3F3848u) {
        ctx->pc = 0x3F384Cu;
        goto label_3f384c;
    }
    ctx->pc = 0x3F3844u;
    {
        const bool branch_taken_0x3f3844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3844) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F384Cu;
label_3f384c:
    // 0x3f384c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f384cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3850:
    // 0x3f3850: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3854:
    // 0x3f3854: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3854u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3858:
    // 0x3f3858: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3858u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f385c:
    // 0x3f385c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3860:
    // 0x3f3860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3864:
    // 0x3f3864: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f3864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f3868:
    // 0x3f3868: 0xc0ee334  jal         func_3B8CD0
label_3f386c:
    if (ctx->pc == 0x3F386Cu) {
        ctx->pc = 0x3F386Cu;
            // 0x3f386c: 0x24450149  addiu       $a1, $v0, 0x149 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 329));
        ctx->pc = 0x3F3870u;
        goto label_3f3870;
    }
    ctx->pc = 0x3F3868u;
    SET_GPR_U32(ctx, 31, 0x3F3870u);
    ctx->pc = 0x3F386Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3868u;
            // 0x3f386c: 0x24450149  addiu       $a1, $v0, 0x149 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 329));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3870u; }
        if (ctx->pc != 0x3F3870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3870u; }
        if (ctx->pc != 0x3F3870u) { return; }
    }
    ctx->pc = 0x3F3870u;
label_3f3870:
    // 0x3f3870: 0x1000008c  b           . + 4 + (0x8C << 2)
label_3f3874:
    if (ctx->pc == 0x3F3874u) {
        ctx->pc = 0x3F3878u;
        goto label_3f3878;
    }
    ctx->pc = 0x3F3870u;
    {
        const bool branch_taken_0x3f3870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3870) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F3878u;
label_3f3878:
    // 0x3f3878: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f387c:
    // 0x3f387c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f387cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3880:
    // 0x3f3880: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3884:
    // 0x3f3884: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3884u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3888:
    // 0x3f3888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f3888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f388c:
    // 0x3f388c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f388cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3890:
    // 0x3f3890: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f3890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f3894:
    // 0x3f3894: 0xc0ee334  jal         func_3B8CD0
label_3f3898:
    if (ctx->pc == 0x3F3898u) {
        ctx->pc = 0x3F3898u;
            // 0x3f3898: 0x2445014a  addiu       $a1, $v0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
        ctx->pc = 0x3F389Cu;
        goto label_3f389c;
    }
    ctx->pc = 0x3F3894u;
    SET_GPR_U32(ctx, 31, 0x3F389Cu);
    ctx->pc = 0x3F3898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3894u;
            // 0x3f3898: 0x2445014a  addiu       $a1, $v0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F389Cu; }
        if (ctx->pc != 0x3F389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F389Cu; }
        if (ctx->pc != 0x3F389Cu) { return; }
    }
    ctx->pc = 0x3F389Cu;
label_3f389c:
    // 0x3f389c: 0x10000081  b           . + 4 + (0x81 << 2)
label_3f38a0:
    if (ctx->pc == 0x3F38A0u) {
        ctx->pc = 0x3F38A4u;
        goto label_3f38a4;
    }
    ctx->pc = 0x3F389Cu;
    {
        const bool branch_taken_0x3f389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f389c) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F38A4u;
label_3f38a4:
    // 0x3f38a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f38a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f38a8:
    // 0x3f38a8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f38a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f38ac:
    // 0x3f38ac: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f38acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f38b0:
    // 0x3f38b0: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f38b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f38b4:
    // 0x3f38b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f38b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f38b8:
    // 0x3f38b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f38b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f38bc:
    // 0x3f38bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f38bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f38c0:
    // 0x3f38c0: 0xc0ee334  jal         func_3B8CD0
label_3f38c4:
    if (ctx->pc == 0x3F38C4u) {
        ctx->pc = 0x3F38C4u;
            // 0x3f38c4: 0x2445015c  addiu       $a1, $v0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
        ctx->pc = 0x3F38C8u;
        goto label_3f38c8;
    }
    ctx->pc = 0x3F38C0u;
    SET_GPR_U32(ctx, 31, 0x3F38C8u);
    ctx->pc = 0x3F38C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F38C0u;
            // 0x3f38c4: 0x2445015c  addiu       $a1, $v0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F38C8u; }
        if (ctx->pc != 0x3F38C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F38C8u; }
        if (ctx->pc != 0x3F38C8u) { return; }
    }
    ctx->pc = 0x3F38C8u;
label_3f38c8:
    // 0x3f38c8: 0x10000076  b           . + 4 + (0x76 << 2)
label_3f38cc:
    if (ctx->pc == 0x3F38CCu) {
        ctx->pc = 0x3F38D0u;
        goto label_3f38d0;
    }
    ctx->pc = 0x3F38C8u;
    {
        const bool branch_taken_0x3f38c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f38c8) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F38D0u;
label_3f38d0:
    // 0x3f38d0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f38d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f38d4:
    // 0x3f38d4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f38d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f38d8:
    // 0x3f38d8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f38d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f38dc:
    // 0x3f38dc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f38dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f38e0:
    // 0x3f38e0: 0x24a50155  addiu       $a1, $a1, 0x155
    ctx->pc = 0x3f38e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 341));
label_3f38e4:
    // 0x3f38e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f38e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f38e8:
    // 0x3f38e8: 0xc0ee334  jal         func_3B8CD0
label_3f38ec:
    if (ctx->pc == 0x3F38ECu) {
        ctx->pc = 0x3F38ECu;
            // 0x3f38ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F38F0u;
        goto label_3f38f0;
    }
    ctx->pc = 0x3F38E8u;
    SET_GPR_U32(ctx, 31, 0x3F38F0u);
    ctx->pc = 0x3F38ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F38E8u;
            // 0x3f38ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F38F0u; }
        if (ctx->pc != 0x3F38F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F38F0u; }
        if (ctx->pc != 0x3F38F0u) { return; }
    }
    ctx->pc = 0x3F38F0u;
label_3f38f0:
    // 0x3f38f0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3f38f4:
    if (ctx->pc == 0x3F38F4u) {
        ctx->pc = 0x3F38F8u;
        goto label_3f38f8;
    }
    ctx->pc = 0x3F38F0u;
    {
        const bool branch_taken_0x3f38f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f38f0) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F38F8u;
label_3f38f8:
    // 0x3f38f8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_3f38fc:
    if (ctx->pc == 0x3F38FCu) {
        ctx->pc = 0x3F38FCu;
            // 0x3f38fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3900u;
        goto label_3f3900;
    }
    ctx->pc = 0x3F38F8u;
    {
        const bool branch_taken_0x3f38f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f38f8) {
            ctx->pc = 0x3F38FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F38F8u;
            // 0x3f38fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3950u;
            goto label_3f3950;
        }
    }
    ctx->pc = 0x3F3900u;
label_3f3900:
    // 0x3f3900: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f3900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f3904:
    // 0x3f3904: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3908:
    // 0x3f3908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f390c:
    // 0x3f390c: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f390cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f3910:
    // 0x3f3910: 0xc0ee3b8  jal         func_3B8EE0
label_3f3914:
    if (ctx->pc == 0x3F3914u) {
        ctx->pc = 0x3F3914u;
            // 0x3f3914: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F3918u;
        goto label_3f3918;
    }
    ctx->pc = 0x3F3910u;
    SET_GPR_U32(ctx, 31, 0x3F3918u);
    ctx->pc = 0x3F3914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3910u;
            // 0x3f3914: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3918u; }
        if (ctx->pc != 0x3F3918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3918u; }
        if (ctx->pc != 0x3F3918u) { return; }
    }
    ctx->pc = 0x3F3918u;
label_3f3918:
    // 0x3f3918: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f391c:
    // 0x3f391c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f391cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3920:
    // 0x3f3920: 0x8eb00010  lw          $s0, 0x10($s5)
    ctx->pc = 0x3f3920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3f3924:
    // 0x3f3924: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f3924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3928:
    // 0x3f3928: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3f3928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f392c:
    // 0x3f392c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f392cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3930:
    // 0x3f3930: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3934:
    // 0x3f3934: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3938:
    // 0x3f3938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f3938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f393c:
    // 0x3f393c: 0x24a56f20  addiu       $a1, $a1, 0x6F20
    ctx->pc = 0x3f393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
label_3f3940:
    // 0x3f3940: 0xc0ee34c  jal         func_3B8D30
label_3f3944:
    if (ctx->pc == 0x3F3944u) {
        ctx->pc = 0x3F3944u;
            // 0x3f3944: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x3F3948u;
        goto label_3f3948;
    }
    ctx->pc = 0x3F3940u;
    SET_GPR_U32(ctx, 31, 0x3F3948u);
    ctx->pc = 0x3F3944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3940u;
            // 0x3f3944: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3948u; }
        if (ctx->pc != 0x3F3948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3948u; }
        if (ctx->pc != 0x3F3948u) { return; }
    }
    ctx->pc = 0x3F3948u;
label_3f3948:
    // 0x3f3948: 0x10000056  b           . + 4 + (0x56 << 2)
label_3f394c:
    if (ctx->pc == 0x3F394Cu) {
        ctx->pc = 0x3F394Cu;
            // 0x3f394c: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x3F3950u;
        goto label_3f3950;
    }
    ctx->pc = 0x3F3948u;
    {
        const bool branch_taken_0x3f3948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3948u;
            // 0x3f394c: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3948) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F3950u;
label_3f3950:
    // 0x3f3950: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x3f3950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3f3954:
    // 0x3f3954: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3958:
    // 0x3f3958: 0x40f809  jalr        $v0
label_3f395c:
    if (ctx->pc == 0x3F395Cu) {
        ctx->pc = 0x3F395Cu;
            // 0x3f395c: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->pc = 0x3F3960u;
        goto label_3f3960;
    }
    ctx->pc = 0x3F3958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3960u);
        ctx->pc = 0x3F395Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3958u;
            // 0x3f395c: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F3960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F3960u; }
            if (ctx->pc != 0x3F3960u) { return; }
        }
        }
    }
    ctx->pc = 0x3F3960u;
label_3f3960:
    // 0x3f3960: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x3f3960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_3f3964:
    // 0x3f3964: 0x4a3000f  bgezl       $a1, . + 4 + (0xF << 2)
label_3f3968:
    if (ctx->pc == 0x3F3968u) {
        ctx->pc = 0x3F3968u;
            // 0x3f3968: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F396Cu;
        goto label_3f396c;
    }
    ctx->pc = 0x3F3964u;
    {
        const bool branch_taken_0x3f3964 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x3f3964) {
            ctx->pc = 0x3F3968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3964u;
            // 0x3f3968: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F39A4u;
            goto label_3f39a4;
        }
    }
    ctx->pc = 0x3F396Cu;
label_3f396c:
    // 0x3f396c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f396cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3970:
    // 0x3f3970: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3974:
    // 0x3f3974: 0x8eb00010  lw          $s0, 0x10($s5)
    ctx->pc = 0x3f3974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3f3978:
    // 0x3f3978: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f3978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f397c:
    // 0x3f397c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3f397cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3980:
    // 0x3f3980: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3984:
    // 0x3f3984: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3988:
    // 0x3f3988: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f398c:
    // 0x3f398c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3990:
    // 0x3f3990: 0x24a56f20  addiu       $a1, $a1, 0x6F20
    ctx->pc = 0x3f3990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
label_3f3994:
    // 0x3f3994: 0xc0ee34c  jal         func_3B8D30
label_3f3998:
    if (ctx->pc == 0x3F3998u) {
        ctx->pc = 0x3F3998u;
            // 0x3f3998: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x3F399Cu;
        goto label_3f399c;
    }
    ctx->pc = 0x3F3994u;
    SET_GPR_U32(ctx, 31, 0x3F399Cu);
    ctx->pc = 0x3F3998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3994u;
            // 0x3f3998: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F399Cu; }
        if (ctx->pc != 0x3F399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F399Cu; }
        if (ctx->pc != 0x3F399Cu) { return; }
    }
    ctx->pc = 0x3F399Cu;
label_3f399c:
    // 0x3f399c: 0x10000041  b           . + 4 + (0x41 << 2)
label_3f39a0:
    if (ctx->pc == 0x3F39A0u) {
        ctx->pc = 0x3F39A0u;
            // 0x3f39a0: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x3F39A4u;
        goto label_3f39a4;
    }
    ctx->pc = 0x3F399Cu;
    {
        const bool branch_taken_0x3f399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F39A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F399Cu;
            // 0x3f39a0: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f399c) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F39A4u;
label_3f39a4:
    // 0x3f39a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f39a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f39a8:
    // 0x3f39a8: 0x8eb00010  lw          $s0, 0x10($s5)
    ctx->pc = 0x3f39a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3f39ac:
    // 0x3f39ac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3f39acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f39b0:
    // 0x3f39b0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f39b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f39b4:
    // 0x3f39b4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f39b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f39b8:
    // 0x3f39b8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f39b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f39bc:
    // 0x3f39bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f39c0:
    // 0x3f39c0: 0xc0ee334  jal         func_3B8CD0
label_3f39c4:
    if (ctx->pc == 0x3F39C4u) {
        ctx->pc = 0x3F39C4u;
            // 0x3f39c4: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x3F39C8u;
        goto label_3f39c8;
    }
    ctx->pc = 0x3F39C0u;
    SET_GPR_U32(ctx, 31, 0x3F39C8u);
    ctx->pc = 0x3F39C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F39C0u;
            // 0x3f39c4: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F39C8u; }
        if (ctx->pc != 0x3F39C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F39C8u; }
        if (ctx->pc != 0x3F39C8u) { return; }
    }
    ctx->pc = 0x3F39C8u;
label_3f39c8:
    // 0x3f39c8: 0x10000036  b           . + 4 + (0x36 << 2)
label_3f39cc:
    if (ctx->pc == 0x3F39CCu) {
        ctx->pc = 0x3F39CCu;
            // 0x3f39cc: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x3F39D0u;
        goto label_3f39d0;
    }
    ctx->pc = 0x3F39C8u;
    {
        const bool branch_taken_0x3f39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F39CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F39C8u;
            // 0x3f39cc: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f39c8) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F39D0u;
label_3f39d0:
    // 0x3f39d0: 0xc0ee334  jal         func_3B8CD0
label_3f39d4:
    if (ctx->pc == 0x3F39D4u) {
        ctx->pc = 0x3F39D4u;
            // 0x3f39d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F39D8u;
        goto label_3f39d8;
    }
    ctx->pc = 0x3F39D0u;
    SET_GPR_U32(ctx, 31, 0x3F39D8u);
    ctx->pc = 0x3F39D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F39D0u;
            // 0x3f39d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F39D8u; }
        if (ctx->pc != 0x3F39D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F39D8u; }
        if (ctx->pc != 0x3F39D8u) { return; }
    }
    ctx->pc = 0x3F39D8u;
label_3f39d8:
    // 0x3f39d8: 0x10000032  b           . + 4 + (0x32 << 2)
label_3f39dc:
    if (ctx->pc == 0x3F39DCu) {
        ctx->pc = 0x3F39E0u;
        goto label_3f39e0;
    }
    ctx->pc = 0x3F39D8u;
    {
        const bool branch_taken_0x3f39d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f39d8) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F39E0u;
label_3f39e0:
    // 0x3f39e0: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f39e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f39e4:
    // 0x3f39e4: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f39e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f39e8:
    // 0x3f39e8: 0xc0ee3b8  jal         func_3B8EE0
label_3f39ec:
    if (ctx->pc == 0x3F39ECu) {
        ctx->pc = 0x3F39ECu;
            // 0x3f39ec: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F39F0u;
        goto label_3f39f0;
    }
    ctx->pc = 0x3F39E8u;
    SET_GPR_U32(ctx, 31, 0x3F39F0u);
    ctx->pc = 0x3F39ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F39E8u;
            // 0x3f39ec: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F39F0u; }
        if (ctx->pc != 0x3F39F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F39F0u; }
        if (ctx->pc != 0x3F39F0u) { return; }
    }
    ctx->pc = 0x3F39F0u;
label_3f39f0:
    // 0x3f39f0: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f39f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f39f4:
    // 0x3f39f4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f39f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f39f8:
    // 0x3f39f8: 0x8eb00010  lw          $s0, 0x10($s5)
    ctx->pc = 0x3f39f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3f39fc:
    // 0x3f39fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f39fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a00:
    // 0x3f3a00: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3f3a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a04:
    // 0x3f3a04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a08:
    // 0x3f3a08: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a0c:
    // 0x3f3a0c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a10:
    // 0x3f3a10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a14:
    // 0x3f3a14: 0x24a56f20  addiu       $a1, $a1, 0x6F20
    ctx->pc = 0x3f3a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
label_3f3a18:
    // 0x3f3a18: 0xc0ee34c  jal         func_3B8D30
label_3f3a1c:
    if (ctx->pc == 0x3F3A1Cu) {
        ctx->pc = 0x3F3A1Cu;
            // 0x3f3a1c: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x3F3A20u;
        goto label_3f3a20;
    }
    ctx->pc = 0x3F3A18u;
    SET_GPR_U32(ctx, 31, 0x3F3A20u);
    ctx->pc = 0x3F3A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3A18u;
            // 0x3f3a1c: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3A20u; }
        if (ctx->pc != 0x3F3A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3A20u; }
        if (ctx->pc != 0x3F3A20u) { return; }
    }
    ctx->pc = 0x3F3A20u;
label_3f3a20:
    // 0x3f3a20: 0x10000020  b           . + 4 + (0x20 << 2)
label_3f3a24:
    if (ctx->pc == 0x3F3A24u) {
        ctx->pc = 0x3F3A24u;
            // 0x3f3a24: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x3F3A28u;
        goto label_3f3a28;
    }
    ctx->pc = 0x3F3A20u;
    {
        const bool branch_taken_0x3f3a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3A20u;
            // 0x3f3a24: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3a20) {
            ctx->pc = 0x3F3AA4u;
            goto label_3f3aa4;
        }
    }
    ctx->pc = 0x3F3A28u;
label_3f3a28:
    // 0x3f3a28: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x3f3a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_3f3a2c:
    // 0x3f3a2c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3f3a30:
    if (ctx->pc == 0x3F3A30u) {
        ctx->pc = 0x3F3A30u;
            // 0x3f3a30: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3A34u;
        goto label_3f3a34;
    }
    ctx->pc = 0x3F3A2Cu;
    {
        const bool branch_taken_0x3f3a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3A2Cu;
            // 0x3f3a30: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3a2c) {
            ctx->pc = 0x3F3A4Cu;
            goto label_3f3a4c;
        }
    }
    ctx->pc = 0x3F3A34u;
label_3f3a34:
    // 0x3f3a34: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f3a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f3a38:
    // 0x3f3a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a3c:
    // 0x3f3a3c: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f3a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f3a40:
    // 0x3f3a40: 0xc0ee3b8  jal         func_3B8EE0
label_3f3a44:
    if (ctx->pc == 0x3F3A44u) {
        ctx->pc = 0x3F3A44u;
            // 0x3f3a44: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F3A48u;
        goto label_3f3a48;
    }
    ctx->pc = 0x3F3A40u;
    SET_GPR_U32(ctx, 31, 0x3F3A48u);
    ctx->pc = 0x3F3A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3A40u;
            // 0x3f3a44: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3A48u; }
        if (ctx->pc != 0x3F3A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3A48u; }
        if (ctx->pc != 0x3F3A48u) { return; }
    }
    ctx->pc = 0x3F3A48u;
label_3f3a48:
    // 0x3f3a48: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3f3a48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3f3a4c:
    // 0x3f3a4c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f3a50:
    // 0x3f3a50: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3f3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f3a54:
    // 0x3f3a54: 0x8ea503d0  lw          $a1, 0x3D0($s5)
    ctx->pc = 0x3f3a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 976)));
label_3f3a58:
    // 0x3f3a58: 0x172040  sll         $a0, $s7, 1
    ctx->pc = 0x3f3a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_3f3a5c:
    // 0x3f3a5c: 0x24636f20  addiu       $v1, $v1, 0x6F20
    ctx->pc = 0x3f3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28448));
label_3f3a60:
    // 0x3f3a60: 0x573823  subu        $a3, $v0, $s7
    ctx->pc = 0x3f3a60u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3f3a64:
    // 0x3f3a64: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3f3a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f3a68:
    // 0x3f3a68: 0xc0ee3b8  jal         func_3B8EE0
label_3f3a6c:
    if (ctx->pc == 0x3F3A6Cu) {
        ctx->pc = 0x3F3A6Cu;
            // 0x3f3a6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3A70u;
        goto label_3f3a70;
    }
    ctx->pc = 0x3F3A68u;
    SET_GPR_U32(ctx, 31, 0x3F3A70u);
    ctx->pc = 0x3F3A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3A68u;
            // 0x3f3a6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3A70u; }
        if (ctx->pc != 0x3F3A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3A70u; }
        if (ctx->pc != 0x3F3A70u) { return; }
    }
    ctx->pc = 0x3F3A70u;
label_3f3a70:
    // 0x3f3a70: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3a70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a74:
    // 0x3f3a74: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3a78:
    // 0x3f3a78: 0x8eb00010  lw          $s0, 0x10($s5)
    ctx->pc = 0x3f3a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3f3a7c:
    // 0x3f3a7c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f3a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a80:
    // 0x3f3a80: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3f3a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a84:
    // 0x3f3a84: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a88:
    // 0x3f3a88: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3a88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a8c:
    // 0x3f3a8c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3a8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a90:
    // 0x3f3a90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f3a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3a94:
    // 0x3f3a94: 0x24a56f20  addiu       $a1, $a1, 0x6F20
    ctx->pc = 0x3f3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
label_3f3a98:
    // 0x3f3a98: 0xc0ee34c  jal         func_3B8D30
label_3f3a9c:
    if (ctx->pc == 0x3F3A9Cu) {
        ctx->pc = 0x3F3A9Cu;
            // 0x3f3a9c: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x3F3AA0u;
        goto label_3f3aa0;
    }
    ctx->pc = 0x3F3A98u;
    SET_GPR_U32(ctx, 31, 0x3F3AA0u);
    ctx->pc = 0x3F3A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3A98u;
            // 0x3f3a9c: 0xaea00010  sw          $zero, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3AA0u; }
        if (ctx->pc != 0x3F3AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3AA0u; }
        if (ctx->pc != 0x3F3AA0u) { return; }
    }
    ctx->pc = 0x3F3AA0u;
label_3f3aa0:
    // 0x3f3aa0: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x3f3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
label_3f3aa4:
    // 0x3f3aa4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3f3aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3f3aa8:
    // 0x3f3aa8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3f3aa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f3aac:
    // 0x3f3aac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f3aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f3ab0:
    // 0x3f3ab0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f3ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f3ab4:
    // 0x3f3ab4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f3ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f3ab8:
    // 0x3f3ab8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f3ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3abc:
    // 0x3f3abc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f3abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3ac0:
    // 0x3f3ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f3ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f3ac4:
    // 0x3f3ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f3ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3ac8:
    // 0x3f3ac8: 0x3e00008  jr          $ra
label_3f3acc:
    if (ctx->pc == 0x3F3ACCu) {
        ctx->pc = 0x3F3ACCu;
            // 0x3f3acc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3F3AD0u;
        goto label_3f3ad0;
    }
    ctx->pc = 0x3F3AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3AC8u;
            // 0x3f3acc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F3AD0u;
label_3f3ad0:
    // 0x3f3ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f3ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f3ad4:
    // 0x3f3ad4: 0x28a100c8  slti        $at, $a1, 0xC8
    ctx->pc = 0x3f3ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)200) ? 1 : 0);
label_3f3ad8:
    // 0x3f3ad8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3f3adc:
    if (ctx->pc == 0x3F3ADCu) {
        ctx->pc = 0x3F3ADCu;
            // 0x3f3adc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x3F3AE0u;
        goto label_3f3ae0;
    }
    ctx->pc = 0x3F3AD8u;
    {
        const bool branch_taken_0x3f3ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3AD8u;
            // 0x3f3adc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ad8) {
            ctx->pc = 0x3F3AF8u;
            goto label_3f3af8;
        }
    }
    ctx->pc = 0x3F3AE0u;
label_3f3ae0:
    // 0x3f3ae0: 0x24a50319  addiu       $a1, $a1, 0x319
    ctx->pc = 0x3f3ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 793));
label_3f3ae4:
    // 0x3f3ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ae8:
    // 0x3f3ae8: 0xc0ee334  jal         func_3B8CD0
label_3f3aec:
    if (ctx->pc == 0x3F3AECu) {
        ctx->pc = 0x3F3AECu;
            // 0x3f3aec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F3AF0u;
        goto label_3f3af0;
    }
    ctx->pc = 0x3F3AE8u;
    SET_GPR_U32(ctx, 31, 0x3F3AF0u);
    ctx->pc = 0x3F3AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3AE8u;
            // 0x3f3aec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3AF0u; }
        if (ctx->pc != 0x3F3AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3AF0u; }
        if (ctx->pc != 0x3F3AF0u) { return; }
    }
    ctx->pc = 0x3F3AF0u;
label_3f3af0:
    // 0x3f3af0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f3af4:
    if (ctx->pc == 0x3F3AF4u) {
        ctx->pc = 0x3F3AF4u;
            // 0x3f3af4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3F3AF8u;
        goto label_3f3af8;
    }
    ctx->pc = 0x3F3AF0u;
    {
        const bool branch_taken_0x3f3af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3AF0u;
            // 0x3f3af4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3af0) {
            ctx->pc = 0x3F3B0Cu;
            goto label_3f3b0c;
        }
    }
    ctx->pc = 0x3F3AF8u;
label_3f3af8:
    // 0x3f3af8: 0x24a502dd  addiu       $a1, $a1, 0x2DD
    ctx->pc = 0x3f3af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 733));
label_3f3afc:
    // 0x3f3afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b00:
    // 0x3f3b00: 0xc0ee334  jal         func_3B8CD0
label_3f3b04:
    if (ctx->pc == 0x3F3B04u) {
        ctx->pc = 0x3F3B04u;
            // 0x3f3b04: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F3B08u;
        goto label_3f3b08;
    }
    ctx->pc = 0x3F3B00u;
    SET_GPR_U32(ctx, 31, 0x3F3B08u);
    ctx->pc = 0x3F3B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3B00u;
            // 0x3f3b04: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3B08u; }
        if (ctx->pc != 0x3F3B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3B08u; }
        if (ctx->pc != 0x3F3B08u) { return; }
    }
    ctx->pc = 0x3F3B08u;
label_3f3b08:
    // 0x3f3b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3b0c:
    // 0x3f3b0c: 0x3e00008  jr          $ra
label_3f3b10:
    if (ctx->pc == 0x3F3B10u) {
        ctx->pc = 0x3F3B10u;
            // 0x3f3b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3F3B14u;
        goto label_3f3b14;
    }
    ctx->pc = 0x3F3B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3B0Cu;
            // 0x3f3b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F3B14u;
label_3f3b14:
    // 0x3f3b14: 0x0  nop
    ctx->pc = 0x3f3b14u;
    // NOP
label_3f3b18:
    // 0x3f3b18: 0x0  nop
    ctx->pc = 0x3f3b18u;
    // NOP
label_3f3b1c:
    // 0x3f3b1c: 0x0  nop
    ctx->pc = 0x3f3b1cu;
    // NOP
label_3f3b20:
    // 0x3f3b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f3b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3f3b24:
    // 0x3f3b24: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x3f3b24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3f3b28:
    // 0x3f3b28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3f3b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3f3b2c:
    // 0x3f3b2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f3b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3f3b30:
    // 0x3f3b30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f3b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3f3b34:
    // 0x3f3b34: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3f3b34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b38:
    // 0x3f3b38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f3b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f3b3c:
    // 0x3f3b3c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3f3b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b40:
    // 0x3f3b40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f3b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f3b44:
    // 0x3f3b44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f3b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b48:
    // 0x3f3b48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f3b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f3b4c:
    // 0x3f3b4c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3f3b4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b50:
    // 0x3f3b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f3b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f3b54:
    // 0x3f3b54: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3f3b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b58:
    // 0x3f3b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f3b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f3b5c:
    // 0x3f3b5c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3f3b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b60:
    // 0x3f3b60: 0x102000ca  beqz        $at, . + 4 + (0xCA << 2)
label_3f3b64:
    if (ctx->pc == 0x3F3B64u) {
        ctx->pc = 0x3F3B64u;
            // 0x3f3b64: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3B68u;
        goto label_3f3b68;
    }
    ctx->pc = 0x3F3B60u;
    {
        const bool branch_taken_0x3f3b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3B60u;
            // 0x3f3b64: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3b60) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3B68u;
label_3f3b68:
    // 0x3f3b68: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3f3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3f3b6c:
    // 0x3f3b6c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3f3b70:
    // 0x3f3b70: 0x24a5a420  addiu       $a1, $a1, -0x5BE0
    ctx->pc = 0x3f3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943776));
label_3f3b74:
    // 0x3f3b74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f3b78:
    // 0x3f3b78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f3b7c:
    // 0x3f3b7c: 0x600008  jr          $v1
label_3f3b80:
    if (ctx->pc == 0x3F3B80u) {
        ctx->pc = 0x3F3B84u;
        goto label_3f3b84;
    }
    ctx->pc = 0x3F3B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F3B84u: goto label_3f3b84;
            case 0x3F3CB0u: goto label_3f3cb0;
            case 0x3F3CC8u: goto label_3f3cc8;
            case 0x3F3D00u: goto label_3f3d00;
            case 0x3F3D90u: goto label_3f3d90;
            case 0x3F3DD4u: goto label_3f3dd4;
            case 0x3F3E18u: goto label_3f3e18;
            case 0x3F3E8Cu: goto label_3f3e8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3F3B84u;
label_3f3b84:
    // 0x3f3b84: 0x8e8203d4  lw          $v0, 0x3D4($s4)
    ctx->pc = 0x3f3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 980)));
label_3f3b88:
    // 0x3f3b88: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
label_3f3b8c:
    if (ctx->pc == 0x3F3B8Cu) {
        ctx->pc = 0x3F3B8Cu;
            // 0x3f3b8c: 0x8e8203dc  lw          $v0, 0x3DC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 988)));
        ctx->pc = 0x3F3B90u;
        goto label_3f3b90;
    }
    ctx->pc = 0x3F3B88u;
    {
        const bool branch_taken_0x3f3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3b88) {
            ctx->pc = 0x3F3B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3B88u;
            // 0x3f3b8c: 0x8e8203dc  lw          $v0, 0x3DC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 988)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3C98u;
            goto label_3f3c98;
        }
    }
    ctx->pc = 0x3F3B90u;
label_3f3b90:
    // 0x3f3b90: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x3f3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_3f3b94:
    // 0x3f3b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3b98:
    // 0x3f3b98: 0xc0ee334  jal         func_3B8CD0
label_3f3b9c:
    if (ctx->pc == 0x3F3B9Cu) {
        ctx->pc = 0x3F3B9Cu;
            // 0x3f3b9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F3BA0u;
        goto label_3f3ba0;
    }
    ctx->pc = 0x3F3B98u;
    SET_GPR_U32(ctx, 31, 0x3F3BA0u);
    ctx->pc = 0x3F3B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3B98u;
            // 0x3f3b9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3BA0u; }
        if (ctx->pc != 0x3F3BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3BA0u; }
        if (ctx->pc != 0x3F3BA0u) { return; }
    }
    ctx->pc = 0x3F3BA0u;
label_3f3ba0:
    // 0x3f3ba0: 0x8e8203dc  lw          $v0, 0x3DC($s4)
    ctx->pc = 0x3f3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 988)));
label_3f3ba4:
    // 0x3f3ba4: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f3ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f3ba8:
    // 0x3f3ba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bac:
    // 0x3f3bac: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f3bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f3bb0:
    // 0x3f3bb0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3f3bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f3bb4:
    // 0x3f3bb4: 0xc0ee3b8  jal         func_3B8EE0
label_3f3bb8:
    if (ctx->pc == 0x3F3BB8u) {
        ctx->pc = 0x3F3BB8u;
            // 0x3f3bb8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3F3BBCu;
        goto label_3f3bbc;
    }
    ctx->pc = 0x3F3BB4u;
    SET_GPR_U32(ctx, 31, 0x3F3BBCu);
    ctx->pc = 0x3F3BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3BB4u;
            // 0x3f3bb8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3BBCu; }
        if (ctx->pc != 0x3F3BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3BBCu; }
        if (ctx->pc != 0x3F3BBCu) { return; }
    }
    ctx->pc = 0x3F3BBCu;
label_3f3bbc:
    // 0x3f3bbc: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3bc0:
    // 0x3f3bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bc4:
    // 0x3f3bc4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3f3bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bc8:
    // 0x3f3bc8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bcc:
    // 0x3f3bcc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3bccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bd0:
    // 0x3f3bd0: 0x24a56f20  addiu       $a1, $a1, 0x6F20
    ctx->pc = 0x3f3bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
label_3f3bd4:
    // 0x3f3bd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f3bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bd8:
    // 0x3f3bd8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3bd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3bdc:
    // 0x3f3bdc: 0xc0ee34c  jal         func_3B8D30
label_3f3be0:
    if (ctx->pc == 0x3F3BE0u) {
        ctx->pc = 0x3F3BE0u;
            // 0x3f3be0: 0x27aa00a0  addiu       $t2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3F3BE4u;
        goto label_3f3be4;
    }
    ctx->pc = 0x3F3BDCu;
    SET_GPR_U32(ctx, 31, 0x3F3BE4u);
    ctx->pc = 0x3F3BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3BDCu;
            // 0x3f3be0: 0x27aa00a0  addiu       $t2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3BE4u; }
        if (ctx->pc != 0x3F3BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3BE4u; }
        if (ctx->pc != 0x3F3BE4u) { return; }
    }
    ctx->pc = 0x3F3BE4u;
label_3f3be4:
    // 0x3f3be4: 0x522000aa  beql        $s1, $zero, . + 4 + (0xAA << 2)
label_3f3be8:
    if (ctx->pc == 0x3F3BE8u) {
        ctx->pc = 0x3F3BE8u;
            // 0x3f3be8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3F3BECu;
        goto label_3f3bec;
    }
    ctx->pc = 0x3F3BE4u;
    {
        const bool branch_taken_0x3f3be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3be4) {
            ctx->pc = 0x3F3BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3BE4u;
            // 0x3f3be8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3E90u;
            goto label_3f3e90;
        }
    }
    ctx->pc = 0x3F3BECu;
label_3f3bec:
    // 0x3f3bec: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3f3becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f3bf0:
    // 0x3f3bf0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3f3bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3bf4:
    // 0x3f3bf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f3bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3bf8:
    // 0x3f3bf8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3f3bfc:
    if (ctx->pc == 0x3F3BFCu) {
        ctx->pc = 0x3F3BFCu;
            // 0x3f3bfc: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3F3C00u;
        goto label_3f3c00;
    }
    ctx->pc = 0x3F3BF8u;
    {
        const bool branch_taken_0x3f3bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3bf8) {
            ctx->pc = 0x3F3BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3BF8u;
            // 0x3f3bfc: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3C04u;
            goto label_3f3c04;
        }
    }
    ctx->pc = 0x3F3C00u;
label_3f3c00:
    // 0x3f3c00: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3f3c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3c04:
    // 0x3f3c04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3f3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c08:
    // 0x3f3c08: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3f3c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3f3c0c:
    // 0x3f3c0c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3f3c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f3c10:
    // 0x3f3c10: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3f3c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c14:
    // 0x3f3c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f3c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3c18:
    // 0x3f3c18: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_3f3c1c:
    if (ctx->pc == 0x3F3C1Cu) {
        ctx->pc = 0x3F3C1Cu;
            // 0x3f3c1c: 0x27a300a4  addiu       $v1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->pc = 0x3F3C20u;
        goto label_3f3c20;
    }
    ctx->pc = 0x3F3C18u;
    {
        const bool branch_taken_0x3f3c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3c18) {
            ctx->pc = 0x3F3C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3C18u;
            // 0x3f3c1c: 0x27a300a4  addiu       $v1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3C24u;
            goto label_3f3c24;
        }
    }
    ctx->pc = 0x3F3C20u;
label_3f3c20:
    // 0x3f3c20: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x3f3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3f3c24:
    // 0x3f3c24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3f3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c28:
    // 0x3f3c28: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3f3c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3f3c2c:
    // 0x3f3c2c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x3f3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f3c30:
    // 0x3f3c30: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3f3c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f3c34:
    // 0x3f3c34: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x3f3c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c38:
    // 0x3f3c38: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3f3c38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3f3c3c:
    // 0x3f3c3c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3f3c3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f3c40:
    // 0x3f3c40: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x3f3c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3f3c44:
    // 0x3f3c44: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3f3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c48:
    // 0x3f3c48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f3c48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3c4c:
    // 0x3f3c4c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3f3c50:
    if (ctx->pc == 0x3F3C50u) {
        ctx->pc = 0x3F3C50u;
            // 0x3f3c50: 0x27a300bc  addiu       $v1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->pc = 0x3F3C54u;
        goto label_3f3c54;
    }
    ctx->pc = 0x3F3C4Cu;
    {
        const bool branch_taken_0x3f3c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3c4c) {
            ctx->pc = 0x3F3C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3C4Cu;
            // 0x3f3c50: 0x27a300bc  addiu       $v1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3C58u;
            goto label_3f3c58;
        }
    }
    ctx->pc = 0x3F3C54u;
label_3f3c54:
    // 0x3f3c54: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3f3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3f3c58:
    // 0x3f3c58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3f3c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c5c:
    // 0x3f3c5c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3f3c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3f3c60:
    // 0x3f3c60: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3f3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f3c64:
    // 0x3f3c64: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3f3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f3c68:
    // 0x3f3c68: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x3f3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c6c:
    // 0x3f3c6c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3f3c6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3f3c70:
    // 0x3f3c70: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3f3c70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f3c74:
    // 0x3f3c74: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3f3c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3f3c78:
    // 0x3f3c78: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3f3c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c7c:
    // 0x3f3c7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f3c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f3c80:
    // 0x3f3c80: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3f3c84:
    if (ctx->pc == 0x3F3C84u) {
        ctx->pc = 0x3F3C84u;
            // 0x3f3c84: 0x27a300b8  addiu       $v1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->pc = 0x3F3C88u;
        goto label_3f3c88;
    }
    ctx->pc = 0x3F3C80u;
    {
        const bool branch_taken_0x3f3c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3c80) {
            ctx->pc = 0x3F3C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3C80u;
            // 0x3f3c84: 0x27a300b8  addiu       $v1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3C8Cu;
            goto label_3f3c8c;
        }
    }
    ctx->pc = 0x3F3C88u;
label_3f3c88:
    // 0x3f3c88: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x3f3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3f3c8c:
    // 0x3f3c8c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3f3c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3c90:
    // 0x3f3c90: 0x1000007e  b           . + 4 + (0x7E << 2)
label_3f3c94:
    if (ctx->pc == 0x3F3C94u) {
        ctx->pc = 0x3F3C94u;
            // 0x3f3c94: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->pc = 0x3F3C98u;
        goto label_3f3c98;
    }
    ctx->pc = 0x3F3C90u;
    {
        const bool branch_taken_0x3f3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3C90u;
            // 0x3f3c94: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3c90) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3C98u;
label_3f3c98:
    // 0x3f3c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3c9c:
    // 0x3f3c9c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f3c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f3ca0:
    // 0x3f3ca0: 0xc0ee334  jal         func_3B8CD0
label_3f3ca4:
    if (ctx->pc == 0x3F3CA4u) {
        ctx->pc = 0x3F3CA4u;
            // 0x3f3ca4: 0x24450042  addiu       $a1, $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 66));
        ctx->pc = 0x3F3CA8u;
        goto label_3f3ca8;
    }
    ctx->pc = 0x3F3CA0u;
    SET_GPR_U32(ctx, 31, 0x3F3CA8u);
    ctx->pc = 0x3F3CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3CA0u;
            // 0x3f3ca4: 0x24450042  addiu       $a1, $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3CA8u; }
        if (ctx->pc != 0x3F3CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3CA8u; }
        if (ctx->pc != 0x3F3CA8u) { return; }
    }
    ctx->pc = 0x3F3CA8u;
label_3f3ca8:
    // 0x3f3ca8: 0x10000078  b           . + 4 + (0x78 << 2)
label_3f3cac:
    if (ctx->pc == 0x3F3CACu) {
        ctx->pc = 0x3F3CB0u;
        goto label_3f3cb0;
    }
    ctx->pc = 0x3F3CA8u;
    {
        const bool branch_taken_0x3f3ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3ca8) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3CB0u;
label_3f3cb0:
    // 0x3f3cb0: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x3f3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_3f3cb4:
    // 0x3f3cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3cb8:
    // 0x3f3cb8: 0xc0ee334  jal         func_3B8CD0
label_3f3cbc:
    if (ctx->pc == 0x3F3CBCu) {
        ctx->pc = 0x3F3CBCu;
            // 0x3f3cbc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F3CC0u;
        goto label_3f3cc0;
    }
    ctx->pc = 0x3F3CB8u;
    SET_GPR_U32(ctx, 31, 0x3F3CC0u);
    ctx->pc = 0x3F3CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3CB8u;
            // 0x3f3cbc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3CC0u; }
        if (ctx->pc != 0x3F3CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3CC0u; }
        if (ctx->pc != 0x3F3CC0u) { return; }
    }
    ctx->pc = 0x3F3CC0u;
label_3f3cc0:
    // 0x3f3cc0: 0x10000072  b           . + 4 + (0x72 << 2)
label_3f3cc4:
    if (ctx->pc == 0x3F3CC4u) {
        ctx->pc = 0x3F3CC8u;
        goto label_3f3cc8;
    }
    ctx->pc = 0x3F3CC0u;
    {
        const bool branch_taken_0x3f3cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3cc0) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3CC8u;
label_3f3cc8:
    // 0x3f3cc8: 0x8e8203d4  lw          $v0, 0x3D4($s4)
    ctx->pc = 0x3f3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 980)));
label_3f3ccc:
    // 0x3f3ccc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_3f3cd0:
    if (ctx->pc == 0x3F3CD0u) {
        ctx->pc = 0x3F3CD0u;
            // 0x3f3cd0: 0x24050056  addiu       $a1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->pc = 0x3F3CD4u;
        goto label_3f3cd4;
    }
    ctx->pc = 0x3F3CCCu;
    {
        const bool branch_taken_0x3f3ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3ccc) {
            ctx->pc = 0x3F3CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3CCCu;
            // 0x3f3cd0: 0x24050056  addiu       $a1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3CD8u;
            goto label_3f3cd8;
        }
    }
    ctx->pc = 0x3F3CD4u;
label_3f3cd4:
    // 0x3f3cd4: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x3f3cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_3f3cd8:
    // 0x3f3cd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3cdc:
    // 0x3f3cdc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ce0:
    // 0x3f3ce0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ce4:
    // 0x3f3ce4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3ce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ce8:
    // 0x3f3ce8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3ce8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3cec:
    // 0x3f3cec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f3cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3cf0:
    // 0x3f3cf0: 0xc0ee334  jal         func_3B8CD0
label_3f3cf4:
    if (ctx->pc == 0x3F3CF4u) {
        ctx->pc = 0x3F3CF4u;
            // 0x3f3cf4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3F3CF8u;
        goto label_3f3cf8;
    }
    ctx->pc = 0x3F3CF0u;
    SET_GPR_U32(ctx, 31, 0x3F3CF8u);
    ctx->pc = 0x3F3CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3CF0u;
            // 0x3f3cf4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3CF8u; }
        if (ctx->pc != 0x3F3CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3CF8u; }
        if (ctx->pc != 0x3F3CF8u) { return; }
    }
    ctx->pc = 0x3F3CF8u;
label_3f3cf8:
    // 0x3f3cf8: 0x10000064  b           . + 4 + (0x64 << 2)
label_3f3cfc:
    if (ctx->pc == 0x3F3CFCu) {
        ctx->pc = 0x3F3D00u;
        goto label_3f3d00;
    }
    ctx->pc = 0x3F3CF8u;
    {
        const bool branch_taken_0x3f3cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3cf8) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3D00u;
label_3f3d00:
    // 0x3f3d00: 0x8e8203d4  lw          $v0, 0x3D4($s4)
    ctx->pc = 0x3f3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 980)));
label_3f3d04:
    // 0x3f3d04: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3f3d08:
    if (ctx->pc == 0x3F3D08u) {
        ctx->pc = 0x3F3D08u;
            // 0x3f3d08: 0x8e8503d0  lw          $a1, 0x3D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 976)));
        ctx->pc = 0x3F3D0Cu;
        goto label_3f3d0c;
    }
    ctx->pc = 0x3F3D04u;
    {
        const bool branch_taken_0x3f3d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d04) {
            ctx->pc = 0x3F3D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3D04u;
            // 0x3f3d08: 0x8e8503d0  lw          $a1, 0x3D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 976)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3D50u;
            goto label_3f3d50;
        }
    }
    ctx->pc = 0x3F3D0Cu;
label_3f3d0c:
    // 0x3f3d0c: 0x8e8503cc  lw          $a1, 0x3CC($s4)
    ctx->pc = 0x3f3d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 972)));
label_3f3d10:
    // 0x3f3d10: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f3d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f3d14:
    // 0x3f3d14: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f3d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f3d18:
    // 0x3f3d18: 0xc0ee3b8  jal         func_3B8EE0
label_3f3d1c:
    if (ctx->pc == 0x3F3D1Cu) {
        ctx->pc = 0x3F3D1Cu;
            // 0x3f3d1c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F3D20u;
        goto label_3f3d20;
    }
    ctx->pc = 0x3F3D18u;
    SET_GPR_U32(ctx, 31, 0x3F3D20u);
    ctx->pc = 0x3F3D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3D18u;
            // 0x3f3d1c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D20u; }
        if (ctx->pc != 0x3F3D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D20u; }
        if (ctx->pc != 0x3F3D20u) { return; }
    }
    ctx->pc = 0x3F3D20u;
label_3f3d20:
    // 0x3f3d20: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3d24:
    // 0x3f3d24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d28:
    // 0x3f3d28: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3f3d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d2c:
    // 0x3f3d2c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3f3d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d30:
    // 0x3f3d30: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3d30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d34:
    // 0x3f3d34: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d38:
    // 0x3f3d38: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d3c:
    // 0x3f3d3c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3d3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d40:
    // 0x3f3d40: 0xc0ee34c  jal         func_3B8D30
label_3f3d44:
    if (ctx->pc == 0x3F3D44u) {
        ctx->pc = 0x3F3D44u;
            // 0x3f3d44: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->pc = 0x3F3D48u;
        goto label_3f3d48;
    }
    ctx->pc = 0x3F3D40u;
    SET_GPR_U32(ctx, 31, 0x3F3D48u);
    ctx->pc = 0x3F3D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3D40u;
            // 0x3f3d44: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D48u; }
        if (ctx->pc != 0x3F3D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D48u; }
        if (ctx->pc != 0x3F3D48u) { return; }
    }
    ctx->pc = 0x3F3D48u;
label_3f3d48:
    // 0x3f3d48: 0x10000050  b           . + 4 + (0x50 << 2)
label_3f3d4c:
    if (ctx->pc == 0x3F3D4Cu) {
        ctx->pc = 0x3F3D50u;
        goto label_3f3d50;
    }
    ctx->pc = 0x3F3D48u;
    {
        const bool branch_taken_0x3f3d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d48) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3D50u;
label_3f3d50:
    // 0x3f3d50: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f3d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f3d54:
    // 0x3f3d54: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f3d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f3d58:
    // 0x3f3d58: 0xc0ee3b8  jal         func_3B8EE0
label_3f3d5c:
    if (ctx->pc == 0x3F3D5Cu) {
        ctx->pc = 0x3F3D5Cu;
            // 0x3f3d5c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F3D60u;
        goto label_3f3d60;
    }
    ctx->pc = 0x3F3D58u;
    SET_GPR_U32(ctx, 31, 0x3F3D60u);
    ctx->pc = 0x3F3D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3D58u;
            // 0x3f3d5c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D60u; }
        if (ctx->pc != 0x3F3D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D60u; }
        if (ctx->pc != 0x3F3D60u) { return; }
    }
    ctx->pc = 0x3F3D60u;
label_3f3d60:
    // 0x3f3d60: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3d64:
    // 0x3f3d64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d68:
    // 0x3f3d68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3f3d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d6c:
    // 0x3f3d6c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3f3d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d70:
    // 0x3f3d70: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d74:
    // 0x3f3d74: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d78:
    // 0x3f3d78: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d7c:
    // 0x3f3d7c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3d7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3d80:
    // 0x3f3d80: 0xc0ee34c  jal         func_3B8D30
label_3f3d84:
    if (ctx->pc == 0x3F3D84u) {
        ctx->pc = 0x3F3D84u;
            // 0x3f3d84: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->pc = 0x3F3D88u;
        goto label_3f3d88;
    }
    ctx->pc = 0x3F3D80u;
    SET_GPR_U32(ctx, 31, 0x3F3D88u);
    ctx->pc = 0x3F3D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3D80u;
            // 0x3f3d84: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D88u; }
        if (ctx->pc != 0x3F3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3D88u; }
        if (ctx->pc != 0x3F3D88u) { return; }
    }
    ctx->pc = 0x3F3D88u;
label_3f3d88:
    // 0x3f3d88: 0x10000040  b           . + 4 + (0x40 << 2)
label_3f3d8c:
    if (ctx->pc == 0x3F3D8Cu) {
        ctx->pc = 0x3F3D90u;
        goto label_3f3d90;
    }
    ctx->pc = 0x3F3D88u;
    {
        const bool branch_taken_0x3f3d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d88) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3D90u;
label_3f3d90:
    // 0x3f3d90: 0x8e8503cc  lw          $a1, 0x3CC($s4)
    ctx->pc = 0x3f3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 972)));
label_3f3d94:
    // 0x3f3d94: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f3d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f3d98:
    // 0x3f3d98: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f3d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f3d9c:
    // 0x3f3d9c: 0xc0ee3b8  jal         func_3B8EE0
label_3f3da0:
    if (ctx->pc == 0x3F3DA0u) {
        ctx->pc = 0x3F3DA0u;
            // 0x3f3da0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F3DA4u;
        goto label_3f3da4;
    }
    ctx->pc = 0x3F3D9Cu;
    SET_GPR_U32(ctx, 31, 0x3F3DA4u);
    ctx->pc = 0x3F3DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3D9Cu;
            // 0x3f3da0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3DA4u; }
        if (ctx->pc != 0x3F3DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3DA4u; }
        if (ctx->pc != 0x3F3DA4u) { return; }
    }
    ctx->pc = 0x3F3DA4u;
label_3f3da4:
    // 0x3f3da4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3da8:
    // 0x3f3da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3dac:
    // 0x3f3dac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3f3dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3db0:
    // 0x3f3db0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3f3db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3db4:
    // 0x3f3db4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3db8:
    // 0x3f3db8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3dbc:
    // 0x3f3dbc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3dbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3dc0:
    // 0x3f3dc0: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3dc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3dc4:
    // 0x3f3dc4: 0xc0ee34c  jal         func_3B8D30
label_3f3dc8:
    if (ctx->pc == 0x3F3DC8u) {
        ctx->pc = 0x3F3DC8u;
            // 0x3f3dc8: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->pc = 0x3F3DCCu;
        goto label_3f3dcc;
    }
    ctx->pc = 0x3F3DC4u;
    SET_GPR_U32(ctx, 31, 0x3F3DCCu);
    ctx->pc = 0x3F3DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3DC4u;
            // 0x3f3dc8: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3DCCu; }
        if (ctx->pc != 0x3F3DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3DCCu; }
        if (ctx->pc != 0x3F3DCCu) { return; }
    }
    ctx->pc = 0x3F3DCCu;
label_3f3dcc:
    // 0x3f3dcc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3f3dd0:
    if (ctx->pc == 0x3F3DD0u) {
        ctx->pc = 0x3F3DD4u;
        goto label_3f3dd4;
    }
    ctx->pc = 0x3F3DCCu;
    {
        const bool branch_taken_0x3f3dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3dcc) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3DD4u;
label_3f3dd4:
    // 0x3f3dd4: 0x8e8503d0  lw          $a1, 0x3D0($s4)
    ctx->pc = 0x3f3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 976)));
label_3f3dd8:
    // 0x3f3dd8: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3f3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3f3ddc:
    // 0x3f3ddc: 0x24c66f20  addiu       $a2, $a2, 0x6F20
    ctx->pc = 0x3f3ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_3f3de0:
    // 0x3f3de0: 0xc0ee3b8  jal         func_3B8EE0
label_3f3de4:
    if (ctx->pc == 0x3F3DE4u) {
        ctx->pc = 0x3F3DE4u;
            // 0x3f3de4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3F3DE8u;
        goto label_3f3de8;
    }
    ctx->pc = 0x3F3DE0u;
    SET_GPR_U32(ctx, 31, 0x3F3DE8u);
    ctx->pc = 0x3F3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3DE0u;
            // 0x3f3de4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8EE0u;
    if (runtime->hasFunction(0x3B8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3DE8u; }
        if (ctx->pc != 0x3F3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8EE0_0x3b8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3DE8u; }
        if (ctx->pc != 0x3F3DE8u) { return; }
    }
    ctx->pc = 0x3F3DE8u;
label_3f3de8:
    // 0x3f3de8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f3dec:
    // 0x3f3dec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3df0:
    // 0x3f3df0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3f3df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3df4:
    // 0x3f3df4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3f3df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3df8:
    // 0x3f3df8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3dfc:
    // 0x3f3dfc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3dfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e00:
    // 0x3f3e00: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3e00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e04:
    // 0x3f3e04: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3e04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e08:
    // 0x3f3e08: 0xc0ee34c  jal         func_3B8D30
label_3f3e0c:
    if (ctx->pc == 0x3F3E0Cu) {
        ctx->pc = 0x3F3E0Cu;
            // 0x3f3e0c: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->pc = 0x3F3E10u;
        goto label_3f3e10;
    }
    ctx->pc = 0x3F3E08u;
    SET_GPR_U32(ctx, 31, 0x3F3E10u);
    ctx->pc = 0x3F3E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3E08u;
            // 0x3f3e0c: 0x24a56f20  addiu       $a1, $a1, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E10u; }
        if (ctx->pc != 0x3F3E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E10u; }
        if (ctx->pc != 0x3F3E10u) { return; }
    }
    ctx->pc = 0x3F3E10u;
label_3f3e10:
    // 0x3f3e10: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3f3e14:
    if (ctx->pc == 0x3F3E14u) {
        ctx->pc = 0x3F3E18u;
        goto label_3f3e18;
    }
    ctx->pc = 0x3F3E10u;
    {
        const bool branch_taken_0x3f3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3e10) {
            ctx->pc = 0x3F3E8Cu;
            goto label_3f3e8c;
        }
    }
    ctx->pc = 0x3F3E18u;
label_3f3e18:
    // 0x3f3e18: 0xa7a00094  sh          $zero, 0x94($sp)
    ctx->pc = 0x3f3e18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 0));
label_3f3e1c:
    // 0x3f3e1c: 0x8e8503ec  lw          $a1, 0x3EC($s4)
    ctx->pc = 0x3f3e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1004)));
label_3f3e20:
    // 0x3f3e20: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
label_3f3e24:
    if (ctx->pc == 0x3F3E24u) {
        ctx->pc = 0x3F3E24u;
            // 0x3f3e24: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3F3E28u;
        goto label_3f3e28;
    }
    ctx->pc = 0x3F3E20u;
    {
        const bool branch_taken_0x3f3e20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3e20) {
            ctx->pc = 0x3F3E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3E20u;
            // 0x3f3e24: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3E50u;
            goto label_3f3e50;
        }
    }
    ctx->pc = 0x3F3E28u;
label_3f3e28:
    // 0x3f3e28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f3e2c:
    // 0x3f3e2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f3e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f3e30:
    // 0x3f3e30: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x3f3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_3f3e34:
    // 0x3f3e34: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3f3e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3f3e38:
    // 0x3f3e38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3f3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f3e3c:
    // 0x3f3e3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3f3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f3e40:
    // 0x3f3e40: 0xc04a508  jal         func_129420
label_3f3e44:
    if (ctx->pc == 0x3F3E44u) {
        ctx->pc = 0x3F3E44u;
            // 0x3f3e44: 0x24450410  addiu       $a1, $v0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
        ctx->pc = 0x3F3E48u;
        goto label_3f3e48;
    }
    ctx->pc = 0x3F3E40u;
    SET_GPR_U32(ctx, 31, 0x3F3E48u);
    ctx->pc = 0x3F3E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3E40u;
            // 0x3f3e44: 0x24450410  addiu       $a1, $v0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E48u; }
        if (ctx->pc != 0x3F3E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E48u; }
        if (ctx->pc != 0x3F3E48u) { return; }
    }
    ctx->pc = 0x3F3E48u;
label_3f3e48:
    // 0x3f3e48: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f3e4c:
    if (ctx->pc == 0x3F3E4Cu) {
        ctx->pc = 0x3F3E4Cu;
            // 0x3f3e4c: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E50u;
        goto label_3f3e50;
    }
    ctx->pc = 0x3F3E48u;
    {
        const bool branch_taken_0x3f3e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3E48u;
            // 0x3f3e4c: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e48) {
            ctx->pc = 0x3F3E5Cu;
            goto label_3f3e5c;
        }
    }
    ctx->pc = 0x3F3E50u;
label_3f3e50:
    // 0x3f3e50: 0xc04a508  jal         func_129420
label_3f3e54:
    if (ctx->pc == 0x3F3E54u) {
        ctx->pc = 0x3F3E54u;
            // 0x3f3e54: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3F3E58u;
        goto label_3f3e58;
    }
    ctx->pc = 0x3F3E50u;
    SET_GPR_U32(ctx, 31, 0x3F3E58u);
    ctx->pc = 0x3F3E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3E50u;
            // 0x3f3e54: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E58u; }
        if (ctx->pc != 0x3F3E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E58u; }
        if (ctx->pc != 0x3F3E58u) { return; }
    }
    ctx->pc = 0x3F3E58u;
label_3f3e58:
    // 0x3f3e58: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3e58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e5c:
    // 0x3f3e5c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3f3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f3e60:
    // 0x3f3e60: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x3f3e60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3f3e64:
    // 0x3f3e64: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3f3e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e68:
    // 0x3f3e68: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3f3e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e6c:
    // 0x3f3e6c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e70:
    // 0x3f3e70: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3e70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e74:
    // 0x3f3e74: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3e74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e78:
    // 0x3f3e78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f3e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e7c:
    // 0x3f3e7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3f3e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f3e80:
    // 0x3f3e80: 0xc0ee34c  jal         func_3B8D30
label_3f3e84:
    if (ctx->pc == 0x3F3E84u) {
        ctx->pc = 0x3F3E84u;
            // 0x3f3e84: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x3F3E88u;
        goto label_3f3e88;
    }
    ctx->pc = 0x3F3E80u;
    SET_GPR_U32(ctx, 31, 0x3F3E88u);
    ctx->pc = 0x3F3E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3E80u;
            // 0x3f3e84: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E88u; }
        if (ctx->pc != 0x3F3E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3E88u; }
        if (ctx->pc != 0x3F3E88u) { return; }
    }
    ctx->pc = 0x3F3E88u;
label_3f3e88:
    // 0x3f3e88: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x3f3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_3f3e8c:
    // 0x3f3e8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3f3e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3f3e90:
    // 0x3f3e90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f3e90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f3e94:
    // 0x3f3e94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f3e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f3e98:
    // 0x3f3e98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f3e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f3e9c:
    // 0x3f3e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f3e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3ea0:
    // 0x3f3ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f3ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3ea4:
    // 0x3f3ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f3ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f3ea8:
    // 0x3f3ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f3ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3eac:
    // 0x3f3eac: 0x3e00008  jr          $ra
label_3f3eb0:
    if (ctx->pc == 0x3F3EB0u) {
        ctx->pc = 0x3F3EB0u;
            // 0x3f3eb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3F3EB4u;
        goto label_3f3eb4;
    }
    ctx->pc = 0x3F3EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3EACu;
            // 0x3f3eb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F3EB4u;
label_3f3eb4:
    // 0x3f3eb4: 0x0  nop
    ctx->pc = 0x3f3eb4u;
    // NOP
label_3f3eb8:
    // 0x3f3eb8: 0x0  nop
    ctx->pc = 0x3f3eb8u;
    // NOP
label_3f3ebc:
    // 0x3f3ebc: 0x0  nop
    ctx->pc = 0x3f3ebcu;
    // NOP
label_3f3ec0:
    // 0x3f3ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f3ec4:
    // 0x3f3ec4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3f3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3f3ec8:
    // 0x3f3ec8: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_3f3ecc:
    if (ctx->pc == 0x3F3ECCu) {
        ctx->pc = 0x3F3ECCu;
            // 0x3f3ecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x3F3ED0u;
        goto label_3f3ed0;
    }
    ctx->pc = 0x3F3EC8u;
    {
        const bool branch_taken_0x3f3ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3EC8u;
            // 0x3f3ecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ec8) {
            ctx->pc = 0x3F3F48u;
            goto label_3f3f48;
        }
    }
    ctx->pc = 0x3F3ED0u;
label_3f3ed0:
    // 0x3f3ed0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3f3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f3ed4:
    // 0x3f3ed4: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
label_3f3ed8:
    if (ctx->pc == 0x3F3ED8u) {
        ctx->pc = 0x3F3ED8u;
            // 0x3f3ed8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3EDCu;
        goto label_3f3edc;
    }
    ctx->pc = 0x3F3ED4u;
    {
        const bool branch_taken_0x3f3ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3ed4) {
            ctx->pc = 0x3F3ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3ED4u;
            // 0x3f3ed8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3F1Cu;
            goto label_3f3f1c;
        }
    }
    ctx->pc = 0x3F3EDCu;
label_3f3edc:
    // 0x3f3edc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3f3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3f3ee0:
    // 0x3f3ee0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3f3ee4:
    if (ctx->pc == 0x3F3EE4u) {
        ctx->pc = 0x3F3EE4u;
            // 0x3f3ee4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F3EE8u;
        goto label_3f3ee8;
    }
    ctx->pc = 0x3F3EE0u;
    {
        const bool branch_taken_0x3f3ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3ee0) {
            ctx->pc = 0x3F3EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3EE0u;
            // 0x3f3ee4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3EF0u;
            goto label_3f3ef0;
        }
    }
    ctx->pc = 0x3F3EE8u;
label_3f3ee8:
    // 0x3f3ee8: 0x10000022  b           . + 4 + (0x22 << 2)
label_3f3eec:
    if (ctx->pc == 0x3F3EECu) {
        ctx->pc = 0x3F3EECu;
            // 0x3f3eec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3F3EF0u;
        goto label_3f3ef0;
    }
    ctx->pc = 0x3F3EE8u;
    {
        const bool branch_taken_0x3f3ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3EE8u;
            // 0x3f3eec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ee8) {
            ctx->pc = 0x3F3F74u;
            goto label_3f3f74;
        }
    }
    ctx->pc = 0x3F3EF0u;
label_3f3ef0:
    // 0x3f3ef0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3f3ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3f3ef4:
    // 0x3f3ef4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3f3ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f3ef8:
    // 0x3f3ef8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3f3ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f3efc:
    // 0x3f3efc: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3f3efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f00:
    // 0x3f3f00: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x3f3f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_3f3f04:
    // 0x3f3f04: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3f3f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f08:
    // 0x3f3f08: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x3f3f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f0c:
    // 0x3f3f0c: 0x320f809  jalr        $t9
label_3f3f10:
    if (ctx->pc == 0x3F3F10u) {
        ctx->pc = 0x3F3F10u;
            // 0x3f3f10: 0x8fab0010  lw          $t3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F3F14u;
        goto label_3f3f14;
    }
    ctx->pc = 0x3F3F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F3F14u);
        ctx->pc = 0x3F3F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3F0Cu;
            // 0x3f3f10: 0x8fab0010  lw          $t3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F3F14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F3F14u; }
            if (ctx->pc != 0x3F3F14u) { return; }
        }
        }
    }
    ctx->pc = 0x3F3F14u;
label_3f3f14:
    // 0x3f3f14: 0x10000016  b           . + 4 + (0x16 << 2)
label_3f3f18:
    if (ctx->pc == 0x3F3F18u) {
        ctx->pc = 0x3F3F1Cu;
        goto label_3f3f1c;
    }
    ctx->pc = 0x3F3F14u;
    {
        const bool branch_taken_0x3f3f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3f14) {
            ctx->pc = 0x3F3F70u;
            goto label_3f3f70;
        }
    }
    ctx->pc = 0x3F3F1Cu;
label_3f3f1c:
    // 0x3f3f1c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3f3f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3f3f20:
    // 0x3f3f20: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3f3f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f24:
    // 0x3f3f24: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3f3f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f28:
    // 0x3f3f28: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3f3f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f2c:
    // 0x3f3f2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3f3f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3f3f30:
    // 0x3f3f30: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3f3f30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f34:
    // 0x3f3f34: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x3f3f34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f38:
    // 0x3f3f38: 0x320f809  jalr        $t9
label_3f3f3c:
    if (ctx->pc == 0x3F3F3Cu) {
        ctx->pc = 0x3F3F3Cu;
            // 0x3f3f3c: 0x8fab0010  lw          $t3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F3F40u;
        goto label_3f3f40;
    }
    ctx->pc = 0x3F3F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F3F40u);
        ctx->pc = 0x3F3F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3F38u;
            // 0x3f3f3c: 0x8fab0010  lw          $t3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F3F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F3F40u; }
            if (ctx->pc != 0x3F3F40u) { return; }
        }
        }
    }
    ctx->pc = 0x3F3F40u;
label_3f3f40:
    // 0x3f3f40: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f3f44:
    if (ctx->pc == 0x3F3F44u) {
        ctx->pc = 0x3F3F48u;
        goto label_3f3f48;
    }
    ctx->pc = 0x3F3F40u;
    {
        const bool branch_taken_0x3f3f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3f40) {
            ctx->pc = 0x3F3F70u;
            goto label_3f3f70;
        }
    }
    ctx->pc = 0x3F3F48u;
label_3f3f48:
    // 0x3f3f48: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3f3f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f4c:
    // 0x3f3f4c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3f3f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3f3f50:
    // 0x3f3f50: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3f3f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f54:
    // 0x3f3f54: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3f3f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f58:
    // 0x3f3f58: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3f3f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f5c:
    // 0x3f3f5c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f3f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f3f60:
    // 0x3f3f60: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3f3f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f64:
    // 0x3f3f64: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x3f3f64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3f3f68:
    // 0x3f3f68: 0x320f809  jalr        $t9
label_3f3f6c:
    if (ctx->pc == 0x3F3F6Cu) {
        ctx->pc = 0x3F3F6Cu;
            // 0x3f3f6c: 0x8fab0010  lw          $t3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F3F70u;
        goto label_3f3f70;
    }
    ctx->pc = 0x3F3F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F3F70u);
        ctx->pc = 0x3F3F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3F68u;
            // 0x3f3f6c: 0x8fab0010  lw          $t3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F3F70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F3F70u; }
            if (ctx->pc != 0x3F3F70u) { return; }
        }
        }
    }
    ctx->pc = 0x3F3F70u;
label_3f3f70:
    // 0x3f3f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3f74:
    // 0x3f3f74: 0x3e00008  jr          $ra
label_3f3f78:
    if (ctx->pc == 0x3F3F78u) {
        ctx->pc = 0x3F3F78u;
            // 0x3f3f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3F3F7Cu;
        goto label_3f3f7c;
    }
    ctx->pc = 0x3F3F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3F74u;
            // 0x3f3f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F3F7Cu;
label_3f3f7c:
    // 0x3f3f7c: 0x0  nop
    ctx->pc = 0x3f3f7cu;
    // NOP
}
