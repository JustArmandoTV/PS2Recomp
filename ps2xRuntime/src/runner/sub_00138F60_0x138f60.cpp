#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138F60
// Address: 0x138f60 - 0x1390b0
void sub_00138F60_0x138f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138F60_0x138f60");
#endif

    switch (ctx->pc) {
        case 0x138fdcu: goto label_138fdc;
        case 0x138ff8u: goto label_138ff8;
        case 0x139004u: goto label_139004;
        case 0x13901cu: goto label_13901c;
        case 0x13902cu: goto label_13902c;
        case 0x139038u: goto label_139038;
        case 0x13904cu: goto label_13904c;
        case 0x139078u: goto label_139078;
        default: break;
    }

    ctx->pc = 0x138f60u;

    // 0x138f60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x138f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x138f64: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x138f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x138f68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x138f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x138f6c: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x138f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x138f70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x138f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x138f74: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x138f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x138f78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x138f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x138f7c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x138f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x138f80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x138f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x138f84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x138f84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x138f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x138f8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x138f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138f90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x138f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x138f94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x138f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138f98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x138f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x138f9c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x138f9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138fa4: 0xe28821  addu        $s1, $a3, $v0
    ctx->pc = 0x138fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x138fa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x138fa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x138fac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x138facu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fb0: 0x8cd20030  lw          $s2, 0x30($a2)
    ctx->pc = 0x138fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x138fb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x138fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x138fb8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x138fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x138fbc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x138fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x138fc0: 0x84700008  lh          $s0, 0x8($v1)
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x138fc4: 0xc4740084  lwc1        $f20, 0x84($v1)
    ctx->pc = 0x138fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138fc8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x138fcc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138fd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x138fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138fd4: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x138FD4u;
    SET_GPR_U32(ctx, 31, 0x138FDCu);
    ctx->pc = 0x138FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FD4u;
            // 0x138fd8: 0xe29821  addu        $s3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FDCu; }
        if (ctx->pc != 0x138FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FDCu; }
        if (ctx->pc != 0x138FDCu) { return; }
    }
    ctx->pc = 0x138FDCu;
label_138fdc:
    // 0x138fdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138fe0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x138fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x138fe4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x138fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x138fe8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x138fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fec: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x138fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138ff0: 0xc04ce50  jal         func_133940
    ctx->pc = 0x138FF0u;
    SET_GPR_U32(ctx, 31, 0x138FF8u);
    ctx->pc = 0x138FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FF0u;
            // 0x138ff4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FF8u; }
        if (ctx->pc != 0x138FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FF8u; }
        if (ctx->pc != 0x138FF8u) { return; }
    }
    ctx->pc = 0x138FF8u;
label_138ff8:
    // 0x138ff8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x138ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ffc: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x138FFCu;
    SET_GPR_U32(ctx, 31, 0x139004u);
    ctx->pc = 0x139000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FFCu;
            // 0x139000: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139004u; }
        if (ctx->pc != 0x139004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139004u; }
        if (ctx->pc != 0x139004u) { return; }
    }
    ctx->pc = 0x139004u;
label_139004:
    // 0x139004: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x139004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x139008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13900c: 0xc66d0024  lwc1        $f13, 0x24($s3)
    ctx->pc = 0x13900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x139010: 0xc66e0028  lwc1        $f14, 0x28($s3)
    ctx->pc = 0x139010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x139014: 0xc04ce50  jal         func_133940
    ctx->pc = 0x139014u;
    SET_GPR_U32(ctx, 31, 0x13901Cu);
    ctx->pc = 0x139018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139014u;
            // 0x139018: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13901Cu; }
        if (ctx->pc != 0x13901Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13901Cu; }
        if (ctx->pc != 0x13901Cu) { return; }
    }
    ctx->pc = 0x13901Cu;
label_13901c:
    // 0x13901c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13901cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139020: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x139020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x139024: 0xc04cca0  jal         func_133280
    ctx->pc = 0x139024u;
    SET_GPR_U32(ctx, 31, 0x13902Cu);
    ctx->pc = 0x139028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139024u;
            // 0x139028: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13902Cu; }
        if (ctx->pc != 0x13902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13902Cu; }
        if (ctx->pc != 0x13902Cu) { return; }
    }
    ctx->pc = 0x13902Cu;
label_13902c:
    // 0x13902c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13902cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139030: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x139030u;
    SET_GPR_U32(ctx, 31, 0x139038u);
    ctx->pc = 0x139034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139030u;
            // 0x139034: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139038u; }
        if (ctx->pc != 0x139038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139038u; }
        if (ctx->pc != 0x139038u) { return; }
    }
    ctx->pc = 0x139038u;
label_139038:
    // 0x139038: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x139038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13903c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x139040: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x139040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x139044: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x139044u;
    SET_GPR_U32(ctx, 31, 0x13904Cu);
    ctx->pc = 0x139048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139044u;
            // 0x139048: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (runtime->hasFunction(0x14ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x14ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13904Cu; }
        if (ctx->pc != 0x13904Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ABD0_0x14abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13904Cu; }
        if (ctx->pc != 0x13904Cu) { return; }
    }
    ctx->pc = 0x13904Cu;
label_13904c:
    // 0x13904c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x13904cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x139050: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x139050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x139054: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139058: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x139058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x13905c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139060: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x139060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x139064: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x139064u;
    {
        const bool branch_taken_0x139064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139064) {
            ctx->pc = 0x139068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139064u;
            // 0x139068: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13907Cu;
            goto label_13907c;
        }
    }
    ctx->pc = 0x13906Cu;
    // 0x13906c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139070: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x139070u;
    SET_GPR_U32(ctx, 31, 0x139078u);
    ctx->pc = 0x139074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139070u;
            // 0x139074: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139078u; }
        if (ctx->pc != 0x139078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139078u; }
        if (ctx->pc != 0x139078u) { return; }
    }
    ctx->pc = 0x139078u;
label_139078:
    // 0x139078: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x139078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_13907c:
    // 0x13907c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x139080: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x139080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139084: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x139084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139088: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x139088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13908c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13908cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139090: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x139090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139094: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x139094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13909c: 0x3e00008  jr          $ra
    ctx->pc = 0x13909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1390A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13909Cu;
            // 0x1390a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1390A4u;
    // 0x1390a4: 0x0  nop
    ctx->pc = 0x1390a4u;
    // NOP
    // 0x1390a8: 0x0  nop
    ctx->pc = 0x1390a8u;
    // NOP
    // 0x1390ac: 0x0  nop
    ctx->pc = 0x1390acu;
    // NOP
}
