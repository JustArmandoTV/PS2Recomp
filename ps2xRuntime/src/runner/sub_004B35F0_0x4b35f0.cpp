#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B35F0
// Address: 0x4b35f0 - 0x4b3af0
void sub_004B35F0_0x4b35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B35F0_0x4b35f0");
#endif

    switch (ctx->pc) {
        case 0x4b35f0u: goto label_4b35f0;
        case 0x4b35f4u: goto label_4b35f4;
        case 0x4b35f8u: goto label_4b35f8;
        case 0x4b35fcu: goto label_4b35fc;
        case 0x4b3600u: goto label_4b3600;
        case 0x4b3604u: goto label_4b3604;
        case 0x4b3608u: goto label_4b3608;
        case 0x4b360cu: goto label_4b360c;
        case 0x4b3610u: goto label_4b3610;
        case 0x4b3614u: goto label_4b3614;
        case 0x4b3618u: goto label_4b3618;
        case 0x4b361cu: goto label_4b361c;
        case 0x4b3620u: goto label_4b3620;
        case 0x4b3624u: goto label_4b3624;
        case 0x4b3628u: goto label_4b3628;
        case 0x4b362cu: goto label_4b362c;
        case 0x4b3630u: goto label_4b3630;
        case 0x4b3634u: goto label_4b3634;
        case 0x4b3638u: goto label_4b3638;
        case 0x4b363cu: goto label_4b363c;
        case 0x4b3640u: goto label_4b3640;
        case 0x4b3644u: goto label_4b3644;
        case 0x4b3648u: goto label_4b3648;
        case 0x4b364cu: goto label_4b364c;
        case 0x4b3650u: goto label_4b3650;
        case 0x4b3654u: goto label_4b3654;
        case 0x4b3658u: goto label_4b3658;
        case 0x4b365cu: goto label_4b365c;
        case 0x4b3660u: goto label_4b3660;
        case 0x4b3664u: goto label_4b3664;
        case 0x4b3668u: goto label_4b3668;
        case 0x4b366cu: goto label_4b366c;
        case 0x4b3670u: goto label_4b3670;
        case 0x4b3674u: goto label_4b3674;
        case 0x4b3678u: goto label_4b3678;
        case 0x4b367cu: goto label_4b367c;
        case 0x4b3680u: goto label_4b3680;
        case 0x4b3684u: goto label_4b3684;
        case 0x4b3688u: goto label_4b3688;
        case 0x4b368cu: goto label_4b368c;
        case 0x4b3690u: goto label_4b3690;
        case 0x4b3694u: goto label_4b3694;
        case 0x4b3698u: goto label_4b3698;
        case 0x4b369cu: goto label_4b369c;
        case 0x4b36a0u: goto label_4b36a0;
        case 0x4b36a4u: goto label_4b36a4;
        case 0x4b36a8u: goto label_4b36a8;
        case 0x4b36acu: goto label_4b36ac;
        case 0x4b36b0u: goto label_4b36b0;
        case 0x4b36b4u: goto label_4b36b4;
        case 0x4b36b8u: goto label_4b36b8;
        case 0x4b36bcu: goto label_4b36bc;
        case 0x4b36c0u: goto label_4b36c0;
        case 0x4b36c4u: goto label_4b36c4;
        case 0x4b36c8u: goto label_4b36c8;
        case 0x4b36ccu: goto label_4b36cc;
        case 0x4b36d0u: goto label_4b36d0;
        case 0x4b36d4u: goto label_4b36d4;
        case 0x4b36d8u: goto label_4b36d8;
        case 0x4b36dcu: goto label_4b36dc;
        case 0x4b36e0u: goto label_4b36e0;
        case 0x4b36e4u: goto label_4b36e4;
        case 0x4b36e8u: goto label_4b36e8;
        case 0x4b36ecu: goto label_4b36ec;
        case 0x4b36f0u: goto label_4b36f0;
        case 0x4b36f4u: goto label_4b36f4;
        case 0x4b36f8u: goto label_4b36f8;
        case 0x4b36fcu: goto label_4b36fc;
        case 0x4b3700u: goto label_4b3700;
        case 0x4b3704u: goto label_4b3704;
        case 0x4b3708u: goto label_4b3708;
        case 0x4b370cu: goto label_4b370c;
        case 0x4b3710u: goto label_4b3710;
        case 0x4b3714u: goto label_4b3714;
        case 0x4b3718u: goto label_4b3718;
        case 0x4b371cu: goto label_4b371c;
        case 0x4b3720u: goto label_4b3720;
        case 0x4b3724u: goto label_4b3724;
        case 0x4b3728u: goto label_4b3728;
        case 0x4b372cu: goto label_4b372c;
        case 0x4b3730u: goto label_4b3730;
        case 0x4b3734u: goto label_4b3734;
        case 0x4b3738u: goto label_4b3738;
        case 0x4b373cu: goto label_4b373c;
        case 0x4b3740u: goto label_4b3740;
        case 0x4b3744u: goto label_4b3744;
        case 0x4b3748u: goto label_4b3748;
        case 0x4b374cu: goto label_4b374c;
        case 0x4b3750u: goto label_4b3750;
        case 0x4b3754u: goto label_4b3754;
        case 0x4b3758u: goto label_4b3758;
        case 0x4b375cu: goto label_4b375c;
        case 0x4b3760u: goto label_4b3760;
        case 0x4b3764u: goto label_4b3764;
        case 0x4b3768u: goto label_4b3768;
        case 0x4b376cu: goto label_4b376c;
        case 0x4b3770u: goto label_4b3770;
        case 0x4b3774u: goto label_4b3774;
        case 0x4b3778u: goto label_4b3778;
        case 0x4b377cu: goto label_4b377c;
        case 0x4b3780u: goto label_4b3780;
        case 0x4b3784u: goto label_4b3784;
        case 0x4b3788u: goto label_4b3788;
        case 0x4b378cu: goto label_4b378c;
        case 0x4b3790u: goto label_4b3790;
        case 0x4b3794u: goto label_4b3794;
        case 0x4b3798u: goto label_4b3798;
        case 0x4b379cu: goto label_4b379c;
        case 0x4b37a0u: goto label_4b37a0;
        case 0x4b37a4u: goto label_4b37a4;
        case 0x4b37a8u: goto label_4b37a8;
        case 0x4b37acu: goto label_4b37ac;
        case 0x4b37b0u: goto label_4b37b0;
        case 0x4b37b4u: goto label_4b37b4;
        case 0x4b37b8u: goto label_4b37b8;
        case 0x4b37bcu: goto label_4b37bc;
        case 0x4b37c0u: goto label_4b37c0;
        case 0x4b37c4u: goto label_4b37c4;
        case 0x4b37c8u: goto label_4b37c8;
        case 0x4b37ccu: goto label_4b37cc;
        case 0x4b37d0u: goto label_4b37d0;
        case 0x4b37d4u: goto label_4b37d4;
        case 0x4b37d8u: goto label_4b37d8;
        case 0x4b37dcu: goto label_4b37dc;
        case 0x4b37e0u: goto label_4b37e0;
        case 0x4b37e4u: goto label_4b37e4;
        case 0x4b37e8u: goto label_4b37e8;
        case 0x4b37ecu: goto label_4b37ec;
        case 0x4b37f0u: goto label_4b37f0;
        case 0x4b37f4u: goto label_4b37f4;
        case 0x4b37f8u: goto label_4b37f8;
        case 0x4b37fcu: goto label_4b37fc;
        case 0x4b3800u: goto label_4b3800;
        case 0x4b3804u: goto label_4b3804;
        case 0x4b3808u: goto label_4b3808;
        case 0x4b380cu: goto label_4b380c;
        case 0x4b3810u: goto label_4b3810;
        case 0x4b3814u: goto label_4b3814;
        case 0x4b3818u: goto label_4b3818;
        case 0x4b381cu: goto label_4b381c;
        case 0x4b3820u: goto label_4b3820;
        case 0x4b3824u: goto label_4b3824;
        case 0x4b3828u: goto label_4b3828;
        case 0x4b382cu: goto label_4b382c;
        case 0x4b3830u: goto label_4b3830;
        case 0x4b3834u: goto label_4b3834;
        case 0x4b3838u: goto label_4b3838;
        case 0x4b383cu: goto label_4b383c;
        case 0x4b3840u: goto label_4b3840;
        case 0x4b3844u: goto label_4b3844;
        case 0x4b3848u: goto label_4b3848;
        case 0x4b384cu: goto label_4b384c;
        case 0x4b3850u: goto label_4b3850;
        case 0x4b3854u: goto label_4b3854;
        case 0x4b3858u: goto label_4b3858;
        case 0x4b385cu: goto label_4b385c;
        case 0x4b3860u: goto label_4b3860;
        case 0x4b3864u: goto label_4b3864;
        case 0x4b3868u: goto label_4b3868;
        case 0x4b386cu: goto label_4b386c;
        case 0x4b3870u: goto label_4b3870;
        case 0x4b3874u: goto label_4b3874;
        case 0x4b3878u: goto label_4b3878;
        case 0x4b387cu: goto label_4b387c;
        case 0x4b3880u: goto label_4b3880;
        case 0x4b3884u: goto label_4b3884;
        case 0x4b3888u: goto label_4b3888;
        case 0x4b388cu: goto label_4b388c;
        case 0x4b3890u: goto label_4b3890;
        case 0x4b3894u: goto label_4b3894;
        case 0x4b3898u: goto label_4b3898;
        case 0x4b389cu: goto label_4b389c;
        case 0x4b38a0u: goto label_4b38a0;
        case 0x4b38a4u: goto label_4b38a4;
        case 0x4b38a8u: goto label_4b38a8;
        case 0x4b38acu: goto label_4b38ac;
        case 0x4b38b0u: goto label_4b38b0;
        case 0x4b38b4u: goto label_4b38b4;
        case 0x4b38b8u: goto label_4b38b8;
        case 0x4b38bcu: goto label_4b38bc;
        case 0x4b38c0u: goto label_4b38c0;
        case 0x4b38c4u: goto label_4b38c4;
        case 0x4b38c8u: goto label_4b38c8;
        case 0x4b38ccu: goto label_4b38cc;
        case 0x4b38d0u: goto label_4b38d0;
        case 0x4b38d4u: goto label_4b38d4;
        case 0x4b38d8u: goto label_4b38d8;
        case 0x4b38dcu: goto label_4b38dc;
        case 0x4b38e0u: goto label_4b38e0;
        case 0x4b38e4u: goto label_4b38e4;
        case 0x4b38e8u: goto label_4b38e8;
        case 0x4b38ecu: goto label_4b38ec;
        case 0x4b38f0u: goto label_4b38f0;
        case 0x4b38f4u: goto label_4b38f4;
        case 0x4b38f8u: goto label_4b38f8;
        case 0x4b38fcu: goto label_4b38fc;
        case 0x4b3900u: goto label_4b3900;
        case 0x4b3904u: goto label_4b3904;
        case 0x4b3908u: goto label_4b3908;
        case 0x4b390cu: goto label_4b390c;
        case 0x4b3910u: goto label_4b3910;
        case 0x4b3914u: goto label_4b3914;
        case 0x4b3918u: goto label_4b3918;
        case 0x4b391cu: goto label_4b391c;
        case 0x4b3920u: goto label_4b3920;
        case 0x4b3924u: goto label_4b3924;
        case 0x4b3928u: goto label_4b3928;
        case 0x4b392cu: goto label_4b392c;
        case 0x4b3930u: goto label_4b3930;
        case 0x4b3934u: goto label_4b3934;
        case 0x4b3938u: goto label_4b3938;
        case 0x4b393cu: goto label_4b393c;
        case 0x4b3940u: goto label_4b3940;
        case 0x4b3944u: goto label_4b3944;
        case 0x4b3948u: goto label_4b3948;
        case 0x4b394cu: goto label_4b394c;
        case 0x4b3950u: goto label_4b3950;
        case 0x4b3954u: goto label_4b3954;
        case 0x4b3958u: goto label_4b3958;
        case 0x4b395cu: goto label_4b395c;
        case 0x4b3960u: goto label_4b3960;
        case 0x4b3964u: goto label_4b3964;
        case 0x4b3968u: goto label_4b3968;
        case 0x4b396cu: goto label_4b396c;
        case 0x4b3970u: goto label_4b3970;
        case 0x4b3974u: goto label_4b3974;
        case 0x4b3978u: goto label_4b3978;
        case 0x4b397cu: goto label_4b397c;
        case 0x4b3980u: goto label_4b3980;
        case 0x4b3984u: goto label_4b3984;
        case 0x4b3988u: goto label_4b3988;
        case 0x4b398cu: goto label_4b398c;
        case 0x4b3990u: goto label_4b3990;
        case 0x4b3994u: goto label_4b3994;
        case 0x4b3998u: goto label_4b3998;
        case 0x4b399cu: goto label_4b399c;
        case 0x4b39a0u: goto label_4b39a0;
        case 0x4b39a4u: goto label_4b39a4;
        case 0x4b39a8u: goto label_4b39a8;
        case 0x4b39acu: goto label_4b39ac;
        case 0x4b39b0u: goto label_4b39b0;
        case 0x4b39b4u: goto label_4b39b4;
        case 0x4b39b8u: goto label_4b39b8;
        case 0x4b39bcu: goto label_4b39bc;
        case 0x4b39c0u: goto label_4b39c0;
        case 0x4b39c4u: goto label_4b39c4;
        case 0x4b39c8u: goto label_4b39c8;
        case 0x4b39ccu: goto label_4b39cc;
        case 0x4b39d0u: goto label_4b39d0;
        case 0x4b39d4u: goto label_4b39d4;
        case 0x4b39d8u: goto label_4b39d8;
        case 0x4b39dcu: goto label_4b39dc;
        case 0x4b39e0u: goto label_4b39e0;
        case 0x4b39e4u: goto label_4b39e4;
        case 0x4b39e8u: goto label_4b39e8;
        case 0x4b39ecu: goto label_4b39ec;
        case 0x4b39f0u: goto label_4b39f0;
        case 0x4b39f4u: goto label_4b39f4;
        case 0x4b39f8u: goto label_4b39f8;
        case 0x4b39fcu: goto label_4b39fc;
        case 0x4b3a00u: goto label_4b3a00;
        case 0x4b3a04u: goto label_4b3a04;
        case 0x4b3a08u: goto label_4b3a08;
        case 0x4b3a0cu: goto label_4b3a0c;
        case 0x4b3a10u: goto label_4b3a10;
        case 0x4b3a14u: goto label_4b3a14;
        case 0x4b3a18u: goto label_4b3a18;
        case 0x4b3a1cu: goto label_4b3a1c;
        case 0x4b3a20u: goto label_4b3a20;
        case 0x4b3a24u: goto label_4b3a24;
        case 0x4b3a28u: goto label_4b3a28;
        case 0x4b3a2cu: goto label_4b3a2c;
        case 0x4b3a30u: goto label_4b3a30;
        case 0x4b3a34u: goto label_4b3a34;
        case 0x4b3a38u: goto label_4b3a38;
        case 0x4b3a3cu: goto label_4b3a3c;
        case 0x4b3a40u: goto label_4b3a40;
        case 0x4b3a44u: goto label_4b3a44;
        case 0x4b3a48u: goto label_4b3a48;
        case 0x4b3a4cu: goto label_4b3a4c;
        case 0x4b3a50u: goto label_4b3a50;
        case 0x4b3a54u: goto label_4b3a54;
        case 0x4b3a58u: goto label_4b3a58;
        case 0x4b3a5cu: goto label_4b3a5c;
        case 0x4b3a60u: goto label_4b3a60;
        case 0x4b3a64u: goto label_4b3a64;
        case 0x4b3a68u: goto label_4b3a68;
        case 0x4b3a6cu: goto label_4b3a6c;
        case 0x4b3a70u: goto label_4b3a70;
        case 0x4b3a74u: goto label_4b3a74;
        case 0x4b3a78u: goto label_4b3a78;
        case 0x4b3a7cu: goto label_4b3a7c;
        case 0x4b3a80u: goto label_4b3a80;
        case 0x4b3a84u: goto label_4b3a84;
        case 0x4b3a88u: goto label_4b3a88;
        case 0x4b3a8cu: goto label_4b3a8c;
        case 0x4b3a90u: goto label_4b3a90;
        case 0x4b3a94u: goto label_4b3a94;
        case 0x4b3a98u: goto label_4b3a98;
        case 0x4b3a9cu: goto label_4b3a9c;
        case 0x4b3aa0u: goto label_4b3aa0;
        case 0x4b3aa4u: goto label_4b3aa4;
        case 0x4b3aa8u: goto label_4b3aa8;
        case 0x4b3aacu: goto label_4b3aac;
        case 0x4b3ab0u: goto label_4b3ab0;
        case 0x4b3ab4u: goto label_4b3ab4;
        case 0x4b3ab8u: goto label_4b3ab8;
        case 0x4b3abcu: goto label_4b3abc;
        case 0x4b3ac0u: goto label_4b3ac0;
        case 0x4b3ac4u: goto label_4b3ac4;
        case 0x4b3ac8u: goto label_4b3ac8;
        case 0x4b3accu: goto label_4b3acc;
        case 0x4b3ad0u: goto label_4b3ad0;
        case 0x4b3ad4u: goto label_4b3ad4;
        case 0x4b3ad8u: goto label_4b3ad8;
        case 0x4b3adcu: goto label_4b3adc;
        case 0x4b3ae0u: goto label_4b3ae0;
        case 0x4b3ae4u: goto label_4b3ae4;
        case 0x4b3ae8u: goto label_4b3ae8;
        case 0x4b3aecu: goto label_4b3aec;
        default: break;
    }

    ctx->pc = 0x4b35f0u;

label_4b35f0:
    // 0x4b35f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4b35f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4b35f4:
    // 0x4b35f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4b35f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4b35f8:
    // 0x4b35f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4b35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4b35fc:
    // 0x4b35fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4b35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4b3600:
    // 0x4b3600: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x4b3600u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4b3604:
    // 0x4b3604: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b3604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b3608:
    // 0x4b3608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b360c:
    // 0x4b360c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x4b360cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4b3610:
    // 0x4b3610: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b3610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b3614:
    // 0x4b3614: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b3614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b3618:
    // 0x4b3618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b3618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b361c:
    // 0x4b361c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4b361cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b3620:
    // 0x4b3620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b3620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b3624:
    // 0x4b3624: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b3624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b3628:
    // 0x4b3628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b3628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b362c:
    // 0x4b362c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4b362cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4b3630:
    // 0x4b3630: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x4b3630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4b3634:
    // 0x4b3634: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_4b3638:
    if (ctx->pc == 0x4B3638u) {
        ctx->pc = 0x4B3638u;
            // 0x4b3638: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B363Cu;
        goto label_4b363c;
    }
    ctx->pc = 0x4B3634u;
    {
        const bool branch_taken_0x4b3634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3634u;
            // 0x4b3638: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3634) {
            ctx->pc = 0x4B37B0u;
            goto label_4b37b0;
        }
    }
    ctx->pc = 0x4B363Cu;
label_4b363c:
    // 0x4b363c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b3640:
    // 0x4b3640: 0xc04f278  jal         func_13C9E0
label_4b3644:
    if (ctx->pc == 0x4B3644u) {
        ctx->pc = 0x4B3644u;
            // 0x4b3644: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4B3648u;
        goto label_4b3648;
    }
    ctx->pc = 0x4B3640u;
    SET_GPR_U32(ctx, 31, 0x4B3648u);
    ctx->pc = 0x4B3644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3640u;
            // 0x4b3644: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3648u; }
        if (ctx->pc != 0x4B3648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3648u; }
        if (ctx->pc != 0x4B3648u) { return; }
    }
    ctx->pc = 0x4B3648u;
label_4b3648:
    // 0x4b3648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b364c:
    // 0x4b364c: 0xc04ce80  jal         func_133A00
label_4b3650:
    if (ctx->pc == 0x4B3650u) {
        ctx->pc = 0x4B3650u;
            // 0x4b3650: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4B3654u;
        goto label_4b3654;
    }
    ctx->pc = 0x4B364Cu;
    SET_GPR_U32(ctx, 31, 0x4B3654u);
    ctx->pc = 0x4B3650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B364Cu;
            // 0x4b3650: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3654u; }
        if (ctx->pc != 0x4B3654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3654u; }
        if (ctx->pc != 0x4B3654u) { return; }
    }
    ctx->pc = 0x4B3654u;
label_4b3654:
    // 0x4b3654: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b3654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b3658:
    // 0x4b3658: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x4b3658u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_4b365c:
    // 0x4b365c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4b365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4b3660:
    // 0x4b3660: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x4b3660u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b3664:
    // 0x4b3664: 0xc07698c  jal         func_1DA630
label_4b3668:
    if (ctx->pc == 0x4B3668u) {
        ctx->pc = 0x4B3668u;
            // 0x4b3668: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B366Cu;
        goto label_4b366c;
    }
    ctx->pc = 0x4B3664u;
    SET_GPR_U32(ctx, 31, 0x4B366Cu);
    ctx->pc = 0x4B3668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3664u;
            // 0x4b3668: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B366Cu; }
        if (ctx->pc != 0x4B366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B366Cu; }
        if (ctx->pc != 0x4B366Cu) { return; }
    }
    ctx->pc = 0x4B366Cu;
label_4b366c:
    // 0x4b366c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b3670:
    // 0x4b3670: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4b3674:
    if (ctx->pc == 0x4B3674u) {
        ctx->pc = 0x4B3678u;
        goto label_4b3678;
    }
    ctx->pc = 0x4B3670u;
    {
        const bool branch_taken_0x4b3670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b3670) {
            ctx->pc = 0x4B3680u;
            goto label_4b3680;
        }
    }
    ctx->pc = 0x4B3678u;
label_4b3678:
    // 0x4b3678: 0x10000033  b           . + 4 + (0x33 << 2)
label_4b367c:
    if (ctx->pc == 0x4B367Cu) {
        ctx->pc = 0x4B367Cu;
            // 0x4b367c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B3680u;
        goto label_4b3680;
    }
    ctx->pc = 0x4B3678u;
    {
        const bool branch_taken_0x4b3678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3678u;
            // 0x4b367c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3678) {
            ctx->pc = 0x4B3748u;
            goto label_4b3748;
        }
    }
    ctx->pc = 0x4B3680u;
label_4b3680:
    // 0x4b3680: 0xc0576f4  jal         func_15DBD0
label_4b3684:
    if (ctx->pc == 0x4B3684u) {
        ctx->pc = 0x4B3688u;
        goto label_4b3688;
    }
    ctx->pc = 0x4B3680u;
    SET_GPR_U32(ctx, 31, 0x4B3688u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3688u; }
        if (ctx->pc != 0x4B3688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3688u; }
        if (ctx->pc != 0x4B3688u) { return; }
    }
    ctx->pc = 0x4B3688u;
label_4b3688:
    // 0x4b3688: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b3688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b368c:
    // 0x4b368c: 0xc076984  jal         func_1DA610
label_4b3690:
    if (ctx->pc == 0x4B3690u) {
        ctx->pc = 0x4B3690u;
            // 0x4b3690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3694u;
        goto label_4b3694;
    }
    ctx->pc = 0x4B368Cu;
    SET_GPR_U32(ctx, 31, 0x4B3694u);
    ctx->pc = 0x4B3690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B368Cu;
            // 0x4b3690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3694u; }
        if (ctx->pc != 0x4B3694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3694u; }
        if (ctx->pc != 0x4B3694u) { return; }
    }
    ctx->pc = 0x4B3694u;
label_4b3694:
    // 0x4b3694: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b3694u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b3698:
    // 0x4b3698: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4b3698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4b369c:
    // 0x4b369c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b36a0:
    // 0x4b36a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b36a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b36a4:
    // 0x4b36a4: 0xc44240e0  lwc1        $f2, 0x40E0($v0)
    ctx->pc = 0x4b36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b36a8:
    // 0x4b36a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b36a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b36ac:
    // 0x4b36ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b36acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b36b0:
    // 0x4b36b0: 0xc44140e8  lwc1        $f1, 0x40E8($v0)
    ctx->pc = 0x4b36b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b36b4:
    // 0x4b36b4: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x4b36b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4b36b8:
    // 0x4b36b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b36bc:
    // 0x4b36bc: 0xc44040ec  lwc1        $f0, 0x40EC($v0)
    ctx->pc = 0x4b36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b36c0:
    // 0x4b36c0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4b36c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4b36c4:
    // 0x4b36c4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b36c8:
    // 0x4b36c8: 0x8c4240e4  lw          $v0, 0x40E4($v0)
    ctx->pc = 0x4b36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16612)));
label_4b36cc:
    // 0x4b36cc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4b36ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_4b36d0:
    // 0x4b36d0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x4b36d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_4b36d4:
    // 0x4b36d4: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x4b36d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b36d8:
    // 0x4b36d8: 0xc04cca0  jal         func_133280
label_4b36dc:
    if (ctx->pc == 0x4B36DCu) {
        ctx->pc = 0x4B36DCu;
            // 0x4b36dc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x4B36E0u;
        goto label_4b36e0;
    }
    ctx->pc = 0x4B36D8u;
    SET_GPR_U32(ctx, 31, 0x4B36E0u);
    ctx->pc = 0x4B36DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B36D8u;
            // 0x4b36dc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B36E0u; }
        if (ctx->pc != 0x4B36E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B36E0u; }
        if (ctx->pc != 0x4B36E0u) { return; }
    }
    ctx->pc = 0x4B36E0u;
label_4b36e0:
    // 0x4b36e0: 0xc076980  jal         func_1DA600
label_4b36e4:
    if (ctx->pc == 0x4B36E4u) {
        ctx->pc = 0x4B36E4u;
            // 0x4b36e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B36E8u;
        goto label_4b36e8;
    }
    ctx->pc = 0x4B36E0u;
    SET_GPR_U32(ctx, 31, 0x4B36E8u);
    ctx->pc = 0x4B36E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B36E0u;
            // 0x4b36e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B36E8u; }
        if (ctx->pc != 0x4B36E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B36E8u; }
        if (ctx->pc != 0x4B36E8u) { return; }
    }
    ctx->pc = 0x4B36E8u;
label_4b36e8:
    // 0x4b36e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4b36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4b36ec:
    // 0x4b36ec: 0xc04cc34  jal         func_1330D0
label_4b36f0:
    if (ctx->pc == 0x4B36F0u) {
        ctx->pc = 0x4B36F0u;
            // 0x4b36f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B36F4u;
        goto label_4b36f4;
    }
    ctx->pc = 0x4B36ECu;
    SET_GPR_U32(ctx, 31, 0x4B36F4u);
    ctx->pc = 0x4B36F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B36ECu;
            // 0x4b36f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B36F4u; }
        if (ctx->pc != 0x4B36F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B36F4u; }
        if (ctx->pc != 0x4B36F4u) { return; }
    }
    ctx->pc = 0x4B36F4u;
label_4b36f4:
    // 0x4b36f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4b36f8:
    // 0x4b36f8: 0xc46158e8  lwc1        $f1, 0x58E8($v1)
    ctx->pc = 0x4b36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b36fc:
    // 0x4b36fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b36fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b3700:
    // 0x4b3700: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b3704:
    if (ctx->pc == 0x4B3704u) {
        ctx->pc = 0x4B3704u;
            // 0x4b3704: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3708u;
        goto label_4b3708;
    }
    ctx->pc = 0x4B3700u;
    {
        const bool branch_taken_0x4b3700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b3700) {
            ctx->pc = 0x4B3704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3700u;
            // 0x4b3704: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3710u;
            goto label_4b3710;
        }
    }
    ctx->pc = 0x4B3708u;
label_4b3708:
    // 0x4b3708: 0x1000000f  b           . + 4 + (0xF << 2)
label_4b370c:
    if (ctx->pc == 0x4B370Cu) {
        ctx->pc = 0x4B370Cu;
            // 0x4b370c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4B3710u;
        goto label_4b3710;
    }
    ctx->pc = 0x4B3708u;
    {
        const bool branch_taken_0x4b3708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3708u;
            // 0x4b370c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3708) {
            ctx->pc = 0x4B3748u;
            goto label_4b3748;
        }
    }
    ctx->pc = 0x4B3710u;
label_4b3710:
    // 0x4b3710: 0xc07697c  jal         func_1DA5F0
label_4b3714:
    if (ctx->pc == 0x4B3714u) {
        ctx->pc = 0x4B3718u;
        goto label_4b3718;
    }
    ctx->pc = 0x4B3710u;
    SET_GPR_U32(ctx, 31, 0x4B3718u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3718u; }
        if (ctx->pc != 0x4B3718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3718u; }
        if (ctx->pc != 0x4B3718u) { return; }
    }
    ctx->pc = 0x4B3718u;
label_4b3718:
    // 0x4b3718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b3718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b371c:
    // 0x4b371c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b3720:
    // 0x4b3720: 0xc04cd60  jal         func_133580
label_4b3724:
    if (ctx->pc == 0x4B3724u) {
        ctx->pc = 0x4B3724u;
            // 0x4b3724: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3728u;
        goto label_4b3728;
    }
    ctx->pc = 0x4B3720u;
    SET_GPR_U32(ctx, 31, 0x4B3728u);
    ctx->pc = 0x4B3724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3720u;
            // 0x4b3724: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3728u; }
        if (ctx->pc != 0x4B3728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3728u; }
        if (ctx->pc != 0x4B3728u) { return; }
    }
    ctx->pc = 0x4B3728u;
label_4b3728:
    // 0x4b3728: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4b3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4b372c:
    // 0x4b372c: 0xc04c650  jal         func_131940
label_4b3730:
    if (ctx->pc == 0x4B3730u) {
        ctx->pc = 0x4B3730u;
            // 0x4b3730: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B3734u;
        goto label_4b3734;
    }
    ctx->pc = 0x4B372Cu;
    SET_GPR_U32(ctx, 31, 0x4B3734u);
    ctx->pc = 0x4B3730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B372Cu;
            // 0x4b3730: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3734u; }
        if (ctx->pc != 0x4B3734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3734u; }
        if (ctx->pc != 0x4B3734u) { return; }
    }
    ctx->pc = 0x4B3734u;
label_4b3734:
    // 0x4b3734: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4b3734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4b3738:
    // 0x4b3738: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4b3738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b373c:
    // 0x4b373c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4b373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4b3740:
    // 0x4b3740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b3740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b3744:
    // 0x4b3744: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b3744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b3748:
    // 0x4b3748: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4b3748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4b374c:
    // 0x4b374c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_4b3750:
    if (ctx->pc == 0x4B3750u) {
        ctx->pc = 0x4B3750u;
            // 0x4b3750: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4B3754u;
        goto label_4b3754;
    }
    ctx->pc = 0x4B374Cu;
    {
        const bool branch_taken_0x4b374c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B374Cu;
            // 0x4b3750: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b374c) {
            ctx->pc = 0x4B37B0u;
            goto label_4b37b0;
        }
    }
    ctx->pc = 0x4B3754u;
label_4b3754:
    // 0x4b3754: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4b3754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b3758:
    // 0x4b3758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b375c:
    // 0x4b375c: 0xc04cd60  jal         func_133580
label_4b3760:
    if (ctx->pc == 0x4B3760u) {
        ctx->pc = 0x4B3760u;
            // 0x4b3760: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3764u;
        goto label_4b3764;
    }
    ctx->pc = 0x4B375Cu;
    SET_GPR_U32(ctx, 31, 0x4B3764u);
    ctx->pc = 0x4B3760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B375Cu;
            // 0x4b3760: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3764u; }
        if (ctx->pc != 0x4B3764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3764u; }
        if (ctx->pc != 0x4B3764u) { return; }
    }
    ctx->pc = 0x4B3764u;
label_4b3764:
    // 0x4b3764: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x4b3764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4b3768:
    // 0x4b3768: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4b3768u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4b376c:
    // 0x4b376c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4b376cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b3770:
    // 0x4b3770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b3774:
    // 0x4b3774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b3774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b3778:
    // 0x4b3778: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4b3778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4b377c:
    // 0x4b377c: 0xc04cfcc  jal         func_133F30
label_4b3780:
    if (ctx->pc == 0x4B3780u) {
        ctx->pc = 0x4B3780u;
            // 0x4b3780: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3784u;
        goto label_4b3784;
    }
    ctx->pc = 0x4B377Cu;
    SET_GPR_U32(ctx, 31, 0x4B3784u);
    ctx->pc = 0x4B3780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B377Cu;
            // 0x4b3780: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3784u; }
        if (ctx->pc != 0x4B3784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3784u; }
        if (ctx->pc != 0x4B3784u) { return; }
    }
    ctx->pc = 0x4B3784u;
label_4b3784:
    // 0x4b3784: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4b3784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4b3788:
    // 0x4b3788: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4b3788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b378c:
    // 0x4b378c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x4b378cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4b3790:
    // 0x4b3790: 0xc054bbc  jal         func_152EF0
label_4b3794:
    if (ctx->pc == 0x4B3794u) {
        ctx->pc = 0x4B3794u;
            // 0x4b3794: 0xc68c00d4  lwc1        $f12, 0xD4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4B3798u;
        goto label_4b3798;
    }
    ctx->pc = 0x4B3790u;
    SET_GPR_U32(ctx, 31, 0x4B3798u);
    ctx->pc = 0x4B3794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3790u;
            // 0x4b3794: 0xc68c00d4  lwc1        $f12, 0xD4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3798u; }
        if (ctx->pc != 0x4B3798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3798u; }
        if (ctx->pc != 0x4B3798u) { return; }
    }
    ctx->pc = 0x4B3798u;
label_4b3798:
    // 0x4b3798: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4b3798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4b379c:
    // 0x4b379c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b379cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b37a0:
    // 0x4b37a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b37a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b37a4:
    // 0x4b37a4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4b37a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4b37a8:
    // 0x4b37a8: 0xc054c2c  jal         func_1530B0
label_4b37ac:
    if (ctx->pc == 0x4B37ACu) {
        ctx->pc = 0x4B37ACu;
            // 0x4b37ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B37B0u;
        goto label_4b37b0;
    }
    ctx->pc = 0x4B37A8u;
    SET_GPR_U32(ctx, 31, 0x4B37B0u);
    ctx->pc = 0x4B37ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B37A8u;
            // 0x4b37ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B37B0u; }
        if (ctx->pc != 0x4B37B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B37B0u; }
        if (ctx->pc != 0x4B37B0u) { return; }
    }
    ctx->pc = 0x4B37B0u;
label_4b37b0:
    // 0x4b37b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b37b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4b37b4:
    // 0x4b37b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4b37b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b37b8:
    // 0x4b37b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b37b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b37bc:
    // 0x4b37bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b37bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b37c0:
    // 0x4b37c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b37c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b37c4:
    // 0x4b37c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b37c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b37c8:
    // 0x4b37c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b37c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b37cc:
    // 0x4b37cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b37ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b37d0:
    // 0x4b37d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b37d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b37d4:
    // 0x4b37d4: 0x3e00008  jr          $ra
label_4b37d8:
    if (ctx->pc == 0x4B37D8u) {
        ctx->pc = 0x4B37D8u;
            // 0x4b37d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4B37DCu;
        goto label_4b37dc;
    }
    ctx->pc = 0x4B37D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B37D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B37D4u;
            // 0x4b37d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B37DCu;
label_4b37dc:
    // 0x4b37dc: 0x0  nop
    ctx->pc = 0x4b37dcu;
    // NOP
label_4b37e0:
    // 0x4b37e0: 0x3e00008  jr          $ra
label_4b37e4:
    if (ctx->pc == 0x4B37E4u) {
        ctx->pc = 0x4B37E4u;
            // 0x4b37e4: 0x24025a32  addiu       $v0, $zero, 0x5A32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23090));
        ctx->pc = 0x4B37E8u;
        goto label_4b37e8;
    }
    ctx->pc = 0x4B37E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B37E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B37E0u;
            // 0x4b37e4: 0x24025a32  addiu       $v0, $zero, 0x5A32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23090));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B37E8u;
label_4b37e8:
    // 0x4b37e8: 0x0  nop
    ctx->pc = 0x4b37e8u;
    // NOP
label_4b37ec:
    // 0x4b37ec: 0x0  nop
    ctx->pc = 0x4b37ecu;
    // NOP
label_4b37f0:
    // 0x4b37f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b37f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4b37f4:
    // 0x4b37f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b37f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4b37f8:
    // 0x4b37f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b37f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b37fc:
    // 0x4b37fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b37fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b3800:
    // 0x4b3800: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b3800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b3804:
    // 0x4b3804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b3804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b3808:
    // 0x4b3808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b3808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b380c:
    // 0x4b380c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b3810:
    // 0x4b3810: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4b3810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b3814:
    // 0x4b3814: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4b3818:
    if (ctx->pc == 0x4B3818u) {
        ctx->pc = 0x4B3818u;
            // 0x4b3818: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B381Cu;
        goto label_4b381c;
    }
    ctx->pc = 0x4B3814u;
    {
        const bool branch_taken_0x4b3814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3814u;
            // 0x4b3818: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3814) {
            ctx->pc = 0x4B3858u;
            goto label_4b3858;
        }
    }
    ctx->pc = 0x4B381Cu;
label_4b381c:
    // 0x4b381c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b381cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3820:
    // 0x4b3820: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b3820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3824:
    // 0x4b3824: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b3824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3828:
    // 0x4b3828: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4b3828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4b382c:
    // 0x4b382c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b3830:
    // 0x4b3830: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b3830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b3834:
    // 0x4b3834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b3834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b3838:
    // 0x4b3838: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4b3838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4b383c:
    // 0x4b383c: 0x320f809  jalr        $t9
label_4b3840:
    if (ctx->pc == 0x4B3840u) {
        ctx->pc = 0x4B3844u;
        goto label_4b3844;
    }
    ctx->pc = 0x4B383Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B3844u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B3844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B3844u; }
            if (ctx->pc != 0x4B3844u) { return; }
        }
        }
    }
    ctx->pc = 0x4B3844u;
label_4b3844:
    // 0x4b3844: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4b3844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4b3848:
    // 0x4b3848: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b3848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b384c:
    // 0x4b384c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4b384cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4b3850:
    // 0x4b3850: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4b3854:
    if (ctx->pc == 0x4B3854u) {
        ctx->pc = 0x4B3854u;
            // 0x4b3854: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4B3858u;
        goto label_4b3858;
    }
    ctx->pc = 0x4B3850u;
    {
        const bool branch_taken_0x4b3850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3850u;
            // 0x4b3854: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3850) {
            ctx->pc = 0x4B3828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b3828;
        }
    }
    ctx->pc = 0x4B3858u;
label_4b3858:
    // 0x4b3858: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b3858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b385c:
    // 0x4b385c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b385cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b3860:
    // 0x4b3860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b3860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b3864:
    // 0x4b3864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b3864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b3868:
    // 0x4b3868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b3868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b386c:
    // 0x4b386c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b386cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b3870:
    // 0x4b3870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b3874:
    // 0x4b3874: 0x3e00008  jr          $ra
label_4b3878:
    if (ctx->pc == 0x4B3878u) {
        ctx->pc = 0x4B3878u;
            // 0x4b3878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4B387Cu;
        goto label_4b387c;
    }
    ctx->pc = 0x4B3874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3874u;
            // 0x4b3878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B387Cu;
label_4b387c:
    // 0x4b387c: 0x0  nop
    ctx->pc = 0x4b387cu;
    // NOP
label_4b3880:
    // 0x4b3880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b3884:
    // 0x4b3884: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b3884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b3888:
    // 0x4b3888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b3888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b388c:
    // 0x4b388c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4b388cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4b3890:
    // 0x4b3890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b3890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b3894:
    // 0x4b3894: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4b3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4b3898:
    // 0x4b3898: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b3898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b389c:
    // 0x4b389c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4b389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4b38a0:
    // 0x4b38a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b38a4:
    // 0x4b38a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b38a8:
    // 0x4b38a8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4b38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4b38ac:
    // 0x4b38ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4b38acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b38b0:
    // 0x4b38b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4b38b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4b38b4:
    // 0x4b38b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b38b8:
    // 0x4b38b8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4b38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4b38bc:
    // 0x4b38bc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4b38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4b38c0:
    // 0x4b38c0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4b38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4b38c4:
    // 0x4b38c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4b38c8:
    // 0x4b38c8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4b38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4b38cc:
    // 0x4b38cc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4b38ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b38d0:
    // 0x4b38d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4b38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4b38d4:
    // 0x4b38d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b38d8:
    // 0x4b38d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4b38d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b38dc:
    // 0x4b38dc: 0xc0a997c  jal         func_2A65F0
label_4b38e0:
    if (ctx->pc == 0x4B38E0u) {
        ctx->pc = 0x4B38E0u;
            // 0x4b38e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4B38E4u;
        goto label_4b38e4;
    }
    ctx->pc = 0x4B38DCu;
    SET_GPR_U32(ctx, 31, 0x4B38E4u);
    ctx->pc = 0x4B38E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B38DCu;
            // 0x4b38e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B38E4u; }
        if (ctx->pc != 0x4B38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B38E4u; }
        if (ctx->pc != 0x4B38E4u) { return; }
    }
    ctx->pc = 0x4B38E4u;
label_4b38e4:
    // 0x4b38e4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4b38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4b38e8:
    // 0x4b38e8: 0xc0d879c  jal         func_361E70
label_4b38ec:
    if (ctx->pc == 0x4B38ECu) {
        ctx->pc = 0x4B38ECu;
            // 0x4b38ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B38F0u;
        goto label_4b38f0;
    }
    ctx->pc = 0x4B38E8u;
    SET_GPR_U32(ctx, 31, 0x4B38F0u);
    ctx->pc = 0x4B38ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B38E8u;
            // 0x4b38ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B38F0u; }
        if (ctx->pc != 0x4B38F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B38F0u; }
        if (ctx->pc != 0x4B38F0u) { return; }
    }
    ctx->pc = 0x4B38F0u;
label_4b38f0:
    // 0x4b38f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b38f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b38f4:
    // 0x4b38f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b38f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b38f8:
    // 0x4b38f8: 0x3e00008  jr          $ra
label_4b38fc:
    if (ctx->pc == 0x4B38FCu) {
        ctx->pc = 0x4B38FCu;
            // 0x4b38fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B3900u;
        goto label_4b3900;
    }
    ctx->pc = 0x4B38F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B38FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B38F8u;
            // 0x4b38fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3900u;
label_4b3900:
    // 0x4b3900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b3904:
    // 0x4b3904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b3904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b3908:
    // 0x4b3908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b3908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b390c:
    // 0x4b390c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4b390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4b3910:
    // 0x4b3910: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4b3914:
    if (ctx->pc == 0x4B3914u) {
        ctx->pc = 0x4B3914u;
            // 0x4b3914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3918u;
        goto label_4b3918;
    }
    ctx->pc = 0x4B3910u;
    {
        const bool branch_taken_0x4b3910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3910u;
            // 0x4b3914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3910) {
            ctx->pc = 0x4B3A30u;
            goto label_4b3a30;
        }
    }
    ctx->pc = 0x4B3918u;
label_4b3918:
    // 0x4b3918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b3918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4b391c:
    // 0x4b391c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4b391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4b3920:
    // 0x4b3920: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b3920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b3924:
    // 0x4b3924: 0xc075128  jal         func_1D44A0
label_4b3928:
    if (ctx->pc == 0x4B3928u) {
        ctx->pc = 0x4B3928u;
            // 0x4b3928: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4B392Cu;
        goto label_4b392c;
    }
    ctx->pc = 0x4B3924u;
    SET_GPR_U32(ctx, 31, 0x4B392Cu);
    ctx->pc = 0x4B3928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3924u;
            // 0x4b3928: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B392Cu; }
        if (ctx->pc != 0x4B392Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B392Cu; }
        if (ctx->pc != 0x4B392Cu) { return; }
    }
    ctx->pc = 0x4B392Cu;
label_4b392c:
    // 0x4b392c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4b392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b3930:
    // 0x4b3930: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3934:
    // 0x4b3934: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4b3934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4b3938:
    // 0x4b3938: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4b3938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b393c:
    // 0x4b393c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b393cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b3940:
    // 0x4b3940: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b3944:
    if (ctx->pc == 0x4B3944u) {
        ctx->pc = 0x4B3944u;
            // 0x4b3944: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4B3948u;
        goto label_4b3948;
    }
    ctx->pc = 0x4B3940u;
    {
        const bool branch_taken_0x4b3940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3940u;
            // 0x4b3944: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3940) {
            ctx->pc = 0x4B3950u;
            goto label_4b3950;
        }
    }
    ctx->pc = 0x4B3948u;
label_4b3948:
    // 0x4b3948: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b394c:
    // 0x4b394c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4b394cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4b3950:
    // 0x4b3950: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b3954:
    // 0x4b3954: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3958:
    // 0x4b3958: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4b3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4b395c:
    // 0x4b395c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4b395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4b3960:
    // 0x4b3960: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b3960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b3964:
    // 0x4b3964: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b3968:
    if (ctx->pc == 0x4B3968u) {
        ctx->pc = 0x4B3968u;
            // 0x4b3968: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B396Cu;
        goto label_4b396c;
    }
    ctx->pc = 0x4B3964u;
    {
        const bool branch_taken_0x4b3964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3964) {
            ctx->pc = 0x4B3968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3964u;
            // 0x4b3968: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3978u;
            goto label_4b3978;
        }
    }
    ctx->pc = 0x4B396Cu;
label_4b396c:
    // 0x4b396c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b396cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3970:
    // 0x4b3970: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4b3970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4b3974:
    // 0x4b3974: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b3974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b3978:
    // 0x4b3978: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b397c:
    // 0x4b397c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4b397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4b3980:
    // 0x4b3980: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4b3980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4b3984:
    // 0x4b3984: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b3984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b3988:
    // 0x4b3988: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b398c:
    if (ctx->pc == 0x4B398Cu) {
        ctx->pc = 0x4B398Cu;
            // 0x4b398c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4B3990u;
        goto label_4b3990;
    }
    ctx->pc = 0x4B3988u;
    {
        const bool branch_taken_0x4b3988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3988) {
            ctx->pc = 0x4B398Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3988u;
            // 0x4b398c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B399Cu;
            goto label_4b399c;
        }
    }
    ctx->pc = 0x4B3990u;
label_4b3990:
    // 0x4b3990: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b3990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b3994:
    // 0x4b3994: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4b3994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4b3998:
    // 0x4b3998: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4b3998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b399c:
    // 0x4b399c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b399cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b39a0:
    // 0x4b39a0: 0x320f809  jalr        $t9
label_4b39a4:
    if (ctx->pc == 0x4B39A4u) {
        ctx->pc = 0x4B39A4u;
            // 0x4b39a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B39A8u;
        goto label_4b39a8;
    }
    ctx->pc = 0x4B39A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B39A8u);
        ctx->pc = 0x4B39A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B39A0u;
            // 0x4b39a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B39A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B39A8u; }
            if (ctx->pc != 0x4B39A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4B39A8u;
label_4b39a8:
    // 0x4b39a8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4b39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b39ac:
    // 0x4b39ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b39acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b39b0:
    // 0x4b39b0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4b39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4b39b4:
    // 0x4b39b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4b39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4b39b8:
    // 0x4b39b8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4b39b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4b39bc:
    // 0x4b39bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4b39bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b39c0:
    // 0x4b39c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b39c4:
    if (ctx->pc == 0x4B39C4u) {
        ctx->pc = 0x4B39C4u;
            // 0x4b39c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4B39C8u;
        goto label_4b39c8;
    }
    ctx->pc = 0x4B39C0u;
    {
        const bool branch_taken_0x4b39c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b39c0) {
            ctx->pc = 0x4B39C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B39C0u;
            // 0x4b39c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B39D4u;
            goto label_4b39d4;
        }
    }
    ctx->pc = 0x4B39C8u;
label_4b39c8:
    // 0x4b39c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b39cc:
    // 0x4b39cc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4b39ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4b39d0:
    // 0x4b39d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4b39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b39d4:
    // 0x4b39d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b39d8:
    // 0x4b39d8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4b39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4b39dc:
    // 0x4b39dc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4b39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4b39e0:
    // 0x4b39e0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4b39e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4b39e4:
    // 0x4b39e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4b39e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b39e8:
    // 0x4b39e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b39ec:
    if (ctx->pc == 0x4B39ECu) {
        ctx->pc = 0x4B39F0u;
        goto label_4b39f0;
    }
    ctx->pc = 0x4B39E8u;
    {
        const bool branch_taken_0x4b39e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b39e8) {
            ctx->pc = 0x4B39F8u;
            goto label_4b39f8;
        }
    }
    ctx->pc = 0x4B39F0u;
label_4b39f0:
    // 0x4b39f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b39f4:
    // 0x4b39f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4b39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4b39f8:
    // 0x4b39f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b39fc:
    // 0x4b39fc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4b39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4b3a00:
    // 0x4b3a00: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4b3a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b3a04:
    // 0x4b3a04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b3a08:
    if (ctx->pc == 0x4B3A08u) {
        ctx->pc = 0x4B3A0Cu;
        goto label_4b3a0c;
    }
    ctx->pc = 0x4B3A04u;
    {
        const bool branch_taken_0x4b3a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3a04) {
            ctx->pc = 0x4B3A14u;
            goto label_4b3a14;
        }
    }
    ctx->pc = 0x4B3A0Cu;
label_4b3a0c:
    // 0x4b3a0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b3a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b3a10:
    // 0x4b3a10: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4b3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4b3a14:
    // 0x4b3a14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b3a18:
    // 0x4b3a18: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4b3a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4b3a1c:
    // 0x4b3a1c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4b3a1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b3a20:
    // 0x4b3a20: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b3a24:
    if (ctx->pc == 0x4B3A24u) {
        ctx->pc = 0x4B3A24u;
            // 0x4b3a24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4B3A28u;
        goto label_4b3a28;
    }
    ctx->pc = 0x4B3A20u;
    {
        const bool branch_taken_0x4b3a20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3a20) {
            ctx->pc = 0x4B3A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3A20u;
            // 0x4b3a24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3A34u;
            goto label_4b3a34;
        }
    }
    ctx->pc = 0x4B3A28u;
label_4b3a28:
    // 0x4b3a28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b3a2c:
    // 0x4b3a2c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4b3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4b3a30:
    // 0x4b3a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b3a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b3a34:
    // 0x4b3a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b3a38:
    // 0x4b3a38: 0x3e00008  jr          $ra
label_4b3a3c:
    if (ctx->pc == 0x4B3A3Cu) {
        ctx->pc = 0x4B3A3Cu;
            // 0x4b3a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B3A40u;
        goto label_4b3a40;
    }
    ctx->pc = 0x4B3A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3A38u;
            // 0x4b3a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3A40u;
label_4b3a40:
    // 0x4b3a40: 0x812cc44  j           func_4B3110
label_4b3a44:
    if (ctx->pc == 0x4B3A44u) {
        ctx->pc = 0x4B3A44u;
            // 0x4b3a44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B3A48u;
        goto label_4b3a48;
    }
    ctx->pc = 0x4B3A40u;
    ctx->pc = 0x4B3A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3A40u;
            // 0x4b3a44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B3110u;
    {
        auto targetFn = runtime->lookupFunction(0x4B3110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B3A48u;
label_4b3a48:
    // 0x4b3a48: 0x0  nop
    ctx->pc = 0x4b3a48u;
    // NOP
label_4b3a4c:
    // 0x4b3a4c: 0x0  nop
    ctx->pc = 0x4b3a4cu;
    // NOP
label_4b3a50:
    // 0x4b3a50: 0x812caec  j           func_4B2BB0
label_4b3a54:
    if (ctx->pc == 0x4B3A54u) {
        ctx->pc = 0x4B3A54u;
            // 0x4b3a54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B3A58u;
        goto label_4b3a58;
    }
    ctx->pc = 0x4B3A50u;
    ctx->pc = 0x4B3A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3A50u;
            // 0x4b3a54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2BB0u;
    if (runtime->hasFunction(0x4B2BB0u)) {
        auto targetFn = runtime->lookupFunction(0x4B2BB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004B2BB0_0x4b2bb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4B3A58u;
label_4b3a58:
    // 0x4b3a58: 0x0  nop
    ctx->pc = 0x4b3a58u;
    // NOP
label_4b3a5c:
    // 0x4b3a5c: 0x0  nop
    ctx->pc = 0x4b3a5cu;
    // NOP
label_4b3a60:
    // 0x4b3a60: 0x812cb44  j           func_4B2D10
label_4b3a64:
    if (ctx->pc == 0x4B3A64u) {
        ctx->pc = 0x4B3A64u;
            // 0x4b3a64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4B3A68u;
        goto label_4b3a68;
    }
    ctx->pc = 0x4B3A60u;
    ctx->pc = 0x4B3A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3A60u;
            // 0x4b3a64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2D10u;
    {
        auto targetFn = runtime->lookupFunction(0x4B2D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B3A68u;
label_4b3a68:
    // 0x4b3a68: 0x0  nop
    ctx->pc = 0x4b3a68u;
    // NOP
label_4b3a6c:
    // 0x4b3a6c: 0x0  nop
    ctx->pc = 0x4b3a6cu;
    // NOP
label_4b3a70:
    // 0x4b3a70: 0x812cac8  j           func_4B2B20
label_4b3a74:
    if (ctx->pc == 0x4B3A74u) {
        ctx->pc = 0x4B3A74u;
            // 0x4b3a74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B3A78u;
        goto label_4b3a78;
    }
    ctx->pc = 0x4B3A70u;
    ctx->pc = 0x4B3A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3A70u;
            // 0x4b3a74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2B20u;
    {
        auto targetFn = runtime->lookupFunction(0x4B2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B3A78u;
label_4b3a78:
    // 0x4b3a78: 0x0  nop
    ctx->pc = 0x4b3a78u;
    // NOP
label_4b3a7c:
    // 0x4b3a7c: 0x0  nop
    ctx->pc = 0x4b3a7cu;
    // NOP
label_4b3a80:
    // 0x4b3a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b3a84:
    // 0x4b3a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b3a88:
    // 0x4b3a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b3a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b3a8c:
    // 0x4b3a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b3a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b3a90:
    // 0x4b3a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b3a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b3a94:
    // 0x4b3a94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4b3a98:
    if (ctx->pc == 0x4B3A98u) {
        ctx->pc = 0x4B3A98u;
            // 0x4b3a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3A9Cu;
        goto label_4b3a9c;
    }
    ctx->pc = 0x4B3A94u;
    {
        const bool branch_taken_0x4b3a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3A94u;
            // 0x4b3a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3a94) {
            ctx->pc = 0x4B3AD8u;
            goto label_4b3ad8;
        }
    }
    ctx->pc = 0x4B3A9Cu;
label_4b3a9c:
    // 0x4b3a9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b3aa0:
    // 0x4b3aa0: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x4b3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
label_4b3aa4:
    // 0x4b3aa4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4b3aa8:
    if (ctx->pc == 0x4B3AA8u) {
        ctx->pc = 0x4B3AA8u;
            // 0x4b3aa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B3AACu;
        goto label_4b3aac;
    }
    ctx->pc = 0x4B3AA4u;
    {
        const bool branch_taken_0x4b3aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3AA4u;
            // 0x4b3aa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3aa4) {
            ctx->pc = 0x4B3AC0u;
            goto label_4b3ac0;
        }
    }
    ctx->pc = 0x4B3AACu;
label_4b3aac:
    // 0x4b3aac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b3ab0:
    // 0x4b3ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b3ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3ab4:
    // 0x4b3ab4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4b3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4b3ab8:
    // 0x4b3ab8: 0xc057a68  jal         func_15E9A0
label_4b3abc:
    if (ctx->pc == 0x4B3ABCu) {
        ctx->pc = 0x4B3ABCu;
            // 0x4b3abc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B3AC0u;
        goto label_4b3ac0;
    }
    ctx->pc = 0x4B3AB8u;
    SET_GPR_U32(ctx, 31, 0x4B3AC0u);
    ctx->pc = 0x4B3ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3AB8u;
            // 0x4b3abc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3AC0u; }
        if (ctx->pc != 0x4B3AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3AC0u; }
        if (ctx->pc != 0x4B3AC0u) { return; }
    }
    ctx->pc = 0x4B3AC0u;
label_4b3ac0:
    // 0x4b3ac0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b3ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b3ac4:
    // 0x4b3ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b3ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b3ac8:
    // 0x4b3ac8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b3acc:
    if (ctx->pc == 0x4B3ACCu) {
        ctx->pc = 0x4B3ACCu;
            // 0x4b3acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3AD0u;
        goto label_4b3ad0;
    }
    ctx->pc = 0x4B3AC8u;
    {
        const bool branch_taken_0x4b3ac8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b3ac8) {
            ctx->pc = 0x4B3ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3AC8u;
            // 0x4b3acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3ADCu;
            goto label_4b3adc;
        }
    }
    ctx->pc = 0x4B3AD0u;
label_4b3ad0:
    // 0x4b3ad0: 0xc0400a8  jal         func_1002A0
label_4b3ad4:
    if (ctx->pc == 0x4B3AD4u) {
        ctx->pc = 0x4B3AD4u;
            // 0x4b3ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3AD8u;
        goto label_4b3ad8;
    }
    ctx->pc = 0x4B3AD0u;
    SET_GPR_U32(ctx, 31, 0x4B3AD8u);
    ctx->pc = 0x4B3AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3AD0u;
            // 0x4b3ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3AD8u; }
        if (ctx->pc != 0x4B3AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3AD8u; }
        if (ctx->pc != 0x4B3AD8u) { return; }
    }
    ctx->pc = 0x4B3AD8u;
label_4b3ad8:
    // 0x4b3ad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b3ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b3adc:
    // 0x4b3adc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b3adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b3ae0:
    // 0x4b3ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b3ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b3ae4:
    // 0x4b3ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b3ae8:
    // 0x4b3ae8: 0x3e00008  jr          $ra
label_4b3aec:
    if (ctx->pc == 0x4B3AECu) {
        ctx->pc = 0x4B3AECu;
            // 0x4b3aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B3AF0u;
        goto label_fallthrough_0x4b3ae8;
    }
    ctx->pc = 0x4B3AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3AE8u;
            // 0x4b3aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4b3ae8:
    ctx->pc = 0x4B3AF0u;
}
