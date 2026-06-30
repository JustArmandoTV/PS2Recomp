#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002452F0
// Address: 0x2452f0 - 0x245440
void sub_002452F0_0x2452f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002452F0_0x2452f0");
#endif

    switch (ctx->pc) {
        case 0x2452f0u: goto label_2452f0;
        case 0x2452f4u: goto label_2452f4;
        case 0x2452f8u: goto label_2452f8;
        case 0x2452fcu: goto label_2452fc;
        case 0x245300u: goto label_245300;
        case 0x245304u: goto label_245304;
        case 0x245308u: goto label_245308;
        case 0x24530cu: goto label_24530c;
        case 0x245310u: goto label_245310;
        case 0x245314u: goto label_245314;
        case 0x245318u: goto label_245318;
        case 0x24531cu: goto label_24531c;
        case 0x245320u: goto label_245320;
        case 0x245324u: goto label_245324;
        case 0x245328u: goto label_245328;
        case 0x24532cu: goto label_24532c;
        case 0x245330u: goto label_245330;
        case 0x245334u: goto label_245334;
        case 0x245338u: goto label_245338;
        case 0x24533cu: goto label_24533c;
        case 0x245340u: goto label_245340;
        case 0x245344u: goto label_245344;
        case 0x245348u: goto label_245348;
        case 0x24534cu: goto label_24534c;
        case 0x245350u: goto label_245350;
        case 0x245354u: goto label_245354;
        case 0x245358u: goto label_245358;
        case 0x24535cu: goto label_24535c;
        case 0x245360u: goto label_245360;
        case 0x245364u: goto label_245364;
        case 0x245368u: goto label_245368;
        case 0x24536cu: goto label_24536c;
        case 0x245370u: goto label_245370;
        case 0x245374u: goto label_245374;
        case 0x245378u: goto label_245378;
        case 0x24537cu: goto label_24537c;
        case 0x245380u: goto label_245380;
        case 0x245384u: goto label_245384;
        case 0x245388u: goto label_245388;
        case 0x24538cu: goto label_24538c;
        case 0x245390u: goto label_245390;
        case 0x245394u: goto label_245394;
        case 0x245398u: goto label_245398;
        case 0x24539cu: goto label_24539c;
        case 0x2453a0u: goto label_2453a0;
        case 0x2453a4u: goto label_2453a4;
        case 0x2453a8u: goto label_2453a8;
        case 0x2453acu: goto label_2453ac;
        case 0x2453b0u: goto label_2453b0;
        case 0x2453b4u: goto label_2453b4;
        case 0x2453b8u: goto label_2453b8;
        case 0x2453bcu: goto label_2453bc;
        case 0x2453c0u: goto label_2453c0;
        case 0x2453c4u: goto label_2453c4;
        case 0x2453c8u: goto label_2453c8;
        case 0x2453ccu: goto label_2453cc;
        case 0x2453d0u: goto label_2453d0;
        case 0x2453d4u: goto label_2453d4;
        case 0x2453d8u: goto label_2453d8;
        case 0x2453dcu: goto label_2453dc;
        case 0x2453e0u: goto label_2453e0;
        case 0x2453e4u: goto label_2453e4;
        case 0x2453e8u: goto label_2453e8;
        case 0x2453ecu: goto label_2453ec;
        case 0x2453f0u: goto label_2453f0;
        case 0x2453f4u: goto label_2453f4;
        case 0x2453f8u: goto label_2453f8;
        case 0x2453fcu: goto label_2453fc;
        case 0x245400u: goto label_245400;
        case 0x245404u: goto label_245404;
        case 0x245408u: goto label_245408;
        case 0x24540cu: goto label_24540c;
        case 0x245410u: goto label_245410;
        case 0x245414u: goto label_245414;
        case 0x245418u: goto label_245418;
        case 0x24541cu: goto label_24541c;
        case 0x245420u: goto label_245420;
        case 0x245424u: goto label_245424;
        case 0x245428u: goto label_245428;
        case 0x24542cu: goto label_24542c;
        case 0x245430u: goto label_245430;
        case 0x245434u: goto label_245434;
        case 0x245438u: goto label_245438;
        case 0x24543cu: goto label_24543c;
        default: break;
    }

    ctx->pc = 0x2452f0u;

label_2452f0:
    // 0x2452f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2452f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2452f4:
    // 0x2452f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2452f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2452f8:
    // 0x2452f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2452f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2452fc:
    // 0x2452fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2452fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245300:
    // 0x245300: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245304:
    // 0x245304: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x245304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_245308:
    // 0x245308: 0x24d0000c  addiu       $s0, $a2, 0xC
    ctx->pc = 0x245308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_24530c:
    // 0x24530c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x24530cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_245310:
    // 0x245310: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x245310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_245314:
    // 0x245314: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x245314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_245318:
    // 0x245318: 0xc091680  jal         func_245A00
label_24531c:
    if (ctx->pc == 0x24531Cu) {
        ctx->pc = 0x24531Cu;
            // 0x24531c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x245320u;
        goto label_245320;
    }
    ctx->pc = 0x245318u;
    SET_GPR_U32(ctx, 31, 0x245320u);
    ctx->pc = 0x24531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245318u;
            // 0x24531c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245320u; }
        if (ctx->pc != 0x245320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245320u; }
        if (ctx->pc != 0x245320u) { return; }
    }
    ctx->pc = 0x245320u;
label_245320:
    // 0x245320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245324:
    // 0x245324: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x245324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
label_245328:
    // 0x245328: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x245328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24532c:
    // 0x24532c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_245330:
    // 0x245330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245334:
    // 0x245334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245338:
    // 0x245338: 0x3e00008  jr          $ra
label_24533c:
    if (ctx->pc == 0x24533Cu) {
        ctx->pc = 0x24533Cu;
            // 0x24533c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x245340u;
        goto label_245340;
    }
    ctx->pc = 0x245338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245338u;
            // 0x24533c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245340u;
label_245340:
    // 0x245340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_245344:
    // 0x245344: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x245344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_245348:
    // 0x245348: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x245348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24534c:
    // 0x24534c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_245350:
    // 0x245350: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x245350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245354:
    // 0x245354: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x245354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_245358:
    // 0x245358: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x245358u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24535c:
    // 0x24535c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_245360:
    // 0x245360: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x245360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245364:
    // 0x245364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245368:
    // 0x245368: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x245368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_24536c:
    // 0x24536c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245370:
    // 0x245370: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x245370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_245374:
    // 0x245374: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x245374u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_245378:
    // 0x245378: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_24537c:
    if (ctx->pc == 0x24537Cu) {
        ctx->pc = 0x24537Cu;
            // 0x24537c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245380u;
        goto label_245380;
    }
    ctx->pc = 0x245378u;
    {
        const bool branch_taken_0x245378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24537Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245378u;
            // 0x24537c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245378) {
            ctx->pc = 0x2453B8u;
            goto label_2453b8;
        }
    }
    ctx->pc = 0x245380u;
label_245380:
    // 0x245380: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x245380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_245384:
    // 0x245384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245388:
    // 0x245388: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x245388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_24538c:
    // 0x24538c: 0x320f809  jalr        $t9
label_245390:
    if (ctx->pc == 0x245390u) {
        ctx->pc = 0x245394u;
        goto label_245394;
    }
    ctx->pc = 0x24538Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x245394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245394u; }
            if (ctx->pc != 0x245394u) { return; }
        }
        }
    }
    ctx->pc = 0x245394u;
label_245394:
    // 0x245394: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x245394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_245398:
    // 0x245398: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x245398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_24539c:
    // 0x24539c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x24539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2453a0:
    // 0x2453a0: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x2453a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_2453a4:
    // 0x2453a4: 0xafb30074  sw          $s3, 0x74($sp)
    ctx->pc = 0x2453a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 19));
label_2453a8:
    // 0x2453a8: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x2453a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
label_2453ac:
    // 0x2453ac: 0xafb10080  sw          $s1, 0x80($sp)
    ctx->pc = 0x2453acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 17));
label_2453b0:
    // 0x2453b0: 0xc091c60  jal         func_247180
label_2453b4:
    if (ctx->pc == 0x2453B4u) {
        ctx->pc = 0x2453B4u;
            // 0x2453b4: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->pc = 0x2453B8u;
        goto label_2453b8;
    }
    ctx->pc = 0x2453B0u;
    SET_GPR_U32(ctx, 31, 0x2453B8u);
    ctx->pc = 0x2453B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453B0u;
            // 0x2453b4: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247180u;
    if (runtime->hasFunction(0x247180u)) {
        auto targetFn = runtime->lookupFunction(0x247180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453B8u; }
        if (ctx->pc != 0x2453B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247180_0x247180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453B8u; }
        if (ctx->pc != 0x2453B8u) { return; }
    }
    ctx->pc = 0x2453B8u;
label_2453b8:
    // 0x2453b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2453b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2453bc:
    // 0x2453bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2453bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2453c0:
    // 0x2453c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2453c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2453c4:
    // 0x2453c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2453c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2453c8:
    // 0x2453c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2453c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2453cc:
    // 0x2453cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2453ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2453d0:
    // 0x2453d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2453d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2453d4:
    // 0x2453d4: 0x3e00008  jr          $ra
label_2453d8:
    if (ctx->pc == 0x2453D8u) {
        ctx->pc = 0x2453D8u;
            // 0x2453d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2453DCu;
        goto label_2453dc;
    }
    ctx->pc = 0x2453D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2453D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2453D4u;
            // 0x2453d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2453DCu;
label_2453dc:
    // 0x2453dc: 0x0  nop
    ctx->pc = 0x2453dcu;
    // NOP
label_2453e0:
    // 0x2453e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2453e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2453e4:
    // 0x2453e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2453e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2453e8:
    // 0x2453e8: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x2453e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_2453ec:
    // 0x2453ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2453f0:
    if (ctx->pc == 0x2453F0u) {
        ctx->pc = 0x2453F4u;
        goto label_2453f4;
    }
    ctx->pc = 0x2453ECu;
    {
        const bool branch_taken_0x2453ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2453ec) {
            ctx->pc = 0x245400u;
            goto label_245400;
        }
    }
    ctx->pc = 0x2453F4u;
label_2453f4:
    // 0x2453f4: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2453f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2453f8:
    // 0x2453f8: 0xc091720  jal         func_245C80
label_2453fc:
    if (ctx->pc == 0x2453FCu) {
        ctx->pc = 0x2453FCu;
            // 0x2453fc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245400u;
        goto label_245400;
    }
    ctx->pc = 0x2453F8u;
    SET_GPR_U32(ctx, 31, 0x245400u);
    ctx->pc = 0x2453FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453F8u;
            // 0x2453fc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245C80u;
    if (runtime->hasFunction(0x245C80u)) {
        auto targetFn = runtime->lookupFunction(0x245C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245400u; }
        if (ctx->pc != 0x245400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245C80_0x245c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245400u; }
        if (ctx->pc != 0x245400u) { return; }
    }
    ctx->pc = 0x245400u;
label_245400:
    // 0x245400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245404:
    // 0x245404: 0x3e00008  jr          $ra
label_245408:
    if (ctx->pc == 0x245408u) {
        ctx->pc = 0x245408u;
            // 0x245408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x24540Cu;
        goto label_24540c;
    }
    ctx->pc = 0x245404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245404u;
            // 0x245408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24540Cu;
label_24540c:
    // 0x24540c: 0x0  nop
    ctx->pc = 0x24540cu;
    // NOP
label_245410:
    // 0x245410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_245414:
    // 0x245414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_245418:
    // 0x245418: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x245418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_24541c:
    // 0x24541c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_245420:
    if (ctx->pc == 0x245420u) {
        ctx->pc = 0x245424u;
        goto label_245424;
    }
    ctx->pc = 0x24541Cu;
    {
        const bool branch_taken_0x24541c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24541c) {
            ctx->pc = 0x245430u;
            goto label_245430;
        }
    }
    ctx->pc = 0x245424u;
label_245424:
    // 0x245424: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x245424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_245428:
    // 0x245428: 0xc091780  jal         func_245E00
label_24542c:
    if (ctx->pc == 0x24542Cu) {
        ctx->pc = 0x24542Cu;
            // 0x24542c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245430u;
        goto label_245430;
    }
    ctx->pc = 0x245428u;
    SET_GPR_U32(ctx, 31, 0x245430u);
    ctx->pc = 0x24542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245428u;
            // 0x24542c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245E00u;
    if (runtime->hasFunction(0x245E00u)) {
        auto targetFn = runtime->lookupFunction(0x245E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245430u; }
        if (ctx->pc != 0x245430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245E00_0x245e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245430u; }
        if (ctx->pc != 0x245430u) { return; }
    }
    ctx->pc = 0x245430u;
label_245430:
    // 0x245430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245434:
    // 0x245434: 0x3e00008  jr          $ra
label_245438:
    if (ctx->pc == 0x245438u) {
        ctx->pc = 0x245438u;
            // 0x245438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x24543Cu;
        goto label_24543c;
    }
    ctx->pc = 0x245434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245434u;
            // 0x245438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24543Cu;
label_24543c:
    // 0x24543c: 0x0  nop
    ctx->pc = 0x24543cu;
    // NOP
}
