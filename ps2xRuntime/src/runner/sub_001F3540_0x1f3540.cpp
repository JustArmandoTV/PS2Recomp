#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3540
// Address: 0x1f3540 - 0x1f3880
void sub_001F3540_0x1f3540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3540_0x1f3540");
#endif

    switch (ctx->pc) {
        case 0x1f3540u: goto label_1f3540;
        case 0x1f3544u: goto label_1f3544;
        case 0x1f3548u: goto label_1f3548;
        case 0x1f354cu: goto label_1f354c;
        case 0x1f3550u: goto label_1f3550;
        case 0x1f3554u: goto label_1f3554;
        case 0x1f3558u: goto label_1f3558;
        case 0x1f355cu: goto label_1f355c;
        case 0x1f3560u: goto label_1f3560;
        case 0x1f3564u: goto label_1f3564;
        case 0x1f3568u: goto label_1f3568;
        case 0x1f356cu: goto label_1f356c;
        case 0x1f3570u: goto label_1f3570;
        case 0x1f3574u: goto label_1f3574;
        case 0x1f3578u: goto label_1f3578;
        case 0x1f357cu: goto label_1f357c;
        case 0x1f3580u: goto label_1f3580;
        case 0x1f3584u: goto label_1f3584;
        case 0x1f3588u: goto label_1f3588;
        case 0x1f358cu: goto label_1f358c;
        case 0x1f3590u: goto label_1f3590;
        case 0x1f3594u: goto label_1f3594;
        case 0x1f3598u: goto label_1f3598;
        case 0x1f359cu: goto label_1f359c;
        case 0x1f35a0u: goto label_1f35a0;
        case 0x1f35a4u: goto label_1f35a4;
        case 0x1f35a8u: goto label_1f35a8;
        case 0x1f35acu: goto label_1f35ac;
        case 0x1f35b0u: goto label_1f35b0;
        case 0x1f35b4u: goto label_1f35b4;
        case 0x1f35b8u: goto label_1f35b8;
        case 0x1f35bcu: goto label_1f35bc;
        case 0x1f35c0u: goto label_1f35c0;
        case 0x1f35c4u: goto label_1f35c4;
        case 0x1f35c8u: goto label_1f35c8;
        case 0x1f35ccu: goto label_1f35cc;
        case 0x1f35d0u: goto label_1f35d0;
        case 0x1f35d4u: goto label_1f35d4;
        case 0x1f35d8u: goto label_1f35d8;
        case 0x1f35dcu: goto label_1f35dc;
        case 0x1f35e0u: goto label_1f35e0;
        case 0x1f35e4u: goto label_1f35e4;
        case 0x1f35e8u: goto label_1f35e8;
        case 0x1f35ecu: goto label_1f35ec;
        case 0x1f35f0u: goto label_1f35f0;
        case 0x1f35f4u: goto label_1f35f4;
        case 0x1f35f8u: goto label_1f35f8;
        case 0x1f35fcu: goto label_1f35fc;
        case 0x1f3600u: goto label_1f3600;
        case 0x1f3604u: goto label_1f3604;
        case 0x1f3608u: goto label_1f3608;
        case 0x1f360cu: goto label_1f360c;
        case 0x1f3610u: goto label_1f3610;
        case 0x1f3614u: goto label_1f3614;
        case 0x1f3618u: goto label_1f3618;
        case 0x1f361cu: goto label_1f361c;
        case 0x1f3620u: goto label_1f3620;
        case 0x1f3624u: goto label_1f3624;
        case 0x1f3628u: goto label_1f3628;
        case 0x1f362cu: goto label_1f362c;
        case 0x1f3630u: goto label_1f3630;
        case 0x1f3634u: goto label_1f3634;
        case 0x1f3638u: goto label_1f3638;
        case 0x1f363cu: goto label_1f363c;
        case 0x1f3640u: goto label_1f3640;
        case 0x1f3644u: goto label_1f3644;
        case 0x1f3648u: goto label_1f3648;
        case 0x1f364cu: goto label_1f364c;
        case 0x1f3650u: goto label_1f3650;
        case 0x1f3654u: goto label_1f3654;
        case 0x1f3658u: goto label_1f3658;
        case 0x1f365cu: goto label_1f365c;
        case 0x1f3660u: goto label_1f3660;
        case 0x1f3664u: goto label_1f3664;
        case 0x1f3668u: goto label_1f3668;
        case 0x1f366cu: goto label_1f366c;
        case 0x1f3670u: goto label_1f3670;
        case 0x1f3674u: goto label_1f3674;
        case 0x1f3678u: goto label_1f3678;
        case 0x1f367cu: goto label_1f367c;
        case 0x1f3680u: goto label_1f3680;
        case 0x1f3684u: goto label_1f3684;
        case 0x1f3688u: goto label_1f3688;
        case 0x1f368cu: goto label_1f368c;
        case 0x1f3690u: goto label_1f3690;
        case 0x1f3694u: goto label_1f3694;
        case 0x1f3698u: goto label_1f3698;
        case 0x1f369cu: goto label_1f369c;
        case 0x1f36a0u: goto label_1f36a0;
        case 0x1f36a4u: goto label_1f36a4;
        case 0x1f36a8u: goto label_1f36a8;
        case 0x1f36acu: goto label_1f36ac;
        case 0x1f36b0u: goto label_1f36b0;
        case 0x1f36b4u: goto label_1f36b4;
        case 0x1f36b8u: goto label_1f36b8;
        case 0x1f36bcu: goto label_1f36bc;
        case 0x1f36c0u: goto label_1f36c0;
        case 0x1f36c4u: goto label_1f36c4;
        case 0x1f36c8u: goto label_1f36c8;
        case 0x1f36ccu: goto label_1f36cc;
        case 0x1f36d0u: goto label_1f36d0;
        case 0x1f36d4u: goto label_1f36d4;
        case 0x1f36d8u: goto label_1f36d8;
        case 0x1f36dcu: goto label_1f36dc;
        case 0x1f36e0u: goto label_1f36e0;
        case 0x1f36e4u: goto label_1f36e4;
        case 0x1f36e8u: goto label_1f36e8;
        case 0x1f36ecu: goto label_1f36ec;
        case 0x1f36f0u: goto label_1f36f0;
        case 0x1f36f4u: goto label_1f36f4;
        case 0x1f36f8u: goto label_1f36f8;
        case 0x1f36fcu: goto label_1f36fc;
        case 0x1f3700u: goto label_1f3700;
        case 0x1f3704u: goto label_1f3704;
        case 0x1f3708u: goto label_1f3708;
        case 0x1f370cu: goto label_1f370c;
        case 0x1f3710u: goto label_1f3710;
        case 0x1f3714u: goto label_1f3714;
        case 0x1f3718u: goto label_1f3718;
        case 0x1f371cu: goto label_1f371c;
        case 0x1f3720u: goto label_1f3720;
        case 0x1f3724u: goto label_1f3724;
        case 0x1f3728u: goto label_1f3728;
        case 0x1f372cu: goto label_1f372c;
        case 0x1f3730u: goto label_1f3730;
        case 0x1f3734u: goto label_1f3734;
        case 0x1f3738u: goto label_1f3738;
        case 0x1f373cu: goto label_1f373c;
        case 0x1f3740u: goto label_1f3740;
        case 0x1f3744u: goto label_1f3744;
        case 0x1f3748u: goto label_1f3748;
        case 0x1f374cu: goto label_1f374c;
        case 0x1f3750u: goto label_1f3750;
        case 0x1f3754u: goto label_1f3754;
        case 0x1f3758u: goto label_1f3758;
        case 0x1f375cu: goto label_1f375c;
        case 0x1f3760u: goto label_1f3760;
        case 0x1f3764u: goto label_1f3764;
        case 0x1f3768u: goto label_1f3768;
        case 0x1f376cu: goto label_1f376c;
        case 0x1f3770u: goto label_1f3770;
        case 0x1f3774u: goto label_1f3774;
        case 0x1f3778u: goto label_1f3778;
        case 0x1f377cu: goto label_1f377c;
        case 0x1f3780u: goto label_1f3780;
        case 0x1f3784u: goto label_1f3784;
        case 0x1f3788u: goto label_1f3788;
        case 0x1f378cu: goto label_1f378c;
        case 0x1f3790u: goto label_1f3790;
        case 0x1f3794u: goto label_1f3794;
        case 0x1f3798u: goto label_1f3798;
        case 0x1f379cu: goto label_1f379c;
        case 0x1f37a0u: goto label_1f37a0;
        case 0x1f37a4u: goto label_1f37a4;
        case 0x1f37a8u: goto label_1f37a8;
        case 0x1f37acu: goto label_1f37ac;
        case 0x1f37b0u: goto label_1f37b0;
        case 0x1f37b4u: goto label_1f37b4;
        case 0x1f37b8u: goto label_1f37b8;
        case 0x1f37bcu: goto label_1f37bc;
        case 0x1f37c0u: goto label_1f37c0;
        case 0x1f37c4u: goto label_1f37c4;
        case 0x1f37c8u: goto label_1f37c8;
        case 0x1f37ccu: goto label_1f37cc;
        case 0x1f37d0u: goto label_1f37d0;
        case 0x1f37d4u: goto label_1f37d4;
        case 0x1f37d8u: goto label_1f37d8;
        case 0x1f37dcu: goto label_1f37dc;
        case 0x1f37e0u: goto label_1f37e0;
        case 0x1f37e4u: goto label_1f37e4;
        case 0x1f37e8u: goto label_1f37e8;
        case 0x1f37ecu: goto label_1f37ec;
        case 0x1f37f0u: goto label_1f37f0;
        case 0x1f37f4u: goto label_1f37f4;
        case 0x1f37f8u: goto label_1f37f8;
        case 0x1f37fcu: goto label_1f37fc;
        case 0x1f3800u: goto label_1f3800;
        case 0x1f3804u: goto label_1f3804;
        case 0x1f3808u: goto label_1f3808;
        case 0x1f380cu: goto label_1f380c;
        case 0x1f3810u: goto label_1f3810;
        case 0x1f3814u: goto label_1f3814;
        case 0x1f3818u: goto label_1f3818;
        case 0x1f381cu: goto label_1f381c;
        case 0x1f3820u: goto label_1f3820;
        case 0x1f3824u: goto label_1f3824;
        case 0x1f3828u: goto label_1f3828;
        case 0x1f382cu: goto label_1f382c;
        case 0x1f3830u: goto label_1f3830;
        case 0x1f3834u: goto label_1f3834;
        case 0x1f3838u: goto label_1f3838;
        case 0x1f383cu: goto label_1f383c;
        case 0x1f3840u: goto label_1f3840;
        case 0x1f3844u: goto label_1f3844;
        case 0x1f3848u: goto label_1f3848;
        case 0x1f384cu: goto label_1f384c;
        case 0x1f3850u: goto label_1f3850;
        case 0x1f3854u: goto label_1f3854;
        case 0x1f3858u: goto label_1f3858;
        case 0x1f385cu: goto label_1f385c;
        case 0x1f3860u: goto label_1f3860;
        case 0x1f3864u: goto label_1f3864;
        case 0x1f3868u: goto label_1f3868;
        case 0x1f386cu: goto label_1f386c;
        case 0x1f3870u: goto label_1f3870;
        case 0x1f3874u: goto label_1f3874;
        case 0x1f3878u: goto label_1f3878;
        case 0x1f387cu: goto label_1f387c;
        default: break;
    }

    ctx->pc = 0x1f3540u;

label_1f3540:
    // 0x1f3540: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f3540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1f3544:
    // 0x1f3544: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f3548:
    // 0x1f3548: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f354c:
    // 0x1f354c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f3550:
    // 0x1f3550: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f3550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f3554:
    // 0x1f3554: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f3554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f3558:
    // 0x1f3558: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f3558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f355c:
    // 0x1f355c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1f355cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f3560:
    // 0x1f3560: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f3560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f3564:
    // 0x1f3564: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f3564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3568:
    // 0x1f3568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f356c:
    // 0x1f356c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f356cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3570:
    // 0x1f3570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f3574:
    // 0x1f3574: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f3574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f3578:
    // 0x1f3578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f357c:
    // 0x1f357c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f357cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f3580:
    // 0x1f3580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f3584:
    // 0x1f3584: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f3584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f3588:
    // 0x1f3588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f358c:
    // 0x1f358c: 0x8cbe0000  lw          $fp, 0x0($a1)
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3590:
    // 0x1f3590: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f3590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f3594:
    // 0x1f3594: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1f3594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f3598:
    // 0x1f3598: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1f3598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f359c:
    // 0x1f359c: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x1f359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f35a0:
    // 0x1f35a0: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x1f35a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f35a4:
    // 0x1f35a4: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f35a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f35a8:
    // 0x1f35a8: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f35ac:
    // 0x1f35ac: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f35b0:
    // 0x1f35b0: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f35b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f35b4:
    // 0x1f35b4: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f35b8:
    // 0x1f35b8: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f35b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f35bc:
    // 0x1f35bc: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f35bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f35c0:
    // 0x1f35c0: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f35c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f35c4:
    // 0x1f35c4: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f35c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f35c8:
    // 0x1f35c8: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f35c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f35cc:
    // 0x1f35cc: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f35ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f35d0:
    // 0x1f35d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f35d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f35d4:
    // 0x1f35d4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f35d8:
    // 0x1f35d8: 0xe7b000e4  swc1        $f16, 0xE4($sp)
    ctx->pc = 0x1f35d8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f35dc:
    // 0x1f35dc: 0xe7af00e8  swc1        $f15, 0xE8($sp)
    ctx->pc = 0x1f35dcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f35e0:
    // 0x1f35e0: 0xe7ae00ec  swc1        $f14, 0xEC($sp)
    ctx->pc = 0x1f35e0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f35e4:
    // 0x1f35e4: 0xe7ad00f0  swc1        $f13, 0xF0($sp)
    ctx->pc = 0x1f35e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f35e8:
    // 0x1f35e8: 0xe7ab00f4  swc1        $f11, 0xF4($sp)
    ctx->pc = 0x1f35e8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f35ec:
    // 0x1f35ec: 0xe7aa00f8  swc1        $f10, 0xF8($sp)
    ctx->pc = 0x1f35ecu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f35f0:
    // 0x1f35f0: 0xe7a900fc  swc1        $f9, 0xFC($sp)
    ctx->pc = 0x1f35f0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f35f4:
    // 0x1f35f4: 0xe7a80100  swc1        $f8, 0x100($sp)
    ctx->pc = 0x1f35f4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f35f8:
    // 0x1f35f8: 0xe7a70104  swc1        $f7, 0x104($sp)
    ctx->pc = 0x1f35f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f35fc:
    // 0x1f35fc: 0xe7a60108  swc1        $f6, 0x108($sp)
    ctx->pc = 0x1f35fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f3600:
    // 0x1f3600: 0xe7a5010c  swc1        $f5, 0x10C($sp)
    ctx->pc = 0x1f3600u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f3604:
    // 0x1f3604: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x1f3604u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f3608:
    // 0x1f3608: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x1f3608u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f360c:
    // 0x1f360c: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x1f360cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f3610:
    // 0x1f3610: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x1f3610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f3614:
    // 0x1f3614: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f3614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3618:
    // 0x1f3618: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f3618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f361c:
    // 0x1f361c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3620:
    // 0x1f3620: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f3620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f3624:
    // 0x1f3624: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f3624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3628:
    // 0x1f3628: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f3628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f362c:
    // 0x1f362c: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3630:
    // 0x1f3630: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f3630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f3634:
    // 0x1f3634: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f3634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3638:
    // 0x1f3638: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f3638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f363c:
    // 0x1f363c: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3640:
    // 0x1f3640: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f3640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f3644:
    // 0x1f3644: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f3644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3648:
    // 0x1f3648: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f3648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f364c:
    // 0x1f364c: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3650:
    // 0x1f3650: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f3650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f3654:
    // 0x1f3654: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1f3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3658:
    // 0x1f3658: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f3658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f365c:
    // 0x1f365c: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1f365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3660:
    // 0x1f3660: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f3660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f3664:
    // 0x1f3664: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1f3664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3668:
    // 0x1f3668: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f3668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f366c:
    // 0x1f366c: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1f366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3670:
    // 0x1f3670: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f3670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f3674:
    // 0x1f3674: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1f3674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3678:
    // 0x1f3678: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f3678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f367c:
    // 0x1f367c: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1f367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3680:
    // 0x1f3680: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f3680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f3684:
    // 0x1f3684: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1f3684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3688:
    // 0x1f3688: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f3688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f368c:
    // 0x1f368c: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3690:
    // 0x1f3690: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f3690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f3694:
    // 0x1f3694: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1f3694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3698:
    // 0x1f3698: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f3698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f369c:
    // 0x1f369c: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1f369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36a0:
    // 0x1f36a0: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f36a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f36a4:
    // 0x1f36a4: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1f36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36a8:
    // 0x1f36a8: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f36a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f36ac:
    // 0x1f36ac: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f36acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36b0:
    // 0x1f36b0: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f36b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f36b4:
    // 0x1f36b4: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f36b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36b8:
    // 0x1f36b8: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f36b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f36bc:
    // 0x1f36bc: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1f36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36c0:
    // 0x1f36c0: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1f36c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_1f36c4:
    // 0x1f36c4: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f36c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36c8:
    // 0x1f36c8: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x1f36c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f36cc:
    // 0x1f36cc: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f36ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36d0:
    // 0x1f36d0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1f36d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_1f36d4:
    // 0x1f36d4: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f36d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36d8:
    // 0x1f36d8: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1f36d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f36dc:
    // 0x1f36dc: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1f36dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36e0:
    // 0x1f36e0: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x1f36e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f36e4:
    // 0x1f36e4: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36e8:
    // 0x1f36e8: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1f36e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f36ec:
    // 0x1f36ec: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1f36ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36f0:
    // 0x1f36f0: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1f36f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1f36f4:
    // 0x1f36f4: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1f36f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f36f8:
    // 0x1f36f8: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x1f36f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f36fc:
    // 0x1f36fc: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1f36fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1f3700:
    // 0x1f3700: 0xa7a20194  sh          $v0, 0x194($sp)
    ctx->pc = 0x1f3700u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 2));
label_1f3704:
    // 0x1f3704: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1f3704u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1f3708:
    // 0x1f3708: 0xa7a20196  sh          $v0, 0x196($sp)
    ctx->pc = 0x1f3708u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 406), (uint16_t)GPR_U32(ctx, 2));
label_1f370c:
    // 0x1f370c: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1f370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3710:
    // 0x1f3710: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1f3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3714:
    // 0x1f3714: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x1f3714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1f3718:
    // 0x1f3718: 0xc0827ac  jal         func_209EB0
label_1f371c:
    if (ctx->pc == 0x1F371Cu) {
        ctx->pc = 0x1F371Cu;
            // 0x1f371c: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x1F3720u;
        goto label_1f3720;
    }
    ctx->pc = 0x1F3718u;
    SET_GPR_U32(ctx, 31, 0x1F3720u);
    ctx->pc = 0x1F371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3718u;
            // 0x1f371c: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3720u; }
        if (ctx->pc != 0x1F3720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3720u; }
        if (ctx->pc != 0x1F3720u) { return; }
    }
    ctx->pc = 0x1F3720u;
label_1f3720:
    // 0x1f3720: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1f3724:
    // 0x1f3724: 0xafb500bc  sw          $s5, 0xBC($sp)
    ctx->pc = 0x1f3724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 21));
label_1f3728:
    // 0x1f3728: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1f3728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_1f372c:
    // 0x1f372c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f3730:
    // 0x1f3730: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f3734:
    // 0x1f3734: 0x6200042  bltz        $s1, . + 4 + (0x42 << 2)
label_1f3738:
    if (ctx->pc == 0x1F3738u) {
        ctx->pc = 0x1F3738u;
            // 0x1f3738: 0x8e17000c  lw          $s7, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1F373Cu;
        goto label_1f373c;
    }
    ctx->pc = 0x1F3734u;
    {
        const bool branch_taken_0x1f3734 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F3738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3734u;
            // 0x1f3738: 0x8e17000c  lw          $s7, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3734) {
            ctx->pc = 0x1F3840u;
            goto label_1f3840;
        }
    }
    ctx->pc = 0x1F373Cu;
label_1f373c:
    // 0x1f373c: 0x6200040  bltz        $s1, . + 4 + (0x40 << 2)
label_1f3740:
    if (ctx->pc == 0x1F3740u) {
        ctx->pc = 0x1F3744u;
        goto label_1f3744;
    }
    ctx->pc = 0x1F373Cu;
    {
        const bool branch_taken_0x1f373c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1f373c) {
            ctx->pc = 0x1F3840u;
            goto label_1f3840;
        }
    }
    ctx->pc = 0x1F3744u;
label_1f3744:
    // 0x1f3744: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1f3744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1f3748:
    // 0x1f3748: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1f374c:
    // 0x1f374c: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x1f374cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1f3750:
    // 0x1f3750: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x1f3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f3754:
    // 0x1f3754: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f3754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f3758:
    // 0x1f3758: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1f3758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f375c:
    // 0x1f375c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1f375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f3760:
    // 0x1f3760: 0xc6080000  lwc1        $f8, 0x0($s0)
    ctx->pc = 0x1f3760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f3764:
    // 0x1f3764: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f3768:
    // 0x1f3768: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1f3768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f376c:
    // 0x1f376c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f376cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3770:
    // 0x1f3770: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3770u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3774:
    // 0x1f3774: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f3774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3778:
    // 0x1f3778: 0xc7a50100  lwc1        $f5, 0x100($sp)
    ctx->pc = 0x1f3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f377c:
    // 0x1f377c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f377cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f3780:
    // 0x1f3780: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f3780u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f3784:
    // 0x1f3784: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x1f3784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f3788:
    // 0x1f3788: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1f3788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f378c:
    // 0x1f378c: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x1f378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3790:
    // 0x1f3790: 0x4605315c  madd.s      $f5, $f6, $f5
    ctx->pc = 0x1f3790u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1f3794:
    // 0x1f3794: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f3794u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f3798:
    // 0x1f3798: 0xc7a40104  lwc1        $f4, 0x104($sp)
    ctx->pc = 0x1f3798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f379c:
    // 0x1f379c: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x1f379cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f37a0:
    // 0x1f37a0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f37a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f37a4:
    // 0x1f37a4: 0x460430dc  madd.s      $f3, $f6, $f4
    ctx->pc = 0x1f37a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f37a8:
    // 0x1f37a8: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f37a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f37ac:
    // 0x1f37ac: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x1f37acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f37b0:
    // 0x1f37b0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1f37b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f37b4:
    // 0x1f37b4: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f37b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f37b8:
    // 0x1f37b8: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1f37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f37bc:
    // 0x1f37bc: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f37bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f37c0:
    // 0x1f37c0: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x1f37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f37c4:
    // 0x1f37c4: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x1f37c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_1f37c8:
    // 0x1f37c8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f37c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f37cc:
    // 0x1f37cc: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f37ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_1f37d0:
    // 0x1f37d0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1f37d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f37d4:
    // 0x1f37d4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1f37d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f37d8:
    // 0x1f37d8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1f37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f37dc:
    // 0x1f37dc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f37dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f37e0:
    // 0x1f37e0: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x1f37e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f37e4:
    // 0x1f37e4: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f37e8:
    // 0x1f37e8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1f37e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f37ec:
    // 0x1f37ec: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1f37ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f37f0:
    // 0x1f37f0: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1f37f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f37f4:
    // 0x1f37f4: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f37f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f37f8:
    // 0x1f37f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f37f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f37fc:
    // 0x1f37fc: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x1f37fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f3800:
    // 0x1f3800: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3804:
    // 0x1f3804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f3804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f3808:
    // 0x1f3808: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f3808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f380c:
    // 0x1f380c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1f380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3810:
    // 0x1f3810: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f3810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f3814:
    // 0x1f3814: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1f3814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1f3818:
    // 0x1f3818: 0xafb100b4  sw          $s1, 0xB4($sp)
    ctx->pc = 0x1f3818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 17));
label_1f381c:
    // 0x1f381c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x1f381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1f3820:
    // 0x1f3820: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f3820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f3824:
    // 0x1f3824: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f3824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f3828:
    // 0x1f3828: 0x320f809  jalr        $t9
label_1f382c:
    if (ctx->pc == 0x1F382Cu) {
        ctx->pc = 0x1F382Cu;
            // 0x1f382c: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3830u;
        goto label_1f3830;
    }
    ctx->pc = 0x1F3828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F3830u);
        ctx->pc = 0x1F382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3828u;
            // 0x1f382c: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F3830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F3830u; }
            if (ctx->pc != 0x1F3830u) { return; }
        }
        }
    }
    ctx->pc = 0x1F3830u;
label_1f3830:
    // 0x1f3830: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f3830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f3834:
    // 0x1f3834: 0x621ffc6  bgez        $s1, . + 4 + (-0x3A << 2)
label_1f3838:
    if (ctx->pc == 0x1F3838u) {
        ctx->pc = 0x1F3838u;
            // 0x1f3838: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->pc = 0x1F383Cu;
        goto label_1f383c;
    }
    ctx->pc = 0x1F3834u;
    {
        const bool branch_taken_0x1f3834 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F3838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3834u;
            // 0x1f3838: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3834) {
            ctx->pc = 0x1F3750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f3750;
        }
    }
    ctx->pc = 0x1F383Cu;
label_1f383c:
    // 0x1f383c: 0x0  nop
    ctx->pc = 0x1f383cu;
    // NOP
label_1f3840:
    // 0x1f3840: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f3840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f3844:
    // 0x1f3844: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f3848:
    // 0x1f3848: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1f3848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1f384c:
    // 0x1f384c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f3850:
    // 0x1f3850: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f3850u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f3854:
    // 0x1f3854: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f3854u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f3858:
    // 0x1f3858: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f3858u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f385c:
    // 0x1f385c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f385cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f3860:
    // 0x1f3860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f3860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f3864:
    // 0x1f3864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f3864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f3868:
    // 0x1f3868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f3868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f386c:
    // 0x1f386c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f386cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3870:
    // 0x1f3870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3874:
    // 0x1f3874: 0x3e00008  jr          $ra
label_1f3878:
    if (ctx->pc == 0x1F3878u) {
        ctx->pc = 0x1F3878u;
            // 0x1f3878: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x1F387Cu;
        goto label_1f387c;
    }
    ctx->pc = 0x1F3874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3874u;
            // 0x1f3878: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F387Cu;
label_1f387c:
    // 0x1f387c: 0x0  nop
    ctx->pc = 0x1f387cu;
    // NOP
}
