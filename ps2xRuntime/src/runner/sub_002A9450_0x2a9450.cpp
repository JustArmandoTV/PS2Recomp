#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9450
// Address: 0x2a9450 - 0x2a9760
void sub_002A9450_0x2a9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9450_0x2a9450");
#endif

    switch (ctx->pc) {
        case 0x2a9484u: goto label_2a9484;
        case 0x2a9494u: goto label_2a9494;
        case 0x2a94a4u: goto label_2a94a4;
        case 0x2a94acu: goto label_2a94ac;
        case 0x2a9510u: goto label_2a9510;
        case 0x2a9548u: goto label_2a9548;
        case 0x2a9578u: goto label_2a9578;
        case 0x2a9584u: goto label_2a9584;
        case 0x2a9590u: goto label_2a9590;
        case 0x2a959cu: goto label_2a959c;
        case 0x2a95b0u: goto label_2a95b0;
        case 0x2a95c4u: goto label_2a95c4;
        case 0x2a95d4u: goto label_2a95d4;
        case 0x2a95dcu: goto label_2a95dc;
        case 0x2a9640u: goto label_2a9640;
        case 0x2a9678u: goto label_2a9678;
        case 0x2a9694u: goto label_2a9694;
        case 0x2a96c4u: goto label_2a96c4;
        case 0x2a96d0u: goto label_2a96d0;
        case 0x2a96dcu: goto label_2a96dc;
        case 0x2a96e8u: goto label_2a96e8;
        case 0x2a96fcu: goto label_2a96fc;
        default: break;
    }

    ctx->pc = 0x2a9450u;

    // 0x2a9450: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2a9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x2a9454: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a9454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a9458: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a945c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a9460: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a9464: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a9464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a946c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2a946cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2a9470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9474: 0x2484fb78  addiu       $a0, $a0, -0x488
    ctx->pc = 0x2a9474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966136));
    // 0x2a9478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a947c: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x2A947Cu;
    SET_GPR_U32(ctx, 31, 0x2A9484u);
    ctx->pc = 0x2A9480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A947Cu;
            // 0x2a9480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9484u; }
        if (ctx->pc != 0x2A9484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9484u; }
        if (ctx->pc != 0x2A9484u) { return; }
    }
    ctx->pc = 0x2A9484u;
label_2a9484:
    // 0x2a9484: 0x8ea60030  lw          $a2, 0x30($s5)
    ctx->pc = 0x2a9484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2a9488: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x2a9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2a948c: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A948Cu;
    SET_GPR_U32(ctx, 31, 0x2A9494u);
    ctx->pc = 0x2A9490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A948Cu;
            // 0x2a9490: 0x26a5001c  addiu       $a1, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9494u; }
        if (ctx->pc != 0x2A9494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9494u; }
        if (ctx->pc != 0x2A9494u) { return; }
    }
    ctx->pc = 0x2A9494u;
label_2a9494:
    // 0x2a9494: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2a9494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2a9498: 0x26a5001c  addiu       $a1, $s5, 0x1C
    ctx->pc = 0x2a9498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x2a949c: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A949Cu;
    SET_GPR_U32(ctx, 31, 0x2A94A4u);
    ctx->pc = 0x2A94A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A949Cu;
            // 0x2a94a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A94A4u; }
        if (ctx->pc != 0x2A94A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A94A4u; }
        if (ctx->pc != 0x2A94A4u) { return; }
    }
    ctx->pc = 0x2A94A4u;
label_2a94a4:
    // 0x2a94a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A94A4u;
    {
        const bool branch_taken_0x2a94a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a94a4) {
            ctx->pc = 0x2A94F0u;
            goto label_2a94f0;
        }
    }
    ctx->pc = 0x2A94ACu;
label_2a94ac:
    // 0x2a94ac: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x2a94acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2a94b0: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a94b4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A94B4u;
    {
        const bool branch_taken_0x2a94b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A94B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A94B4u;
            // 0x2a94b8: 0xafa30290  sw          $v1, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94b4) {
            ctx->pc = 0x2A94F0u;
            goto label_2a94f0;
        }
    }
    ctx->pc = 0x2A94BCu;
    // 0x2a94bc: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a94c0: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x2a94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2a94c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a94c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A94C8u;
    {
        const bool branch_taken_0x2a94c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A94CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A94C8u;
            // 0x2a94cc: 0xafa30280  sw          $v1, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94c8) {
            ctx->pc = 0x2A94D8u;
            goto label_2a94d8;
        }
    }
    ctx->pc = 0x2A94D0u;
    // 0x2a94d0: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x2a94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x2a94d4: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x2a94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_2a94d8:
    // 0x2a94d8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a94dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a94e0: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x2a94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x2a94e4: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2a94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x2a94e8: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x2a94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x2a94ec: 0x0  nop
    ctx->pc = 0x2a94ecu;
    // NOP
label_2a94f0:
    // 0x2a94f0: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x2a94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2a94f4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2a94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2a94f8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A94F8u;
    {
        const bool branch_taken_0x2a94f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a94f8) {
            ctx->pc = 0x2A9520u;
            goto label_2a9520;
        }
    }
    ctx->pc = 0x2A9500u;
    // 0x2a9500: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2a9500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2a9504: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2a9504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a9508: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x2A9508u;
    SET_GPR_U32(ctx, 31, 0x2A9510u);
    ctx->pc = 0x2A950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9508u;
            // 0x2a950c: 0x24a5fb78  addiu       $a1, $a1, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9510u; }
        if (ctx->pc != 0x2A9510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9510u; }
        if (ctx->pc != 0x2A9510u) { return; }
    }
    ctx->pc = 0x2A9510u;
label_2a9510:
    // 0x2a9510: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a9510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a9514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a9514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a9518: 0x5040ffe4  beql        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2A9518u;
    {
        const bool branch_taken_0x2a9518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9518) {
            ctx->pc = 0x2A951Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9518u;
            // 0x2a951c: 0x8fa30290  lw          $v1, 0x290($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A94ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a94ac;
        }
    }
    ctx->pc = 0x2A9520u;
label_2a9520:
    // 0x2a9520: 0x8ea60030  lw          $a2, 0x30($s5)
    ctx->pc = 0x2a9520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2a9524: 0x8fb40280  lw          $s4, 0x280($sp)
    ctx->pc = 0x2a9524u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2a9528: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2a9528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2a952c: 0x8fb30284  lw          $s3, 0x284($sp)
    ctx->pc = 0x2a952cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x2a9530: 0x8fb20288  lw          $s2, 0x288($sp)
    ctx->pc = 0x2a9530u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x2a9534: 0x8fb1028c  lw          $s1, 0x28C($sp)
    ctx->pc = 0x2a9534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2a9538: 0x8fb00290  lw          $s0, 0x290($sp)
    ctx->pc = 0x2a9538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2a953c: 0x8fb60294  lw          $s6, 0x294($sp)
    ctx->pc = 0x2a953cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2a9540: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A9540u;
    SET_GPR_U32(ctx, 31, 0x2A9548u);
    ctx->pc = 0x2A9544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9540u;
            // 0x2a9544: 0x26a5001c  addiu       $a1, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9548u; }
        if (ctx->pc != 0x2A9548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9548u; }
        if (ctx->pc != 0x2A9548u) { return; }
    }
    ctx->pc = 0x2A9548u;
label_2a9548:
    // 0x2a9548: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2a9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2a954c: 0x5202001a  beql        $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A954Cu;
    {
        const bool branch_taken_0x2a954c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a954c) {
            ctx->pc = 0x2A9550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A954Cu;
            // 0x2a9550: 0x8ea60018  lw          $a2, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A95B8u;
            goto label_2a95b8;
        }
    }
    ctx->pc = 0x2A9554u;
    // 0x2a9554: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2a9554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a9558: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2a9558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a955c: 0xafb40200  sw          $s4, 0x200($sp)
    ctx->pc = 0x2a955cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 20));
    // 0x2a9560: 0xafb30204  sw          $s3, 0x204($sp)
    ctx->pc = 0x2a9560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 19));
    // 0x2a9564: 0xafb20208  sw          $s2, 0x208($sp)
    ctx->pc = 0x2a9564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 18));
    // 0x2a9568: 0xafb1020c  sw          $s1, 0x20C($sp)
    ctx->pc = 0x2a9568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 17));
    // 0x2a956c: 0xafb00210  sw          $s0, 0x210($sp)
    ctx->pc = 0x2a956cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 16));
    // 0x2a9570: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A9570u;
    SET_GPR_U32(ctx, 31, 0x2A9578u);
    ctx->pc = 0x2A9574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9570u;
            // 0x2a9574: 0xafb60214  sw          $s6, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9578u; }
        if (ctx->pc != 0x2A9578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9578u; }
        if (ctx->pc != 0x2A9578u) { return; }
    }
    ctx->pc = 0x2A9578u;
label_2a9578:
    // 0x2a9578: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a9578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a957c: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A957Cu;
    SET_GPR_U32(ctx, 31, 0x2A9584u);
    ctx->pc = 0x2A9580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A957Cu;
            // 0x2a9580: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9584u; }
        if (ctx->pc != 0x2A9584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9584u; }
        if (ctx->pc != 0x2A9584u) { return; }
    }
    ctx->pc = 0x2A9584u;
label_2a9584:
    // 0x2a9584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9588: 0xc0aa4ec  jal         func_2A93B0
    ctx->pc = 0x2A9588u;
    SET_GPR_U32(ctx, 31, 0x2A9590u);
    ctx->pc = 0x2A958Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9588u;
            // 0x2a958c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A93B0u;
    if (runtime->hasFunction(0x2A93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9590u; }
        if (ctx->pc != 0x2A9590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A93B0_0x2a93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9590u; }
        if (ctx->pc != 0x2A9590u) { return; }
    }
    ctx->pc = 0x2A9590u;
label_2a9590:
    // 0x2a9590: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a9590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a9594: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A9594u;
    SET_GPR_U32(ctx, 31, 0x2A959Cu);
    ctx->pc = 0x2A9598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9594u;
            // 0x2a9598: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A959Cu; }
        if (ctx->pc != 0x2A959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A959Cu; }
        if (ctx->pc != 0x2A959Cu) { return; }
    }
    ctx->pc = 0x2A959Cu;
label_2a959c:
    // 0x2a959c: 0x26a5001c  addiu       $a1, $s5, 0x1C
    ctx->pc = 0x2a959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x2a95a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a95a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a95a4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2a95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2a95a8: 0xc0aade8  jal         func_2AB7A0
    ctx->pc = 0x2A95A8u;
    SET_GPR_U32(ctx, 31, 0x2A95B0u);
    ctx->pc = 0x2A95ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95A8u;
            // 0x2a95ac: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB7A0u;
    if (runtime->hasFunction(0x2AB7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95B0u; }
        if (ctx->pc != 0x2A95B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB7A0_0x2ab7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95B0u; }
        if (ctx->pc != 0x2A95B0u) { return; }
    }
    ctx->pc = 0x2A95B0u;
label_2a95b0:
    // 0x2a95b0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2A95B0u;
    {
        const bool branch_taken_0x2a95b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95B0u;
            // 0x2a95b4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95b0) {
            ctx->pc = 0x2A9730u;
            goto label_2a9730;
        }
    }
    ctx->pc = 0x2A95B8u;
label_2a95b8:
    // 0x2a95b8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2a95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2a95bc: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A95BCu;
    SET_GPR_U32(ctx, 31, 0x2A95C4u);
    ctx->pc = 0x2A95C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95BCu;
            // 0x2a95c0: 0x26a50004  addiu       $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95C4u; }
        if (ctx->pc != 0x2A95C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95C4u; }
        if (ctx->pc != 0x2A95C4u) { return; }
    }
    ctx->pc = 0x2A95C4u;
label_2a95c4:
    // 0x2a95c4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2a95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a95c8: 0x26a50004  addiu       $a1, $s5, 0x4
    ctx->pc = 0x2a95c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2a95cc: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A95CCu;
    SET_GPR_U32(ctx, 31, 0x2A95D4u);
    ctx->pc = 0x2A95D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95CCu;
            // 0x2a95d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95D4u; }
        if (ctx->pc != 0x2A95D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A95D4u; }
        if (ctx->pc != 0x2A95D4u) { return; }
    }
    ctx->pc = 0x2A95D4u;
label_2a95d4:
    // 0x2a95d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A95D4u;
    {
        const bool branch_taken_0x2a95d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a95d4) {
            ctx->pc = 0x2A9620u;
            goto label_2a9620;
        }
    }
    ctx->pc = 0x2A95DCu;
label_2a95dc:
    // 0x2a95dc: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x2a95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x2a95e0: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a95e4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A95E4u;
    {
        const bool branch_taken_0x2a95e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A95E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95E4u;
            // 0x2a95e8: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95e4) {
            ctx->pc = 0x2A9620u;
            goto label_2a9620;
        }
    }
    ctx->pc = 0x2A95ECu;
    // 0x2a95ec: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2a95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a95f0: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x2a95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2a95f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a95f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a95f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A95F8u;
    {
        const bool branch_taken_0x2a95f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A95FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95F8u;
            // 0x2a95fc: 0xafa301e0  sw          $v1, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95f8) {
            ctx->pc = 0x2A9608u;
            goto label_2a9608;
        }
    }
    ctx->pc = 0x2A9600u;
    // 0x2a9600: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x2a9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x2a9604: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x2a9604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_2a9608:
    // 0x2a9608: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2a9608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a960c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a9610: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2a9610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x2a9614: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2a9614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x2a9618: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x2a9618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x2a961c: 0x0  nop
    ctx->pc = 0x2a961cu;
    // NOP
label_2a9620:
    // 0x2a9620: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2a9620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a9624: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2a9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2a9628: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9628u;
    {
        const bool branch_taken_0x2a9628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a9628) {
            ctx->pc = 0x2A9650u;
            goto label_2a9650;
        }
    }
    ctx->pc = 0x2A9630u;
    // 0x2a9630: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2a9630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2a9634: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2a9634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a9638: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x2A9638u;
    SET_GPR_U32(ctx, 31, 0x2A9640u);
    ctx->pc = 0x2A963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9638u;
            // 0x2a963c: 0x24a5fb78  addiu       $a1, $a1, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9640u; }
        if (ctx->pc != 0x2A9640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9640u; }
        if (ctx->pc != 0x2A9640u) { return; }
    }
    ctx->pc = 0x2A9640u;
label_2a9640:
    // 0x2a9640: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a9640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a9644: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a9644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a9648: 0x5040ffe4  beql        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2A9648u;
    {
        const bool branch_taken_0x2a9648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9648) {
            ctx->pc = 0x2A964Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9648u;
            // 0x2a964c: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A95DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a95dc;
        }
    }
    ctx->pc = 0x2A9650u;
label_2a9650:
    // 0x2a9650: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x2a9650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2a9654: 0x8fb301e0  lw          $s3, 0x1E0($sp)
    ctx->pc = 0x2a9654u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a9658: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2a9658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2a965c: 0x8fb201e4  lw          $s2, 0x1E4($sp)
    ctx->pc = 0x2a965cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x2a9660: 0x8fb101e8  lw          $s1, 0x1E8($sp)
    ctx->pc = 0x2a9660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2a9664: 0x8fb001ec  lw          $s0, 0x1EC($sp)
    ctx->pc = 0x2a9664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2a9668: 0x8fb401f0  lw          $s4, 0x1F0($sp)
    ctx->pc = 0x2a9668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a966c: 0x8fb601f4  lw          $s6, 0x1F4($sp)
    ctx->pc = 0x2a966cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x2a9670: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A9670u;
    SET_GPR_U32(ctx, 31, 0x2A9678u);
    ctx->pc = 0x2A9674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9670u;
            // 0x2a9674: 0x26a50004  addiu       $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9678u; }
        if (ctx->pc != 0x2A9678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9678u; }
        if (ctx->pc != 0x2A9678u) { return; }
    }
    ctx->pc = 0x2A9678u;
label_2a9678:
    // 0x2a9678: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2a9678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a967c: 0x1283002b  beq         $s4, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A967Cu;
    {
        const bool branch_taken_0x2a967c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a967c) {
            ctx->pc = 0x2A972Cu;
            goto label_2a972c;
        }
    }
    ctx->pc = 0x2A9684u;
    // 0x2a9684: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2a9684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2a9688: 0x26a50004  addiu       $a1, $s5, 0x4
    ctx->pc = 0x2a9688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2a968c: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A968Cu;
    SET_GPR_U32(ctx, 31, 0x2A9694u);
    ctx->pc = 0x2A9690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A968Cu;
            // 0x2a9690: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9694u; }
        if (ctx->pc != 0x2A9694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9694u; }
        if (ctx->pc != 0x2A9694u) { return; }
    }
    ctx->pc = 0x2A9694u;
label_2a9694:
    // 0x2a9694: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2a9694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a9698: 0x1283001a  beq         $s4, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A9698u;
    {
        const bool branch_taken_0x2a9698 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9698) {
            ctx->pc = 0x2A9704u;
            goto label_2a9704;
        }
    }
    ctx->pc = 0x2A96A0u;
    // 0x2a96a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2a96a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a96a4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2a96a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a96a8: 0xafb30140  sw          $s3, 0x140($sp)
    ctx->pc = 0x2a96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 19));
    // 0x2a96ac: 0xafb20144  sw          $s2, 0x144($sp)
    ctx->pc = 0x2a96acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 18));
    // 0x2a96b0: 0xafb10148  sw          $s1, 0x148($sp)
    ctx->pc = 0x2a96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 17));
    // 0x2a96b4: 0xafb0014c  sw          $s0, 0x14C($sp)
    ctx->pc = 0x2a96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 16));
    // 0x2a96b8: 0xafb40150  sw          $s4, 0x150($sp)
    ctx->pc = 0x2a96b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 20));
    // 0x2a96bc: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A96BCu;
    SET_GPR_U32(ctx, 31, 0x2A96C4u);
    ctx->pc = 0x2A96C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96BCu;
            // 0x2a96c0: 0xafb60154  sw          $s6, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96C4u; }
        if (ctx->pc != 0x2A96C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96C4u; }
        if (ctx->pc != 0x2A96C4u) { return; }
    }
    ctx->pc = 0x2A96C4u;
label_2a96c4:
    // 0x2a96c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a96c8: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A96C8u;
    SET_GPR_U32(ctx, 31, 0x2A96D0u);
    ctx->pc = 0x2A96CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96C8u;
            // 0x2a96cc: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96D0u; }
        if (ctx->pc != 0x2A96D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96D0u; }
        if (ctx->pc != 0x2A96D0u) { return; }
    }
    ctx->pc = 0x2A96D0u;
label_2a96d0:
    // 0x2a96d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a96d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96d4: 0xc0aa4ec  jal         func_2A93B0
    ctx->pc = 0x2A96D4u;
    SET_GPR_U32(ctx, 31, 0x2A96DCu);
    ctx->pc = 0x2A96D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96D4u;
            // 0x2a96d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A93B0u;
    if (runtime->hasFunction(0x2A93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96DCu; }
        if (ctx->pc != 0x2A96DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A93B0_0x2a93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96DCu; }
        if (ctx->pc != 0x2A96DCu) { return; }
    }
    ctx->pc = 0x2A96DCu;
label_2a96dc:
    // 0x2a96dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a96e0: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A96E0u;
    SET_GPR_U32(ctx, 31, 0x2A96E8u);
    ctx->pc = 0x2A96E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96E0u;
            // 0x2a96e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96E8u; }
        if (ctx->pc != 0x2A96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96E8u; }
        if (ctx->pc != 0x2A96E8u) { return; }
    }
    ctx->pc = 0x2A96E8u;
label_2a96e8:
    // 0x2a96e8: 0x26a50004  addiu       $a1, $s5, 0x4
    ctx->pc = 0x2a96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2a96ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a96ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96f0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2a96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a96f4: 0xc0aade8  jal         func_2AB7A0
    ctx->pc = 0x2A96F4u;
    SET_GPR_U32(ctx, 31, 0x2A96FCu);
    ctx->pc = 0x2A96F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96F4u;
            // 0x2a96f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB7A0u;
    if (runtime->hasFunction(0x2AB7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96FCu; }
        if (ctx->pc != 0x2A96FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB7A0_0x2ab7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A96FCu; }
        if (ctx->pc != 0x2A96FCu) { return; }
    }
    ctx->pc = 0x2A96FCu;
label_2a96fc:
    // 0x2a96fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A96FCu;
    {
        const bool branch_taken_0x2a96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a96fc) {
            ctx->pc = 0x2A972Cu;
            goto label_2a972c;
        }
    }
    ctx->pc = 0x2A9704u;
label_2a9704:
    // 0x2a9704: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a9704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a9708: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2a9708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2a970c: 0x8c63e188  lw          $v1, -0x1E78($v1)
    ctx->pc = 0x2a970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959496)));
    // 0x2a9710: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2a9710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a9714: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x2a9714u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
    // 0x2a9718: 0x8e840058  lw          $a0, 0x58($s4)
    ctx->pc = 0x2a9718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2a971c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A971Cu;
    {
        const bool branch_taken_0x2a971c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a971c) {
            ctx->pc = 0x2A972Cu;
            goto label_2a972c;
        }
    }
    ctx->pc = 0x2A9724u;
    // 0x2a9724: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a9724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9728: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a9728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a972c:
    // 0x2a972c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a972cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a9730:
    // 0x2a9730: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a9730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9734: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a9734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9738: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a973c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a973cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a974c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A974Cu;
            // 0x2a9750: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9754u;
    // 0x2a9754: 0x0  nop
    ctx->pc = 0x2a9754u;
    // NOP
    // 0x2a9758: 0x0  nop
    ctx->pc = 0x2a9758u;
    // NOP
    // 0x2a975c: 0x0  nop
    ctx->pc = 0x2a975cu;
    // NOP
}
