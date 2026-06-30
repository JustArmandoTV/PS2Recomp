#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BD300
// Address: 0x2bd300 - 0x2bd4b0
void sub_002BD300_0x2bd300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD300_0x2bd300");
#endif

    switch (ctx->pc) {
        case 0x2bd300u: goto label_2bd300;
        case 0x2bd304u: goto label_2bd304;
        case 0x2bd308u: goto label_2bd308;
        case 0x2bd30cu: goto label_2bd30c;
        case 0x2bd310u: goto label_2bd310;
        case 0x2bd314u: goto label_2bd314;
        case 0x2bd318u: goto label_2bd318;
        case 0x2bd31cu: goto label_2bd31c;
        case 0x2bd320u: goto label_2bd320;
        case 0x2bd324u: goto label_2bd324;
        case 0x2bd328u: goto label_2bd328;
        case 0x2bd32cu: goto label_2bd32c;
        case 0x2bd330u: goto label_2bd330;
        case 0x2bd334u: goto label_2bd334;
        case 0x2bd338u: goto label_2bd338;
        case 0x2bd33cu: goto label_2bd33c;
        case 0x2bd340u: goto label_2bd340;
        case 0x2bd344u: goto label_2bd344;
        case 0x2bd348u: goto label_2bd348;
        case 0x2bd34cu: goto label_2bd34c;
        case 0x2bd350u: goto label_2bd350;
        case 0x2bd354u: goto label_2bd354;
        case 0x2bd358u: goto label_2bd358;
        case 0x2bd35cu: goto label_2bd35c;
        case 0x2bd360u: goto label_2bd360;
        case 0x2bd364u: goto label_2bd364;
        case 0x2bd368u: goto label_2bd368;
        case 0x2bd36cu: goto label_2bd36c;
        case 0x2bd370u: goto label_2bd370;
        case 0x2bd374u: goto label_2bd374;
        case 0x2bd378u: goto label_2bd378;
        case 0x2bd37cu: goto label_2bd37c;
        case 0x2bd380u: goto label_2bd380;
        case 0x2bd384u: goto label_2bd384;
        case 0x2bd388u: goto label_2bd388;
        case 0x2bd38cu: goto label_2bd38c;
        case 0x2bd390u: goto label_2bd390;
        case 0x2bd394u: goto label_2bd394;
        case 0x2bd398u: goto label_2bd398;
        case 0x2bd39cu: goto label_2bd39c;
        case 0x2bd3a0u: goto label_2bd3a0;
        case 0x2bd3a4u: goto label_2bd3a4;
        case 0x2bd3a8u: goto label_2bd3a8;
        case 0x2bd3acu: goto label_2bd3ac;
        case 0x2bd3b0u: goto label_2bd3b0;
        case 0x2bd3b4u: goto label_2bd3b4;
        case 0x2bd3b8u: goto label_2bd3b8;
        case 0x2bd3bcu: goto label_2bd3bc;
        case 0x2bd3c0u: goto label_2bd3c0;
        case 0x2bd3c4u: goto label_2bd3c4;
        case 0x2bd3c8u: goto label_2bd3c8;
        case 0x2bd3ccu: goto label_2bd3cc;
        case 0x2bd3d0u: goto label_2bd3d0;
        case 0x2bd3d4u: goto label_2bd3d4;
        case 0x2bd3d8u: goto label_2bd3d8;
        case 0x2bd3dcu: goto label_2bd3dc;
        case 0x2bd3e0u: goto label_2bd3e0;
        case 0x2bd3e4u: goto label_2bd3e4;
        case 0x2bd3e8u: goto label_2bd3e8;
        case 0x2bd3ecu: goto label_2bd3ec;
        case 0x2bd3f0u: goto label_2bd3f0;
        case 0x2bd3f4u: goto label_2bd3f4;
        case 0x2bd3f8u: goto label_2bd3f8;
        case 0x2bd3fcu: goto label_2bd3fc;
        case 0x2bd400u: goto label_2bd400;
        case 0x2bd404u: goto label_2bd404;
        case 0x2bd408u: goto label_2bd408;
        case 0x2bd40cu: goto label_2bd40c;
        case 0x2bd410u: goto label_2bd410;
        case 0x2bd414u: goto label_2bd414;
        case 0x2bd418u: goto label_2bd418;
        case 0x2bd41cu: goto label_2bd41c;
        case 0x2bd420u: goto label_2bd420;
        case 0x2bd424u: goto label_2bd424;
        case 0x2bd428u: goto label_2bd428;
        case 0x2bd42cu: goto label_2bd42c;
        case 0x2bd430u: goto label_2bd430;
        case 0x2bd434u: goto label_2bd434;
        case 0x2bd438u: goto label_2bd438;
        case 0x2bd43cu: goto label_2bd43c;
        case 0x2bd440u: goto label_2bd440;
        case 0x2bd444u: goto label_2bd444;
        case 0x2bd448u: goto label_2bd448;
        case 0x2bd44cu: goto label_2bd44c;
        case 0x2bd450u: goto label_2bd450;
        case 0x2bd454u: goto label_2bd454;
        case 0x2bd458u: goto label_2bd458;
        case 0x2bd45cu: goto label_2bd45c;
        case 0x2bd460u: goto label_2bd460;
        case 0x2bd464u: goto label_2bd464;
        case 0x2bd468u: goto label_2bd468;
        case 0x2bd46cu: goto label_2bd46c;
        case 0x2bd470u: goto label_2bd470;
        case 0x2bd474u: goto label_2bd474;
        case 0x2bd478u: goto label_2bd478;
        case 0x2bd47cu: goto label_2bd47c;
        case 0x2bd480u: goto label_2bd480;
        case 0x2bd484u: goto label_2bd484;
        case 0x2bd488u: goto label_2bd488;
        case 0x2bd48cu: goto label_2bd48c;
        case 0x2bd490u: goto label_2bd490;
        case 0x2bd494u: goto label_2bd494;
        case 0x2bd498u: goto label_2bd498;
        case 0x2bd49cu: goto label_2bd49c;
        case 0x2bd4a0u: goto label_2bd4a0;
        case 0x2bd4a4u: goto label_2bd4a4;
        case 0x2bd4a8u: goto label_2bd4a8;
        case 0x2bd4acu: goto label_2bd4ac;
        default: break;
    }

    ctx->pc = 0x2bd300u;

label_2bd300:
    // 0x2bd300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bd304:
    // 0x2bd304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bd304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bd308:
    // 0x2bd308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bd30c:
    // 0x2bd30c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bd310:
    // 0x2bd310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bd314:
    // 0x2bd314: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2bd318:
    if (ctx->pc == 0x2BD318u) {
        ctx->pc = 0x2BD318u;
            // 0x2bd318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD31Cu;
        goto label_2bd31c;
    }
    ctx->pc = 0x2BD314u;
    {
        const bool branch_taken_0x2bd314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD314u;
            // 0x2bd318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd314) {
            ctx->pc = 0x2BD358u;
            goto label_2bd358;
        }
    }
    ctx->pc = 0x2BD31Cu;
label_2bd31c:
    // 0x2bd31c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bd320:
    if (ctx->pc == 0x2BD320u) {
        ctx->pc = 0x2BD320u;
            // 0x2bd320: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BD324u;
        goto label_2bd324;
    }
    ctx->pc = 0x2BD31Cu;
    {
        const bool branch_taken_0x2bd31c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd31c) {
            ctx->pc = 0x2BD320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD31Cu;
            // 0x2bd320: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD344u;
            goto label_2bd344;
        }
    }
    ctx->pc = 0x2BD324u;
label_2bd324:
    // 0x2bd324: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2bd328:
    if (ctx->pc == 0x2BD328u) {
        ctx->pc = 0x2BD32Cu;
        goto label_2bd32c;
    }
    ctx->pc = 0x2BD324u;
    {
        const bool branch_taken_0x2bd324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd324) {
            ctx->pc = 0x2BD340u;
            goto label_2bd340;
        }
    }
    ctx->pc = 0x2BD32Cu;
label_2bd32c:
    // 0x2bd32c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bd32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2bd330:
    // 0x2bd330: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bd334:
    if (ctx->pc == 0x2BD334u) {
        ctx->pc = 0x2BD338u;
        goto label_2bd338;
    }
    ctx->pc = 0x2BD330u;
    {
        const bool branch_taken_0x2bd330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd330) {
            ctx->pc = 0x2BD340u;
            goto label_2bd340;
        }
    }
    ctx->pc = 0x2BD338u;
label_2bd338:
    // 0x2bd338: 0xc0400a8  jal         func_1002A0
label_2bd33c:
    if (ctx->pc == 0x2BD33Cu) {
        ctx->pc = 0x2BD340u;
        goto label_2bd340;
    }
    ctx->pc = 0x2BD338u;
    SET_GPR_U32(ctx, 31, 0x2BD340u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD340u; }
        if (ctx->pc != 0x2BD340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD340u; }
        if (ctx->pc != 0x2BD340u) { return; }
    }
    ctx->pc = 0x2BD340u;
label_2bd340:
    // 0x2bd340: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bd340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bd344:
    // 0x2bd344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bd348:
    // 0x2bd348: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bd34c:
    if (ctx->pc == 0x2BD34Cu) {
        ctx->pc = 0x2BD34Cu;
            // 0x2bd34c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD350u;
        goto label_2bd350;
    }
    ctx->pc = 0x2BD348u;
    {
        const bool branch_taken_0x2bd348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd348) {
            ctx->pc = 0x2BD34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD348u;
            // 0x2bd34c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD35Cu;
            goto label_2bd35c;
        }
    }
    ctx->pc = 0x2BD350u;
label_2bd350:
    // 0x2bd350: 0xc0400a8  jal         func_1002A0
label_2bd354:
    if (ctx->pc == 0x2BD354u) {
        ctx->pc = 0x2BD354u;
            // 0x2bd354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD358u;
        goto label_2bd358;
    }
    ctx->pc = 0x2BD350u;
    SET_GPR_U32(ctx, 31, 0x2BD358u);
    ctx->pc = 0x2BD354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD350u;
            // 0x2bd354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD358u; }
        if (ctx->pc != 0x2BD358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD358u; }
        if (ctx->pc != 0x2BD358u) { return; }
    }
    ctx->pc = 0x2BD358u;
label_2bd358:
    // 0x2bd358: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bd358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd35c:
    // 0x2bd35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bd35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bd360:
    // 0x2bd360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd364:
    // 0x2bd364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bd368:
    // 0x2bd368: 0x3e00008  jr          $ra
label_2bd36c:
    if (ctx->pc == 0x2BD36Cu) {
        ctx->pc = 0x2BD36Cu;
            // 0x2bd36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BD370u;
        goto label_2bd370;
    }
    ctx->pc = 0x2BD368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD368u;
            // 0x2bd36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD370u;
label_2bd370:
    // 0x2bd370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bd374:
    // 0x2bd374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bd374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bd378:
    // 0x2bd378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bd37c:
    // 0x2bd37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bd380:
    // 0x2bd380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bd384:
    // 0x2bd384: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_2bd388:
    if (ctx->pc == 0x2BD388u) {
        ctx->pc = 0x2BD388u;
            // 0x2bd388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD38Cu;
        goto label_2bd38c;
    }
    ctx->pc = 0x2BD384u;
    {
        const bool branch_taken_0x2bd384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD384u;
            // 0x2bd388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd384) {
            ctx->pc = 0x2BD48Cu;
            goto label_2bd48c;
        }
    }
    ctx->pc = 0x2BD38Cu;
label_2bd38c:
    // 0x2bd38c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2bd390:
    // 0x2bd390: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bd390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bd394:
    // 0x2bd394: 0x2463ec90  addiu       $v1, $v1, -0x1370
    ctx->pc = 0x2bd394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962320));
label_2bd398:
    // 0x2bd398: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x2bd398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
label_2bd39c:
    // 0x2bd39c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bd39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bd3a0:
    // 0x2bd3a0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bd3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bd3a4:
    // 0x2bd3a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bd3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bd3a8:
    // 0x2bd3a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2bd3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2bd3ac:
    // 0x2bd3ac: 0x320f809  jalr        $t9
label_2bd3b0:
    if (ctx->pc == 0x2BD3B0u) {
        ctx->pc = 0x2BD3B4u;
        goto label_2bd3b4;
    }
    ctx->pc = 0x2BD3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD3B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD3B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3B4u; }
            if (ctx->pc != 0x2BD3B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD3B4u;
label_2bd3b4:
    // 0x2bd3b4: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x2bd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bd3b8:
    // 0x2bd3b8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2bd3bc:
    if (ctx->pc == 0x2BD3BCu) {
        ctx->pc = 0x2BD3C0u;
        goto label_2bd3c0;
    }
    ctx->pc = 0x2BD3B8u;
    {
        const bool branch_taken_0x2bd3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3b8) {
            ctx->pc = 0x2BD3F4u;
            goto label_2bd3f4;
        }
    }
    ctx->pc = 0x2BD3C0u;
label_2bd3c0:
    // 0x2bd3c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd3c4:
    // 0x2bd3c4: 0x24421ec8  addiu       $v0, $v0, 0x1EC8
    ctx->pc = 0x2bd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7880));
label_2bd3c8:
    // 0x2bd3c8: 0xc0b6100  jal         func_2D8400
label_2bd3cc:
    if (ctx->pc == 0x2BD3CCu) {
        ctx->pc = 0x2BD3CCu;
            // 0x2bd3cc: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2BD3D0u;
        goto label_2bd3d0;
    }
    ctx->pc = 0x2BD3C8u;
    SET_GPR_U32(ctx, 31, 0x2BD3D0u);
    ctx->pc = 0x2BD3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD3C8u;
            // 0x2bd3cc: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8400u;
    if (runtime->hasFunction(0x2D8400u)) {
        auto targetFn = runtime->lookupFunction(0x2D8400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3D0u; }
        if (ctx->pc != 0x2BD3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8400_0x2d8400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3D0u; }
        if (ctx->pc != 0x2BD3D0u) { return; }
    }
    ctx->pc = 0x2BD3D0u;
label_2bd3d0:
    // 0x2bd3d0: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bd3d4:
    // 0x2bd3d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2bd3d8:
    if (ctx->pc == 0x2BD3D8u) {
        ctx->pc = 0x2BD3DCu;
        goto label_2bd3dc;
    }
    ctx->pc = 0x2BD3D4u;
    {
        const bool branch_taken_0x2bd3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3d4) {
            ctx->pc = 0x2BD3F4u;
            goto label_2bd3f4;
        }
    }
    ctx->pc = 0x2BD3DCu;
label_2bd3dc:
    // 0x2bd3dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd3e0:
    // 0x2bd3e0: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x2bd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_2bd3e4:
    // 0x2bd3e4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bd3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bd3e8:
    // 0x2bd3e8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2bd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_2bd3ec:
    // 0x2bd3ec: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2bd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_2bd3f0:
    // 0x2bd3f0: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2bd3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_2bd3f4:
    // 0x2bd3f4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2bd3f8:
    if (ctx->pc == 0x2BD3F8u) {
        ctx->pc = 0x2BD3F8u;
            // 0x2bd3f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BD3FCu;
        goto label_2bd3fc;
    }
    ctx->pc = 0x2BD3F4u;
    {
        const bool branch_taken_0x2bd3f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3f4) {
            ctx->pc = 0x2BD3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD3F4u;
            // 0x2bd3f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD478u;
            goto label_2bd478;
        }
    }
    ctx->pc = 0x2BD3FCu;
label_2bd3fc:
    // 0x2bd3fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd400:
    // 0x2bd400: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bd404:
    // 0x2bd404: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2bd404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2bd408:
    // 0x2bd408: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2bd408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2bd40c:
    // 0x2bd40c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bd40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bd410:
    // 0x2bd410: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2bd410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2bd414:
    // 0x2bd414: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2bd418:
    if (ctx->pc == 0x2BD418u) {
        ctx->pc = 0x2BD418u;
            // 0x2bd418: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2BD41Cu;
        goto label_2bd41c;
    }
    ctx->pc = 0x2BD414u;
    {
        const bool branch_taken_0x2bd414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD414u;
            // 0x2bd418: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd414) {
            ctx->pc = 0x2BD450u;
            goto label_2bd450;
        }
    }
    ctx->pc = 0x2BD41Cu;
label_2bd41c:
    // 0x2bd41c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd420:
    // 0x2bd420: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2bd420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2bd424:
    // 0x2bd424: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bd424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bd428:
    // 0x2bd428: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2bd428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2bd42c:
    // 0x2bd42c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2bd430:
    if (ctx->pc == 0x2BD430u) {
        ctx->pc = 0x2BD434u;
        goto label_2bd434;
    }
    ctx->pc = 0x2BD42Cu;
    {
        const bool branch_taken_0x2bd42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd42c) {
            ctx->pc = 0x2BD450u;
            goto label_2bd450;
        }
    }
    ctx->pc = 0x2BD434u;
label_2bd434:
    // 0x2bd434: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bd438:
    if (ctx->pc == 0x2BD438u) {
        ctx->pc = 0x2BD438u;
            // 0x2bd438: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BD43Cu;
        goto label_2bd43c;
    }
    ctx->pc = 0x2BD434u;
    {
        const bool branch_taken_0x2bd434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd434) {
            ctx->pc = 0x2BD438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD434u;
            // 0x2bd438: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD450u;
            goto label_2bd450;
        }
    }
    ctx->pc = 0x2BD43Cu;
label_2bd43c:
    // 0x2bd43c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bd43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bd440:
    // 0x2bd440: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bd440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bd444:
    // 0x2bd444: 0x320f809  jalr        $t9
label_2bd448:
    if (ctx->pc == 0x2BD448u) {
        ctx->pc = 0x2BD448u;
            // 0x2bd448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD44Cu;
        goto label_2bd44c;
    }
    ctx->pc = 0x2BD444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD44Cu);
        ctx->pc = 0x2BD448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD444u;
            // 0x2bd448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD44Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD44Cu; }
            if (ctx->pc != 0x2BD44Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BD44Cu;
label_2bd44c:
    // 0x2bd44c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2bd44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2bd450:
    // 0x2bd450: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2bd454:
    if (ctx->pc == 0x2BD454u) {
        ctx->pc = 0x2BD458u;
        goto label_2bd458;
    }
    ctx->pc = 0x2BD450u;
    {
        const bool branch_taken_0x2bd450 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd450) {
            ctx->pc = 0x2BD474u;
            goto label_2bd474;
        }
    }
    ctx->pc = 0x2BD458u;
label_2bd458:
    // 0x2bd458: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd45c:
    // 0x2bd45c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2bd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2bd460:
    // 0x2bd460: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2bd464:
    if (ctx->pc == 0x2BD464u) {
        ctx->pc = 0x2BD464u;
            // 0x2bd464: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BD468u;
        goto label_2bd468;
    }
    ctx->pc = 0x2BD460u;
    {
        const bool branch_taken_0x2bd460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD460u;
            // 0x2bd464: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd460) {
            ctx->pc = 0x2BD474u;
            goto label_2bd474;
        }
    }
    ctx->pc = 0x2BD468u;
label_2bd468:
    // 0x2bd468: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd46c:
    // 0x2bd46c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bd470:
    // 0x2bd470: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bd470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bd474:
    // 0x2bd474: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bd474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bd478:
    // 0x2bd478: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bd47c:
    // 0x2bd47c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bd480:
    if (ctx->pc == 0x2BD480u) {
        ctx->pc = 0x2BD480u;
            // 0x2bd480: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD484u;
        goto label_2bd484;
    }
    ctx->pc = 0x2BD47Cu;
    {
        const bool branch_taken_0x2bd47c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd47c) {
            ctx->pc = 0x2BD480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD47Cu;
            // 0x2bd480: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD490u;
            goto label_2bd490;
        }
    }
    ctx->pc = 0x2BD484u;
label_2bd484:
    // 0x2bd484: 0xc0400a8  jal         func_1002A0
label_2bd488:
    if (ctx->pc == 0x2BD488u) {
        ctx->pc = 0x2BD488u;
            // 0x2bd488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD48Cu;
        goto label_2bd48c;
    }
    ctx->pc = 0x2BD484u;
    SET_GPR_U32(ctx, 31, 0x2BD48Cu);
    ctx->pc = 0x2BD488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD484u;
            // 0x2bd488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD48Cu; }
        if (ctx->pc != 0x2BD48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD48Cu; }
        if (ctx->pc != 0x2BD48Cu) { return; }
    }
    ctx->pc = 0x2BD48Cu;
label_2bd48c:
    // 0x2bd48c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bd48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd490:
    // 0x2bd490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bd490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bd494:
    // 0x2bd494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd498:
    // 0x2bd498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bd49c:
    // 0x2bd49c: 0x3e00008  jr          $ra
label_2bd4a0:
    if (ctx->pc == 0x2BD4A0u) {
        ctx->pc = 0x2BD4A0u;
            // 0x2bd4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BD4A4u;
        goto label_2bd4a4;
    }
    ctx->pc = 0x2BD49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD49Cu;
            // 0x2bd4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD4A4u;
label_2bd4a4:
    // 0x2bd4a4: 0x0  nop
    ctx->pc = 0x2bd4a4u;
    // NOP
label_2bd4a8:
    // 0x2bd4a8: 0x0  nop
    ctx->pc = 0x2bd4a8u;
    // NOP
label_2bd4ac:
    // 0x2bd4ac: 0x0  nop
    ctx->pc = 0x2bd4acu;
    // NOP
}
