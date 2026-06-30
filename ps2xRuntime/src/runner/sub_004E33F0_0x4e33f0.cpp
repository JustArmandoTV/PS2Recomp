#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E33F0
// Address: 0x4e33f0 - 0x4e3790
void sub_004E33F0_0x4e33f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E33F0_0x4e33f0");
#endif

    switch (ctx->pc) {
        case 0x4e33f0u: goto label_4e33f0;
        case 0x4e33f4u: goto label_4e33f4;
        case 0x4e33f8u: goto label_4e33f8;
        case 0x4e33fcu: goto label_4e33fc;
        case 0x4e3400u: goto label_4e3400;
        case 0x4e3404u: goto label_4e3404;
        case 0x4e3408u: goto label_4e3408;
        case 0x4e340cu: goto label_4e340c;
        case 0x4e3410u: goto label_4e3410;
        case 0x4e3414u: goto label_4e3414;
        case 0x4e3418u: goto label_4e3418;
        case 0x4e341cu: goto label_4e341c;
        case 0x4e3420u: goto label_4e3420;
        case 0x4e3424u: goto label_4e3424;
        case 0x4e3428u: goto label_4e3428;
        case 0x4e342cu: goto label_4e342c;
        case 0x4e3430u: goto label_4e3430;
        case 0x4e3434u: goto label_4e3434;
        case 0x4e3438u: goto label_4e3438;
        case 0x4e343cu: goto label_4e343c;
        case 0x4e3440u: goto label_4e3440;
        case 0x4e3444u: goto label_4e3444;
        case 0x4e3448u: goto label_4e3448;
        case 0x4e344cu: goto label_4e344c;
        case 0x4e3450u: goto label_4e3450;
        case 0x4e3454u: goto label_4e3454;
        case 0x4e3458u: goto label_4e3458;
        case 0x4e345cu: goto label_4e345c;
        case 0x4e3460u: goto label_4e3460;
        case 0x4e3464u: goto label_4e3464;
        case 0x4e3468u: goto label_4e3468;
        case 0x4e346cu: goto label_4e346c;
        case 0x4e3470u: goto label_4e3470;
        case 0x4e3474u: goto label_4e3474;
        case 0x4e3478u: goto label_4e3478;
        case 0x4e347cu: goto label_4e347c;
        case 0x4e3480u: goto label_4e3480;
        case 0x4e3484u: goto label_4e3484;
        case 0x4e3488u: goto label_4e3488;
        case 0x4e348cu: goto label_4e348c;
        case 0x4e3490u: goto label_4e3490;
        case 0x4e3494u: goto label_4e3494;
        case 0x4e3498u: goto label_4e3498;
        case 0x4e349cu: goto label_4e349c;
        case 0x4e34a0u: goto label_4e34a0;
        case 0x4e34a4u: goto label_4e34a4;
        case 0x4e34a8u: goto label_4e34a8;
        case 0x4e34acu: goto label_4e34ac;
        case 0x4e34b0u: goto label_4e34b0;
        case 0x4e34b4u: goto label_4e34b4;
        case 0x4e34b8u: goto label_4e34b8;
        case 0x4e34bcu: goto label_4e34bc;
        case 0x4e34c0u: goto label_4e34c0;
        case 0x4e34c4u: goto label_4e34c4;
        case 0x4e34c8u: goto label_4e34c8;
        case 0x4e34ccu: goto label_4e34cc;
        case 0x4e34d0u: goto label_4e34d0;
        case 0x4e34d4u: goto label_4e34d4;
        case 0x4e34d8u: goto label_4e34d8;
        case 0x4e34dcu: goto label_4e34dc;
        case 0x4e34e0u: goto label_4e34e0;
        case 0x4e34e4u: goto label_4e34e4;
        case 0x4e34e8u: goto label_4e34e8;
        case 0x4e34ecu: goto label_4e34ec;
        case 0x4e34f0u: goto label_4e34f0;
        case 0x4e34f4u: goto label_4e34f4;
        case 0x4e34f8u: goto label_4e34f8;
        case 0x4e34fcu: goto label_4e34fc;
        case 0x4e3500u: goto label_4e3500;
        case 0x4e3504u: goto label_4e3504;
        case 0x4e3508u: goto label_4e3508;
        case 0x4e350cu: goto label_4e350c;
        case 0x4e3510u: goto label_4e3510;
        case 0x4e3514u: goto label_4e3514;
        case 0x4e3518u: goto label_4e3518;
        case 0x4e351cu: goto label_4e351c;
        case 0x4e3520u: goto label_4e3520;
        case 0x4e3524u: goto label_4e3524;
        case 0x4e3528u: goto label_4e3528;
        case 0x4e352cu: goto label_4e352c;
        case 0x4e3530u: goto label_4e3530;
        case 0x4e3534u: goto label_4e3534;
        case 0x4e3538u: goto label_4e3538;
        case 0x4e353cu: goto label_4e353c;
        case 0x4e3540u: goto label_4e3540;
        case 0x4e3544u: goto label_4e3544;
        case 0x4e3548u: goto label_4e3548;
        case 0x4e354cu: goto label_4e354c;
        case 0x4e3550u: goto label_4e3550;
        case 0x4e3554u: goto label_4e3554;
        case 0x4e3558u: goto label_4e3558;
        case 0x4e355cu: goto label_4e355c;
        case 0x4e3560u: goto label_4e3560;
        case 0x4e3564u: goto label_4e3564;
        case 0x4e3568u: goto label_4e3568;
        case 0x4e356cu: goto label_4e356c;
        case 0x4e3570u: goto label_4e3570;
        case 0x4e3574u: goto label_4e3574;
        case 0x4e3578u: goto label_4e3578;
        case 0x4e357cu: goto label_4e357c;
        case 0x4e3580u: goto label_4e3580;
        case 0x4e3584u: goto label_4e3584;
        case 0x4e3588u: goto label_4e3588;
        case 0x4e358cu: goto label_4e358c;
        case 0x4e3590u: goto label_4e3590;
        case 0x4e3594u: goto label_4e3594;
        case 0x4e3598u: goto label_4e3598;
        case 0x4e359cu: goto label_4e359c;
        case 0x4e35a0u: goto label_4e35a0;
        case 0x4e35a4u: goto label_4e35a4;
        case 0x4e35a8u: goto label_4e35a8;
        case 0x4e35acu: goto label_4e35ac;
        case 0x4e35b0u: goto label_4e35b0;
        case 0x4e35b4u: goto label_4e35b4;
        case 0x4e35b8u: goto label_4e35b8;
        case 0x4e35bcu: goto label_4e35bc;
        case 0x4e35c0u: goto label_4e35c0;
        case 0x4e35c4u: goto label_4e35c4;
        case 0x4e35c8u: goto label_4e35c8;
        case 0x4e35ccu: goto label_4e35cc;
        case 0x4e35d0u: goto label_4e35d0;
        case 0x4e35d4u: goto label_4e35d4;
        case 0x4e35d8u: goto label_4e35d8;
        case 0x4e35dcu: goto label_4e35dc;
        case 0x4e35e0u: goto label_4e35e0;
        case 0x4e35e4u: goto label_4e35e4;
        case 0x4e35e8u: goto label_4e35e8;
        case 0x4e35ecu: goto label_4e35ec;
        case 0x4e35f0u: goto label_4e35f0;
        case 0x4e35f4u: goto label_4e35f4;
        case 0x4e35f8u: goto label_4e35f8;
        case 0x4e35fcu: goto label_4e35fc;
        case 0x4e3600u: goto label_4e3600;
        case 0x4e3604u: goto label_4e3604;
        case 0x4e3608u: goto label_4e3608;
        case 0x4e360cu: goto label_4e360c;
        case 0x4e3610u: goto label_4e3610;
        case 0x4e3614u: goto label_4e3614;
        case 0x4e3618u: goto label_4e3618;
        case 0x4e361cu: goto label_4e361c;
        case 0x4e3620u: goto label_4e3620;
        case 0x4e3624u: goto label_4e3624;
        case 0x4e3628u: goto label_4e3628;
        case 0x4e362cu: goto label_4e362c;
        case 0x4e3630u: goto label_4e3630;
        case 0x4e3634u: goto label_4e3634;
        case 0x4e3638u: goto label_4e3638;
        case 0x4e363cu: goto label_4e363c;
        case 0x4e3640u: goto label_4e3640;
        case 0x4e3644u: goto label_4e3644;
        case 0x4e3648u: goto label_4e3648;
        case 0x4e364cu: goto label_4e364c;
        case 0x4e3650u: goto label_4e3650;
        case 0x4e3654u: goto label_4e3654;
        case 0x4e3658u: goto label_4e3658;
        case 0x4e365cu: goto label_4e365c;
        case 0x4e3660u: goto label_4e3660;
        case 0x4e3664u: goto label_4e3664;
        case 0x4e3668u: goto label_4e3668;
        case 0x4e366cu: goto label_4e366c;
        case 0x4e3670u: goto label_4e3670;
        case 0x4e3674u: goto label_4e3674;
        case 0x4e3678u: goto label_4e3678;
        case 0x4e367cu: goto label_4e367c;
        case 0x4e3680u: goto label_4e3680;
        case 0x4e3684u: goto label_4e3684;
        case 0x4e3688u: goto label_4e3688;
        case 0x4e368cu: goto label_4e368c;
        case 0x4e3690u: goto label_4e3690;
        case 0x4e3694u: goto label_4e3694;
        case 0x4e3698u: goto label_4e3698;
        case 0x4e369cu: goto label_4e369c;
        case 0x4e36a0u: goto label_4e36a0;
        case 0x4e36a4u: goto label_4e36a4;
        case 0x4e36a8u: goto label_4e36a8;
        case 0x4e36acu: goto label_4e36ac;
        case 0x4e36b0u: goto label_4e36b0;
        case 0x4e36b4u: goto label_4e36b4;
        case 0x4e36b8u: goto label_4e36b8;
        case 0x4e36bcu: goto label_4e36bc;
        case 0x4e36c0u: goto label_4e36c0;
        case 0x4e36c4u: goto label_4e36c4;
        case 0x4e36c8u: goto label_4e36c8;
        case 0x4e36ccu: goto label_4e36cc;
        case 0x4e36d0u: goto label_4e36d0;
        case 0x4e36d4u: goto label_4e36d4;
        case 0x4e36d8u: goto label_4e36d8;
        case 0x4e36dcu: goto label_4e36dc;
        case 0x4e36e0u: goto label_4e36e0;
        case 0x4e36e4u: goto label_4e36e4;
        case 0x4e36e8u: goto label_4e36e8;
        case 0x4e36ecu: goto label_4e36ec;
        case 0x4e36f0u: goto label_4e36f0;
        case 0x4e36f4u: goto label_4e36f4;
        case 0x4e36f8u: goto label_4e36f8;
        case 0x4e36fcu: goto label_4e36fc;
        case 0x4e3700u: goto label_4e3700;
        case 0x4e3704u: goto label_4e3704;
        case 0x4e3708u: goto label_4e3708;
        case 0x4e370cu: goto label_4e370c;
        case 0x4e3710u: goto label_4e3710;
        case 0x4e3714u: goto label_4e3714;
        case 0x4e3718u: goto label_4e3718;
        case 0x4e371cu: goto label_4e371c;
        case 0x4e3720u: goto label_4e3720;
        case 0x4e3724u: goto label_4e3724;
        case 0x4e3728u: goto label_4e3728;
        case 0x4e372cu: goto label_4e372c;
        case 0x4e3730u: goto label_4e3730;
        case 0x4e3734u: goto label_4e3734;
        case 0x4e3738u: goto label_4e3738;
        case 0x4e373cu: goto label_4e373c;
        case 0x4e3740u: goto label_4e3740;
        case 0x4e3744u: goto label_4e3744;
        case 0x4e3748u: goto label_4e3748;
        case 0x4e374cu: goto label_4e374c;
        case 0x4e3750u: goto label_4e3750;
        case 0x4e3754u: goto label_4e3754;
        case 0x4e3758u: goto label_4e3758;
        case 0x4e375cu: goto label_4e375c;
        case 0x4e3760u: goto label_4e3760;
        case 0x4e3764u: goto label_4e3764;
        case 0x4e3768u: goto label_4e3768;
        case 0x4e376cu: goto label_4e376c;
        case 0x4e3770u: goto label_4e3770;
        case 0x4e3774u: goto label_4e3774;
        case 0x4e3778u: goto label_4e3778;
        case 0x4e377cu: goto label_4e377c;
        case 0x4e3780u: goto label_4e3780;
        case 0x4e3784u: goto label_4e3784;
        case 0x4e3788u: goto label_4e3788;
        case 0x4e378cu: goto label_4e378c;
        default: break;
    }

    ctx->pc = 0x4e33f0u;

label_4e33f0:
    // 0x4e33f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e33f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e33f4:
    // 0x4e33f4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4e33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4e33f8:
    // 0x4e33f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e33f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e33fc:
    // 0x4e33fc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4e33fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e3400:
    // 0x4e3400: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e3404:
    // 0x4e3404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e3408:
    // 0x4e3408: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e3408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e340c:
    // 0x4e340c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e3410:
    // 0x4e3410: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e3410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3414:
    // 0x4e3414: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4e3414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e3418:
    // 0x4e3418: 0x3445abe2  ori         $a1, $v0, 0xABE2
    ctx->pc = 0x4e3418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44002);
label_4e341c:
    // 0x4e341c: 0xc10ca68  jal         func_4329A0
label_4e3420:
    if (ctx->pc == 0x4E3420u) {
        ctx->pc = 0x4E3420u;
            // 0x4e3420: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4E3424u;
        goto label_4e3424;
    }
    ctx->pc = 0x4E341Cu;
    SET_GPR_U32(ctx, 31, 0x4E3424u);
    ctx->pc = 0x4E3420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E341Cu;
            // 0x4e3420: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3424u; }
        if (ctx->pc != 0x4E3424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3424u; }
        if (ctx->pc != 0x4E3424u) { return; }
    }
    ctx->pc = 0x4E3424u;
label_4e3424:
    // 0x4e3424: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e3424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e3428:
    // 0x4e3428: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e3428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e342c:
    // 0x4e342c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4e3430:
    // 0x4e3430: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x4e3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
label_4e3434:
    // 0x4e3434: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e3434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4e3438:
    // 0x4e3438: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x4e3438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
label_4e343c:
    // 0x4e343c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e343cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4e3440:
    // 0x4e3440: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e3440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4e3444:
    // 0x4e3444: 0xae510054  sw          $s1, 0x54($s2)
    ctx->pc = 0x4e3444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 17));
label_4e3448:
    // 0x4e3448: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4e3448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e344c:
    // 0x4e344c: 0xae500058  sw          $s0, 0x58($s2)
    ctx->pc = 0x4e344cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 16));
label_4e3450:
    // 0x4e3450: 0xa2400060  sb          $zero, 0x60($s2)
    ctx->pc = 0x4e3450u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 0));
label_4e3454:
    // 0x4e3454: 0xa2400061  sb          $zero, 0x61($s2)
    ctx->pc = 0x4e3454u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 97), (uint8_t)GPR_U32(ctx, 0));
label_4e3458:
    // 0x4e3458: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x4e3458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_4e345c:
    // 0x4e345c: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x4e345cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_4e3460:
    // 0x4e3460: 0xae44006c  sw          $a0, 0x6C($s2)
    ctx->pc = 0x4e3460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 4));
label_4e3464:
    // 0x4e3464: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x4e3464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_4e3468:
    // 0x4e3468: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x4e3468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_4e346c:
    // 0x4e346c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4e346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4e3470:
    // 0x4e3470: 0x246305b8  addiu       $v1, $v1, 0x5B8
    ctx->pc = 0x4e3470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1464));
label_4e3474:
    // 0x4e3474: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x4e3474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
label_4e3478:
    // 0x4e3478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e3478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e347c:
    // 0x4e347c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e347cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3480:
    // 0x4e3480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e3480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3484:
    // 0x4e3484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e3484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3488:
    // 0x4e3488: 0x3e00008  jr          $ra
label_4e348c:
    if (ctx->pc == 0x4E348Cu) {
        ctx->pc = 0x4E348Cu;
            // 0x4e348c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4E3490u;
        goto label_4e3490;
    }
    ctx->pc = 0x4E3488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3488u;
            // 0x4e348c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3490u;
label_4e3490:
    // 0x4e3490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e3494:
    // 0x4e3494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e3494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e3498:
    // 0x4e3498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e349c:
    // 0x4e349c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e34a0:
    // 0x4e34a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e34a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e34a4:
    // 0x4e34a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4e34a8:
    if (ctx->pc == 0x4E34A8u) {
        ctx->pc = 0x4E34A8u;
            // 0x4e34a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E34ACu;
        goto label_4e34ac;
    }
    ctx->pc = 0x4E34A4u;
    {
        const bool branch_taken_0x4e34a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E34A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E34A4u;
            // 0x4e34a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e34a4) {
            ctx->pc = 0x4E34E8u;
            goto label_4e34e8;
        }
    }
    ctx->pc = 0x4E34ACu;
label_4e34ac:
    // 0x4e34ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e34acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e34b0:
    // 0x4e34b0: 0x24423760  addiu       $v0, $v0, 0x3760
    ctx->pc = 0x4e34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14176));
label_4e34b4:
    // 0x4e34b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4e34b8:
    if (ctx->pc == 0x4E34B8u) {
        ctx->pc = 0x4E34B8u;
            // 0x4e34b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E34BCu;
        goto label_4e34bc;
    }
    ctx->pc = 0x4E34B4u;
    {
        const bool branch_taken_0x4e34b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E34B4u;
            // 0x4e34b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e34b4) {
            ctx->pc = 0x4E34D0u;
            goto label_4e34d0;
        }
    }
    ctx->pc = 0x4E34BCu;
label_4e34bc:
    // 0x4e34bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e34c0:
    // 0x4e34c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e34c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e34c4:
    // 0x4e34c4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4e34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4e34c8:
    // 0x4e34c8: 0xc057a68  jal         func_15E9A0
label_4e34cc:
    if (ctx->pc == 0x4E34CCu) {
        ctx->pc = 0x4E34CCu;
            // 0x4e34cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E34D0u;
        goto label_4e34d0;
    }
    ctx->pc = 0x4E34C8u;
    SET_GPR_U32(ctx, 31, 0x4E34D0u);
    ctx->pc = 0x4E34CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E34C8u;
            // 0x4e34cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E34D0u; }
        if (ctx->pc != 0x4E34D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E34D0u; }
        if (ctx->pc != 0x4E34D0u) { return; }
    }
    ctx->pc = 0x4E34D0u;
label_4e34d0:
    // 0x4e34d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e34d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e34d4:
    // 0x4e34d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e34d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e34d8:
    // 0x4e34d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e34dc:
    if (ctx->pc == 0x4E34DCu) {
        ctx->pc = 0x4E34DCu;
            // 0x4e34dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E34E0u;
        goto label_4e34e0;
    }
    ctx->pc = 0x4E34D8u;
    {
        const bool branch_taken_0x4e34d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e34d8) {
            ctx->pc = 0x4E34DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E34D8u;
            // 0x4e34dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E34ECu;
            goto label_4e34ec;
        }
    }
    ctx->pc = 0x4E34E0u;
label_4e34e0:
    // 0x4e34e0: 0xc0400a8  jal         func_1002A0
label_4e34e4:
    if (ctx->pc == 0x4E34E4u) {
        ctx->pc = 0x4E34E4u;
            // 0x4e34e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E34E8u;
        goto label_4e34e8;
    }
    ctx->pc = 0x4E34E0u;
    SET_GPR_U32(ctx, 31, 0x4E34E8u);
    ctx->pc = 0x4E34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E34E0u;
            // 0x4e34e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E34E8u; }
        if (ctx->pc != 0x4E34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E34E8u; }
        if (ctx->pc != 0x4E34E8u) { return; }
    }
    ctx->pc = 0x4E34E8u;
label_4e34e8:
    // 0x4e34e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e34e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e34ec:
    // 0x4e34ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e34ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e34f0:
    // 0x4e34f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e34f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e34f4:
    // 0x4e34f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e34f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e34f8:
    // 0x4e34f8: 0x3e00008  jr          $ra
label_4e34fc:
    if (ctx->pc == 0x4E34FCu) {
        ctx->pc = 0x4E34FCu;
            // 0x4e34fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E3500u;
        goto label_4e3500;
    }
    ctx->pc = 0x4E34F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E34F8u;
            // 0x4e34fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3500u;
label_4e3500:
    // 0x4e3500: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4e3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4e3504:
    // 0x4e3504: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e3504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e3508:
    // 0x4e3508: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e350c:
    // 0x4e350c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e3510:
    // 0x4e3510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e3510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e3514:
    // 0x4e3514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e3518:
    // 0x4e3518: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e3518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e351c:
    // 0x4e351c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e3520:
    // 0x4e3520: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4e3520u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e3524:
    // 0x4e3524: 0x54830045  bnel        $a0, $v1, . + 4 + (0x45 << 2)
label_4e3528:
    if (ctx->pc == 0x4E3528u) {
        ctx->pc = 0x4E3528u;
            // 0x4e3528: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4E352Cu;
        goto label_4e352c;
    }
    ctx->pc = 0x4E3524u;
    {
        const bool branch_taken_0x4e3524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e3524) {
            ctx->pc = 0x4E3528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3524u;
            // 0x4e3528: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E363Cu;
            goto label_4e363c;
        }
    }
    ctx->pc = 0x4E352Cu;
label_4e352c:
    // 0x4e352c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e352cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e3530:
    // 0x4e3530: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e3530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e3534:
    // 0x4e3534: 0x8c70e378  lw          $s0, -0x1C88($v1)
    ctx->pc = 0x4e3534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4e3538:
    // 0x4e3538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e3538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e353c:
    // 0x4e353c: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x4e353cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4e3540:
    // 0x4e3540: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e3540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e3544:
    // 0x4e3544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3548:
    // 0x4e3548: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4e3548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4e354c:
    // 0x4e354c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e354cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e3550:
    // 0x4e3550: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4e3550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4e3554:
    // 0x4e3554: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4e3554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4e3558:
    // 0x4e3558: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4e3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e355c:
    // 0x4e355c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4e355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e3560:
    // 0x4e3560: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e3560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e3564:
    // 0x4e3564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e3564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e3568:
    // 0x4e3568: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4e3568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4e356c:
    // 0x4e356c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4e356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e3570:
    // 0x4e3570: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e3570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e3574:
    // 0x4e3574: 0xc04e4a4  jal         func_139290
label_4e3578:
    if (ctx->pc == 0x4E3578u) {
        ctx->pc = 0x4E3578u;
            // 0x4e3578: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x4E357Cu;
        goto label_4e357c;
    }
    ctx->pc = 0x4E3574u;
    SET_GPR_U32(ctx, 31, 0x4E357Cu);
    ctx->pc = 0x4E3578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3574u;
            // 0x4e3578: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E357Cu; }
        if (ctx->pc != 0x4E357Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E357Cu; }
        if (ctx->pc != 0x4E357Cu) { return; }
    }
    ctx->pc = 0x4E357Cu;
label_4e357c:
    // 0x4e357c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4e357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4e3580:
    // 0x4e3580: 0xc04ccf4  jal         func_1333D0
label_4e3584:
    if (ctx->pc == 0x4E3584u) {
        ctx->pc = 0x4E3584u;
            // 0x4e3584: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3588u;
        goto label_4e3588;
    }
    ctx->pc = 0x4E3580u;
    SET_GPR_U32(ctx, 31, 0x4E3588u);
    ctx->pc = 0x4E3584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3580u;
            // 0x4e3584: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3588u; }
        if (ctx->pc != 0x4E3588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3588u; }
        if (ctx->pc != 0x4E3588u) { return; }
    }
    ctx->pc = 0x4E3588u;
label_4e3588:
    // 0x4e3588: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x4e3588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_4e358c:
    // 0x4e358c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x4e358cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_4e3590:
    // 0x4e3590: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x4e3590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_4e3594:
    // 0x4e3594: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4e3594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4e3598:
    // 0x4e3598: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x4e3598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e359c:
    // 0x4e359c: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x4e359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4e35a0:
    // 0x4e35a0: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x4e35a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4e35a4:
    // 0x4e35a4: 0xc04f3fc  jal         func_13CFF0
label_4e35a8:
    if (ctx->pc == 0x4E35A8u) {
        ctx->pc = 0x4E35A8u;
            // 0x4e35a8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E35ACu;
        goto label_4e35ac;
    }
    ctx->pc = 0x4E35A4u;
    SET_GPR_U32(ctx, 31, 0x4E35ACu);
    ctx->pc = 0x4E35A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E35A4u;
            // 0x4e35a8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35ACu; }
        if (ctx->pc != 0x4E35ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35ACu; }
        if (ctx->pc != 0x4E35ACu) { return; }
    }
    ctx->pc = 0x4E35ACu;
label_4e35ac:
    // 0x4e35ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e35acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e35b0:
    // 0x4e35b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e35b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e35b4:
    // 0x4e35b4: 0xc04cd60  jal         func_133580
label_4e35b8:
    if (ctx->pc == 0x4E35B8u) {
        ctx->pc = 0x4E35B8u;
            // 0x4e35b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E35BCu;
        goto label_4e35bc;
    }
    ctx->pc = 0x4E35B4u;
    SET_GPR_U32(ctx, 31, 0x4E35BCu);
    ctx->pc = 0x4E35B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E35B4u;
            // 0x4e35b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35BCu; }
        if (ctx->pc != 0x4E35BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35BCu; }
        if (ctx->pc != 0x4E35BCu) { return; }
    }
    ctx->pc = 0x4E35BCu;
label_4e35bc:
    // 0x4e35bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e35bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e35c0:
    // 0x4e35c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4e35c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e35c4:
    // 0x4e35c4: 0xc04cd60  jal         func_133580
label_4e35c8:
    if (ctx->pc == 0x4E35C8u) {
        ctx->pc = 0x4E35C8u;
            // 0x4e35c8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E35CCu;
        goto label_4e35cc;
    }
    ctx->pc = 0x4E35C4u;
    SET_GPR_U32(ctx, 31, 0x4E35CCu);
    ctx->pc = 0x4E35C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E35C4u;
            // 0x4e35c8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35CCu; }
        if (ctx->pc != 0x4E35CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35CCu; }
        if (ctx->pc != 0x4E35CCu) { return; }
    }
    ctx->pc = 0x4E35CCu;
label_4e35cc:
    // 0x4e35cc: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4e35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e35d0:
    // 0x4e35d0: 0xc04e738  jal         func_139CE0
label_4e35d4:
    if (ctx->pc == 0x4E35D4u) {
        ctx->pc = 0x4E35D4u;
            // 0x4e35d4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x4E35D8u;
        goto label_4e35d8;
    }
    ctx->pc = 0x4E35D0u;
    SET_GPR_U32(ctx, 31, 0x4E35D8u);
    ctx->pc = 0x4E35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E35D0u;
            // 0x4e35d4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35D8u; }
        if (ctx->pc != 0x4E35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E35D8u; }
        if (ctx->pc != 0x4E35D8u) { return; }
    }
    ctx->pc = 0x4E35D8u;
label_4e35d8:
    // 0x4e35d8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4e35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e35dc:
    // 0x4e35dc: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e35dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e35e0:
    // 0x4e35e0: 0xc64c005c  lwc1        $f12, 0x5C($s2)
    ctx->pc = 0x4e35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e35e4:
    // 0x4e35e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e35e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e35e8:
    // 0x4e35e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e35e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e35ec:
    // 0x4e35ec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4e35ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e35f0:
    // 0x4e35f0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4e35f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e35f4:
    // 0x4e35f4: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4e35f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4e35f8:
    // 0x4e35f8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4e35f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e35fc:
    // 0x4e35fc: 0xc04cff4  jal         func_133FD0
label_4e3600:
    if (ctx->pc == 0x4E3600u) {
        ctx->pc = 0x4E3600u;
            // 0x4e3600: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3604u;
        goto label_4e3604;
    }
    ctx->pc = 0x4E35FCu;
    SET_GPR_U32(ctx, 31, 0x4E3604u);
    ctx->pc = 0x4E3600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E35FCu;
            // 0x4e3600: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3604u; }
        if (ctx->pc != 0x4E3604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3604u; }
        if (ctx->pc != 0x4E3604u) { return; }
    }
    ctx->pc = 0x4E3604u;
label_4e3604:
    // 0x4e3604: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4e3604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e3608:
    // 0x4e3608: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4e3608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4e360c:
    // 0x4e360c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e360cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e3610:
    // 0x4e3610: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x4e3610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4e3614:
    // 0x4e3614: 0xc054bbc  jal         func_152EF0
label_4e3618:
    if (ctx->pc == 0x4E3618u) {
        ctx->pc = 0x4E3618u;
            // 0x4e3618: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4E361Cu;
        goto label_4e361c;
    }
    ctx->pc = 0x4E3614u;
    SET_GPR_U32(ctx, 31, 0x4E361Cu);
    ctx->pc = 0x4E3618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3614u;
            // 0x4e3618: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E361Cu; }
        if (ctx->pc != 0x4E361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E361Cu; }
        if (ctx->pc != 0x4E361Cu) { return; }
    }
    ctx->pc = 0x4E361Cu;
label_4e361c:
    // 0x4e361c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x4e361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e3620:
    // 0x4e3620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e3620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e3624:
    // 0x4e3624: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4e3624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3628:
    // 0x4e3628: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e3628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e362c:
    // 0x4e362c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4e362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4e3630:
    // 0x4e3630: 0xc054c2c  jal         func_1530B0
label_4e3634:
    if (ctx->pc == 0x4E3634u) {
        ctx->pc = 0x4E3634u;
            // 0x4e3634: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4E3638u;
        goto label_4e3638;
    }
    ctx->pc = 0x4E3630u;
    SET_GPR_U32(ctx, 31, 0x4E3638u);
    ctx->pc = 0x4E3634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3630u;
            // 0x4e3634: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3638u; }
        if (ctx->pc != 0x4E3638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3638u; }
        if (ctx->pc != 0x4E3638u) { return; }
    }
    ctx->pc = 0x4E3638u;
label_4e3638:
    // 0x4e3638: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e3638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e363c:
    // 0x4e363c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e363cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3640:
    // 0x4e3640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e3640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3644:
    // 0x4e3644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e3644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3648:
    // 0x4e3648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e3648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e364c:
    // 0x4e364c: 0x3e00008  jr          $ra
label_4e3650:
    if (ctx->pc == 0x4E3650u) {
        ctx->pc = 0x4E3650u;
            // 0x4e3650: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4E3654u;
        goto label_4e3654;
    }
    ctx->pc = 0x4E364Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E364Cu;
            // 0x4e3650: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3654u;
label_4e3654:
    // 0x4e3654: 0x0  nop
    ctx->pc = 0x4e3654u;
    // NOP
label_4e3658:
    // 0x4e3658: 0x0  nop
    ctx->pc = 0x4e3658u;
    // NOP
label_4e365c:
    // 0x4e365c: 0x0  nop
    ctx->pc = 0x4e365cu;
    // NOP
label_4e3660:
    // 0x4e3660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e3664:
    // 0x4e3664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3668:
    // 0x4e3668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e3668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e366c:
    // 0x4e366c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e3670:
    // 0x4e3670: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e3670u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e3674:
    // 0x4e3674: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
label_4e3678:
    if (ctx->pc == 0x4E3678u) {
        ctx->pc = 0x4E3678u;
            // 0x4e3678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E367Cu;
        goto label_4e367c;
    }
    ctx->pc = 0x4E3674u;
    {
        const bool branch_taken_0x4e3674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E3678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3674u;
            // 0x4e3678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3674) {
            ctx->pc = 0x4E3764u;
            goto label_4e3764;
        }
    }
    ctx->pc = 0x4E367Cu;
label_4e367c:
    // 0x4e367c: 0x50a00034  beql        $a1, $zero, . + 4 + (0x34 << 2)
label_4e3680:
    if (ctx->pc == 0x4E3680u) {
        ctx->pc = 0x4E3680u;
            // 0x4e3680: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E3684u;
        goto label_4e3684;
    }
    ctx->pc = 0x4E367Cu;
    {
        const bool branch_taken_0x4e367c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e367c) {
            ctx->pc = 0x4E3680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E367Cu;
            // 0x4e3680: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3750u;
            goto label_4e3750;
        }
    }
    ctx->pc = 0x4E3684u;
label_4e3684:
    // 0x4e3684: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e3684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e3688:
    // 0x4e3688: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_4e368c:
    if (ctx->pc == 0x4E368Cu) {
        ctx->pc = 0x4E3690u;
        goto label_4e3690;
    }
    ctx->pc = 0x4E3688u;
    {
        const bool branch_taken_0x4e3688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e3688) {
            ctx->pc = 0x4E36B0u;
            goto label_4e36b0;
        }
    }
    ctx->pc = 0x4E3690u;
label_4e3690:
    // 0x4e3690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e3690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e3694:
    // 0x4e3694: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4e3698:
    if (ctx->pc == 0x4E3698u) {
        ctx->pc = 0x4E3698u;
            // 0x4e3698: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E369Cu;
        goto label_4e369c;
    }
    ctx->pc = 0x4E3694u;
    {
        const bool branch_taken_0x4e3694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e3694) {
            ctx->pc = 0x4E3698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3694u;
            // 0x4e3698: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E36A4u;
            goto label_4e36a4;
        }
    }
    ctx->pc = 0x4E369Cu;
label_4e369c:
    // 0x4e369c: 0x10000037  b           . + 4 + (0x37 << 2)
label_4e36a0:
    if (ctx->pc == 0x4E36A0u) {
        ctx->pc = 0x4E36A0u;
            // 0x4e36a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4E36A4u;
        goto label_4e36a4;
    }
    ctx->pc = 0x4E369Cu;
    {
        const bool branch_taken_0x4e369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E36A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E369Cu;
            // 0x4e36a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e369c) {
            ctx->pc = 0x4E377Cu;
            goto label_4e377c;
        }
    }
    ctx->pc = 0x4E36A4u;
label_4e36a4:
    // 0x4e36a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e36a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e36a8:
    // 0x4e36a8: 0x320f809  jalr        $t9
label_4e36ac:
    if (ctx->pc == 0x4E36ACu) {
        ctx->pc = 0x4E36B0u;
        goto label_4e36b0;
    }
    ctx->pc = 0x4E36A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E36B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E36B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E36B0u; }
            if (ctx->pc != 0x4E36B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4E36B0u;
label_4e36b0:
    // 0x4e36b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e36b4:
    // 0x4e36b4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e36b8:
    // 0x4e36b8: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x4e36b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e36bc:
    // 0x4e36bc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4e36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e36c0:
    // 0x4e36c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4e36c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4e36c4:
    // 0x4e36c4: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x4e36c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_4e36c8:
    // 0x4e36c8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4e36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4e36cc:
    // 0x4e36cc: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x4e36ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e36d0:
    // 0x4e36d0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4e36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4e36d4:
    // 0x4e36d4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4e36d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e36d8:
    // 0x4e36d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e36d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e36dc:
    // 0x4e36dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_4e36e0:
    if (ctx->pc == 0x4E36E0u) {
        ctx->pc = 0x4E36E4u;
        goto label_4e36e4;
    }
    ctx->pc = 0x4E36DCu;
    {
        const bool branch_taken_0x4e36dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e36dc) {
            ctx->pc = 0x4E3700u;
            goto label_4e3700;
        }
    }
    ctx->pc = 0x4E36E4u;
label_4e36e4:
    // 0x4e36e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e36e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e36e8:
    // 0x4e36e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e36e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e36ec:
    // 0x4e36ec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4e36ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4e36f0:
    // 0x4e36f0: 0x320f809  jalr        $t9
label_4e36f4:
    if (ctx->pc == 0x4E36F4u) {
        ctx->pc = 0x4E36F4u;
            // 0x4e36f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E36F8u;
        goto label_4e36f8;
    }
    ctx->pc = 0x4E36F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E36F8u);
        ctx->pc = 0x4E36F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E36F0u;
            // 0x4e36f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E36F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E36F8u; }
            if (ctx->pc != 0x4E36F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E36F8u;
label_4e36f8:
    // 0x4e36f8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e36fc:
    if (ctx->pc == 0x4E36FCu) {
        ctx->pc = 0x4E3700u;
        goto label_4e3700;
    }
    ctx->pc = 0x4E36F8u;
    {
        const bool branch_taken_0x4e36f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e36f8) {
            ctx->pc = 0x4E3778u;
            goto label_4e3778;
        }
    }
    ctx->pc = 0x4E3700u;
label_4e3700:
    // 0x4e3700: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e3700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e3704:
    // 0x4e3704: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e3704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e3708:
    // 0x4e3708: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x4e3708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e370c:
    // 0x4e370c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4e370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e3710:
    // 0x4e3710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4e3710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4e3714:
    // 0x4e3714: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x4e3714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_4e3718:
    // 0x4e3718: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4e3718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4e371c:
    // 0x4e371c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x4e371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e3720:
    // 0x4e3720: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4e3720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4e3724:
    // 0x4e3724: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4e3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e3728:
    // 0x4e3728: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e3728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e372c:
    // 0x4e372c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_4e3730:
    if (ctx->pc == 0x4E3730u) {
        ctx->pc = 0x4E3734u;
        goto label_4e3734;
    }
    ctx->pc = 0x4E372Cu;
    {
        const bool branch_taken_0x4e372c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e372c) {
            ctx->pc = 0x4E3778u;
            goto label_4e3778;
        }
    }
    ctx->pc = 0x4E3734u;
label_4e3734:
    // 0x4e3734: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e3734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e3738:
    // 0x4e3738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e373c:
    // 0x4e373c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4e373cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4e3740:
    // 0x4e3740: 0x320f809  jalr        $t9
label_4e3744:
    if (ctx->pc == 0x4E3744u) {
        ctx->pc = 0x4E3744u;
            // 0x4e3744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3748u;
        goto label_4e3748;
    }
    ctx->pc = 0x4E3740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3748u);
        ctx->pc = 0x4E3744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3740u;
            // 0x4e3744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3748u; }
            if (ctx->pc != 0x4E3748u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3748u;
label_4e3748:
    // 0x4e3748: 0x1000000b  b           . + 4 + (0xB << 2)
label_4e374c:
    if (ctx->pc == 0x4E374Cu) {
        ctx->pc = 0x4E3750u;
        goto label_4e3750;
    }
    ctx->pc = 0x4E3748u;
    {
        const bool branch_taken_0x4e3748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3748) {
            ctx->pc = 0x4E3778u;
            goto label_4e3778;
        }
    }
    ctx->pc = 0x4E3750u;
label_4e3750:
    // 0x4e3750: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e3750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e3754:
    // 0x4e3754: 0x320f809  jalr        $t9
label_4e3758:
    if (ctx->pc == 0x4E3758u) {
        ctx->pc = 0x4E375Cu;
        goto label_4e375c;
    }
    ctx->pc = 0x4E3754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E375Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E375Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E375Cu; }
            if (ctx->pc != 0x4E375Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E375Cu;
label_4e375c:
    // 0x4e375c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4e3760:
    if (ctx->pc == 0x4E3760u) {
        ctx->pc = 0x4E3764u;
        goto label_4e3764;
    }
    ctx->pc = 0x4E375Cu;
    {
        const bool branch_taken_0x4e375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e375c) {
            ctx->pc = 0x4E3778u;
            goto label_4e3778;
        }
    }
    ctx->pc = 0x4E3764u;
label_4e3764:
    // 0x4e3764: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e3768:
    // 0x4e3768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e3768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e376c:
    // 0x4e376c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4e376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4e3770:
    // 0x4e3770: 0xc057b7c  jal         func_15EDF0
label_4e3774:
    if (ctx->pc == 0x4E3774u) {
        ctx->pc = 0x4E3774u;
            // 0x4e3774: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E3778u;
        goto label_4e3778;
    }
    ctx->pc = 0x4E3770u;
    SET_GPR_U32(ctx, 31, 0x4E3778u);
    ctx->pc = 0x4E3774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3770u;
            // 0x4e3774: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3778u; }
        if (ctx->pc != 0x4E3778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3778u; }
        if (ctx->pc != 0x4E3778u) { return; }
    }
    ctx->pc = 0x4E3778u;
label_4e3778:
    // 0x4e3778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e3778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e377c:
    // 0x4e377c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e377cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3780:
    // 0x4e3780: 0x3e00008  jr          $ra
label_4e3784:
    if (ctx->pc == 0x4E3784u) {
        ctx->pc = 0x4E3784u;
            // 0x4e3784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E3788u;
        goto label_4e3788;
    }
    ctx->pc = 0x4E3780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3780u;
            // 0x4e3784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3788u;
label_4e3788:
    // 0x4e3788: 0x0  nop
    ctx->pc = 0x4e3788u;
    // NOP
label_4e378c:
    // 0x4e378c: 0x0  nop
    ctx->pc = 0x4e378cu;
    // NOP
}
