#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335320
// Address: 0x335320 - 0x335570
void sub_00335320_0x335320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335320_0x335320");
#endif

    switch (ctx->pc) {
        case 0x335368u: goto label_335368;
        case 0x33537cu: goto label_33537c;
        case 0x335388u: goto label_335388;
        case 0x335394u: goto label_335394;
        case 0x33539cu: goto label_33539c;
        case 0x3353acu: goto label_3353ac;
        case 0x3353ccu: goto label_3353cc;
        case 0x3353e0u: goto label_3353e0;
        case 0x3353ecu: goto label_3353ec;
        case 0x3353f8u: goto label_3353f8;
        case 0x335400u: goto label_335400;
        case 0x335410u: goto label_335410;
        case 0x33541cu: goto label_33541c;
        case 0x335424u: goto label_335424;
        case 0x335438u: goto label_335438;
        case 0x335464u: goto label_335464;
        case 0x335478u: goto label_335478;
        case 0x335484u: goto label_335484;
        case 0x335490u: goto label_335490;
        case 0x335498u: goto label_335498;
        case 0x3354a8u: goto label_3354a8;
        case 0x3354c8u: goto label_3354c8;
        case 0x3354dcu: goto label_3354dc;
        case 0x3354e8u: goto label_3354e8;
        case 0x3354f4u: goto label_3354f4;
        case 0x3354fcu: goto label_3354fc;
        case 0x33550cu: goto label_33550c;
        case 0x335518u: goto label_335518;
        case 0x335520u: goto label_335520;
        case 0x335534u: goto label_335534;
        case 0x33554cu: goto label_33554c;
        default: break;
    }

    ctx->pc = 0x335320u;

label_335320:
    // 0x335320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x335320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x335324: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x335324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x335328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x335328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33532c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x335330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x335330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x335334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33533c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x33533cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x335340: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x335340u;
    {
        const bool branch_taken_0x335340 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x335344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335340u;
            // 0x335344: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335340) {
            ctx->pc = 0x335438u;
            goto label_335438;
        }
    }
    ctx->pc = 0x335348u;
    // 0x335348: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x335348u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33534c: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x33534Cu;
    {
        const bool branch_taken_0x33534c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33534c) {
            ctx->pc = 0x335350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33534Cu;
            // 0x335350: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3353B0u;
            goto label_3353b0;
        }
    }
    ctx->pc = 0x335354u;
    // 0x335354: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x335354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x335358: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335358u;
    {
        const bool branch_taken_0x335358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335358) {
            ctx->pc = 0x33535Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335358u;
            // 0x33535c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33536Cu;
            goto label_33536c;
        }
    }
    ctx->pc = 0x335360u;
    // 0x335360: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x335360u;
    SET_GPR_U32(ctx, 31, 0x335368u);
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x335368u;
label_335368:
    // 0x335368: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x335368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33536c:
    // 0x33536c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33536Cu;
    {
        const bool branch_taken_0x33536c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33536c) {
            ctx->pc = 0x335370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33536Cu;
            // 0x335370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335380u;
            goto label_335380;
        }
    }
    ctx->pc = 0x335374u;
    // 0x335374: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x335374u;
    SET_GPR_U32(ctx, 31, 0x33537Cu);
    ctx->pc = 0x335378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335374u;
            // 0x335378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x33537Cu;
label_33537c:
    // 0x33537c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_335380:
    // 0x335380: 0xc0cd56c  jal         func_3355B0
    ctx->pc = 0x335380u;
    SET_GPR_U32(ctx, 31, 0x335388u);
    ctx->pc = 0x3355B0u;
    if (runtime->hasFunction(0x3355B0u)) {
        auto targetFn = runtime->lookupFunction(0x3355B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335388u; }
        if (ctx->pc != 0x335388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355B0_0x3355b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335388u; }
        if (ctx->pc != 0x335388u) { return; }
    }
    ctx->pc = 0x335388u;
label_335388:
    // 0x335388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33538c: 0xc0cd568  jal         func_3355A0
    ctx->pc = 0x33538Cu;
    SET_GPR_U32(ctx, 31, 0x335394u);
    ctx->pc = 0x335390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33538Cu;
            // 0x335390: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355A0u;
    if (runtime->hasFunction(0x3355A0u)) {
        auto targetFn = runtime->lookupFunction(0x3355A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335394u; }
        if (ctx->pc != 0x335394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355A0_0x3355a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335394u; }
        if (ctx->pc != 0x335394u) { return; }
    }
    ctx->pc = 0x335394u;
label_335394:
    // 0x335394: 0xc0cd564  jal         func_335590
    ctx->pc = 0x335394u;
    SET_GPR_U32(ctx, 31, 0x33539Cu);
    ctx->pc = 0x335398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335394u;
            // 0x335398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335590u;
    if (runtime->hasFunction(0x335590u)) {
        auto targetFn = runtime->lookupFunction(0x335590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33539Cu; }
        if (ctx->pc != 0x33539Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335590_0x335590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33539Cu; }
        if (ctx->pc != 0x33539Cu) { return; }
    }
    ctx->pc = 0x33539Cu;
label_33539c:
    // 0x33539c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3353a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353a4: 0xc0cd55c  jal         func_335570
    ctx->pc = 0x3353A4u;
    SET_GPR_U32(ctx, 31, 0x3353ACu);
    ctx->pc = 0x3353A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3353A4u;
            // 0x3353a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (runtime->hasFunction(0x335570u)) {
        auto targetFn = runtime->lookupFunction(0x335570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3353ACu; }
        if (ctx->pc != 0x3353ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335570_0x335570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3353ACu; }
        if (ctx->pc != 0x3353ACu) { return; }
    }
    ctx->pc = 0x3353ACu;
label_3353ac:
    // 0x3353ac: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3353acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3353b0:
    // 0x3353b0: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3353B0u;
    {
        const bool branch_taken_0x3353b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3353b0) {
            ctx->pc = 0x3353B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3353B0u;
            // 0x3353b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335414u;
            goto label_335414;
        }
    }
    ctx->pc = 0x3353B8u;
    // 0x3353b8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3353b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3353bc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3353BCu;
    {
        const bool branch_taken_0x3353bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3353bc) {
            ctx->pc = 0x3353C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3353BCu;
            // 0x3353c0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3353D0u;
            goto label_3353d0;
        }
    }
    ctx->pc = 0x3353C4u;
    // 0x3353c4: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x3353C4u;
    SET_GPR_U32(ctx, 31, 0x3353CCu);
    ctx->pc = 0x3353C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3353C4u;
            // 0x3353c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x3353CCu;
label_3353cc:
    // 0x3353cc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3353ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3353d0:
    // 0x3353d0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3353D0u;
    {
        const bool branch_taken_0x3353d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3353d0) {
            ctx->pc = 0x3353D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3353D0u;
            // 0x3353d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3353E4u;
            goto label_3353e4;
        }
    }
    ctx->pc = 0x3353D8u;
    // 0x3353d8: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x3353D8u;
    SET_GPR_U32(ctx, 31, 0x3353E0u);
    ctx->pc = 0x3353DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3353D8u;
            // 0x3353dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x3353E0u;
label_3353e0:
    // 0x3353e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3353e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3353e4:
    // 0x3353e4: 0xc0cd56c  jal         func_3355B0
    ctx->pc = 0x3353E4u;
    SET_GPR_U32(ctx, 31, 0x3353ECu);
    ctx->pc = 0x3355B0u;
    if (runtime->hasFunction(0x3355B0u)) {
        auto targetFn = runtime->lookupFunction(0x3355B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3353ECu; }
        if (ctx->pc != 0x3353ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355B0_0x3355b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3353ECu; }
        if (ctx->pc != 0x3353ECu) { return; }
    }
    ctx->pc = 0x3353ECu;
label_3353ec:
    // 0x3353ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3353ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353f0: 0xc0cd568  jal         func_3355A0
    ctx->pc = 0x3353F0u;
    SET_GPR_U32(ctx, 31, 0x3353F8u);
    ctx->pc = 0x3353F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3353F0u;
            // 0x3353f4: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355A0u;
    if (runtime->hasFunction(0x3355A0u)) {
        auto targetFn = runtime->lookupFunction(0x3355A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3353F8u; }
        if (ctx->pc != 0x3353F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355A0_0x3355a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3353F8u; }
        if (ctx->pc != 0x3353F8u) { return; }
    }
    ctx->pc = 0x3353F8u;
label_3353f8:
    // 0x3353f8: 0xc0cd564  jal         func_335590
    ctx->pc = 0x3353F8u;
    SET_GPR_U32(ctx, 31, 0x335400u);
    ctx->pc = 0x3353FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3353F8u;
            // 0x3353fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335590u;
    if (runtime->hasFunction(0x335590u)) {
        auto targetFn = runtime->lookupFunction(0x335590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335400u; }
        if (ctx->pc != 0x335400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335590_0x335590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335400u; }
        if (ctx->pc != 0x335400u) { return; }
    }
    ctx->pc = 0x335400u;
label_335400:
    // 0x335400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335404: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335408: 0xc0cd55c  jal         func_335570
    ctx->pc = 0x335408u;
    SET_GPR_U32(ctx, 31, 0x335410u);
    ctx->pc = 0x33540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335408u;
            // 0x33540c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (runtime->hasFunction(0x335570u)) {
        auto targetFn = runtime->lookupFunction(0x335570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335410u; }
        if (ctx->pc != 0x335410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335570_0x335570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335410u; }
        if (ctx->pc != 0x335410u) { return; }
    }
    ctx->pc = 0x335410u;
label_335410:
    // 0x335410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_335414:
    // 0x335414: 0xc0cd56c  jal         func_3355B0
    ctx->pc = 0x335414u;
    SET_GPR_U32(ctx, 31, 0x33541Cu);
    ctx->pc = 0x3355B0u;
    if (runtime->hasFunction(0x3355B0u)) {
        auto targetFn = runtime->lookupFunction(0x3355B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33541Cu; }
        if (ctx->pc != 0x33541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355B0_0x3355b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33541Cu; }
        if (ctx->pc != 0x33541Cu) { return; }
    }
    ctx->pc = 0x33541Cu;
label_33541c:
    // 0x33541c: 0xc0cd564  jal         func_335590
    ctx->pc = 0x33541Cu;
    SET_GPR_U32(ctx, 31, 0x335424u);
    ctx->pc = 0x335420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33541Cu;
            // 0x335420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335590u;
    if (runtime->hasFunction(0x335590u)) {
        auto targetFn = runtime->lookupFunction(0x335590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335424u; }
        if (ctx->pc != 0x335424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335590_0x335590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335424u; }
        if (ctx->pc != 0x335424u) { return; }
    }
    ctx->pc = 0x335424u;
label_335424:
    // 0x335424: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x335424u;
    {
        const bool branch_taken_0x335424 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x335424) {
            ctx->pc = 0x335428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335424u;
            // 0x335428: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33543Cu;
            goto label_33543c;
        }
    }
    ctx->pc = 0x33542Cu;
    // 0x33542c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335430: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x335430u;
    SET_GPR_U32(ctx, 31, 0x335438u);
    ctx->pc = 0x335434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335430u;
            // 0x335434: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335438u; }
        if (ctx->pc != 0x335438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335438u; }
        if (ctx->pc != 0x335438u) { return; }
    }
    ctx->pc = 0x335438u;
label_335438:
    // 0x335438: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x335438u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33543c:
    // 0x33543c: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x33543Cu;
    {
        const bool branch_taken_0x33543c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x33543c) {
            ctx->pc = 0x335440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33543Cu;
            // 0x335440: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335538u;
            goto label_335538;
        }
    }
    ctx->pc = 0x335444u;
    // 0x335444: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x335444u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x335448: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x335448u;
    {
        const bool branch_taken_0x335448 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x335448) {
            ctx->pc = 0x33544Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335448u;
            // 0x33544c: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3354ACu;
            goto label_3354ac;
        }
    }
    ctx->pc = 0x335450u;
    // 0x335450: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x335450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x335454: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335454u;
    {
        const bool branch_taken_0x335454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335454) {
            ctx->pc = 0x335458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335454u;
            // 0x335458: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335468u;
            goto label_335468;
        }
    }
    ctx->pc = 0x33545Cu;
    // 0x33545c: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x33545Cu;
    SET_GPR_U32(ctx, 31, 0x335464u);
    ctx->pc = 0x335460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33545Cu;
            // 0x335460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x335464u;
label_335464:
    // 0x335464: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x335464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_335468:
    // 0x335468: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335468u;
    {
        const bool branch_taken_0x335468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x335468) {
            ctx->pc = 0x33546Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335468u;
            // 0x33546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33547Cu;
            goto label_33547c;
        }
    }
    ctx->pc = 0x335470u;
    // 0x335470: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x335470u;
    SET_GPR_U32(ctx, 31, 0x335478u);
    ctx->pc = 0x335474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335470u;
            // 0x335474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x335478u;
label_335478:
    // 0x335478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33547c:
    // 0x33547c: 0xc0cd56c  jal         func_3355B0
    ctx->pc = 0x33547Cu;
    SET_GPR_U32(ctx, 31, 0x335484u);
    ctx->pc = 0x3355B0u;
    if (runtime->hasFunction(0x3355B0u)) {
        auto targetFn = runtime->lookupFunction(0x3355B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335484u; }
        if (ctx->pc != 0x335484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355B0_0x3355b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335484u; }
        if (ctx->pc != 0x335484u) { return; }
    }
    ctx->pc = 0x335484u;
label_335484:
    // 0x335484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335488: 0xc0cd568  jal         func_3355A0
    ctx->pc = 0x335488u;
    SET_GPR_U32(ctx, 31, 0x335490u);
    ctx->pc = 0x33548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335488u;
            // 0x33548c: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355A0u;
    if (runtime->hasFunction(0x3355A0u)) {
        auto targetFn = runtime->lookupFunction(0x3355A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335490u; }
        if (ctx->pc != 0x335490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355A0_0x3355a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335490u; }
        if (ctx->pc != 0x335490u) { return; }
    }
    ctx->pc = 0x335490u;
label_335490:
    // 0x335490: 0xc0cd564  jal         func_335590
    ctx->pc = 0x335490u;
    SET_GPR_U32(ctx, 31, 0x335498u);
    ctx->pc = 0x335494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335490u;
            // 0x335494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335590u;
    if (runtime->hasFunction(0x335590u)) {
        auto targetFn = runtime->lookupFunction(0x335590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335498u; }
        if (ctx->pc != 0x335498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335590_0x335590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335498u; }
        if (ctx->pc != 0x335498u) { return; }
    }
    ctx->pc = 0x335498u;
label_335498:
    // 0x335498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33549c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33549cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354a0: 0xc0cd55c  jal         func_335570
    ctx->pc = 0x3354A0u;
    SET_GPR_U32(ctx, 31, 0x3354A8u);
    ctx->pc = 0x3354A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3354A0u;
            // 0x3354a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (runtime->hasFunction(0x335570u)) {
        auto targetFn = runtime->lookupFunction(0x335570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354A8u; }
        if (ctx->pc != 0x3354A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335570_0x335570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354A8u; }
        if (ctx->pc != 0x3354A8u) { return; }
    }
    ctx->pc = 0x3354A8u;
label_3354a8:
    // 0x3354a8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3354a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3354ac:
    // 0x3354ac: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3354ACu;
    {
        const bool branch_taken_0x3354ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354ac) {
            ctx->pc = 0x3354B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3354ACu;
            // 0x3354b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335510u;
            goto label_335510;
        }
    }
    ctx->pc = 0x3354B4u;
    // 0x3354b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3354b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3354b8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3354B8u;
    {
        const bool branch_taken_0x3354b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354b8) {
            ctx->pc = 0x3354BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3354B8u;
            // 0x3354bc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3354CCu;
            goto label_3354cc;
        }
    }
    ctx->pc = 0x3354C0u;
    // 0x3354c0: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x3354C0u;
    SET_GPR_U32(ctx, 31, 0x3354C8u);
    ctx->pc = 0x3354C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3354C0u;
            // 0x3354c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x3354C8u;
label_3354c8:
    // 0x3354c8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3354c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3354cc:
    // 0x3354cc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3354CCu;
    {
        const bool branch_taken_0x3354cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354cc) {
            ctx->pc = 0x3354D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3354CCu;
            // 0x3354d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3354E0u;
            goto label_3354e0;
        }
    }
    ctx->pc = 0x3354D4u;
    // 0x3354d4: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x3354D4u;
    SET_GPR_U32(ctx, 31, 0x3354DCu);
    ctx->pc = 0x3354D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3354D4u;
            // 0x3354d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    goto label_335320;
    ctx->pc = 0x3354DCu;
label_3354dc:
    // 0x3354dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3354dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3354e0:
    // 0x3354e0: 0xc0cd56c  jal         func_3355B0
    ctx->pc = 0x3354E0u;
    SET_GPR_U32(ctx, 31, 0x3354E8u);
    ctx->pc = 0x3355B0u;
    if (runtime->hasFunction(0x3355B0u)) {
        auto targetFn = runtime->lookupFunction(0x3355B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354E8u; }
        if (ctx->pc != 0x3354E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355B0_0x3355b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354E8u; }
        if (ctx->pc != 0x3354E8u) { return; }
    }
    ctx->pc = 0x3354E8u;
label_3354e8:
    // 0x3354e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3354e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354ec: 0xc0cd568  jal         func_3355A0
    ctx->pc = 0x3354ECu;
    SET_GPR_U32(ctx, 31, 0x3354F4u);
    ctx->pc = 0x3354F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3354ECu;
            // 0x3354f0: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355A0u;
    if (runtime->hasFunction(0x3355A0u)) {
        auto targetFn = runtime->lookupFunction(0x3355A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354F4u; }
        if (ctx->pc != 0x3354F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355A0_0x3355a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354F4u; }
        if (ctx->pc != 0x3354F4u) { return; }
    }
    ctx->pc = 0x3354F4u;
label_3354f4:
    // 0x3354f4: 0xc0cd564  jal         func_335590
    ctx->pc = 0x3354F4u;
    SET_GPR_U32(ctx, 31, 0x3354FCu);
    ctx->pc = 0x3354F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3354F4u;
            // 0x3354f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335590u;
    if (runtime->hasFunction(0x335590u)) {
        auto targetFn = runtime->lookupFunction(0x335590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354FCu; }
        if (ctx->pc != 0x3354FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335590_0x335590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3354FCu; }
        if (ctx->pc != 0x3354FCu) { return; }
    }
    ctx->pc = 0x3354FCu;
label_3354fc:
    // 0x3354fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3354fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335500: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335504: 0xc0cd55c  jal         func_335570
    ctx->pc = 0x335504u;
    SET_GPR_U32(ctx, 31, 0x33550Cu);
    ctx->pc = 0x335508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335504u;
            // 0x335508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (runtime->hasFunction(0x335570u)) {
        auto targetFn = runtime->lookupFunction(0x335570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33550Cu; }
        if (ctx->pc != 0x33550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335570_0x335570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33550Cu; }
        if (ctx->pc != 0x33550Cu) { return; }
    }
    ctx->pc = 0x33550Cu;
label_33550c:
    // 0x33550c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_335510:
    // 0x335510: 0xc0cd56c  jal         func_3355B0
    ctx->pc = 0x335510u;
    SET_GPR_U32(ctx, 31, 0x335518u);
    ctx->pc = 0x3355B0u;
    if (runtime->hasFunction(0x3355B0u)) {
        auto targetFn = runtime->lookupFunction(0x3355B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335518u; }
        if (ctx->pc != 0x335518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355B0_0x3355b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335518u; }
        if (ctx->pc != 0x335518u) { return; }
    }
    ctx->pc = 0x335518u;
label_335518:
    // 0x335518: 0xc0cd564  jal         func_335590
    ctx->pc = 0x335518u;
    SET_GPR_U32(ctx, 31, 0x335520u);
    ctx->pc = 0x33551Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335518u;
            // 0x33551c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335590u;
    if (runtime->hasFunction(0x335590u)) {
        auto targetFn = runtime->lookupFunction(0x335590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335520u; }
        if (ctx->pc != 0x335520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335590_0x335590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335520u; }
        if (ctx->pc != 0x335520u) { return; }
    }
    ctx->pc = 0x335520u;
label_335520:
    // 0x335520: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x335520u;
    {
        const bool branch_taken_0x335520 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x335520) {
            ctx->pc = 0x335534u;
            goto label_335534;
        }
    }
    ctx->pc = 0x335528u;
    // 0x335528: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x335528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33552c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x33552Cu;
    SET_GPR_U32(ctx, 31, 0x335534u);
    ctx->pc = 0x335530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33552Cu;
            // 0x335530: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335534u; }
        if (ctx->pc != 0x335534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335534u; }
        if (ctx->pc != 0x335534u) { return; }
    }
    ctx->pc = 0x335534u;
label_335534:
    // 0x335534: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x335534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_335538:
    // 0x335538: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x335538u;
    {
        const bool branch_taken_0x335538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x335538) {
            ctx->pc = 0x33553Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335538u;
            // 0x33553c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335550u;
            goto label_335550;
        }
    }
    ctx->pc = 0x335540u;
    // 0x335540: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x335540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335544: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x335544u;
    SET_GPR_U32(ctx, 31, 0x33554Cu);
    ctx->pc = 0x335548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335544u;
            // 0x335548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33554Cu; }
        if (ctx->pc != 0x33554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33554Cu; }
        if (ctx->pc != 0x33554Cu) { return; }
    }
    ctx->pc = 0x33554Cu;
label_33554c:
    // 0x33554c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_335550:
    // 0x335550: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x335550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x335554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x335558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33555c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33555cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335560: 0x3e00008  jr          $ra
    ctx->pc = 0x335560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335560u;
            // 0x335564: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335568u;
    // 0x335568: 0x0  nop
    ctx->pc = 0x335568u;
    // NOP
    // 0x33556c: 0x0  nop
    ctx->pc = 0x33556cu;
    // NOP
}
