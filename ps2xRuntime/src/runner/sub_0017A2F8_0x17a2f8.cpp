#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A2F8
// Address: 0x17a2f8 - 0x17a4b8
void sub_0017A2F8_0x17a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A2F8_0x17a2f8");
#endif

    switch (ctx->pc) {
        case 0x17a2f8u: goto label_17a2f8;
        case 0x17a2fcu: goto label_17a2fc;
        case 0x17a300u: goto label_17a300;
        case 0x17a304u: goto label_17a304;
        case 0x17a308u: goto label_17a308;
        case 0x17a30cu: goto label_17a30c;
        case 0x17a310u: goto label_17a310;
        case 0x17a314u: goto label_17a314;
        case 0x17a318u: goto label_17a318;
        case 0x17a31cu: goto label_17a31c;
        case 0x17a320u: goto label_17a320;
        case 0x17a324u: goto label_17a324;
        case 0x17a328u: goto label_17a328;
        case 0x17a32cu: goto label_17a32c;
        case 0x17a330u: goto label_17a330;
        case 0x17a334u: goto label_17a334;
        case 0x17a338u: goto label_17a338;
        case 0x17a33cu: goto label_17a33c;
        case 0x17a340u: goto label_17a340;
        case 0x17a344u: goto label_17a344;
        case 0x17a348u: goto label_17a348;
        case 0x17a34cu: goto label_17a34c;
        case 0x17a350u: goto label_17a350;
        case 0x17a354u: goto label_17a354;
        case 0x17a358u: goto label_17a358;
        case 0x17a35cu: goto label_17a35c;
        case 0x17a360u: goto label_17a360;
        case 0x17a364u: goto label_17a364;
        case 0x17a368u: goto label_17a368;
        case 0x17a36cu: goto label_17a36c;
        case 0x17a370u: goto label_17a370;
        case 0x17a374u: goto label_17a374;
        case 0x17a378u: goto label_17a378;
        case 0x17a37cu: goto label_17a37c;
        case 0x17a380u: goto label_17a380;
        case 0x17a384u: goto label_17a384;
        case 0x17a388u: goto label_17a388;
        case 0x17a38cu: goto label_17a38c;
        case 0x17a390u: goto label_17a390;
        case 0x17a394u: goto label_17a394;
        case 0x17a398u: goto label_17a398;
        case 0x17a39cu: goto label_17a39c;
        case 0x17a3a0u: goto label_17a3a0;
        case 0x17a3a4u: goto label_17a3a4;
        case 0x17a3a8u: goto label_17a3a8;
        case 0x17a3acu: goto label_17a3ac;
        case 0x17a3b0u: goto label_17a3b0;
        case 0x17a3b4u: goto label_17a3b4;
        case 0x17a3b8u: goto label_17a3b8;
        case 0x17a3bcu: goto label_17a3bc;
        case 0x17a3c0u: goto label_17a3c0;
        case 0x17a3c4u: goto label_17a3c4;
        case 0x17a3c8u: goto label_17a3c8;
        case 0x17a3ccu: goto label_17a3cc;
        case 0x17a3d0u: goto label_17a3d0;
        case 0x17a3d4u: goto label_17a3d4;
        case 0x17a3d8u: goto label_17a3d8;
        case 0x17a3dcu: goto label_17a3dc;
        case 0x17a3e0u: goto label_17a3e0;
        case 0x17a3e4u: goto label_17a3e4;
        case 0x17a3e8u: goto label_17a3e8;
        case 0x17a3ecu: goto label_17a3ec;
        case 0x17a3f0u: goto label_17a3f0;
        case 0x17a3f4u: goto label_17a3f4;
        case 0x17a3f8u: goto label_17a3f8;
        case 0x17a3fcu: goto label_17a3fc;
        case 0x17a400u: goto label_17a400;
        case 0x17a404u: goto label_17a404;
        case 0x17a408u: goto label_17a408;
        case 0x17a40cu: goto label_17a40c;
        case 0x17a410u: goto label_17a410;
        case 0x17a414u: goto label_17a414;
        case 0x17a418u: goto label_17a418;
        case 0x17a41cu: goto label_17a41c;
        case 0x17a420u: goto label_17a420;
        case 0x17a424u: goto label_17a424;
        case 0x17a428u: goto label_17a428;
        case 0x17a42cu: goto label_17a42c;
        case 0x17a430u: goto label_17a430;
        case 0x17a434u: goto label_17a434;
        case 0x17a438u: goto label_17a438;
        case 0x17a43cu: goto label_17a43c;
        case 0x17a440u: goto label_17a440;
        case 0x17a444u: goto label_17a444;
        case 0x17a448u: goto label_17a448;
        case 0x17a44cu: goto label_17a44c;
        case 0x17a450u: goto label_17a450;
        case 0x17a454u: goto label_17a454;
        case 0x17a458u: goto label_17a458;
        case 0x17a45cu: goto label_17a45c;
        case 0x17a460u: goto label_17a460;
        case 0x17a464u: goto label_17a464;
        case 0x17a468u: goto label_17a468;
        case 0x17a46cu: goto label_17a46c;
        case 0x17a470u: goto label_17a470;
        case 0x17a474u: goto label_17a474;
        case 0x17a478u: goto label_17a478;
        case 0x17a47cu: goto label_17a47c;
        case 0x17a480u: goto label_17a480;
        case 0x17a484u: goto label_17a484;
        case 0x17a488u: goto label_17a488;
        case 0x17a48cu: goto label_17a48c;
        case 0x17a490u: goto label_17a490;
        case 0x17a494u: goto label_17a494;
        case 0x17a498u: goto label_17a498;
        case 0x17a49cu: goto label_17a49c;
        case 0x17a4a0u: goto label_17a4a0;
        case 0x17a4a4u: goto label_17a4a4;
        case 0x17a4a8u: goto label_17a4a8;
        case 0x17a4acu: goto label_17a4ac;
        case 0x17a4b0u: goto label_17a4b0;
        case 0x17a4b4u: goto label_17a4b4;
        default: break;
    }

    ctx->pc = 0x17a2f8u;

label_17a2f8:
    // 0x17a2f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a2fc:
    // 0x17a2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17a300:
    // 0x17a300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a304:
    // 0x17a304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17a308:
    // 0x17a308: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_17a30c:
    if (ctx->pc == 0x17A30Cu) {
        ctx->pc = 0x17A30Cu;
            // 0x17a30c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x17A310u;
        goto label_17a310;
    }
    ctx->pc = 0x17A308u;
    {
        const bool branch_taken_0x17a308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A308u;
            // 0x17a30c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a308) {
            ctx->pc = 0x17A328u;
            goto label_17a328;
        }
    }
    ctx->pc = 0x17A310u;
label_17a310:
    // 0x17a310: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17a310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17a314:
    // 0x17a314: 0xc05e0a6  jal         func_178298
label_17a318:
    if (ctx->pc == 0x17A318u) {
        ctx->pc = 0x17A318u;
            // 0x17a318: 0x248457a8  addiu       $a0, $a0, 0x57A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22440));
        ctx->pc = 0x17A31Cu;
        goto label_17a31c;
    }
    ctx->pc = 0x17A314u;
    SET_GPR_U32(ctx, 31, 0x17A31Cu);
    ctx->pc = 0x17A318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A314u;
            // 0x17a318: 0x248457a8  addiu       $a0, $a0, 0x57A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A31Cu; }
        if (ctx->pc != 0x17A31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A31Cu; }
        if (ctx->pc != 0x17A31Cu) { return; }
    }
    ctx->pc = 0x17A31Cu;
label_17a31c:
    // 0x17a31c: 0x10000019  b           . + 4 + (0x19 << 2)
label_17a320:
    if (ctx->pc == 0x17A320u) {
        ctx->pc = 0x17A320u;
            // 0x17a320: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x17A324u;
        goto label_17a324;
    }
    ctx->pc = 0x17A31Cu;
    {
        const bool branch_taken_0x17a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A31Cu;
            // 0x17a320: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a31c) {
            ctx->pc = 0x17A384u;
            goto label_17a384;
        }
    }
    ctx->pc = 0x17A324u;
label_17a324:
    // 0x17a324: 0x0  nop
    ctx->pc = 0x17a324u;
    // NOP
label_17a328:
    // 0x17a328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17a32c:
    // 0x17a32c: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x17a32cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
label_17a330:
    // 0x17a330: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x17a330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_17a334:
    // 0x17a334: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x17a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_17a338:
    // 0x17a338: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_17a33c:
    if (ctx->pc == 0x17A33Cu) {
        ctx->pc = 0x17A33Cu;
            // 0x17a33c: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->pc = 0x17A340u;
        goto label_17a340;
    }
    ctx->pc = 0x17A338u;
    {
        const bool branch_taken_0x17a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A338u;
            // 0x17a33c: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a338) {
            ctx->pc = 0x17A380u;
            goto label_17a380;
        }
    }
    ctx->pc = 0x17A340u;
label_17a340:
    // 0x17a340: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17a340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17a344:
    // 0x17a344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a348:
    // 0x17a348: 0x40f809  jalr        $v0
label_17a34c:
    if (ctx->pc == 0x17A34Cu) {
        ctx->pc = 0x17A34Cu;
            // 0x17a34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A350u;
        goto label_17a350;
    }
    ctx->pc = 0x17A348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A350u);
        ctx->pc = 0x17A34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A348u;
            // 0x17a34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A350u; }
            if (ctx->pc != 0x17A350u) { return; }
        }
        }
    }
    ctx->pc = 0x17A350u;
label_17a350:
    // 0x17a350: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17a354:
    // 0x17a354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a358:
    // 0x17a358: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17a35c:
    // 0x17a35c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x17a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_17a360:
    // 0x17a360: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x17a360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_17a364:
    // 0x17a364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a368:
    // 0x17a368: 0x40f809  jalr        $v0
label_17a36c:
    if (ctx->pc == 0x17A36Cu) {
        ctx->pc = 0x17A36Cu;
            // 0x17a36c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A370u;
        goto label_17a370;
    }
    ctx->pc = 0x17A368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A370u);
        ctx->pc = 0x17A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A368u;
            // 0x17a36c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A370u; }
            if (ctx->pc != 0x17A370u) { return; }
        }
        }
    }
    ctx->pc = 0x17A370u;
label_17a370:
    // 0x17a370: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x17a370u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_17a374:
    // 0x17a374: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17a378:
    // 0x17a378: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_17a37c:
    // 0x17a37c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x17a37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_17a380:
    // 0x17a380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a384:
    // 0x17a384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a388:
    // 0x17a388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17a38c:
    // 0x17a38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a390:
    // 0x17a390: 0x3e00008  jr          $ra
label_17a394:
    if (ctx->pc == 0x17A394u) {
        ctx->pc = 0x17A394u;
            // 0x17a394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17A398u;
        goto label_17a398;
    }
    ctx->pc = 0x17A390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A390u;
            // 0x17a394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A398u;
label_17a398:
    // 0x17a398: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x17a398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_17a39c:
    // 0x17a39c: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x17a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_17a3a0:
    // 0x17a3a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a3a4:
    // 0x17a3a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a3a8:
    // 0x17a3a8: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x17a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_17a3ac:
    // 0x17a3ac: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x17a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_17a3b0:
    // 0x17a3b0: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x17a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_17a3b4:
    // 0x17a3b4: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x17a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_17a3b8:
    // 0x17a3b8: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x17a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_17a3bc:
    // 0x17a3bc: 0xc05e158  jal         func_178560
label_17a3c0:
    if (ctx->pc == 0x17A3C0u) {
        ctx->pc = 0x17A3C0u;
            // 0x17a3c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A3C4u;
        goto label_17a3c4;
    }
    ctx->pc = 0x17A3BCu;
    SET_GPR_U32(ctx, 31, 0x17A3C4u);
    ctx->pc = 0x17A3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3BCu;
            // 0x17a3c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3C4u; }
        if (ctx->pc != 0x17A3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3C4u; }
        if (ctx->pc != 0x17A3C4u) { return; }
    }
    ctx->pc = 0x17A3C4u;
label_17a3c4:
    // 0x17a3c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a3c8:
    // 0x17a3c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a3cc:
    // 0x17a3cc: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x17a3ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_17a3d0:
    // 0x17a3d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a3d4:
    // 0x17a3d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a3d8:
    // 0x17a3d8: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_17a3dc:
    if (ctx->pc == 0x17A3DCu) {
        ctx->pc = 0x17A3DCu;
            // 0x17a3dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A3E0u;
        goto label_17a3e0;
    }
    ctx->pc = 0x17A3D8u;
    {
        const bool branch_taken_0x17a3d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3D8u;
            // 0x17a3dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3d8) {
            ctx->pc = 0x17A438u;
            goto label_17a438;
        }
    }
    ctx->pc = 0x17A3E0u;
label_17a3e0:
    // 0x17a3e0: 0xc05e2b4  jal         func_178AD0
label_17a3e4:
    if (ctx->pc == 0x17A3E4u) {
        ctx->pc = 0x17A3E8u;
        goto label_17a3e8;
    }
    ctx->pc = 0x17A3E0u;
    SET_GPR_U32(ctx, 31, 0x17A3E8u);
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3E8u; }
        if (ctx->pc != 0x17A3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3E8u; }
        if (ctx->pc != 0x17A3E8u) { return; }
    }
    ctx->pc = 0x17A3E8u;
label_17a3e8:
    // 0x17a3e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a3ec:
    // 0x17a3ec: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x17a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_17a3f0:
    // 0x17a3f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a3f4:
    // 0x17a3f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17a3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a3f8:
    // 0x17a3f8: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x17a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_17a3fc:
    // 0x17a3fc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_17a400:
    if (ctx->pc == 0x17A400u) {
        ctx->pc = 0x17A400u;
            // 0x17a400: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A404u;
        goto label_17a404;
    }
    ctx->pc = 0x17A3FCu;
    {
        const bool branch_taken_0x17a3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3FCu;
            // 0x17a400: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3fc) {
            ctx->pc = 0x17A438u;
            goto label_17a438;
        }
    }
    ctx->pc = 0x17A404u;
label_17a404:
    // 0x17a404: 0x60f809  jalr        $v1
label_17a408:
    if (ctx->pc == 0x17A408u) {
        ctx->pc = 0x17A40Cu;
        goto label_17a40c;
    }
    ctx->pc = 0x17A404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17A40Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A40Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A40Cu; }
            if (ctx->pc != 0x17A40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17A40Cu;
label_17a40c:
    // 0x17a40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a410:
    // 0x17a410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a414:
    // 0x17a414: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x17a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_17a418:
    // 0x17a418: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17a418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a41c:
    // 0x17a41c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17a41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a420:
    // 0x17a420: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x17a420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_17a424:
    // 0x17a424: 0x40f809  jalr        $v0
label_17a428:
    if (ctx->pc == 0x17A428u) {
        ctx->pc = 0x17A428u;
            // 0x17a428: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x17A42Cu;
        goto label_17a42c;
    }
    ctx->pc = 0x17A424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A42Cu);
        ctx->pc = 0x17A428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A424u;
            // 0x17a428: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A42Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A42Cu; }
            if (ctx->pc != 0x17A42Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17A42Cu;
label_17a42c:
    // 0x17a42c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17a430:
    // 0x17a430: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_17a434:
    // 0x17a434: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x17a434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_17a438:
    // 0x17a438: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x17a438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_17a43c:
    // 0x17a43c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x17a43cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_17a440:
    // 0x17a440: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x17a440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_17a444:
    // 0x17a444: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x17a444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_17a448:
    // 0x17a448: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x17a448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_17a44c:
    // 0x17a44c: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x17a44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_17a450:
    // 0x17a450: 0x3e00008  jr          $ra
label_17a454:
    if (ctx->pc == 0x17A454u) {
        ctx->pc = 0x17A454u;
            // 0x17a454: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x17A458u;
        goto label_17a458;
    }
    ctx->pc = 0x17A450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A450u;
            // 0x17a454: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A458u;
label_17a458:
    // 0x17a458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17a45c:
    // 0x17a45c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17a45cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a460:
    // 0x17a460: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_17a464:
    if (ctx->pc == 0x17A464u) {
        ctx->pc = 0x17A464u;
            // 0x17a464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17A468u;
        goto label_17a468;
    }
    ctx->pc = 0x17A460u;
    {
        const bool branch_taken_0x17a460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A460u;
            // 0x17a464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a460) {
            ctx->pc = 0x17A480u;
            goto label_17a480;
        }
    }
    ctx->pc = 0x17A468u;
label_17a468:
    // 0x17a468: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17a468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17a46c:
    // 0x17a46c: 0xc05e0a6  jal         func_178298
label_17a470:
    if (ctx->pc == 0x17A470u) {
        ctx->pc = 0x17A470u;
            // 0x17a470: 0x248457d8  addiu       $a0, $a0, 0x57D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22488));
        ctx->pc = 0x17A474u;
        goto label_17a474;
    }
    ctx->pc = 0x17A46Cu;
    SET_GPR_U32(ctx, 31, 0x17A474u);
    ctx->pc = 0x17A470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A46Cu;
            // 0x17a470: 0x248457d8  addiu       $a0, $a0, 0x57D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A474u; }
        if (ctx->pc != 0x17A474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A474u; }
        if (ctx->pc != 0x17A474u) { return; }
    }
    ctx->pc = 0x17A474u;
label_17a474:
    // 0x17a474: 0x1000000c  b           . + 4 + (0xC << 2)
label_17a478:
    if (ctx->pc == 0x17A478u) {
        ctx->pc = 0x17A478u;
            // 0x17a478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A47Cu;
        goto label_17a47c;
    }
    ctx->pc = 0x17A474u;
    {
        const bool branch_taken_0x17a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A474u;
            // 0x17a478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a474) {
            ctx->pc = 0x17A4A8u;
            goto label_17a4a8;
        }
    }
    ctx->pc = 0x17A47Cu;
label_17a47c:
    // 0x17a47c: 0x0  nop
    ctx->pc = 0x17a47cu;
    // NOP
label_17a480:
    // 0x17a480: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17a484:
    // 0x17a484: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x17a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_17a488:
    // 0x17a488: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17a48c:
    if (ctx->pc == 0x17A48Cu) {
        ctx->pc = 0x17A48Cu;
            // 0x17a48c: 0x2405012b  addiu       $a1, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->pc = 0x17A490u;
        goto label_17a490;
    }
    ctx->pc = 0x17A488u;
    {
        const bool branch_taken_0x17a488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A488u;
            // 0x17a48c: 0x2405012b  addiu       $a1, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a488) {
            ctx->pc = 0x17A4A4u;
            goto label_17a4a4;
        }
    }
    ctx->pc = 0x17A490u;
label_17a490:
    // 0x17a490: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17a490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17a494:
    // 0x17a494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a498:
    // 0x17a498: 0x40f809  jalr        $v0
label_17a49c:
    if (ctx->pc == 0x17A49Cu) {
        ctx->pc = 0x17A49Cu;
            // 0x17a49c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A4A0u;
        goto label_17a4a0;
    }
    ctx->pc = 0x17A498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A4A0u);
        ctx->pc = 0x17A49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A498u;
            // 0x17a49c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A4A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A4A0u; }
            if (ctx->pc != 0x17A4A0u) { return; }
        }
        }
    }
    ctx->pc = 0x17A4A0u;
label_17a4a0:
    // 0x17a4a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17a4a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a4a4:
    // 0x17a4a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17a4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17a4a8:
    // 0x17a4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a4ac:
    // 0x17a4ac: 0x3e00008  jr          $ra
label_17a4b0:
    if (ctx->pc == 0x17A4B0u) {
        ctx->pc = 0x17A4B0u;
            // 0x17a4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17A4B4u;
        goto label_17a4b4;
    }
    ctx->pc = 0x17A4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4ACu;
            // 0x17a4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A4B4u;
label_17a4b4:
    // 0x17a4b4: 0x0  nop
    ctx->pc = 0x17a4b4u;
    // NOP
}
