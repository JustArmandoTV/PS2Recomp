#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F2D0
// Address: 0x28f2d0 - 0x28fc10
void sub_0028F2D0_0x28f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F2D0_0x28f2d0");
#endif

    switch (ctx->pc) {
        case 0x28f900u: goto label_28f900;
        default: break;
    }

    ctx->pc = 0x28f2d0u;

    // 0x28f2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28f2d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28f2d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28f2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28f2dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28f2e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28f2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28f2e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28f2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28f2ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28f2f0: 0x2650001c  addiu       $s0, $s2, 0x1C
    ctx->pc = 0x28f2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28f2f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28f2f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28f2f8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x28f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f2fc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x28f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f300: 0xc4850024  lwc1        $f5, 0x24($a0)
    ctx->pc = 0x28f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28f304: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x28f304u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x28f308: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x28f308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x28f30c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x28f30cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f310: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x28f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f314: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x28f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f318: 0xc48c0030  lwc1        $f12, 0x30($a0)
    ctx->pc = 0x28f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f31c: 0x46012800  add.s       $f0, $f5, $f1
    ctx->pc = 0x28f31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x28f320: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x28f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28f324: 0xc487002c  lwc1        $f7, 0x2C($a0)
    ctx->pc = 0x28f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28f328: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x28f328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f32c: 0xc483003c  lwc1        $f3, 0x3C($a0)
    ctx->pc = 0x28f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f330: 0x460c2200  add.s       $f8, $f4, $f12
    ctx->pc = 0x28f330u;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x28f334: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x28f334u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28f338: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x28f338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28f33c: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x28f33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x28f340: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x28f340u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x28f344: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x28f344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28f348: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x28f348u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28f34c: 0x46033800  add.s       $f0, $f7, $f3
    ctx->pc = 0x28f34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x28f350: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x28f350u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28f354: 0x4600021c  madd.s      $f8, $f0, $f0
    ctx->pc = 0x28f354u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28f358: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28f358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28f35c: 0x0  nop
    ctx->pc = 0x28f35cu;
    // NOP
    // 0x28f360: 0x460d4032  c.eq.s      $f8, $f13
    ctx->pc = 0x28f360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f364: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28F364u;
    {
        const bool branch_taken_0x28f364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F364u;
            // 0x28f368: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f364) {
            ctx->pc = 0x28F388u;
            goto label_28f388;
        }
    }
    ctx->pc = 0x28F36Cu;
    // 0x28f36c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28f370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f374: 0x0  nop
    ctx->pc = 0x28f374u;
    // NOP
    // 0x28f378: 0x46080356  rsqrt.s     $f13, $f0, $f8
    ctx->pc = 0x28f378u;
    ctx->f[13] = 1.0f / sqrtf(ctx->f[0]);
    // 0x28f37c: 0x0  nop
    ctx->pc = 0x28f37cu;
    // NOP
    // 0x28f380: 0x0  nop
    ctx->pc = 0x28f380u;
    // NOP
    // 0x28f384: 0x0  nop
    ctx->pc = 0x28f384u;
    // NOP
label_28f388:
    // 0x28f388: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28f38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f390: 0xc7aa0064  lwc1        $f10, 0x64($sp)
    ctx->pc = 0x28f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28f394: 0xc7a90068  lwc1        $f9, 0x68($sp)
    ctx->pc = 0x28f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28f398: 0xc7a8006c  lwc1        $f8, 0x6C($sp)
    ctx->pc = 0x28f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28f39c: 0x460d5282  mul.s       $f10, $f10, $f13
    ctx->pc = 0x28f39cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x28f3a0: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x28f3a0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x28f3a4: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x28f3a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x28f3a8: 0xc7ab0060  lwc1        $f11, 0x60($sp)
    ctx->pc = 0x28f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28f3ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28f3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f3b0: 0x460d5802  mul.s       $f0, $f11, $f13
    ctx->pc = 0x28f3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x28f3b4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x28f3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28f3b8: 0xe7aa0064  swc1        $f10, 0x64($sp)
    ctx->pc = 0x28f3b8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28f3bc: 0xe7a90068  swc1        $f9, 0x68($sp)
    ctx->pc = 0x28f3bcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28f3c0: 0x45000097  bc1f        . + 4 + (0x97 << 2)
    ctx->pc = 0x28F3C0u;
    {
        const bool branch_taken_0x28f3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3C0u;
            // 0x28f3c4: 0xe7a8006c  swc1        $f8, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3c0) {
            ctx->pc = 0x28F620u;
            goto label_28f620;
        }
    }
    ctx->pc = 0x28F3C8u;
    // 0x28f3c8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x28f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x28f3cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28f3d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f3d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f3d8: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x28f3d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x28f3dc: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x28f3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28f3e0: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x28f3e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f3e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F3E4u;
    {
        const bool branch_taken_0x28f3e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3E4u;
            // 0x28f3e8: 0x4602a841  sub.s       $f1, $f21, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3e4) {
            ctx->pc = 0x28F3F0u;
            goto label_28f3f0;
        }
    }
    ctx->pc = 0x28F3ECu;
    // 0x28f3ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f3f0:
    // 0x28f3f0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F3F0u;
    {
        const bool branch_taken_0x28f3f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f3f0) {
            ctx->pc = 0x28F3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3F0u;
            // 0x28f3f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F404u;
            goto label_28f404;
        }
    }
    ctx->pc = 0x28F3F8u;
    // 0x28f3f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x28f3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f3fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F3FCu;
    {
        const bool branch_taken_0x28f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3FCu;
            // 0x28f400: 0x46801a20  cvt.s.w     $f8, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3fc) {
            ctx->pc = 0x28F41Cu;
            goto label_28f41c;
        }
    }
    ctx->pc = 0x28F404u;
label_28f404:
    // 0x28f404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f408: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f40c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x28f40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f410: 0x0  nop
    ctx->pc = 0x28f410u;
    // NOP
    // 0x28f414: 0x46801a20  cvt.s.w     $f8, $f3
    ctx->pc = 0x28f414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x28f418: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x28f418u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_28f41c:
    // 0x28f41c: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x28f41cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f424: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x28f424u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28f428: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F428u;
    {
        const bool branch_taken_0x28f428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F428u;
            // 0x28f42c: 0x460408dc  madd.s      $f3, $f1, $f4 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f428) {
            ctx->pc = 0x28F434u;
            goto label_28f434;
        }
    }
    ctx->pc = 0x28F430u;
    // 0x28f430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f434:
    // 0x28f434: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F434u;
    {
        const bool branch_taken_0x28f434 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f434) {
            ctx->pc = 0x28F438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F434u;
            // 0x28f438: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F448u;
            goto label_28f448;
        }
    }
    ctx->pc = 0x28F43Cu;
    // 0x28f43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F440u;
    {
        const bool branch_taken_0x28f440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F440u;
            // 0x28f444: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f440) {
            ctx->pc = 0x28F460u;
            goto label_28f460;
        }
    }
    ctx->pc = 0x28F448u;
label_28f448:
    // 0x28f448: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f44c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f454: 0x0  nop
    ctx->pc = 0x28f454u;
    // NOP
    // 0x28f458: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f45c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f460:
    // 0x28f460: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x28f460u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28f464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f468: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x28f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f46c: 0x4608201c  madd.s      $f0, $f4, $f8
    ctx->pc = 0x28f46cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x28f470: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x28f470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f474: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F474u;
    {
        const bool branch_taken_0x28f474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F474u;
            // 0x28f478: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f474) {
            ctx->pc = 0x28F480u;
            goto label_28f480;
        }
    }
    ctx->pc = 0x28F47Cu;
    // 0x28f47c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f480:
    // 0x28f480: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F480u;
    {
        const bool branch_taken_0x28f480 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f480) {
            ctx->pc = 0x28F484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F480u;
            // 0x28f484: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F494u;
            goto label_28f494;
        }
    }
    ctx->pc = 0x28F488u;
    // 0x28f488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f48c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F48Cu;
    {
        const bool branch_taken_0x28f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F48Cu;
            // 0x28f490: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f48c) {
            ctx->pc = 0x28F4ACu;
            goto label_28f4ac;
        }
    }
    ctx->pc = 0x28F494u;
label_28f494:
    // 0x28f494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f498: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f49c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f49cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f4a0: 0x0  nop
    ctx->pc = 0x28f4a0u;
    // NOP
    // 0x28f4a4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x28f4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x28f4a8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x28f4a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_28f4ac:
    // 0x28f4ac: 0x46032832  c.eq.s      $f5, $f3
    ctx->pc = 0x28f4acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f4b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f4b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x28f4b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28f4b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F4B8u;
    {
        const bool branch_taken_0x28f4b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4B8u;
            // 0x28f4bc: 0x460508dc  madd.s      $f3, $f1, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4b8) {
            ctx->pc = 0x28F4C4u;
            goto label_28f4c4;
        }
    }
    ctx->pc = 0x28F4C0u;
    // 0x28f4c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f4c4:
    // 0x28f4c4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F4C4u;
    {
        const bool branch_taken_0x28f4c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f4c4) {
            ctx->pc = 0x28F4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4C4u;
            // 0x28f4c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F4D8u;
            goto label_28f4d8;
        }
    }
    ctx->pc = 0x28F4CCu;
    // 0x28f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f4d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F4D0u;
    {
        const bool branch_taken_0x28f4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4D0u;
            // 0x28f4d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4d0) {
            ctx->pc = 0x28F4F0u;
            goto label_28f4f0;
        }
    }
    ctx->pc = 0x28F4D8u;
label_28f4d8:
    // 0x28f4d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f4dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f4e4: 0x0  nop
    ctx->pc = 0x28f4e4u;
    // NOP
    // 0x28f4e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f4ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f4f0:
    // 0x28f4f0: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x28f4f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28f4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f4f8: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x28f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f4fc: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x28f4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x28f500: 0x46033032  c.eq.s      $f6, $f3
    ctx->pc = 0x28f500u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f504: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F504u;
    {
        const bool branch_taken_0x28f504 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F504u;
            // 0x28f508: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f504) {
            ctx->pc = 0x28F510u;
            goto label_28f510;
        }
    }
    ctx->pc = 0x28F50Cu;
    // 0x28f50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f510:
    // 0x28f510: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F510u;
    {
        const bool branch_taken_0x28f510 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f510) {
            ctx->pc = 0x28F514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F510u;
            // 0x28f514: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F524u;
            goto label_28f524;
        }
    }
    ctx->pc = 0x28F518u;
    // 0x28f518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f51c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F51Cu;
    {
        const bool branch_taken_0x28f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F51Cu;
            // 0x28f520: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f51c) {
            ctx->pc = 0x28F53Cu;
            goto label_28f53c;
        }
    }
    ctx->pc = 0x28F524u;
label_28f524:
    // 0x28f524: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f528: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f52c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f530: 0x0  nop
    ctx->pc = 0x28f530u;
    // NOP
    // 0x28f534: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x28f534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x28f538: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x28f538u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_28f53c:
    // 0x28f53c: 0x46033032  c.eq.s      $f6, $f3
    ctx->pc = 0x28f53cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f544: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x28f544u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28f548: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F548u;
    {
        const bool branch_taken_0x28f548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F548u;
            // 0x28f54c: 0x460608dc  madd.s      $f3, $f1, $f6 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f548) {
            ctx->pc = 0x28F554u;
            goto label_28f554;
        }
    }
    ctx->pc = 0x28F550u;
    // 0x28f550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f554:
    // 0x28f554: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F554u;
    {
        const bool branch_taken_0x28f554 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f554) {
            ctx->pc = 0x28F558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F554u;
            // 0x28f558: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F568u;
            goto label_28f568;
        }
    }
    ctx->pc = 0x28F55Cu;
    // 0x28f55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f560: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F560u;
    {
        const bool branch_taken_0x28f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F560u;
            // 0x28f564: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f560) {
            ctx->pc = 0x28F580u;
            goto label_28f580;
        }
    }
    ctx->pc = 0x28F568u;
label_28f568:
    // 0x28f568: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f56c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f574: 0x0  nop
    ctx->pc = 0x28f574u;
    // NOP
    // 0x28f578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f57c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f580:
    // 0x28f580: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x28f580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28f584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f588: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x28f588u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28f58c: 0x4604301c  madd.s      $f0, $f6, $f4
    ctx->pc = 0x28f58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x28f590: 0x46053832  c.eq.s      $f7, $f5
    ctx->pc = 0x28f590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f594: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F594u;
    {
        const bool branch_taken_0x28f594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F594u;
            // 0x28f598: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f594) {
            ctx->pc = 0x28F5A0u;
            goto label_28f5a0;
        }
    }
    ctx->pc = 0x28F59Cu;
    // 0x28f59c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f5a0:
    // 0x28f5a0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5A0u;
    {
        const bool branch_taken_0x28f5a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f5a0) {
            ctx->pc = 0x28F5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5A0u;
            // 0x28f5a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F5B4u;
            goto label_28f5b4;
        }
    }
    ctx->pc = 0x28F5A8u;
    // 0x28f5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f5ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F5ACu;
    {
        const bool branch_taken_0x28f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5ACu;
            // 0x28f5b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5ac) {
            ctx->pc = 0x28F5CCu;
            goto label_28f5cc;
        }
    }
    ctx->pc = 0x28F5B4u;
label_28f5b4:
    // 0x28f5b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f5b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f5bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f5c0: 0x0  nop
    ctx->pc = 0x28f5c0u;
    // NOP
    // 0x28f5c4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28f5c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f5c8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28f5c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28f5cc:
    // 0x28f5cc: 0x46053832  c.eq.s      $f7, $f5
    ctx->pc = 0x28f5ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f5d4: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x28f5d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28f5d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F5D8u;
    {
        const bool branch_taken_0x28f5d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5D8u;
            // 0x28f5dc: 0x4607085c  madd.s      $f1, $f1, $f7 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5d8) {
            ctx->pc = 0x28F5E4u;
            goto label_28f5e4;
        }
    }
    ctx->pc = 0x28F5E0u;
    // 0x28f5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f5e4:
    // 0x28f5e4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5E4u;
    {
        const bool branch_taken_0x28f5e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f5e4) {
            ctx->pc = 0x28F5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5E4u;
            // 0x28f5e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F5F8u;
            goto label_28f5f8;
        }
    }
    ctx->pc = 0x28F5ECu;
    // 0x28f5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f5f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F5F0u;
    {
        const bool branch_taken_0x28f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5F0u;
            // 0x28f5f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5f0) {
            ctx->pc = 0x28F610u;
            goto label_28f610;
        }
    }
    ctx->pc = 0x28F5F8u;
label_28f5f8:
    // 0x28f5f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f5fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f604: 0x0  nop
    ctx->pc = 0x28f604u;
    // NOP
    // 0x28f608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f60c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f610:
    // 0x28f610: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28f610u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f614: 0x4603381c  madd.s      $f0, $f7, $f3
    ctx->pc = 0x28f614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x28f618: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x28F618u;
    {
        const bool branch_taken_0x28f618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F618u;
            // 0x28f61c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f618) {
            ctx->pc = 0x28F87Cu;
            goto label_28f87c;
        }
    }
    ctx->pc = 0x28F620u;
label_28f620:
    // 0x28f620: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x28f620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x28f624: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28f624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x28f628: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x28f628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28f62c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f630: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x28f630u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x28f634: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x28f634u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x28f638: 0x0  nop
    ctx->pc = 0x28f638u;
    // NOP
    // 0x28f63c: 0x46152141  sub.s       $f5, $f4, $f21
    ctx->pc = 0x28f63cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
    // 0x28f640: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x28f640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f644: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F644u;
    {
        const bool branch_taken_0x28f644 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F644u;
            // 0x28f648: 0x4605a901  sub.s       $f4, $f21, $f5 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f644) {
            ctx->pc = 0x28F650u;
            goto label_28f650;
        }
    }
    ctx->pc = 0x28F64Cu;
    // 0x28f64c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f650:
    // 0x28f650: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F650u;
    {
        const bool branch_taken_0x28f650 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f650) {
            ctx->pc = 0x28F654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F650u;
            // 0x28f654: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F664u;
            goto label_28f664;
        }
    }
    ctx->pc = 0x28F658u;
    // 0x28f658: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x28f658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28f65c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F65Cu;
    {
        const bool branch_taken_0x28f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F65Cu;
            // 0x28f660: 0x46803220  cvt.s.w     $f8, $f6 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f65c) {
            ctx->pc = 0x28F67Cu;
            goto label_28f67c;
        }
    }
    ctx->pc = 0x28F664u;
label_28f664:
    // 0x28f664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f66c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x28f66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28f670: 0x0  nop
    ctx->pc = 0x28f670u;
    // NOP
    // 0x28f674: 0x46803220  cvt.s.w     $f8, $f6
    ctx->pc = 0x28f674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x28f678: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x28f678u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_28f67c:
    // 0x28f67c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x28f67cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f684: 0x460c281a  mula.s      $f5, $f12
    ctx->pc = 0x28f684u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x28f688: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F688u;
    {
        const bool branch_taken_0x28f688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F688u;
            // 0x28f68c: 0x460021dc  madd.s      $f7, $f4, $f0 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f688) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F690u;
    // 0x28f690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f694:
    // 0x28f694: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F694u;
    {
        const bool branch_taken_0x28f694 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f694) {
            ctx->pc = 0x28F698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F694u;
            // 0x28f698: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F6A8u;
            goto label_28f6a8;
        }
    }
    ctx->pc = 0x28F69Cu;
    // 0x28f69c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x28f69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28f6a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F6A0u;
    {
        const bool branch_taken_0x28f6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6A0u;
            // 0x28f6a4: 0x468031a0  cvt.s.w     $f6, $f6 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6a0) {
            ctx->pc = 0x28F6C0u;
            goto label_28f6c0;
        }
    }
    ctx->pc = 0x28F6A8u;
label_28f6a8:
    // 0x28f6a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f6ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f6b0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x28f6b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28f6b4: 0x0  nop
    ctx->pc = 0x28f6b4u;
    // NOP
    // 0x28f6b8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x28f6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28f6bc: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x28f6bcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_28f6c0:
    // 0x28f6c0: 0x4606381a  mula.s      $f7, $f6
    ctx->pc = 0x28f6c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x28f6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f6c8: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x28f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28f6cc: 0x4608001c  madd.s      $f0, $f0, $f8
    ctx->pc = 0x28f6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
    // 0x28f6d0: 0x46013832  c.eq.s      $f7, $f1
    ctx->pc = 0x28f6d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f6d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F6D4u;
    {
        const bool branch_taken_0x28f6d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6D4u;
            // 0x28f6d8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6d4) {
            ctx->pc = 0x28F6E0u;
            goto label_28f6e0;
        }
    }
    ctx->pc = 0x28F6DCu;
    // 0x28f6dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f6e0:
    // 0x28f6e0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F6E0u;
    {
        const bool branch_taken_0x28f6e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f6e0) {
            ctx->pc = 0x28F6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6E0u;
            // 0x28f6e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F6F4u;
            goto label_28f6f4;
        }
    }
    ctx->pc = 0x28F6E8u;
    // 0x28f6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f6ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F6ECu;
    {
        const bool branch_taken_0x28f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6ECu;
            // 0x28f6f0: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6ec) {
            ctx->pc = 0x28F70Cu;
            goto label_28f70c;
        }
    }
    ctx->pc = 0x28F6F4u;
label_28f6f4:
    // 0x28f6f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f6f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f700: 0x0  nop
    ctx->pc = 0x28f700u;
    // NOP
    // 0x28f704: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x28f704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28f708: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x28f708u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_28f70c:
    // 0x28f70c: 0x46013832  c.eq.s      $f7, $f1
    ctx->pc = 0x28f70cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f714: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x28f714u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x28f718: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F718u;
    {
        const bool branch_taken_0x28f718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F718u;
            // 0x28f71c: 0x4607205c  madd.s      $f1, $f4, $f7 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f718) {
            ctx->pc = 0x28F724u;
            goto label_28f724;
        }
    }
    ctx->pc = 0x28F720u;
    // 0x28f720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f724:
    // 0x28f724: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F724u;
    {
        const bool branch_taken_0x28f724 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f724) {
            ctx->pc = 0x28F728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F724u;
            // 0x28f728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F738u;
            goto label_28f738;
        }
    }
    ctx->pc = 0x28F72Cu;
    // 0x28f72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f730: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F730u;
    {
        const bool branch_taken_0x28f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F730u;
            // 0x28f734: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f730) {
            ctx->pc = 0x28F750u;
            goto label_28f750;
        }
    }
    ctx->pc = 0x28F738u;
label_28f738:
    // 0x28f738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f744: 0x0  nop
    ctx->pc = 0x28f744u;
    // NOP
    // 0x28f748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f74c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f750:
    // 0x28f750: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x28f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28f754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f758: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28f758u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f75c: 0x4606381c  madd.s      $f0, $f7, $f6
    ctx->pc = 0x28f75cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x28f760: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x28f760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f764: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F764u;
    {
        const bool branch_taken_0x28f764 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F764u;
            // 0x28f768: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f764) {
            ctx->pc = 0x28F770u;
            goto label_28f770;
        }
    }
    ctx->pc = 0x28F76Cu;
    // 0x28f76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f770:
    // 0x28f770: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F770u;
    {
        const bool branch_taken_0x28f770 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f770) {
            ctx->pc = 0x28F774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F770u;
            // 0x28f774: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F784u;
            goto label_28f784;
        }
    }
    ctx->pc = 0x28F778u;
    // 0x28f778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f77c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F77Cu;
    {
        const bool branch_taken_0x28f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F77Cu;
            // 0x28f780: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f77c) {
            ctx->pc = 0x28F79Cu;
            goto label_28f79c;
        }
    }
    ctx->pc = 0x28F784u;
label_28f784:
    // 0x28f784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f790: 0x0  nop
    ctx->pc = 0x28f790u;
    // NOP
    // 0x28f794: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x28f794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28f798: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x28f798u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_28f79c:
    // 0x28f79c: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x28f79cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f7a4: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x28f7a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x28f7a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F7A8u;
    {
        const bool branch_taken_0x28f7a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7A8u;
            // 0x28f7ac: 0x4608205c  madd.s      $f1, $f4, $f8 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7a8) {
            ctx->pc = 0x28F7B4u;
            goto label_28f7b4;
        }
    }
    ctx->pc = 0x28F7B0u;
    // 0x28f7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f7b4:
    // 0x28f7b4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F7B4u;
    {
        const bool branch_taken_0x28f7b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f7b4) {
            ctx->pc = 0x28F7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7B4u;
            // 0x28f7b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F7C8u;
            goto label_28f7c8;
        }
    }
    ctx->pc = 0x28F7BCu;
    // 0x28f7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f7c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F7C0u;
    {
        const bool branch_taken_0x28f7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7C0u;
            // 0x28f7c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7c0) {
            ctx->pc = 0x28F7E0u;
            goto label_28f7e0;
        }
    }
    ctx->pc = 0x28F7C8u;
label_28f7c8:
    // 0x28f7c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f7cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f7d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f7d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f7d4: 0x0  nop
    ctx->pc = 0x28f7d4u;
    // NOP
    // 0x28f7d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f7d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f7dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f7e0:
    // 0x28f7e0: 0xc7a7006c  lwc1        $f7, 0x6C($sp)
    ctx->pc = 0x28f7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28f7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f7e8: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28f7e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f7ec: 0x4606401c  madd.s      $f0, $f8, $f6
    ctx->pc = 0x28f7ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
    // 0x28f7f0: 0x46033832  c.eq.s      $f7, $f3
    ctx->pc = 0x28f7f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f7f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F7F4u;
    {
        const bool branch_taken_0x28f7f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7F4u;
            // 0x28f7f8: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7f4) {
            ctx->pc = 0x28F800u;
            goto label_28f800;
        }
    }
    ctx->pc = 0x28F7FCu;
    // 0x28f7fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f800:
    // 0x28f800: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F800u;
    {
        const bool branch_taken_0x28f800 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f800) {
            ctx->pc = 0x28F804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F800u;
            // 0x28f804: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F814u;
            goto label_28f814;
        }
    }
    ctx->pc = 0x28F808u;
    // 0x28f808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f80c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F80Cu;
    {
        const bool branch_taken_0x28f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F80Cu;
            // 0x28f810: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f80c) {
            ctx->pc = 0x28F82Cu;
            goto label_28f82c;
        }
    }
    ctx->pc = 0x28F814u;
label_28f814:
    // 0x28f814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f818: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f81c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f820: 0x0  nop
    ctx->pc = 0x28f820u;
    // NOP
    // 0x28f824: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28f824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f828: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28f828u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28f82c:
    // 0x28f82c: 0x46033832  c.eq.s      $f7, $f3
    ctx->pc = 0x28f82cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f834: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x28f834u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x28f838: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F838u;
    {
        const bool branch_taken_0x28f838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F838u;
            // 0x28f83c: 0x4607205c  madd.s      $f1, $f4, $f7 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f838) {
            ctx->pc = 0x28F844u;
            goto label_28f844;
        }
    }
    ctx->pc = 0x28F840u;
    // 0x28f840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f844:
    // 0x28f844: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F844u;
    {
        const bool branch_taken_0x28f844 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28f844) {
            ctx->pc = 0x28F848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F844u;
            // 0x28f848: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F858u;
            goto label_28f858;
        }
    }
    ctx->pc = 0x28F84Cu;
    // 0x28f84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f850: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F850u;
    {
        const bool branch_taken_0x28f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F850u;
            // 0x28f854: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f850) {
            ctx->pc = 0x28F870u;
            goto label_28f870;
        }
    }
    ctx->pc = 0x28F858u;
label_28f858:
    // 0x28f858: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f85c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f864: 0x0  nop
    ctx->pc = 0x28f864u;
    // NOP
    // 0x28f868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f86c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f870:
    // 0x28f870: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28f870u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f874: 0x4602381c  madd.s      $f0, $f7, $f2
    ctx->pc = 0x28f874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x28f878: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x28f878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_28f87c:
    // 0x28f87c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x28f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f880: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x28f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f884: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x28f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f888: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x28f888u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28f88c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28f88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f890: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28f890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28f894: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x28f894u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28f898: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x28f898u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28f89c: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x28f89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x28f8a0: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x28f8a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f8a4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x28F8A4u;
    {
        const bool branch_taken_0x28f8a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f8a4) {
            ctx->pc = 0x28F8C4u;
            goto label_28f8c4;
        }
    }
    ctx->pc = 0x28F8ACu;
    // 0x28f8ac: 0x0  nop
    ctx->pc = 0x28f8acu;
    // NOP
    // 0x28f8b0: 0x0  nop
    ctx->pc = 0x28f8b0u;
    // NOP
    // 0x28f8b4: 0x4600a916  rsqrt.s     $f4, $f21, $f0
    ctx->pc = 0x28f8b4u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[21]);
    // 0x28f8b8: 0x0  nop
    ctx->pc = 0x28f8b8u;
    // NOP
    // 0x28f8bc: 0x0  nop
    ctx->pc = 0x28f8bcu;
    // NOP
    // 0x28f8c0: 0x0  nop
    ctx->pc = 0x28f8c0u;
    // NOP
label_28f8c4:
    // 0x28f8c4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28f8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8cc: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x28f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f8d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x28f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28f8d4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f8d8: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x28f8d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28f8dc: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x28f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f8e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28f8e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28f8e4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28f8e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x28f8e8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28f8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28f8ec: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x28f8ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28f8f0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x28f8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28f8f4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x28f8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28f8f8: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x28F8F8u;
    SET_GPR_U32(ctx, 31, 0x28F900u);
    ctx->pc = 0x28F8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8F8u;
            // 0x28f8fc: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F900u; }
        if (ctx->pc != 0x28F900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F900u; }
        if (ctx->pc != 0x28F900u) { return; }
    }
    ctx->pc = 0x28F900u;
label_28f900:
    // 0x28f900: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x28f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f904: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x28f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28f908: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x28f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f90c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f910: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f910u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f914: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F914u;
    {
        const bool branch_taken_0x28f914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F914u;
            // 0x28f918: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f914) {
            ctx->pc = 0x28F920u;
            goto label_28f920;
        }
    }
    ctx->pc = 0x28F91Cu;
    // 0x28f91c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f920:
    // 0x28f920: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F920u;
    {
        const bool branch_taken_0x28f920 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f920) {
            ctx->pc = 0x28F924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F920u;
            // 0x28f924: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F934u;
            goto label_28f934;
        }
    }
    ctx->pc = 0x28F928u;
    // 0x28f928: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f928u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f92c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F92Cu;
    {
        const bool branch_taken_0x28f92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F92Cu;
            // 0x28f930: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f92c) {
            ctx->pc = 0x28F94Cu;
            goto label_28f94c;
        }
    }
    ctx->pc = 0x28F934u;
label_28f934:
    // 0x28f934: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f938: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f93c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f93cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f940: 0x0  nop
    ctx->pc = 0x28f940u;
    // NOP
    // 0x28f944: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x28f944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f948: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28f948u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28f94c:
    // 0x28f94c: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f94cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f950: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f954: 0x4602a01a  mula.s      $f20, $f2
    ctx->pc = 0x28f954u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28f958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F958u;
    {
        const bool branch_taken_0x28f958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F958u;
            // 0x28f95c: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f958) {
            ctx->pc = 0x28F964u;
            goto label_28f964;
        }
    }
    ctx->pc = 0x28F960u;
    // 0x28f960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f964:
    // 0x28f964: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F964u;
    {
        const bool branch_taken_0x28f964 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f964) {
            ctx->pc = 0x28F968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F964u;
            // 0x28f968: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F978u;
            goto label_28f978;
        }
    }
    ctx->pc = 0x28F96Cu;
    // 0x28f96c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f96cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F970u;
    {
        const bool branch_taken_0x28f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F970u;
            // 0x28f974: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f970) {
            ctx->pc = 0x28F990u;
            goto label_28f990;
        }
    }
    ctx->pc = 0x28F978u;
label_28f978:
    // 0x28f978: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f97c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f980: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f980u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f984: 0x0  nop
    ctx->pc = 0x28f984u;
    // NOP
    // 0x28f988: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f98c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28f98cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28f990:
    // 0x28f990: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x28f990u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28f994: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x28f994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28f998: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x28f998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28f99c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x28f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f9a0: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x28f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f9a4: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f9a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f9a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F9A8u;
    {
        const bool branch_taken_0x28f9a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9A8u;
            // 0x28f9ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9a8) {
            ctx->pc = 0x28F9B4u;
            goto label_28f9b4;
        }
    }
    ctx->pc = 0x28F9B0u;
    // 0x28f9b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f9b4:
    // 0x28f9b4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F9B4u;
    {
        const bool branch_taken_0x28f9b4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f9b4) {
            ctx->pc = 0x28F9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9B4u;
            // 0x28f9b8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F9C8u;
            goto label_28f9c8;
        }
    }
    ctx->pc = 0x28F9BCu;
    // 0x28f9bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28f9bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f9c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F9C0u;
    {
        const bool branch_taken_0x28f9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9C0u;
            // 0x28f9c4: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9c0) {
            ctx->pc = 0x28F9E0u;
            goto label_28f9e0;
        }
    }
    ctx->pc = 0x28F9C8u;
label_28f9c8:
    // 0x28f9c8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28f9cc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28f9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28f9d0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28f9d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f9d4: 0x0  nop
    ctx->pc = 0x28f9d4u;
    // NOP
    // 0x28f9d8: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x28f9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f9dc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28f9dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28f9e0:
    // 0x28f9e0: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28f9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f9e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f9e8: 0x4602a01a  mula.s      $f20, $f2
    ctx->pc = 0x28f9e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28f9ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F9ECu;
    {
        const bool branch_taken_0x28f9ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9ECu;
            // 0x28f9f0: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9ec) {
            ctx->pc = 0x28F9F8u;
            goto label_28f9f8;
        }
    }
    ctx->pc = 0x28F9F4u;
    // 0x28f9f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f9f8:
    // 0x28f9f8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F9F8u;
    {
        const bool branch_taken_0x28f9f8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28f9f8) {
            ctx->pc = 0x28F9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9F8u;
            // 0x28f9fc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FA0Cu;
            goto label_28fa0c;
        }
    }
    ctx->pc = 0x28FA00u;
    // 0x28fa00: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28fa00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FA04u;
    {
        const bool branch_taken_0x28fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA04u;
            // 0x28fa08: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa04) {
            ctx->pc = 0x28FA24u;
            goto label_28fa24;
        }
    }
    ctx->pc = 0x28FA0Cu;
label_28fa0c:
    // 0x28fa0c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fa0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fa10: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fa10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fa14: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28fa14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa18: 0x0  nop
    ctx->pc = 0x28fa18u;
    // NOP
    // 0x28fa1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fa1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fa20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28fa20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28fa24:
    // 0x28fa24: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x28fa24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28fa28: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x28fa28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28fa2c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28fa2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28fa30: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x28fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fa34: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x28fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fa38: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28fa38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fa3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FA3Cu;
    {
        const bool branch_taken_0x28fa3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA3Cu;
            // 0x28fa40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa3c) {
            ctx->pc = 0x28FA48u;
            goto label_28fa48;
        }
    }
    ctx->pc = 0x28FA44u;
    // 0x28fa44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fa48:
    // 0x28fa48: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA48u;
    {
        const bool branch_taken_0x28fa48 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fa48) {
            ctx->pc = 0x28FA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA48u;
            // 0x28fa4c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FA5Cu;
            goto label_28fa5c;
        }
    }
    ctx->pc = 0x28FA50u;
    // 0x28fa50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28fa50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FA54u;
    {
        const bool branch_taken_0x28fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA54u;
            // 0x28fa58: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa54) {
            ctx->pc = 0x28FA74u;
            goto label_28fa74;
        }
    }
    ctx->pc = 0x28FA5Cu;
label_28fa5c:
    // 0x28fa5c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fa5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fa60: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fa60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fa64: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28fa64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa68: 0x0  nop
    ctx->pc = 0x28fa68u;
    // NOP
    // 0x28fa6c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x28fa6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28fa70: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28fa70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28fa74:
    // 0x28fa74: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x28fa74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fa78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fa7c: 0x4602a01a  mula.s      $f20, $f2
    ctx->pc = 0x28fa7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28fa80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FA80u;
    {
        const bool branch_taken_0x28fa80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA80u;
            // 0x28fa84: 0x4604009c  madd.s      $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa80) {
            ctx->pc = 0x28FA8Cu;
            goto label_28fa8c;
        }
    }
    ctx->pc = 0x28FA88u;
    // 0x28fa88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fa8c:
    // 0x28fa8c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA8Cu;
    {
        const bool branch_taken_0x28fa8c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fa8c) {
            ctx->pc = 0x28FA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA8Cu;
            // 0x28fa90: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FAA0u;
            goto label_28faa0;
        }
    }
    ctx->pc = 0x28FA94u;
    // 0x28fa94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28fa94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FA98u;
    {
        const bool branch_taken_0x28fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA98u;
            // 0x28fa9c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa98) {
            ctx->pc = 0x28FAB8u;
            goto label_28fab8;
        }
    }
    ctx->pc = 0x28FAA0u;
label_28faa0:
    // 0x28faa0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28faa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28faa4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28faa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28faa8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28faa8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28faac: 0x0  nop
    ctx->pc = 0x28faacu;
    // NOP
    // 0x28fab0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fab4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28fab4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28fab8:
    // 0x28fab8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x28fab8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28fabc: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x28fabcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x28fac0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28fac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28fac4: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x28fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fac8: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x28fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28facc: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x28faccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fad0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FAD0u;
    {
        const bool branch_taken_0x28fad0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FAD0u;
            // 0x28fad4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fad0) {
            ctx->pc = 0x28FADCu;
            goto label_28fadc;
        }
    }
    ctx->pc = 0x28FAD8u;
    // 0x28fad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fadc:
    // 0x28fadc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FADCu;
    {
        const bool branch_taken_0x28fadc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fadc) {
            ctx->pc = 0x28FAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FADCu;
            // 0x28fae0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FAF0u;
            goto label_28faf0;
        }
    }
    ctx->pc = 0x28FAE4u;
    // 0x28fae4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28fae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fae8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FAE8u;
    {
        const bool branch_taken_0x28fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FAE8u;
            // 0x28faec: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fae8) {
            ctx->pc = 0x28FB08u;
            goto label_28fb08;
        }
    }
    ctx->pc = 0x28FAF0u;
label_28faf0:
    // 0x28faf0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28faf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28faf4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28faf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28faf8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28faf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fafc: 0x0  nop
    ctx->pc = 0x28fafcu;
    // NOP
    // 0x28fb00: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x28fb00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28fb04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28fb04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28fb08:
    // 0x28fb08: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x28fb08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fb0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fb10: 0x4604a01a  mula.s      $f20, $f4
    ctx->pc = 0x28fb10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x28fb14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FB14u;
    {
        const bool branch_taken_0x28fb14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB14u;
            // 0x28fb18: 0x4603005c  madd.s      $f1, $f0, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb14) {
            ctx->pc = 0x28FB20u;
            goto label_28fb20;
        }
    }
    ctx->pc = 0x28FB1Cu;
    // 0x28fb1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fb20:
    // 0x28fb20: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FB20u;
    {
        const bool branch_taken_0x28fb20 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28fb20) {
            ctx->pc = 0x28FB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB20u;
            // 0x28fb24: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FB34u;
            goto label_28fb34;
        }
    }
    ctx->pc = 0x28FB28u;
    // 0x28fb28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28fb28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fb2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FB2Cu;
    {
        const bool branch_taken_0x28fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB2Cu;
            // 0x28fb30: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb2c) {
            ctx->pc = 0x28FB4Cu;
            goto label_28fb4c;
        }
    }
    ctx->pc = 0x28FB34u;
label_28fb34:
    // 0x28fb34: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28fb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28fb38: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28fb38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28fb3c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28fb3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fb40: 0x0  nop
    ctx->pc = 0x28fb40u;
    // NOP
    // 0x28fb44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28fb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28fb48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28fb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28fb4c:
    // 0x28fb4c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28fb4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28fb50: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x28fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x28fb54: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28fb54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28fb58: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28fb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28fb5c: 0xc6470044  lwc1        $f7, 0x44($s2)
    ctx->pc = 0x28fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28fb60: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fb64: 0xc6480040  lwc1        $f8, 0x40($s2)
    ctx->pc = 0x28fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28fb68: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x28fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fb6c: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28fb6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28fb70: 0xc6460048  lwc1        $f6, 0x48($s2)
    ctx->pc = 0x28fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28fb74: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x28fb74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x28fb78: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x28fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fb7c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x28fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fb80: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x28fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fb84: 0x4603315c  madd.s      $f5, $f6, $f3
    ctx->pc = 0x28fb84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x28fb88: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28fb88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28fb8c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x28fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fb90: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x28fb90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x28fb94: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x28fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28fb98: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x28fb98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x28fb9c: 0x4604311c  madd.s      $f4, $f6, $f4
    ctx->pc = 0x28fb9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x28fba0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x28fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fba4: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x28fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fba8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x28fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fbac: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x28fbacu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x28fbb0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x28fbb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x28fbb4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x28fbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x28fbb8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x28fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbbc: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x28fbbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x28fbc0: 0x4603305c  madd.s      $f1, $f6, $f3
    ctx->pc = 0x28fbc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x28fbc4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x28fbc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x28fbc8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28fbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28fbcc: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x28fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbd0: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x28fbd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28fbd4: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x28fbd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x28fbd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28fbd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28fbdc: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28fbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28fbe0: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x28fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fbe4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x28fbe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28fbe8: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x28fbe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x28fbec: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x28fbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x28fbf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28fbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fbf4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x28fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28fbf8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28fbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fbfc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28fc00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28fc00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fc04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28fc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x28FC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC08u;
            // 0x28fc0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28FC10u;
}
