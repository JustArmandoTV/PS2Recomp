#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038C7E0
// Address: 0x38c7e0 - 0x38c8f0
void sub_0038C7E0_0x38c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C7E0_0x38c7e0");
#endif

    switch (ctx->pc) {
        case 0x38c7e0u: goto label_38c7e0;
        case 0x38c7e4u: goto label_38c7e4;
        case 0x38c7e8u: goto label_38c7e8;
        case 0x38c7ecu: goto label_38c7ec;
        case 0x38c7f0u: goto label_38c7f0;
        case 0x38c7f4u: goto label_38c7f4;
        case 0x38c7f8u: goto label_38c7f8;
        case 0x38c7fcu: goto label_38c7fc;
        case 0x38c800u: goto label_38c800;
        case 0x38c804u: goto label_38c804;
        case 0x38c808u: goto label_38c808;
        case 0x38c80cu: goto label_38c80c;
        case 0x38c810u: goto label_38c810;
        case 0x38c814u: goto label_38c814;
        case 0x38c818u: goto label_38c818;
        case 0x38c81cu: goto label_38c81c;
        case 0x38c820u: goto label_38c820;
        case 0x38c824u: goto label_38c824;
        case 0x38c828u: goto label_38c828;
        case 0x38c82cu: goto label_38c82c;
        case 0x38c830u: goto label_38c830;
        case 0x38c834u: goto label_38c834;
        case 0x38c838u: goto label_38c838;
        case 0x38c83cu: goto label_38c83c;
        case 0x38c840u: goto label_38c840;
        case 0x38c844u: goto label_38c844;
        case 0x38c848u: goto label_38c848;
        case 0x38c84cu: goto label_38c84c;
        case 0x38c850u: goto label_38c850;
        case 0x38c854u: goto label_38c854;
        case 0x38c858u: goto label_38c858;
        case 0x38c85cu: goto label_38c85c;
        case 0x38c860u: goto label_38c860;
        case 0x38c864u: goto label_38c864;
        case 0x38c868u: goto label_38c868;
        case 0x38c86cu: goto label_38c86c;
        case 0x38c870u: goto label_38c870;
        case 0x38c874u: goto label_38c874;
        case 0x38c878u: goto label_38c878;
        case 0x38c87cu: goto label_38c87c;
        case 0x38c880u: goto label_38c880;
        case 0x38c884u: goto label_38c884;
        case 0x38c888u: goto label_38c888;
        case 0x38c88cu: goto label_38c88c;
        case 0x38c890u: goto label_38c890;
        case 0x38c894u: goto label_38c894;
        case 0x38c898u: goto label_38c898;
        case 0x38c89cu: goto label_38c89c;
        case 0x38c8a0u: goto label_38c8a0;
        case 0x38c8a4u: goto label_38c8a4;
        case 0x38c8a8u: goto label_38c8a8;
        case 0x38c8acu: goto label_38c8ac;
        case 0x38c8b0u: goto label_38c8b0;
        case 0x38c8b4u: goto label_38c8b4;
        case 0x38c8b8u: goto label_38c8b8;
        case 0x38c8bcu: goto label_38c8bc;
        case 0x38c8c0u: goto label_38c8c0;
        case 0x38c8c4u: goto label_38c8c4;
        case 0x38c8c8u: goto label_38c8c8;
        case 0x38c8ccu: goto label_38c8cc;
        case 0x38c8d0u: goto label_38c8d0;
        case 0x38c8d4u: goto label_38c8d4;
        case 0x38c8d8u: goto label_38c8d8;
        case 0x38c8dcu: goto label_38c8dc;
        case 0x38c8e0u: goto label_38c8e0;
        case 0x38c8e4u: goto label_38c8e4;
        case 0x38c8e8u: goto label_38c8e8;
        case 0x38c8ecu: goto label_38c8ec;
        default: break;
    }

    ctx->pc = 0x38c7e0u;

label_38c7e0:
    // 0x38c7e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38c7e4:
    // 0x38c7e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_38c7e8:
    // 0x38c7e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38c7ec:
    // 0x38c7ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38c7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38c7f0:
    // 0x38c7f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38c7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38c7f4:
    // 0x38c7f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38c7f8:
    // 0x38c7f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38c7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38c7fc:
    // 0x38c7fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38c800:
    // 0x38c800: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38c800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38c804:
    // 0x38c804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c808:
    // 0x38c808: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x38c808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_38c80c:
    // 0x38c80c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_38c810:
    if (ctx->pc == 0x38C810u) {
        ctx->pc = 0x38C810u;
            // 0x38c810: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38C814u;
        goto label_38c814;
    }
    ctx->pc = 0x38C80Cu;
    {
        const bool branch_taken_0x38c80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C80Cu;
            // 0x38c810: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c80c) {
            ctx->pc = 0x38C8A8u;
            goto label_38c8a8;
        }
    }
    ctx->pc = 0x38C814u;
label_38c814:
    // 0x38c814: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x38c814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38c818:
    // 0x38c818: 0xc0e7d24  jal         func_39F490
label_38c81c:
    if (ctx->pc == 0x38C81Cu) {
        ctx->pc = 0x38C81Cu;
            // 0x38c81c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x38C820u;
        goto label_38c820;
    }
    ctx->pc = 0x38C818u;
    SET_GPR_U32(ctx, 31, 0x38C820u);
    ctx->pc = 0x38C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C818u;
            // 0x38c81c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F490u;
    if (runtime->hasFunction(0x39F490u)) {
        auto targetFn = runtime->lookupFunction(0x39F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C820u; }
        if (ctx->pc != 0x38C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F490_0x39f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C820u; }
        if (ctx->pc != 0x38C820u) { return; }
    }
    ctx->pc = 0x38C820u;
label_38c820:
    // 0x38c820: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x38c820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_38c824:
    // 0x38c824: 0xc054c3c  jal         func_1530F0
label_38c828:
    if (ctx->pc == 0x38C828u) {
        ctx->pc = 0x38C828u;
            // 0x38c828: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38C82Cu;
        goto label_38c82c;
    }
    ctx->pc = 0x38C824u;
    SET_GPR_U32(ctx, 31, 0x38C82Cu);
    ctx->pc = 0x38C828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C824u;
            // 0x38c828: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C82Cu; }
        if (ctx->pc != 0x38C82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C82Cu; }
        if (ctx->pc != 0x38C82Cu) { return; }
    }
    ctx->pc = 0x38C82Cu;
label_38c82c:
    // 0x38c82c: 0xc054c40  jal         func_153100
label_38c830:
    if (ctx->pc == 0x38C830u) {
        ctx->pc = 0x38C830u;
            // 0x38c830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C834u;
        goto label_38c834;
    }
    ctx->pc = 0x38C82Cu;
    SET_GPR_U32(ctx, 31, 0x38C834u);
    ctx->pc = 0x38C830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C82Cu;
            // 0x38c830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C834u; }
        if (ctx->pc != 0x38C834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C834u; }
        if (ctx->pc != 0x38C834u) { return; }
    }
    ctx->pc = 0x38C834u;
label_38c834:
    // 0x38c834: 0x5640000d  bnel        $s2, $zero, . + 4 + (0xD << 2)
label_38c838:
    if (ctx->pc == 0x38C838u) {
        ctx->pc = 0x38C838u;
            // 0x38c838: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x38C83Cu;
        goto label_38c83c;
    }
    ctx->pc = 0x38C834u;
    {
        const bool branch_taken_0x38c834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c834) {
            ctx->pc = 0x38C838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C834u;
            // 0x38c838: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C86Cu;
            goto label_38c86c;
        }
    }
    ctx->pc = 0x38C83Cu;
label_38c83c:
    // 0x38c83c: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x38c83cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_38c840:
    // 0x38c840: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38c840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c844:
    // 0x38c844: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c848:
    // 0x38c848: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38c848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38c84c:
    // 0x38c84c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x38c84cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_38c850:
    // 0x38c850: 0x320f809  jalr        $t9
label_38c854:
    if (ctx->pc == 0x38C854u) {
        ctx->pc = 0x38C854u;
            // 0x38c854: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38C858u;
        goto label_38c858;
    }
    ctx->pc = 0x38C850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C858u);
        ctx->pc = 0x38C854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C850u;
            // 0x38c854: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C858u; }
            if (ctx->pc != 0x38C858u) { return; }
        }
        }
    }
    ctx->pc = 0x38C858u;
label_38c858:
    // 0x38c858: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c85c:
    // 0x38c85c: 0x1e00fff8  bgtz        $s0, . + 4 + (-0x8 << 2)
label_38c860:
    if (ctx->pc == 0x38C860u) {
        ctx->pc = 0x38C860u;
            // 0x38c860: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38C864u;
        goto label_38c864;
    }
    ctx->pc = 0x38C85Cu;
    {
        const bool branch_taken_0x38c85c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38C860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C85Cu;
            // 0x38c860: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c85c) {
            ctx->pc = 0x38C840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38c840;
        }
    }
    ctx->pc = 0x38C864u;
label_38c864:
    // 0x38c864: 0x1000000c  b           . + 4 + (0xC << 2)
label_38c868:
    if (ctx->pc == 0x38C868u) {
        ctx->pc = 0x38C86Cu;
        goto label_38c86c;
    }
    ctx->pc = 0x38C864u;
    {
        const bool branch_taken_0x38c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c864) {
            ctx->pc = 0x38C898u;
            goto label_38c898;
        }
    }
    ctx->pc = 0x38C86Cu;
label_38c86c:
    // 0x38c86c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c870:
    // 0x38c870: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c874:
    // 0x38c874: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38c874u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38c878:
    // 0x38c878: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38c878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38c87c:
    // 0x38c87c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x38c87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_38c880:
    // 0x38c880: 0x320f809  jalr        $t9
label_38c884:
    if (ctx->pc == 0x38C884u) {
        ctx->pc = 0x38C884u;
            // 0x38c884: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C888u;
        goto label_38c888;
    }
    ctx->pc = 0x38C880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C888u);
        ctx->pc = 0x38C884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C880u;
            // 0x38c884: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C888u; }
            if (ctx->pc != 0x38C888u) { return; }
        }
        }
    }
    ctx->pc = 0x38C888u;
label_38c888:
    // 0x38c888: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c88c:
    // 0x38c88c: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_38c890:
    if (ctx->pc == 0x38C890u) {
        ctx->pc = 0x38C890u;
            // 0x38c890: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38C894u;
        goto label_38c894;
    }
    ctx->pc = 0x38C88Cu;
    {
        const bool branch_taken_0x38c88c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38C890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C88Cu;
            // 0x38c890: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c88c) {
            ctx->pc = 0x38C86Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38c86c;
        }
    }
    ctx->pc = 0x38C894u;
label_38c894:
    // 0x38c894: 0x0  nop
    ctx->pc = 0x38c894u;
    // NOP
label_38c898:
    // 0x38c898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c89c:
    // 0x38c89c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38c89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38c8a0:
    // 0x38c8a0: 0xc054c3c  jal         func_1530F0
label_38c8a4:
    if (ctx->pc == 0x38C8A4u) {
        ctx->pc = 0x38C8A4u;
            // 0x38c8a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38C8A8u;
        goto label_38c8a8;
    }
    ctx->pc = 0x38C8A0u;
    SET_GPR_U32(ctx, 31, 0x38C8A8u);
    ctx->pc = 0x38C8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C8A0u;
            // 0x38c8a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C8A8u; }
        if (ctx->pc != 0x38C8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C8A8u; }
        if (ctx->pc != 0x38C8A8u) { return; }
    }
    ctx->pc = 0x38C8A8u;
label_38c8a8:
    // 0x38c8a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38c8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38c8ac:
    // 0x38c8ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c8b0:
    // 0x38c8b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38c8b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38c8b4:
    // 0x38c8b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38c8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38c8b8:
    // 0x38c8b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38c8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38c8bc:
    // 0x38c8bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38c8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38c8c0:
    // 0x38c8c0: 0x3e00008  jr          $ra
label_38c8c4:
    if (ctx->pc == 0x38C8C4u) {
        ctx->pc = 0x38C8C4u;
            // 0x38c8c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38C8C8u;
        goto label_38c8c8;
    }
    ctx->pc = 0x38C8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C8C0u;
            // 0x38c8c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C8C8u;
label_38c8c8:
    // 0x38c8c8: 0x0  nop
    ctx->pc = 0x38c8c8u;
    // NOP
label_38c8cc:
    // 0x38c8cc: 0x0  nop
    ctx->pc = 0x38c8ccu;
    // NOP
label_38c8d0:
    // 0x38c8d0: 0x3e00008  jr          $ra
label_38c8d4:
    if (ctx->pc == 0x38C8D4u) {
        ctx->pc = 0x38C8D8u;
        goto label_38c8d8;
    }
    ctx->pc = 0x38C8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C8D8u;
label_38c8d8:
    // 0x38c8d8: 0x0  nop
    ctx->pc = 0x38c8d8u;
    // NOP
label_38c8dc:
    // 0x38c8dc: 0x0  nop
    ctx->pc = 0x38c8dcu;
    // NOP
label_38c8e0:
    // 0x38c8e0: 0x3e00008  jr          $ra
label_38c8e4:
    if (ctx->pc == 0x38C8E4u) {
        ctx->pc = 0x38C8E8u;
        goto label_38c8e8;
    }
    ctx->pc = 0x38C8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C8E8u;
label_38c8e8:
    // 0x38c8e8: 0x0  nop
    ctx->pc = 0x38c8e8u;
    // NOP
label_38c8ec:
    // 0x38c8ec: 0x0  nop
    ctx->pc = 0x38c8ecu;
    // NOP
}
