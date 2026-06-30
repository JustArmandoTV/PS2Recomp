#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133FD0
// Address: 0x133fd0 - 0x1340f0
void sub_00133FD0_0x133fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133FD0_0x133fd0");
#endif

    switch (ctx->pc) {
        case 0x134038u: goto label_134038;
        case 0x134090u: goto label_134090;
        case 0x134098u: goto label_134098;
        case 0x1340bcu: goto label_1340bc;
        default: break;
    }

    ctx->pc = 0x133fd0u;

    // 0x133fd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x133fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x133fd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x133fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x133fd8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x133fd8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x133fdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x133fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x133fe0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x133fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x133fe4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x133fe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133fec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x133fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ff0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133ff4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x133ff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133ffc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x133ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134004: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x134004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13400c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13400cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134010: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x134010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x134014: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x134014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x134018: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x134018u;
    {
        const bool branch_taken_0x134018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13401Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134018u;
            // 0x13401c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134018) {
            ctx->pc = 0x1340BCu;
            goto label_1340bc;
        }
    }
    ctx->pc = 0x134020u;
    // 0x134020: 0xaf8080c4  sw          $zero, -0x7F3C($gp)
    ctx->pc = 0x134020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 0));
    // 0x134024: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x134024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134028: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x134028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13402c: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x13402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x134030: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x134030u;
    SET_GPR_U32(ctx, 31, 0x134038u);
    ctx->pc = 0x134034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134030u;
            // 0x134034: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134038u; }
        if (ctx->pc != 0x134038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134038u; }
        if (ctx->pc != 0x134038u) { return; }
    }
    ctx->pc = 0x134038u;
label_134038:
    // 0x134038: 0xaf9480e0  sw          $s4, -0x7F20($gp)
    ctx->pc = 0x134038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 20));
    // 0x13403c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x13403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134040: 0xaf9580e4  sw          $s5, -0x7F1C($gp)
    ctx->pc = 0x134040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934756), GPR_U32(ctx, 21));
    // 0x134044: 0xaf9680e8  sw          $s6, -0x7F18($gp)
    ctx->pc = 0x134044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934760), GPR_U32(ctx, 22));
    // 0x134048: 0xaf9380ec  sw          $s3, -0x7F14($gp)
    ctx->pc = 0x134048u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934764), GPR_U32(ctx, 19));
    // 0x13404c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x13404cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x134050: 0xaf8380f0  sw          $v1, -0x7F10($gp)
    ctx->pc = 0x134050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934768), GPR_U32(ctx, 3));
    // 0x134054: 0xe78080fc  swc1        $f0, -0x7F04($gp)
    ctx->pc = 0x134054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934780), bits); }
    // 0x134058: 0xaf9280f8  sw          $s2, -0x7F08($gp)
    ctx->pc = 0x134058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934776), GPR_U32(ctx, 18));
    // 0x13405c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13405Cu;
    {
        const bool branch_taken_0x13405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13405Cu;
            // 0x134060: 0xaf9080f4  sw          $s0, -0x7F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934772), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13405c) {
            ctx->pc = 0x1340A0u;
            goto label_1340a0;
        }
    }
    ctx->pc = 0x134064u;
    // 0x134064: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134064u;
    {
        const bool branch_taken_0x134064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x134064) {
            ctx->pc = 0x134074u;
            goto label_134074;
        }
    }
    ctx->pc = 0x13406Cu;
    // 0x13406c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13406Cu;
    {
        const bool branch_taken_0x13406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13406Cu;
            // 0x134070: 0xaf9180d0  sw          $s1, -0x7F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934736), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13406c) {
            ctx->pc = 0x134080u;
            goto label_134080;
        }
    }
    ctx->pc = 0x134074u;
label_134074:
    // 0x134074: 0x3c110063  lui         $s1, 0x63
    ctx->pc = 0x134074u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
    // 0x134078: 0x26311230  addiu       $s1, $s1, 0x1230
    ctx->pc = 0x134078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4656));
    // 0x13407c: 0xaf9180d0  sw          $s1, -0x7F30($gp)
    ctx->pc = 0x13407cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934736), GPR_U32(ctx, 17));
label_134080:
    // 0x134080: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x134080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x134084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134088: 0xc04e1b4  jal         func_1386D0
    ctx->pc = 0x134088u;
    SET_GPR_U32(ctx, 31, 0x134090u);
    ctx->pc = 0x13408Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134088u;
            // 0x13408c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386D0u;
    if (runtime->hasFunction(0x1386D0u)) {
        auto targetFn = runtime->lookupFunction(0x1386D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134090u; }
        if (ctx->pc != 0x134090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386D0_0x1386d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134090u; }
        if (ctx->pc != 0x134090u) { return; }
    }
    ctx->pc = 0x134090u;
label_134090:
    // 0x134090: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x134090u;
    SET_GPR_U32(ctx, 31, 0x134098u);
    ctx->pc = 0x134094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134090u;
            // 0x134094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134098u; }
        if (ctx->pc != 0x134098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134098u; }
        if (ctx->pc != 0x134098u) { return; }
    }
    ctx->pc = 0x134098u;
label_134098:
    // 0x134098: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134098u;
    {
        const bool branch_taken_0x134098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134098u;
            // 0x13409c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134098) {
            ctx->pc = 0x1340C0u;
            goto label_1340c0;
        }
    }
    ctx->pc = 0x1340A0u;
label_1340a0:
    // 0x1340a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1340a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1340a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1340a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1340acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1340b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340b4: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x1340B4u;
    SET_GPR_U32(ctx, 31, 0x1340BCu);
    ctx->pc = 0x1340B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1340B4u;
            // 0x1340b8: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340BCu; }
        if (ctx->pc != 0x1340BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340BCu; }
        if (ctx->pc != 0x1340BCu) { return; }
    }
    ctx->pc = 0x1340BCu;
label_1340bc:
    // 0x1340bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1340bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1340c0:
    // 0x1340c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1340c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1340c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1340c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1340c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1340c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1340cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1340ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1340d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1340d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1340d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1340d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1340d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1340d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1340dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1340DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1340E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1340DCu;
            // 0x1340e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1340E4u;
    // 0x1340e4: 0x0  nop
    ctx->pc = 0x1340e4u;
    // NOP
    // 0x1340e8: 0x0  nop
    ctx->pc = 0x1340e8u;
    // NOP
    // 0x1340ec: 0x0  nop
    ctx->pc = 0x1340ecu;
    // NOP
}
