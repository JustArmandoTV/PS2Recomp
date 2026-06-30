#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A660
// Address: 0x27a660 - 0x27a7b0
void sub_0027A660_0x27a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A660_0x27a660");
#endif

    ctx->pc = 0x27a660u;

    // 0x27a660: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x27a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27a664: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x27a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a668: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x27a668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a66c: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x27a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x27a670: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x27a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27a674: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x27a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a678: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x27a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a67c: 0x46090ac1  sub.s       $f11, $f1, $f9
    ctx->pc = 0x27a67cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x27a680: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x27a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a684: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x27a684u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x27a688: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x27a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27a68c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x27a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a690: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x27a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27a694: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x27a694u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x27a698: 0x460a39c1  sub.s       $f7, $f7, $f10
    ctx->pc = 0x27a698u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[10]);
    // 0x27a69c: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x27a69cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x27a6a0: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x27a6a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x27a6a4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x27a6a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x27a6a8: 0x46083141  sub.s       $f5, $f6, $f8
    ctx->pc = 0x27a6a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x27a6ac: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x27a6acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x27a6b0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x27a6b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x27a6b4: 0x460128dc  madd.s      $f3, $f5, $f1
    ctx->pc = 0x27a6b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x27a6b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a6b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a6bc: 0x460b5842  mul.s       $f1, $f11, $f11
    ctx->pc = 0x27a6bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x27a6c0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x27a6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a6c4: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x27a6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x27a6c8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27a6c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a6cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x27A6CCu;
    {
        const bool branch_taken_0x27a6cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6CCu;
            // 0x27a6d0: 0x4605281c  madd.s      $f0, $f5, $f5 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6cc) {
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A6D4u;
    // 0x27a6d4: 0xe4e90000  swc1        $f9, 0x0($a3)
    ctx->pc = 0x27a6d4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x27a6d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27a6dc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x27a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a6e0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x27a6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x27a6e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x27a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a6e8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x27a6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x27a6ec: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a6f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27A6F0u;
    {
        const bool branch_taken_0x27a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6F0u;
            // 0x27a6f4: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6f0) {
            ctx->pc = 0x27A7A0u;
            goto label_27a7a0;
        }
    }
    ctx->pc = 0x27A6F8u;
label_27a6f8:
    // 0x27a6f8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27a6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a6fc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x27A6FCu;
    {
        const bool branch_taken_0x27a6fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a6fc) {
            ctx->pc = 0x27A738u;
            goto label_27a738;
        }
    }
    ctx->pc = 0x27A704u;
    // 0x27a704: 0x460b4800  add.s       $f0, $f9, $f11
    ctx->pc = 0x27a704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[11]);
    // 0x27a708: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a70c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x27a70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x27a710: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x27a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a714: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x27a714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x27a718: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x27a718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x27a71c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x27a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a720: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x27a720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27a724: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x27a724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x27a728: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27a728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a72c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27a72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x27a730: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27A730u;
    {
        const bool branch_taken_0x27a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A730u;
            // 0x27a734: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a730) {
            ctx->pc = 0x27A7A0u;
            goto label_27a7a0;
        }
    }
    ctx->pc = 0x27A738u;
label_27a738:
    // 0x27a738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a73c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x27a73cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x27a740: 0xe4e90000  swc1        $f9, 0x0($a3)
    ctx->pc = 0x27a740u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x27a744: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x27a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a748: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x27a748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x27a74c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x27a74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a750: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x27a750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x27a754: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a758: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x27a758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x27a75c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x27a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a760: 0x460b1802  mul.s       $f0, $f3, $f11
    ctx->pc = 0x27a760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x27a764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a768: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x27a768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x27a76c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x27a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a770: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x27a770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x27a774: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27a774u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27a778: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x27a778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x27a77c: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x27a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a780: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x27a780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x27a784: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x27a784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27a788: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x27a788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x27a78c: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x27a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a790: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x27a790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x27a794: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a798: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x27a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x27a79c: 0x0  nop
    ctx->pc = 0x27a79cu;
    // NOP
label_27a7a0:
    // 0x27a7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x27A7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A7A8u;
    // 0x27a7a8: 0x0  nop
    ctx->pc = 0x27a7a8u;
    // NOP
    // 0x27a7ac: 0x0  nop
    ctx->pc = 0x27a7acu;
    // NOP
}
