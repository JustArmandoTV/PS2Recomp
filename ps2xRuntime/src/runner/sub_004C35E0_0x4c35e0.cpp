#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C35E0
// Address: 0x4c35e0 - 0x4c3e20
void sub_004C35E0_0x4c35e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C35E0_0x4c35e0");
#endif

    switch (ctx->pc) {
        case 0x4c35e0u: goto label_4c35e0;
        case 0x4c35e4u: goto label_4c35e4;
        case 0x4c35e8u: goto label_4c35e8;
        case 0x4c35ecu: goto label_4c35ec;
        case 0x4c35f0u: goto label_4c35f0;
        case 0x4c35f4u: goto label_4c35f4;
        case 0x4c35f8u: goto label_4c35f8;
        case 0x4c35fcu: goto label_4c35fc;
        case 0x4c3600u: goto label_4c3600;
        case 0x4c3604u: goto label_4c3604;
        case 0x4c3608u: goto label_4c3608;
        case 0x4c360cu: goto label_4c360c;
        case 0x4c3610u: goto label_4c3610;
        case 0x4c3614u: goto label_4c3614;
        case 0x4c3618u: goto label_4c3618;
        case 0x4c361cu: goto label_4c361c;
        case 0x4c3620u: goto label_4c3620;
        case 0x4c3624u: goto label_4c3624;
        case 0x4c3628u: goto label_4c3628;
        case 0x4c362cu: goto label_4c362c;
        case 0x4c3630u: goto label_4c3630;
        case 0x4c3634u: goto label_4c3634;
        case 0x4c3638u: goto label_4c3638;
        case 0x4c363cu: goto label_4c363c;
        case 0x4c3640u: goto label_4c3640;
        case 0x4c3644u: goto label_4c3644;
        case 0x4c3648u: goto label_4c3648;
        case 0x4c364cu: goto label_4c364c;
        case 0x4c3650u: goto label_4c3650;
        case 0x4c3654u: goto label_4c3654;
        case 0x4c3658u: goto label_4c3658;
        case 0x4c365cu: goto label_4c365c;
        case 0x4c3660u: goto label_4c3660;
        case 0x4c3664u: goto label_4c3664;
        case 0x4c3668u: goto label_4c3668;
        case 0x4c366cu: goto label_4c366c;
        case 0x4c3670u: goto label_4c3670;
        case 0x4c3674u: goto label_4c3674;
        case 0x4c3678u: goto label_4c3678;
        case 0x4c367cu: goto label_4c367c;
        case 0x4c3680u: goto label_4c3680;
        case 0x4c3684u: goto label_4c3684;
        case 0x4c3688u: goto label_4c3688;
        case 0x4c368cu: goto label_4c368c;
        case 0x4c3690u: goto label_4c3690;
        case 0x4c3694u: goto label_4c3694;
        case 0x4c3698u: goto label_4c3698;
        case 0x4c369cu: goto label_4c369c;
        case 0x4c36a0u: goto label_4c36a0;
        case 0x4c36a4u: goto label_4c36a4;
        case 0x4c36a8u: goto label_4c36a8;
        case 0x4c36acu: goto label_4c36ac;
        case 0x4c36b0u: goto label_4c36b0;
        case 0x4c36b4u: goto label_4c36b4;
        case 0x4c36b8u: goto label_4c36b8;
        case 0x4c36bcu: goto label_4c36bc;
        case 0x4c36c0u: goto label_4c36c0;
        case 0x4c36c4u: goto label_4c36c4;
        case 0x4c36c8u: goto label_4c36c8;
        case 0x4c36ccu: goto label_4c36cc;
        case 0x4c36d0u: goto label_4c36d0;
        case 0x4c36d4u: goto label_4c36d4;
        case 0x4c36d8u: goto label_4c36d8;
        case 0x4c36dcu: goto label_4c36dc;
        case 0x4c36e0u: goto label_4c36e0;
        case 0x4c36e4u: goto label_4c36e4;
        case 0x4c36e8u: goto label_4c36e8;
        case 0x4c36ecu: goto label_4c36ec;
        case 0x4c36f0u: goto label_4c36f0;
        case 0x4c36f4u: goto label_4c36f4;
        case 0x4c36f8u: goto label_4c36f8;
        case 0x4c36fcu: goto label_4c36fc;
        case 0x4c3700u: goto label_4c3700;
        case 0x4c3704u: goto label_4c3704;
        case 0x4c3708u: goto label_4c3708;
        case 0x4c370cu: goto label_4c370c;
        case 0x4c3710u: goto label_4c3710;
        case 0x4c3714u: goto label_4c3714;
        case 0x4c3718u: goto label_4c3718;
        case 0x4c371cu: goto label_4c371c;
        case 0x4c3720u: goto label_4c3720;
        case 0x4c3724u: goto label_4c3724;
        case 0x4c3728u: goto label_4c3728;
        case 0x4c372cu: goto label_4c372c;
        case 0x4c3730u: goto label_4c3730;
        case 0x4c3734u: goto label_4c3734;
        case 0x4c3738u: goto label_4c3738;
        case 0x4c373cu: goto label_4c373c;
        case 0x4c3740u: goto label_4c3740;
        case 0x4c3744u: goto label_4c3744;
        case 0x4c3748u: goto label_4c3748;
        case 0x4c374cu: goto label_4c374c;
        case 0x4c3750u: goto label_4c3750;
        case 0x4c3754u: goto label_4c3754;
        case 0x4c3758u: goto label_4c3758;
        case 0x4c375cu: goto label_4c375c;
        case 0x4c3760u: goto label_4c3760;
        case 0x4c3764u: goto label_4c3764;
        case 0x4c3768u: goto label_4c3768;
        case 0x4c376cu: goto label_4c376c;
        case 0x4c3770u: goto label_4c3770;
        case 0x4c3774u: goto label_4c3774;
        case 0x4c3778u: goto label_4c3778;
        case 0x4c377cu: goto label_4c377c;
        case 0x4c3780u: goto label_4c3780;
        case 0x4c3784u: goto label_4c3784;
        case 0x4c3788u: goto label_4c3788;
        case 0x4c378cu: goto label_4c378c;
        case 0x4c3790u: goto label_4c3790;
        case 0x4c3794u: goto label_4c3794;
        case 0x4c3798u: goto label_4c3798;
        case 0x4c379cu: goto label_4c379c;
        case 0x4c37a0u: goto label_4c37a0;
        case 0x4c37a4u: goto label_4c37a4;
        case 0x4c37a8u: goto label_4c37a8;
        case 0x4c37acu: goto label_4c37ac;
        case 0x4c37b0u: goto label_4c37b0;
        case 0x4c37b4u: goto label_4c37b4;
        case 0x4c37b8u: goto label_4c37b8;
        case 0x4c37bcu: goto label_4c37bc;
        case 0x4c37c0u: goto label_4c37c0;
        case 0x4c37c4u: goto label_4c37c4;
        case 0x4c37c8u: goto label_4c37c8;
        case 0x4c37ccu: goto label_4c37cc;
        case 0x4c37d0u: goto label_4c37d0;
        case 0x4c37d4u: goto label_4c37d4;
        case 0x4c37d8u: goto label_4c37d8;
        case 0x4c37dcu: goto label_4c37dc;
        case 0x4c37e0u: goto label_4c37e0;
        case 0x4c37e4u: goto label_4c37e4;
        case 0x4c37e8u: goto label_4c37e8;
        case 0x4c37ecu: goto label_4c37ec;
        case 0x4c37f0u: goto label_4c37f0;
        case 0x4c37f4u: goto label_4c37f4;
        case 0x4c37f8u: goto label_4c37f8;
        case 0x4c37fcu: goto label_4c37fc;
        case 0x4c3800u: goto label_4c3800;
        case 0x4c3804u: goto label_4c3804;
        case 0x4c3808u: goto label_4c3808;
        case 0x4c380cu: goto label_4c380c;
        case 0x4c3810u: goto label_4c3810;
        case 0x4c3814u: goto label_4c3814;
        case 0x4c3818u: goto label_4c3818;
        case 0x4c381cu: goto label_4c381c;
        case 0x4c3820u: goto label_4c3820;
        case 0x4c3824u: goto label_4c3824;
        case 0x4c3828u: goto label_4c3828;
        case 0x4c382cu: goto label_4c382c;
        case 0x4c3830u: goto label_4c3830;
        case 0x4c3834u: goto label_4c3834;
        case 0x4c3838u: goto label_4c3838;
        case 0x4c383cu: goto label_4c383c;
        case 0x4c3840u: goto label_4c3840;
        case 0x4c3844u: goto label_4c3844;
        case 0x4c3848u: goto label_4c3848;
        case 0x4c384cu: goto label_4c384c;
        case 0x4c3850u: goto label_4c3850;
        case 0x4c3854u: goto label_4c3854;
        case 0x4c3858u: goto label_4c3858;
        case 0x4c385cu: goto label_4c385c;
        case 0x4c3860u: goto label_4c3860;
        case 0x4c3864u: goto label_4c3864;
        case 0x4c3868u: goto label_4c3868;
        case 0x4c386cu: goto label_4c386c;
        case 0x4c3870u: goto label_4c3870;
        case 0x4c3874u: goto label_4c3874;
        case 0x4c3878u: goto label_4c3878;
        case 0x4c387cu: goto label_4c387c;
        case 0x4c3880u: goto label_4c3880;
        case 0x4c3884u: goto label_4c3884;
        case 0x4c3888u: goto label_4c3888;
        case 0x4c388cu: goto label_4c388c;
        case 0x4c3890u: goto label_4c3890;
        case 0x4c3894u: goto label_4c3894;
        case 0x4c3898u: goto label_4c3898;
        case 0x4c389cu: goto label_4c389c;
        case 0x4c38a0u: goto label_4c38a0;
        case 0x4c38a4u: goto label_4c38a4;
        case 0x4c38a8u: goto label_4c38a8;
        case 0x4c38acu: goto label_4c38ac;
        case 0x4c38b0u: goto label_4c38b0;
        case 0x4c38b4u: goto label_4c38b4;
        case 0x4c38b8u: goto label_4c38b8;
        case 0x4c38bcu: goto label_4c38bc;
        case 0x4c38c0u: goto label_4c38c0;
        case 0x4c38c4u: goto label_4c38c4;
        case 0x4c38c8u: goto label_4c38c8;
        case 0x4c38ccu: goto label_4c38cc;
        case 0x4c38d0u: goto label_4c38d0;
        case 0x4c38d4u: goto label_4c38d4;
        case 0x4c38d8u: goto label_4c38d8;
        case 0x4c38dcu: goto label_4c38dc;
        case 0x4c38e0u: goto label_4c38e0;
        case 0x4c38e4u: goto label_4c38e4;
        case 0x4c38e8u: goto label_4c38e8;
        case 0x4c38ecu: goto label_4c38ec;
        case 0x4c38f0u: goto label_4c38f0;
        case 0x4c38f4u: goto label_4c38f4;
        case 0x4c38f8u: goto label_4c38f8;
        case 0x4c38fcu: goto label_4c38fc;
        case 0x4c3900u: goto label_4c3900;
        case 0x4c3904u: goto label_4c3904;
        case 0x4c3908u: goto label_4c3908;
        case 0x4c390cu: goto label_4c390c;
        case 0x4c3910u: goto label_4c3910;
        case 0x4c3914u: goto label_4c3914;
        case 0x4c3918u: goto label_4c3918;
        case 0x4c391cu: goto label_4c391c;
        case 0x4c3920u: goto label_4c3920;
        case 0x4c3924u: goto label_4c3924;
        case 0x4c3928u: goto label_4c3928;
        case 0x4c392cu: goto label_4c392c;
        case 0x4c3930u: goto label_4c3930;
        case 0x4c3934u: goto label_4c3934;
        case 0x4c3938u: goto label_4c3938;
        case 0x4c393cu: goto label_4c393c;
        case 0x4c3940u: goto label_4c3940;
        case 0x4c3944u: goto label_4c3944;
        case 0x4c3948u: goto label_4c3948;
        case 0x4c394cu: goto label_4c394c;
        case 0x4c3950u: goto label_4c3950;
        case 0x4c3954u: goto label_4c3954;
        case 0x4c3958u: goto label_4c3958;
        case 0x4c395cu: goto label_4c395c;
        case 0x4c3960u: goto label_4c3960;
        case 0x4c3964u: goto label_4c3964;
        case 0x4c3968u: goto label_4c3968;
        case 0x4c396cu: goto label_4c396c;
        case 0x4c3970u: goto label_4c3970;
        case 0x4c3974u: goto label_4c3974;
        case 0x4c3978u: goto label_4c3978;
        case 0x4c397cu: goto label_4c397c;
        case 0x4c3980u: goto label_4c3980;
        case 0x4c3984u: goto label_4c3984;
        case 0x4c3988u: goto label_4c3988;
        case 0x4c398cu: goto label_4c398c;
        case 0x4c3990u: goto label_4c3990;
        case 0x4c3994u: goto label_4c3994;
        case 0x4c3998u: goto label_4c3998;
        case 0x4c399cu: goto label_4c399c;
        case 0x4c39a0u: goto label_4c39a0;
        case 0x4c39a4u: goto label_4c39a4;
        case 0x4c39a8u: goto label_4c39a8;
        case 0x4c39acu: goto label_4c39ac;
        case 0x4c39b0u: goto label_4c39b0;
        case 0x4c39b4u: goto label_4c39b4;
        case 0x4c39b8u: goto label_4c39b8;
        case 0x4c39bcu: goto label_4c39bc;
        case 0x4c39c0u: goto label_4c39c0;
        case 0x4c39c4u: goto label_4c39c4;
        case 0x4c39c8u: goto label_4c39c8;
        case 0x4c39ccu: goto label_4c39cc;
        case 0x4c39d0u: goto label_4c39d0;
        case 0x4c39d4u: goto label_4c39d4;
        case 0x4c39d8u: goto label_4c39d8;
        case 0x4c39dcu: goto label_4c39dc;
        case 0x4c39e0u: goto label_4c39e0;
        case 0x4c39e4u: goto label_4c39e4;
        case 0x4c39e8u: goto label_4c39e8;
        case 0x4c39ecu: goto label_4c39ec;
        case 0x4c39f0u: goto label_4c39f0;
        case 0x4c39f4u: goto label_4c39f4;
        case 0x4c39f8u: goto label_4c39f8;
        case 0x4c39fcu: goto label_4c39fc;
        case 0x4c3a00u: goto label_4c3a00;
        case 0x4c3a04u: goto label_4c3a04;
        case 0x4c3a08u: goto label_4c3a08;
        case 0x4c3a0cu: goto label_4c3a0c;
        case 0x4c3a10u: goto label_4c3a10;
        case 0x4c3a14u: goto label_4c3a14;
        case 0x4c3a18u: goto label_4c3a18;
        case 0x4c3a1cu: goto label_4c3a1c;
        case 0x4c3a20u: goto label_4c3a20;
        case 0x4c3a24u: goto label_4c3a24;
        case 0x4c3a28u: goto label_4c3a28;
        case 0x4c3a2cu: goto label_4c3a2c;
        case 0x4c3a30u: goto label_4c3a30;
        case 0x4c3a34u: goto label_4c3a34;
        case 0x4c3a38u: goto label_4c3a38;
        case 0x4c3a3cu: goto label_4c3a3c;
        case 0x4c3a40u: goto label_4c3a40;
        case 0x4c3a44u: goto label_4c3a44;
        case 0x4c3a48u: goto label_4c3a48;
        case 0x4c3a4cu: goto label_4c3a4c;
        case 0x4c3a50u: goto label_4c3a50;
        case 0x4c3a54u: goto label_4c3a54;
        case 0x4c3a58u: goto label_4c3a58;
        case 0x4c3a5cu: goto label_4c3a5c;
        case 0x4c3a60u: goto label_4c3a60;
        case 0x4c3a64u: goto label_4c3a64;
        case 0x4c3a68u: goto label_4c3a68;
        case 0x4c3a6cu: goto label_4c3a6c;
        case 0x4c3a70u: goto label_4c3a70;
        case 0x4c3a74u: goto label_4c3a74;
        case 0x4c3a78u: goto label_4c3a78;
        case 0x4c3a7cu: goto label_4c3a7c;
        case 0x4c3a80u: goto label_4c3a80;
        case 0x4c3a84u: goto label_4c3a84;
        case 0x4c3a88u: goto label_4c3a88;
        case 0x4c3a8cu: goto label_4c3a8c;
        case 0x4c3a90u: goto label_4c3a90;
        case 0x4c3a94u: goto label_4c3a94;
        case 0x4c3a98u: goto label_4c3a98;
        case 0x4c3a9cu: goto label_4c3a9c;
        case 0x4c3aa0u: goto label_4c3aa0;
        case 0x4c3aa4u: goto label_4c3aa4;
        case 0x4c3aa8u: goto label_4c3aa8;
        case 0x4c3aacu: goto label_4c3aac;
        case 0x4c3ab0u: goto label_4c3ab0;
        case 0x4c3ab4u: goto label_4c3ab4;
        case 0x4c3ab8u: goto label_4c3ab8;
        case 0x4c3abcu: goto label_4c3abc;
        case 0x4c3ac0u: goto label_4c3ac0;
        case 0x4c3ac4u: goto label_4c3ac4;
        case 0x4c3ac8u: goto label_4c3ac8;
        case 0x4c3accu: goto label_4c3acc;
        case 0x4c3ad0u: goto label_4c3ad0;
        case 0x4c3ad4u: goto label_4c3ad4;
        case 0x4c3ad8u: goto label_4c3ad8;
        case 0x4c3adcu: goto label_4c3adc;
        case 0x4c3ae0u: goto label_4c3ae0;
        case 0x4c3ae4u: goto label_4c3ae4;
        case 0x4c3ae8u: goto label_4c3ae8;
        case 0x4c3aecu: goto label_4c3aec;
        case 0x4c3af0u: goto label_4c3af0;
        case 0x4c3af4u: goto label_4c3af4;
        case 0x4c3af8u: goto label_4c3af8;
        case 0x4c3afcu: goto label_4c3afc;
        case 0x4c3b00u: goto label_4c3b00;
        case 0x4c3b04u: goto label_4c3b04;
        case 0x4c3b08u: goto label_4c3b08;
        case 0x4c3b0cu: goto label_4c3b0c;
        case 0x4c3b10u: goto label_4c3b10;
        case 0x4c3b14u: goto label_4c3b14;
        case 0x4c3b18u: goto label_4c3b18;
        case 0x4c3b1cu: goto label_4c3b1c;
        case 0x4c3b20u: goto label_4c3b20;
        case 0x4c3b24u: goto label_4c3b24;
        case 0x4c3b28u: goto label_4c3b28;
        case 0x4c3b2cu: goto label_4c3b2c;
        case 0x4c3b30u: goto label_4c3b30;
        case 0x4c3b34u: goto label_4c3b34;
        case 0x4c3b38u: goto label_4c3b38;
        case 0x4c3b3cu: goto label_4c3b3c;
        case 0x4c3b40u: goto label_4c3b40;
        case 0x4c3b44u: goto label_4c3b44;
        case 0x4c3b48u: goto label_4c3b48;
        case 0x4c3b4cu: goto label_4c3b4c;
        case 0x4c3b50u: goto label_4c3b50;
        case 0x4c3b54u: goto label_4c3b54;
        case 0x4c3b58u: goto label_4c3b58;
        case 0x4c3b5cu: goto label_4c3b5c;
        case 0x4c3b60u: goto label_4c3b60;
        case 0x4c3b64u: goto label_4c3b64;
        case 0x4c3b68u: goto label_4c3b68;
        case 0x4c3b6cu: goto label_4c3b6c;
        case 0x4c3b70u: goto label_4c3b70;
        case 0x4c3b74u: goto label_4c3b74;
        case 0x4c3b78u: goto label_4c3b78;
        case 0x4c3b7cu: goto label_4c3b7c;
        case 0x4c3b80u: goto label_4c3b80;
        case 0x4c3b84u: goto label_4c3b84;
        case 0x4c3b88u: goto label_4c3b88;
        case 0x4c3b8cu: goto label_4c3b8c;
        case 0x4c3b90u: goto label_4c3b90;
        case 0x4c3b94u: goto label_4c3b94;
        case 0x4c3b98u: goto label_4c3b98;
        case 0x4c3b9cu: goto label_4c3b9c;
        case 0x4c3ba0u: goto label_4c3ba0;
        case 0x4c3ba4u: goto label_4c3ba4;
        case 0x4c3ba8u: goto label_4c3ba8;
        case 0x4c3bacu: goto label_4c3bac;
        case 0x4c3bb0u: goto label_4c3bb0;
        case 0x4c3bb4u: goto label_4c3bb4;
        case 0x4c3bb8u: goto label_4c3bb8;
        case 0x4c3bbcu: goto label_4c3bbc;
        case 0x4c3bc0u: goto label_4c3bc0;
        case 0x4c3bc4u: goto label_4c3bc4;
        case 0x4c3bc8u: goto label_4c3bc8;
        case 0x4c3bccu: goto label_4c3bcc;
        case 0x4c3bd0u: goto label_4c3bd0;
        case 0x4c3bd4u: goto label_4c3bd4;
        case 0x4c3bd8u: goto label_4c3bd8;
        case 0x4c3bdcu: goto label_4c3bdc;
        case 0x4c3be0u: goto label_4c3be0;
        case 0x4c3be4u: goto label_4c3be4;
        case 0x4c3be8u: goto label_4c3be8;
        case 0x4c3becu: goto label_4c3bec;
        case 0x4c3bf0u: goto label_4c3bf0;
        case 0x4c3bf4u: goto label_4c3bf4;
        case 0x4c3bf8u: goto label_4c3bf8;
        case 0x4c3bfcu: goto label_4c3bfc;
        case 0x4c3c00u: goto label_4c3c00;
        case 0x4c3c04u: goto label_4c3c04;
        case 0x4c3c08u: goto label_4c3c08;
        case 0x4c3c0cu: goto label_4c3c0c;
        case 0x4c3c10u: goto label_4c3c10;
        case 0x4c3c14u: goto label_4c3c14;
        case 0x4c3c18u: goto label_4c3c18;
        case 0x4c3c1cu: goto label_4c3c1c;
        case 0x4c3c20u: goto label_4c3c20;
        case 0x4c3c24u: goto label_4c3c24;
        case 0x4c3c28u: goto label_4c3c28;
        case 0x4c3c2cu: goto label_4c3c2c;
        case 0x4c3c30u: goto label_4c3c30;
        case 0x4c3c34u: goto label_4c3c34;
        case 0x4c3c38u: goto label_4c3c38;
        case 0x4c3c3cu: goto label_4c3c3c;
        case 0x4c3c40u: goto label_4c3c40;
        case 0x4c3c44u: goto label_4c3c44;
        case 0x4c3c48u: goto label_4c3c48;
        case 0x4c3c4cu: goto label_4c3c4c;
        case 0x4c3c50u: goto label_4c3c50;
        case 0x4c3c54u: goto label_4c3c54;
        case 0x4c3c58u: goto label_4c3c58;
        case 0x4c3c5cu: goto label_4c3c5c;
        case 0x4c3c60u: goto label_4c3c60;
        case 0x4c3c64u: goto label_4c3c64;
        case 0x4c3c68u: goto label_4c3c68;
        case 0x4c3c6cu: goto label_4c3c6c;
        case 0x4c3c70u: goto label_4c3c70;
        case 0x4c3c74u: goto label_4c3c74;
        case 0x4c3c78u: goto label_4c3c78;
        case 0x4c3c7cu: goto label_4c3c7c;
        case 0x4c3c80u: goto label_4c3c80;
        case 0x4c3c84u: goto label_4c3c84;
        case 0x4c3c88u: goto label_4c3c88;
        case 0x4c3c8cu: goto label_4c3c8c;
        case 0x4c3c90u: goto label_4c3c90;
        case 0x4c3c94u: goto label_4c3c94;
        case 0x4c3c98u: goto label_4c3c98;
        case 0x4c3c9cu: goto label_4c3c9c;
        case 0x4c3ca0u: goto label_4c3ca0;
        case 0x4c3ca4u: goto label_4c3ca4;
        case 0x4c3ca8u: goto label_4c3ca8;
        case 0x4c3cacu: goto label_4c3cac;
        case 0x4c3cb0u: goto label_4c3cb0;
        case 0x4c3cb4u: goto label_4c3cb4;
        case 0x4c3cb8u: goto label_4c3cb8;
        case 0x4c3cbcu: goto label_4c3cbc;
        case 0x4c3cc0u: goto label_4c3cc0;
        case 0x4c3cc4u: goto label_4c3cc4;
        case 0x4c3cc8u: goto label_4c3cc8;
        case 0x4c3cccu: goto label_4c3ccc;
        case 0x4c3cd0u: goto label_4c3cd0;
        case 0x4c3cd4u: goto label_4c3cd4;
        case 0x4c3cd8u: goto label_4c3cd8;
        case 0x4c3cdcu: goto label_4c3cdc;
        case 0x4c3ce0u: goto label_4c3ce0;
        case 0x4c3ce4u: goto label_4c3ce4;
        case 0x4c3ce8u: goto label_4c3ce8;
        case 0x4c3cecu: goto label_4c3cec;
        case 0x4c3cf0u: goto label_4c3cf0;
        case 0x4c3cf4u: goto label_4c3cf4;
        case 0x4c3cf8u: goto label_4c3cf8;
        case 0x4c3cfcu: goto label_4c3cfc;
        case 0x4c3d00u: goto label_4c3d00;
        case 0x4c3d04u: goto label_4c3d04;
        case 0x4c3d08u: goto label_4c3d08;
        case 0x4c3d0cu: goto label_4c3d0c;
        case 0x4c3d10u: goto label_4c3d10;
        case 0x4c3d14u: goto label_4c3d14;
        case 0x4c3d18u: goto label_4c3d18;
        case 0x4c3d1cu: goto label_4c3d1c;
        case 0x4c3d20u: goto label_4c3d20;
        case 0x4c3d24u: goto label_4c3d24;
        case 0x4c3d28u: goto label_4c3d28;
        case 0x4c3d2cu: goto label_4c3d2c;
        case 0x4c3d30u: goto label_4c3d30;
        case 0x4c3d34u: goto label_4c3d34;
        case 0x4c3d38u: goto label_4c3d38;
        case 0x4c3d3cu: goto label_4c3d3c;
        case 0x4c3d40u: goto label_4c3d40;
        case 0x4c3d44u: goto label_4c3d44;
        case 0x4c3d48u: goto label_4c3d48;
        case 0x4c3d4cu: goto label_4c3d4c;
        case 0x4c3d50u: goto label_4c3d50;
        case 0x4c3d54u: goto label_4c3d54;
        case 0x4c3d58u: goto label_4c3d58;
        case 0x4c3d5cu: goto label_4c3d5c;
        case 0x4c3d60u: goto label_4c3d60;
        case 0x4c3d64u: goto label_4c3d64;
        case 0x4c3d68u: goto label_4c3d68;
        case 0x4c3d6cu: goto label_4c3d6c;
        case 0x4c3d70u: goto label_4c3d70;
        case 0x4c3d74u: goto label_4c3d74;
        case 0x4c3d78u: goto label_4c3d78;
        case 0x4c3d7cu: goto label_4c3d7c;
        case 0x4c3d80u: goto label_4c3d80;
        case 0x4c3d84u: goto label_4c3d84;
        case 0x4c3d88u: goto label_4c3d88;
        case 0x4c3d8cu: goto label_4c3d8c;
        case 0x4c3d90u: goto label_4c3d90;
        case 0x4c3d94u: goto label_4c3d94;
        case 0x4c3d98u: goto label_4c3d98;
        case 0x4c3d9cu: goto label_4c3d9c;
        case 0x4c3da0u: goto label_4c3da0;
        case 0x4c3da4u: goto label_4c3da4;
        case 0x4c3da8u: goto label_4c3da8;
        case 0x4c3dacu: goto label_4c3dac;
        case 0x4c3db0u: goto label_4c3db0;
        case 0x4c3db4u: goto label_4c3db4;
        case 0x4c3db8u: goto label_4c3db8;
        case 0x4c3dbcu: goto label_4c3dbc;
        case 0x4c3dc0u: goto label_4c3dc0;
        case 0x4c3dc4u: goto label_4c3dc4;
        case 0x4c3dc8u: goto label_4c3dc8;
        case 0x4c3dccu: goto label_4c3dcc;
        case 0x4c3dd0u: goto label_4c3dd0;
        case 0x4c3dd4u: goto label_4c3dd4;
        case 0x4c3dd8u: goto label_4c3dd8;
        case 0x4c3ddcu: goto label_4c3ddc;
        case 0x4c3de0u: goto label_4c3de0;
        case 0x4c3de4u: goto label_4c3de4;
        case 0x4c3de8u: goto label_4c3de8;
        case 0x4c3decu: goto label_4c3dec;
        case 0x4c3df0u: goto label_4c3df0;
        case 0x4c3df4u: goto label_4c3df4;
        case 0x4c3df8u: goto label_4c3df8;
        case 0x4c3dfcu: goto label_4c3dfc;
        case 0x4c3e00u: goto label_4c3e00;
        case 0x4c3e04u: goto label_4c3e04;
        case 0x4c3e08u: goto label_4c3e08;
        case 0x4c3e0cu: goto label_4c3e0c;
        case 0x4c3e10u: goto label_4c3e10;
        case 0x4c3e14u: goto label_4c3e14;
        case 0x4c3e18u: goto label_4c3e18;
        case 0x4c3e1cu: goto label_4c3e1c;
        default: break;
    }

    ctx->pc = 0x4c35e0u;

label_4c35e0:
    // 0x4c35e0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4c35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4c35e4:
    // 0x4c35e4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x4c35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c35e8:
    // 0x4c35e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c35ec:
    // 0x4c35ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4c35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4c35f0:
    // 0x4c35f0: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x4c35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_4c35f4:
    // 0x4c35f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c35f8:
    // 0x4c35f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4c35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c35fc:
    // 0x4c35fc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4c35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4c3600:
    // 0x4c3600: 0x3e00008  jr          $ra
label_4c3604:
    if (ctx->pc == 0x4C3604u) {
        ctx->pc = 0x4C3604u;
            // 0x4c3604: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4C3608u;
        goto label_4c3608;
    }
    ctx->pc = 0x4C3600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3600u;
            // 0x4c3604: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3608u;
label_4c3608:
    // 0x4c3608: 0x0  nop
    ctx->pc = 0x4c3608u;
    // NOP
label_4c360c:
    // 0x4c360c: 0x0  nop
    ctx->pc = 0x4c360cu;
    // NOP
label_4c3610:
    // 0x4c3610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c3610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c3614:
    // 0x4c3614: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4c3618:
    // 0x4c3618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c3618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c361c:
    // 0x4c361c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3620:
    // 0x4c3620: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c3620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c3624:
    // 0x4c3624: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c3624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c3628:
    // 0x4c3628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c3628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c362c:
    // 0x4c362c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c3630:
    // 0x4c3630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c3630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3634:
    // 0x4c3634: 0xac820ca8  sw          $v0, 0xCA8($a0)
    ctx->pc = 0x4c3634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3240), GPR_U32(ctx, 2));
label_4c3638:
    // 0x4c3638: 0xac830d58  sw          $v1, 0xD58($a0)
    ctx->pc = 0x4c3638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3416), GPR_U32(ctx, 3));
label_4c363c:
    // 0x4c363c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c363cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c3640:
    // 0x4c3640: 0xa0800cc0  sb          $zero, 0xCC0($a0)
    ctx->pc = 0x4c3640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3264), (uint8_t)GPR_U32(ctx, 0));
label_4c3644:
    // 0x4c3644: 0xa0800d75  sb          $zero, 0xD75($a0)
    ctx->pc = 0x4c3644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3445), (uint8_t)GPR_U32(ctx, 0));
label_4c3648:
    // 0x4c3648: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4c3648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c364c:
    // 0x4c364c: 0x8e250d54  lw          $a1, 0xD54($s1)
    ctx->pc = 0x4c364cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3412)));
label_4c3650:
    // 0x4c3650: 0xc057b7c  jal         func_15EDF0
label_4c3654:
    if (ctx->pc == 0x4C3654u) {
        ctx->pc = 0x4C3654u;
            // 0x4c3654: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4C3658u;
        goto label_4c3658;
    }
    ctx->pc = 0x4C3650u;
    SET_GPR_U32(ctx, 31, 0x4C3658u);
    ctx->pc = 0x4C3654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3650u;
            // 0x4c3654: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3658u; }
        if (ctx->pc != 0x4C3658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3658u; }
        if (ctx->pc != 0x4C3658u) { return; }
    }
    ctx->pc = 0x4C3658u;
label_4c3658:
    // 0x4c3658: 0xc0cc694  jal         func_331A50
label_4c365c:
    if (ctx->pc == 0x4C365Cu) {
        ctx->pc = 0x4C365Cu;
            // 0x4c365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3660u;
        goto label_4c3660;
    }
    ctx->pc = 0x4C3658u;
    SET_GPR_U32(ctx, 31, 0x4C3660u);
    ctx->pc = 0x4C365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3658u;
            // 0x4c365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x331A50u;
    if (runtime->hasFunction(0x331A50u)) {
        auto targetFn = runtime->lookupFunction(0x331A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3660u; }
        if (ctx->pc != 0x4C3660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00331A50_0x331a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3660u; }
        if (ctx->pc != 0x4C3660u) { return; }
    }
    ctx->pc = 0x4C3660u;
label_4c3660:
    // 0x4c3660: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c3660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c3664:
    // 0x4c3664: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4c3664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3668:
    // 0x4c3668: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4c3668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4c366c:
    // 0x4c366c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x4c366cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4c3670:
    // 0x4c3670: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4c3670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c3674:
    // 0x4c3674: 0xc05cc84  jal         func_173210
label_4c3678:
    if (ctx->pc == 0x4C3678u) {
        ctx->pc = 0x4C3678u;
            // 0x4c3678: 0x8e640184  lw          $a0, 0x184($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
        ctx->pc = 0x4C367Cu;
        goto label_4c367c;
    }
    ctx->pc = 0x4C3674u;
    SET_GPR_U32(ctx, 31, 0x4C367Cu);
    ctx->pc = 0x4C3678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3674u;
            // 0x4c3678: 0x8e640184  lw          $a0, 0x184($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C367Cu; }
        if (ctx->pc != 0x4C367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C367Cu; }
        if (ctx->pc != 0x4C367Cu) { return; }
    }
    ctx->pc = 0x4C367Cu;
label_4c367c:
    // 0x4c367c: 0x924301b4  lbu         $v1, 0x1B4($s2)
    ctx->pc = 0x4c367cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 436)));
label_4c3680:
    // 0x4c3680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4c3680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4c3684:
    // 0x4c3684: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x4c3684u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c3688:
    // 0x4c3688: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c368c:
    if (ctx->pc == 0x4C368Cu) {
        ctx->pc = 0x4C368Cu;
            // 0x4c368c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4C3690u;
        goto label_4c3690;
    }
    ctx->pc = 0x4C3688u;
    {
        const bool branch_taken_0x4c3688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3688u;
            // 0x4c368c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3688) {
            ctx->pc = 0x4C3674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c3674;
        }
    }
    ctx->pc = 0x4C3690u;
label_4c3690:
    // 0x4c3690: 0xae200d5c  sw          $zero, 0xD5C($s1)
    ctx->pc = 0x4c3690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3420), GPR_U32(ctx, 0));
label_4c3694:
    // 0x4c3694: 0x8e230cd4  lw          $v1, 0xCD4($s1)
    ctx->pc = 0x4c3694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3284)));
label_4c3698:
    // 0x4c3698: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
label_4c369c:
    if (ctx->pc == 0x4C369Cu) {
        ctx->pc = 0x4C369Cu;
            // 0x4c369c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4C36A0u;
        goto label_4c36a0;
    }
    ctx->pc = 0x4C3698u;
    {
        const bool branch_taken_0x4c3698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3698) {
            ctx->pc = 0x4C369Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3698u;
            // 0x4c369c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C371Cu;
            goto label_4c371c;
        }
    }
    ctx->pc = 0x4C36A0u;
label_4c36a0:
    // 0x4c36a0: 0x8e270d70  lw          $a3, 0xD70($s1)
    ctx->pc = 0x4c36a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_4c36a4:
    // 0x4c36a4: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x4c36a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4c36a8:
    // 0x4c36a8: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4c36a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4c36ac:
    // 0x4c36ac: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4c36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4c36b0:
    // 0x4c36b0: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x4c36b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4c36b4:
    // 0x4c36b4: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x4c36b4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_4c36b8:
    // 0x4c36b8: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x4c36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_4c36bc:
    // 0x4c36bc: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x4c36bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_4c36c0:
    // 0x4c36c0: 0xae270cd4  sw          $a3, 0xCD4($s1)
    ctx->pc = 0x4c36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3284), GPR_U32(ctx, 7));
label_4c36c4:
    // 0x4c36c4: 0x3010  mfhi        $a2
    ctx->pc = 0x4c36c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4c36c8:
    // 0x4c36c8: 0xa70019  multu       $a1, $a3
    ctx->pc = 0x4c36c8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c36cc:
    // 0x4c36cc: 0xa6260cbe  sh          $a2, 0xCBE($s1)
    ctx->pc = 0x4c36ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3262), (uint16_t)GPR_U32(ctx, 6));
label_4c36d0:
    // 0x4c36d0: 0x0  nop
    ctx->pc = 0x4c36d0u;
    // NOP
label_4c36d4:
    // 0x4c36d4: 0x2810  mfhi        $a1
    ctx->pc = 0x4c36d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4c36d8:
    // 0x4c36d8: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x4c36d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_4c36dc:
    // 0x4c36dc: 0x650019  multu       $v1, $a1
    ctx->pc = 0x4c36dcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c36e0:
    // 0x4c36e0: 0x1810  mfhi        $v1
    ctx->pc = 0x4c36e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4c36e4:
    // 0x4c36e4: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x4c36e4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4c36e8:
    // 0x4c36e8: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x4c36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_4c36ec:
    // 0x4c36ec: 0x0  nop
    ctx->pc = 0x4c36ecu;
    // NOP
label_4c36f0:
    // 0x4c36f0: 0x1810  mfhi        $v1
    ctx->pc = 0x4c36f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4c36f4:
    // 0x4c36f4: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x4c36f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_4c36f8:
    // 0x4c36f8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4c36fc:
    if (ctx->pc == 0x4C36FCu) {
        ctx->pc = 0x4C36FCu;
            // 0x4c36fc: 0xa2230cbd  sb          $v1, 0xCBD($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3261), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C3700u;
        goto label_4c3700;
    }
    ctx->pc = 0x4C36F8u;
    {
        const bool branch_taken_0x4c36f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C36FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C36F8u;
            // 0x4c36fc: 0xa2230cbd  sb          $v1, 0xCBD($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3261), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c36f8) {
            ctx->pc = 0x4C3714u;
            goto label_4c3714;
        }
    }
    ctx->pc = 0x4C3700u;
label_4c3700:
    // 0x4c3700: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x4c3700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4c3704:
    // 0x4c3704: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x4c3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4c3708:
    // 0x4c3708: 0xa6230cbe  sh          $v1, 0xCBE($s1)
    ctx->pc = 0x4c3708u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3262), (uint16_t)GPR_U32(ctx, 3));
label_4c370c:
    // 0x4c370c: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x4c370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4c3710:
    // 0x4c3710: 0xa2230cbd  sb          $v1, 0xCBD($s1)
    ctx->pc = 0x4c3710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3261), (uint8_t)GPR_U32(ctx, 3));
label_4c3714:
    // 0x4c3714: 0xa2240cbc  sb          $a0, 0xCBC($s1)
    ctx->pc = 0x4c3714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3260), (uint8_t)GPR_U32(ctx, 4));
label_4c3718:
    // 0x4c3718: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c3718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c371c:
    // 0x4c371c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c371cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c3720:
    // 0x4c3720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c3720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3724:
    // 0x4c3724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c3724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3728:
    // 0x4c3728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c3728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c372c:
    // 0x4c372c: 0x3e00008  jr          $ra
label_4c3730:
    if (ctx->pc == 0x4C3730u) {
        ctx->pc = 0x4C3730u;
            // 0x4c3730: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C3734u;
        goto label_4c3734;
    }
    ctx->pc = 0x4C372Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C372Cu;
            // 0x4c3730: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3734u;
label_4c3734:
    // 0x4c3734: 0x0  nop
    ctx->pc = 0x4c3734u;
    // NOP
label_4c3738:
    // 0x4c3738: 0x0  nop
    ctx->pc = 0x4c3738u;
    // NOP
label_4c373c:
    // 0x4c373c: 0x0  nop
    ctx->pc = 0x4c373cu;
    // NOP
label_4c3740:
    // 0x4c3740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c3744:
    // 0x4c3744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c3744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c3748:
    // 0x4c3748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c3748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c374c:
    // 0x4c374c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c3750:
    // 0x4c3750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c3750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c3754:
    // 0x4c3754: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c3754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3758:
    // 0x4c3758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c3758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c375c:
    // 0x4c375c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4c375cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c3760:
    // 0x4c3760: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4c3760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c3764:
    // 0x4c3764: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x4c3764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_4c3768:
    // 0x4c3768: 0xc040180  jal         func_100600
label_4c376c:
    if (ctx->pc == 0x4C376Cu) {
        ctx->pc = 0x4C376Cu;
            // 0x4c376c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C3770u;
        goto label_4c3770;
    }
    ctx->pc = 0x4C3768u;
    SET_GPR_U32(ctx, 31, 0x4C3770u);
    ctx->pc = 0x4C376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3768u;
            // 0x4c376c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3770u; }
        if (ctx->pc != 0x4C3770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3770u; }
        if (ctx->pc != 0x4C3770u) { return; }
    }
    ctx->pc = 0x4C3770u;
label_4c3770:
    // 0x4c3770: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_4c3774:
    if (ctx->pc == 0x4C3774u) {
        ctx->pc = 0x4C3774u;
            // 0x4c3774: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3778u;
        goto label_4c3778;
    }
    ctx->pc = 0x4C3770u;
    {
        const bool branch_taken_0x4c3770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3770u;
            // 0x4c3774: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3770) {
            ctx->pc = 0x4C3804u;
            goto label_4c3804;
        }
    }
    ctx->pc = 0x4C3778u;
label_4c3778:
    // 0x4c3778: 0x8e630d58  lw          $v1, 0xD58($s3)
    ctx->pc = 0x4c3778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3416)));
label_4c377c:
    // 0x4c377c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4c377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4c3780:
    // 0x4c3780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3784:
    // 0x4c3784: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4c3784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c3788:
    // 0x4c3788: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x4c3788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_4c378c:
    // 0x4c378c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c378cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3790:
    // 0x4c3790: 0x60a026  xor         $s4, $v1, $zero
    ctx->pc = 0x4c3790u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_4c3794:
    // 0x4c3794: 0xc10ca68  jal         func_4329A0
label_4c3798:
    if (ctx->pc == 0x4C3798u) {
        ctx->pc = 0x4C3798u;
            // 0x4c3798: 0x2e940001  sltiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4C379Cu;
        goto label_4c379c;
    }
    ctx->pc = 0x4C3794u;
    SET_GPR_U32(ctx, 31, 0x4C379Cu);
    ctx->pc = 0x4C3798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3794u;
            // 0x4c3798: 0x2e940001  sltiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C379Cu; }
        if (ctx->pc != 0x4C379Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C379Cu; }
        if (ctx->pc != 0x4C379Cu) { return; }
    }
    ctx->pc = 0x4C379Cu;
label_4c379c:
    // 0x4c379c: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x4c379cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_4c37a0:
    // 0x4c37a0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4c37a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4c37a4:
    // 0x4c37a4: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x4c37a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c37a8:
    // 0x4c37a8: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x4c37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_4c37ac:
    // 0x4c37ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c37acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c37b0:
    // 0x4c37b0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c37b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4c37b4:
    // 0x4c37b4: 0x24634be0  addiu       $v1, $v1, 0x4BE0
    ctx->pc = 0x4c37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19424));
label_4c37b8:
    // 0x4c37b8: 0x26640ca8  addiu       $a0, $s3, 0xCA8
    ctx->pc = 0x4c37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3240));
label_4c37bc:
    // 0x4c37bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c37bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c37c0:
    // 0x4c37c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c37c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c37c4:
    // 0x4c37c4: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4c37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_4c37c8:
    // 0x4c37c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4c37cc:
    // 0x4c37cc: 0xa2120058  sb          $s2, 0x58($s0)
    ctx->pc = 0x4c37ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 18));
label_4c37d0:
    // 0x4c37d0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4c37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4c37d4:
    // 0x4c37d4: 0xa2060059  sb          $a2, 0x59($s0)
    ctx->pc = 0x4c37d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 6));
label_4c37d8:
    // 0x4c37d8: 0x24841ee0  addiu       $a0, $a0, 0x1EE0
    ctx->pc = 0x4c37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7904));
label_4c37dc:
    // 0x4c37dc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4c37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4c37e0:
    // 0x4c37e0: 0x90630081  lbu         $v1, 0x81($v1)
    ctx->pc = 0x4c37e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
label_4c37e4:
    // 0x4c37e4: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x4c37e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
label_4c37e8:
    // 0x4c37e8: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x4c37e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
label_4c37ec:
    // 0x4c37ec: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4c37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4c37f0:
    // 0x4c37f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4c37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_4c37f4:
    // 0x4c37f4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4c37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_4c37f8:
    // 0x4c37f8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4c37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4c37fc:
    // 0x4c37fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4c3800:
    // 0x4c3800: 0xae130064  sw          $s3, 0x64($s0)
    ctx->pc = 0x4c3800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 19));
label_4c3804:
    // 0x4c3804: 0xae700d6c  sw          $s0, 0xD6C($s3)
    ctx->pc = 0x4c3804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3436), GPR_U32(ctx, 16));
label_4c3808:
    // 0x4c3808: 0xae11005c  sw          $s1, 0x5C($s0)
    ctx->pc = 0x4c3808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
label_4c380c:
    // 0x4c380c: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x4c380cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
label_4c3810:
    // 0x4c3810: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c3810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c3814:
    // 0x4c3814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c3814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c3818:
    // 0x4c3818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c3818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c381c:
    // 0x4c381c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c381cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3820:
    // 0x4c3820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c3820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3824:
    // 0x4c3824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c3824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c3828:
    // 0x4c3828: 0x3e00008  jr          $ra
label_4c382c:
    if (ctx->pc == 0x4C382Cu) {
        ctx->pc = 0x4C382Cu;
            // 0x4c382c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C3830u;
        goto label_4c3830;
    }
    ctx->pc = 0x4C3828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3828u;
            // 0x4c382c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3830u;
label_4c3830:
    // 0x4c3830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c3830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c3834:
    // 0x4c3834: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c3834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c3838:
    // 0x4c3838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c3838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c383c:
    // 0x4c383c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c3840:
    // 0x4c3840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c3840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c3844:
    // 0x4c3844: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x4c3844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_4c3848:
    // 0x4c3848: 0x8c850d58  lw          $a1, 0xD58($a0)
    ctx->pc = 0x4c3848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3416)));
label_4c384c:
    // 0x4c384c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x4c384cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4c3850:
    // 0x4c3850: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
label_4c3854:
    if (ctx->pc == 0x4C3854u) {
        ctx->pc = 0x4C3854u;
            // 0x4c3854: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3858u;
        goto label_4c3858;
    }
    ctx->pc = 0x4C3850u;
    {
        const bool branch_taken_0x4c3850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3850u;
            // 0x4c3854: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3850) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C3858u;
label_4c3858:
    // 0x4c3858: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c3858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c385c:
    // 0x4c385c: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x4c385cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_4c3860:
    // 0x4c3860: 0x320f809  jalr        $t9
label_4c3864:
    if (ctx->pc == 0x4C3864u) {
        ctx->pc = 0x4C3868u;
        goto label_4c3868;
    }
    ctx->pc = 0x4C3860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C3868u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C3868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C3868u; }
            if (ctx->pc != 0x4C3868u) { return; }
        }
        }
    }
    ctx->pc = 0x4C3868u;
label_4c3868:
    // 0x4c3868: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_4c386c:
    if (ctx->pc == 0x4C386Cu) {
        ctx->pc = 0x4C386Cu;
            // 0x4c386c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4C3870u;
        goto label_4c3870;
    }
    ctx->pc = 0x4C3868u;
    {
        const bool branch_taken_0x4c3868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3868) {
            ctx->pc = 0x4C386Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3868u;
            // 0x4c386c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3934u;
            goto label_4c3934;
        }
    }
    ctx->pc = 0x4C3870u;
label_4c3870:
    // 0x4c3870: 0x8e220cc4  lw          $v0, 0xCC4($s1)
    ctx->pc = 0x4c3870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
label_4c3874:
    // 0x4c3874: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c3874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c3878:
    // 0x4c3878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c3878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c387c:
    // 0x4c387c: 0xc0ca4b0  jal         func_3292C0
label_4c3880:
    if (ctx->pc == 0x4C3880u) {
        ctx->pc = 0x4C3880u;
            // 0x4c3880: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x4C3884u;
        goto label_4c3884;
    }
    ctx->pc = 0x4C387Cu;
    SET_GPR_U32(ctx, 31, 0x4C3884u);
    ctx->pc = 0x4C3880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C387Cu;
            // 0x4c3880: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3884u; }
        if (ctx->pc != 0x4C3884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3884u; }
        if (ctx->pc != 0x4C3884u) { return; }
    }
    ctx->pc = 0x4C3884u;
label_4c3884:
    // 0x4c3884: 0x8e230cc4  lw          $v1, 0xCC4($s1)
    ctx->pc = 0x4c3884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
label_4c3888:
    // 0x4c3888: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x4c3888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4c388c:
    // 0x4c388c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_4c3890:
    if (ctx->pc == 0x4C3890u) {
        ctx->pc = 0x4C3894u;
        goto label_4c3894;
    }
    ctx->pc = 0x4C388Cu;
    {
        const bool branch_taken_0x4c388c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c388c) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C3894u;
label_4c3894:
    // 0x4c3894: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c3894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c3898:
    // 0x4c3898: 0xc0b90e0  jal         func_2E4380
label_4c389c:
    if (ctx->pc == 0x4C389Cu) {
        ctx->pc = 0x4C389Cu;
            // 0x4c389c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x4C38A0u;
        goto label_4c38a0;
    }
    ctx->pc = 0x4C3898u;
    SET_GPR_U32(ctx, 31, 0x4C38A0u);
    ctx->pc = 0x4C389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3898u;
            // 0x4c389c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38A0u; }
        if (ctx->pc != 0x4C38A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38A0u; }
        if (ctx->pc != 0x4C38A0u) { return; }
    }
    ctx->pc = 0x4C38A0u;
label_4c38a0:
    // 0x4c38a0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4c38a4:
    if (ctx->pc == 0x4C38A4u) {
        ctx->pc = 0x4C38A8u;
        goto label_4c38a8;
    }
    ctx->pc = 0x4C38A0u;
    {
        const bool branch_taken_0x4c38a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c38a0) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C38A8u;
label_4c38a8:
    // 0x4c38a8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c38a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c38ac:
    // 0x4c38ac: 0xc0b90e0  jal         func_2E4380
label_4c38b0:
    if (ctx->pc == 0x4C38B0u) {
        ctx->pc = 0x4C38B0u;
            // 0x4c38b0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x4C38B4u;
        goto label_4c38b4;
    }
    ctx->pc = 0x4C38ACu;
    SET_GPR_U32(ctx, 31, 0x4C38B4u);
    ctx->pc = 0x4C38B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C38ACu;
            // 0x4c38b0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38B4u; }
        if (ctx->pc != 0x4C38B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38B4u; }
        if (ctx->pc != 0x4C38B4u) { return; }
    }
    ctx->pc = 0x4C38B4u;
label_4c38b4:
    // 0x4c38b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4c38b8:
    if (ctx->pc == 0x4C38B8u) {
        ctx->pc = 0x4C38BCu;
        goto label_4c38bc;
    }
    ctx->pc = 0x4C38B4u;
    {
        const bool branch_taken_0x4c38b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c38b4) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C38BCu;
label_4c38bc:
    // 0x4c38bc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c38bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c38c0:
    // 0x4c38c0: 0xc0b90e0  jal         func_2E4380
label_4c38c4:
    if (ctx->pc == 0x4C38C4u) {
        ctx->pc = 0x4C38C4u;
            // 0x4c38c4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x4C38C8u;
        goto label_4c38c8;
    }
    ctx->pc = 0x4C38C0u;
    SET_GPR_U32(ctx, 31, 0x4C38C8u);
    ctx->pc = 0x4C38C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C38C0u;
            // 0x4c38c4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38C8u; }
        if (ctx->pc != 0x4C38C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38C8u; }
        if (ctx->pc != 0x4C38C8u) { return; }
    }
    ctx->pc = 0x4C38C8u;
label_4c38c8:
    // 0x4c38c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4c38cc:
    if (ctx->pc == 0x4C38CCu) {
        ctx->pc = 0x4C38D0u;
        goto label_4c38d0;
    }
    ctx->pc = 0x4C38C8u;
    {
        const bool branch_taken_0x4c38c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c38c8) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C38D0u;
label_4c38d0:
    // 0x4c38d0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c38d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c38d4:
    // 0x4c38d4: 0xc0b90e0  jal         func_2E4380
label_4c38d8:
    if (ctx->pc == 0x4C38D8u) {
        ctx->pc = 0x4C38D8u;
            // 0x4c38d8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4C38DCu;
        goto label_4c38dc;
    }
    ctx->pc = 0x4C38D4u;
    SET_GPR_U32(ctx, 31, 0x4C38DCu);
    ctx->pc = 0x4C38D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C38D4u;
            // 0x4c38d8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38DCu; }
        if (ctx->pc != 0x4C38DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38DCu; }
        if (ctx->pc != 0x4C38DCu) { return; }
    }
    ctx->pc = 0x4C38DCu;
label_4c38dc:
    // 0x4c38dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_4c38e0:
    if (ctx->pc == 0x4C38E0u) {
        ctx->pc = 0x4C38E4u;
        goto label_4c38e4;
    }
    ctx->pc = 0x4C38DCu;
    {
        const bool branch_taken_0x4c38dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c38dc) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C38E4u;
label_4c38e4:
    // 0x4c38e4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c38e8:
    // 0x4c38e8: 0xc0b90e0  jal         func_2E4380
label_4c38ec:
    if (ctx->pc == 0x4C38ECu) {
        ctx->pc = 0x4C38ECu;
            // 0x4c38ec: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x4C38F0u;
        goto label_4c38f0;
    }
    ctx->pc = 0x4C38E8u;
    SET_GPR_U32(ctx, 31, 0x4C38F0u);
    ctx->pc = 0x4C38ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C38E8u;
            // 0x4c38ec: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38F0u; }
        if (ctx->pc != 0x4C38F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C38F0u; }
        if (ctx->pc != 0x4C38F0u) { return; }
    }
    ctx->pc = 0x4C38F0u;
label_4c38f0:
    // 0x4c38f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4c38f4:
    if (ctx->pc == 0x4C38F4u) {
        ctx->pc = 0x4C38F8u;
        goto label_4c38f8;
    }
    ctx->pc = 0x4C38F0u;
    {
        const bool branch_taken_0x4c38f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c38f0) {
            ctx->pc = 0x4C3930u;
            goto label_4c3930;
        }
    }
    ctx->pc = 0x4C38F8u;
label_4c38f8:
    // 0x4c38f8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c38f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c38fc:
    // 0x4c38fc: 0xc0b90e0  jal         func_2E4380
label_4c3900:
    if (ctx->pc == 0x4C3900u) {
        ctx->pc = 0x4C3900u;
            // 0x4c3900: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x4C3904u;
        goto label_4c3904;
    }
    ctx->pc = 0x4C38FCu;
    SET_GPR_U32(ctx, 31, 0x4C3904u);
    ctx->pc = 0x4C3900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C38FCu;
            // 0x4c3900: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3904u; }
        if (ctx->pc != 0x4C3904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3904u; }
        if (ctx->pc != 0x4C3904u) { return; }
    }
    ctx->pc = 0x4C3904u;
label_4c3904:
    // 0x4c3904: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4c3908:
    if (ctx->pc == 0x4C3908u) {
        ctx->pc = 0x4C3908u;
            // 0x4c3908: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x4C390Cu;
        goto label_4c390c;
    }
    ctx->pc = 0x4C3904u;
    {
        const bool branch_taken_0x4c3904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3904) {
            ctx->pc = 0x4C3908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3904u;
            // 0x4c3908: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3924u;
            goto label_4c3924;
        }
    }
    ctx->pc = 0x4C390Cu;
label_4c390c:
    // 0x4c390c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c3910:
    // 0x4c3910: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x4c3910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_4c3914:
    // 0x4c3914: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x4c3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_4c3918:
    // 0x4c3918: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4c3918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_4c391c:
    // 0x4c391c: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x4c391cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_4c3920:
    // 0x4c3920: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4c3920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4c3924:
    // 0x4c3924: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x4c3924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4c3928:
    // 0x4c3928: 0xc0ca4b0  jal         func_3292C0
label_4c392c:
    if (ctx->pc == 0x4C392Cu) {
        ctx->pc = 0x4C392Cu;
            // 0x4c392c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C3930u;
        goto label_4c3930;
    }
    ctx->pc = 0x4C3928u;
    SET_GPR_U32(ctx, 31, 0x4C3930u);
    ctx->pc = 0x4C392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3928u;
            // 0x4c392c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3930u; }
        if (ctx->pc != 0x4C3930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3930u; }
        if (ctx->pc != 0x4C3930u) { return; }
    }
    ctx->pc = 0x4C3930u;
label_4c3930:
    // 0x4c3930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c3930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3934:
    // 0x4c3934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c3934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3938:
    // 0x4c3938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c3938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c393c:
    // 0x4c393c: 0x3e00008  jr          $ra
label_4c3940:
    if (ctx->pc == 0x4C3940u) {
        ctx->pc = 0x4C3940u;
            // 0x4c3940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C3944u;
        goto label_4c3944;
    }
    ctx->pc = 0x4C393Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C393Cu;
            // 0x4c3940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3944u;
label_4c3944:
    // 0x4c3944: 0x0  nop
    ctx->pc = 0x4c3944u;
    // NOP
label_4c3948:
    // 0x4c3948: 0x0  nop
    ctx->pc = 0x4c3948u;
    // NOP
label_4c394c:
    // 0x4c394c: 0x0  nop
    ctx->pc = 0x4c394cu;
    // NOP
label_4c3950:
    // 0x4c3950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c3950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c3954:
    // 0x4c3954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c3958:
    // 0x4c3958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c3958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c395c:
    // 0x4c395c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c3960:
    // 0x4c3960: 0x8c820d58  lw          $v0, 0xD58($a0)
    ctx->pc = 0x4c3960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3416)));
label_4c3964:
    // 0x4c3964: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4c3968:
    if (ctx->pc == 0x4C3968u) {
        ctx->pc = 0x4C3968u;
            // 0x4c3968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C396Cu;
        goto label_4c396c;
    }
    ctx->pc = 0x4C3964u;
    {
        const bool branch_taken_0x4c3964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3964u;
            // 0x4c3968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3964) {
            ctx->pc = 0x4C3978u;
            goto label_4c3978;
        }
    }
    ctx->pc = 0x4C396Cu;
label_4c396c:
    // 0x4c396c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3970:
    // 0x4c3970: 0x10000041  b           . + 4 + (0x41 << 2)
label_4c3974:
    if (ctx->pc == 0x4C3974u) {
        ctx->pc = 0x4C3974u;
            // 0x4c3974: 0xa2220cc2  sb          $v0, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C3978u;
        goto label_4c3978;
    }
    ctx->pc = 0x4C3970u;
    {
        const bool branch_taken_0x4c3970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3970u;
            // 0x4c3974: 0xa2220cc2  sb          $v0, 0xCC2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3970) {
            ctx->pc = 0x4C3A78u;
            goto label_4c3a78;
        }
    }
    ctx->pc = 0x4C3978u;
label_4c3978:
    // 0x4c3978: 0xa2200cc2  sb          $zero, 0xCC2($s1)
    ctx->pc = 0x4c3978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3266), (uint8_t)GPR_U32(ctx, 0));
label_4c397c:
    // 0x4c397c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c397cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c3980:
    // 0x4c3980: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x4c3980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_4c3984:
    // 0x4c3984: 0x320f809  jalr        $t9
label_4c3988:
    if (ctx->pc == 0x4C3988u) {
        ctx->pc = 0x4C398Cu;
        goto label_4c398c;
    }
    ctx->pc = 0x4C3984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C398Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C398Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C398Cu; }
            if (ctx->pc != 0x4C398Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C398Cu;
label_4c398c:
    // 0x4c398c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_4c3990:
    if (ctx->pc == 0x4C3990u) {
        ctx->pc = 0x4C3990u;
            // 0x4c3990: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x4C3994u;
        goto label_4c3994;
    }
    ctx->pc = 0x4C398Cu;
    {
        const bool branch_taken_0x4c398c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c398c) {
            ctx->pc = 0x4C3990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C398Cu;
            // 0x4c3990: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3A0Cu;
            goto label_4c3a0c;
        }
    }
    ctx->pc = 0x4C3994u;
label_4c3994:
    // 0x4c3994: 0xc040180  jal         func_100600
label_4c3998:
    if (ctx->pc == 0x4C3998u) {
        ctx->pc = 0x4C3998u;
            // 0x4c3998: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x4C399Cu;
        goto label_4c399c;
    }
    ctx->pc = 0x4C3994u;
    SET_GPR_U32(ctx, 31, 0x4C399Cu);
    ctx->pc = 0x4C3998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3994u;
            // 0x4c3998: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C399Cu; }
        if (ctx->pc != 0x4C399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C399Cu; }
        if (ctx->pc != 0x4C399Cu) { return; }
    }
    ctx->pc = 0x4C399Cu;
label_4c399c:
    // 0x4c399c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_4c39a0:
    if (ctx->pc == 0x4C39A0u) {
        ctx->pc = 0x4C39A0u;
            // 0x4c39a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C39A4u;
        goto label_4c39a4;
    }
    ctx->pc = 0x4C399Cu;
    {
        const bool branch_taken_0x4c399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C39A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C399Cu;
            // 0x4c39a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c399c) {
            ctx->pc = 0x4C3A78u;
            goto label_4c3a78;
        }
    }
    ctx->pc = 0x4C39A4u;
label_4c39a4:
    // 0x4c39a4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4c39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4c39a8:
    // 0x4c39a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c39ac:
    // 0x4c39ac: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x4c39acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_4c39b0:
    // 0x4c39b0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4c39b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c39b4:
    // 0x4c39b4: 0xc10ca68  jal         func_4329A0
label_4c39b8:
    if (ctx->pc == 0x4C39B8u) {
        ctx->pc = 0x4C39B8u;
            // 0x4c39b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4C39BCu;
        goto label_4c39bc;
    }
    ctx->pc = 0x4C39B4u;
    SET_GPR_U32(ctx, 31, 0x4C39BCu);
    ctx->pc = 0x4C39B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C39B4u;
            // 0x4c39b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C39BCu; }
        if (ctx->pc != 0x4C39BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C39BCu; }
        if (ctx->pc != 0x4C39BCu) { return; }
    }
    ctx->pc = 0x4C39BCu;
label_4c39bc:
    // 0x4c39bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c39c0:
    // 0x4c39c0: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x4c39c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_4c39c4:
    // 0x4c39c4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4c39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4c39c8:
    // 0x4c39c8: 0xc148880  jal         func_522200
label_4c39cc:
    if (ctx->pc == 0x4C39CCu) {
        ctx->pc = 0x4C39CCu;
            // 0x4c39cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4C39D0u;
        goto label_4c39d0;
    }
    ctx->pc = 0x4C39C8u;
    SET_GPR_U32(ctx, 31, 0x4C39D0u);
    ctx->pc = 0x4C39CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C39C8u;
            // 0x4c39cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C39D0u; }
        if (ctx->pc != 0x4C39D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C39D0u; }
        if (ctx->pc != 0x4C39D0u) { return; }
    }
    ctx->pc = 0x4C39D0u;
label_4c39d0:
    // 0x4c39d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c39d4:
    // 0x4c39d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c39d8:
    // 0x4c39d8: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x4c39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_4c39dc:
    // 0x4c39dc: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x4c39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_4c39e0:
    // 0x4c39e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c39e4:
    // 0x4c39e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c39e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c39e8:
    // 0x4c39e8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c39e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c39ec:
    // 0x4c39ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c39f0:
    // 0x4c39f0: 0x26220cc2  addiu       $v0, $s1, 0xCC2
    ctx->pc = 0x4c39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3266));
label_4c39f4:
    // 0x4c39f4: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x4c39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_4c39f8:
    // 0x4c39f8: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x4c39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_4c39fc:
    // 0x4c39fc: 0xc156828  jal         func_55A0A0
label_4c3a00:
    if (ctx->pc == 0x4C3A00u) {
        ctx->pc = 0x4C3A00u;
            // 0x4c3a00: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x4C3A04u;
        goto label_4c3a04;
    }
    ctx->pc = 0x4C39FCu;
    SET_GPR_U32(ctx, 31, 0x4C3A04u);
    ctx->pc = 0x4C3A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C39FCu;
            // 0x4c3a00: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A04u; }
        if (ctx->pc != 0x4C3A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A04u; }
        if (ctx->pc != 0x4C3A04u) { return; }
    }
    ctx->pc = 0x4C3A04u;
label_4c3a04:
    // 0x4c3a04: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4c3a08:
    if (ctx->pc == 0x4C3A08u) {
        ctx->pc = 0x4C3A08u;
            // 0x4c3a08: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4C3A0Cu;
        goto label_4c3a0c;
    }
    ctx->pc = 0x4C3A04u;
    {
        const bool branch_taken_0x4c3a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3A04u;
            // 0x4c3a08: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3a04) {
            ctx->pc = 0x4C3A7Cu;
            goto label_4c3a7c;
        }
    }
    ctx->pc = 0x4C3A0Cu;
label_4c3a0c:
    // 0x4c3a0c: 0xc040180  jal         func_100600
label_4c3a10:
    if (ctx->pc == 0x4C3A10u) {
        ctx->pc = 0x4C3A14u;
        goto label_4c3a14;
    }
    ctx->pc = 0x4C3A0Cu;
    SET_GPR_U32(ctx, 31, 0x4C3A14u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A14u; }
        if (ctx->pc != 0x4C3A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A14u; }
        if (ctx->pc != 0x4C3A14u) { return; }
    }
    ctx->pc = 0x4C3A14u;
label_4c3a14:
    // 0x4c3a14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_4c3a18:
    if (ctx->pc == 0x4C3A18u) {
        ctx->pc = 0x4C3A18u;
            // 0x4c3a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3A1Cu;
        goto label_4c3a1c;
    }
    ctx->pc = 0x4C3A14u;
    {
        const bool branch_taken_0x4c3a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3A14u;
            // 0x4c3a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3a14) {
            ctx->pc = 0x4C3A78u;
            goto label_4c3a78;
        }
    }
    ctx->pc = 0x4C3A1Cu;
label_4c3a1c:
    // 0x4c3a1c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4c3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4c3a20:
    // 0x4c3a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3a24:
    // 0x4c3a24: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x4c3a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_4c3a28:
    // 0x4c3a28: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4c3a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c3a2c:
    // 0x4c3a2c: 0xc10ca68  jal         func_4329A0
label_4c3a30:
    if (ctx->pc == 0x4C3A30u) {
        ctx->pc = 0x4C3A30u;
            // 0x4c3a30: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4C3A34u;
        goto label_4c3a34;
    }
    ctx->pc = 0x4C3A2Cu;
    SET_GPR_U32(ctx, 31, 0x4C3A34u);
    ctx->pc = 0x4C3A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3A2Cu;
            // 0x4c3a30: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A34u; }
        if (ctx->pc != 0x4C3A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A34u; }
        if (ctx->pc != 0x4C3A34u) { return; }
    }
    ctx->pc = 0x4C3A34u;
label_4c3a34:
    // 0x4c3a34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c3a38:
    // 0x4c3a38: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x4c3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_4c3a3c:
    // 0x4c3a3c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4c3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4c3a40:
    // 0x4c3a40: 0xc148880  jal         func_522200
label_4c3a44:
    if (ctx->pc == 0x4C3A44u) {
        ctx->pc = 0x4C3A44u;
            // 0x4c3a44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4C3A48u;
        goto label_4c3a48;
    }
    ctx->pc = 0x4C3A40u;
    SET_GPR_U32(ctx, 31, 0x4C3A48u);
    ctx->pc = 0x4C3A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3A40u;
            // 0x4c3a44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A48u; }
        if (ctx->pc != 0x4C3A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A48u; }
        if (ctx->pc != 0x4C3A48u) { return; }
    }
    ctx->pc = 0x4C3A48u;
label_4c3a48:
    // 0x4c3a48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c3a4c:
    // 0x4c3a4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c3a50:
    // 0x4c3a50: 0x24425580  addiu       $v0, $v0, 0x5580
    ctx->pc = 0x4c3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21888));
label_4c3a54:
    // 0x4c3a54: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x4c3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
label_4c3a58:
    // 0x4c3a58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4c3a5c:
    // 0x4c3a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3a60:
    // 0x4c3a60: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4c3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4c3a64:
    // 0x4c3a64: 0x26220cc2  addiu       $v0, $s1, 0xCC2
    ctx->pc = 0x4c3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3266));
label_4c3a68:
    // 0x4c3a68: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4c3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4c3a6c:
    // 0x4c3a6c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x4c3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_4c3a70:
    // 0x4c3a70: 0xc156828  jal         func_55A0A0
label_4c3a74:
    if (ctx->pc == 0x4C3A74u) {
        ctx->pc = 0x4C3A74u;
            // 0x4c3a74: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x4C3A78u;
        goto label_4c3a78;
    }
    ctx->pc = 0x4C3A70u;
    SET_GPR_U32(ctx, 31, 0x4C3A78u);
    ctx->pc = 0x4C3A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3A70u;
            // 0x4c3a74: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A78u; }
        if (ctx->pc != 0x4C3A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A78u; }
        if (ctx->pc != 0x4C3A78u) { return; }
    }
    ctx->pc = 0x4C3A78u;
label_4c3a78:
    // 0x4c3a78: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4c3a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4c3a7c:
    // 0x4c3a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c3a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c3a80:
    // 0x4c3a80: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4c3a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4c3a84:
    // 0x4c3a84: 0x320f809  jalr        $t9
label_4c3a88:
    if (ctx->pc == 0x4C3A88u) {
        ctx->pc = 0x4C3A88u;
            // 0x4c3a88: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x4C3A8Cu;
        goto label_4c3a8c;
    }
    ctx->pc = 0x4C3A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C3A8Cu);
        ctx->pc = 0x4C3A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3A84u;
            // 0x4c3a88: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C3A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C3A8Cu; }
            if (ctx->pc != 0x4C3A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C3A8Cu;
label_4c3a8c:
    // 0x4c3a8c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4c3a90:
    // 0x4c3a90: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4c3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4c3a94:
    // 0x4c3a94: 0xa060007f  sb          $zero, 0x7F($v1)
    ctx->pc = 0x4c3a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 0));
label_4c3a98:
    // 0x4c3a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c3a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3a9c:
    // 0x4c3a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c3a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3aa0:
    // 0x4c3aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c3aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c3aa4:
    // 0x4c3aa4: 0x3e00008  jr          $ra
label_4c3aa8:
    if (ctx->pc == 0x4C3AA8u) {
        ctx->pc = 0x4C3AA8u;
            // 0x4c3aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C3AACu;
        goto label_4c3aac;
    }
    ctx->pc = 0x4C3AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3AA4u;
            // 0x4c3aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3AACu;
label_4c3aac:
    // 0x4c3aac: 0x0  nop
    ctx->pc = 0x4c3aacu;
    // NOP
label_4c3ab0:
    // 0x4c3ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c3ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c3ab4:
    // 0x4c3ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c3ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c3ab8:
    // 0x4c3ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c3ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c3abc:
    // 0x4c3abc: 0x8c830d58  lw          $v1, 0xD58($a0)
    ctx->pc = 0x4c3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3416)));
label_4c3ac0:
    // 0x4c3ac0: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x4c3ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_4c3ac4:
    // 0x4c3ac4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4c3ac4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c3ac8:
    // 0x4c3ac8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_4c3acc:
    if (ctx->pc == 0x4C3ACCu) {
        ctx->pc = 0x4C3ACCu;
            // 0x4c3acc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3AD0u;
        goto label_4c3ad0;
    }
    ctx->pc = 0x4C3AC8u;
    {
        const bool branch_taken_0x4c3ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3AC8u;
            // 0x4c3acc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3ac8) {
            ctx->pc = 0x4C3AF4u;
            goto label_4c3af4;
        }
    }
    ctx->pc = 0x4C3AD0u;
label_4c3ad0:
    // 0x4c3ad0: 0x8e030cb4  lw          $v1, 0xCB4($s0)
    ctx->pc = 0x4c3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3252)));
label_4c3ad4:
    // 0x4c3ad4: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x4c3ad4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4c3ad8:
    // 0x4c3ad8: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_4c3adc:
    if (ctx->pc == 0x4C3ADCu) {
        ctx->pc = 0x4C3ADCu;
            // 0x4c3adc: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x4C3AE0u;
        goto label_4c3ae0;
    }
    ctx->pc = 0x4C3AD8u;
    {
        const bool branch_taken_0x4c3ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ad8) {
            ctx->pc = 0x4C3ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3AD8u;
            // 0x4c3adc: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3AF8u;
            goto label_4c3af8;
        }
    }
    ctx->pc = 0x4C3AE0u;
label_4c3ae0:
    // 0x4c3ae0: 0x8e040d64  lw          $a0, 0xD64($s0)
    ctx->pc = 0x4c3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3428)));
label_4c3ae4:
    // 0x4c3ae4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c3ae8:
    if (ctx->pc == 0x4C3AE8u) {
        ctx->pc = 0x4C3AECu;
        goto label_4c3aec;
    }
    ctx->pc = 0x4C3AE4u;
    {
        const bool branch_taken_0x4c3ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ae4) {
            ctx->pc = 0x4C3AF4u;
            goto label_4c3af4;
        }
    }
    ctx->pc = 0x4C3AECu;
label_4c3aec:
    // 0x4c3aec: 0xc0dcc24  jal         func_373090
label_4c3af0:
    if (ctx->pc == 0x4C3AF0u) {
        ctx->pc = 0x4C3AF0u;
            // 0x4c3af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C3AF4u;
        goto label_4c3af4;
    }
    ctx->pc = 0x4C3AECu;
    SET_GPR_U32(ctx, 31, 0x4C3AF4u);
    ctx->pc = 0x4C3AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3AECu;
            // 0x4c3af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x373090u;
    if (runtime->hasFunction(0x373090u)) {
        auto targetFn = runtime->lookupFunction(0x373090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3AF4u; }
        if (ctx->pc != 0x4C3AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00373090_0x373090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3AF4u; }
        if (ctx->pc != 0x4C3AF4u) { return; }
    }
    ctx->pc = 0x4C3AF4u;
label_4c3af4:
    // 0x4c3af4: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x4c3af4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_4c3af8:
    // 0x4c3af8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x4c3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4c3afc:
    // 0x4c3afc: 0x50830091  beql        $a0, $v1, . + 4 + (0x91 << 2)
label_4c3b00:
    if (ctx->pc == 0x4C3B00u) {
        ctx->pc = 0x4C3B00u;
            // 0x4c3b00: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C3B04u;
        goto label_4c3b04;
    }
    ctx->pc = 0x4C3AFCu;
    {
        const bool branch_taken_0x4c3afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c3afc) {
            ctx->pc = 0x4C3B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3AFCu;
            // 0x4c3b00: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3D44u;
            goto label_4c3d44;
        }
    }
    ctx->pc = 0x4C3B04u;
label_4c3b04:
    // 0x4c3b04: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x4c3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4c3b08:
    // 0x4c3b08: 0x10830077  beq         $a0, $v1, . + 4 + (0x77 << 2)
label_4c3b0c:
    if (ctx->pc == 0x4C3B0Cu) {
        ctx->pc = 0x4C3B10u;
        goto label_4c3b10;
    }
    ctx->pc = 0x4C3B08u;
    {
        const bool branch_taken_0x4c3b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c3b08) {
            ctx->pc = 0x4C3CE8u;
            goto label_4c3ce8;
        }
    }
    ctx->pc = 0x4C3B10u;
label_4c3b10:
    // 0x4c3b10: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x4c3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4c3b14:
    // 0x4c3b14: 0x10820048  beq         $a0, $v0, . + 4 + (0x48 << 2)
label_4c3b18:
    if (ctx->pc == 0x4C3B18u) {
        ctx->pc = 0x4C3B1Cu;
        goto label_4c3b1c;
    }
    ctx->pc = 0x4C3B14u;
    {
        const bool branch_taken_0x4c3b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c3b14) {
            ctx->pc = 0x4C3C38u;
            goto label_4c3c38;
        }
    }
    ctx->pc = 0x4C3B1Cu;
label_4c3b1c:
    // 0x4c3b1c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4c3b20:
    // 0x4c3b20: 0x50820034  beql        $a0, $v0, . + 4 + (0x34 << 2)
label_4c3b24:
    if (ctx->pc == 0x4C3B24u) {
        ctx->pc = 0x4C3B24u;
            // 0x4c3b24: 0x8e020d58  lw          $v0, 0xD58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3416)));
        ctx->pc = 0x4C3B28u;
        goto label_4c3b28;
    }
    ctx->pc = 0x4C3B20u;
    {
        const bool branch_taken_0x4c3b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c3b20) {
            ctx->pc = 0x4C3B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3B20u;
            // 0x4c3b24: 0x8e020d58  lw          $v0, 0xD58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3BF4u;
            goto label_4c3bf4;
        }
    }
    ctx->pc = 0x4C3B28u;
label_4c3b28:
    // 0x4c3b28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4c3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4c3b2c:
    // 0x4c3b2c: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
label_4c3b30:
    if (ctx->pc == 0x4C3B30u) {
        ctx->pc = 0x4C3B34u;
        goto label_4c3b34;
    }
    ctx->pc = 0x4C3B2Cu;
    {
        const bool branch_taken_0x4c3b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c3b2c) {
            ctx->pc = 0x4C3BDCu;
            goto label_4c3bdc;
        }
    }
    ctx->pc = 0x4C3B34u;
label_4c3b34:
    // 0x4c3b34: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4c3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4c3b38:
    // 0x4c3b38: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
label_4c3b3c:
    if (ctx->pc == 0x4C3B3Cu) {
        ctx->pc = 0x4C3B3Cu;
            // 0x4c3b3c: 0x8e020cd4  lw          $v0, 0xCD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
        ctx->pc = 0x4C3B40u;
        goto label_4c3b40;
    }
    ctx->pc = 0x4C3B38u;
    {
        const bool branch_taken_0x4c3b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c3b38) {
            ctx->pc = 0x4C3B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3B38u;
            // 0x4c3b3c: 0x8e020cd4  lw          $v0, 0xCD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3B4Cu;
            goto label_4c3b4c;
        }
    }
    ctx->pc = 0x4C3B40u;
label_4c3b40:
    // 0x4c3b40: 0x10000087  b           . + 4 + (0x87 << 2)
label_4c3b44:
    if (ctx->pc == 0x4C3B44u) {
        ctx->pc = 0x4C3B44u;
            // 0x4c3b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3B48u;
        goto label_4c3b48;
    }
    ctx->pc = 0x4C3B40u;
    {
        const bool branch_taken_0x4c3b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3B40u;
            // 0x4c3b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3b40) {
            ctx->pc = 0x4C3D60u;
            goto label_4c3d60;
        }
    }
    ctx->pc = 0x4C3B48u;
label_4c3b48:
    // 0x4c3b48: 0x8e020cd4  lw          $v0, 0xCD4($s0)
    ctx->pc = 0x4c3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
label_4c3b4c:
    // 0x4c3b4c: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_4c3b50:
    if (ctx->pc == 0x4C3B50u) {
        ctx->pc = 0x4C3B54u;
        goto label_4c3b54;
    }
    ctx->pc = 0x4C3B4Cu;
    {
        const bool branch_taken_0x4c3b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3b4c) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3B54u;
label_4c3b54:
    // 0x4c3b54: 0xae020d70  sw          $v0, 0xD70($s0)
    ctx->pc = 0x4c3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3440), GPR_U32(ctx, 2));
label_4c3b58:
    // 0x4c3b58: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4c3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4c3b5c:
    // 0x4c3b5c: 0x8e060cd4  lw          $a2, 0xCD4($s0)
    ctx->pc = 0x4c3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
label_4c3b60:
    // 0x4c3b60: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4c3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4c3b64:
    // 0x4c3b64: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x4c3b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4c3b68:
    // 0x4c3b68: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4c3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4c3b6c:
    // 0x4c3b6c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x4c3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_4c3b70:
    // 0x4c3b70: 0x24c62710  addiu       $a2, $a2, 0x2710
    ctx->pc = 0x4c3b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10000));
label_4c3b74:
    // 0x4c3b74: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x4c3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_4c3b78:
    // 0x4c3b78: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x4c3b78u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_4c3b7c:
    // 0x4c3b7c: 0xae060cd4  sw          $a2, 0xCD4($s0)
    ctx->pc = 0x4c3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 6));
label_4c3b80:
    // 0x4c3b80: 0x0  nop
    ctx->pc = 0x4c3b80u;
    // NOP
label_4c3b84:
    // 0x4c3b84: 0x2810  mfhi        $a1
    ctx->pc = 0x4c3b84u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4c3b88:
    // 0x4c3b88: 0x860019  multu       $a0, $a2
    ctx->pc = 0x4c3b88u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c3b8c:
    // 0x4c3b8c: 0xa6050cbe  sh          $a1, 0xCBE($s0)
    ctx->pc = 0x4c3b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3262), (uint16_t)GPR_U32(ctx, 5));
label_4c3b90:
    // 0x4c3b90: 0x0  nop
    ctx->pc = 0x4c3b90u;
    // NOP
label_4c3b94:
    // 0x4c3b94: 0x2010  mfhi        $a0
    ctx->pc = 0x4c3b94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4c3b98:
    // 0x4c3b98: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x4c3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_4c3b9c:
    // 0x4c3b9c: 0x440019  multu       $v0, $a0
    ctx->pc = 0x4c3b9cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c3ba0:
    // 0x4c3ba0: 0x1010  mfhi        $v0
    ctx->pc = 0x4c3ba0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4c3ba4:
    // 0x4c3ba4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x4c3ba4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_4c3ba8:
    // 0x4c3ba8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4c3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4c3bac:
    // 0x4c3bac: 0x0  nop
    ctx->pc = 0x4c3bacu;
    // NOP
label_4c3bb0:
    // 0x4c3bb0: 0x1010  mfhi        $v0
    ctx->pc = 0x4c3bb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4c3bb4:
    // 0x4c3bb4: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4c3bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4c3bb8:
    // 0x4c3bb8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4c3bbc:
    if (ctx->pc == 0x4C3BBCu) {
        ctx->pc = 0x4C3BBCu;
            // 0x4c3bbc: 0xa2020cbd  sb          $v0, 0xCBD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3261), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C3BC0u;
        goto label_4c3bc0;
    }
    ctx->pc = 0x4C3BB8u;
    {
        const bool branch_taken_0x4c3bb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3BB8u;
            // 0x4c3bbc: 0xa2020cbd  sb          $v0, 0xCBD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3261), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3bb8) {
            ctx->pc = 0x4C3BD4u;
            goto label_4c3bd4;
        }
    }
    ctx->pc = 0x4C3BC0u;
label_4c3bc0:
    // 0x4c3bc0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4c3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4c3bc4:
    // 0x4c3bc4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4c3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4c3bc8:
    // 0x4c3bc8: 0xa6020cbe  sh          $v0, 0xCBE($s0)
    ctx->pc = 0x4c3bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3262), (uint16_t)GPR_U32(ctx, 2));
label_4c3bcc:
    // 0x4c3bcc: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4c3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4c3bd0:
    // 0x4c3bd0: 0xa2020cbd  sb          $v0, 0xCBD($s0)
    ctx->pc = 0x4c3bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3261), (uint8_t)GPR_U32(ctx, 2));
label_4c3bd4:
    // 0x4c3bd4: 0x10000061  b           . + 4 + (0x61 << 2)
label_4c3bd8:
    if (ctx->pc == 0x4C3BD8u) {
        ctx->pc = 0x4C3BD8u;
            // 0x4c3bd8: 0xa2030cbc  sb          $v1, 0xCBC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3260), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C3BDCu;
        goto label_4c3bdc;
    }
    ctx->pc = 0x4C3BD4u;
    {
        const bool branch_taken_0x4c3bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3BD4u;
            // 0x4c3bd8: 0xa2030cbc  sb          $v1, 0xCBC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3260), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3bd4) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3BDCu;
label_4c3bdc:
    // 0x4c3bdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c3be0:
    // 0x4c3be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3be4:
    // 0x4c3be4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4c3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4c3be8:
    // 0x4c3be8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_4c3bec:
    if (ctx->pc == 0x4C3BECu) {
        ctx->pc = 0x4C3BECu;
            // 0x4c3bec: 0xa043007f  sb          $v1, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C3BF0u;
        goto label_4c3bf0;
    }
    ctx->pc = 0x4C3BE8u;
    {
        const bool branch_taken_0x4c3be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3BE8u;
            // 0x4c3bec: 0xa043007f  sb          $v1, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3be8) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3BF0u;
label_4c3bf0:
    // 0x4c3bf0: 0x8e020d58  lw          $v0, 0xD58($s0)
    ctx->pc = 0x4c3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3416)));
label_4c3bf4:
    // 0x4c3bf4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x4c3bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_4c3bf8:
    // 0x4c3bf8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c3bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c3bfc:
    // 0x4c3bfc: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_4c3c00:
    if (ctx->pc == 0x4C3C00u) {
        ctx->pc = 0x4C3C04u;
        goto label_4c3c04;
    }
    ctx->pc = 0x4C3BFCu;
    {
        const bool branch_taken_0x4c3bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3bfc) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3C04u;
label_4c3c04:
    // 0x4c3c04: 0x8e030cc4  lw          $v1, 0xCC4($s0)
    ctx->pc = 0x4c3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3268)));
label_4c3c08:
    // 0x4c3c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3c0c:
    // 0x4c3c0c: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
label_4c3c10:
    if (ctx->pc == 0x4C3C10u) {
        ctx->pc = 0x4C3C14u;
        goto label_4c3c14;
    }
    ctx->pc = 0x4C3C0Cu;
    {
        const bool branch_taken_0x4c3c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c3c0c) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3C14u;
label_4c3c14:
    // 0x4c3c14: 0xc0cc87c  jal         func_3321F0
label_4c3c18:
    if (ctx->pc == 0x4C3C18u) {
        ctx->pc = 0x4C3C18u;
            // 0x4c3c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3C1Cu;
        goto label_4c3c1c;
    }
    ctx->pc = 0x4C3C14u;
    SET_GPR_U32(ctx, 31, 0x4C3C1Cu);
    ctx->pc = 0x4C3C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3C14u;
            // 0x4c3c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321F0u;
    if (runtime->hasFunction(0x3321F0u)) {
        auto targetFn = runtime->lookupFunction(0x3321F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3C1Cu; }
        if (ctx->pc != 0x4C3C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321F0_0x3321f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3C1Cu; }
        if (ctx->pc != 0x4C3C1Cu) { return; }
    }
    ctx->pc = 0x4C3C1Cu;
label_4c3c1c:
    // 0x4c3c1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4c3c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c3c20:
    // 0x4c3c20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c3c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c3c24:
    // 0x4c3c24: 0x0  nop
    ctx->pc = 0x4c3c24u;
    // NOP
label_4c3c28:
    // 0x4c3c28: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4c3c2c:
    if (ctx->pc == 0x4C3C2Cu) {
        ctx->pc = 0x4C3C30u;
        goto label_4c3c30;
    }
    ctx->pc = 0x4C3C28u;
    {
        const bool branch_taken_0x4c3c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3c28) {
            ctx->pc = 0x4C3C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c3c14;
        }
    }
    ctx->pc = 0x4C3C30u;
label_4c3c30:
    // 0x4c3c30: 0x1000004a  b           . + 4 + (0x4A << 2)
label_4c3c34:
    if (ctx->pc == 0x4C3C34u) {
        ctx->pc = 0x4C3C38u;
        goto label_4c3c38;
    }
    ctx->pc = 0x4C3C30u;
    {
        const bool branch_taken_0x4c3c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3c30) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3C38u;
label_4c3c38:
    // 0x4c3c38: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c3c3c:
    // 0x4c3c3c: 0x8e030854  lw          $v1, 0x854($s0)
    ctx->pc = 0x4c3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2132)));
label_4c3c40:
    // 0x4c3c40: 0x8c42c810  lw          $v0, -0x37F0($v0)
    ctx->pc = 0x4c3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952976)));
label_4c3c44:
    // 0x4c3c44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c3c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c3c48:
    // 0x4c3c48: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_4c3c4c:
    if (ctx->pc == 0x4C3C4Cu) {
        ctx->pc = 0x4C3C50u;
        goto label_4c3c50;
    }
    ctx->pc = 0x4C3C48u;
    {
        const bool branch_taken_0x4c3c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3c48) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3C50u;
label_4c3c50:
    // 0x4c3c50: 0xc6010844  lwc1        $f1, 0x844($s0)
    ctx->pc = 0x4c3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c3c54:
    // 0x4c3c54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4c3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4c3c58:
    // 0x4c3c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c3c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c3c5c:
    // 0x4c3c5c: 0x0  nop
    ctx->pc = 0x4c3c5cu;
    // NOP
label_4c3c60:
    // 0x4c3c60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c3c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c3c64:
    // 0x4c3c64: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4c3c68:
    if (ctx->pc == 0x4C3C68u) {
        ctx->pc = 0x4C3C68u;
            // 0x4c3c68: 0x26040838  addiu       $a0, $s0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2104));
        ctx->pc = 0x4C3C6Cu;
        goto label_4c3c6c;
    }
    ctx->pc = 0x4C3C64u;
    {
        const bool branch_taken_0x4c3c64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C3C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3C64u;
            // 0x4c3c68: 0x26040838  addiu       $a0, $s0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3c64) {
            ctx->pc = 0x4C3C7Cu;
            goto label_4c3c7c;
        }
    }
    ctx->pc = 0x4C3C6Cu;
label_4c3c6c:
    // 0x4c3c6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c3c6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c3c70:
    // 0x4c3c70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c3c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4c3c74:
    // 0x4c3c74: 0x10000008  b           . + 4 + (0x8 << 2)
label_4c3c78:
    if (ctx->pc == 0x4C3C78u) {
        ctx->pc = 0x4C3C78u;
            // 0x4c3c78: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x4C3C7Cu;
        goto label_4c3c7c;
    }
    ctx->pc = 0x4C3C74u;
    {
        const bool branch_taken_0x4c3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3C74u;
            // 0x4c3c78: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3c74) {
            ctx->pc = 0x4C3C98u;
            goto label_4c3c98;
        }
    }
    ctx->pc = 0x4C3C7Cu;
label_4c3c7c:
    // 0x4c3c7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4c3c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4c3c80:
    // 0x4c3c80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4c3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4c3c84:
    // 0x4c3c84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c3c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c3c88:
    // 0x4c3c88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c3c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4c3c8c:
    // 0x4c3c8c: 0x0  nop
    ctx->pc = 0x4c3c8cu;
    // NOP
label_4c3c90:
    // 0x4c3c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c3c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c3c94:
    // 0x4c3c94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c3c98:
    // 0x4c3c98: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x4c3c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c3c9c:
    // 0x4c3c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c3ca0:
    // 0x4c3ca0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4c3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4c3ca4:
    // 0x4c3ca4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x4c3ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c3ca8:
    // 0x4c3ca8: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x4c3ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4c3cac:
    // 0x4c3cac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4c3cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c3cb0:
    // 0x4c3cb0: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x4c3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_4c3cb4:
    // 0x4c3cb4: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x4c3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c3cb8:
    // 0x4c3cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c3cbc:
    // 0x4c3cbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c3cc0:
    // 0x4c3cc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4c3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4c3cc4:
    // 0x4c3cc4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4c3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4c3cc8:
    // 0x4c3cc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4c3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c3ccc:
    // 0x4c3ccc: 0x2c410064  sltiu       $at, $v0, 0x64
    ctx->pc = 0x4c3cccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_4c3cd0:
    // 0x4c3cd0: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_4c3cd4:
    if (ctx->pc == 0x4C3CD4u) {
        ctx->pc = 0x4C3CD8u;
        goto label_4c3cd8;
    }
    ctx->pc = 0x4C3CD0u;
    {
        const bool branch_taken_0x4c3cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3cd0) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3CD8u;
label_4c3cd8:
    // 0x4c3cd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c3cdc:
    // 0x4c3cdc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4c3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4c3ce0:
    // 0x4c3ce0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4c3ce4:
    if (ctx->pc == 0x4C3CE4u) {
        ctx->pc = 0x4C3CE4u;
            // 0x4c3ce4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4C3CE8u;
        goto label_4c3ce8;
    }
    ctx->pc = 0x4C3CE0u;
    {
        const bool branch_taken_0x4c3ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3CE0u;
            // 0x4c3ce4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3ce0) {
            ctx->pc = 0x4C3D5Cu;
            goto label_4c3d5c;
        }
    }
    ctx->pc = 0x4C3CE8u;
label_4c3ce8:
    // 0x4c3ce8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4c3cec:
    // 0x4c3cec: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x4c3cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_4c3cf0:
    // 0x4c3cf0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4c3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4c3cf4:
    // 0x4c3cf4: 0xc6010d60  lwc1        $f1, 0xD60($s0)
    ctx->pc = 0x4c3cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c3cf8:
    // 0x4c3cf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4c3cf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c3cfc:
    // 0x4c3cfc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4c3cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c3d00:
    // 0x4c3d00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4c3d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4c3d04:
    // 0x4c3d04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c3d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c3d08:
    // 0x4c3d08: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_4c3d0c:
    if (ctx->pc == 0x4C3D0Cu) {
        ctx->pc = 0x4C3D0Cu;
            // 0x4c3d0c: 0xe6010d60  swc1        $f1, 0xD60($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3424), bits); }
        ctx->pc = 0x4C3D10u;
        goto label_4c3d10;
    }
    ctx->pc = 0x4C3D08u;
    {
        const bool branch_taken_0x4c3d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C3D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3D08u;
            // 0x4c3d0c: 0xe6010d60  swc1        $f1, 0xD60($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3d08) {
            ctx->pc = 0x4C3D68u;
            goto label_4c3d68;
        }
    }
    ctx->pc = 0x4C3D10u;
label_4c3d10:
    // 0x4c3d10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c3d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3d14:
    // 0x4c3d14: 0xa0650080  sb          $a1, 0x80($v1)
    ctx->pc = 0x4c3d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 128), (uint8_t)GPR_U32(ctx, 5));
label_4c3d18:
    // 0x4c3d18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c3d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c3d1c:
    // 0x4c3d1c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4c3d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4c3d20:
    // 0x4c3d20: 0x320f809  jalr        $t9
label_4c3d24:
    if (ctx->pc == 0x4C3D24u) {
        ctx->pc = 0x4C3D24u;
            // 0x4c3d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D28u;
        goto label_4c3d28;
    }
    ctx->pc = 0x4C3D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C3D28u);
        ctx->pc = 0x4C3D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3D20u;
            // 0x4c3d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C3D28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C3D28u; }
            if (ctx->pc != 0x4C3D28u) { return; }
        }
        }
    }
    ctx->pc = 0x4C3D28u;
label_4c3d28:
    // 0x4c3d28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c3d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c3d2c:
    // 0x4c3d2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4c3d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4c3d30:
    // 0x4c3d30: 0x320f809  jalr        $t9
label_4c3d34:
    if (ctx->pc == 0x4C3D34u) {
        ctx->pc = 0x4C3D34u;
            // 0x4c3d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D38u;
        goto label_4c3d38;
    }
    ctx->pc = 0x4C3D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C3D38u);
        ctx->pc = 0x4C3D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3D30u;
            // 0x4c3d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C3D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C3D38u; }
            if (ctx->pc != 0x4C3D38u) { return; }
        }
        }
    }
    ctx->pc = 0x4C3D38u;
label_4c3d38:
    // 0x4c3d38: 0x1000000c  b           . + 4 + (0xC << 2)
label_4c3d3c:
    if (ctx->pc == 0x4C3D3Cu) {
        ctx->pc = 0x4C3D3Cu;
            // 0x4c3d3c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4C3D40u;
        goto label_4c3d40;
    }
    ctx->pc = 0x4C3D38u;
    {
        const bool branch_taken_0x4c3d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3D38u;
            // 0x4c3d3c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3d38) {
            ctx->pc = 0x4C3D6Cu;
            goto label_4c3d6c;
        }
    }
    ctx->pc = 0x4C3D40u;
label_4c3d40:
    // 0x4c3d40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c3d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c3d44:
    // 0x4c3d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3d48:
    // 0x4c3d48: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4c3d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4c3d4c:
    // 0x4c3d4c: 0x320f809  jalr        $t9
label_4c3d50:
    if (ctx->pc == 0x4C3D50u) {
        ctx->pc = 0x4C3D50u;
            // 0x4c3d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D54u;
        goto label_4c3d54;
    }
    ctx->pc = 0x4C3D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C3D54u);
        ctx->pc = 0x4C3D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3D4Cu;
            // 0x4c3d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C3D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C3D54u; }
            if (ctx->pc != 0x4C3D54u) { return; }
        }
        }
    }
    ctx->pc = 0x4C3D54u;
label_4c3d54:
    // 0x4c3d54: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c3d58:
    if (ctx->pc == 0x4C3D58u) {
        ctx->pc = 0x4C3D5Cu;
        goto label_4c3d5c;
    }
    ctx->pc = 0x4C3D54u;
    {
        const bool branch_taken_0x4c3d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3d54) {
            ctx->pc = 0x4C3D68u;
            goto label_4c3d68;
        }
    }
    ctx->pc = 0x4C3D5Cu;
label_4c3d5c:
    // 0x4c3d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3d60:
    // 0x4c3d60: 0xc0cfba8  jal         func_33EEA0
label_4c3d64:
    if (ctx->pc == 0x4C3D64u) {
        ctx->pc = 0x4C3D68u;
        goto label_4c3d68;
    }
    ctx->pc = 0x4C3D60u;
    SET_GPR_U32(ctx, 31, 0x4C3D68u);
    ctx->pc = 0x33EEA0u;
    if (runtime->hasFunction(0x33EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x33EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3D68u; }
        if (ctx->pc != 0x4C3D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033EEA0_0x33eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3D68u; }
        if (ctx->pc != 0x4C3D68u) { return; }
    }
    ctx->pc = 0x4C3D68u;
label_4c3d68:
    // 0x4c3d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c3d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3d6c:
    // 0x4c3d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c3d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c3d70:
    // 0x4c3d70: 0x3e00008  jr          $ra
label_4c3d74:
    if (ctx->pc == 0x4C3D74u) {
        ctx->pc = 0x4C3D74u;
            // 0x4c3d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C3D78u;
        goto label_4c3d78;
    }
    ctx->pc = 0x4C3D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3D70u;
            // 0x4c3d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3D78u;
label_4c3d78:
    // 0x4c3d78: 0x0  nop
    ctx->pc = 0x4c3d78u;
    // NOP
label_4c3d7c:
    // 0x4c3d7c: 0x0  nop
    ctx->pc = 0x4c3d7cu;
    // NOP
label_4c3d80:
    // 0x4c3d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c3d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c3d84:
    // 0x4c3d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c3d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c3d88:
    // 0x4c3d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c3d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c3d8c:
    // 0x4c3d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c3d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c3d90:
    // 0x4c3d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c3d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3d94:
    // 0x4c3d94: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4c3d98:
    if (ctx->pc == 0x4C3D98u) {
        ctx->pc = 0x4C3D98u;
            // 0x4c3d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D9Cu;
        goto label_4c3d9c;
    }
    ctx->pc = 0x4C3D94u;
    {
        const bool branch_taken_0x4c3d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3D94u;
            // 0x4c3d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3d94) {
            ctx->pc = 0x4C3E00u;
            goto label_4c3e00;
        }
    }
    ctx->pc = 0x4C3D9Cu;
label_4c3d9c:
    // 0x4c3d9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c3da0:
    // 0x4c3da0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c3da4:
    // 0x4c3da4: 0x24631520  addiu       $v1, $v1, 0x1520
    ctx->pc = 0x4c3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5408));
label_4c3da8:
    // 0x4c3da8: 0x24421558  addiu       $v0, $v0, 0x1558
    ctx->pc = 0x4c3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5464));
label_4c3dac:
    // 0x4c3dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c3db0:
    // 0x4c3db0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4c3db4:
    if (ctx->pc == 0x4C3DB4u) {
        ctx->pc = 0x4C3DB4u;
            // 0x4c3db4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4C3DB8u;
        goto label_4c3db8;
    }
    ctx->pc = 0x4C3DB0u;
    {
        const bool branch_taken_0x4c3db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3DB0u;
            // 0x4c3db4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3db0) {
            ctx->pc = 0x4C3DE8u;
            goto label_4c3de8;
        }
    }
    ctx->pc = 0x4C3DB8u;
label_4c3db8:
    // 0x4c3db8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c3dbc:
    // 0x4c3dbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c3dc0:
    // 0x4c3dc0: 0x24631680  addiu       $v1, $v1, 0x1680
    ctx->pc = 0x4c3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5760));
label_4c3dc4:
    // 0x4c3dc4: 0x244216b8  addiu       $v0, $v0, 0x16B8
    ctx->pc = 0x4c3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5816));
label_4c3dc8:
    // 0x4c3dc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c3dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c3dcc:
    // 0x4c3dcc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x4c3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_4c3dd0:
    // 0x4c3dd0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4c3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4c3dd4:
    // 0x4c3dd4: 0xc0aed1c  jal         func_2BB470
label_4c3dd8:
    if (ctx->pc == 0x4C3DD8u) {
        ctx->pc = 0x4C3DD8u;
            // 0x4c3dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3DDCu;
        goto label_4c3ddc;
    }
    ctx->pc = 0x4C3DD4u;
    SET_GPR_U32(ctx, 31, 0x4C3DDCu);
    ctx->pc = 0x4C3DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3DD4u;
            // 0x4c3dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3DDCu; }
        if (ctx->pc != 0x4C3DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3DDCu; }
        if (ctx->pc != 0x4C3DDCu) { return; }
    }
    ctx->pc = 0x4C3DDCu;
label_4c3ddc:
    // 0x4c3ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3de0:
    // 0x4c3de0: 0xc130f88  jal         func_4C3E20
label_4c3de4:
    if (ctx->pc == 0x4C3DE4u) {
        ctx->pc = 0x4C3DE4u;
            // 0x4c3de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3DE8u;
        goto label_4c3de8;
    }
    ctx->pc = 0x4C3DE0u;
    SET_GPR_U32(ctx, 31, 0x4C3DE8u);
    ctx->pc = 0x4C3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3DE0u;
            // 0x4c3de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C3E20u;
    if (runtime->hasFunction(0x4C3E20u)) {
        auto targetFn = runtime->lookupFunction(0x4C3E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3DE8u; }
        if (ctx->pc != 0x4C3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C3E20_0x4c3e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3DE8u; }
        if (ctx->pc != 0x4C3DE8u) { return; }
    }
    ctx->pc = 0x4C3DE8u;
label_4c3de8:
    // 0x4c3de8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c3de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4c3dec:
    // 0x4c3dec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c3decu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c3df0:
    // 0x4c3df0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c3df4:
    if (ctx->pc == 0x4C3DF4u) {
        ctx->pc = 0x4C3DF4u;
            // 0x4c3df4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3DF8u;
        goto label_4c3df8;
    }
    ctx->pc = 0x4C3DF0u;
    {
        const bool branch_taken_0x4c3df0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c3df0) {
            ctx->pc = 0x4C3DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3DF0u;
            // 0x4c3df4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3E04u;
            goto label_4c3e04;
        }
    }
    ctx->pc = 0x4C3DF8u;
label_4c3df8:
    // 0x4c3df8: 0xc0400a8  jal         func_1002A0
label_4c3dfc:
    if (ctx->pc == 0x4C3DFCu) {
        ctx->pc = 0x4C3DFCu;
            // 0x4c3dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E00u;
        goto label_4c3e00;
    }
    ctx->pc = 0x4C3DF8u;
    SET_GPR_U32(ctx, 31, 0x4C3E00u);
    ctx->pc = 0x4C3DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3DF8u;
            // 0x4c3dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3E00u; }
        if (ctx->pc != 0x4C3E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3E00u; }
        if (ctx->pc != 0x4C3E00u) { return; }
    }
    ctx->pc = 0x4C3E00u;
label_4c3e00:
    // 0x4c3e00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c3e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3e04:
    // 0x4c3e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c3e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3e08:
    // 0x4c3e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c3e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3e0c:
    // 0x4c3e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c3e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c3e10:
    // 0x4c3e10: 0x3e00008  jr          $ra
label_4c3e14:
    if (ctx->pc == 0x4C3E14u) {
        ctx->pc = 0x4C3E14u;
            // 0x4c3e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C3E18u;
        goto label_4c3e18;
    }
    ctx->pc = 0x4C3E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3E10u;
            // 0x4c3e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3E18u;
label_4c3e18:
    // 0x4c3e18: 0x0  nop
    ctx->pc = 0x4c3e18u;
    // NOP
label_4c3e1c:
    // 0x4c3e1c: 0x0  nop
    ctx->pc = 0x4c3e1cu;
    // NOP
}
