#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B380
// Address: 0x26b380 - 0x26b4b0
void sub_0026B380_0x26b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B380_0x26b380");
#endif

    switch (ctx->pc) {
        case 0x26b3c8u: goto label_26b3c8;
        case 0x26b448u: goto label_26b448;
        default: break;
    }

    ctx->pc = 0x26b380u;

    // 0x26b380: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26b384: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26b388: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26b38c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26b390: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26b394: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26b394u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26b39c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x26b39cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26b3a4: 0x24b40038  addiu       $s4, $a1, 0x38
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x26b3a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b3ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26b3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b3b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26b3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b3bc: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x26b3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3c0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x26b3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3c4: 0x26d7003c  addiu       $s7, $s6, 0x3C
    ctx->pc = 0x26b3c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 60));
label_26b3c8:
    // 0x26b3c8: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x26b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b3cc: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x26b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b3d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b3d4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x26b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b3d8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x26b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b3dc: 0xc6c30048  lwc1        $f3, 0x48($s6)
    ctx->pc = 0x26b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26b3e0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x26b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x26b3e4: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x26b3e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26b3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b3ec: 0x0  nop
    ctx->pc = 0x26b3ecu;
    // NOP
    // 0x26b3f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26b3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26b3f4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x26b3f4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x26b3f8: 0x0  nop
    ctx->pc = 0x26b3f8u;
    // NOP
    // 0x26b3fc: 0x0  nop
    ctx->pc = 0x26b3fcu;
    // NOP
    // 0x26b400: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x26b400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b404: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x26B404u;
    {
        const bool branch_taken_0x26b404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b404) {
            ctx->pc = 0x26B414u;
            goto label_26b414;
        }
    }
    ctx->pc = 0x26B40Cu;
    // 0x26b40c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26B40Cu;
    {
        const bool branch_taken_0x26b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B40Cu;
            // 0x26b410: 0xc6200050  lwc1        $f0, 0x50($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b40c) {
            ctx->pc = 0x26B41Cu;
            goto label_26b41c;
        }
    }
    ctx->pc = 0x26B414u;
label_26b414:
    // 0x26b414: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x26b414u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x26b418: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x26b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b41c:
    // 0x26b41c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x26b41cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b420: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26B420u;
    {
        const bool branch_taken_0x26b420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b420) {
            ctx->pc = 0x26B440u;
            goto label_26b440;
        }
    }
    ctx->pc = 0x26B428u;
    // 0x26b428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26b428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b42c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26B42Cu;
    {
        const bool branch_taken_0x26b42c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b42c) {
            ctx->pc = 0x26B43Cu;
            goto label_26b43c;
        }
    }
    ctx->pc = 0x26B434u;
    // 0x26b434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B434u;
    {
        const bool branch_taken_0x26b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b434) {
            ctx->pc = 0x26B440u;
            goto label_26b440;
        }
    }
    ctx->pc = 0x26B43Cu;
label_26b43c:
    // 0x26b43c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x26b43cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_26b440:
    // 0x26b440: 0xc0a32a0  jal         func_28CA80
    ctx->pc = 0x26B440u;
    SET_GPR_U32(ctx, 31, 0x26B448u);
    ctx->pc = 0x26B444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B440u;
            // 0x26b444: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CA80u;
    if (runtime->hasFunction(0x28CA80u)) {
        auto targetFn = runtime->lookupFunction(0x28CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B448u; }
        if (ctx->pc != 0x26B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CA80_0x28ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B448u; }
        if (ctx->pc != 0x26B448u) { return; }
    }
    ctx->pc = 0x26B448u;
label_26b448:
    // 0x26b448: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26b44c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26b44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26b450: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x26b450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26b454: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x26b454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b458: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x26b458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x26b45c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x26b45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x26b460: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b464: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x26b464u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26b468: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26b46c: 0xae85000c  sw          $a1, 0xC($s4)
    ctx->pc = 0x26b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
    // 0x26b470: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x26b470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x26b474: 0xae840018  sw          $a0, 0x18($s4)
    ctx->pc = 0x26b474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 4));
    // 0x26b478: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x26B478u;
    {
        const bool branch_taken_0x26b478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B478u;
            // 0x26b47c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b478) {
            ctx->pc = 0x26B3C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b3c8;
        }
    }
    ctx->pc = 0x26B480u;
    // 0x26b480: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26b480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b484: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26b484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b488: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26b488u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b48c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26b48cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b490: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26b490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b494: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26b494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b49c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26B4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4A4u;
            // 0x26b4a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B4ACu;
    // 0x26b4ac: 0x0  nop
    ctx->pc = 0x26b4acu;
    // NOP
}
