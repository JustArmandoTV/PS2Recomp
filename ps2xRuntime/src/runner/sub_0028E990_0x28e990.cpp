#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E990
// Address: 0x28e990 - 0x28f2d0
void sub_0028E990_0x28e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E990_0x28e990");
#endif

    switch (ctx->pc) {
        case 0x28efb8u: goto label_28efb8;
        default: break;
    }

    ctx->pc = 0x28e990u;

    // 0x28e990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28e994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28e998: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28e998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28e99c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28e99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28e9a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28e9a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28e9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28e9ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28e9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28e9b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28e9b4: 0x2650001c  addiu       $s0, $s2, 0x1C
    ctx->pc = 0x28e9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28e9b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28e9b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28e9bc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x28e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e9c0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x28e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e9c4: 0xc4850024  lwc1        $f5, 0x24($a0)
    ctx->pc = 0x28e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28e9c8: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x28e9c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x28e9cc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x28e9ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e9d0: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x28e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e9d4: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x28e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e9d8: 0xc48c0030  lwc1        $f12, 0x30($a0)
    ctx->pc = 0x28e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e9dc: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x28e9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x28e9e0: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x28e9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28e9e4: 0xc487002c  lwc1        $f7, 0x2C($a0)
    ctx->pc = 0x28e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28e9e8: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x28e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e9ec: 0xc483003c  lwc1        $f3, 0x3C($a0)
    ctx->pc = 0x28e9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e9f0: 0x460c2200  add.s       $f8, $f4, $f12
    ctx->pc = 0x28e9f0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x28e9f4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x28e9f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28e9f8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x28e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28e9fc: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x28e9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x28ea00: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x28ea00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x28ea04: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x28ea04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28ea08: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x28ea08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28ea0c: 0x46033800  add.s       $f0, $f7, $f3
    ctx->pc = 0x28ea0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x28ea10: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x28ea10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28ea14: 0x4600021c  madd.s      $f8, $f0, $f0
    ctx->pc = 0x28ea14u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28ea18: 0x460d4032  c.eq.s      $f8, $f13
    ctx->pc = 0x28ea18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ea1c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28EA1Cu;
    {
        const bool branch_taken_0x28ea1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA1Cu;
            // 0x28ea20: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea1c) {
            ctx->pc = 0x28EA40u;
            goto label_28ea40;
        }
    }
    ctx->pc = 0x28EA24u;
    // 0x28ea24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28ea28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ea28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ea2c: 0x0  nop
    ctx->pc = 0x28ea2cu;
    // NOP
    // 0x28ea30: 0x46080356  rsqrt.s     $f13, $f0, $f8
    ctx->pc = 0x28ea30u;
    ctx->f[13] = 1.0f / sqrtf(ctx->f[0]);
    // 0x28ea34: 0x0  nop
    ctx->pc = 0x28ea34u;
    // NOP
    // 0x28ea38: 0x0  nop
    ctx->pc = 0x28ea38u;
    // NOP
    // 0x28ea3c: 0x0  nop
    ctx->pc = 0x28ea3cu;
    // NOP
label_28ea40:
    // 0x28ea40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28ea44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ea44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ea48: 0xc7aa0064  lwc1        $f10, 0x64($sp)
    ctx->pc = 0x28ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28ea4c: 0xc7a90068  lwc1        $f9, 0x68($sp)
    ctx->pc = 0x28ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28ea50: 0xc7a8006c  lwc1        $f8, 0x6C($sp)
    ctx->pc = 0x28ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28ea54: 0x460d5282  mul.s       $f10, $f10, $f13
    ctx->pc = 0x28ea54u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x28ea58: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x28ea58u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x28ea5c: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x28ea5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x28ea60: 0xc7ab0060  lwc1        $f11, 0x60($sp)
    ctx->pc = 0x28ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28ea64: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28ea64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ea68: 0x460d5802  mul.s       $f0, $f11, $f13
    ctx->pc = 0x28ea68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x28ea6c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x28ea6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28ea70: 0xe7aa0064  swc1        $f10, 0x64($sp)
    ctx->pc = 0x28ea70u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28ea74: 0xe7a90068  swc1        $f9, 0x68($sp)
    ctx->pc = 0x28ea74u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28ea78: 0x45000097  bc1f        . + 4 + (0x97 << 2)
    ctx->pc = 0x28EA78u;
    {
        const bool branch_taken_0x28ea78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA78u;
            // 0x28ea7c: 0xe7a8006c  swc1        $f8, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea78) {
            ctx->pc = 0x28ECD8u;
            goto label_28ecd8;
        }
    }
    ctx->pc = 0x28EA80u;
    // 0x28ea80: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x28ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x28ea84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28ea88: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28ea88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ea8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea90: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x28ea90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x28ea94: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x28ea94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28ea98: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x28ea98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ea9c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EA9Cu;
    {
        const bool branch_taken_0x28ea9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA9Cu;
            // 0x28eaa0: 0x4602a841  sub.s       $f1, $f21, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea9c) {
            ctx->pc = 0x28EAA8u;
            goto label_28eaa8;
        }
    }
    ctx->pc = 0x28EAA4u;
    // 0x28eaa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28eaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eaa8:
    // 0x28eaa8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EAA8u;
    {
        const bool branch_taken_0x28eaa8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28eaa8) {
            ctx->pc = 0x28EAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAA8u;
            // 0x28eaac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EABCu;
            goto label_28eabc;
        }
    }
    ctx->pc = 0x28EAB0u;
    // 0x28eab0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x28eab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28eab4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EAB4u;
    {
        const bool branch_taken_0x28eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAB4u;
            // 0x28eab8: 0x46801a20  cvt.s.w     $f8, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eab4) {
            ctx->pc = 0x28EAD4u;
            goto label_28ead4;
        }
    }
    ctx->pc = 0x28EABCu;
label_28eabc:
    // 0x28eabc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28eac0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28eac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28eac4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x28eac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28eac8: 0x0  nop
    ctx->pc = 0x28eac8u;
    // NOP
    // 0x28eacc: 0x46801a20  cvt.s.w     $f8, $f3
    ctx->pc = 0x28eaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x28ead0: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x28ead0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_28ead4:
    // 0x28ead4: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x28ead4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ead8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eadc: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x28eadcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28eae0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EAE0u;
    {
        const bool branch_taken_0x28eae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAE0u;
            // 0x28eae4: 0x460408dc  madd.s      $f3, $f1, $f4 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eae0) {
            ctx->pc = 0x28EAECu;
            goto label_28eaec;
        }
    }
    ctx->pc = 0x28EAE8u;
    // 0x28eae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28eae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eaec:
    // 0x28eaec: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EAECu;
    {
        const bool branch_taken_0x28eaec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28eaec) {
            ctx->pc = 0x28EAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAECu;
            // 0x28eaf0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EB00u;
            goto label_28eb00;
        }
    }
    ctx->pc = 0x28EAF4u;
    // 0x28eaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eaf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EAF8u;
    {
        const bool branch_taken_0x28eaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAF8u;
            // 0x28eafc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eaf8) {
            ctx->pc = 0x28EB18u;
            goto label_28eb18;
        }
    }
    ctx->pc = 0x28EB00u;
label_28eb00:
    // 0x28eb00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28eb04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28eb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28eb08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28eb08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb0c: 0x0  nop
    ctx->pc = 0x28eb0cu;
    // NOP
    // 0x28eb10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28eb10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28eb14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28eb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28eb18:
    // 0x28eb18: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x28eb18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28eb1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eb20: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x28eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28eb24: 0x4608201c  madd.s      $f0, $f4, $f8
    ctx->pc = 0x28eb24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x28eb28: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x28eb28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28eb2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EB2Cu;
    {
        const bool branch_taken_0x28eb2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB2Cu;
            // 0x28eb30: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb2c) {
            ctx->pc = 0x28EB38u;
            goto label_28eb38;
        }
    }
    ctx->pc = 0x28EB34u;
    // 0x28eb34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28eb34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eb38:
    // 0x28eb38: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EB38u;
    {
        const bool branch_taken_0x28eb38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28eb38) {
            ctx->pc = 0x28EB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB38u;
            // 0x28eb3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EB4Cu;
            goto label_28eb4c;
        }
    }
    ctx->pc = 0x28EB40u;
    // 0x28eb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EB44u;
    {
        const bool branch_taken_0x28eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB44u;
            // 0x28eb48: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb44) {
            ctx->pc = 0x28EB64u;
            goto label_28eb64;
        }
    }
    ctx->pc = 0x28EB4Cu;
label_28eb4c:
    // 0x28eb4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28eb50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28eb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28eb54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28eb54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb58: 0x0  nop
    ctx->pc = 0x28eb58u;
    // NOP
    // 0x28eb5c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x28eb5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x28eb60: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x28eb60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_28eb64:
    // 0x28eb64: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x28eb64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28eb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eb6c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x28eb6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28eb70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EB70u;
    {
        const bool branch_taken_0x28eb70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB70u;
            // 0x28eb74: 0x460508dc  madd.s      $f3, $f1, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb70) {
            ctx->pc = 0x28EB7Cu;
            goto label_28eb7c;
        }
    }
    ctx->pc = 0x28EB78u;
    // 0x28eb78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28eb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eb7c:
    // 0x28eb7c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EB7Cu;
    {
        const bool branch_taken_0x28eb7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28eb7c) {
            ctx->pc = 0x28EB80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB7Cu;
            // 0x28eb80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EB90u;
            goto label_28eb90;
        }
    }
    ctx->pc = 0x28EB84u;
    // 0x28eb84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EB88u;
    {
        const bool branch_taken_0x28eb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB88u;
            // 0x28eb8c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb88) {
            ctx->pc = 0x28EBA8u;
            goto label_28eba8;
        }
    }
    ctx->pc = 0x28EB90u;
label_28eb90:
    // 0x28eb90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28eb94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28eb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28eb98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28eb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb9c: 0x0  nop
    ctx->pc = 0x28eb9cu;
    // NOP
    // 0x28eba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28eba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28eba4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28eba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28eba8:
    // 0x28eba8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x28eba8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28ebac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ebb0: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x28ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ebb4: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x28ebb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x28ebb8: 0x46033032  c.eq.s      $f6, $f3
    ctx->pc = 0x28ebb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ebbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EBBCu;
    {
        const bool branch_taken_0x28ebbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBBCu;
            // 0x28ebc0: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebbc) {
            ctx->pc = 0x28EBC8u;
            goto label_28ebc8;
        }
    }
    ctx->pc = 0x28EBC4u;
    // 0x28ebc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ebc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ebc8:
    // 0x28ebc8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EBC8u;
    {
        const bool branch_taken_0x28ebc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ebc8) {
            ctx->pc = 0x28EBCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBC8u;
            // 0x28ebcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EBDCu;
            goto label_28ebdc;
        }
    }
    ctx->pc = 0x28EBD0u;
    // 0x28ebd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ebd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ebd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EBD4u;
    {
        const bool branch_taken_0x28ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBD4u;
            // 0x28ebd8: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebd4) {
            ctx->pc = 0x28EBF4u;
            goto label_28ebf4;
        }
    }
    ctx->pc = 0x28EBDCu;
label_28ebdc:
    // 0x28ebdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ebdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ebe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ebe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ebe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ebe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ebe8: 0x0  nop
    ctx->pc = 0x28ebe8u;
    // NOP
    // 0x28ebec: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x28ebecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x28ebf0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x28ebf0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_28ebf4:
    // 0x28ebf4: 0x46033032  c.eq.s      $f6, $f3
    ctx->pc = 0x28ebf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ebf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ebfc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x28ebfcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28ec00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EC00u;
    {
        const bool branch_taken_0x28ec00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC00u;
            // 0x28ec04: 0x460608dc  madd.s      $f3, $f1, $f6 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec00) {
            ctx->pc = 0x28EC0Cu;
            goto label_28ec0c;
        }
    }
    ctx->pc = 0x28EC08u;
    // 0x28ec08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ec08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ec0c:
    // 0x28ec0c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EC0Cu;
    {
        const bool branch_taken_0x28ec0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ec0c) {
            ctx->pc = 0x28EC10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC0Cu;
            // 0x28ec10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EC20u;
            goto label_28ec20;
        }
    }
    ctx->pc = 0x28EC14u;
    // 0x28ec14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ec18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EC18u;
    {
        const bool branch_taken_0x28ec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC18u;
            // 0x28ec1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec18) {
            ctx->pc = 0x28EC38u;
            goto label_28ec38;
        }
    }
    ctx->pc = 0x28EC20u;
label_28ec20:
    // 0x28ec20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ec24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ec24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ec28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ec28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ec2c: 0x0  nop
    ctx->pc = 0x28ec2cu;
    // NOP
    // 0x28ec30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ec30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ec34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ec34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ec38:
    // 0x28ec38: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x28ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28ec3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ec40: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x28ec40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28ec44: 0x4604301c  madd.s      $f0, $f6, $f4
    ctx->pc = 0x28ec44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x28ec48: 0x46053832  c.eq.s      $f7, $f5
    ctx->pc = 0x28ec48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ec4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EC4Cu;
    {
        const bool branch_taken_0x28ec4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC4Cu;
            // 0x28ec50: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec4c) {
            ctx->pc = 0x28EC58u;
            goto label_28ec58;
        }
    }
    ctx->pc = 0x28EC54u;
    // 0x28ec54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ec54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ec58:
    // 0x28ec58: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EC58u;
    {
        const bool branch_taken_0x28ec58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ec58) {
            ctx->pc = 0x28EC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC58u;
            // 0x28ec5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EC6Cu;
            goto label_28ec6c;
        }
    }
    ctx->pc = 0x28EC60u;
    // 0x28ec60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ec64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EC64u;
    {
        const bool branch_taken_0x28ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC64u;
            // 0x28ec68: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec64) {
            ctx->pc = 0x28EC84u;
            goto label_28ec84;
        }
    }
    ctx->pc = 0x28EC6Cu;
label_28ec6c:
    // 0x28ec6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ec70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ec74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ec74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ec78: 0x0  nop
    ctx->pc = 0x28ec78u;
    // NOP
    // 0x28ec7c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28ec7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28ec80: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28ec80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28ec84:
    // 0x28ec84: 0x46053832  c.eq.s      $f7, $f5
    ctx->pc = 0x28ec84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ec88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ec8c: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x28ec8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28ec90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EC90u;
    {
        const bool branch_taken_0x28ec90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC90u;
            // 0x28ec94: 0x4607085c  madd.s      $f1, $f1, $f7 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec90) {
            ctx->pc = 0x28EC9Cu;
            goto label_28ec9c;
        }
    }
    ctx->pc = 0x28EC98u;
    // 0x28ec98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ec98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ec9c:
    // 0x28ec9c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EC9Cu;
    {
        const bool branch_taken_0x28ec9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ec9c) {
            ctx->pc = 0x28ECA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC9Cu;
            // 0x28eca0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28ECB0u;
            goto label_28ecb0;
        }
    }
    ctx->pc = 0x28ECA4u;
    // 0x28eca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eca8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28ECA8u;
    {
        const bool branch_taken_0x28eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECA8u;
            // 0x28ecac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eca8) {
            ctx->pc = 0x28ECC8u;
            goto label_28ecc8;
        }
    }
    ctx->pc = 0x28ECB0u;
label_28ecb0:
    // 0x28ecb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ecb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ecb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ecb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ecb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ecb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ecbc: 0x0  nop
    ctx->pc = 0x28ecbcu;
    // NOP
    // 0x28ecc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ecc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ecc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ecc8:
    // 0x28ecc8: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28ecc8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28eccc: 0x4603381c  madd.s      $f0, $f7, $f3
    ctx->pc = 0x28ecccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x28ecd0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x28ECD0u;
    {
        const bool branch_taken_0x28ecd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECD0u;
            // 0x28ecd4: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecd0) {
            ctx->pc = 0x28EF34u;
            goto label_28ef34;
        }
    }
    ctx->pc = 0x28ECD8u;
label_28ecd8:
    // 0x28ecd8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x28ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x28ecdc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x28ece0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x28ece0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28ece4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ece8: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x28ece8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x28ecec: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x28ececu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28ecf0: 0x0  nop
    ctx->pc = 0x28ecf0u;
    // NOP
    // 0x28ecf4: 0x46152141  sub.s       $f5, $f4, $f21
    ctx->pc = 0x28ecf4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
    // 0x28ecf8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x28ecf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ecfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28ECFCu;
    {
        const bool branch_taken_0x28ecfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28ED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECFCu;
            // 0x28ed00: 0x4605a901  sub.s       $f4, $f21, $f5 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecfc) {
            ctx->pc = 0x28ED08u;
            goto label_28ed08;
        }
    }
    ctx->pc = 0x28ED04u;
    // 0x28ed04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ed04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed08:
    // 0x28ed08: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28ED08u;
    {
        const bool branch_taken_0x28ed08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ed08) {
            ctx->pc = 0x28ED0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED08u;
            // 0x28ed0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28ED1Cu;
            goto label_28ed1c;
        }
    }
    ctx->pc = 0x28ED10u;
    // 0x28ed10: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x28ed10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28ed14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28ED14u;
    {
        const bool branch_taken_0x28ed14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED14u;
            // 0x28ed18: 0x46803220  cvt.s.w     $f8, $f6 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed14) {
            ctx->pc = 0x28ED34u;
            goto label_28ed34;
        }
    }
    ctx->pc = 0x28ED1Cu;
label_28ed1c:
    // 0x28ed1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ed1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ed20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ed24: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x28ed24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28ed28: 0x0  nop
    ctx->pc = 0x28ed28u;
    // NOP
    // 0x28ed2c: 0x46803220  cvt.s.w     $f8, $f6
    ctx->pc = 0x28ed2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x28ed30: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x28ed30u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_28ed34:
    // 0x28ed34: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x28ed34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ed38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed3c: 0x460c281a  mula.s      $f5, $f12
    ctx->pc = 0x28ed3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x28ed40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28ED40u;
    {
        const bool branch_taken_0x28ed40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28ED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED40u;
            // 0x28ed44: 0x460021dc  madd.s      $f7, $f4, $f0 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed40) {
            ctx->pc = 0x28ED4Cu;
            goto label_28ed4c;
        }
    }
    ctx->pc = 0x28ED48u;
    // 0x28ed48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ed48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed4c:
    // 0x28ed4c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28ED4Cu;
    {
        const bool branch_taken_0x28ed4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ed4c) {
            ctx->pc = 0x28ED50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED4Cu;
            // 0x28ed50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28ED60u;
            goto label_28ed60;
        }
    }
    ctx->pc = 0x28ED54u;
    // 0x28ed54: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x28ed54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28ed58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28ED58u;
    {
        const bool branch_taken_0x28ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED58u;
            // 0x28ed5c: 0x468031a0  cvt.s.w     $f6, $f6 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed58) {
            ctx->pc = 0x28ED78u;
            goto label_28ed78;
        }
    }
    ctx->pc = 0x28ED60u;
label_28ed60:
    // 0x28ed60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ed64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ed64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ed68: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x28ed68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28ed6c: 0x0  nop
    ctx->pc = 0x28ed6cu;
    // NOP
    // 0x28ed70: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x28ed70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28ed74: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x28ed74u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_28ed78:
    // 0x28ed78: 0x4606381a  mula.s      $f7, $f6
    ctx->pc = 0x28ed78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x28ed7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed80: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x28ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28ed84: 0x4608001c  madd.s      $f0, $f0, $f8
    ctx->pc = 0x28ed84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
    // 0x28ed88: 0x46013832  c.eq.s      $f7, $f1
    ctx->pc = 0x28ed88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ed8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28ED8Cu;
    {
        const bool branch_taken_0x28ed8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28ED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED8Cu;
            // 0x28ed90: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed8c) {
            ctx->pc = 0x28ED98u;
            goto label_28ed98;
        }
    }
    ctx->pc = 0x28ED94u;
    // 0x28ed94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ed94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ed98:
    // 0x28ed98: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28ED98u;
    {
        const bool branch_taken_0x28ed98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ed98) {
            ctx->pc = 0x28ED9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED98u;
            // 0x28ed9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EDACu;
            goto label_28edac;
        }
    }
    ctx->pc = 0x28EDA0u;
    // 0x28eda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eda4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EDA4u;
    {
        const bool branch_taken_0x28eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDA4u;
            // 0x28eda8: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eda4) {
            ctx->pc = 0x28EDC4u;
            goto label_28edc4;
        }
    }
    ctx->pc = 0x28EDACu;
label_28edac:
    // 0x28edac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28edb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28edb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28edb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28edb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28edb8: 0x0  nop
    ctx->pc = 0x28edb8u;
    // NOP
    // 0x28edbc: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x28edbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28edc0: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x28edc0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_28edc4:
    // 0x28edc4: 0x46013832  c.eq.s      $f7, $f1
    ctx->pc = 0x28edc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28edc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edcc: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x28edccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x28edd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EDD0u;
    {
        const bool branch_taken_0x28edd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDD0u;
            // 0x28edd4: 0x4607205c  madd.s      $f1, $f4, $f7 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edd0) {
            ctx->pc = 0x28EDDCu;
            goto label_28eddc;
        }
    }
    ctx->pc = 0x28EDD8u;
    // 0x28edd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28edd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eddc:
    // 0x28eddc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EDDCu;
    {
        const bool branch_taken_0x28eddc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28eddc) {
            ctx->pc = 0x28EDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDDCu;
            // 0x28ede0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EDF0u;
            goto label_28edf0;
        }
    }
    ctx->pc = 0x28EDE4u;
    // 0x28ede4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ede4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ede8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EDE8u;
    {
        const bool branch_taken_0x28ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDE8u;
            // 0x28edec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ede8) {
            ctx->pc = 0x28EE08u;
            goto label_28ee08;
        }
    }
    ctx->pc = 0x28EDF0u;
label_28edf0:
    // 0x28edf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28edf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28edf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28edf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28edf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28edfc: 0x0  nop
    ctx->pc = 0x28edfcu;
    // NOP
    // 0x28ee00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ee00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ee04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ee04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ee08:
    // 0x28ee08: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x28ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28ee0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ee10: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28ee10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28ee14: 0x4606381c  madd.s      $f0, $f7, $f6
    ctx->pc = 0x28ee14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x28ee18: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x28ee18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ee1c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EE1Cu;
    {
        const bool branch_taken_0x28ee1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE1Cu;
            // 0x28ee20: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee1c) {
            ctx->pc = 0x28EE28u;
            goto label_28ee28;
        }
    }
    ctx->pc = 0x28EE24u;
    // 0x28ee24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ee24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ee28:
    // 0x28ee28: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EE28u;
    {
        const bool branch_taken_0x28ee28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ee28) {
            ctx->pc = 0x28EE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE28u;
            // 0x28ee2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EE3Cu;
            goto label_28ee3c;
        }
    }
    ctx->pc = 0x28EE30u;
    // 0x28ee30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ee30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ee34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EE34u;
    {
        const bool branch_taken_0x28ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE34u;
            // 0x28ee38: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee34) {
            ctx->pc = 0x28EE54u;
            goto label_28ee54;
        }
    }
    ctx->pc = 0x28EE3Cu;
label_28ee3c:
    // 0x28ee3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ee40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ee40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ee44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ee44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ee48: 0x0  nop
    ctx->pc = 0x28ee48u;
    // NOP
    // 0x28ee4c: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x28ee4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28ee50: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x28ee50u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_28ee54:
    // 0x28ee54: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x28ee54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ee58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ee5c: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x28ee5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x28ee60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EE60u;
    {
        const bool branch_taken_0x28ee60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE60u;
            // 0x28ee64: 0x4608205c  madd.s      $f1, $f4, $f8 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee60) {
            ctx->pc = 0x28EE6Cu;
            goto label_28ee6c;
        }
    }
    ctx->pc = 0x28EE68u;
    // 0x28ee68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ee68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ee6c:
    // 0x28ee6c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EE6Cu;
    {
        const bool branch_taken_0x28ee6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28ee6c) {
            ctx->pc = 0x28EE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE6Cu;
            // 0x28ee70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EE80u;
            goto label_28ee80;
        }
    }
    ctx->pc = 0x28EE74u;
    // 0x28ee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ee78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EE78u;
    {
        const bool branch_taken_0x28ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE78u;
            // 0x28ee7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee78) {
            ctx->pc = 0x28EE98u;
            goto label_28ee98;
        }
    }
    ctx->pc = 0x28EE80u;
label_28ee80:
    // 0x28ee80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ee84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ee84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ee88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ee88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ee8c: 0x0  nop
    ctx->pc = 0x28ee8cu;
    // NOP
    // 0x28ee90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ee90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ee94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ee94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ee98:
    // 0x28ee98: 0xc7a7006c  lwc1        $f7, 0x6C($sp)
    ctx->pc = 0x28ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28ee9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eea0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28eea0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28eea4: 0x4606401c  madd.s      $f0, $f8, $f6
    ctx->pc = 0x28eea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
    // 0x28eea8: 0x46033832  c.eq.s      $f7, $f3
    ctx->pc = 0x28eea8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28eeac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EEACu;
    {
        const bool branch_taken_0x28eeac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEACu;
            // 0x28eeb0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eeac) {
            ctx->pc = 0x28EEB8u;
            goto label_28eeb8;
        }
    }
    ctx->pc = 0x28EEB4u;
    // 0x28eeb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28eeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eeb8:
    // 0x28eeb8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EEB8u;
    {
        const bool branch_taken_0x28eeb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28eeb8) {
            ctx->pc = 0x28EEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEB8u;
            // 0x28eebc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EECCu;
            goto label_28eecc;
        }
    }
    ctx->pc = 0x28EEC0u;
    // 0x28eec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EEC4u;
    {
        const bool branch_taken_0x28eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEC4u;
            // 0x28eec8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eec4) {
            ctx->pc = 0x28EEE4u;
            goto label_28eee4;
        }
    }
    ctx->pc = 0x28EECCu;
label_28eecc:
    // 0x28eecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28eed0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28eed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28eed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28eed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eed8: 0x0  nop
    ctx->pc = 0x28eed8u;
    // NOP
    // 0x28eedc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28eedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28eee0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28eee0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28eee4:
    // 0x28eee4: 0x46033832  c.eq.s      $f7, $f3
    ctx->pc = 0x28eee4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28eee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eeec: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x28eeecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x28eef0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EEF0u;
    {
        const bool branch_taken_0x28eef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEF0u;
            // 0x28eef4: 0x4607205c  madd.s      $f1, $f4, $f7 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eef0) {
            ctx->pc = 0x28EEFCu;
            goto label_28eefc;
        }
    }
    ctx->pc = 0x28EEF8u;
    // 0x28eef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28eef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eefc:
    // 0x28eefc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EEFCu;
    {
        const bool branch_taken_0x28eefc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28eefc) {
            ctx->pc = 0x28EF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEFCu;
            // 0x28ef00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EF10u;
            goto label_28ef10;
        }
    }
    ctx->pc = 0x28EF04u;
    // 0x28ef04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ef04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ef08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EF08u;
    {
        const bool branch_taken_0x28ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF08u;
            // 0x28ef0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef08) {
            ctx->pc = 0x28EF28u;
            goto label_28ef28;
        }
    }
    ctx->pc = 0x28EF10u;
label_28ef10:
    // 0x28ef10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ef14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ef14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ef18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ef18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ef1c: 0x0  nop
    ctx->pc = 0x28ef1cu;
    // NOP
    // 0x28ef20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ef20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ef24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ef24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ef28:
    // 0x28ef28: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28ef28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28ef2c: 0x4602381c  madd.s      $f0, $f7, $f2
    ctx->pc = 0x28ef2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x28ef30: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x28ef30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_28ef34:
    // 0x28ef34: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x28ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ef38: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x28ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ef3c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x28ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ef40: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x28ef40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28ef44: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ef48: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28ef48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28ef4c: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x28ef4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28ef50: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x28ef50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28ef54: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x28ef54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x28ef58: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x28ef58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ef5c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x28EF5Cu;
    {
        const bool branch_taken_0x28ef5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ef5c) {
            ctx->pc = 0x28EF7Cu;
            goto label_28ef7c;
        }
    }
    ctx->pc = 0x28EF64u;
    // 0x28ef64: 0x0  nop
    ctx->pc = 0x28ef64u;
    // NOP
    // 0x28ef68: 0x0  nop
    ctx->pc = 0x28ef68u;
    // NOP
    // 0x28ef6c: 0x4600a916  rsqrt.s     $f4, $f21, $f0
    ctx->pc = 0x28ef6cu;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[21]);
    // 0x28ef70: 0x0  nop
    ctx->pc = 0x28ef70u;
    // NOP
    // 0x28ef74: 0x0  nop
    ctx->pc = 0x28ef74u;
    // NOP
    // 0x28ef78: 0x0  nop
    ctx->pc = 0x28ef78u;
    // NOP
label_28ef7c:
    // 0x28ef7c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ef80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef84: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x28ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ef88: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x28ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28ef8c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ef90: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x28ef90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28ef94: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x28ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ef98: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28ef98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28ef9c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28ef9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x28efa0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28efa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28efa4: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x28efa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28efa8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x28efa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28efac: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x28efacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28efb0: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x28EFB0u;
    SET_GPR_U32(ctx, 31, 0x28EFB8u);
    ctx->pc = 0x28EFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFB0u;
            // 0x28efb4: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EFB8u; }
        if (ctx->pc != 0x28EFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EFB8u; }
        if (ctx->pc != 0x28EFB8u) { return; }
    }
    ctx->pc = 0x28EFB8u;
label_28efb8:
    // 0x28efb8: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x28efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28efbc: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x28efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28efc0: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x28efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28efc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28efc8: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28efc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28efcc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28EFCCu;
    {
        const bool branch_taken_0x28efcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFCCu;
            // 0x28efd0: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efcc) {
            ctx->pc = 0x28EFD8u;
            goto label_28efd8;
        }
    }
    ctx->pc = 0x28EFD4u;
    // 0x28efd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28efd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28efd8:
    // 0x28efd8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EFD8u;
    {
        const bool branch_taken_0x28efd8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28efd8) {
            ctx->pc = 0x28EFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFD8u;
            // 0x28efdc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EFECu;
            goto label_28efec;
        }
    }
    ctx->pc = 0x28EFE0u;
    // 0x28efe0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28efe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28efe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28EFE4u;
    {
        const bool branch_taken_0x28efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EFE4u;
            // 0x28efe8: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efe4) {
            ctx->pc = 0x28F004u;
            goto label_28f004;
        }
    }
    ctx->pc = 0x28EFECu;
label_28efec:
    // 0x28efec: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28efecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28eff0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28eff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28eff4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28eff4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28eff8: 0x0  nop
    ctx->pc = 0x28eff8u;
    // NOP
    // 0x28effc: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x28effcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f000: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28f000u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28f004:
    // 0x28f004: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f004u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f008: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f00c: 0x4602a01a  mula.s      $f20, $f2
    ctx->pc = 0x28f00cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28f010: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F010u;
    {
        const bool branch_taken_0x28f010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F010u;
            // 0x28f014: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f010) {
            ctx->pc = 0x28F01Cu;
            goto label_28f01c;
        }
    }
    ctx->pc = 0x28F018u;
    // 0x28f018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f01c:
    // 0x28f01c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F01Cu;
    {
        const bool branch_taken_0x28f01c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f01c) {
            ctx->pc = 0x28F020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F01Cu;
            // 0x28f020: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F030u;
            goto label_28f030;
        }
    }
    ctx->pc = 0x28F024u;
    // 0x28f024: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f028: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F028u;
    {
        const bool branch_taken_0x28f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F028u;
            // 0x28f02c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f028) {
            ctx->pc = 0x28F048u;
            goto label_28f048;
        }
    }
    ctx->pc = 0x28F030u;
label_28f030:
    // 0x28f030: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f034: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f038: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f038u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f03c: 0x0  nop
    ctx->pc = 0x28f03cu;
    // NOP
    // 0x28f040: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f044: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28f044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28f048:
    // 0x28f048: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x28f048u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28f04c: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x28f04cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28f050: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x28f050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28f054: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x28f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f058: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x28f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f05c: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f05cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f060: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F060u;
    {
        const bool branch_taken_0x28f060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F060u;
            // 0x28f064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f060) {
            ctx->pc = 0x28F06Cu;
            goto label_28f06c;
        }
    }
    ctx->pc = 0x28F068u;
    // 0x28f068: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f06c:
    // 0x28f06c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F06Cu;
    {
        const bool branch_taken_0x28f06c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f06c) {
            ctx->pc = 0x28F070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F06Cu;
            // 0x28f070: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F080u;
            goto label_28f080;
        }
    }
    ctx->pc = 0x28F074u;
    // 0x28f074: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F078u;
    {
        const bool branch_taken_0x28f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F078u;
            // 0x28f07c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f078) {
            ctx->pc = 0x28F098u;
            goto label_28f098;
        }
    }
    ctx->pc = 0x28F080u;
label_28f080:
    // 0x28f080: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f084: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f088: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f088u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f08c: 0x0  nop
    ctx->pc = 0x28f08cu;
    // NOP
    // 0x28f090: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x28f090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f094: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28f094u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28f098:
    // 0x28f098: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f098u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f09c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f0a0: 0x4602a01a  mula.s      $f20, $f2
    ctx->pc = 0x28f0a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28f0a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F0A4u;
    {
        const bool branch_taken_0x28f0a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0A4u;
            // 0x28f0a8: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0a4) {
            ctx->pc = 0x28F0B0u;
            goto label_28f0b0;
        }
    }
    ctx->pc = 0x28F0ACu;
    // 0x28f0ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f0b0:
    // 0x28f0b0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F0B0u;
    {
        const bool branch_taken_0x28f0b0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f0b0) {
            ctx->pc = 0x28F0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0B0u;
            // 0x28f0b4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F0C4u;
            goto label_28f0c4;
        }
    }
    ctx->pc = 0x28F0B8u;
    // 0x28f0b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f0b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f0bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F0BCu;
    {
        const bool branch_taken_0x28f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0BCu;
            // 0x28f0c0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0bc) {
            ctx->pc = 0x28F0DCu;
            goto label_28f0dc;
        }
    }
    ctx->pc = 0x28F0C4u;
label_28f0c4:
    // 0x28f0c4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f0c8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f0c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f0cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f0ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f0d0: 0x0  nop
    ctx->pc = 0x28f0d0u;
    // NOP
    // 0x28f0d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f0d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28f0d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28f0dc:
    // 0x28f0dc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x28f0dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28f0e0: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x28f0e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28f0e4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28f0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28f0e8: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x28f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f0ec: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x28f0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f0f0: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f0f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f0f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F0F4u;
    {
        const bool branch_taken_0x28f0f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0F4u;
            // 0x28f0f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0f4) {
            ctx->pc = 0x28F100u;
            goto label_28f100;
        }
    }
    ctx->pc = 0x28F0FCu;
    // 0x28f0fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f100:
    // 0x28f100: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F100u;
    {
        const bool branch_taken_0x28f100 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f100) {
            ctx->pc = 0x28F104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F100u;
            // 0x28f104: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F114u;
            goto label_28f114;
        }
    }
    ctx->pc = 0x28F108u;
    // 0x28f108: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f108u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f10c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F10Cu;
    {
        const bool branch_taken_0x28f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F10Cu;
            // 0x28f110: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f10c) {
            ctx->pc = 0x28F12Cu;
            goto label_28f12c;
        }
    }
    ctx->pc = 0x28F114u;
label_28f114:
    // 0x28f114: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f118: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f11c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f11cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f120: 0x0  nop
    ctx->pc = 0x28f120u;
    // NOP
    // 0x28f124: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x28f124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f128: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28f128u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28f12c:
    // 0x28f12c: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f12cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f134: 0x4602a01a  mula.s      $f20, $f2
    ctx->pc = 0x28f134u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28f138: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F138u;
    {
        const bool branch_taken_0x28f138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F138u;
            // 0x28f13c: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f138) {
            ctx->pc = 0x28F144u;
            goto label_28f144;
        }
    }
    ctx->pc = 0x28F140u;
    // 0x28f140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f144:
    // 0x28f144: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F144u;
    {
        const bool branch_taken_0x28f144 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f144) {
            ctx->pc = 0x28F148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F144u;
            // 0x28f148: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F158u;
            goto label_28f158;
        }
    }
    ctx->pc = 0x28F14Cu;
    // 0x28f14c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f14cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f150: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F150u;
    {
        const bool branch_taken_0x28f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F150u;
            // 0x28f154: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f150) {
            ctx->pc = 0x28F170u;
            goto label_28f170;
        }
    }
    ctx->pc = 0x28F158u;
label_28f158:
    // 0x28f158: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f15c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f160: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f160u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f164: 0x0  nop
    ctx->pc = 0x28f164u;
    // NOP
    // 0x28f168: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f16c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28f16cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28f170:
    // 0x28f170: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x28f170u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28f174: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x28f174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28f178: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28f178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28f17c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x28f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f180: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x28f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f184: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x28f184u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f188: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F188u;
    {
        const bool branch_taken_0x28f188 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F188u;
            // 0x28f18c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f188) {
            ctx->pc = 0x28F194u;
            goto label_28f194;
        }
    }
    ctx->pc = 0x28F190u;
    // 0x28f190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f194:
    // 0x28f194: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F194u;
    {
        const bool branch_taken_0x28f194 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f194) {
            ctx->pc = 0x28F198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F194u;
            // 0x28f198: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F1A8u;
            goto label_28f1a8;
        }
    }
    ctx->pc = 0x28F19Cu;
    // 0x28f19c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f19cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f1a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F1A0u;
    {
        const bool branch_taken_0x28f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1A0u;
            // 0x28f1a4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1a0) {
            ctx->pc = 0x28F1C0u;
            goto label_28f1c0;
        }
    }
    ctx->pc = 0x28F1A8u;
label_28f1a8:
    // 0x28f1a8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f1ac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f1acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f1b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f1b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f1b4: 0x0  nop
    ctx->pc = 0x28f1b4u;
    // NOP
    // 0x28f1b8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x28f1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f1bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28f1bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28f1c0:
    // 0x28f1c0: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x28f1c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f1c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f1c8: 0x4604a01a  mula.s      $f20, $f4
    ctx->pc = 0x28f1c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x28f1cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F1CCu;
    {
        const bool branch_taken_0x28f1cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1CCu;
            // 0x28f1d0: 0x4603005c  madd.s      $f1, $f0, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1cc) {
            ctx->pc = 0x28F1D8u;
            goto label_28f1d8;
        }
    }
    ctx->pc = 0x28F1D4u;
    // 0x28f1d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f1d8:
    // 0x28f1d8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F1D8u;
    {
        const bool branch_taken_0x28f1d8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f1d8) {
            ctx->pc = 0x28F1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1D8u;
            // 0x28f1dc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F1ECu;
            goto label_28f1ec;
        }
    }
    ctx->pc = 0x28F1E0u;
    // 0x28f1e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28f1e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f1e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F1E4u;
    {
        const bool branch_taken_0x28f1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1E4u;
            // 0x28f1e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1e4) {
            ctx->pc = 0x28F204u;
            goto label_28f204;
        }
    }
    ctx->pc = 0x28F1ECu;
label_28f1ec:
    // 0x28f1ec: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f1f0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f1f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28f1f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f1f8: 0x0  nop
    ctx->pc = 0x28f1f8u;
    // NOP
    // 0x28f1fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f200: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f204:
    // 0x28f204: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28f204u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f208: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x28f208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x28f20c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28f20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28f210: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28f214: 0xc6470044  lwc1        $f7, 0x44($s2)
    ctx->pc = 0x28f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28f218: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f21c: 0xc6480040  lwc1        $f8, 0x40($s2)
    ctx->pc = 0x28f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28f220: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x28f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f224: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28f224u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28f228: 0xc6460048  lwc1        $f6, 0x48($s2)
    ctx->pc = 0x28f228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28f22c: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x28f22cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x28f230: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x28f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f234: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x28f234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f238: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x28f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f23c: 0x4603315c  madd.s      $f5, $f6, $f3
    ctx->pc = 0x28f23cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x28f240: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28f240u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28f244: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x28f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f248: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x28f248u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x28f24c: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x28f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f250: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x28f250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x28f254: 0x4604311c  madd.s      $f4, $f6, $f4
    ctx->pc = 0x28f254u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x28f258: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x28f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f25c: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x28f25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f260: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x28f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f264: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x28f264u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x28f268: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x28f268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x28f26c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x28f26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x28f270: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x28f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f274: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x28f274u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x28f278: 0x4603305c  madd.s      $f1, $f6, $f3
    ctx->pc = 0x28f278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x28f27c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x28f27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x28f280: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28f284: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x28f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f288: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x28f288u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28f28c: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x28f28cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x28f290: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28f290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28f294: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28f294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28f298: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x28f298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f29c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x28f29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28f2a0: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x28f2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x28f2a4: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x28f2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x28f2a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28f2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f2ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x28f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28f2b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28f2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f2b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28f2b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28f2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f2bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28f2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2C0u;
            // 0x28f2c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F2C8u;
    // 0x28f2c8: 0x0  nop
    ctx->pc = 0x28f2c8u;
    // NOP
    // 0x28f2cc: 0x0  nop
    ctx->pc = 0x28f2ccu;
    // NOP
}
