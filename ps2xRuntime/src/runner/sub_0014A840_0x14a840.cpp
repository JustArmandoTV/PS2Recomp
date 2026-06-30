#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A840
// Address: 0x14a840 - 0x14a9c0
void sub_0014A840_0x14a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A840_0x14a840");
#endif

    switch (ctx->pc) {
        case 0x14a8d8u: goto label_14a8d8;
        case 0x14a8e0u: goto label_14a8e0;
        case 0x14a904u: goto label_14a904;
        case 0x14a90cu: goto label_14a90c;
        case 0x14a930u: goto label_14a930;
        case 0x14a93cu: goto label_14a93c;
        case 0x14a94cu: goto label_14a94c;
        case 0x14a958u: goto label_14a958;
        case 0x14a96cu: goto label_14a96c;
        case 0x14a988u: goto label_14a988;
        default: break;
    }

    ctx->pc = 0x14a840u;

    // 0x14a840: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x14a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x14a844: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14a848: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14a848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14a84c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14a84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14a850: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14a854: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14a858: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x14a858u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a85c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14a860: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x14a860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a864: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14a864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14a868: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x14a868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a86c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14a870: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x14a874: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14a878: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x14a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x14a87c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14a880: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x14a880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x14a884: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14a884u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14a888: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14a888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14a88c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14a88cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14a890: 0x82b821  addu        $s7, $a0, $v0
    ctx->pc = 0x14a890u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14a894: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x14a894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x14a898: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x14a898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a89c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14a89cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14a8a0: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x14a8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14a8a4: 0x86510008  lh          $s1, 0x8($s2)
    ctx->pc = 0x14a8a4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14a8a8: 0xc6540084  lwc1        $f20, 0x84($s2)
    ctx->pc = 0x14a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14a8ac: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x14a8acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x14a8b0: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x14a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x14a8b4: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x14a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x14a8b8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x14a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x14a8bc: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x14a8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a8c0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x14a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14a8c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14a8c8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x14a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14a8cc: 0xc3f021  addu        $fp, $a2, $v1
    ctx->pc = 0x14a8ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14a8d0: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14A8D0u;
    SET_GPR_U32(ctx, 31, 0x14A8D8u);
    ctx->pc = 0x14A8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8D0u;
            // 0x14a8d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D8u; }
        if (ctx->pc != 0x14A8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D8u; }
        if (ctx->pc != 0x14A8D8u) { return; }
    }
    ctx->pc = 0x14A8D8u;
label_14a8d8:
    // 0x14a8d8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14A8D8u;
    SET_GPR_U32(ctx, 31, 0x14A8E0u);
    ctx->pc = 0x14A8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8D8u;
            // 0x14a8dc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8E0u; }
        if (ctx->pc != 0x14A8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8E0u; }
        if (ctx->pc != 0x14A8E0u) { return; }
    }
    ctx->pc = 0x14A8E0u;
label_14a8e0:
    // 0x14a8e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14a8e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14a8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8e8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x14a8e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14a8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14a8f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x14a8f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8fc: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x14A8FCu;
    SET_GPR_U32(ctx, 31, 0x14A904u);
    ctx->pc = 0x14A900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8FCu;
            // 0x14a900: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A904u; }
        if (ctx->pc != 0x14A904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A904u; }
        if (ctx->pc != 0x14A904u) { return; }
    }
    ctx->pc = 0x14A904u;
label_14a904:
    // 0x14a904: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14A904u;
    SET_GPR_U32(ctx, 31, 0x14A90Cu);
    ctx->pc = 0x14A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A904u;
            // 0x14a908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A90Cu; }
        if (ctx->pc != 0x14A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A90Cu; }
        if (ctx->pc != 0x14A90Cu) { return; }
    }
    ctx->pc = 0x14A90Cu;
label_14a90c:
    // 0x14a90c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14a90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a910: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14a910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a914: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x14a914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a91c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14a91cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14a920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a924: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14a924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a928: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x14A928u;
    SET_GPR_U32(ctx, 31, 0x14A930u);
    ctx->pc = 0x14A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A928u;
            // 0x14a92c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A930u; }
        if (ctx->pc != 0x14A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A930u; }
        if (ctx->pc != 0x14A930u) { return; }
    }
    ctx->pc = 0x14A930u;
label_14a930:
    // 0x14a930: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14a934: 0xc04cce4  jal         func_133390
    ctx->pc = 0x14A934u;
    SET_GPR_U32(ctx, 31, 0x14A93Cu);
    ctx->pc = 0x14A938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A934u;
            // 0x14a938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A93Cu; }
        if (ctx->pc != 0x14A93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A93Cu; }
        if (ctx->pc != 0x14A93Cu) { return; }
    }
    ctx->pc = 0x14A93Cu;
label_14a93c:
    // 0x14a93c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14a940: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14a940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a944: 0xc04cca0  jal         func_133280
    ctx->pc = 0x14A944u;
    SET_GPR_U32(ctx, 31, 0x14A94Cu);
    ctx->pc = 0x14A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A944u;
            // 0x14a948: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A94Cu; }
        if (ctx->pc != 0x14A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A94Cu; }
        if (ctx->pc != 0x14A94Cu) { return; }
    }
    ctx->pc = 0x14A94Cu;
label_14a94c:
    // 0x14a94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a950: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x14A950u;
    SET_GPR_U32(ctx, 31, 0x14A958u);
    ctx->pc = 0x14A954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A950u;
            // 0x14a954: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A958u; }
        if (ctx->pc != 0x14A958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A958u; }
        if (ctx->pc != 0x14A958u) { return; }
    }
    ctx->pc = 0x14A958u;
label_14a958:
    // 0x14a958: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14a958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a95c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x14a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14a960: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14a960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14a964: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14A964u;
    SET_GPR_U32(ctx, 31, 0x14A96Cu);
    ctx->pc = 0x14A968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A964u;
            // 0x14a968: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (runtime->hasFunction(0x14ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x14ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A96Cu; }
        if (ctx->pc != 0x14A96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ABD0_0x14abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A96Cu; }
        if (ctx->pc != 0x14A96Cu) { return; }
    }
    ctx->pc = 0x14A96Cu;
label_14a96c:
    // 0x14a96c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a970: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x14a970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x14a974: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A974u;
    {
        const bool branch_taken_0x14a974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a974) {
            ctx->pc = 0x14A978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A974u;
            // 0x14a978: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A98Cu;
            goto label_14a98c;
        }
    }
    ctx->pc = 0x14A97Cu;
    // 0x14a97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a980: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14A980u;
    SET_GPR_U32(ctx, 31, 0x14A988u);
    ctx->pc = 0x14A984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A980u;
            // 0x14a984: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A988u; }
        if (ctx->pc != 0x14A988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A988u; }
        if (ctx->pc != 0x14A988u) { return; }
    }
    ctx->pc = 0x14A988u;
label_14a988:
    // 0x14a988: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_14a98c:
    // 0x14a98c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14a990: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14a990u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14a994: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14a998: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14a998u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14a99c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14a99cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a9a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14a9a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a9a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14a9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a9a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14a9a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a9ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14a9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a9b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14a9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a9b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14a9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9B8u;
            // 0x14a9bc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A9C0u;
}
