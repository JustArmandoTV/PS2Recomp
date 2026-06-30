#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A790
// Address: 0x28a790 - 0x28a900
void sub_0028A790_0x28a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A790_0x28a790");
#endif

    switch (ctx->pc) {
        case 0x28a7e0u: goto label_28a7e0;
        case 0x28a7f4u: goto label_28a7f4;
        case 0x28a828u: goto label_28a828;
        case 0x28a8c0u: goto label_28a8c0;
        default: break;
    }

    ctx->pc = 0x28a790u;

    // 0x28a790: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28a794: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28a798: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28a79c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28a7a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28a7a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a7a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28a7a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a7b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28a7b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28a7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28a7b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28a7b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28a7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28a7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a7c4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A7C4u;
    {
        const bool branch_taken_0x28a7c4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x28A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7C4u;
            // 0x28a7c8: 0x58043  sra         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7c4) {
            ctx->pc = 0x28A7D4u;
            goto label_28a7d4;
        }
    }
    ctx->pc = 0x28A7CCu;
    // 0x28a7cc: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x28a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28a7d0: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x28a7d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_28a7d4:
    // 0x28a7d4: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x28A7D4u;
    {
        const bool branch_taken_0x28a7d4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28a7d4) {
            ctx->pc = 0x28A800u;
            goto label_28a800;
        }
    }
    ctx->pc = 0x28A7DCu;
    // 0x28a7dc: 0x0  nop
    ctx->pc = 0x28a7dcu;
    // NOP
label_28a7e0:
    // 0x28a7e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28a7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28a7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7ec: 0xc0a2b70  jal         func_28ADC0
    ctx->pc = 0x28A7ECu;
    SET_GPR_U32(ctx, 31, 0x28A7F4u);
    ctx->pc = 0x28A7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7ECu;
            // 0x28a7f0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28ADC0u;
    if (runtime->hasFunction(0x28ADC0u)) {
        auto targetFn = runtime->lookupFunction(0x28ADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7F4u; }
        if (ctx->pc != 0x28A7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028ADC0_0x28adc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7F4u; }
        if (ctx->pc != 0x28A7F4u) { return; }
    }
    ctx->pc = 0x28A7F4u;
label_28a7f4:
    // 0x28a7f4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x28a7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28a7f8: 0x1e00fff9  bgtz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28A7F8u;
    {
        const bool branch_taken_0x28a7f8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x28a7f8) {
            ctx->pc = 0x28A7E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a7e0;
        }
    }
    ctx->pc = 0x28A800u;
label_28a800:
    // 0x28a800: 0x1a800031  blez        $s4, . + 4 + (0x31 << 2)
    ctx->pc = 0x28A800u;
    {
        const bool branch_taken_0x28a800 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x28a800) {
            ctx->pc = 0x28A8C8u;
            goto label_28a8c8;
        }
    }
    ctx->pc = 0x28A808u;
    // 0x28a808: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x28a808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x28a80c: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x28a80cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x28a810: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x28a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28a814: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x28a814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x28a818: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28a818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28a81c: 0x27b6009c  addiu       $s6, $sp, 0x9C
    ctx->pc = 0x28a81cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x28a820: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x28a820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28a824: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x28a824u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_28a828:
    // 0x28a828: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28a828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28a82c: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x28a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a830: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x28a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28a834: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x28a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a838: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28a838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a83c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x28a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a840: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a844: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x28a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a848: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28a848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a84c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28a84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a850: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28a850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28a854: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28a854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28a858: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28a858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28a85c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28a860: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x28a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a864: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x28a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x28a868: 0x8e42ffec  lw          $v0, -0x14($s2)
    ctx->pc = 0x28a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967276)));
    // 0x28a86c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x28a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x28a870: 0x8e42fff0  lw          $v0, -0x10($s2)
    ctx->pc = 0x28a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967280)));
    // 0x28a874: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x28a874u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x28a878: 0x8e42fff4  lw          $v0, -0xC($s2)
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967284)));
    // 0x28a87c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x28a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x28a880: 0x8e42fff8  lw          $v0, -0x8($s2)
    ctx->pc = 0x28a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x28a884: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x28a884u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x28a888: 0xc640fffc  lwc1        $f0, -0x4($s2)
    ctx->pc = 0x28a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a88c: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x28a88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x28a890: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x28a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a894: 0xae42ffec  sw          $v0, -0x14($s2)
    ctx->pc = 0x28a894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967276), GPR_U32(ctx, 2));
    // 0x28a898: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a89c: 0xae42fff0  sw          $v0, -0x10($s2)
    ctx->pc = 0x28a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967280), GPR_U32(ctx, 2));
    // 0x28a8a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a8a4: 0xae42fff4  sw          $v0, -0xC($s2)
    ctx->pc = 0x28a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967284), GPR_U32(ctx, 2));
    // 0x28a8a8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x28a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28a8ac: 0xae42fff8  sw          $v0, -0x8($s2)
    ctx->pc = 0x28a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967288), GPR_U32(ctx, 2));
    // 0x28a8b0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x28a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a8b4: 0xe640fffc  swc1        $f0, -0x4($s2)
    ctx->pc = 0x28a8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294967292), bits); }
    // 0x28a8b8: 0xc0a2b70  jal         func_28ADC0
    ctx->pc = 0x28A8B8u;
    SET_GPR_U32(ctx, 31, 0x28A8C0u);
    ctx->pc = 0x28A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8B8u;
            // 0x28a8bc: 0x2652ffec  addiu       $s2, $s2, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28ADC0u;
    if (runtime->hasFunction(0x28ADC0u)) {
        auto targetFn = runtime->lookupFunction(0x28ADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A8C0u; }
        if (ctx->pc != 0x28A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028ADC0_0x28adc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A8C0u; }
        if (ctx->pc != 0x28A8C0u) { return; }
    }
    ctx->pc = 0x28A8C0u;
label_28a8c0:
    // 0x28a8c0: 0x1e80ffd9  bgtz        $s4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x28A8C0u;
    {
        const bool branch_taken_0x28a8c0 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x28a8c0) {
            ctx->pc = 0x28A828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a828;
        }
    }
    ctx->pc = 0x28A8C8u;
label_28a8c8:
    // 0x28a8c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28a8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a8cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28a8ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a8d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28a8d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a8d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28a8d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a8d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28a8d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a8dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a8dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a8e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28a8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a8e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28a8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28a8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28A8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8ECu;
            // 0x28a8f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A8F4u;
    // 0x28a8f4: 0x0  nop
    ctx->pc = 0x28a8f4u;
    // NOP
    // 0x28a8f8: 0x0  nop
    ctx->pc = 0x28a8f8u;
    // NOP
    // 0x28a8fc: 0x0  nop
    ctx->pc = 0x28a8fcu;
    // NOP
}
