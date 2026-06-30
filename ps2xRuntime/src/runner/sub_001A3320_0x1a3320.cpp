#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3320
// Address: 0x1a3320 - 0x1a36c8
void sub_001A3320_0x1a3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3320_0x1a3320");
#endif

    switch (ctx->pc) {
        case 0x1a3320u: goto label_1a3320;
        case 0x1a3324u: goto label_1a3324;
        case 0x1a3328u: goto label_1a3328;
        case 0x1a332cu: goto label_1a332c;
        case 0x1a3330u: goto label_1a3330;
        case 0x1a3334u: goto label_1a3334;
        case 0x1a3338u: goto label_1a3338;
        case 0x1a333cu: goto label_1a333c;
        case 0x1a3340u: goto label_1a3340;
        case 0x1a3344u: goto label_1a3344;
        case 0x1a3348u: goto label_1a3348;
        case 0x1a334cu: goto label_1a334c;
        case 0x1a3350u: goto label_1a3350;
        case 0x1a3354u: goto label_1a3354;
        case 0x1a3358u: goto label_1a3358;
        case 0x1a335cu: goto label_1a335c;
        case 0x1a3360u: goto label_1a3360;
        case 0x1a3364u: goto label_1a3364;
        case 0x1a3368u: goto label_1a3368;
        case 0x1a336cu: goto label_1a336c;
        case 0x1a3370u: goto label_1a3370;
        case 0x1a3374u: goto label_1a3374;
        case 0x1a3378u: goto label_1a3378;
        case 0x1a337cu: goto label_1a337c;
        case 0x1a3380u: goto label_1a3380;
        case 0x1a3384u: goto label_1a3384;
        case 0x1a3388u: goto label_1a3388;
        case 0x1a338cu: goto label_1a338c;
        case 0x1a3390u: goto label_1a3390;
        case 0x1a3394u: goto label_1a3394;
        case 0x1a3398u: goto label_1a3398;
        case 0x1a339cu: goto label_1a339c;
        case 0x1a33a0u: goto label_1a33a0;
        case 0x1a33a4u: goto label_1a33a4;
        case 0x1a33a8u: goto label_1a33a8;
        case 0x1a33acu: goto label_1a33ac;
        case 0x1a33b0u: goto label_1a33b0;
        case 0x1a33b4u: goto label_1a33b4;
        case 0x1a33b8u: goto label_1a33b8;
        case 0x1a33bcu: goto label_1a33bc;
        case 0x1a33c0u: goto label_1a33c0;
        case 0x1a33c4u: goto label_1a33c4;
        case 0x1a33c8u: goto label_1a33c8;
        case 0x1a33ccu: goto label_1a33cc;
        case 0x1a33d0u: goto label_1a33d0;
        case 0x1a33d4u: goto label_1a33d4;
        case 0x1a33d8u: goto label_1a33d8;
        case 0x1a33dcu: goto label_1a33dc;
        case 0x1a33e0u: goto label_1a33e0;
        case 0x1a33e4u: goto label_1a33e4;
        case 0x1a33e8u: goto label_1a33e8;
        case 0x1a33ecu: goto label_1a33ec;
        case 0x1a33f0u: goto label_1a33f0;
        case 0x1a33f4u: goto label_1a33f4;
        case 0x1a33f8u: goto label_1a33f8;
        case 0x1a33fcu: goto label_1a33fc;
        case 0x1a3400u: goto label_1a3400;
        case 0x1a3404u: goto label_1a3404;
        case 0x1a3408u: goto label_1a3408;
        case 0x1a340cu: goto label_1a340c;
        case 0x1a3410u: goto label_1a3410;
        case 0x1a3414u: goto label_1a3414;
        case 0x1a3418u: goto label_1a3418;
        case 0x1a341cu: goto label_1a341c;
        case 0x1a3420u: goto label_1a3420;
        case 0x1a3424u: goto label_1a3424;
        case 0x1a3428u: goto label_1a3428;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3430u: goto label_1a3430;
        case 0x1a3434u: goto label_1a3434;
        case 0x1a3438u: goto label_1a3438;
        case 0x1a343cu: goto label_1a343c;
        case 0x1a3440u: goto label_1a3440;
        case 0x1a3444u: goto label_1a3444;
        case 0x1a3448u: goto label_1a3448;
        case 0x1a344cu: goto label_1a344c;
        case 0x1a3450u: goto label_1a3450;
        case 0x1a3454u: goto label_1a3454;
        case 0x1a3458u: goto label_1a3458;
        case 0x1a345cu: goto label_1a345c;
        case 0x1a3460u: goto label_1a3460;
        case 0x1a3464u: goto label_1a3464;
        case 0x1a3468u: goto label_1a3468;
        case 0x1a346cu: goto label_1a346c;
        case 0x1a3470u: goto label_1a3470;
        case 0x1a3474u: goto label_1a3474;
        case 0x1a3478u: goto label_1a3478;
        case 0x1a347cu: goto label_1a347c;
        case 0x1a3480u: goto label_1a3480;
        case 0x1a3484u: goto label_1a3484;
        case 0x1a3488u: goto label_1a3488;
        case 0x1a348cu: goto label_1a348c;
        case 0x1a3490u: goto label_1a3490;
        case 0x1a3494u: goto label_1a3494;
        case 0x1a3498u: goto label_1a3498;
        case 0x1a349cu: goto label_1a349c;
        case 0x1a34a0u: goto label_1a34a0;
        case 0x1a34a4u: goto label_1a34a4;
        case 0x1a34a8u: goto label_1a34a8;
        case 0x1a34acu: goto label_1a34ac;
        case 0x1a34b0u: goto label_1a34b0;
        case 0x1a34b4u: goto label_1a34b4;
        case 0x1a34b8u: goto label_1a34b8;
        case 0x1a34bcu: goto label_1a34bc;
        case 0x1a34c0u: goto label_1a34c0;
        case 0x1a34c4u: goto label_1a34c4;
        case 0x1a34c8u: goto label_1a34c8;
        case 0x1a34ccu: goto label_1a34cc;
        case 0x1a34d0u: goto label_1a34d0;
        case 0x1a34d4u: goto label_1a34d4;
        case 0x1a34d8u: goto label_1a34d8;
        case 0x1a34dcu: goto label_1a34dc;
        case 0x1a34e0u: goto label_1a34e0;
        case 0x1a34e4u: goto label_1a34e4;
        case 0x1a34e8u: goto label_1a34e8;
        case 0x1a34ecu: goto label_1a34ec;
        case 0x1a34f0u: goto label_1a34f0;
        case 0x1a34f4u: goto label_1a34f4;
        case 0x1a34f8u: goto label_1a34f8;
        case 0x1a34fcu: goto label_1a34fc;
        case 0x1a3500u: goto label_1a3500;
        case 0x1a3504u: goto label_1a3504;
        case 0x1a3508u: goto label_1a3508;
        case 0x1a350cu: goto label_1a350c;
        case 0x1a3510u: goto label_1a3510;
        case 0x1a3514u: goto label_1a3514;
        case 0x1a3518u: goto label_1a3518;
        case 0x1a351cu: goto label_1a351c;
        case 0x1a3520u: goto label_1a3520;
        case 0x1a3524u: goto label_1a3524;
        case 0x1a3528u: goto label_1a3528;
        case 0x1a352cu: goto label_1a352c;
        case 0x1a3530u: goto label_1a3530;
        case 0x1a3534u: goto label_1a3534;
        case 0x1a3538u: goto label_1a3538;
        case 0x1a353cu: goto label_1a353c;
        case 0x1a3540u: goto label_1a3540;
        case 0x1a3544u: goto label_1a3544;
        case 0x1a3548u: goto label_1a3548;
        case 0x1a354cu: goto label_1a354c;
        case 0x1a3550u: goto label_1a3550;
        case 0x1a3554u: goto label_1a3554;
        case 0x1a3558u: goto label_1a3558;
        case 0x1a355cu: goto label_1a355c;
        case 0x1a3560u: goto label_1a3560;
        case 0x1a3564u: goto label_1a3564;
        case 0x1a3568u: goto label_1a3568;
        case 0x1a356cu: goto label_1a356c;
        case 0x1a3570u: goto label_1a3570;
        case 0x1a3574u: goto label_1a3574;
        case 0x1a3578u: goto label_1a3578;
        case 0x1a357cu: goto label_1a357c;
        case 0x1a3580u: goto label_1a3580;
        case 0x1a3584u: goto label_1a3584;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a358cu: goto label_1a358c;
        case 0x1a3590u: goto label_1a3590;
        case 0x1a3594u: goto label_1a3594;
        case 0x1a3598u: goto label_1a3598;
        case 0x1a359cu: goto label_1a359c;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35a4u: goto label_1a35a4;
        case 0x1a35a8u: goto label_1a35a8;
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b0u: goto label_1a35b0;
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35b8u: goto label_1a35b8;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c0u: goto label_1a35c0;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35c8u: goto label_1a35c8;
        case 0x1a35ccu: goto label_1a35cc;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35d4u: goto label_1a35d4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a35e0u: goto label_1a35e0;
        case 0x1a35e4u: goto label_1a35e4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a35ecu: goto label_1a35ec;
        case 0x1a35f0u: goto label_1a35f0;
        case 0x1a35f4u: goto label_1a35f4;
        case 0x1a35f8u: goto label_1a35f8;
        case 0x1a35fcu: goto label_1a35fc;
        case 0x1a3600u: goto label_1a3600;
        case 0x1a3604u: goto label_1a3604;
        case 0x1a3608u: goto label_1a3608;
        case 0x1a360cu: goto label_1a360c;
        case 0x1a3610u: goto label_1a3610;
        case 0x1a3614u: goto label_1a3614;
        case 0x1a3618u: goto label_1a3618;
        case 0x1a361cu: goto label_1a361c;
        case 0x1a3620u: goto label_1a3620;
        case 0x1a3624u: goto label_1a3624;
        case 0x1a3628u: goto label_1a3628;
        case 0x1a362cu: goto label_1a362c;
        case 0x1a3630u: goto label_1a3630;
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3638u: goto label_1a3638;
        case 0x1a363cu: goto label_1a363c;
        case 0x1a3640u: goto label_1a3640;
        case 0x1a3644u: goto label_1a3644;
        case 0x1a3648u: goto label_1a3648;
        case 0x1a364cu: goto label_1a364c;
        case 0x1a3650u: goto label_1a3650;
        case 0x1a3654u: goto label_1a3654;
        case 0x1a3658u: goto label_1a3658;
        case 0x1a365cu: goto label_1a365c;
        case 0x1a3660u: goto label_1a3660;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3668u: goto label_1a3668;
        case 0x1a366cu: goto label_1a366c;
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3674u: goto label_1a3674;
        case 0x1a3678u: goto label_1a3678;
        case 0x1a367cu: goto label_1a367c;
        case 0x1a3680u: goto label_1a3680;
        case 0x1a3684u: goto label_1a3684;
        case 0x1a3688u: goto label_1a3688;
        case 0x1a368cu: goto label_1a368c;
        case 0x1a3690u: goto label_1a3690;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a3698u: goto label_1a3698;
        case 0x1a369cu: goto label_1a369c;
        case 0x1a36a0u: goto label_1a36a0;
        case 0x1a36a4u: goto label_1a36a4;
        case 0x1a36a8u: goto label_1a36a8;
        case 0x1a36acu: goto label_1a36ac;
        case 0x1a36b0u: goto label_1a36b0;
        case 0x1a36b4u: goto label_1a36b4;
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36bcu: goto label_1a36bc;
        case 0x1a36c0u: goto label_1a36c0;
        case 0x1a36c4u: goto label_1a36c4;
        default: break;
    }

    ctx->pc = 0x1a3320u;

label_1a3320:
    // 0x1a3320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3324:
    // 0x1a3324: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a3324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a3328:
    // 0x1a3328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a332c:
    // 0x1a332c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a3330:
    // 0x1a3330: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a3330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3334:
    // 0x1a3334: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_1a3338:
    if (ctx->pc == 0x1A3338u) {
        ctx->pc = 0x1A3338u;
            // 0x1a3338: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x1A333Cu;
        goto label_1a333c;
    }
    ctx->pc = 0x1A3334u;
    {
        const bool branch_taken_0x1a3334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3334u;
            // 0x1a3338: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3334) {
            ctx->pc = 0x1A3358u;
            goto label_1a3358;
        }
    }
    ctx->pc = 0x1A333Cu;
label_1a333c:
    // 0x1a333c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3340:
    // 0x1a3340: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a3340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a3344:
    // 0x1a3344: 0x60f809  jalr        $v1
label_1a3348:
    if (ctx->pc == 0x1A3348u) {
        ctx->pc = 0x1A334Cu;
        goto label_1a334c;
    }
    ctx->pc = 0x1A3344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A334Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A334Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A334Cu; }
            if (ctx->pc != 0x1A334Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A334Cu;
label_1a334c:
    // 0x1a334c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a3350:
    if (ctx->pc == 0x1A3350u) {
        ctx->pc = 0x1A3350u;
            // 0x1a3350: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1A3354u;
        goto label_1a3354;
    }
    ctx->pc = 0x1A334Cu;
    {
        const bool branch_taken_0x1a334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A334Cu;
            // 0x1a3350: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a334c) {
            ctx->pc = 0x1A3398u;
            goto label_1a3398;
        }
    }
    ctx->pc = 0x1A3354u;
label_1a3354:
    // 0x1a3354: 0x0  nop
    ctx->pc = 0x1a3354u;
    // NOP
label_1a3358:
    // 0x1a3358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a335c:
    // 0x1a335c: 0xc061c20  jal         func_187080
label_1a3360:
    if (ctx->pc == 0x1A3360u) {
        ctx->pc = 0x1A3360u;
            // 0x1a3360: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3364u;
        goto label_1a3364;
    }
    ctx->pc = 0x1A335Cu;
    SET_GPR_U32(ctx, 31, 0x1A3364u);
    ctx->pc = 0x1A3360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A335Cu;
            // 0x1a3360: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3364u; }
        if (ctx->pc != 0x1A3364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3364u; }
        if (ctx->pc != 0x1A3364u) { return; }
    }
    ctx->pc = 0x1A3364u;
label_1a3364:
    // 0x1a3364: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3368:
    // 0x1a3368: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a336c:
    // 0x1a336c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3370:
    // 0x1a3370: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a3370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a3374:
    // 0x1a3374: 0x40f809  jalr        $v0
label_1a3378:
    if (ctx->pc == 0x1A3378u) {
        ctx->pc = 0x1A3378u;
            // 0x1a3378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A337Cu;
        goto label_1a337c;
    }
    ctx->pc = 0x1A3374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A337Cu);
        ctx->pc = 0x1A3378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3374u;
            // 0x1a3378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A337Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A337Cu; }
            if (ctx->pc != 0x1A337Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A337Cu;
label_1a337c:
    // 0x1a337c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3380:
    // 0x1a3380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3384:
    // 0x1a3384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3388:
    // 0x1a3388: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a3388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a338c:
    // 0x1a338c: 0x40f809  jalr        $v0
label_1a3390:
    if (ctx->pc == 0x1A3390u) {
        ctx->pc = 0x1A3390u;
            // 0x1a3390: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3394u;
        goto label_1a3394;
    }
    ctx->pc = 0x1A338Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3394u);
        ctx->pc = 0x1A3390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A338Cu;
            // 0x1a3390: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A3394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A3394u; }
            if (ctx->pc != 0x1A3394u) { return; }
        }
        }
    }
    ctx->pc = 0x1A3394u;
label_1a3394:
    // 0x1a3394: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a3394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3398:
    // 0x1a3398: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a339c:
    // 0x1a339c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a339cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a33a0:
    // 0x1a33a0: 0x3e00008  jr          $ra
label_1a33a4:
    if (ctx->pc == 0x1A33A4u) {
        ctx->pc = 0x1A33A4u;
            // 0x1a33a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A33A8u;
        goto label_1a33a8;
    }
    ctx->pc = 0x1A33A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33A0u;
            // 0x1a33a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A33A8u;
label_1a33a8:
    // 0x1a33a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a33a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a33ac:
    // 0x1a33ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a33acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a33b0:
    // 0x1a33b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a33b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a33b4:
    // 0x1a33b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a33b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a33b8:
    // 0x1a33b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1a33bc:
    // 0x1a33bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a33bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a33c0:
    // 0x1a33c0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1a33c4:
    // 0x1a33c4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a33c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a33c8:
    // 0x1a33c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a33cc:
    // 0x1a33cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a33ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a33d0:
    // 0x1a33d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a33d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a33d4:
    // 0x1a33d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a33d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1a33d8:
    // 0x1a33d8: 0x8c912074  lw          $s1, 0x2074($a0)
    ctx->pc = 0x1a33d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
label_1a33dc:
    // 0x1a33dc: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x1a33dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a33e0:
    // 0x1a33e0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1a33e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a33e4:
    // 0x1a33e4: 0xc068cbc  jal         func_1A32F0
label_1a33e8:
    if (ctx->pc == 0x1A33E8u) {
        ctx->pc = 0x1A33E8u;
            // 0x1a33e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A33ECu;
        goto label_1a33ec;
    }
    ctx->pc = 0x1A33E4u;
    SET_GPR_U32(ctx, 31, 0x1A33ECu);
    ctx->pc = 0x1A33E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33E4u;
            // 0x1a33e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A32F0u;
    if (runtime->hasFunction(0x1A32F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33ECu; }
        if (ctx->pc != 0x1A33ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A32F0_0x1a32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33ECu; }
        if (ctx->pc != 0x1A33ECu) { return; }
    }
    ctx->pc = 0x1A33ECu;
label_1a33ec:
    // 0x1a33ec: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1a33ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_1a33f0:
    // 0x1a33f0: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a33f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a33f4:
    // 0x1a33f4: 0x34c69000  ori         $a2, $a2, 0x9000
    ctx->pc = 0x1a33f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
label_1a33f8:
    // 0x1a33f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a33fc:
    // 0x1a33fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a33fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3400:
    // 0x1a3400: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x1a3400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a3404:
    // 0x1a3404: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1a3404u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1a3408:
    // 0x1a3408: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x1a3408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a340c:
    // 0x1a340c: 0xc3800b  movn        $s0, $a2, $v1
    ctx->pc = 0x1a340cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_1a3410:
    // 0x1a3410: 0xc064080  jal         func_190200
label_1a3414:
    if (ctx->pc == 0x1A3414u) {
        ctx->pc = 0x1A3414u;
            // 0x1a3414: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3418u;
        goto label_1a3418;
    }
    ctx->pc = 0x1A3410u;
    SET_GPR_U32(ctx, 31, 0x1A3418u);
    ctx->pc = 0x1A3414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3410u;
            // 0x1a3414: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3418u; }
        if (ctx->pc != 0x1A3418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3418u; }
        if (ctx->pc != 0x1A3418u) { return; }
    }
    ctx->pc = 0x1A3418u;
label_1a3418:
    // 0x1a3418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a341c:
    // 0x1a341c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a341cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3420:
    // 0x1a3420: 0xc068cc8  jal         func_1A3320
label_1a3424:
    if (ctx->pc == 0x1A3424u) {
        ctx->pc = 0x1A3424u;
            // 0x1a3424: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3428u;
        goto label_1a3428;
    }
    ctx->pc = 0x1A3420u;
    SET_GPR_U32(ctx, 31, 0x1A3428u);
    ctx->pc = 0x1A3424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3420u;
            // 0x1a3424: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3320u;
    goto label_1a3320;
    ctx->pc = 0x1A3428u;
label_1a3428:
    // 0x1a3428: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1a3428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1a342c:
    // 0x1a342c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a342cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3430:
    // 0x1a3430: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a3434:
    // 0x1a3434: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a3434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a3438:
    // 0x1a3438: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1a3438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_1a343c:
    // 0x1a343c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a343cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3440:
    // 0x1a3440: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1a3440u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_1a3444:
    // 0x1a3444: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a3448:
    // 0x1a3448: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a3448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a344c:
    // 0x1a344c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a344cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a3450:
    // 0x1a3450: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3454:
    // 0x1a3454: 0x3e00008  jr          $ra
label_1a3458:
    if (ctx->pc == 0x1A3458u) {
        ctx->pc = 0x1A3458u;
            // 0x1a3458: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A345Cu;
        goto label_1a345c;
    }
    ctx->pc = 0x1A3454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3454u;
            // 0x1a3458: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A345Cu;
label_1a345c:
    // 0x1a345c: 0x0  nop
    ctx->pc = 0x1a345cu;
    // NOP
label_1a3460:
    // 0x1a3460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a3460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a3464:
    // 0x1a3464: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1a3464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1a3468:
    // 0x1a3468: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1a3468u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a346c:
    // 0x1a346c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a3470:
    // 0x1a3470: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a3470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a3474:
    // 0x1a3474: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a3474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3478:
    // 0x1a3478: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1a3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1a347c:
    // 0x1a347c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a347cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3480:
    // 0x1a3480: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1a3480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1a3484:
    // 0x1a3484: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a3484u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3488:
    // 0x1a3488: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a3488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a348c:
    // 0x1a348c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1a348cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a3490:
    // 0x1a3490: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a3490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a3494:
    // 0x1a3494: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3498:
    // 0x1a3498: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a3498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1a349c:
    // 0x1a349c: 0x26910d88  addiu       $s1, $s4, 0xD88
    ctx->pc = 0x1a349cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3464));
label_1a34a0:
    // 0x1a34a0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1a34a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1a34a4:
    // 0x1a34a4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1a34a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1a34a8:
    // 0x1a34a8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x1a34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_1a34ac:
    // 0x1a34ac: 0xc068e9a  jal         func_1A3A68
label_1a34b0:
    if (ctx->pc == 0x1A34B0u) {
        ctx->pc = 0x1A34B0u;
            // 0x1a34b0: 0x8e932074  lw          $s3, 0x2074($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8308)));
        ctx->pc = 0x1A34B4u;
        goto label_1a34b4;
    }
    ctx->pc = 0x1A34ACu;
    SET_GPR_U32(ctx, 31, 0x1A34B4u);
    ctx->pc = 0x1A34B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34ACu;
            // 0x1a34b0: 0x8e932074  lw          $s3, 0x2074($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3A68u;
    if (runtime->hasFunction(0x1A3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1A3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34B4u; }
        if (ctx->pc != 0x1A34B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3A68_0x1a3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34B4u; }
        if (ctx->pc != 0x1A34B4u) { return; }
    }
    ctx->pc = 0x1A34B4u;
label_1a34b4:
    // 0x1a34b4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1a34b8:
    if (ctx->pc == 0x1A34B8u) {
        ctx->pc = 0x1A34B8u;
            // 0x1a34b8: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x1A34BCu;
        goto label_1a34bc;
    }
    ctx->pc = 0x1A34B4u;
    {
        const bool branch_taken_0x1a34b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a34b4) {
            ctx->pc = 0x1A34B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34B4u;
            // 0x1a34b8: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A34F8u;
            goto label_1a34f8;
        }
    }
    ctx->pc = 0x1A34BCu;
label_1a34bc:
    // 0x1a34bc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a34c0:
    // 0x1a34c0: 0xc06db0e  jal         func_1B6C38
label_1a34c4:
    if (ctx->pc == 0x1A34C4u) {
        ctx->pc = 0x1A34C4u;
            // 0x1a34c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A34C8u;
        goto label_1a34c8;
    }
    ctx->pc = 0x1A34C0u;
    SET_GPR_U32(ctx, 31, 0x1A34C8u);
    ctx->pc = 0x1A34C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34C0u;
            // 0x1a34c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C38u;
    if (runtime->hasFunction(0x1B6C38u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34C8u; }
        if (ctx->pc != 0x1A34C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C38_0x1b6c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34C8u; }
        if (ctx->pc != 0x1A34C8u) { return; }
    }
    ctx->pc = 0x1A34C8u;
label_1a34c8:
    // 0x1a34c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a34c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a34cc:
    // 0x1a34cc: 0x6400072  bltz        $s2, . + 4 + (0x72 << 2)
label_1a34d0:
    if (ctx->pc == 0x1A34D0u) {
        ctx->pc = 0x1A34D0u;
            // 0x1a34d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A34D4u;
        goto label_1a34d4;
    }
    ctx->pc = 0x1A34CCu;
    {
        const bool branch_taken_0x1a34cc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1A34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34CCu;
            // 0x1a34d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34cc) {
            ctx->pc = 0x1A3698u;
            goto label_1a3698;
        }
    }
    ctx->pc = 0x1A34D4u;
label_1a34d4:
    // 0x1a34d4: 0xc06d81c  jal         func_1B6070
label_1a34d8:
    if (ctx->pc == 0x1A34D8u) {
        ctx->pc = 0x1A34D8u;
            // 0x1a34d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1A34DCu;
        goto label_1a34dc;
    }
    ctx->pc = 0x1A34D4u;
    SET_GPR_U32(ctx, 31, 0x1A34DCu);
    ctx->pc = 0x1A34D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34D4u;
            // 0x1a34d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34DCu; }
        if (ctx->pc != 0x1A34DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34DCu; }
        if (ctx->pc != 0x1A34DCu) { return; }
    }
    ctx->pc = 0x1A34DCu;
label_1a34dc:
    // 0x1a34dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1a34e0:
    if (ctx->pc == 0x1A34E0u) {
        ctx->pc = 0x1A34E0u;
            // 0x1a34e0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1A34E4u;
        goto label_1a34e4;
    }
    ctx->pc = 0x1A34DCu;
    {
        const bool branch_taken_0x1a34dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a34dc) {
            ctx->pc = 0x1A34E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34DCu;
            // 0x1a34e0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3508u;
            goto label_1a3508;
        }
    }
    ctx->pc = 0x1A34E4u;
label_1a34e4:
    // 0x1a34e4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1a34e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a34e8:
    // 0x1a34e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a34ec:
    // 0x1a34ec: 0xc06db44  jal         func_1B6D10
label_1a34f0:
    if (ctx->pc == 0x1A34F0u) {
        ctx->pc = 0x1A34F0u;
            // 0x1a34f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A34F4u;
        goto label_1a34f4;
    }
    ctx->pc = 0x1A34ECu;
    SET_GPR_U32(ctx, 31, 0x1A34F4u);
    ctx->pc = 0x1A34F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34ECu;
            // 0x1a34f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (runtime->hasFunction(0x1B6D10u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34F4u; }
        if (ctx->pc != 0x1A34F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D10_0x1b6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34F4u; }
        if (ctx->pc != 0x1A34F4u) { return; }
    }
    ctx->pc = 0x1A34F4u;
label_1a34f4:
    // 0x1a34f4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a34f8:
    // 0x1a34f8: 0x244233a8  addiu       $v0, $v0, 0x33A8
    ctx->pc = 0x1a34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13224));
label_1a34fc:
    // 0x1a34fc: 0x10000066  b           . + 4 + (0x66 << 2)
label_1a3500:
    if (ctx->pc == 0x1A3500u) {
        ctx->pc = 0x1A3500u;
            // 0x1a3500: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x1A3504u;
        goto label_1a3504;
    }
    ctx->pc = 0x1A34FCu;
    {
        const bool branch_taken_0x1a34fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34FCu;
            // 0x1a3500: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34fc) {
            ctx->pc = 0x1A3698u;
            goto label_1a3698;
        }
    }
    ctx->pc = 0x1A3504u;
label_1a3504:
    // 0x1a3504: 0x0  nop
    ctx->pc = 0x1a3504u;
    // NOP
label_1a3508:
    // 0x1a3508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a350c:
    // 0x1a350c: 0xc06db26  jal         func_1B6C98
label_1a3510:
    if (ctx->pc == 0x1A3510u) {
        ctx->pc = 0x1A3510u;
            // 0x1a3510: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x1A3514u;
        goto label_1a3514;
    }
    ctx->pc = 0x1A350Cu;
    SET_GPR_U32(ctx, 31, 0x1A3514u);
    ctx->pc = 0x1A3510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A350Cu;
            // 0x1a3510: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C98u;
    if (runtime->hasFunction(0x1B6C98u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3514u; }
        if (ctx->pc != 0x1A3514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C98_0x1b6c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3514u; }
        if (ctx->pc != 0x1A3514u) { return; }
    }
    ctx->pc = 0x1A3514u;
label_1a3514:
    // 0x1a3514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3518:
    // 0x1a3518: 0x600005f  bltz        $s0, . + 4 + (0x5F << 2)
label_1a351c:
    if (ctx->pc == 0x1A351Cu) {
        ctx->pc = 0x1A351Cu;
            // 0x1a351c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3520u;
        goto label_1a3520;
    }
    ctx->pc = 0x1A3518u;
    {
        const bool branch_taken_0x1a3518 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3518u;
            // 0x1a351c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3518) {
            ctx->pc = 0x1A3698u;
            goto label_1a3698;
        }
    }
    ctx->pc = 0x1A3520u;
label_1a3520:
    // 0x1a3520: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1a3520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a3524:
    // 0x1a3524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3528:
    // 0x1a3528: 0xc06db44  jal         func_1B6D10
label_1a352c:
    if (ctx->pc == 0x1A352Cu) {
        ctx->pc = 0x1A352Cu;
            // 0x1a352c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3530u;
        goto label_1a3530;
    }
    ctx->pc = 0x1A3528u;
    SET_GPR_U32(ctx, 31, 0x1A3530u);
    ctx->pc = 0x1A352Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3528u;
            // 0x1a352c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (runtime->hasFunction(0x1B6D10u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3530u; }
        if (ctx->pc != 0x1A3530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D10_0x1b6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3530u; }
        if (ctx->pc != 0x1A3530u) { return; }
    }
    ctx->pc = 0x1A3530u;
label_1a3530:
    // 0x1a3530: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1a3530u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1a3534:
    // 0x1a3534: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1a3538:
    // 0x1a3538: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a3538u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a353c:
    // 0x1a353c: 0x460003c  bltz        $v1, . + 4 + (0x3C << 2)
label_1a3540:
    if (ctx->pc == 0x1A3540u) {
        ctx->pc = 0x1A3540u;
            // 0x1a3540: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A3544u;
        goto label_1a3544;
    }
    ctx->pc = 0x1A353Cu;
    {
        const bool branch_taken_0x1a353c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A3540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A353Cu;
            // 0x1a3540: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a353c) {
            ctx->pc = 0x1A3630u;
            goto label_1a3630;
        }
    }
    ctx->pc = 0x1A3544u;
label_1a3544:
    // 0x1a3544: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1a3544u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1a3548:
    // 0x1a3548: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1a3548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a354c:
    // 0x1a354c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a3550:
    // 0x1a3550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3554:
    // 0x1a3554: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x1a3554u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a3558:
    // 0x1a3558: 0x1a200022  blez        $s1, . + 4 + (0x22 << 2)
label_1a355c:
    if (ctx->pc == 0x1A355Cu) {
        ctx->pc = 0x1A355Cu;
            // 0x1a355c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x1A3560u;
        goto label_1a3560;
    }
    ctx->pc = 0x1A3558u;
    {
        const bool branch_taken_0x1a3558 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1A355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3558u;
            // 0x1a355c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3558) {
            ctx->pc = 0x1A35E4u;
            goto label_1a35e4;
        }
    }
    ctx->pc = 0x1A3560u;
label_1a3560:
    // 0x1a3560: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a3560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a3564:
    // 0x1a3564: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a3564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3568:
    // 0x1a3568: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a3568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a356c:
    // 0x1a356c: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x1a356cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a3570:
    // 0x1a3570: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a3570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a3574:
    // 0x1a3574: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x1a3574u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a3578:
    // 0x1a3578: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a357c:
    if (ctx->pc == 0x1A357Cu) {
        ctx->pc = 0x1A357Cu;
            // 0x1a357c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1A3580u;
        goto label_1a3580;
    }
    ctx->pc = 0x1A3578u;
    {
        const bool branch_taken_0x1a3578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3578) {
            ctx->pc = 0x1A357Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3578u;
            // 0x1a357c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3580u;
            goto label_1a3580;
        }
    }
    ctx->pc = 0x1A3580u;
label_1a3580:
    // 0x1a3580: 0x1812  mflo        $v1
    ctx->pc = 0x1a3580u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1a3584:
    // 0x1a3584: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1a3584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a3588:
    // 0x1a3588: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a3588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a358c:
    // 0x1a358c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3590:
    // 0x1a3590: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a3590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a3594:
    // 0x1a3594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3598:
    // 0x1a3598: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1a3598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1a359c:
    // 0x1a359c: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x1a359cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_1a35a0:
    // 0x1a35a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a35a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a35a4:
    // 0x1a35a4: 0xc068db2  jal         func_1A36C8
label_1a35a8:
    if (ctx->pc == 0x1A35A8u) {
        ctx->pc = 0x1A35A8u;
            // 0x1a35a8: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->pc = 0x1A35ACu;
        goto label_1a35ac;
    }
    ctx->pc = 0x1A35A4u;
    SET_GPR_U32(ctx, 31, 0x1A35ACu);
    ctx->pc = 0x1A35A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35A4u;
            // 0x1a35a8: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A36C8u;
    if (runtime->hasFunction(0x1A36C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A36C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35ACu; }
        if (ctx->pc != 0x1A35ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A36C8_0x1a36c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35ACu; }
        if (ctx->pc != 0x1A35ACu) { return; }
    }
    ctx->pc = 0x1A35ACu;
label_1a35ac:
    // 0x1a35ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a35b0:
    // 0x1a35b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a35b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a35b4:
    // 0x1a35b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a35b8:
    // 0x1a35b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a35bc:
    // 0x1a35bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a35c0:
    // 0x1a35c0: 0x2c2001a  div         $zero, $s6, $v0
    ctx->pc = 0x1a35c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a35c4:
    // 0x1a35c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a35c8:
    if (ctx->pc == 0x1A35C8u) {
        ctx->pc = 0x1A35C8u;
            // 0x1a35c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1A35CCu;
        goto label_1a35cc;
    }
    ctx->pc = 0x1A35C4u;
    {
        const bool branch_taken_0x1a35c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a35c4) {
            ctx->pc = 0x1A35C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35C4u;
            // 0x1a35c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A35CCu;
            goto label_1a35cc;
        }
    }
    ctx->pc = 0x1A35CCu;
label_1a35cc:
    // 0x1a35cc: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1a35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1a35d0:
    // 0x1a35d0: 0x2012  mflo        $a0
    ctx->pc = 0x1a35d0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1a35d4:
    // 0x1a35d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1a35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1a35d8:
    // 0x1a35d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a35dc:
    // 0x1a35dc: 0x1e00000b  bgtz        $s0, . + 4 + (0xB << 2)
label_1a35e0:
    if (ctx->pc == 0x1A35E0u) {
        ctx->pc = 0x1A35E0u;
            // 0x1a35e0: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x1A35E4u;
        goto label_1a35e4;
    }
    ctx->pc = 0x1A35DCu;
    {
        const bool branch_taken_0x1a35dc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1A35E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35DCu;
            // 0x1a35e0: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35dc) {
            ctx->pc = 0x1A360Cu;
            goto label_1a360c;
        }
    }
    ctx->pc = 0x1A35E4u;
label_1a35e4:
    // 0x1a35e4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a35e8:
    // 0x1a35e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a35ec:
    if (ctx->pc == 0x1A35ECu) {
        ctx->pc = 0x1A35ECu;
            // 0x1a35ec: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x1A35F0u;
        goto label_1a35f0;
    }
    ctx->pc = 0x1A35E8u;
    {
        const bool branch_taken_0x1a35e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35E8u;
            // 0x1a35ec: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35e8) {
            ctx->pc = 0x1A360Cu;
            goto label_1a360c;
        }
    }
    ctx->pc = 0x1A35F0u;
label_1a35f0:
    // 0x1a35f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a35f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a35f4:
    // 0x1a35f4: 0x244233a8  addiu       $v0, $v0, 0x33A8
    ctx->pc = 0x1a35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13224));
label_1a35f8:
    // 0x1a35f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a35f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a35fc:
    // 0x1a35fc: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1a35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_1a3600:
    // 0x1a3600: 0xc05d686  jal         func_175A18
label_1a3604:
    if (ctx->pc == 0x1A3604u) {
        ctx->pc = 0x1A3604u;
            // 0x1a3604: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A3608u;
        goto label_1a3608;
    }
    ctx->pc = 0x1A3600u;
    SET_GPR_U32(ctx, 31, 0x1A3608u);
    ctx->pc = 0x1A3604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3600u;
            // 0x1a3604: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A18u;
    if (runtime->hasFunction(0x175A18u)) {
        auto targetFn = runtime->lookupFunction(0x175A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3608u; }
        if (ctx->pc != 0x1A3608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A18_0x175a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3608u; }
        if (ctx->pc != 0x1A3608u) { return; }
    }
    ctx->pc = 0x1A3608u;
label_1a3608:
    // 0x1a3608: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1a3608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1a360c:
    // 0x1a360c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1a3610:
    // 0x1a3610: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1a3614:
    if (ctx->pc == 0x1A3614u) {
        ctx->pc = 0x1A3614u;
            // 0x1a3614: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3618u;
        goto label_1a3618;
    }
    ctx->pc = 0x1A3610u;
    {
        const bool branch_taken_0x1a3610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3610u;
            // 0x1a3614: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3610) {
            ctx->pc = 0x1A3688u;
            goto label_1a3688;
        }
    }
    ctx->pc = 0x1A3618u;
label_1a3618:
    // 0x1a3618: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a361c:
    // 0x1a361c: 0xc06d7aa  jal         func_1B5EA8
label_1a3620:
    if (ctx->pc == 0x1A3620u) {
        ctx->pc = 0x1A3620u;
            // 0x1a3620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3624u;
        goto label_1a3624;
    }
    ctx->pc = 0x1A361Cu;
    SET_GPR_U32(ctx, 31, 0x1A3624u);
    ctx->pc = 0x1A3620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A361Cu;
            // 0x1a3620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3624u; }
        if (ctx->pc != 0x1A3624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3624u; }
        if (ctx->pc != 0x1A3624u) { return; }
    }
    ctx->pc = 0x1A3624u;
label_1a3624:
    // 0x1a3624: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a3628:
    if (ctx->pc == 0x1A3628u) {
        ctx->pc = 0x1A3628u;
            // 0x1a3628: 0xde8209c8  ld          $v0, 0x9C8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
        ctx->pc = 0x1A362Cu;
        goto label_1a362c;
    }
    ctx->pc = 0x1A3624u;
    {
        const bool branch_taken_0x1a3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3624u;
            // 0x1a3628: 0xde8209c8  ld          $v0, 0x9C8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3624) {
            ctx->pc = 0x1A368Cu;
            goto label_1a368c;
        }
    }
    ctx->pc = 0x1A362Cu;
label_1a362c:
    // 0x1a362c: 0x0  nop
    ctx->pc = 0x1a362cu;
    // NOP
label_1a3630:
    // 0x1a3630: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a3630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3634:
    // 0x1a3634: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a3638:
    if (ctx->pc == 0x1A3638u) {
        ctx->pc = 0x1A3638u;
            // 0x1a3638: 0x32023  negu        $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A363Cu;
        goto label_1a363c;
    }
    ctx->pc = 0x1A3634u;
    {
        const bool branch_taken_0x1a3634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3634u;
            // 0x1a3638: 0x32023  negu        $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3634) {
            ctx->pc = 0x1A3688u;
            goto label_1a3688;
        }
    }
    ctx->pc = 0x1A363Cu;
label_1a363c:
    // 0x1a363c: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1a363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_1a3640:
    // 0x1a3640: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1a3640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_1a3644:
    // 0x1a3644: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1a3644u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1a3648:
    // 0x1a3648: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1a3648u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_1a364c:
    // 0x1a364c: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x1a364cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1a3650:
    // 0x1a3650: 0x5a00000b  blezl       $s0, . + 4 + (0xB << 2)
label_1a3654:
    if (ctx->pc == 0x1A3654u) {
        ctx->pc = 0x1A3654u;
            // 0x1a3654: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x1A3658u;
        goto label_1a3658;
    }
    ctx->pc = 0x1A3650u;
    {
        const bool branch_taken_0x1a3650 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1a3650) {
            ctx->pc = 0x1A3654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3650u;
            // 0x1a3654: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3680u;
            goto label_1a3680;
        }
    }
    ctx->pc = 0x1A3658u;
label_1a3658:
    // 0x1a3658: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a3658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a365c:
    // 0x1a365c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3660:
    // 0x1a3660: 0xc068dd4  jal         func_1A3750
label_1a3664:
    if (ctx->pc == 0x1A3664u) {
        ctx->pc = 0x1A3664u;
            // 0x1a3664: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3668u;
        goto label_1a3668;
    }
    ctx->pc = 0x1A3660u;
    SET_GPR_U32(ctx, 31, 0x1A3668u);
    ctx->pc = 0x1A3664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3660u;
            // 0x1a3664: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3750u;
    if (runtime->hasFunction(0x1A3750u)) {
        auto targetFn = runtime->lookupFunction(0x1A3750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3668u; }
        if (ctx->pc != 0x1A3668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3750_0x1a3750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3668u; }
        if (ctx->pc != 0x1A3668u) { return; }
    }
    ctx->pc = 0x1A3668u;
label_1a3668:
    // 0x1a3668: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1a3668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1a366c:
    // 0x1a366c: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a3670:
    // 0x1a3670: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a3674:
    // 0x1a3674: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
label_1a3678:
    if (ctx->pc == 0x1A3678u) {
        ctx->pc = 0x1A3678u;
            // 0x1a3678: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x1A367Cu;
        goto label_1a367c;
    }
    ctx->pc = 0x1A3674u;
    {
        const bool branch_taken_0x1a3674 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1A3678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3674u;
            // 0x1a3678: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3674) {
            ctx->pc = 0x1A3688u;
            goto label_1a3688;
        }
    }
    ctx->pc = 0x1A367Cu;
label_1a367c:
    // 0x1a367c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a3680:
    // 0x1a3680: 0x244233a8  addiu       $v0, $v0, 0x33A8
    ctx->pc = 0x1a3680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13224));
label_1a3684:
    // 0x1a3684: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1a3684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_1a3688:
    // 0x1a3688: 0xde8209c8  ld          $v0, 0x9C8($s4)
    ctx->pc = 0x1a3688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
label_1a368c:
    // 0x1a368c: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x1a368cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
label_1a3690:
    // 0x1a3690: 0x2c2102d  daddu       $v0, $s6, $v0
    ctx->pc = 0x1a3690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 2));
label_1a3694:
    // 0x1a3694: 0xfe8209c8  sd          $v0, 0x9C8($s4)
    ctx->pc = 0x1a3694u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2504), GPR_U64(ctx, 2));
label_1a3698:
    // 0x1a3698: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a3698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a369c:
    // 0x1a369c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a369cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a36a0:
    // 0x1a36a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a36a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a36a4:
    // 0x1a36a4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a36a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a36a8:
    // 0x1a36a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a36a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a36ac:
    // 0x1a36ac: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1a36acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a36b0:
    // 0x1a36b0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1a36b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a36b4:
    // 0x1a36b4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1a36b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1a36b8:
    // 0x1a36b8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1a36b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a36bc:
    // 0x1a36bc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1a36bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1a36c0:
    // 0x1a36c0: 0x3e00008  jr          $ra
label_1a36c4:
    if (ctx->pc == 0x1A36C4u) {
        ctx->pc = 0x1A36C4u;
            // 0x1a36c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1A36C8u;
        goto label_fallthrough_0x1a36c0;
    }
    ctx->pc = 0x1A36C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A36C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36C0u;
            // 0x1a36c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a36c0:
    ctx->pc = 0x1A36C8u;
}
