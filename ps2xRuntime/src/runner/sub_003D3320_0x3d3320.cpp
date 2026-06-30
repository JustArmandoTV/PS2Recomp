#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D3320
// Address: 0x3d3320 - 0x3d3450
void sub_003D3320_0x3d3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3320_0x3d3320");
#endif

    switch (ctx->pc) {
        case 0x3d3320u: goto label_3d3320;
        case 0x3d3324u: goto label_3d3324;
        case 0x3d3328u: goto label_3d3328;
        case 0x3d332cu: goto label_3d332c;
        case 0x3d3330u: goto label_3d3330;
        case 0x3d3334u: goto label_3d3334;
        case 0x3d3338u: goto label_3d3338;
        case 0x3d333cu: goto label_3d333c;
        case 0x3d3340u: goto label_3d3340;
        case 0x3d3344u: goto label_3d3344;
        case 0x3d3348u: goto label_3d3348;
        case 0x3d334cu: goto label_3d334c;
        case 0x3d3350u: goto label_3d3350;
        case 0x3d3354u: goto label_3d3354;
        case 0x3d3358u: goto label_3d3358;
        case 0x3d335cu: goto label_3d335c;
        case 0x3d3360u: goto label_3d3360;
        case 0x3d3364u: goto label_3d3364;
        case 0x3d3368u: goto label_3d3368;
        case 0x3d336cu: goto label_3d336c;
        case 0x3d3370u: goto label_3d3370;
        case 0x3d3374u: goto label_3d3374;
        case 0x3d3378u: goto label_3d3378;
        case 0x3d337cu: goto label_3d337c;
        case 0x3d3380u: goto label_3d3380;
        case 0x3d3384u: goto label_3d3384;
        case 0x3d3388u: goto label_3d3388;
        case 0x3d338cu: goto label_3d338c;
        case 0x3d3390u: goto label_3d3390;
        case 0x3d3394u: goto label_3d3394;
        case 0x3d3398u: goto label_3d3398;
        case 0x3d339cu: goto label_3d339c;
        case 0x3d33a0u: goto label_3d33a0;
        case 0x3d33a4u: goto label_3d33a4;
        case 0x3d33a8u: goto label_3d33a8;
        case 0x3d33acu: goto label_3d33ac;
        case 0x3d33b0u: goto label_3d33b0;
        case 0x3d33b4u: goto label_3d33b4;
        case 0x3d33b8u: goto label_3d33b8;
        case 0x3d33bcu: goto label_3d33bc;
        case 0x3d33c0u: goto label_3d33c0;
        case 0x3d33c4u: goto label_3d33c4;
        case 0x3d33c8u: goto label_3d33c8;
        case 0x3d33ccu: goto label_3d33cc;
        case 0x3d33d0u: goto label_3d33d0;
        case 0x3d33d4u: goto label_3d33d4;
        case 0x3d33d8u: goto label_3d33d8;
        case 0x3d33dcu: goto label_3d33dc;
        case 0x3d33e0u: goto label_3d33e0;
        case 0x3d33e4u: goto label_3d33e4;
        case 0x3d33e8u: goto label_3d33e8;
        case 0x3d33ecu: goto label_3d33ec;
        case 0x3d33f0u: goto label_3d33f0;
        case 0x3d33f4u: goto label_3d33f4;
        case 0x3d33f8u: goto label_3d33f8;
        case 0x3d33fcu: goto label_3d33fc;
        case 0x3d3400u: goto label_3d3400;
        case 0x3d3404u: goto label_3d3404;
        case 0x3d3408u: goto label_3d3408;
        case 0x3d340cu: goto label_3d340c;
        case 0x3d3410u: goto label_3d3410;
        case 0x3d3414u: goto label_3d3414;
        case 0x3d3418u: goto label_3d3418;
        case 0x3d341cu: goto label_3d341c;
        case 0x3d3420u: goto label_3d3420;
        case 0x3d3424u: goto label_3d3424;
        case 0x3d3428u: goto label_3d3428;
        case 0x3d342cu: goto label_3d342c;
        case 0x3d3430u: goto label_3d3430;
        case 0x3d3434u: goto label_3d3434;
        case 0x3d3438u: goto label_3d3438;
        case 0x3d343cu: goto label_3d343c;
        case 0x3d3440u: goto label_3d3440;
        case 0x3d3444u: goto label_3d3444;
        case 0x3d3448u: goto label_3d3448;
        case 0x3d344cu: goto label_3d344c;
        default: break;
    }

    ctx->pc = 0x3d3320u;

label_3d3320:
    // 0x3d3320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d3324:
    // 0x3d3324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d3324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d3328:
    // 0x3d3328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d3328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d332c:
    // 0x3d332c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d3330:
    // 0x3d3330: 0xc0e393c  jal         func_38E4F0
label_3d3334:
    if (ctx->pc == 0x3D3334u) {
        ctx->pc = 0x3D3334u;
            // 0x3d3334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3338u;
        goto label_3d3338;
    }
    ctx->pc = 0x3D3330u;
    SET_GPR_U32(ctx, 31, 0x3D3338u);
    ctx->pc = 0x3D3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3330u;
            // 0x3d3334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3338u; }
        if (ctx->pc != 0x3D3338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3338u; }
        if (ctx->pc != 0x3D3338u) { return; }
    }
    ctx->pc = 0x3D3338u;
label_3d3338:
    // 0x3d3338: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3d3338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3d333c:
    // 0x3d333c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3d333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3d3340:
    // 0x3d3340: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3d3340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3d3344:
    // 0x3d3344: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3d3344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3d3348:
    // 0x3d3348: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x3d3348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d334c:
    // 0x3d334c: 0xc088b74  jal         func_222DD0
label_3d3350:
    if (ctx->pc == 0x3D3350u) {
        ctx->pc = 0x3D3350u;
            // 0x3d3350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3354u;
        goto label_3d3354;
    }
    ctx->pc = 0x3D334Cu;
    SET_GPR_U32(ctx, 31, 0x3D3354u);
    ctx->pc = 0x3D3350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D334Cu;
            // 0x3d3350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3354u; }
        if (ctx->pc != 0x3D3354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3354u; }
        if (ctx->pc != 0x3D3354u) { return; }
    }
    ctx->pc = 0x3D3354u;
label_3d3354:
    // 0x3d3354: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x3d3354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3d3358:
    // 0x3d3358: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3d3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3d335c:
    // 0x3d335c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d335cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d3360:
    // 0x3d3360: 0x320f809  jalr        $t9
label_3d3364:
    if (ctx->pc == 0x3D3364u) {
        ctx->pc = 0x3D3364u;
            // 0x3d3364: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D3368u;
        goto label_3d3368;
    }
    ctx->pc = 0x3D3360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D3368u);
        ctx->pc = 0x3D3364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3360u;
            // 0x3d3364: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D3368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D3368u; }
            if (ctx->pc != 0x3D3368u) { return; }
        }
        }
    }
    ctx->pc = 0x3D3368u;
label_3d3368:
    // 0x3d3368: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x3d3368u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d336c:
    // 0x3d336c: 0xc088b74  jal         func_222DD0
label_3d3370:
    if (ctx->pc == 0x3D3370u) {
        ctx->pc = 0x3D3370u;
            // 0x3d3370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3374u;
        goto label_3d3374;
    }
    ctx->pc = 0x3D336Cu;
    SET_GPR_U32(ctx, 31, 0x3D3374u);
    ctx->pc = 0x3D3370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D336Cu;
            // 0x3d3370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3374u; }
        if (ctx->pc != 0x3D3374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3374u; }
        if (ctx->pc != 0x3D3374u) { return; }
    }
    ctx->pc = 0x3D3374u;
label_3d3374:
    // 0x3d3374: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x3d3374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3d3378:
    // 0x3d3378: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3d3378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3d337c:
    // 0x3d337c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3d337cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3d3380:
    // 0x3d3380: 0x320f809  jalr        $t9
label_3d3384:
    if (ctx->pc == 0x3D3384u) {
        ctx->pc = 0x3D3384u;
            // 0x3d3384: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D3388u;
        goto label_3d3388;
    }
    ctx->pc = 0x3D3380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D3388u);
        ctx->pc = 0x3D3384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3380u;
            // 0x3d3384: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D3388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D3388u; }
            if (ctx->pc != 0x3D3388u) { return; }
        }
        }
    }
    ctx->pc = 0x3D3388u;
label_3d3388:
    // 0x3d3388: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x3d3388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d338c:
    // 0x3d338c: 0x3c02405f  lui         $v0, 0x405F
    ctx->pc = 0x3d338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16479 << 16));
label_3d3390:
    // 0x3d3390: 0x344366f3  ori         $v1, $v0, 0x66F3
    ctx->pc = 0x3d3390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
label_3d3394:
    // 0x3d3394: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x3d3394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_3d3398:
    // 0x3d3398: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d3398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d339c:
    // 0x3d339c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d339cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d33a0:
    // 0x3d33a0: 0xace0015c  sw          $zero, 0x15C($a3)
    ctx->pc = 0x3d33a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 348), GPR_U32(ctx, 0));
label_3d33a4:
    // 0x3d33a4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d33a8:
    // 0x3d33a8: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x3d33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_3d33ac:
    // 0x3d33ac: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d33acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d33b0:
    // 0x3d33b0: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x3d33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_3d33b4:
    // 0x3d33b4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d33b8:
    // 0x3d33b8: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x3d33b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_3d33bc:
    // 0x3d33bc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d33bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d33c0:
    // 0x3d33c0: 0xc08914c  jal         func_224530
label_3d33c4:
    if (ctx->pc == 0x3D33C4u) {
        ctx->pc = 0x3D33C4u;
            // 0x3d33c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D33C8u;
        goto label_3d33c8;
    }
    ctx->pc = 0x3D33C0u;
    SET_GPR_U32(ctx, 31, 0x3D33C8u);
    ctx->pc = 0x3D33C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D33C0u;
            // 0x3d33c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D33C8u; }
        if (ctx->pc != 0x3D33C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D33C8u; }
        if (ctx->pc != 0x3D33C8u) { return; }
    }
    ctx->pc = 0x3D33C8u;
label_3d33c8:
    // 0x3d33c8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x3d33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d33cc:
    // 0x3d33cc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3d33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3d33d0:
    // 0x3d33d0: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x3d33d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_3d33d4:
    // 0x3d33d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d33d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d33d8:
    // 0x3d33d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d33dc:
    // 0x3d33dc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3d33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3d33e0:
    // 0x3d33e0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d33e4:
    // 0x3d33e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d33e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d33e8:
    // 0x3d33e8: 0xc08bff0  jal         func_22FFC0
label_3d33ec:
    if (ctx->pc == 0x3D33ECu) {
        ctx->pc = 0x3D33ECu;
            // 0x3d33ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D33F0u;
        goto label_3d33f0;
    }
    ctx->pc = 0x3D33E8u;
    SET_GPR_U32(ctx, 31, 0x3D33F0u);
    ctx->pc = 0x3D33ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D33E8u;
            // 0x3d33ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D33F0u; }
        if (ctx->pc != 0x3D33F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D33F0u; }
        if (ctx->pc != 0x3D33F0u) { return; }
    }
    ctx->pc = 0x3D33F0u;
label_3d33f0:
    // 0x3d33f0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d33f4:
    // 0x3d33f4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3d33f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d33f8:
    // 0x3d33f8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3d33f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d33fc:
    // 0x3d33fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d33fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d3400:
    // 0x3d3400: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3d3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3404:
    // 0x3d3404: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3d3404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d3408:
    // 0x3d3408: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d3408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d340c:
    // 0x3d340c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3d340cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3d3410:
    // 0x3d3410: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d3410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d3414:
    // 0x3d3414: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3d3414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d3418:
    // 0x3d3418: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x3d3418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d341c:
    // 0x3d341c: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3d341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d3420:
    // 0x3d3420: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3d3420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d3424:
    // 0x3d3424: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3d3424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3428:
    // 0x3d3428: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3d3428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d342c:
    // 0x3d342c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d342cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d3430:
    // 0x3d3430: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3d3430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3d3434:
    // 0x3d3434: 0xc0892b0  jal         func_224AC0
label_3d3438:
    if (ctx->pc == 0x3D3438u) {
        ctx->pc = 0x3D3438u;
            // 0x3d3438: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3D343Cu;
        goto label_3d343c;
    }
    ctx->pc = 0x3D3434u;
    SET_GPR_U32(ctx, 31, 0x3D343Cu);
    ctx->pc = 0x3D3438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3434u;
            // 0x3d3438: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D343Cu; }
        if (ctx->pc != 0x3D343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D343Cu; }
        if (ctx->pc != 0x3D343Cu) { return; }
    }
    ctx->pc = 0x3D343Cu;
label_3d343c:
    // 0x3d343c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d343cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3440:
    // 0x3d3440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d3440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3444:
    // 0x3d3444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d3444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3448:
    // 0x3d3448: 0x3e00008  jr          $ra
label_3d344c:
    if (ctx->pc == 0x3D344Cu) {
        ctx->pc = 0x3D344Cu;
            // 0x3d344c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D3450u;
        goto label_fallthrough_0x3d3448;
    }
    ctx->pc = 0x3D3448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3448u;
            // 0x3d344c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3d3448:
    ctx->pc = 0x3D3450u;
}
