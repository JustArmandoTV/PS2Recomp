#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004993C0
// Address: 0x4993c0 - 0x499560
void sub_004993C0_0x4993c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004993C0_0x4993c0");
#endif

    switch (ctx->pc) {
        case 0x4993f4u: goto label_4993f4;
        case 0x49941cu: goto label_49941c;
        case 0x499428u: goto label_499428;
        case 0x499438u: goto label_499438;
        case 0x4994a0u: goto label_4994a0;
        case 0x4994acu: goto label_4994ac;
        case 0x4994bcu: goto label_4994bc;
        case 0x4994f4u: goto label_4994f4;
        case 0x499500u: goto label_499500;
        case 0x499510u: goto label_499510;
        default: break;
    }

    ctx->pc = 0x4993c0u;

    // 0x4993c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4993c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4993c4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x4993c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4993c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4993c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4993cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4993d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4993d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4993d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4993d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4993d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4993d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4993dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4993dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4993e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4993e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4993e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4993e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4993e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4993e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4993ec: 0xc04a508  jal         func_129420
    ctx->pc = 0x4993ECu;
    SET_GPR_U32(ctx, 31, 0x4993F4u);
    ctx->pc = 0x4993F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4993ECu;
            // 0x4993f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4993F4u; }
        if (ctx->pc != 0x4993F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4993F4u; }
        if (ctx->pc != 0x4993F4u) { return; }
    }
    ctx->pc = 0x4993F4u;
label_4993f4:
    // 0x4993f4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4993f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4993f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4993F8u;
    {
        const bool branch_taken_0x4993f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4993FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4993F8u;
            // 0x4993fc: 0x2650001c  addiu       $s0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993f8) {
            ctx->pc = 0x499458u;
            goto label_499458;
        }
    }
    ctx->pc = 0x499400u;
    // 0x499400: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x499400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x499404: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49940c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49940cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499410: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x499410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x499414: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499414u;
    SET_GPR_U32(ctx, 31, 0x49941Cu);
    ctx->pc = 0x499418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499414u;
            // 0x499418: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49941Cu; }
        if (ctx->pc != 0x49941Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49941Cu; }
        if (ctx->pc != 0x49941Cu) { return; }
    }
    ctx->pc = 0x49941Cu;
label_49941c:
    // 0x49941c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x49941cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x499420: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x499420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499424: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x499424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499428:
    // 0x499428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x499428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49942c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499430: 0xc04a508  jal         func_129420
    ctx->pc = 0x499430u;
    SET_GPR_U32(ctx, 31, 0x499438u);
    ctx->pc = 0x499434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499430u;
            // 0x499434: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499438u; }
        if (ctx->pc != 0x499438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499438u; }
        if (ctx->pc != 0x499438u) { return; }
    }
    ctx->pc = 0x499438u;
label_499438:
    // 0x499438: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x499438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x49943c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x49943cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x499440: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x499440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x499444: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x499444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499448: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499448u;
    {
        const bool branch_taken_0x499448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49944Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499448u;
            // 0x49944c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499448) {
            ctx->pc = 0x499428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499428;
        }
    }
    ctx->pc = 0x499450u;
    // 0x499450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x499450u;
    {
        const bool branch_taken_0x499450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499450u;
            // 0x499454: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499450) {
            ctx->pc = 0x499460u;
            goto label_499460;
        }
    }
    ctx->pc = 0x499458u;
label_499458:
    // 0x499458: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x499458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x49945c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x49945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_499460:
    // 0x499460: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x499460u;
    {
        const bool branch_taken_0x499460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499460) {
            ctx->pc = 0x499464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x499460u;
            // 0x499464: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499530u;
            goto label_499530;
        }
    }
    ctx->pc = 0x499468u;
    // 0x499468: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x499468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x49946c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x49946Cu;
    {
        const bool branch_taken_0x49946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49946c) {
            ctx->pc = 0x499470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49946Cu;
            // 0x499470: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4994DCu;
            goto label_4994dc;
        }
    }
    ctx->pc = 0x499474u;
    // 0x499474: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x499474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x499478: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49947c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x49947cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x499480: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x499488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49948c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499490: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x499490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x499494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499498: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499498u;
    SET_GPR_U32(ctx, 31, 0x4994A0u);
    ctx->pc = 0x49949Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499498u;
            // 0x49949c: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4994A0u; }
        if (ctx->pc != 0x4994A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4994A0u; }
        if (ctx->pc != 0x4994A0u) { return; }
    }
    ctx->pc = 0x4994A0u;
label_4994a0:
    // 0x4994a0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x4994a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x4994a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4994a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4994a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4994ac:
    // 0x4994ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4994acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4994b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994b4: 0xc04a508  jal         func_129420
    ctx->pc = 0x4994B4u;
    SET_GPR_U32(ctx, 31, 0x4994BCu);
    ctx->pc = 0x4994B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4994B4u;
            // 0x4994b8: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4994BCu; }
        if (ctx->pc != 0x4994BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4994BCu; }
        if (ctx->pc != 0x4994BCu) { return; }
    }
    ctx->pc = 0x4994BCu;
label_4994bc:
    // 0x4994bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4994c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4994c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4994c4: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x4994c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4994c8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4994c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4994cc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4994CCu;
    {
        const bool branch_taken_0x4994cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4994D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4994CCu;
            // 0x4994d0: 0x26940058  addiu       $s4, $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994cc) {
            ctx->pc = 0x4994ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4994ac;
        }
    }
    ctx->pc = 0x4994D4u;
    // 0x4994d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4994D4u;
    {
        const bool branch_taken_0x4994d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4994D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4994D4u;
            // 0x4994d8: 0x2121023  subu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994d4) {
            ctx->pc = 0x499538u;
            goto label_499538;
        }
    }
    ctx->pc = 0x4994DCu;
label_4994dc:
    // 0x4994dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4994dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4994e0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4994e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4994e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4994e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4994e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4994e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994ec: 0xc0400c4  jal         func_100310
    ctx->pc = 0x4994ECu;
    SET_GPR_U32(ctx, 31, 0x4994F4u);
    ctx->pc = 0x4994F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4994ECu;
            // 0x4994f0: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4994F4u; }
        if (ctx->pc != 0x4994F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4994F4u; }
        if (ctx->pc != 0x4994F4u) { return; }
    }
    ctx->pc = 0x4994F4u;
label_4994f4:
    // 0x4994f4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x4994f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x4994f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4994f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4994fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4994fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499500:
    // 0x499500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x499500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x499504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499508: 0xc04a508  jal         func_129420
    ctx->pc = 0x499508u;
    SET_GPR_U32(ctx, 31, 0x499510u);
    ctx->pc = 0x49950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499508u;
            // 0x49950c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499510u; }
        if (ctx->pc != 0x499510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499510u; }
        if (ctx->pc != 0x499510u) { return; }
    }
    ctx->pc = 0x499510u;
label_499510:
    // 0x499510: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x499510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x499514: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x499514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x499518: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x499518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x49951c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x49951cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499520: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499520u;
    {
        const bool branch_taken_0x499520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499520u;
            // 0x499524: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499520) {
            ctx->pc = 0x499500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499500;
        }
    }
    ctx->pc = 0x499528u;
    // 0x499528: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x499528u;
    {
        const bool branch_taken_0x499528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x499528) {
            ctx->pc = 0x499534u;
            goto label_499534;
        }
    }
    ctx->pc = 0x499530u;
label_499530:
    // 0x499530: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x499530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_499534:
    // 0x499534: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x499534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_499538:
    // 0x499538: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x499538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49953c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49953cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499540: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x499540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x499544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x499548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49954c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49954cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499550: 0x3e00008  jr          $ra
    ctx->pc = 0x499550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499550u;
            // 0x499554: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x499558u;
    // 0x499558: 0x0  nop
    ctx->pc = 0x499558u;
    // NOP
    // 0x49955c: 0x0  nop
    ctx->pc = 0x49955cu;
    // NOP
}
