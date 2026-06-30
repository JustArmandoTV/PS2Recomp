#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B3640
// Address: 0x3b3640 - 0x3b3ab0
void sub_003B3640_0x3b3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3640_0x3b3640");
#endif

    switch (ctx->pc) {
        case 0x3b3640u: goto label_3b3640;
        case 0x3b3644u: goto label_3b3644;
        case 0x3b3648u: goto label_3b3648;
        case 0x3b364cu: goto label_3b364c;
        case 0x3b3650u: goto label_3b3650;
        case 0x3b3654u: goto label_3b3654;
        case 0x3b3658u: goto label_3b3658;
        case 0x3b365cu: goto label_3b365c;
        case 0x3b3660u: goto label_3b3660;
        case 0x3b3664u: goto label_3b3664;
        case 0x3b3668u: goto label_3b3668;
        case 0x3b366cu: goto label_3b366c;
        case 0x3b3670u: goto label_3b3670;
        case 0x3b3674u: goto label_3b3674;
        case 0x3b3678u: goto label_3b3678;
        case 0x3b367cu: goto label_3b367c;
        case 0x3b3680u: goto label_3b3680;
        case 0x3b3684u: goto label_3b3684;
        case 0x3b3688u: goto label_3b3688;
        case 0x3b368cu: goto label_3b368c;
        case 0x3b3690u: goto label_3b3690;
        case 0x3b3694u: goto label_3b3694;
        case 0x3b3698u: goto label_3b3698;
        case 0x3b369cu: goto label_3b369c;
        case 0x3b36a0u: goto label_3b36a0;
        case 0x3b36a4u: goto label_3b36a4;
        case 0x3b36a8u: goto label_3b36a8;
        case 0x3b36acu: goto label_3b36ac;
        case 0x3b36b0u: goto label_3b36b0;
        case 0x3b36b4u: goto label_3b36b4;
        case 0x3b36b8u: goto label_3b36b8;
        case 0x3b36bcu: goto label_3b36bc;
        case 0x3b36c0u: goto label_3b36c0;
        case 0x3b36c4u: goto label_3b36c4;
        case 0x3b36c8u: goto label_3b36c8;
        case 0x3b36ccu: goto label_3b36cc;
        case 0x3b36d0u: goto label_3b36d0;
        case 0x3b36d4u: goto label_3b36d4;
        case 0x3b36d8u: goto label_3b36d8;
        case 0x3b36dcu: goto label_3b36dc;
        case 0x3b36e0u: goto label_3b36e0;
        case 0x3b36e4u: goto label_3b36e4;
        case 0x3b36e8u: goto label_3b36e8;
        case 0x3b36ecu: goto label_3b36ec;
        case 0x3b36f0u: goto label_3b36f0;
        case 0x3b36f4u: goto label_3b36f4;
        case 0x3b36f8u: goto label_3b36f8;
        case 0x3b36fcu: goto label_3b36fc;
        case 0x3b3700u: goto label_3b3700;
        case 0x3b3704u: goto label_3b3704;
        case 0x3b3708u: goto label_3b3708;
        case 0x3b370cu: goto label_3b370c;
        case 0x3b3710u: goto label_3b3710;
        case 0x3b3714u: goto label_3b3714;
        case 0x3b3718u: goto label_3b3718;
        case 0x3b371cu: goto label_3b371c;
        case 0x3b3720u: goto label_3b3720;
        case 0x3b3724u: goto label_3b3724;
        case 0x3b3728u: goto label_3b3728;
        case 0x3b372cu: goto label_3b372c;
        case 0x3b3730u: goto label_3b3730;
        case 0x3b3734u: goto label_3b3734;
        case 0x3b3738u: goto label_3b3738;
        case 0x3b373cu: goto label_3b373c;
        case 0x3b3740u: goto label_3b3740;
        case 0x3b3744u: goto label_3b3744;
        case 0x3b3748u: goto label_3b3748;
        case 0x3b374cu: goto label_3b374c;
        case 0x3b3750u: goto label_3b3750;
        case 0x3b3754u: goto label_3b3754;
        case 0x3b3758u: goto label_3b3758;
        case 0x3b375cu: goto label_3b375c;
        case 0x3b3760u: goto label_3b3760;
        case 0x3b3764u: goto label_3b3764;
        case 0x3b3768u: goto label_3b3768;
        case 0x3b376cu: goto label_3b376c;
        case 0x3b3770u: goto label_3b3770;
        case 0x3b3774u: goto label_3b3774;
        case 0x3b3778u: goto label_3b3778;
        case 0x3b377cu: goto label_3b377c;
        case 0x3b3780u: goto label_3b3780;
        case 0x3b3784u: goto label_3b3784;
        case 0x3b3788u: goto label_3b3788;
        case 0x3b378cu: goto label_3b378c;
        case 0x3b3790u: goto label_3b3790;
        case 0x3b3794u: goto label_3b3794;
        case 0x3b3798u: goto label_3b3798;
        case 0x3b379cu: goto label_3b379c;
        case 0x3b37a0u: goto label_3b37a0;
        case 0x3b37a4u: goto label_3b37a4;
        case 0x3b37a8u: goto label_3b37a8;
        case 0x3b37acu: goto label_3b37ac;
        case 0x3b37b0u: goto label_3b37b0;
        case 0x3b37b4u: goto label_3b37b4;
        case 0x3b37b8u: goto label_3b37b8;
        case 0x3b37bcu: goto label_3b37bc;
        case 0x3b37c0u: goto label_3b37c0;
        case 0x3b37c4u: goto label_3b37c4;
        case 0x3b37c8u: goto label_3b37c8;
        case 0x3b37ccu: goto label_3b37cc;
        case 0x3b37d0u: goto label_3b37d0;
        case 0x3b37d4u: goto label_3b37d4;
        case 0x3b37d8u: goto label_3b37d8;
        case 0x3b37dcu: goto label_3b37dc;
        case 0x3b37e0u: goto label_3b37e0;
        case 0x3b37e4u: goto label_3b37e4;
        case 0x3b37e8u: goto label_3b37e8;
        case 0x3b37ecu: goto label_3b37ec;
        case 0x3b37f0u: goto label_3b37f0;
        case 0x3b37f4u: goto label_3b37f4;
        case 0x3b37f8u: goto label_3b37f8;
        case 0x3b37fcu: goto label_3b37fc;
        case 0x3b3800u: goto label_3b3800;
        case 0x3b3804u: goto label_3b3804;
        case 0x3b3808u: goto label_3b3808;
        case 0x3b380cu: goto label_3b380c;
        case 0x3b3810u: goto label_3b3810;
        case 0x3b3814u: goto label_3b3814;
        case 0x3b3818u: goto label_3b3818;
        case 0x3b381cu: goto label_3b381c;
        case 0x3b3820u: goto label_3b3820;
        case 0x3b3824u: goto label_3b3824;
        case 0x3b3828u: goto label_3b3828;
        case 0x3b382cu: goto label_3b382c;
        case 0x3b3830u: goto label_3b3830;
        case 0x3b3834u: goto label_3b3834;
        case 0x3b3838u: goto label_3b3838;
        case 0x3b383cu: goto label_3b383c;
        case 0x3b3840u: goto label_3b3840;
        case 0x3b3844u: goto label_3b3844;
        case 0x3b3848u: goto label_3b3848;
        case 0x3b384cu: goto label_3b384c;
        case 0x3b3850u: goto label_3b3850;
        case 0x3b3854u: goto label_3b3854;
        case 0x3b3858u: goto label_3b3858;
        case 0x3b385cu: goto label_3b385c;
        case 0x3b3860u: goto label_3b3860;
        case 0x3b3864u: goto label_3b3864;
        case 0x3b3868u: goto label_3b3868;
        case 0x3b386cu: goto label_3b386c;
        case 0x3b3870u: goto label_3b3870;
        case 0x3b3874u: goto label_3b3874;
        case 0x3b3878u: goto label_3b3878;
        case 0x3b387cu: goto label_3b387c;
        case 0x3b3880u: goto label_3b3880;
        case 0x3b3884u: goto label_3b3884;
        case 0x3b3888u: goto label_3b3888;
        case 0x3b388cu: goto label_3b388c;
        case 0x3b3890u: goto label_3b3890;
        case 0x3b3894u: goto label_3b3894;
        case 0x3b3898u: goto label_3b3898;
        case 0x3b389cu: goto label_3b389c;
        case 0x3b38a0u: goto label_3b38a0;
        case 0x3b38a4u: goto label_3b38a4;
        case 0x3b38a8u: goto label_3b38a8;
        case 0x3b38acu: goto label_3b38ac;
        case 0x3b38b0u: goto label_3b38b0;
        case 0x3b38b4u: goto label_3b38b4;
        case 0x3b38b8u: goto label_3b38b8;
        case 0x3b38bcu: goto label_3b38bc;
        case 0x3b38c0u: goto label_3b38c0;
        case 0x3b38c4u: goto label_3b38c4;
        case 0x3b38c8u: goto label_3b38c8;
        case 0x3b38ccu: goto label_3b38cc;
        case 0x3b38d0u: goto label_3b38d0;
        case 0x3b38d4u: goto label_3b38d4;
        case 0x3b38d8u: goto label_3b38d8;
        case 0x3b38dcu: goto label_3b38dc;
        case 0x3b38e0u: goto label_3b38e0;
        case 0x3b38e4u: goto label_3b38e4;
        case 0x3b38e8u: goto label_3b38e8;
        case 0x3b38ecu: goto label_3b38ec;
        case 0x3b38f0u: goto label_3b38f0;
        case 0x3b38f4u: goto label_3b38f4;
        case 0x3b38f8u: goto label_3b38f8;
        case 0x3b38fcu: goto label_3b38fc;
        case 0x3b3900u: goto label_3b3900;
        case 0x3b3904u: goto label_3b3904;
        case 0x3b3908u: goto label_3b3908;
        case 0x3b390cu: goto label_3b390c;
        case 0x3b3910u: goto label_3b3910;
        case 0x3b3914u: goto label_3b3914;
        case 0x3b3918u: goto label_3b3918;
        case 0x3b391cu: goto label_3b391c;
        case 0x3b3920u: goto label_3b3920;
        case 0x3b3924u: goto label_3b3924;
        case 0x3b3928u: goto label_3b3928;
        case 0x3b392cu: goto label_3b392c;
        case 0x3b3930u: goto label_3b3930;
        case 0x3b3934u: goto label_3b3934;
        case 0x3b3938u: goto label_3b3938;
        case 0x3b393cu: goto label_3b393c;
        case 0x3b3940u: goto label_3b3940;
        case 0x3b3944u: goto label_3b3944;
        case 0x3b3948u: goto label_3b3948;
        case 0x3b394cu: goto label_3b394c;
        case 0x3b3950u: goto label_3b3950;
        case 0x3b3954u: goto label_3b3954;
        case 0x3b3958u: goto label_3b3958;
        case 0x3b395cu: goto label_3b395c;
        case 0x3b3960u: goto label_3b3960;
        case 0x3b3964u: goto label_3b3964;
        case 0x3b3968u: goto label_3b3968;
        case 0x3b396cu: goto label_3b396c;
        case 0x3b3970u: goto label_3b3970;
        case 0x3b3974u: goto label_3b3974;
        case 0x3b3978u: goto label_3b3978;
        case 0x3b397cu: goto label_3b397c;
        case 0x3b3980u: goto label_3b3980;
        case 0x3b3984u: goto label_3b3984;
        case 0x3b3988u: goto label_3b3988;
        case 0x3b398cu: goto label_3b398c;
        case 0x3b3990u: goto label_3b3990;
        case 0x3b3994u: goto label_3b3994;
        case 0x3b3998u: goto label_3b3998;
        case 0x3b399cu: goto label_3b399c;
        case 0x3b39a0u: goto label_3b39a0;
        case 0x3b39a4u: goto label_3b39a4;
        case 0x3b39a8u: goto label_3b39a8;
        case 0x3b39acu: goto label_3b39ac;
        case 0x3b39b0u: goto label_3b39b0;
        case 0x3b39b4u: goto label_3b39b4;
        case 0x3b39b8u: goto label_3b39b8;
        case 0x3b39bcu: goto label_3b39bc;
        case 0x3b39c0u: goto label_3b39c0;
        case 0x3b39c4u: goto label_3b39c4;
        case 0x3b39c8u: goto label_3b39c8;
        case 0x3b39ccu: goto label_3b39cc;
        case 0x3b39d0u: goto label_3b39d0;
        case 0x3b39d4u: goto label_3b39d4;
        case 0x3b39d8u: goto label_3b39d8;
        case 0x3b39dcu: goto label_3b39dc;
        case 0x3b39e0u: goto label_3b39e0;
        case 0x3b39e4u: goto label_3b39e4;
        case 0x3b39e8u: goto label_3b39e8;
        case 0x3b39ecu: goto label_3b39ec;
        case 0x3b39f0u: goto label_3b39f0;
        case 0x3b39f4u: goto label_3b39f4;
        case 0x3b39f8u: goto label_3b39f8;
        case 0x3b39fcu: goto label_3b39fc;
        case 0x3b3a00u: goto label_3b3a00;
        case 0x3b3a04u: goto label_3b3a04;
        case 0x3b3a08u: goto label_3b3a08;
        case 0x3b3a0cu: goto label_3b3a0c;
        case 0x3b3a10u: goto label_3b3a10;
        case 0x3b3a14u: goto label_3b3a14;
        case 0x3b3a18u: goto label_3b3a18;
        case 0x3b3a1cu: goto label_3b3a1c;
        case 0x3b3a20u: goto label_3b3a20;
        case 0x3b3a24u: goto label_3b3a24;
        case 0x3b3a28u: goto label_3b3a28;
        case 0x3b3a2cu: goto label_3b3a2c;
        case 0x3b3a30u: goto label_3b3a30;
        case 0x3b3a34u: goto label_3b3a34;
        case 0x3b3a38u: goto label_3b3a38;
        case 0x3b3a3cu: goto label_3b3a3c;
        case 0x3b3a40u: goto label_3b3a40;
        case 0x3b3a44u: goto label_3b3a44;
        case 0x3b3a48u: goto label_3b3a48;
        case 0x3b3a4cu: goto label_3b3a4c;
        case 0x3b3a50u: goto label_3b3a50;
        case 0x3b3a54u: goto label_3b3a54;
        case 0x3b3a58u: goto label_3b3a58;
        case 0x3b3a5cu: goto label_3b3a5c;
        case 0x3b3a60u: goto label_3b3a60;
        case 0x3b3a64u: goto label_3b3a64;
        case 0x3b3a68u: goto label_3b3a68;
        case 0x3b3a6cu: goto label_3b3a6c;
        case 0x3b3a70u: goto label_3b3a70;
        case 0x3b3a74u: goto label_3b3a74;
        case 0x3b3a78u: goto label_3b3a78;
        case 0x3b3a7cu: goto label_3b3a7c;
        case 0x3b3a80u: goto label_3b3a80;
        case 0x3b3a84u: goto label_3b3a84;
        case 0x3b3a88u: goto label_3b3a88;
        case 0x3b3a8cu: goto label_3b3a8c;
        case 0x3b3a90u: goto label_3b3a90;
        case 0x3b3a94u: goto label_3b3a94;
        case 0x3b3a98u: goto label_3b3a98;
        case 0x3b3a9cu: goto label_3b3a9c;
        case 0x3b3aa0u: goto label_3b3aa0;
        case 0x3b3aa4u: goto label_3b3aa4;
        case 0x3b3aa8u: goto label_3b3aa8;
        case 0x3b3aacu: goto label_3b3aac;
        default: break;
    }

    ctx->pc = 0x3b3640u;

label_3b3640:
    // 0x3b3640: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b3640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b3644:
    // 0x3b3644: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b3644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3b3648:
    // 0x3b3648: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b3648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b364c:
    // 0x3b364c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b3650:
    // 0x3b3650: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b3650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b3654:
    // 0x3b3654: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b3654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3658:
    // 0x3b3658: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b3658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b365c:
    // 0x3b365c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b365cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b3660:
    // 0x3b3660: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b3660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b3664:
    // 0x3b3664: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3b3664u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3b3668:
    // 0x3b3668: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b3668u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b366c:
    // 0x3b366c: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3b366cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3b3670:
    // 0x3b3670: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b3670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b3674:
    // 0x3b3674: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x3b3674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_3b3678:
    // 0x3b3678: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x3b3678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_3b367c:
    // 0x3b367c: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3b367cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_3b3680:
    // 0x3b3680: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x3b3680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3b3684:
    // 0x3b3684: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3b3684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3b3688:
    // 0x3b3688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b368c:
    // 0x3b368c: 0x8485000a  lh          $a1, 0xA($a0)
    ctx->pc = 0x3b368cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_3b3690:
    // 0x3b3690: 0x8082000e  lb          $v0, 0xE($a0)
    ctx->pc = 0x3b3690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
label_3b3694:
    // 0x3b3694: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3b3694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3b3698:
    // 0x3b3698: 0x90720116  lbu         $s2, 0x116($v1)
    ctx->pc = 0x3b3698u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3b369c:
    // 0x3b369c: 0x80d30005  lb          $s3, 0x5($a2)
    ctx->pc = 0x3b369cu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_3b36a0:
    // 0x3b36a0: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x3b36a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_3b36a4:
    // 0x3b36a4: 0x80c30006  lb          $v1, 0x6($a2)
    ctx->pc = 0x3b36a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_3b36a8:
    // 0x3b36a8: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x3b36a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3b36ac:
    // 0x3b36ac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3b36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3b36b0:
    // 0x3b36b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b36b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b36b4:
    // 0x3b36b4: 0x3a843  sra         $s5, $v1, 1
    ctx->pc = 0x3b36b4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 1));
label_3b36b8:
    // 0x3b36b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3b36bc:
    if (ctx->pc == 0x3B36BCu) {
        ctx->pc = 0x3B36BCu;
            // 0x3b36bc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B36C0u;
        goto label_3b36c0;
    }
    ctx->pc = 0x3B36B8u;
    {
        const bool branch_taken_0x3b36b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B36BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B36B8u;
            // 0x3b36bc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36b8) {
            ctx->pc = 0x3B36C4u;
            goto label_3b36c4;
        }
    }
    ctx->pc = 0x3B36C0u;
label_3b36c0:
    // 0x3b36c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b36c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b36c4:
    // 0x3b36c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b36c8:
    // 0x3b36c8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b36c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b36cc:
    // 0x3b36cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b36ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b36d0:
    // 0x3b36d0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3b36d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3b36d4:
    // 0x3b36d4: 0x320f809  jalr        $t9
label_3b36d8:
    if (ctx->pc == 0x3B36D8u) {
        ctx->pc = 0x3B36D8u;
            // 0x3b36d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3B36DCu;
        goto label_3b36dc;
    }
    ctx->pc = 0x3B36D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B36DCu);
        ctx->pc = 0x3B36D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B36D4u;
            // 0x3b36d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B36DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B36DCu; }
            if (ctx->pc != 0x3B36DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3B36DCu;
label_3b36dc:
    // 0x3b36dc: 0x9284000f  lbu         $a0, 0xF($s4)
    ctx->pc = 0x3b36dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
label_3b36e0:
    // 0x3b36e0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3b36e4:
    if (ctx->pc == 0x3B36E4u) {
        ctx->pc = 0x3B36E4u;
            // 0x3b36e4: 0x262501b0  addiu       $a1, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->pc = 0x3B36E8u;
        goto label_3b36e8;
    }
    ctx->pc = 0x3B36E0u;
    {
        const bool branch_taken_0x3b36e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B36E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B36E0u;
            // 0x3b36e4: 0x262501b0  addiu       $a1, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36e0) {
            ctx->pc = 0x3B36F4u;
            goto label_3b36f4;
        }
    }
    ctx->pc = 0x3B36E8u;
label_3b36e8:
    // 0x3b36e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b36e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b36ec:
    // 0x3b36ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b36f0:
    if (ctx->pc == 0x3B36F0u) {
        ctx->pc = 0x3B36F0u;
            // 0x3b36f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B36F4u;
        goto label_3b36f4;
    }
    ctx->pc = 0x3B36ECu;
    {
        const bool branch_taken_0x3b36ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B36F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B36ECu;
            // 0x3b36f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36ec) {
            ctx->pc = 0x3B3710u;
            goto label_3b3710;
        }
    }
    ctx->pc = 0x3B36F4u;
label_3b36f4:
    // 0x3b36f4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3b36f8:
    // 0x3b36f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b36f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b36fc:
    // 0x3b36fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b36fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3700:
    // 0x3b3700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3704:
    // 0x3b3704: 0x0  nop
    ctx->pc = 0x3b3704u;
    // NOP
label_3b3708:
    // 0x3b3708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b370c:
    // 0x3b370c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b370cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3710:
    // 0x3b3710: 0x4600ab01  sub.s       $f12, $f21, $f0
    ctx->pc = 0x3b3710u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3b3714:
    // 0x3b3714: 0x8289000c  lb          $t1, 0xC($s4)
    ctx->pc = 0x3b3714u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_3b3718:
    // 0x3b3718: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3b3718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3b371c:
    // 0x3b371c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3b3720:
    // 0x3b3720: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x3b3720u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3724:
    // 0x3b3724: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3b3724u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3728:
    // 0x3b3728: 0x0  nop
    ctx->pc = 0x3b3728u;
    // NOP
label_3b372c:
    // 0x3b372c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b372cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3730:
    // 0x3b3730: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x3b3730u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3b3734:
    // 0x3b3734: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3b3734u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3738:
    // 0x3b3738: 0x0  nop
    ctx->pc = 0x3b3738u;
    // NOP
label_3b373c:
    // 0x3b373c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b373cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3740:
    // 0x3b3740: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3b3744:
    if (ctx->pc == 0x3B3744u) {
        ctx->pc = 0x3B3744u;
            // 0x3b3744: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3B3748u;
        goto label_3b3748;
    }
    ctx->pc = 0x3B3740u;
    {
        const bool branch_taken_0x3b3740 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B3744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3740u;
            // 0x3b3744: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3740) {
            ctx->pc = 0x3B3754u;
            goto label_3b3754;
        }
    }
    ctx->pc = 0x3B3748u;
label_3b3748:
    // 0x3b3748: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b3748u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b374c:
    // 0x3b374c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3750:
    if (ctx->pc == 0x3B3750u) {
        ctx->pc = 0x3B3750u;
            // 0x3b3750: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3754u;
        goto label_3b3754;
    }
    ctx->pc = 0x3B374Cu;
    {
        const bool branch_taken_0x3b374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B374Cu;
            // 0x3b3750: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b374c) {
            ctx->pc = 0x3B3770u;
            goto label_3b3770;
        }
    }
    ctx->pc = 0x3B3754u;
label_3b3754:
    // 0x3b3754: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b3754u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3b3758:
    // 0x3b3758: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b3758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b375c:
    // 0x3b375c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3760:
    // 0x3b3760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3764:
    // 0x3b3764: 0x0  nop
    ctx->pc = 0x3b3764u;
    // NOP
label_3b3768:
    // 0x3b3768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b376c:
    // 0x3b376c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b376cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3770:
    // 0x3b3770: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3b3770u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3b3774:
    // 0x3b3774: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b3774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b3778:
    // 0x3b3778: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b3778u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b377c:
    // 0x3b377c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b3780:
    // 0x3b3780: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b3780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b3784:
    // 0x3b3784: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b3784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3788:
    // 0x3b3788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b378c:
    // 0x3b378c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3b378cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3790:
    // 0x3b3790: 0x0  nop
    ctx->pc = 0x3b3790u;
    // NOP
label_3b3794:
    // 0x3b3794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3798:
    // 0x3b3798: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b3798u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b379c:
    // 0x3b379c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b379cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b37a0:
    // 0x3b37a0: 0x0  nop
    ctx->pc = 0x3b37a0u;
    // NOP
label_3b37a4:
    // 0x3b37a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b37a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b37a8:
    // 0x3b37a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b37a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b37ac:
    // 0x3b37ac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b37acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b37b0:
    // 0x3b37b0: 0xc0bc284  jal         func_2F0A10
label_3b37b4:
    if (ctx->pc == 0x3B37B4u) {
        ctx->pc = 0x3B37B4u;
            // 0x3b37b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B37B8u;
        goto label_3b37b8;
    }
    ctx->pc = 0x3B37B0u;
    SET_GPR_U32(ctx, 31, 0x3B37B8u);
    ctx->pc = 0x3B37B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B37B0u;
            // 0x3b37b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B37B8u; }
        if (ctx->pc != 0x3B37B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B37B8u; }
        if (ctx->pc != 0x3B37B8u) { return; }
    }
    ctx->pc = 0x3B37B8u;
label_3b37b8:
    // 0x3b37b8: 0x92820015  lbu         $v0, 0x15($s4)
    ctx->pc = 0x3b37b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21)));
label_3b37bc:
    // 0x3b37bc: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_3b37c0:
    if (ctx->pc == 0x3B37C0u) {
        ctx->pc = 0x3B37C4u;
        goto label_3b37c4;
    }
    ctx->pc = 0x3B37BCu;
    {
        const bool branch_taken_0x3b37bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b37bc) {
            ctx->pc = 0x3B3A6Cu;
            goto label_3b3a6c;
        }
    }
    ctx->pc = 0x3B37C4u;
label_3b37c4:
    // 0x3b37c4: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x3b37c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
label_3b37c8:
    // 0x3b37c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b37cc:
    if (ctx->pc == 0x3B37CCu) {
        ctx->pc = 0x3B37CCu;
            // 0x3b37cc: 0x26310190  addiu       $s1, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->pc = 0x3B37D0u;
        goto label_3b37d0;
    }
    ctx->pc = 0x3B37C8u;
    {
        const bool branch_taken_0x3b37c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B37CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B37C8u;
            // 0x3b37cc: 0x26310190  addiu       $s1, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b37c8) {
            ctx->pc = 0x3B37DCu;
            goto label_3b37dc;
        }
    }
    ctx->pc = 0x3B37D0u;
label_3b37d0:
    // 0x3b37d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b37d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b37d4:
    // 0x3b37d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b37d8:
    if (ctx->pc == 0x3B37D8u) {
        ctx->pc = 0x3B37D8u;
            // 0x3b37d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B37DCu;
        goto label_3b37dc;
    }
    ctx->pc = 0x3B37D4u;
    {
        const bool branch_taken_0x3b37d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B37D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B37D4u;
            // 0x3b37d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b37d4) {
            ctx->pc = 0x3B37F8u;
            goto label_3b37f8;
        }
    }
    ctx->pc = 0x3B37DCu;
label_3b37dc:
    // 0x3b37dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b37e0:
    // 0x3b37e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b37e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b37e4:
    // 0x3b37e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b37e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b37e8:
    // 0x3b37e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b37e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b37ec:
    // 0x3b37ec: 0x0  nop
    ctx->pc = 0x3b37ecu;
    // NOP
label_3b37f0:
    // 0x3b37f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b37f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b37f4:
    // 0x3b37f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b37f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b37f8:
    // 0x3b37f8: 0x4600ab01  sub.s       $f12, $f21, $f0
    ctx->pc = 0x3b37f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3b37fc:
    // 0x3b37fc: 0x8287000c  lb          $a3, 0xC($s4)
    ctx->pc = 0x3b37fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_3b3800:
    // 0x3b3800: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b3800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b3804:
    // 0x3b3804: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b3804u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b3808:
    // 0x3b3808: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b3808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b380c:
    // 0x3b380c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b380cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b3810:
    // 0x3b3810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b3810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3814:
    // 0x3b3814: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b3814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3818:
    // 0x3b3818: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b3818u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b381c:
    // 0x3b381c: 0x0  nop
    ctx->pc = 0x3b381cu;
    // NOP
label_3b3820:
    // 0x3b3820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3824:
    // 0x3b3824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3828:
    // 0x3b3828: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x3b3828u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3b382c:
    // 0x3b382c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b382cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3830:
    // 0x3b3830: 0x0  nop
    ctx->pc = 0x3b3830u;
    // NOP
label_3b3834:
    // 0x3b3834: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b3834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b3838:
    // 0x3b3838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b383c:
    // 0x3b383c: 0x0  nop
    ctx->pc = 0x3b383cu;
    // NOP
label_3b3840:
    // 0x3b3840: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b3840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b3844:
    // 0x3b3844: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3b3844u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3848:
    // 0x3b3848: 0x0  nop
    ctx->pc = 0x3b3848u;
    // NOP
label_3b384c:
    // 0x3b384c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b384cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3850:
    // 0x3b3850: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x3b3850u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b3854:
    // 0x3b3854: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3b3854u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_3b3858:
    // 0x3b3858: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3b3858u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b385c:
    // 0x3b385c: 0x0  nop
    ctx->pc = 0x3b385cu;
    // NOP
label_3b3860:
    // 0x3b3860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3864:
    // 0x3b3864: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b3864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b3868:
    // 0x3b3868: 0xc0bc284  jal         func_2F0A10
label_3b386c:
    if (ctx->pc == 0x3B386Cu) {
        ctx->pc = 0x3B386Cu;
            // 0x3b386c: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x3B3870u;
        goto label_3b3870;
    }
    ctx->pc = 0x3B3868u;
    SET_GPR_U32(ctx, 31, 0x3B3870u);
    ctx->pc = 0x3B386Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3868u;
            // 0x3b386c: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3870u; }
        if (ctx->pc != 0x3B3870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3870u; }
        if (ctx->pc != 0x3B3870u) { return; }
    }
    ctx->pc = 0x3B3870u;
label_3b3870:
    // 0x3b3870: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x3b3870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
label_3b3874:
    // 0x3b3874: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b3878:
    if (ctx->pc == 0x3B3878u) {
        ctx->pc = 0x3B3878u;
            // 0x3b3878: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B387Cu;
        goto label_3b387c;
    }
    ctx->pc = 0x3B3874u;
    {
        const bool branch_taken_0x3b3874 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b3874) {
            ctx->pc = 0x3B3878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3874u;
            // 0x3b3878: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3888u;
            goto label_3b3888;
        }
    }
    ctx->pc = 0x3B387Cu;
label_3b387c:
    // 0x3b387c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b387cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3880:
    // 0x3b3880: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b3884:
    if (ctx->pc == 0x3B3884u) {
        ctx->pc = 0x3B3884u;
            // 0x3b3884: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3888u;
        goto label_3b3888;
    }
    ctx->pc = 0x3B3880u;
    {
        const bool branch_taken_0x3b3880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3880u;
            // 0x3b3884: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3880) {
            ctx->pc = 0x3B38A0u;
            goto label_3b38a0;
        }
    }
    ctx->pc = 0x3B3888u;
label_3b3888:
    // 0x3b3888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b388c:
    // 0x3b388c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b388cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3890:
    // 0x3b3890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3894:
    // 0x3b3894: 0x0  nop
    ctx->pc = 0x3b3894u;
    // NOP
label_3b3898:
    // 0x3b3898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b389c:
    // 0x3b389c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b389cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b38a0:
    // 0x3b38a0: 0x4600ab01  sub.s       $f12, $f21, $f0
    ctx->pc = 0x3b38a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3b38a4:
    // 0x3b38a4: 0x8287000c  lb          $a3, 0xC($s4)
    ctx->pc = 0x3b38a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_3b38a8:
    // 0x3b38a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b38ac:
    // 0x3b38ac: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b38acu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b38b0:
    // 0x3b38b0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b38b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b38b4:
    // 0x3b38b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b38b8:
    // 0x3b38b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b38b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b38bc:
    // 0x3b38bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b38bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b38c0:
    // 0x3b38c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b38c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b38c4:
    // 0x3b38c4: 0x0  nop
    ctx->pc = 0x3b38c4u;
    // NOP
label_3b38c8:
    // 0x3b38c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b38c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b38cc:
    // 0x3b38cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b38ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b38d0:
    // 0x3b38d0: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x3b38d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b38d4:
    // 0x3b38d4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b38d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b38d8:
    // 0x3b38d8: 0x0  nop
    ctx->pc = 0x3b38d8u;
    // NOP
label_3b38dc:
    // 0x3b38dc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b38dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b38e0:
    // 0x3b38e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b38e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b38e4:
    // 0x3b38e4: 0x0  nop
    ctx->pc = 0x3b38e4u;
    // NOP
label_3b38e8:
    // 0x3b38e8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b38e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b38ec:
    // 0x3b38ec: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3b38ecu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b38f0:
    // 0x3b38f0: 0x0  nop
    ctx->pc = 0x3b38f0u;
    // NOP
label_3b38f4:
    // 0x3b38f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b38f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b38f8:
    // 0x3b38f8: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x3b38f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b38fc:
    // 0x3b38fc: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3b38fcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_3b3900:
    // 0x3b3900: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3b3900u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3904:
    // 0x3b3904: 0x0  nop
    ctx->pc = 0x3b3904u;
    // NOP
label_3b3908:
    // 0x3b3908: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b390c:
    // 0x3b390c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b390cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b3910:
    // 0x3b3910: 0xc0bc284  jal         func_2F0A10
label_3b3914:
    if (ctx->pc == 0x3B3914u) {
        ctx->pc = 0x3B3914u;
            // 0x3b3914: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x3B3918u;
        goto label_3b3918;
    }
    ctx->pc = 0x3B3910u;
    SET_GPR_U32(ctx, 31, 0x3B3918u);
    ctx->pc = 0x3B3914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3910u;
            // 0x3b3914: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3918u; }
        if (ctx->pc != 0x3B3918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3918u; }
        if (ctx->pc != 0x3B3918u) { return; }
    }
    ctx->pc = 0x3B3918u;
label_3b3918:
    // 0x3b3918: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x3b3918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
label_3b391c:
    // 0x3b391c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b3920:
    if (ctx->pc == 0x3B3920u) {
        ctx->pc = 0x3B3920u;
            // 0x3b3920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B3924u;
        goto label_3b3924;
    }
    ctx->pc = 0x3B391Cu;
    {
        const bool branch_taken_0x3b391c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b391c) {
            ctx->pc = 0x3B3920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B391Cu;
            // 0x3b3920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3930u;
            goto label_3b3930;
        }
    }
    ctx->pc = 0x3B3924u;
label_3b3924:
    // 0x3b3924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3928:
    // 0x3b3928: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b392c:
    if (ctx->pc == 0x3B392Cu) {
        ctx->pc = 0x3B392Cu;
            // 0x3b392c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3930u;
        goto label_3b3930;
    }
    ctx->pc = 0x3B3928u;
    {
        const bool branch_taken_0x3b3928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3928u;
            // 0x3b392c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3928) {
            ctx->pc = 0x3B3948u;
            goto label_3b3948;
        }
    }
    ctx->pc = 0x3B3930u;
label_3b3930:
    // 0x3b3930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3934:
    // 0x3b3934: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3938:
    // 0x3b3938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b393c:
    // 0x3b393c: 0x0  nop
    ctx->pc = 0x3b393cu;
    // NOP
label_3b3940:
    // 0x3b3940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3944:
    // 0x3b3944: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b3944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3948:
    // 0x3b3948: 0x4600a880  add.s       $f2, $f21, $f0
    ctx->pc = 0x3b3948u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3b394c:
    // 0x3b394c: 0x8287000c  lb          $a3, 0xC($s4)
    ctx->pc = 0x3b394cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_3b3950:
    // 0x3b3950: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b3950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b3954:
    // 0x3b3954: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b3954u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b3958:
    // 0x3b3958: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b3958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b395c:
    // 0x3b395c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b3960:
    // 0x3b3960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b3960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3964:
    // 0x3b3964: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b3964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3968:
    // 0x3b3968: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b3968u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b396c:
    // 0x3b396c: 0x0  nop
    ctx->pc = 0x3b396cu;
    // NOP
label_3b3970:
    // 0x3b3970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3974:
    // 0x3b3974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3978:
    // 0x3b3978: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x3b3978u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3b397c:
    // 0x3b397c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b397cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3980:
    // 0x3b3980: 0x0  nop
    ctx->pc = 0x3b3980u;
    // NOP
label_3b3984:
    // 0x3b3984: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b3984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b3988:
    // 0x3b3988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b398c:
    // 0x3b398c: 0x0  nop
    ctx->pc = 0x3b398cu;
    // NOP
label_3b3990:
    // 0x3b3990: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b3990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b3994:
    // 0x3b3994: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3b3994u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3998:
    // 0x3b3998: 0x0  nop
    ctx->pc = 0x3b3998u;
    // NOP
label_3b399c:
    // 0x3b399c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b399cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b39a0:
    // 0x3b39a0: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x3b39a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3b39a4:
    // 0x3b39a4: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x3b39a4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_3b39a8:
    // 0x3b39a8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3b39a8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b39ac:
    // 0x3b39ac: 0x0  nop
    ctx->pc = 0x3b39acu;
    // NOP
label_3b39b0:
    // 0x3b39b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b39b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b39b4:
    // 0x3b39b4: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x3b39b4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b39b8:
    // 0x3b39b8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b39b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b39bc:
    // 0x3b39bc: 0xc0bc284  jal         func_2F0A10
label_3b39c0:
    if (ctx->pc == 0x3B39C0u) {
        ctx->pc = 0x3B39C0u;
            // 0x3b39c0: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x3B39C4u;
        goto label_3b39c4;
    }
    ctx->pc = 0x3B39BCu;
    SET_GPR_U32(ctx, 31, 0x3B39C4u);
    ctx->pc = 0x3B39C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B39BCu;
            // 0x3b39c0: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B39C4u; }
        if (ctx->pc != 0x3B39C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B39C4u; }
        if (ctx->pc != 0x3B39C4u) { return; }
    }
    ctx->pc = 0x3B39C4u;
label_3b39c4:
    // 0x3b39c4: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x3b39c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
label_3b39c8:
    // 0x3b39c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b39cc:
    if (ctx->pc == 0x3B39CCu) {
        ctx->pc = 0x3B39CCu;
            // 0x3b39cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B39D0u;
        goto label_3b39d0;
    }
    ctx->pc = 0x3B39C8u;
    {
        const bool branch_taken_0x3b39c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b39c8) {
            ctx->pc = 0x3B39CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B39C8u;
            // 0x3b39cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B39DCu;
            goto label_3b39dc;
        }
    }
    ctx->pc = 0x3B39D0u;
label_3b39d0:
    // 0x3b39d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b39d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b39d4:
    // 0x3b39d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b39d8:
    if (ctx->pc == 0x3B39D8u) {
        ctx->pc = 0x3B39D8u;
            // 0x3b39d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B39DCu;
        goto label_3b39dc;
    }
    ctx->pc = 0x3B39D4u;
    {
        const bool branch_taken_0x3b39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B39D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B39D4u;
            // 0x3b39d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b39d4) {
            ctx->pc = 0x3B39F4u;
            goto label_3b39f4;
        }
    }
    ctx->pc = 0x3B39DCu;
label_3b39dc:
    // 0x3b39dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b39dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b39e0:
    // 0x3b39e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b39e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b39e4:
    // 0x3b39e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b39e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b39e8:
    // 0x3b39e8: 0x0  nop
    ctx->pc = 0x3b39e8u;
    // NOP
label_3b39ec:
    // 0x3b39ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b39ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b39f0:
    // 0x3b39f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b39f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b39f4:
    // 0x3b39f4: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x3b39f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3b39f8:
    // 0x3b39f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b39fc:
    // 0x3b39fc: 0x8289000c  lb          $t1, 0xC($s4)
    ctx->pc = 0x3b39fcu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_3b3a00:
    // 0x3b3a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b3a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a04:
    // 0x3b3a04: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b3a04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b3a08:
    // 0x3b3a08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b3a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a0c:
    // 0x3b3a0c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b3a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b3a10:
    // 0x3b3a10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b3a14:
    // 0x3b3a14: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3b3a14u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3a18:
    // 0x3b3a18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b3a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a1c:
    // 0x3b3a1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b3a20:
    // 0x3b3a20: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3b3a20u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3a24:
    // 0x3b3a24: 0x0  nop
    ctx->pc = 0x3b3a24u;
    // NOP
label_3b3a28:
    // 0x3b3a28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3a2c:
    // 0x3b3a2c: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x3b3a2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b3a30:
    // 0x3b3a30: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x3b3a30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b3a34:
    // 0x3b3a34: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3b3a34u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3a38:
    // 0x3b3a38: 0x0  nop
    ctx->pc = 0x3b3a38u;
    // NOP
label_3b3a3c:
    // 0x3b3a3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3a40:
    // 0x3b3a40: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x3b3a40u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b3a44:
    // 0x3b3a44: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3b3a44u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_3b3a48:
    // 0x3b3a48: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b3a48u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3a4c:
    // 0x3b3a4c: 0x0  nop
    ctx->pc = 0x3b3a4cu;
    // NOP
label_3b3a50:
    // 0x3b3a50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b3a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b3a54:
    // 0x3b3a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3a58:
    // 0x3b3a58: 0x0  nop
    ctx->pc = 0x3b3a58u;
    // NOP
label_3b3a5c:
    // 0x3b3a5c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b3a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b3a60:
    // 0x3b3a60: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b3a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b3a64:
    // 0x3b3a64: 0xc0bc284  jal         func_2F0A10
label_3b3a68:
    if (ctx->pc == 0x3B3A68u) {
        ctx->pc = 0x3B3A68u;
            // 0x3b3a68: 0x46026380  add.s       $f14, $f12, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->pc = 0x3B3A6Cu;
        goto label_3b3a6c;
    }
    ctx->pc = 0x3B3A64u;
    SET_GPR_U32(ctx, 31, 0x3B3A6Cu);
    ctx->pc = 0x3B3A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3A64u;
            // 0x3b3a68: 0x46026380  add.s       $f14, $f12, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3A6Cu; }
        if (ctx->pc != 0x3B3A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3A6Cu; }
        if (ctx->pc != 0x3B3A6Cu) { return; }
    }
    ctx->pc = 0x3B3A6Cu;
label_3b3a6c:
    // 0x3b3a6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b3a70:
    // 0x3b3a70: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b3a74:
    // 0x3b3a74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b3a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b3a78:
    // 0x3b3a78: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b3a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b3a7c:
    // 0x3b3a7c: 0x320f809  jalr        $t9
label_3b3a80:
    if (ctx->pc == 0x3B3A80u) {
        ctx->pc = 0x3B3A84u;
        goto label_3b3a84;
    }
    ctx->pc = 0x3B3A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B3A84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B3A84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B3A84u; }
            if (ctx->pc != 0x3B3A84u) { return; }
        }
        }
    }
    ctx->pc = 0x3B3A84u;
label_3b3a84:
    // 0x3b3a84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b3a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b3a88:
    // 0x3b3a88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b3a8c:
    // 0x3b3a8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b3a8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b3a90:
    // 0x3b3a90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b3a94:
    // 0x3b3a94: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b3a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3a98:
    // 0x3b3a98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b3a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b3a9c:
    // 0x3b3a9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b3a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3aa0:
    // 0x3b3aa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b3aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b3aa4:
    // 0x3b3aa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b3aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3aa8:
    // 0x3b3aa8: 0x3e00008  jr          $ra
label_3b3aac:
    if (ctx->pc == 0x3B3AACu) {
        ctx->pc = 0x3B3AACu;
            // 0x3b3aac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3B3AB0u;
        goto label_fallthrough_0x3b3aa8;
    }
    ctx->pc = 0x3B3AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3AA8u;
            // 0x3b3aac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3b3aa8:
    ctx->pc = 0x3B3AB0u;
}
