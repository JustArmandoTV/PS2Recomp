#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A300
// Address: 0x23a300 - 0x23a410
void sub_0023A300_0x23a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A300_0x23a300");
#endif

    switch (ctx->pc) {
        case 0x23a300u: goto label_23a300;
        case 0x23a304u: goto label_23a304;
        case 0x23a308u: goto label_23a308;
        case 0x23a30cu: goto label_23a30c;
        case 0x23a310u: goto label_23a310;
        case 0x23a314u: goto label_23a314;
        case 0x23a318u: goto label_23a318;
        case 0x23a31cu: goto label_23a31c;
        case 0x23a320u: goto label_23a320;
        case 0x23a324u: goto label_23a324;
        case 0x23a328u: goto label_23a328;
        case 0x23a32cu: goto label_23a32c;
        case 0x23a330u: goto label_23a330;
        case 0x23a334u: goto label_23a334;
        case 0x23a338u: goto label_23a338;
        case 0x23a33cu: goto label_23a33c;
        case 0x23a340u: goto label_23a340;
        case 0x23a344u: goto label_23a344;
        case 0x23a348u: goto label_23a348;
        case 0x23a34cu: goto label_23a34c;
        case 0x23a350u: goto label_23a350;
        case 0x23a354u: goto label_23a354;
        case 0x23a358u: goto label_23a358;
        case 0x23a35cu: goto label_23a35c;
        case 0x23a360u: goto label_23a360;
        case 0x23a364u: goto label_23a364;
        case 0x23a368u: goto label_23a368;
        case 0x23a36cu: goto label_23a36c;
        case 0x23a370u: goto label_23a370;
        case 0x23a374u: goto label_23a374;
        case 0x23a378u: goto label_23a378;
        case 0x23a37cu: goto label_23a37c;
        case 0x23a380u: goto label_23a380;
        case 0x23a384u: goto label_23a384;
        case 0x23a388u: goto label_23a388;
        case 0x23a38cu: goto label_23a38c;
        case 0x23a390u: goto label_23a390;
        case 0x23a394u: goto label_23a394;
        case 0x23a398u: goto label_23a398;
        case 0x23a39cu: goto label_23a39c;
        case 0x23a3a0u: goto label_23a3a0;
        case 0x23a3a4u: goto label_23a3a4;
        case 0x23a3a8u: goto label_23a3a8;
        case 0x23a3acu: goto label_23a3ac;
        case 0x23a3b0u: goto label_23a3b0;
        case 0x23a3b4u: goto label_23a3b4;
        case 0x23a3b8u: goto label_23a3b8;
        case 0x23a3bcu: goto label_23a3bc;
        case 0x23a3c0u: goto label_23a3c0;
        case 0x23a3c4u: goto label_23a3c4;
        case 0x23a3c8u: goto label_23a3c8;
        case 0x23a3ccu: goto label_23a3cc;
        case 0x23a3d0u: goto label_23a3d0;
        case 0x23a3d4u: goto label_23a3d4;
        case 0x23a3d8u: goto label_23a3d8;
        case 0x23a3dcu: goto label_23a3dc;
        case 0x23a3e0u: goto label_23a3e0;
        case 0x23a3e4u: goto label_23a3e4;
        case 0x23a3e8u: goto label_23a3e8;
        case 0x23a3ecu: goto label_23a3ec;
        case 0x23a3f0u: goto label_23a3f0;
        case 0x23a3f4u: goto label_23a3f4;
        case 0x23a3f8u: goto label_23a3f8;
        case 0x23a3fcu: goto label_23a3fc;
        case 0x23a400u: goto label_23a400;
        case 0x23a404u: goto label_23a404;
        case 0x23a408u: goto label_23a408;
        case 0x23a40cu: goto label_23a40c;
        default: break;
    }

    ctx->pc = 0x23a300u;

label_23a300:
    // 0x23a300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23a304:
    // 0x23a304: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23a308:
    // 0x23a308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a30c:
    // 0x23a30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a310:
    // 0x23a310: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23a310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a314:
    // 0x23a314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a318:
    // 0x23a318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a31c:
    // 0x23a31c: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x23a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
label_23a320:
    // 0x23a320: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x23a320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a324:
    // 0x23a324: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_23a328:
    if (ctx->pc == 0x23A328u) {
        ctx->pc = 0x23A328u;
            // 0x23a328: 0x26700140  addiu       $s0, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->pc = 0x23A32Cu;
        goto label_23a32c;
    }
    ctx->pc = 0x23A324u;
    {
        const bool branch_taken_0x23a324 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x23A328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A324u;
            // 0x23a328: 0x26700140  addiu       $s0, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a324) {
            ctx->pc = 0x23A368u;
            goto label_23a368;
        }
    }
    ctx->pc = 0x23A32Cu;
label_23a32c:
    // 0x23a32c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x23a32cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_23a330:
    // 0x23a330: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a334:
    // 0x23a334: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23a338:
    // 0x23a338: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a33c:
    // 0x23a33c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23a340:
    if (ctx->pc == 0x23A340u) {
        ctx->pc = 0x23A344u;
        goto label_23a344;
    }
    ctx->pc = 0x23A33Cu;
    {
        const bool branch_taken_0x23a33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a33c) {
            ctx->pc = 0x23A358u;
            goto label_23a358;
        }
    }
    ctx->pc = 0x23A344u;
label_23a344:
    // 0x23a344: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a348:
    // 0x23a348: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a34c:
    // 0x23a34c: 0x320f809  jalr        $t9
label_23a350:
    if (ctx->pc == 0x23A350u) {
        ctx->pc = 0x23A350u;
            // 0x23a350: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A354u;
        goto label_23a354;
    }
    ctx->pc = 0x23A34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A354u);
        ctx->pc = 0x23A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A34Cu;
            // 0x23a350: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A354u; }
            if (ctx->pc != 0x23A354u) { return; }
        }
        }
    }
    ctx->pc = 0x23A354u;
label_23a354:
    // 0x23a354: 0x0  nop
    ctx->pc = 0x23a354u;
    // NOP
label_23a358:
    // 0x23a358: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23a35c:
    // 0x23a35c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_23a360:
    if (ctx->pc == 0x23A360u) {
        ctx->pc = 0x23A360u;
            // 0x23a360: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x23A364u;
        goto label_23a364;
    }
    ctx->pc = 0x23A35Cu;
    {
        const bool branch_taken_0x23a35c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x23A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A35Cu;
            // 0x23a360: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a35c) {
            ctx->pc = 0x23A330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a330;
        }
    }
    ctx->pc = 0x23A364u;
label_23a364:
    // 0x23a364: 0x0  nop
    ctx->pc = 0x23a364u;
    // NOP
label_23a368:
    // 0x23a368: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a36c:
    // 0x23a36c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a370:
    // 0x23a370: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a374:
    if (ctx->pc == 0x23A374u) {
        ctx->pc = 0x23A378u;
        goto label_23a378;
    }
    ctx->pc = 0x23A370u;
    {
        const bool branch_taken_0x23a370 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a370) {
            ctx->pc = 0x23A3E8u;
            goto label_23a3e8;
        }
    }
    ctx->pc = 0x23A378u;
label_23a378:
    // 0x23a378: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a378u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a37c:
    // 0x23a37c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a380:
    // 0x23a380: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a384:
    // 0x23a384: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a388:
    // 0x23a388: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a38c:
    if (ctx->pc == 0x23A38Cu) {
        ctx->pc = 0x23A390u;
        goto label_23a390;
    }
    ctx->pc = 0x23A388u;
    {
        const bool branch_taken_0x23a388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a388) {
            ctx->pc = 0x23A3D8u;
            goto label_23a3d8;
        }
    }
    ctx->pc = 0x23A390u;
label_23a390:
    // 0x23a390: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a394:
    // 0x23a394: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a398:
    // 0x23a398: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a39c:
    // 0x23a39c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a39cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a3a0:
    // 0x23a3a0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a3a4:
    if (ctx->pc == 0x23A3A4u) {
        ctx->pc = 0x23A3A4u;
            // 0x23a3a4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23A3A8u;
        goto label_23a3a8;
    }
    ctx->pc = 0x23A3A0u;
    {
        const bool branch_taken_0x23a3a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A3A0u;
            // 0x23a3a4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3a0) {
            ctx->pc = 0x23A3D8u;
            goto label_23a3d8;
        }
    }
    ctx->pc = 0x23A3A8u;
label_23a3a8:
    // 0x23a3a8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a3ac:
    // 0x23a3ac: 0x0  nop
    ctx->pc = 0x23a3acu;
    // NOP
label_23a3b0:
    // 0x23a3b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a3b4:
    // 0x23a3b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a3b8:
    // 0x23a3b8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a3bc:
    // 0x23a3bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a3c0:
    // 0x23a3c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a3c4:
    // 0x23a3c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a3c8:
    // 0x23a3c8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a3c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a3cc:
    // 0x23a3cc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a3d0:
    if (ctx->pc == 0x23A3D0u) {
        ctx->pc = 0x23A3D0u;
            // 0x23a3d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A3D4u;
        goto label_23a3d4;
    }
    ctx->pc = 0x23A3CCu;
    {
        const bool branch_taken_0x23a3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A3CCu;
            // 0x23a3d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3cc) {
            ctx->pc = 0x23A3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a3b0;
        }
    }
    ctx->pc = 0x23A3D4u;
label_23a3d4:
    // 0x23a3d4: 0x0  nop
    ctx->pc = 0x23a3d4u;
    // NOP
label_23a3d8:
    // 0x23a3d8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a3dc:
    // 0x23a3dc: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23a3e0:
    if (ctx->pc == 0x23A3E0u) {
        ctx->pc = 0x23A3E0u;
            // 0x23a3e0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A3E4u;
        goto label_23a3e4;
    }
    ctx->pc = 0x23A3DCu;
    {
        const bool branch_taken_0x23a3dc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A3DCu;
            // 0x23a3e0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3dc) {
            ctx->pc = 0x23A37Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a37c;
        }
    }
    ctx->pc = 0x23A3E4u;
label_23a3e4:
    // 0x23a3e4: 0x0  nop
    ctx->pc = 0x23a3e4u;
    // NOP
label_23a3e8:
    // 0x23a3e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23a3ec:
    // 0x23a3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a3f0:
    // 0x23a3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a3f4:
    // 0x23a3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a3f8:
    // 0x23a3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a3fc:
    // 0x23a3fc: 0x3e00008  jr          $ra
label_23a400:
    if (ctx->pc == 0x23A400u) {
        ctx->pc = 0x23A400u;
            // 0x23a400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23A404u;
        goto label_23a404;
    }
    ctx->pc = 0x23A3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A3FCu;
            // 0x23a400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A404u;
label_23a404:
    // 0x23a404: 0x0  nop
    ctx->pc = 0x23a404u;
    // NOP
label_23a408:
    // 0x23a408: 0x0  nop
    ctx->pc = 0x23a408u;
    // NOP
label_23a40c:
    // 0x23a40c: 0x0  nop
    ctx->pc = 0x23a40cu;
    // NOP
}
