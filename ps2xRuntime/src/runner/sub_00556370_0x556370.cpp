#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00556370
// Address: 0x556370 - 0x556640
void sub_00556370_0x556370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00556370_0x556370");
#endif

    switch (ctx->pc) {
        case 0x55639cu: goto label_55639c;
        case 0x5563b4u: goto label_5563b4;
        case 0x5563c8u: goto label_5563c8;
        case 0x5563d4u: goto label_5563d4;
        case 0x5563e0u: goto label_5563e0;
        case 0x556414u: goto label_556414;
        case 0x556424u: goto label_556424;
        case 0x556464u: goto label_556464;
        case 0x556470u: goto label_556470;
        case 0x5564a4u: goto label_5564a4;
        case 0x5564b4u: goto label_5564b4;
        case 0x5564d4u: goto label_5564d4;
        case 0x5564e0u: goto label_5564e0;
        case 0x556530u: goto label_556530;
        case 0x556550u: goto label_556550;
        case 0x556560u: goto label_556560;
        case 0x556580u: goto label_556580;
        case 0x55658cu: goto label_55658c;
        case 0x5565c0u: goto label_5565c0;
        case 0x5565d0u: goto label_5565d0;
        case 0x5565f4u: goto label_5565f4;
        case 0x55660cu: goto label_55660c;
        default: break;
    }

    ctx->pc = 0x556370u;

    // 0x556370: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x556370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x556374: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x556374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x556378: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x556378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x55637c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x556380: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x556380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x556384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x556388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x556388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55638c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x556390: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x556390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x556394: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x556394u;
    SET_GPR_U32(ctx, 31, 0x55639Cu);
    ctx->pc = 0x556398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556394u;
            // 0x556398: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55639Cu; }
        if (ctx->pc != 0x55639Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55639Cu; }
        if (ctx->pc != 0x55639Cu) { return; }
    }
    ctx->pc = 0x55639Cu;
label_55639c:
    // 0x55639c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x5563a0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5563a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5563a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5563a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5563a8: 0x24a5eee0  addiu       $a1, $a1, -0x1120
    ctx->pc = 0x5563a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962912));
    // 0x5563ac: 0xc123944  jal         func_48E510
    ctx->pc = 0x5563ACu;
    SET_GPR_U32(ctx, 31, 0x5563B4u);
    ctx->pc = 0x5563B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5563ACu;
            // 0x5563b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5563B4u; }
        if (ctx->pc != 0x5563B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5563B4u; }
        if (ctx->pc != 0x5563B4u) { return; }
    }
    ctx->pc = 0x5563B4u;
label_5563b4:
    // 0x5563b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x5563b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5563b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5563b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5563bc: 0x24a5eee8  addiu       $a1, $a1, -0x1118
    ctx->pc = 0x5563bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    // 0x5563c0: 0xc123944  jal         func_48E510
    ctx->pc = 0x5563C0u;
    SET_GPR_U32(ctx, 31, 0x5563C8u);
    ctx->pc = 0x5563C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5563C0u;
            // 0x5563c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5563C8u; }
        if (ctx->pc != 0x5563C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5563C8u; }
        if (ctx->pc != 0x5563C8u) { return; }
    }
    ctx->pc = 0x5563C8u;
label_5563c8:
    // 0x5563c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5563c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5563cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5563ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5563d0: 0x27b20490  addiu       $s2, $sp, 0x490
    ctx->pc = 0x5563d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_5563d4:
    // 0x5563d4: 0x27a30360  addiu       $v1, $sp, 0x360
    ctx->pc = 0x5563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x5563d8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x5563D8u;
    {
        const bool branch_taken_0x5563d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5563DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5563D8u;
            // 0x5563dc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5563d8) {
            ctx->pc = 0x5563FCu;
            goto label_5563fc;
        }
    }
    ctx->pc = 0x5563E0u;
label_5563e0:
    // 0x5563e0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x5563e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x5563e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5563e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x5563e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5563e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5563ec: 0x0  nop
    ctx->pc = 0x5563ecu;
    // NOP
    // 0x5563f0: 0x0  nop
    ctx->pc = 0x5563f0u;
    // NOP
    // 0x5563f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x5563F4u;
    {
        const bool branch_taken_0x5563f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5563f4) {
            ctx->pc = 0x5563E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5563e0;
        }
    }
    ctx->pc = 0x5563FCu;
label_5563fc:
    // 0x5563fc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5563fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x556400: 0x26670001  addiu       $a3, $s3, 0x1
    ctx->pc = 0x556400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x556404: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x556404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x556408: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x556408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x55640c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x55640Cu;
    SET_GPR_U32(ctx, 31, 0x556414u);
    ctx->pc = 0x556410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55640Cu;
            // 0x556410: 0x24c6eef8  addiu       $a2, $a2, -0x1108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556414u; }
        if (ctx->pc != 0x556414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556414u; }
        if (ctx->pc != 0x556414u) { return; }
    }
    ctx->pc = 0x556414u;
label_556414:
    // 0x556414: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x556418: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x556418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x55641c: 0xc123944  jal         func_48E510
    ctx->pc = 0x55641Cu;
    SET_GPR_U32(ctx, 31, 0x556424u);
    ctx->pc = 0x556420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55641Cu;
            // 0x556420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556424u; }
        if (ctx->pc != 0x556424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556424u; }
        if (ctx->pc != 0x556424u) { return; }
    }
    ctx->pc = 0x556424u;
label_556424:
    // 0x556424: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x556424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x556428: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x556428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x55642c: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x55642cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x556430: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x556430u;
    {
        const bool branch_taken_0x556430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x556434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556430u;
            // 0x556434: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556430) {
            ctx->pc = 0x5563D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5563d4;
        }
    }
    ctx->pc = 0x556438u;
    // 0x556438: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x556438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x55643c: 0x5282004f  beql        $s4, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x55643Cu;
    {
        const bool branch_taken_0x55643c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x55643c) {
            ctx->pc = 0x556440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55643Cu;
            // 0x556440: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55657Cu;
            goto label_55657c;
        }
    }
    ctx->pc = 0x556444u;
    // 0x556444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x556444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x556448: 0x52820021  beql        $s4, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x556448u;
    {
        const bool branch_taken_0x556448 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x556448) {
            ctx->pc = 0x55644Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556448u;
            // 0x55644c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5564D0u;
            goto label_5564d0;
        }
    }
    ctx->pc = 0x556450u;
    // 0x556450: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x556450u;
    {
        const bool branch_taken_0x556450 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x556450) {
            ctx->pc = 0x556454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556450u;
            // 0x556454: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556460u;
            goto label_556460;
        }
    }
    ctx->pc = 0x556458u;
    // 0x556458: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x556458u;
    {
        const bool branch_taken_0x556458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556458) {
            ctx->pc = 0x5565E8u;
            goto label_5565e8;
        }
    }
    ctx->pc = 0x556460u;
label_556460:
    // 0x556460: 0x27b30460  addiu       $s3, $sp, 0x460
    ctx->pc = 0x556460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_556464:
    // 0x556464: 0x27a30260  addiu       $v1, $sp, 0x260
    ctx->pc = 0x556464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x556468: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x556468u;
    {
        const bool branch_taken_0x556468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x55646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556468u;
            // 0x55646c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556468) {
            ctx->pc = 0x55648Cu;
            goto label_55648c;
        }
    }
    ctx->pc = 0x556470u;
label_556470:
    // 0x556470: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x556470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x556474: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x556474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x556478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x556478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x55647c: 0x0  nop
    ctx->pc = 0x55647cu;
    // NOP
    // 0x556480: 0x0  nop
    ctx->pc = 0x556480u;
    // NOP
    // 0x556484: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x556484u;
    {
        const bool branch_taken_0x556484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x556484) {
            ctx->pc = 0x556470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556470;
        }
    }
    ctx->pc = 0x55648Cu;
label_55648c:
    // 0x55648c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x55648cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x556490: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x556490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x556494: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x556494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x556498: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x556498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x55649c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x55649Cu;
    SET_GPR_U32(ctx, 31, 0x5564A4u);
    ctx->pc = 0x5564A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55649Cu;
            // 0x5564a0: 0x24c6eef8  addiu       $a2, $a2, -0x1108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5564A4u; }
        if (ctx->pc != 0x5564A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5564A4u; }
        if (ctx->pc != 0x5564A4u) { return; }
    }
    ctx->pc = 0x5564A4u;
label_5564a4:
    // 0x5564a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x5564a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5564a8: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x5564a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x5564ac: 0xc123944  jal         func_48E510
    ctx->pc = 0x5564ACu;
    SET_GPR_U32(ctx, 31, 0x5564B4u);
    ctx->pc = 0x5564B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5564ACu;
            // 0x5564b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5564B4u; }
        if (ctx->pc != 0x5564B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5564B4u; }
        if (ctx->pc != 0x5564B4u) { return; }
    }
    ctx->pc = 0x5564B4u;
label_5564b4:
    // 0x5564b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5564b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x5564b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5564b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x5564bc: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x5564bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x5564c0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x5564C0u;
    {
        const bool branch_taken_0x5564c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5564C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5564C0u;
            // 0x5564c4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5564c0) {
            ctx->pc = 0x556464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556464;
        }
    }
    ctx->pc = 0x5564C8u;
    // 0x5564c8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x5564C8u;
    {
        const bool branch_taken_0x5564c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5564c8) {
            ctx->pc = 0x5565E8u;
            goto label_5565e8;
        }
    }
    ctx->pc = 0x5564D0u;
label_5564d0:
    // 0x5564d0: 0x27b30460  addiu       $s3, $sp, 0x460
    ctx->pc = 0x5564d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_5564d4:
    // 0x5564d4: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x5564d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x5564d8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x5564D8u;
    {
        const bool branch_taken_0x5564d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5564DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5564D8u;
            // 0x5564dc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5564d8) {
            ctx->pc = 0x5564FCu;
            goto label_5564fc;
        }
    }
    ctx->pc = 0x5564E0u;
label_5564e0:
    // 0x5564e0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x5564e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x5564e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5564e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x5564e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5564e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5564ec: 0x0  nop
    ctx->pc = 0x5564ecu;
    // NOP
    // 0x5564f0: 0x0  nop
    ctx->pc = 0x5564f0u;
    // NOP
    // 0x5564f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x5564F4u;
    {
        const bool branch_taken_0x5564f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5564f4) {
            ctx->pc = 0x5564E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5564e0;
        }
    }
    ctx->pc = 0x5564FCu;
label_5564fc:
    // 0x5564fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5564fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x556500: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x556500u;
    {
        const bool branch_taken_0x556500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x556500) {
            ctx->pc = 0x556518u;
            goto label_556518;
        }
    }
    ctx->pc = 0x556508u;
    // 0x556508: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x556508u;
    {
        const bool branch_taken_0x556508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x556508) {
            ctx->pc = 0x556518u;
            goto label_556518;
        }
    }
    ctx->pc = 0x556510u;
    // 0x556510: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x556510u;
    {
        const bool branch_taken_0x556510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556510) {
            ctx->pc = 0x556538u;
            goto label_556538;
        }
    }
    ctx->pc = 0x556518u;
label_556518:
    // 0x556518: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x556518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x55651c: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x55651cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x556520: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x556520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x556524: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x556524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x556528: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x556528u;
    SET_GPR_U32(ctx, 31, 0x556530u);
    ctx->pc = 0x55652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556528u;
            // 0x55652c: 0x24c6ef08  addiu       $a2, $a2, -0x10F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556530u; }
        if (ctx->pc != 0x556530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556530u; }
        if (ctx->pc != 0x556530u) { return; }
    }
    ctx->pc = 0x556530u;
label_556530:
    // 0x556530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x556530u;
    {
        const bool branch_taken_0x556530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556530) {
            ctx->pc = 0x556550u;
            goto label_556550;
        }
    }
    ctx->pc = 0x556538u;
label_556538:
    // 0x556538: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x556538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x55653c: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x55653cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x556540: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x556540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x556544: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x556544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x556548: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x556548u;
    SET_GPR_U32(ctx, 31, 0x556550u);
    ctx->pc = 0x55654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556548u;
            // 0x55654c: 0x24c6eef8  addiu       $a2, $a2, -0x1108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556550u; }
        if (ctx->pc != 0x556550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556550u; }
        if (ctx->pc != 0x556550u) { return; }
    }
    ctx->pc = 0x556550u;
label_556550:
    // 0x556550: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x556554: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x556554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x556558: 0xc123944  jal         func_48E510
    ctx->pc = 0x556558u;
    SET_GPR_U32(ctx, 31, 0x556560u);
    ctx->pc = 0x55655Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556558u;
            // 0x55655c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556560u; }
        if (ctx->pc != 0x556560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556560u; }
        if (ctx->pc != 0x556560u) { return; }
    }
    ctx->pc = 0x556560u;
label_556560:
    // 0x556560: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x556560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x556564: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x556564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x556568: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x556568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x55656c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x55656Cu;
    {
        const bool branch_taken_0x55656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x556570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55656Cu;
            // 0x556570: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55656c) {
            ctx->pc = 0x5564D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5564d4;
        }
    }
    ctx->pc = 0x556574u;
    // 0x556574: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x556574u;
    {
        const bool branch_taken_0x556574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556574) {
            ctx->pc = 0x5565E8u;
            goto label_5565e8;
        }
    }
    ctx->pc = 0x55657Cu;
label_55657c:
    // 0x55657c: 0x27b30460  addiu       $s3, $sp, 0x460
    ctx->pc = 0x55657cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_556580:
    // 0x556580: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x556580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x556584: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x556584u;
    {
        const bool branch_taken_0x556584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x556588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556584u;
            // 0x556588: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556584) {
            ctx->pc = 0x5565A8u;
            goto label_5565a8;
        }
    }
    ctx->pc = 0x55658Cu;
label_55658c:
    // 0x55658c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x55658cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x556590: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x556590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x556594: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x556594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x556598: 0x0  nop
    ctx->pc = 0x556598u;
    // NOP
    // 0x55659c: 0x0  nop
    ctx->pc = 0x55659cu;
    // NOP
    // 0x5565a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x5565A0u;
    {
        const bool branch_taken_0x5565a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5565a0) {
            ctx->pc = 0x55658Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55658c;
        }
    }
    ctx->pc = 0x5565A8u;
label_5565a8:
    // 0x5565a8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5565a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x5565ac: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x5565acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x5565b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5565b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x5565b4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x5565b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x5565b8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x5565B8u;
    SET_GPR_U32(ctx, 31, 0x5565C0u);
    ctx->pc = 0x5565BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5565B8u;
            // 0x5565bc: 0x24c6ef18  addiu       $a2, $a2, -0x10E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5565C0u; }
        if (ctx->pc != 0x5565C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5565C0u; }
        if (ctx->pc != 0x5565C0u) { return; }
    }
    ctx->pc = 0x5565C0u;
label_5565c0:
    // 0x5565c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x5565c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5565c4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x5565c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x5565c8: 0xc123944  jal         func_48E510
    ctx->pc = 0x5565C8u;
    SET_GPR_U32(ctx, 31, 0x5565D0u);
    ctx->pc = 0x5565CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5565C8u;
            // 0x5565cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5565D0u; }
        if (ctx->pc != 0x5565D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5565D0u; }
        if (ctx->pc != 0x5565D0u) { return; }
    }
    ctx->pc = 0x5565D0u;
label_5565d0:
    // 0x5565d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5565d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x5565d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5565d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x5565d8: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x5565d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x5565dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x5565DCu;
    {
        const bool branch_taken_0x5565dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5565E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5565DCu;
            // 0x5565e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5565dc) {
            ctx->pc = 0x556580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556580;
        }
    }
    ctx->pc = 0x5565E4u;
    // 0x5565e4: 0x0  nop
    ctx->pc = 0x5565e4u;
    // NOP
label_5565e8:
    // 0x5565e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5565e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5565ec: 0x27b30490  addiu       $s3, $sp, 0x490
    ctx->pc = 0x5565ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x5565f0: 0x27b20460  addiu       $s2, $sp, 0x460
    ctx->pc = 0x5565f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_5565f4:
    // 0x5565f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5565f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5565f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5565fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x5565fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x556600: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x556600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x556604: 0xc123654  jal         func_48D950
    ctx->pc = 0x556604u;
    SET_GPR_U32(ctx, 31, 0x55660Cu);
    ctx->pc = 0x556608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556604u;
            // 0x556608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55660Cu; }
        if (ctx->pc != 0x55660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55660Cu; }
        if (ctx->pc != 0x55660Cu) { return; }
    }
    ctx->pc = 0x55660Cu;
label_55660c:
    // 0x55660c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x55660cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x556610: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x556610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x556614: 0x2a230009  slti        $v1, $s1, 0x9
    ctx->pc = 0x556614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x556618: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x556618u;
    {
        const bool branch_taken_0x556618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x55661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556618u;
            // 0x55661c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556618) {
            ctx->pc = 0x5565F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5565f4;
        }
    }
    ctx->pc = 0x556620u;
    // 0x556620: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x556620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x556624: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x556624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x556628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x556628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x55662c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55662cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x556630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x556634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x556638: 0x3e00008  jr          $ra
    ctx->pc = 0x556638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556638u;
            // 0x55663c: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556640u;
}
