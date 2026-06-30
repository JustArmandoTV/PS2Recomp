#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036B340
// Address: 0x36b340 - 0x36b440
void sub_0036B340_0x36b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B340_0x36b340");
#endif

    switch (ctx->pc) {
        case 0x36b340u: goto label_36b340;
        case 0x36b344u: goto label_36b344;
        case 0x36b348u: goto label_36b348;
        case 0x36b34cu: goto label_36b34c;
        case 0x36b350u: goto label_36b350;
        case 0x36b354u: goto label_36b354;
        case 0x36b358u: goto label_36b358;
        case 0x36b35cu: goto label_36b35c;
        case 0x36b360u: goto label_36b360;
        case 0x36b364u: goto label_36b364;
        case 0x36b368u: goto label_36b368;
        case 0x36b36cu: goto label_36b36c;
        case 0x36b370u: goto label_36b370;
        case 0x36b374u: goto label_36b374;
        case 0x36b378u: goto label_36b378;
        case 0x36b37cu: goto label_36b37c;
        case 0x36b380u: goto label_36b380;
        case 0x36b384u: goto label_36b384;
        case 0x36b388u: goto label_36b388;
        case 0x36b38cu: goto label_36b38c;
        case 0x36b390u: goto label_36b390;
        case 0x36b394u: goto label_36b394;
        case 0x36b398u: goto label_36b398;
        case 0x36b39cu: goto label_36b39c;
        case 0x36b3a0u: goto label_36b3a0;
        case 0x36b3a4u: goto label_36b3a4;
        case 0x36b3a8u: goto label_36b3a8;
        case 0x36b3acu: goto label_36b3ac;
        case 0x36b3b0u: goto label_36b3b0;
        case 0x36b3b4u: goto label_36b3b4;
        case 0x36b3b8u: goto label_36b3b8;
        case 0x36b3bcu: goto label_36b3bc;
        case 0x36b3c0u: goto label_36b3c0;
        case 0x36b3c4u: goto label_36b3c4;
        case 0x36b3c8u: goto label_36b3c8;
        case 0x36b3ccu: goto label_36b3cc;
        case 0x36b3d0u: goto label_36b3d0;
        case 0x36b3d4u: goto label_36b3d4;
        case 0x36b3d8u: goto label_36b3d8;
        case 0x36b3dcu: goto label_36b3dc;
        case 0x36b3e0u: goto label_36b3e0;
        case 0x36b3e4u: goto label_36b3e4;
        case 0x36b3e8u: goto label_36b3e8;
        case 0x36b3ecu: goto label_36b3ec;
        case 0x36b3f0u: goto label_36b3f0;
        case 0x36b3f4u: goto label_36b3f4;
        case 0x36b3f8u: goto label_36b3f8;
        case 0x36b3fcu: goto label_36b3fc;
        case 0x36b400u: goto label_36b400;
        case 0x36b404u: goto label_36b404;
        case 0x36b408u: goto label_36b408;
        case 0x36b40cu: goto label_36b40c;
        case 0x36b410u: goto label_36b410;
        case 0x36b414u: goto label_36b414;
        case 0x36b418u: goto label_36b418;
        case 0x36b41cu: goto label_36b41c;
        case 0x36b420u: goto label_36b420;
        case 0x36b424u: goto label_36b424;
        case 0x36b428u: goto label_36b428;
        case 0x36b42cu: goto label_36b42c;
        case 0x36b430u: goto label_36b430;
        case 0x36b434u: goto label_36b434;
        case 0x36b438u: goto label_36b438;
        case 0x36b43cu: goto label_36b43c;
        default: break;
    }

    ctx->pc = 0x36b340u;

label_36b340:
    // 0x36b340: 0x3e00008  jr          $ra
label_36b344:
    if (ctx->pc == 0x36B344u) {
        ctx->pc = 0x36B344u;
            // 0x36b344: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x36B348u;
        goto label_36b348;
    }
    ctx->pc = 0x36B340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B340u;
            // 0x36b344: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36B348u;
label_36b348:
    // 0x36b348: 0x0  nop
    ctx->pc = 0x36b348u;
    // NOP
label_36b34c:
    // 0x36b34c: 0x0  nop
    ctx->pc = 0x36b34cu;
    // NOP
label_36b350:
    // 0x36b350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36b354:
    // 0x36b354: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36b358:
    // 0x36b358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36b358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36b35c:
    // 0x36b35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36b360:
    // 0x36b360: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x36b360u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_36b364:
    // 0x36b364: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_36b368:
    if (ctx->pc == 0x36B368u) {
        ctx->pc = 0x36B368u;
            // 0x36b368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B36Cu;
        goto label_36b36c;
    }
    ctx->pc = 0x36B364u;
    {
        const bool branch_taken_0x36b364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B364u;
            // 0x36b368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b364) {
            ctx->pc = 0x36B398u;
            goto label_36b398;
        }
    }
    ctx->pc = 0x36B36Cu;
label_36b36c:
    // 0x36b36c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36b370:
    // 0x36b370: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_36b374:
    if (ctx->pc == 0x36B374u) {
        ctx->pc = 0x36B374u;
            // 0x36b374: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x36B378u;
        goto label_36b378;
    }
    ctx->pc = 0x36B370u;
    {
        const bool branch_taken_0x36b370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b370) {
            ctx->pc = 0x36B374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B370u;
            // 0x36b374: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B38Cu;
            goto label_36b38c;
        }
    }
    ctx->pc = 0x36B378u;
label_36b378:
    // 0x36b378: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36b378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36b37c:
    // 0x36b37c: 0x50a3002c  beql        $a1, $v1, . + 4 + (0x2C << 2)
label_36b380:
    if (ctx->pc == 0x36B380u) {
        ctx->pc = 0x36B380u;
            // 0x36b380: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36B384u;
        goto label_36b384;
    }
    ctx->pc = 0x36B37Cu;
    {
        const bool branch_taken_0x36b37c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b37c) {
            ctx->pc = 0x36B380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B37Cu;
            // 0x36b380: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B430u;
            goto label_36b430;
        }
    }
    ctx->pc = 0x36B384u;
label_36b384:
    // 0x36b384: 0x10000029  b           . + 4 + (0x29 << 2)
label_36b388:
    if (ctx->pc == 0x36B388u) {
        ctx->pc = 0x36B38Cu;
        goto label_36b38c;
    }
    ctx->pc = 0x36B384u;
    {
        const bool branch_taken_0x36b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b384) {
            ctx->pc = 0x36B42Cu;
            goto label_36b42c;
        }
    }
    ctx->pc = 0x36B38Cu;
label_36b38c:
    // 0x36b38c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x36b38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_36b390:
    // 0x36b390: 0x320f809  jalr        $t9
label_36b394:
    if (ctx->pc == 0x36B394u) {
        ctx->pc = 0x36B398u;
        goto label_36b398;
    }
    ctx->pc = 0x36B390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B398u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B398u; }
            if (ctx->pc != 0x36B398u) { return; }
        }
        }
    }
    ctx->pc = 0x36B398u;
label_36b398:
    // 0x36b398: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x36b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_36b39c:
    // 0x36b39c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_36b3a0:
    if (ctx->pc == 0x36B3A0u) {
        ctx->pc = 0x36B3A4u;
        goto label_36b3a4;
    }
    ctx->pc = 0x36B39Cu;
    {
        const bool branch_taken_0x36b39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b39c) {
            ctx->pc = 0x36B42Cu;
            goto label_36b42c;
        }
    }
    ctx->pc = 0x36B3A4u;
label_36b3a4:
    // 0x36b3a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36b3a8:
    // 0x36b3a8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x36b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36b3ac:
    // 0x36b3ac: 0x8c430cb4  lw          $v1, 0xCB4($v0)
    ctx->pc = 0x36b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_36b3b0:
    // 0x36b3b0: 0x8c420cb8  lw          $v0, 0xCB8($v0)
    ctx->pc = 0x36b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3256)));
label_36b3b4:
    // 0x36b3b4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_36b3b8:
    if (ctx->pc == 0x36B3B8u) {
        ctx->pc = 0x36B3B8u;
            // 0x36b3b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B3BCu;
        goto label_36b3bc;
    }
    ctx->pc = 0x36B3B4u;
    {
        const bool branch_taken_0x36b3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36b3b4) {
            ctx->pc = 0x36B3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B3B4u;
            // 0x36b3b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B3BCu;
            goto label_36b3bc;
        }
    }
    ctx->pc = 0x36B3BCu;
label_36b3bc:
    // 0x36b3bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x36b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_36b3c0:
    // 0x36b3c0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_36b3c4:
    if (ctx->pc == 0x36B3C4u) {
        ctx->pc = 0x36B3C4u;
            // 0x36b3c4: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x36B3C8u;
        goto label_36b3c8;
    }
    ctx->pc = 0x36B3C0u;
    {
        const bool branch_taken_0x36b3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36b3c0) {
            ctx->pc = 0x36B3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B3C0u;
            // 0x36b3c4: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B3DCu;
            goto label_36b3dc;
        }
    }
    ctx->pc = 0x36B3C8u;
label_36b3c8:
    // 0x36b3c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x36b3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36b3cc:
    // 0x36b3cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x36b3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_36b3d0:
    // 0x36b3d0: 0x320f809  jalr        $t9
label_36b3d4:
    if (ctx->pc == 0x36B3D4u) {
        ctx->pc = 0x36B3D4u;
            // 0x36b3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B3D8u;
        goto label_36b3d8;
    }
    ctx->pc = 0x36B3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B3D8u);
        ctx->pc = 0x36B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B3D0u;
            // 0x36b3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B3D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B3D8u; }
            if (ctx->pc != 0x36B3D8u) { return; }
        }
        }
    }
    ctx->pc = 0x36B3D8u;
label_36b3d8:
    // 0x36b3d8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x36b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_36b3dc:
    // 0x36b3dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x36b3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b3e0:
    // 0x36b3e0: 0xc0dacd0  jal         func_36B340
label_36b3e4:
    if (ctx->pc == 0x36B3E4u) {
        ctx->pc = 0x36B3E4u;
            // 0x36b3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B3E8u;
        goto label_36b3e8;
    }
    ctx->pc = 0x36B3E0u;
    SET_GPR_U32(ctx, 31, 0x36B3E8u);
    ctx->pc = 0x36B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B3E0u;
            // 0x36b3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36B340u;
    goto label_36b340;
    ctx->pc = 0x36B3E8u;
label_36b3e8:
    // 0x36b3e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b3ec:
    // 0x36b3ec: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_36b3f0:
    if (ctx->pc == 0x36B3F0u) {
        ctx->pc = 0x36B3F0u;
            // 0x36b3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B3F4u;
        goto label_36b3f4;
    }
    ctx->pc = 0x36B3ECu;
    {
        const bool branch_taken_0x36b3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b3ec) {
            ctx->pc = 0x36B3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B3ECu;
            // 0x36b3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B41Cu;
            goto label_36b41c;
        }
    }
    ctx->pc = 0x36B3F4u;
label_36b3f4:
    // 0x36b3f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_36b3f8:
    if (ctx->pc == 0x36B3F8u) {
        ctx->pc = 0x36B3F8u;
            // 0x36b3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B3FCu;
        goto label_36b3fc;
    }
    ctx->pc = 0x36B3F4u;
    {
        const bool branch_taken_0x36b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b3f4) {
            ctx->pc = 0x36B3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36B3F4u;
            // 0x36b3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36B404u;
            goto label_36b404;
        }
    }
    ctx->pc = 0x36B3FCu;
label_36b3fc:
    // 0x36b3fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_36b400:
    if (ctx->pc == 0x36B400u) {
        ctx->pc = 0x36B404u;
        goto label_36b404;
    }
    ctx->pc = 0x36B3FCu;
    {
        const bool branch_taken_0x36b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b3fc) {
            ctx->pc = 0x36B42Cu;
            goto label_36b42c;
        }
    }
    ctx->pc = 0x36B404u;
label_36b404:
    // 0x36b404: 0xc0daf04  jal         func_36BC10
label_36b408:
    if (ctx->pc == 0x36B408u) {
        ctx->pc = 0x36B40Cu;
        goto label_36b40c;
    }
    ctx->pc = 0x36B404u;
    SET_GPR_U32(ctx, 31, 0x36B40Cu);
    ctx->pc = 0x36BC10u;
    if (runtime->hasFunction(0x36BC10u)) {
        auto targetFn = runtime->lookupFunction(0x36BC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B40Cu; }
        if (ctx->pc != 0x36B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BC10_0x36bc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B40Cu; }
        if (ctx->pc != 0x36B40Cu) { return; }
    }
    ctx->pc = 0x36B40Cu;
label_36b40c:
    // 0x36b40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b410:
    // 0x36b410: 0xc0daf00  jal         func_36BC00
label_36b414:
    if (ctx->pc == 0x36B414u) {
        ctx->pc = 0x36B414u;
            // 0x36b414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36B418u;
        goto label_36b418;
    }
    ctx->pc = 0x36B410u;
    SET_GPR_U32(ctx, 31, 0x36B418u);
    ctx->pc = 0x36B414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B410u;
            // 0x36b414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BC00u;
    if (runtime->hasFunction(0x36BC00u)) {
        auto targetFn = runtime->lookupFunction(0x36BC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B418u; }
        if (ctx->pc != 0x36B418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BC00_0x36bc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B418u; }
        if (ctx->pc != 0x36B418u) { return; }
    }
    ctx->pc = 0x36B418u;
label_36b418:
    // 0x36b418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b41c:
    // 0x36b41c: 0xc0daef8  jal         func_36BBE0
label_36b420:
    if (ctx->pc == 0x36B420u) {
        ctx->pc = 0x36B424u;
        goto label_36b424;
    }
    ctx->pc = 0x36B41Cu;
    SET_GPR_U32(ctx, 31, 0x36B424u);
    ctx->pc = 0x36BBE0u;
    if (runtime->hasFunction(0x36BBE0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B424u; }
        if (ctx->pc != 0x36B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBE0_0x36bbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B424u; }
        if (ctx->pc != 0x36B424u) { return; }
    }
    ctx->pc = 0x36B424u;
label_36b424:
    // 0x36b424: 0xc0dad10  jal         func_36B440
label_36b428:
    if (ctx->pc == 0x36B428u) {
        ctx->pc = 0x36B428u;
            // 0x36b428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B42Cu;
        goto label_36b42c;
    }
    ctx->pc = 0x36B424u;
    SET_GPR_U32(ctx, 31, 0x36B42Cu);
    ctx->pc = 0x36B428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B424u;
            // 0x36b428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36B440u;
    if (runtime->hasFunction(0x36B440u)) {
        auto targetFn = runtime->lookupFunction(0x36B440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B42Cu; }
        if (ctx->pc != 0x36B42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036B440_0x36b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B42Cu; }
        if (ctx->pc != 0x36B42Cu) { return; }
    }
    ctx->pc = 0x36B42Cu;
label_36b42c:
    // 0x36b42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36b430:
    // 0x36b430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b434:
    // 0x36b434: 0x3e00008  jr          $ra
label_36b438:
    if (ctx->pc == 0x36B438u) {
        ctx->pc = 0x36B438u;
            // 0x36b438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36B43Cu;
        goto label_36b43c;
    }
    ctx->pc = 0x36B434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B434u;
            // 0x36b438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36B43Cu;
label_36b43c:
    // 0x36b43c: 0x0  nop
    ctx->pc = 0x36b43cu;
    // NOP
}
