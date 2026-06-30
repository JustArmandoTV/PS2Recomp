#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029AB30
// Address: 0x29ab30 - 0x29aea0
void sub_0029AB30_0x29ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AB30_0x29ab30");
#endif

    switch (ctx->pc) {
        case 0x29ab94u: goto label_29ab94;
        case 0x29ac00u: goto label_29ac00;
        case 0x29ac60u: goto label_29ac60;
        case 0x29ad34u: goto label_29ad34;
        case 0x29ad98u: goto label_29ad98;
        case 0x29add0u: goto label_29add0;
        default: break;
    }

    ctx->pc = 0x29ab30u;

    // 0x29ab30: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x29ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x29ab34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x29ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29ab38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29ab38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab3c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x29ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x29ab40: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x29ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x29ab44: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x29ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x29ab48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x29ab4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x29ab50: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29ab50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x29ab58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x29ab5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29ab60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29ab64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29ab64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ab68: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29ab68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29ab6c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x29ab6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29AB70u;
    {
        const bool branch_taken_0x29ab70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB70u;
            // 0x29ab74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab70) {
            ctx->pc = 0x29AB80u;
            goto label_29ab80;
        }
    }
    ctx->pc = 0x29AB78u;
    // 0x29ab78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ab7c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x29ab7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29ab80:
    // 0x29ab80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ab84: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ab88: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x29ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x29ab8c: 0xc0a6a68  jal         func_29A9A0
    ctx->pc = 0x29AB8Cu;
    SET_GPR_U32(ctx, 31, 0x29AB94u);
    ctx->pc = 0x29AB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB8Cu;
            // 0x29ab90: 0x27a701a0  addiu       $a3, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A9A0u;
    if (runtime->hasFunction(0x29A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x29A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB94u; }
        if (ctx->pc != 0x29AB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A9A0_0x29a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AB94u; }
        if (ctx->pc != 0x29AB94u) { return; }
    }
    ctx->pc = 0x29AB94u;
label_29ab94:
    // 0x29ab94: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x29ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x29ab98: 0x27be016c  addiu       $fp, $sp, 0x16C
    ctx->pc = 0x29ab98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x29ab9c: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x29ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x29aba0: 0x27b10168  addiu       $s1, $sp, 0x168
    ctx->pc = 0x29aba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x29aba4: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x29aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x29aba8: 0x27b20164  addiu       $s2, $sp, 0x164
    ctx->pc = 0x29aba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x29abac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x29abacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x29abb0: 0x27b30160  addiu       $s3, $sp, 0x160
    ctx->pc = 0x29abb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x29abb4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x29abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x29abb8: 0x27b40170  addiu       $s4, $sp, 0x170
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29abbc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x29abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x29abc0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x29abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x29abc4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x29abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x29abc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29abc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29abcc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x29abccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x29abd0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x29abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x29abd4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x29abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x29abd8: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x29abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x29abdc: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x29abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x29abe0: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x29abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x29abe4: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x29abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x29abe8: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x29abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x29abec: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x29abecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x29abf0: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x29abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x29abf4: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x29abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x29abf8: 0xc0a5a68  jal         func_2969A0
    ctx->pc = 0x29ABF8u;
    SET_GPR_U32(ctx, 31, 0x29AC00u);
    ctx->pc = 0x29ABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ABF8u;
            // 0x29abfc: 0xae80002c  sw          $zero, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC00u; }
        if (ctx->pc != 0x29AC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC00u; }
        if (ctx->pc != 0x29AC00u) { return; }
    }
    ctx->pc = 0x29AC00u;
label_29ac00:
    // 0x29ac00: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x29ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29ac04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac08: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac0c: 0x27b001b4  addiu       $s0, $sp, 0x1B4
    ctx->pc = 0x29ac0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x29ac10: 0x27b601b8  addiu       $s6, $sp, 0x1B8
    ctx->pc = 0x29ac10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x29ac14: 0x27b701bc  addiu       $s7, $sp, 0x1BC
    ctx->pc = 0x29ac14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x29ac18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29ac1c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x29ac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29ac20: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x29ac20u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x29ac24: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x29ac24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x29ac28: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x29ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac2c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x29ac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x29ac30: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x29ac30u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x29ac34: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x29ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac38: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x29ac38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29ac3c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x29ac3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x29ac40: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x29ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac44: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x29ac44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x29ac48: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x29ac48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29ac4c: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x29ac4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29ac50: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x29ac50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x29ac54: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x29ac54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29ac58: 0xc0a6870  jal         func_29A1C0
    ctx->pc = 0x29AC58u;
    SET_GPR_U32(ctx, 31, 0x29AC60u);
    ctx->pc = 0x29AC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AC58u;
            // 0x29ac5c: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A1C0u;
    if (runtime->hasFunction(0x29A1C0u)) {
        auto targetFn = runtime->lookupFunction(0x29A1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC60u; }
        if (ctx->pc != 0x29AC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A1C0_0x29a1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AC60u; }
        if (ctx->pc != 0x29AC60u) { return; }
    }
    ctx->pc = 0x29AC60u;
label_29ac60:
    // 0x29ac60: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x29ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29ac64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac68: 0x0  nop
    ctx->pc = 0x29ac68u;
    // NOP
    // 0x29ac6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ac6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac70: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x29AC70u;
    {
        const bool branch_taken_0x29ac70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac70) {
            ctx->pc = 0x29AD10u;
            goto label_29ad10;
        }
    }
    ctx->pc = 0x29AC78u;
    // 0x29ac78: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x29ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac7c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x29ac7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac80: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x29ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x29ac84: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x29ac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac88: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x29ac88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x29ac8c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x29ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac90: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x29ac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x29ac94: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x29ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac98: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x29ac98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x29ac9c: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x29ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aca0: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x29aca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x29aca4: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x29aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aca8: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x29aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x29acac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acb0: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x29acb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x29acb4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x29acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acb8: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x29acb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x29acbc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x29acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acc0: 0xe6a00028  swc1        $f0, 0x28($s5)
    ctx->pc = 0x29acc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x29acc4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x29acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acc8: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x29acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x29accc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x29acccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acd0: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x29acd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x29acd4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x29acd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acd8: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x29acd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x29acdc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x29acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ace0: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x29ace0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x29ace4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x29ace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ace8: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x29ace8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x29acec: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x29acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acf0: 0xe6a00040  swc1        $f0, 0x40($s5)
    ctx->pc = 0x29acf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x29acf4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x29acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acf8: 0xe6a00044  swc1        $f0, 0x44($s5)
    ctx->pc = 0x29acf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x29acfc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x29acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad00: 0xe6a00048  swc1        $f0, 0x48($s5)
    ctx->pc = 0x29ad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x29ad04: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x29ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad08: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x29AD08u;
    {
        const bool branch_taken_0x29ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD08u;
            // 0x29ad0c: 0xe6a0004c  swc1        $f0, 0x4C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad08) {
            ctx->pc = 0x29AE30u;
            goto label_29ae30;
        }
    }
    ctx->pc = 0x29AD10u;
label_29ad10:
    // 0x29ad10: 0x26b10020  addiu       $s1, $s5, 0x20
    ctx->pc = 0x29ad10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x29ad14: 0x4601a343  div.s       $f13, $f20, $f1
    ctx->pc = 0x29ad14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[1];
    // 0x29ad18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29ad1c: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x29ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x29ad20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ad20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad24: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x29ad24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x29ad28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29ad28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29ad2c: 0xc0a6a0c  jal         func_29A830
    ctx->pc = 0x29AD2Cu;
    SET_GPR_U32(ctx, 31, 0x29AD34u);
    ctx->pc = 0x29AD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AD2Cu;
            // 0x29ad30: 0xe6b40004  swc1        $f20, 0x4($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A830u;
    if (runtime->hasFunction(0x29A830u)) {
        auto targetFn = runtime->lookupFunction(0x29A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD34u; }
        if (ctx->pc != 0x29AD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A830_0x29a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD34u; }
        if (ctx->pc != 0x29AD34u) { return; }
    }
    ctx->pc = 0x29AD34u;
label_29ad34:
    // 0x29ad34: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x29ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x29ad38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad3c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29ad40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad44: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29ad44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad48: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x29ad48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x29ad4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29ad4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29ad50: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x29ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x29ad54: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x29ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad58: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x29ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29ad5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29ad60: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x29ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x29ad64: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x29ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad68: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x29ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29ad6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29ad70: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x29ad70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x29ad74: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x29ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad78: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x29ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29ad7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29ad80: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x29ad80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x29ad84: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x29ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x29ad88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29ad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29ad8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29ad8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x29ad90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29ad94: 0x0  nop
    ctx->pc = 0x29ad94u;
    // NOP
label_29ad98:
    // 0x29ad98: 0x2891821  addu        $v1, $s4, $t1
    ctx->pc = 0x29ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x29ad9c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x29ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ada0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x29ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x29ada4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ada8: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x29ada8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x29adac: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x29adacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adb0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x29ADB0u;
    {
        const bool branch_taken_0x29adb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29adb0) {
            ctx->pc = 0x29AE10u;
            goto label_29ae10;
        }
    }
    ctx->pc = 0x29ADB8u;
    // 0x29adb8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x29adb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29adbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29adbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adc0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x29adc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29adc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29adc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29adc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adcc: 0xe6a10010  swc1        $f1, 0x10($s5)
    ctx->pc = 0x29adccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_29add0:
    // 0x29add0: 0x114b0009  beq         $t2, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x29ADD0u;
    {
        const bool branch_taken_0x29add0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 11));
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADD0u;
            // 0x29add4: 0x1062021  addu        $a0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29add0) {
            ctx->pc = 0x29ADF8u;
            goto label_29adf8;
        }
    }
    ctx->pc = 0x29ADD8u;
    // 0x29add8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29addc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29addcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ade0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29ADE0u;
    {
        const bool branch_taken_0x29ade0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ade0) {
            ctx->pc = 0x29ADECu;
            goto label_29adec;
        }
    }
    ctx->pc = 0x29ADE8u;
    // 0x29ade8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29ade8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_29adec:
    // 0x29adec: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x29adecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x29adf0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x29adf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29adf4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x29adf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_29adf8:
    // 0x29adf8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29adf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29adfc: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x29adfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x29ae00: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x29ae00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x29ae04: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x29AE04u;
    {
        const bool branch_taken_0x29ae04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE04u;
            // 0x29ae08: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae04) {
            ctx->pc = 0x29ADD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29add0;
        }
    }
    ctx->pc = 0x29AE0Cu;
    // 0x29ae0c: 0x0  nop
    ctx->pc = 0x29ae0cu;
    // NOP
label_29ae10:
    // 0x29ae10: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x29ae10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x29ae14: 0x29630003  slti        $v1, $t3, 0x3
    ctx->pc = 0x29ae14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x29ae18: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x29ae18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x29ae1c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x29ae1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x29ae20: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x29ae20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x29ae24: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x29ae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x29ae28: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x29AE28u;
    {
        const bool branch_taken_0x29ae28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE28u;
            // 0x29ae2c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae28) {
            ctx->pc = 0x29AD98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ad98;
        }
    }
    ctx->pc = 0x29AE30u;
label_29ae30:
    // 0x29ae30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29ae34: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x29ae34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29ae38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ae3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x29ae3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ae40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x29ae40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ae44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29ae44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ae48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29ae48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ae4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29ae4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ae50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29ae50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ae54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29ae54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ae58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ae58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ae5c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE5Cu;
            // 0x29ae60: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AE64u;
    // 0x29ae64: 0x0  nop
    ctx->pc = 0x29ae64u;
    // NOP
    // 0x29ae68: 0x0  nop
    ctx->pc = 0x29ae68u;
    // NOP
    // 0x29ae6c: 0x0  nop
    ctx->pc = 0x29ae6cu;
    // NOP
    // 0x29ae70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AE70u;
    {
        const bool branch_taken_0x29ae70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae70) {
            ctx->pc = 0x29AE98u;
            goto label_29ae98;
        }
    }
    ctx->pc = 0x29AE78u;
    // 0x29ae78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x29ae7c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x29ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x29ae80: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x29ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x29ae84: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x29ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x29ae88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x29ae8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ae90: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x29ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29ae94: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x29ae94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_29ae98:
    // 0x29ae98: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AEA0u;
}
