#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D3450
// Address: 0x3d3450 - 0x3d39d0
void sub_003D3450_0x3d3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3450_0x3d3450");
#endif

    switch (ctx->pc) {
        case 0x3d3450u: goto label_3d3450;
        case 0x3d3454u: goto label_3d3454;
        case 0x3d3458u: goto label_3d3458;
        case 0x3d345cu: goto label_3d345c;
        case 0x3d3460u: goto label_3d3460;
        case 0x3d3464u: goto label_3d3464;
        case 0x3d3468u: goto label_3d3468;
        case 0x3d346cu: goto label_3d346c;
        case 0x3d3470u: goto label_3d3470;
        case 0x3d3474u: goto label_3d3474;
        case 0x3d3478u: goto label_3d3478;
        case 0x3d347cu: goto label_3d347c;
        case 0x3d3480u: goto label_3d3480;
        case 0x3d3484u: goto label_3d3484;
        case 0x3d3488u: goto label_3d3488;
        case 0x3d348cu: goto label_3d348c;
        case 0x3d3490u: goto label_3d3490;
        case 0x3d3494u: goto label_3d3494;
        case 0x3d3498u: goto label_3d3498;
        case 0x3d349cu: goto label_3d349c;
        case 0x3d34a0u: goto label_3d34a0;
        case 0x3d34a4u: goto label_3d34a4;
        case 0x3d34a8u: goto label_3d34a8;
        case 0x3d34acu: goto label_3d34ac;
        case 0x3d34b0u: goto label_3d34b0;
        case 0x3d34b4u: goto label_3d34b4;
        case 0x3d34b8u: goto label_3d34b8;
        case 0x3d34bcu: goto label_3d34bc;
        case 0x3d34c0u: goto label_3d34c0;
        case 0x3d34c4u: goto label_3d34c4;
        case 0x3d34c8u: goto label_3d34c8;
        case 0x3d34ccu: goto label_3d34cc;
        case 0x3d34d0u: goto label_3d34d0;
        case 0x3d34d4u: goto label_3d34d4;
        case 0x3d34d8u: goto label_3d34d8;
        case 0x3d34dcu: goto label_3d34dc;
        case 0x3d34e0u: goto label_3d34e0;
        case 0x3d34e4u: goto label_3d34e4;
        case 0x3d34e8u: goto label_3d34e8;
        case 0x3d34ecu: goto label_3d34ec;
        case 0x3d34f0u: goto label_3d34f0;
        case 0x3d34f4u: goto label_3d34f4;
        case 0x3d34f8u: goto label_3d34f8;
        case 0x3d34fcu: goto label_3d34fc;
        case 0x3d3500u: goto label_3d3500;
        case 0x3d3504u: goto label_3d3504;
        case 0x3d3508u: goto label_3d3508;
        case 0x3d350cu: goto label_3d350c;
        case 0x3d3510u: goto label_3d3510;
        case 0x3d3514u: goto label_3d3514;
        case 0x3d3518u: goto label_3d3518;
        case 0x3d351cu: goto label_3d351c;
        case 0x3d3520u: goto label_3d3520;
        case 0x3d3524u: goto label_3d3524;
        case 0x3d3528u: goto label_3d3528;
        case 0x3d352cu: goto label_3d352c;
        case 0x3d3530u: goto label_3d3530;
        case 0x3d3534u: goto label_3d3534;
        case 0x3d3538u: goto label_3d3538;
        case 0x3d353cu: goto label_3d353c;
        case 0x3d3540u: goto label_3d3540;
        case 0x3d3544u: goto label_3d3544;
        case 0x3d3548u: goto label_3d3548;
        case 0x3d354cu: goto label_3d354c;
        case 0x3d3550u: goto label_3d3550;
        case 0x3d3554u: goto label_3d3554;
        case 0x3d3558u: goto label_3d3558;
        case 0x3d355cu: goto label_3d355c;
        case 0x3d3560u: goto label_3d3560;
        case 0x3d3564u: goto label_3d3564;
        case 0x3d3568u: goto label_3d3568;
        case 0x3d356cu: goto label_3d356c;
        case 0x3d3570u: goto label_3d3570;
        case 0x3d3574u: goto label_3d3574;
        case 0x3d3578u: goto label_3d3578;
        case 0x3d357cu: goto label_3d357c;
        case 0x3d3580u: goto label_3d3580;
        case 0x3d3584u: goto label_3d3584;
        case 0x3d3588u: goto label_3d3588;
        case 0x3d358cu: goto label_3d358c;
        case 0x3d3590u: goto label_3d3590;
        case 0x3d3594u: goto label_3d3594;
        case 0x3d3598u: goto label_3d3598;
        case 0x3d359cu: goto label_3d359c;
        case 0x3d35a0u: goto label_3d35a0;
        case 0x3d35a4u: goto label_3d35a4;
        case 0x3d35a8u: goto label_3d35a8;
        case 0x3d35acu: goto label_3d35ac;
        case 0x3d35b0u: goto label_3d35b0;
        case 0x3d35b4u: goto label_3d35b4;
        case 0x3d35b8u: goto label_3d35b8;
        case 0x3d35bcu: goto label_3d35bc;
        case 0x3d35c0u: goto label_3d35c0;
        case 0x3d35c4u: goto label_3d35c4;
        case 0x3d35c8u: goto label_3d35c8;
        case 0x3d35ccu: goto label_3d35cc;
        case 0x3d35d0u: goto label_3d35d0;
        case 0x3d35d4u: goto label_3d35d4;
        case 0x3d35d8u: goto label_3d35d8;
        case 0x3d35dcu: goto label_3d35dc;
        case 0x3d35e0u: goto label_3d35e0;
        case 0x3d35e4u: goto label_3d35e4;
        case 0x3d35e8u: goto label_3d35e8;
        case 0x3d35ecu: goto label_3d35ec;
        case 0x3d35f0u: goto label_3d35f0;
        case 0x3d35f4u: goto label_3d35f4;
        case 0x3d35f8u: goto label_3d35f8;
        case 0x3d35fcu: goto label_3d35fc;
        case 0x3d3600u: goto label_3d3600;
        case 0x3d3604u: goto label_3d3604;
        case 0x3d3608u: goto label_3d3608;
        case 0x3d360cu: goto label_3d360c;
        case 0x3d3610u: goto label_3d3610;
        case 0x3d3614u: goto label_3d3614;
        case 0x3d3618u: goto label_3d3618;
        case 0x3d361cu: goto label_3d361c;
        case 0x3d3620u: goto label_3d3620;
        case 0x3d3624u: goto label_3d3624;
        case 0x3d3628u: goto label_3d3628;
        case 0x3d362cu: goto label_3d362c;
        case 0x3d3630u: goto label_3d3630;
        case 0x3d3634u: goto label_3d3634;
        case 0x3d3638u: goto label_3d3638;
        case 0x3d363cu: goto label_3d363c;
        case 0x3d3640u: goto label_3d3640;
        case 0x3d3644u: goto label_3d3644;
        case 0x3d3648u: goto label_3d3648;
        case 0x3d364cu: goto label_3d364c;
        case 0x3d3650u: goto label_3d3650;
        case 0x3d3654u: goto label_3d3654;
        case 0x3d3658u: goto label_3d3658;
        case 0x3d365cu: goto label_3d365c;
        case 0x3d3660u: goto label_3d3660;
        case 0x3d3664u: goto label_3d3664;
        case 0x3d3668u: goto label_3d3668;
        case 0x3d366cu: goto label_3d366c;
        case 0x3d3670u: goto label_3d3670;
        case 0x3d3674u: goto label_3d3674;
        case 0x3d3678u: goto label_3d3678;
        case 0x3d367cu: goto label_3d367c;
        case 0x3d3680u: goto label_3d3680;
        case 0x3d3684u: goto label_3d3684;
        case 0x3d3688u: goto label_3d3688;
        case 0x3d368cu: goto label_3d368c;
        case 0x3d3690u: goto label_3d3690;
        case 0x3d3694u: goto label_3d3694;
        case 0x3d3698u: goto label_3d3698;
        case 0x3d369cu: goto label_3d369c;
        case 0x3d36a0u: goto label_3d36a0;
        case 0x3d36a4u: goto label_3d36a4;
        case 0x3d36a8u: goto label_3d36a8;
        case 0x3d36acu: goto label_3d36ac;
        case 0x3d36b0u: goto label_3d36b0;
        case 0x3d36b4u: goto label_3d36b4;
        case 0x3d36b8u: goto label_3d36b8;
        case 0x3d36bcu: goto label_3d36bc;
        case 0x3d36c0u: goto label_3d36c0;
        case 0x3d36c4u: goto label_3d36c4;
        case 0x3d36c8u: goto label_3d36c8;
        case 0x3d36ccu: goto label_3d36cc;
        case 0x3d36d0u: goto label_3d36d0;
        case 0x3d36d4u: goto label_3d36d4;
        case 0x3d36d8u: goto label_3d36d8;
        case 0x3d36dcu: goto label_3d36dc;
        case 0x3d36e0u: goto label_3d36e0;
        case 0x3d36e4u: goto label_3d36e4;
        case 0x3d36e8u: goto label_3d36e8;
        case 0x3d36ecu: goto label_3d36ec;
        case 0x3d36f0u: goto label_3d36f0;
        case 0x3d36f4u: goto label_3d36f4;
        case 0x3d36f8u: goto label_3d36f8;
        case 0x3d36fcu: goto label_3d36fc;
        case 0x3d3700u: goto label_3d3700;
        case 0x3d3704u: goto label_3d3704;
        case 0x3d3708u: goto label_3d3708;
        case 0x3d370cu: goto label_3d370c;
        case 0x3d3710u: goto label_3d3710;
        case 0x3d3714u: goto label_3d3714;
        case 0x3d3718u: goto label_3d3718;
        case 0x3d371cu: goto label_3d371c;
        case 0x3d3720u: goto label_3d3720;
        case 0x3d3724u: goto label_3d3724;
        case 0x3d3728u: goto label_3d3728;
        case 0x3d372cu: goto label_3d372c;
        case 0x3d3730u: goto label_3d3730;
        case 0x3d3734u: goto label_3d3734;
        case 0x3d3738u: goto label_3d3738;
        case 0x3d373cu: goto label_3d373c;
        case 0x3d3740u: goto label_3d3740;
        case 0x3d3744u: goto label_3d3744;
        case 0x3d3748u: goto label_3d3748;
        case 0x3d374cu: goto label_3d374c;
        case 0x3d3750u: goto label_3d3750;
        case 0x3d3754u: goto label_3d3754;
        case 0x3d3758u: goto label_3d3758;
        case 0x3d375cu: goto label_3d375c;
        case 0x3d3760u: goto label_3d3760;
        case 0x3d3764u: goto label_3d3764;
        case 0x3d3768u: goto label_3d3768;
        case 0x3d376cu: goto label_3d376c;
        case 0x3d3770u: goto label_3d3770;
        case 0x3d3774u: goto label_3d3774;
        case 0x3d3778u: goto label_3d3778;
        case 0x3d377cu: goto label_3d377c;
        case 0x3d3780u: goto label_3d3780;
        case 0x3d3784u: goto label_3d3784;
        case 0x3d3788u: goto label_3d3788;
        case 0x3d378cu: goto label_3d378c;
        case 0x3d3790u: goto label_3d3790;
        case 0x3d3794u: goto label_3d3794;
        case 0x3d3798u: goto label_3d3798;
        case 0x3d379cu: goto label_3d379c;
        case 0x3d37a0u: goto label_3d37a0;
        case 0x3d37a4u: goto label_3d37a4;
        case 0x3d37a8u: goto label_3d37a8;
        case 0x3d37acu: goto label_3d37ac;
        case 0x3d37b0u: goto label_3d37b0;
        case 0x3d37b4u: goto label_3d37b4;
        case 0x3d37b8u: goto label_3d37b8;
        case 0x3d37bcu: goto label_3d37bc;
        case 0x3d37c0u: goto label_3d37c0;
        case 0x3d37c4u: goto label_3d37c4;
        case 0x3d37c8u: goto label_3d37c8;
        case 0x3d37ccu: goto label_3d37cc;
        case 0x3d37d0u: goto label_3d37d0;
        case 0x3d37d4u: goto label_3d37d4;
        case 0x3d37d8u: goto label_3d37d8;
        case 0x3d37dcu: goto label_3d37dc;
        case 0x3d37e0u: goto label_3d37e0;
        case 0x3d37e4u: goto label_3d37e4;
        case 0x3d37e8u: goto label_3d37e8;
        case 0x3d37ecu: goto label_3d37ec;
        case 0x3d37f0u: goto label_3d37f0;
        case 0x3d37f4u: goto label_3d37f4;
        case 0x3d37f8u: goto label_3d37f8;
        case 0x3d37fcu: goto label_3d37fc;
        case 0x3d3800u: goto label_3d3800;
        case 0x3d3804u: goto label_3d3804;
        case 0x3d3808u: goto label_3d3808;
        case 0x3d380cu: goto label_3d380c;
        case 0x3d3810u: goto label_3d3810;
        case 0x3d3814u: goto label_3d3814;
        case 0x3d3818u: goto label_3d3818;
        case 0x3d381cu: goto label_3d381c;
        case 0x3d3820u: goto label_3d3820;
        case 0x3d3824u: goto label_3d3824;
        case 0x3d3828u: goto label_3d3828;
        case 0x3d382cu: goto label_3d382c;
        case 0x3d3830u: goto label_3d3830;
        case 0x3d3834u: goto label_3d3834;
        case 0x3d3838u: goto label_3d3838;
        case 0x3d383cu: goto label_3d383c;
        case 0x3d3840u: goto label_3d3840;
        case 0x3d3844u: goto label_3d3844;
        case 0x3d3848u: goto label_3d3848;
        case 0x3d384cu: goto label_3d384c;
        case 0x3d3850u: goto label_3d3850;
        case 0x3d3854u: goto label_3d3854;
        case 0x3d3858u: goto label_3d3858;
        case 0x3d385cu: goto label_3d385c;
        case 0x3d3860u: goto label_3d3860;
        case 0x3d3864u: goto label_3d3864;
        case 0x3d3868u: goto label_3d3868;
        case 0x3d386cu: goto label_3d386c;
        case 0x3d3870u: goto label_3d3870;
        case 0x3d3874u: goto label_3d3874;
        case 0x3d3878u: goto label_3d3878;
        case 0x3d387cu: goto label_3d387c;
        case 0x3d3880u: goto label_3d3880;
        case 0x3d3884u: goto label_3d3884;
        case 0x3d3888u: goto label_3d3888;
        case 0x3d388cu: goto label_3d388c;
        case 0x3d3890u: goto label_3d3890;
        case 0x3d3894u: goto label_3d3894;
        case 0x3d3898u: goto label_3d3898;
        case 0x3d389cu: goto label_3d389c;
        case 0x3d38a0u: goto label_3d38a0;
        case 0x3d38a4u: goto label_3d38a4;
        case 0x3d38a8u: goto label_3d38a8;
        case 0x3d38acu: goto label_3d38ac;
        case 0x3d38b0u: goto label_3d38b0;
        case 0x3d38b4u: goto label_3d38b4;
        case 0x3d38b8u: goto label_3d38b8;
        case 0x3d38bcu: goto label_3d38bc;
        case 0x3d38c0u: goto label_3d38c0;
        case 0x3d38c4u: goto label_3d38c4;
        case 0x3d38c8u: goto label_3d38c8;
        case 0x3d38ccu: goto label_3d38cc;
        case 0x3d38d0u: goto label_3d38d0;
        case 0x3d38d4u: goto label_3d38d4;
        case 0x3d38d8u: goto label_3d38d8;
        case 0x3d38dcu: goto label_3d38dc;
        case 0x3d38e0u: goto label_3d38e0;
        case 0x3d38e4u: goto label_3d38e4;
        case 0x3d38e8u: goto label_3d38e8;
        case 0x3d38ecu: goto label_3d38ec;
        case 0x3d38f0u: goto label_3d38f0;
        case 0x3d38f4u: goto label_3d38f4;
        case 0x3d38f8u: goto label_3d38f8;
        case 0x3d38fcu: goto label_3d38fc;
        case 0x3d3900u: goto label_3d3900;
        case 0x3d3904u: goto label_3d3904;
        case 0x3d3908u: goto label_3d3908;
        case 0x3d390cu: goto label_3d390c;
        case 0x3d3910u: goto label_3d3910;
        case 0x3d3914u: goto label_3d3914;
        case 0x3d3918u: goto label_3d3918;
        case 0x3d391cu: goto label_3d391c;
        case 0x3d3920u: goto label_3d3920;
        case 0x3d3924u: goto label_3d3924;
        case 0x3d3928u: goto label_3d3928;
        case 0x3d392cu: goto label_3d392c;
        case 0x3d3930u: goto label_3d3930;
        case 0x3d3934u: goto label_3d3934;
        case 0x3d3938u: goto label_3d3938;
        case 0x3d393cu: goto label_3d393c;
        case 0x3d3940u: goto label_3d3940;
        case 0x3d3944u: goto label_3d3944;
        case 0x3d3948u: goto label_3d3948;
        case 0x3d394cu: goto label_3d394c;
        case 0x3d3950u: goto label_3d3950;
        case 0x3d3954u: goto label_3d3954;
        case 0x3d3958u: goto label_3d3958;
        case 0x3d395cu: goto label_3d395c;
        case 0x3d3960u: goto label_3d3960;
        case 0x3d3964u: goto label_3d3964;
        case 0x3d3968u: goto label_3d3968;
        case 0x3d396cu: goto label_3d396c;
        case 0x3d3970u: goto label_3d3970;
        case 0x3d3974u: goto label_3d3974;
        case 0x3d3978u: goto label_3d3978;
        case 0x3d397cu: goto label_3d397c;
        case 0x3d3980u: goto label_3d3980;
        case 0x3d3984u: goto label_3d3984;
        case 0x3d3988u: goto label_3d3988;
        case 0x3d398cu: goto label_3d398c;
        case 0x3d3990u: goto label_3d3990;
        case 0x3d3994u: goto label_3d3994;
        case 0x3d3998u: goto label_3d3998;
        case 0x3d399cu: goto label_3d399c;
        case 0x3d39a0u: goto label_3d39a0;
        case 0x3d39a4u: goto label_3d39a4;
        case 0x3d39a8u: goto label_3d39a8;
        case 0x3d39acu: goto label_3d39ac;
        case 0x3d39b0u: goto label_3d39b0;
        case 0x3d39b4u: goto label_3d39b4;
        case 0x3d39b8u: goto label_3d39b8;
        case 0x3d39bcu: goto label_3d39bc;
        case 0x3d39c0u: goto label_3d39c0;
        case 0x3d39c4u: goto label_3d39c4;
        case 0x3d39c8u: goto label_3d39c8;
        case 0x3d39ccu: goto label_3d39cc;
        default: break;
    }

    ctx->pc = 0x3d3450u;

label_3d3450:
    // 0x3d3450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d3454:
    // 0x3d3454: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d3454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d3458:
    // 0x3d3458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d3458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d345c:
    // 0x3d345c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d3460:
    // 0x3d3460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d3460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d3464:
    // 0x3d3464: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3d3464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3d3468:
    // 0x3d3468: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3d3468u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d346c:
    // 0x3d346c: 0xc0e393c  jal         func_38E4F0
label_3d3470:
    if (ctx->pc == 0x3D3470u) {
        ctx->pc = 0x3D3470u;
            // 0x3d3470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3474u;
        goto label_3d3474;
    }
    ctx->pc = 0x3D346Cu;
    SET_GPR_U32(ctx, 31, 0x3D3474u);
    ctx->pc = 0x3D3470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D346Cu;
            // 0x3d3470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3474u; }
        if (ctx->pc != 0x3D3474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3474u; }
        if (ctx->pc != 0x3D3474u) { return; }
    }
    ctx->pc = 0x3D3474u;
label_3d3474:
    // 0x3d3474: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3d3474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3d3478:
    // 0x3d3478: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d3478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3d347c:
    // 0x3d347c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d347cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d3480:
    // 0x3d3480: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x3d3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3484:
    // 0x3d3484: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d3484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d3488:
    // 0x3d3488: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3d348c:
    if (ctx->pc == 0x3D348Cu) {
        ctx->pc = 0x3D348Cu;
            // 0x3d348c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3D3490u;
        goto label_3d3490;
    }
    ctx->pc = 0x3D3488u;
    {
        const bool branch_taken_0x3d3488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d3488) {
            ctx->pc = 0x3D348Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3488u;
            // 0x3d348c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D34A0u;
            goto label_3d34a0;
        }
    }
    ctx->pc = 0x3D3490u;
label_3d3490:
    // 0x3d3490: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d3494:
    // 0x3d3494: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3d3494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3d3498:
    // 0x3d3498: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d349c:
    if (ctx->pc == 0x3D349Cu) {
        ctx->pc = 0x3D349Cu;
            // 0x3d349c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D34A0u;
        goto label_3d34a0;
    }
    ctx->pc = 0x3D3498u;
    {
        const bool branch_taken_0x3d3498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3498u;
            // 0x3d349c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3498) {
            ctx->pc = 0x3D34B8u;
            goto label_3d34b8;
        }
    }
    ctx->pc = 0x3D34A0u;
label_3d34a0:
    // 0x3d34a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3d34a4:
    // 0x3d34a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d34a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d34a8:
    // 0x3d34a8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3d34a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3d34ac:
    // 0x3d34ac: 0x0  nop
    ctx->pc = 0x3d34acu;
    // NOP
label_3d34b0:
    // 0x3d34b0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3d34b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3d34b4:
    // 0x3d34b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d34b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d34b8:
    // 0x3d34b8: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x3d34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_3d34bc:
    // 0x3d34bc: 0xc0b89e4  jal         func_2E2790
label_3d34c0:
    if (ctx->pc == 0x3D34C0u) {
        ctx->pc = 0x3D34C0u;
            // 0x3d34c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D34C4u;
        goto label_3d34c4;
    }
    ctx->pc = 0x3D34BCu;
    SET_GPR_U32(ctx, 31, 0x3D34C4u);
    ctx->pc = 0x3D34C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D34BCu;
            // 0x3d34c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D34C4u; }
        if (ctx->pc != 0x3D34C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D34C4u; }
        if (ctx->pc != 0x3D34C4u) { return; }
    }
    ctx->pc = 0x3D34C4u;
label_3d34c4:
    // 0x3d34c4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x3d34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_3d34c8:
    // 0x3d34c8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3d34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d34cc:
    // 0x3d34cc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3d34ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_3d34d0:
    // 0x3d34d0: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x3d34d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d34d4:
    // 0x3d34d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d34d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d34d8:
    // 0x3d34d8: 0xc60c01d0  lwc1        $f12, 0x1D0($s0)
    ctx->pc = 0x3d34d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d34dc:
    // 0x3d34dc: 0xc60e01d8  lwc1        $f14, 0x1D8($s0)
    ctx->pc = 0x3d34dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d34e0:
    // 0x3d34e0: 0xc04cbd8  jal         func_132F60
label_3d34e4:
    if (ctx->pc == 0x3D34E4u) {
        ctx->pc = 0x3D34E4u;
            // 0x3d34e4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3D34E8u;
        goto label_3d34e8;
    }
    ctx->pc = 0x3D34E0u;
    SET_GPR_U32(ctx, 31, 0x3D34E8u);
    ctx->pc = 0x3D34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D34E0u;
            // 0x3d34e4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D34E8u; }
        if (ctx->pc != 0x3D34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D34E8u; }
        if (ctx->pc != 0x3D34E8u) { return; }
    }
    ctx->pc = 0x3D34E8u;
label_3d34e8:
    // 0x3d34e8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3d34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3d34ec:
    // 0x3d34ec: 0xc04c74c  jal         func_131D30
label_3d34f0:
    if (ctx->pc == 0x3D34F0u) {
        ctx->pc = 0x3D34F0u;
            // 0x3d34f0: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x3D34F4u;
        goto label_3d34f4;
    }
    ctx->pc = 0x3D34ECu;
    SET_GPR_U32(ctx, 31, 0x3D34F4u);
    ctx->pc = 0x3D34F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D34ECu;
            // 0x3d34f0: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D34F4u; }
        if (ctx->pc != 0x3D34F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D34F4u; }
        if (ctx->pc != 0x3D34F4u) { return; }
    }
    ctx->pc = 0x3D34F4u;
label_3d34f4:
    // 0x3d34f4: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x3d34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_3d34f8:
    // 0x3d34f8: 0xc04c74c  jal         func_131D30
label_3d34fc:
    if (ctx->pc == 0x3D34FCu) {
        ctx->pc = 0x3D34FCu;
            // 0x3d34fc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x3D3500u;
        goto label_3d3500;
    }
    ctx->pc = 0x3D34F8u;
    SET_GPR_U32(ctx, 31, 0x3D3500u);
    ctx->pc = 0x3D34FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D34F8u;
            // 0x3d34fc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3500u; }
        if (ctx->pc != 0x3D3500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3500u; }
        if (ctx->pc != 0x3D3500u) { return; }
    }
    ctx->pc = 0x3D3500u;
label_3d3500:
    // 0x3d3500: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x3d3500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_3d3504:
    // 0x3d3504: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d3508:
    // 0x3d3508: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x3d3508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_3d350c:
    // 0x3d350c: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x3d350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_3d3510:
    // 0x3d3510: 0xc04c74c  jal         func_131D30
label_3d3514:
    if (ctx->pc == 0x3D3514u) {
        ctx->pc = 0x3D3514u;
            // 0x3d3514: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x3D3518u;
        goto label_3d3518;
    }
    ctx->pc = 0x3D3510u;
    SET_GPR_U32(ctx, 31, 0x3D3518u);
    ctx->pc = 0x3D3514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3510u;
            // 0x3d3514: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3518u; }
        if (ctx->pc != 0x3D3518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3518u; }
        if (ctx->pc != 0x3D3518u) { return; }
    }
    ctx->pc = 0x3D3518u;
label_3d3518:
    // 0x3d3518: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3d3518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3d351c:
    // 0x3d351c: 0xc04c720  jal         func_131C80
label_3d3520:
    if (ctx->pc == 0x3D3520u) {
        ctx->pc = 0x3D3520u;
            // 0x3d3520: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x3D3524u;
        goto label_3d3524;
    }
    ctx->pc = 0x3D351Cu;
    SET_GPR_U32(ctx, 31, 0x3D3524u);
    ctx->pc = 0x3D3520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D351Cu;
            // 0x3d3520: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3524u; }
        if (ctx->pc != 0x3D3524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3524u; }
        if (ctx->pc != 0x3D3524u) { return; }
    }
    ctx->pc = 0x3D3524u;
label_3d3524:
    // 0x3d3524: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3d3524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3d3528:
    // 0x3d3528: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3d3528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3d352c:
    // 0x3d352c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3d352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3d3530:
    // 0x3d3530: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3d3530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3d3534:
    // 0x3d3534: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x3d3534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d3538:
    // 0x3d3538: 0xc088b74  jal         func_222DD0
label_3d353c:
    if (ctx->pc == 0x3D353Cu) {
        ctx->pc = 0x3D353Cu;
            // 0x3d353c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3540u;
        goto label_3d3540;
    }
    ctx->pc = 0x3D3538u;
    SET_GPR_U32(ctx, 31, 0x3D3540u);
    ctx->pc = 0x3D353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3538u;
            // 0x3d353c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3540u; }
        if (ctx->pc != 0x3D3540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3540u; }
        if (ctx->pc != 0x3D3540u) { return; }
    }
    ctx->pc = 0x3D3540u;
label_3d3540:
    // 0x3d3540: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x3d3540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3d3544:
    // 0x3d3544: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3d3544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3d3548:
    // 0x3d3548: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d3548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d354c:
    // 0x3d354c: 0x320f809  jalr        $t9
label_3d3550:
    if (ctx->pc == 0x3D3550u) {
        ctx->pc = 0x3D3550u;
            // 0x3d3550: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D3554u;
        goto label_3d3554;
    }
    ctx->pc = 0x3D354Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D3554u);
        ctx->pc = 0x3D3550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D354Cu;
            // 0x3d3550: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D3554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D3554u; }
            if (ctx->pc != 0x3D3554u) { return; }
        }
        }
    }
    ctx->pc = 0x3D3554u;
label_3d3554:
    // 0x3d3554: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x3d3554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d3558:
    // 0x3d3558: 0xc088b74  jal         func_222DD0
label_3d355c:
    if (ctx->pc == 0x3D355Cu) {
        ctx->pc = 0x3D355Cu;
            // 0x3d355c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3560u;
        goto label_3d3560;
    }
    ctx->pc = 0x3D3558u;
    SET_GPR_U32(ctx, 31, 0x3D3560u);
    ctx->pc = 0x3D355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3558u;
            // 0x3d355c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3560u; }
        if (ctx->pc != 0x3D3560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3560u; }
        if (ctx->pc != 0x3D3560u) { return; }
    }
    ctx->pc = 0x3D3560u;
label_3d3560:
    // 0x3d3560: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x3d3560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3d3564:
    // 0x3d3564: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3d3564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3d3568:
    // 0x3d3568: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3d3568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3d356c:
    // 0x3d356c: 0x320f809  jalr        $t9
label_3d3570:
    if (ctx->pc == 0x3D3570u) {
        ctx->pc = 0x3D3570u;
            // 0x3d3570: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D3574u;
        goto label_3d3574;
    }
    ctx->pc = 0x3D356Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D3574u);
        ctx->pc = 0x3D3570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D356Cu;
            // 0x3d3570: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D3574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D3574u; }
            if (ctx->pc != 0x3D3574u) { return; }
        }
        }
    }
    ctx->pc = 0x3D3574u;
label_3d3574:
    // 0x3d3574: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x3d3574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d3578:
    // 0x3d3578: 0x3c02405f  lui         $v0, 0x405F
    ctx->pc = 0x3d3578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16479 << 16));
label_3d357c:
    // 0x3d357c: 0x344366f3  ori         $v1, $v0, 0x66F3
    ctx->pc = 0x3d357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
label_3d3580:
    // 0x3d3580: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x3d3580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_3d3584:
    // 0x3d3584: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d3584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d3588:
    // 0x3d3588: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d3588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d358c:
    // 0x3d358c: 0xace0015c  sw          $zero, 0x15C($a3)
    ctx->pc = 0x3d358cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 348), GPR_U32(ctx, 0));
label_3d3590:
    // 0x3d3590: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d3590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d3594:
    // 0x3d3594: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x3d3594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_3d3598:
    // 0x3d3598: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d3598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d359c:
    // 0x3d359c: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x3d359cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_3d35a0:
    // 0x3d35a0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d35a4:
    // 0x3d35a4: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x3d35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_3d35a8:
    // 0x3d35a8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d35ac:
    // 0x3d35ac: 0xc08914c  jal         func_224530
label_3d35b0:
    if (ctx->pc == 0x3D35B0u) {
        ctx->pc = 0x3D35B0u;
            // 0x3d35b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D35B4u;
        goto label_3d35b4;
    }
    ctx->pc = 0x3D35ACu;
    SET_GPR_U32(ctx, 31, 0x3D35B4u);
    ctx->pc = 0x3D35B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D35ACu;
            // 0x3d35b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D35B4u; }
        if (ctx->pc != 0x3D35B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D35B4u; }
        if (ctx->pc != 0x3D35B4u) { return; }
    }
    ctx->pc = 0x3D35B4u;
label_3d35b4:
    // 0x3d35b4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x3d35b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d35b8:
    // 0x3d35b8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3d35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3d35bc:
    // 0x3d35bc: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x3d35bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_3d35c0:
    // 0x3d35c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d35c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d35c4:
    // 0x3d35c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d35c8:
    // 0x3d35c8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3d35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3d35cc:
    // 0x3d35cc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d35d0:
    // 0x3d35d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d35d4:
    // 0x3d35d4: 0xc08bff0  jal         func_22FFC0
label_3d35d8:
    if (ctx->pc == 0x3D35D8u) {
        ctx->pc = 0x3D35D8u;
            // 0x3d35d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D35DCu;
        goto label_3d35dc;
    }
    ctx->pc = 0x3D35D4u;
    SET_GPR_U32(ctx, 31, 0x3D35DCu);
    ctx->pc = 0x3D35D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D35D4u;
            // 0x3d35d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D35DCu; }
        if (ctx->pc != 0x3D35DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D35DCu; }
        if (ctx->pc != 0x3D35DCu) { return; }
    }
    ctx->pc = 0x3D35DCu;
label_3d35dc:
    // 0x3d35dc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d35e0:
    // 0x3d35e0: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3d35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d35e4:
    // 0x3d35e4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3d35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d35e8:
    // 0x3d35e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d35e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d35ec:
    // 0x3d35ec: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3d35ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d35f0:
    // 0x3d35f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3d35f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d35f4:
    // 0x3d35f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d35f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d35f8:
    // 0x3d35f8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3d35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3d35fc:
    // 0x3d35fc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d35fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d3600:
    // 0x3d3600: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3d3600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d3604:
    // 0x3d3604: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x3d3604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d3608:
    // 0x3d3608: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3d3608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d360c:
    // 0x3d360c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3d360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3610:
    // 0x3d3610: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3d3610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3614:
    // 0x3d3614: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3d3614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d3618:
    // 0x3d3618: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d3618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d361c:
    // 0x3d361c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3d361cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3d3620:
    // 0x3d3620: 0xc0892b0  jal         func_224AC0
label_3d3624:
    if (ctx->pc == 0x3D3624u) {
        ctx->pc = 0x3D3624u;
            // 0x3d3624: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3D3628u;
        goto label_3d3628;
    }
    ctx->pc = 0x3D3620u;
    SET_GPR_U32(ctx, 31, 0x3D3628u);
    ctx->pc = 0x3D3624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3620u;
            // 0x3d3624: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3628u; }
        if (ctx->pc != 0x3D3628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3628u; }
        if (ctx->pc != 0x3D3628u) { return; }
    }
    ctx->pc = 0x3D3628u;
label_3d3628:
    // 0x3d3628: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3d3628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3d362c:
    // 0x3d362c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3630:
    // 0x3d3630: 0xa2000214  sb          $zero, 0x214($s0)
    ctx->pc = 0x3d3630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 532), (uint8_t)GPR_U32(ctx, 0));
label_3d3634:
    // 0x3d3634: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3d3634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d3638:
    // 0x3d3638: 0xa2040215  sb          $a0, 0x215($s0)
    ctx->pc = 0x3d3638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 533), (uint8_t)GPR_U32(ctx, 4));
label_3d363c:
    // 0x3d363c: 0xa2000216  sb          $zero, 0x216($s0)
    ctx->pc = 0x3d363cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 534), (uint8_t)GPR_U32(ctx, 0));
label_3d3640:
    // 0x3d3640: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x3d3640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_3d3644:
    // 0x3d3644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d3644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3648:
    // 0x3d3648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d3648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d364c:
    // 0x3d364c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d364cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3650:
    // 0x3d3650: 0x3e00008  jr          $ra
label_3d3654:
    if (ctx->pc == 0x3D3654u) {
        ctx->pc = 0x3D3654u;
            // 0x3d3654: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D3658u;
        goto label_3d3658;
    }
    ctx->pc = 0x3D3650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3650u;
            // 0x3d3654: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3658u;
label_3d3658:
    // 0x3d3658: 0x0  nop
    ctx->pc = 0x3d3658u;
    // NOP
label_3d365c:
    // 0x3d365c: 0x0  nop
    ctx->pc = 0x3d365cu;
    // NOP
label_3d3660:
    // 0x3d3660: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3d3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3d3664:
    // 0x3d3664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d3664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d3668:
    // 0x3d3668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d3668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d366c:
    // 0x3d366c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d3670:
    // 0x3d3670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d3670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3674:
    // 0x3d3674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d3674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d3678:
    // 0x3d3678: 0xc0892d0  jal         func_224B40
label_3d367c:
    if (ctx->pc == 0x3D367Cu) {
        ctx->pc = 0x3D367Cu;
            // 0x3d367c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D3680u;
        goto label_3d3680;
    }
    ctx->pc = 0x3D3678u;
    SET_GPR_U32(ctx, 31, 0x3D3680u);
    ctx->pc = 0x3D367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3678u;
            // 0x3d367c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3680u; }
        if (ctx->pc != 0x3D3680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3680u; }
        if (ctx->pc != 0x3D3680u) { return; }
    }
    ctx->pc = 0x3D3680u;
label_3d3680:
    // 0x3d3680: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d3680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d3684:
    // 0x3d3684: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d3684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d3688:
    // 0x3d3688: 0x8c426ea0  lw          $v0, 0x6EA0($v0)
    ctx->pc = 0x3d3688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28320)));
label_3d368c:
    // 0x3d368c: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x3d368cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3d3690:
    // 0x3d3690: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3d3690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3d3694:
    // 0x3d3694: 0xc0b6e68  jal         func_2DB9A0
label_3d3698:
    if (ctx->pc == 0x3D3698u) {
        ctx->pc = 0x3D3698u;
            // 0x3d3698: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3D369Cu;
        goto label_3d369c;
    }
    ctx->pc = 0x3D3694u;
    SET_GPR_U32(ctx, 31, 0x3D369Cu);
    ctx->pc = 0x3D3698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3694u;
            // 0x3d3698: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D369Cu; }
        if (ctx->pc != 0x3D369Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D369Cu; }
        if (ctx->pc != 0x3D369Cu) { return; }
    }
    ctx->pc = 0x3D369Cu;
label_3d369c:
    // 0x3d369c: 0xc0b6dac  jal         func_2DB6B0
label_3d36a0:
    if (ctx->pc == 0x3D36A0u) {
        ctx->pc = 0x3D36A0u;
            // 0x3d36a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D36A4u;
        goto label_3d36a4;
    }
    ctx->pc = 0x3D369Cu;
    SET_GPR_U32(ctx, 31, 0x3D36A4u);
    ctx->pc = 0x3D36A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D369Cu;
            // 0x3d36a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36A4u; }
        if (ctx->pc != 0x3D36A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36A4u; }
        if (ctx->pc != 0x3D36A4u) { return; }
    }
    ctx->pc = 0x3D36A4u;
label_3d36a4:
    // 0x3d36a4: 0xc0cac94  jal         func_32B250
label_3d36a8:
    if (ctx->pc == 0x3D36A8u) {
        ctx->pc = 0x3D36A8u;
            // 0x3d36a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D36ACu;
        goto label_3d36ac;
    }
    ctx->pc = 0x3D36A4u;
    SET_GPR_U32(ctx, 31, 0x3D36ACu);
    ctx->pc = 0x3D36A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D36A4u;
            // 0x3d36a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36ACu; }
        if (ctx->pc != 0x3D36ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36ACu; }
        if (ctx->pc != 0x3D36ACu) { return; }
    }
    ctx->pc = 0x3D36ACu;
label_3d36ac:
    // 0x3d36ac: 0xc0cac84  jal         func_32B210
label_3d36b0:
    if (ctx->pc == 0x3D36B0u) {
        ctx->pc = 0x3D36B0u;
            // 0x3d36b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D36B4u;
        goto label_3d36b4;
    }
    ctx->pc = 0x3D36ACu;
    SET_GPR_U32(ctx, 31, 0x3D36B4u);
    ctx->pc = 0x3D36B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D36ACu;
            // 0x3d36b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36B4u; }
        if (ctx->pc != 0x3D36B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36B4u; }
        if (ctx->pc != 0x3D36B4u) { return; }
    }
    ctx->pc = 0x3D36B4u;
label_3d36b4:
    // 0x3d36b4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3d36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3d36b8:
    // 0x3d36b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3d36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3d36bc:
    // 0x3d36bc: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x3d36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d36c0:
    // 0x3d36c0: 0xc0a5a68  jal         func_2969A0
label_3d36c4:
    if (ctx->pc == 0x3D36C4u) {
        ctx->pc = 0x3D36C4u;
            // 0x3d36c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D36C8u;
        goto label_3d36c8;
    }
    ctx->pc = 0x3D36C0u;
    SET_GPR_U32(ctx, 31, 0x3D36C8u);
    ctx->pc = 0x3D36C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D36C0u;
            // 0x3d36c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36C8u; }
        if (ctx->pc != 0x3D36C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D36C8u; }
        if (ctx->pc != 0x3D36C8u) { return; }
    }
    ctx->pc = 0x3D36C8u;
label_3d36c8:
    // 0x3d36c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d36cc:
    // 0x3d36cc: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x3d36ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_3d36d0:
    // 0x3d36d0: 0x8c436ea0  lw          $v1, 0x6EA0($v0)
    ctx->pc = 0x3d36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28320)));
label_3d36d4:
    // 0x3d36d4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3d36d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d36d8:
    // 0x3d36d8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x3d36d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d36dc:
    // 0x3d36dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3d36dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d36e0:
    // 0x3d36e0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x3d36e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d36e4:
    // 0x3d36e4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3d36e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d36e8:
    // 0x3d36e8: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x3d36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3d36ec:
    // 0x3d36ec: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x3d36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_3d36f0:
    // 0x3d36f0: 0x3447126f  ori         $a3, $v0, 0x126F
    ctx->pc = 0x3d36f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_3d36f4:
    // 0x3d36f4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3d36f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3d36f8:
    // 0x3d36f8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3d36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3d36fc:
    // 0x3d36fc: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x3d36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_3d3700:
    // 0x3d3700: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x3d3700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_3d3704:
    // 0x3d3704: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x3d3704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3d3708:
    // 0x3d3708: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d370c:
    // 0x3d370c: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x3d370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3d3710:
    // 0x3d3710: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d3710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d3714:
    // 0x3d3714: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x3d3714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3d3718:
    // 0x3d3718: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x3d3718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3d371c:
    // 0x3d371c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x3d371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3d3720:
    // 0x3d3720: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x3d3720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3d3724:
    // 0x3d3724: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x3d3724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_3d3728:
    // 0x3d3728: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x3d3728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3d372c:
    // 0x3d372c: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x3d372cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_3d3730:
    // 0x3d3730: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3d3730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3d3734:
    // 0x3d3734: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x3d3734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_3d3738:
    // 0x3d3738: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x3d3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d373c:
    // 0x3d373c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3d373cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3d3740:
    // 0x3d3740: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3d3740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3744:
    // 0x3d3744: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3d3744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3d3748:
    // 0x3d3748: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x3d3748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d374c:
    // 0x3d374c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x3d374cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3d3750:
    // 0x3d3750: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x3d3750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3d3754:
    // 0x3d3754: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x3d3754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3d3758:
    // 0x3d3758: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x3d3758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d375c:
    // 0x3d375c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3d375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3760:
    // 0x3d3760: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3d3760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3764:
    // 0x3d3764: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x3d3764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3d3768:
    // 0x3d3768: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x3d3768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3d376c:
    // 0x3d376c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x3d376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3d3770:
    // 0x3d3770: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x3d3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3d3774:
    // 0x3d3774: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x3d3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d3778:
    // 0x3d3778: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x3d3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d377c:
    // 0x3d377c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x3d377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d3780:
    // 0x3d3780: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x3d3780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3784:
    // 0x3d3784: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3d3784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3788:
    // 0x3d3788: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x3d3788u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3d378c:
    // 0x3d378c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x3d378cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3d3790:
    // 0x3d3790: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x3d3790u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3d3794:
    // 0x3d3794: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x3d3794u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3d3798:
    // 0x3d3798: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x3d3798u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_3d379c:
    // 0x3d379c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x3d379cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3d37a0:
    // 0x3d37a0: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x3d37a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_3d37a4:
    // 0x3d37a4: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x3d37a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3d37a8:
    // 0x3d37a8: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x3d37a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3d37ac:
    // 0x3d37ac: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x3d37acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_3d37b0:
    // 0x3d37b0: 0xc0a7a88  jal         func_29EA20
label_3d37b4:
    if (ctx->pc == 0x3D37B4u) {
        ctx->pc = 0x3D37B4u;
            // 0x3d37b4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3D37B8u;
        goto label_3d37b8;
    }
    ctx->pc = 0x3D37B0u;
    SET_GPR_U32(ctx, 31, 0x3D37B8u);
    ctx->pc = 0x3D37B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D37B0u;
            // 0x3d37b4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D37B8u; }
        if (ctx->pc != 0x3D37B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D37B8u; }
        if (ctx->pc != 0x3D37B8u) { return; }
    }
    ctx->pc = 0x3D37B8u;
label_3d37b8:
    // 0x3d37b8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3d37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d37bc:
    // 0x3d37bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d37bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d37c0:
    // 0x3d37c0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3d37c4:
    if (ctx->pc == 0x3D37C4u) {
        ctx->pc = 0x3D37C4u;
            // 0x3d37c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D37C8u;
        goto label_3d37c8;
    }
    ctx->pc = 0x3D37C0u;
    {
        const bool branch_taken_0x3d37c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D37C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D37C0u;
            // 0x3d37c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d37c0) {
            ctx->pc = 0x3D3810u;
            goto label_3d3810;
        }
    }
    ctx->pc = 0x3D37C8u;
label_3d37c8:
    // 0x3d37c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d37c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d37cc:
    // 0x3d37cc: 0xc088ef4  jal         func_223BD0
label_3d37d0:
    if (ctx->pc == 0x3D37D0u) {
        ctx->pc = 0x3D37D0u;
            // 0x3d37d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D37D4u;
        goto label_3d37d4;
    }
    ctx->pc = 0x3D37CCu;
    SET_GPR_U32(ctx, 31, 0x3D37D4u);
    ctx->pc = 0x3D37D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D37CCu;
            // 0x3d37d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D37D4u; }
        if (ctx->pc != 0x3D37D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D37D4u; }
        if (ctx->pc != 0x3D37D4u) { return; }
    }
    ctx->pc = 0x3D37D4u;
label_3d37d4:
    // 0x3d37d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d37d8:
    // 0x3d37d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d37dc:
    // 0x3d37dc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3d37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3d37e0:
    // 0x3d37e0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3d37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3d37e4:
    // 0x3d37e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d37e8:
    // 0x3d37e8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3d37e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3d37ec:
    // 0x3d37ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d37f0:
    // 0x3d37f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d37f4:
    // 0x3d37f4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3d37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3d37f8:
    // 0x3d37f8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3d37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3d37fc:
    // 0x3d37fc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3d37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3d3800:
    // 0x3d3800: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d3804:
    // 0x3d3804: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3d3804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d3808:
    // 0x3d3808: 0xc088b38  jal         func_222CE0
label_3d380c:
    if (ctx->pc == 0x3D380Cu) {
        ctx->pc = 0x3D380Cu;
            // 0x3d380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3810u;
        goto label_3d3810;
    }
    ctx->pc = 0x3D3808u;
    SET_GPR_U32(ctx, 31, 0x3D3810u);
    ctx->pc = 0x3D380Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3808u;
            // 0x3d380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3810u; }
        if (ctx->pc != 0x3D3810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3810u; }
        if (ctx->pc != 0x3D3810u) { return; }
    }
    ctx->pc = 0x3D3810u;
label_3d3810:
    // 0x3d3810: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3d3810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3d3814:
    // 0x3d3814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3818:
    // 0x3d3818: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x3d3818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_3d381c:
    // 0x3d381c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d3820:
    // 0x3d3820: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x3d3820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_3d3824:
    // 0x3d3824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d3824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3828:
    // 0x3d3828: 0xc08914c  jal         func_224530
label_3d382c:
    if (ctx->pc == 0x3D382Cu) {
        ctx->pc = 0x3D382Cu;
            // 0x3d382c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3830u;
        goto label_3d3830;
    }
    ctx->pc = 0x3D3828u;
    SET_GPR_U32(ctx, 31, 0x3D3830u);
    ctx->pc = 0x3D382Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3828u;
            // 0x3d382c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3830u; }
        if (ctx->pc != 0x3D3830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3830u; }
        if (ctx->pc != 0x3D3830u) { return; }
    }
    ctx->pc = 0x3D3830u;
label_3d3830:
    // 0x3d3830: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3d3830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d3834:
    // 0x3d3834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3838:
    // 0x3d3838: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3d3838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d383c:
    // 0x3d383c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d383cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d3840:
    // 0x3d3840: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3d3840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3844:
    // 0x3d3844: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3d3844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d3848:
    // 0x3d3848: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3d3848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3d384c:
    // 0x3d384c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3d384cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3d3850:
    // 0x3d3850: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3d3850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3d3854:
    // 0x3d3854: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3d3854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3d3858:
    // 0x3d3858: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3d3858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d385c:
    // 0x3d385c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3d385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d3860:
    // 0x3d3860: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3d3860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3864:
    // 0x3d3864: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3d3864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3868:
    // 0x3d3868: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d3868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d386c:
    // 0x3d386c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d386cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d3870:
    // 0x3d3870: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3d3870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d3874:
    // 0x3d3874: 0xc0892b0  jal         func_224AC0
label_3d3878:
    if (ctx->pc == 0x3D3878u) {
        ctx->pc = 0x3D3878u;
            // 0x3d3878: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3D387Cu;
        goto label_3d387c;
    }
    ctx->pc = 0x3D3874u;
    SET_GPR_U32(ctx, 31, 0x3D387Cu);
    ctx->pc = 0x3D3878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3874u;
            // 0x3d3878: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D387Cu; }
        if (ctx->pc != 0x3D387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D387Cu; }
        if (ctx->pc != 0x3D387Cu) { return; }
    }
    ctx->pc = 0x3D387Cu;
label_3d387c:
    // 0x3d387c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3d387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3d3880:
    // 0x3d3880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3884:
    // 0x3d3884: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3d3884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3d3888:
    // 0x3d3888: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3d3888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d388c:
    // 0x3d388c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3d388cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3d3890:
    // 0x3d3890: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3d3890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3d3894:
    // 0x3d3894: 0xc0891d8  jal         func_224760
label_3d3898:
    if (ctx->pc == 0x3D3898u) {
        ctx->pc = 0x3D3898u;
            // 0x3d3898: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3D389Cu;
        goto label_3d389c;
    }
    ctx->pc = 0x3D3894u;
    SET_GPR_U32(ctx, 31, 0x3D389Cu);
    ctx->pc = 0x3D3898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3894u;
            // 0x3d3898: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D389Cu; }
        if (ctx->pc != 0x3D389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D389Cu; }
        if (ctx->pc != 0x3D389Cu) { return; }
    }
    ctx->pc = 0x3D389Cu;
label_3d389c:
    // 0x3d389c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3d389cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3d38a0:
    // 0x3d38a0: 0x3c02405f  lui         $v0, 0x405F
    ctx->pc = 0x3d38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16479 << 16));
label_3d38a4:
    // 0x3d38a4: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x3d38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_3d38a8:
    // 0x3d38a8: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x3d38a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
label_3d38ac:
    // 0x3d38ac: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x3d38acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_3d38b0:
    // 0x3d38b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d38b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d38b4:
    // 0x3d38b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d38b8:
    // 0x3d38b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d38bc:
    // 0x3d38bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d38bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d38c0:
    // 0x3d38c0: 0xc08c164  jal         func_230590
label_3d38c4:
    if (ctx->pc == 0x3D38C4u) {
        ctx->pc = 0x3D38C4u;
            // 0x3d38c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D38C8u;
        goto label_3d38c8;
    }
    ctx->pc = 0x3D38C0u;
    SET_GPR_U32(ctx, 31, 0x3D38C8u);
    ctx->pc = 0x3D38C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D38C0u;
            // 0x3d38c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D38C8u; }
        if (ctx->pc != 0x3D38C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D38C8u; }
        if (ctx->pc != 0x3D38C8u) { return; }
    }
    ctx->pc = 0x3D38C8u;
label_3d38c8:
    // 0x3d38c8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x3d38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_3d38cc:
    // 0x3d38cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d38d0:
    // 0x3d38d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d38d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d38d4:
    // 0x3d38d4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3d38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3d38d8:
    // 0x3d38d8: 0xc0a7a88  jal         func_29EA20
label_3d38dc:
    if (ctx->pc == 0x3D38DCu) {
        ctx->pc = 0x3D38DCu;
            // 0x3d38dc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3D38E0u;
        goto label_3d38e0;
    }
    ctx->pc = 0x3D38D8u;
    SET_GPR_U32(ctx, 31, 0x3D38E0u);
    ctx->pc = 0x3D38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D38D8u;
            // 0x3d38dc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D38E0u; }
        if (ctx->pc != 0x3D38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D38E0u; }
        if (ctx->pc != 0x3D38E0u) { return; }
    }
    ctx->pc = 0x3D38E0u;
label_3d38e0:
    // 0x3d38e0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3d38e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3d38e4:
    // 0x3d38e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d38e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d38e8:
    // 0x3d38e8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_3d38ec:
    if (ctx->pc == 0x3D38ECu) {
        ctx->pc = 0x3D38ECu;
            // 0x3d38ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D38F0u;
        goto label_3d38f0;
    }
    ctx->pc = 0x3D38E8u;
    {
        const bool branch_taken_0x3d38e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D38ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D38E8u;
            // 0x3d38ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38e8) {
            ctx->pc = 0x3D390Cu;
            goto label_3d390c;
        }
    }
    ctx->pc = 0x3D38F0u;
label_3d38f0:
    // 0x3d38f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d38f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d38f4:
    // 0x3d38f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d38f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d38f8:
    // 0x3d38f8: 0xc0869d0  jal         func_21A740
label_3d38fc:
    if (ctx->pc == 0x3D38FCu) {
        ctx->pc = 0x3D38FCu;
            // 0x3d38fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3900u;
        goto label_3d3900;
    }
    ctx->pc = 0x3D38F8u;
    SET_GPR_U32(ctx, 31, 0x3D3900u);
    ctx->pc = 0x3D38FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D38F8u;
            // 0x3d38fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3900u; }
        if (ctx->pc != 0x3D3900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3900u; }
        if (ctx->pc != 0x3D3900u) { return; }
    }
    ctx->pc = 0x3D3900u;
label_3d3900:
    // 0x3d3900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d3900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d3904:
    // 0x3d3904: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3d3904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3d3908:
    // 0x3d3908: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d3908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3d390c:
    // 0x3d390c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x3d390cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_3d3910:
    // 0x3d3910: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d3910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3914:
    // 0x3d3914: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d3918:
    // 0x3d3918: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d3918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d391c:
    // 0x3d391c: 0xc08c650  jal         func_231940
label_3d3920:
    if (ctx->pc == 0x3D3920u) {
        ctx->pc = 0x3D3920u;
            // 0x3d3920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3924u;
        goto label_3d3924;
    }
    ctx->pc = 0x3D391Cu;
    SET_GPR_U32(ctx, 31, 0x3D3924u);
    ctx->pc = 0x3D3920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D391Cu;
            // 0x3d3920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3924u; }
        if (ctx->pc != 0x3D3924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3924u; }
        if (ctx->pc != 0x3D3924u) { return; }
    }
    ctx->pc = 0x3D3924u;
label_3d3924:
    // 0x3d3924: 0xc040180  jal         func_100600
label_3d3928:
    if (ctx->pc == 0x3D3928u) {
        ctx->pc = 0x3D3928u;
            // 0x3d3928: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x3D392Cu;
        goto label_3d392c;
    }
    ctx->pc = 0x3D3924u;
    SET_GPR_U32(ctx, 31, 0x3D392Cu);
    ctx->pc = 0x3D3928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3924u;
            // 0x3d3928: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D392Cu; }
        if (ctx->pc != 0x3D392Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D392Cu; }
        if (ctx->pc != 0x3D392Cu) { return; }
    }
    ctx->pc = 0x3D392Cu;
label_3d392c:
    // 0x3d392c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_3d3930:
    if (ctx->pc == 0x3D3930u) {
        ctx->pc = 0x3D3930u;
            // 0x3d3930: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3D3934u;
        goto label_3d3934;
    }
    ctx->pc = 0x3D392Cu;
    {
        const bool branch_taken_0x3d392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d392c) {
            ctx->pc = 0x3D3930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D392Cu;
            // 0x3d3930: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D397Cu;
            goto label_3d397c;
        }
    }
    ctx->pc = 0x3D3934u;
label_3d3934:
    // 0x3d3934: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x3d3934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3d3938:
    // 0x3d3938: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x3d3938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_3d393c:
    // 0x3d393c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x3d393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_3d3940:
    // 0x3d3940: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3d3940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3d3944:
    // 0x3d3944: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x3d3944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_3d3948:
    // 0x3d3948: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x3d3948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_3d394c:
    // 0x3d394c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x3d394cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_3d3950:
    // 0x3d3950: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3d3950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_3d3954:
    // 0x3d3954: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x3d3954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_3d3958:
    // 0x3d3958: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x3d3958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_3d395c:
    // 0x3d395c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x3d395cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_3d3960:
    // 0x3d3960: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x3d3960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_3d3964:
    // 0x3d3964: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x3d3964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_3d3968:
    // 0x3d3968: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x3d3968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_3d396c:
    // 0x3d396c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x3d396cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_3d3970:
    // 0x3d3970: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x3d3970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_3d3974:
    // 0x3d3974: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x3d3974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_3d3978:
    // 0x3d3978: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x3d3978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_3d397c:
    // 0x3d397c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3d397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3d3980:
    // 0x3d3980: 0x8e2800b0  lw          $t0, 0xB0($s1)
    ctx->pc = 0x3d3980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3d3984:
    // 0x3d3984: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x3d3984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d3988:
    // 0x3d3988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d3988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d398c:
    // 0x3d398c: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x3d398cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_3d3990:
    // 0x3d3990: 0xc4605de0  lwc1        $f0, 0x5DE0($v1)
    ctx->pc = 0x3d3990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3994:
    // 0x3d3994: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x3d3994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_3d3998:
    // 0x3d3998: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x3d3998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_3d399c:
    // 0x3d399c: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x3d399cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
label_3d39a0:
    // 0x3d39a0: 0xae2700b0  sw          $a3, 0xB0($s1)
    ctx->pc = 0x3d39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 7));
label_3d39a4:
    // 0x3d39a4: 0xae26008c  sw          $a2, 0x8C($s1)
    ctx->pc = 0x3d39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 6));
label_3d39a8:
    // 0x3d39a8: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x3d39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_3d39ac:
    // 0x3d39ac: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x3d39acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_3d39b0:
    // 0x3d39b0: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x3d39b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_3d39b4:
    // 0x3d39b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d39b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d39b8:
    // 0x3d39b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d39b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d39bc:
    // 0x3d39bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d39bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d39c0:
    // 0x3d39c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d39c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d39c4:
    // 0x3d39c4: 0x3e00008  jr          $ra
label_3d39c8:
    if (ctx->pc == 0x3D39C8u) {
        ctx->pc = 0x3D39C8u;
            // 0x3d39c8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3D39CCu;
        goto label_3d39cc;
    }
    ctx->pc = 0x3D39C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D39C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D39C4u;
            // 0x3d39c8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D39CCu;
label_3d39cc:
    // 0x3d39cc: 0x0  nop
    ctx->pc = 0x3d39ccu;
    // NOP
}
