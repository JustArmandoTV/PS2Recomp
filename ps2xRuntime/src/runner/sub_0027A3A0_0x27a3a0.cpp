#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A3A0
// Address: 0x27a3a0 - 0x27a660
void sub_0027A3A0_0x27a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A3A0_0x27a3a0");
#endif

    ctx->pc = 0x27a3a0u;

    // 0x27a3a0: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x27a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27a3a4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a3a8: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x27a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a3ac: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x27a3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a3b0: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x27a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a3b4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x27a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a3b8: 0xc4e90004  lwc1        $f9, 0x4($a3)
    ctx->pc = 0x27a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27a3bc: 0x46070181  sub.s       $f6, $f0, $f7
    ctx->pc = 0x27a3bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x27a3c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a3c4: 0x46032341  sub.s       $f13, $f4, $f3
    ctx->pc = 0x27a3c4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x27a3c8: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x27a3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a3cc: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x27a3ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x27a3d0: 0xc4ab0004  lwc1        $f11, 0x4($a1)
    ctx->pc = 0x27a3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x27a3d4: 0x46060102  mul.s       $f4, $f0, $f6
    ctx->pc = 0x27a3d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x27a3d8: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x27a3d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27a3dc: 0x46095842  mul.s       $f1, $f11, $f9
    ctx->pc = 0x27a3dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
    // 0x27a3e0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x27a3e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27a3e4: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x27a3e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x27a3e8: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x27a3e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x27a3ec: 0xc4e80008  lwc1        $f8, 0x8($a3)
    ctx->pc = 0x27a3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27a3f0: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x27a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x27a3f4: 0x460d5882  mul.s       $f2, $f11, $f13
    ctx->pc = 0x27a3f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x27a3f8: 0x4608505c  madd.s      $f1, $f10, $f8
    ctx->pc = 0x27a3f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[8]));
    // 0x27a3fc: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x27a3fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x27a400: 0x460d4942  mul.s       $f5, $f9, $f13
    ctx->pc = 0x27a400u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x27a404: 0x460c535c  madd.s      $f13, $f10, $f12
    ctx->pc = 0x27a404u;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[12]));
    // 0x27a408: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x27a408u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x27a40c: 0x460b5902  mul.s       $f4, $f11, $f11
    ctx->pc = 0x27a40cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x27a410: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x27a410u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27a414: 0x460c42dc  madd.s      $f11, $f8, $f12
    ctx->pc = 0x27a414u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[12]));
    // 0x27a418: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x27a418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x27a41c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x27a41cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x27a420: 0x460a525c  madd.s      $f9, $f10, $f10
    ctx->pc = 0x27a420u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x27a424: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x27a424u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x27a428: 0x4608421c  madd.s      $f8, $f8, $f8
    ctx->pc = 0x27a428u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x27a42c: 0x4608681a  mula.s      $f13, $f8
    ctx->pc = 0x27a42cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x27a430: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x27a430u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27a434: 0x46084942  mul.s       $f5, $f9, $f8
    ctx->pc = 0x27a434u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x27a438: 0x46062881  sub.s       $f2, $f5, $f6
    ctx->pc = 0x27a438u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x27a43c: 0x46001285  abs.s       $f10, $f2
    ctx->pc = 0x27a43cu;
    ctx->f[10] = FPU_ABS_S(ctx->f[2]);
    // 0x27a440: 0x460158dd  msub.s      $f3, $f11, $f1
    ctx->pc = 0x27a440u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
    // 0x27a444: 0x460a1902  mul.s       $f4, $f3, $f10
    ctx->pc = 0x27a444u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x27a448: 0x460a5082  mul.s       $f2, $f10, $f10
    ctx->pc = 0x27a448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x27a44c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x27a44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a450: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27A450u;
    {
        const bool branch_taken_0x27a450 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A450u;
            // 0x27a454: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a450) {
            ctx->pc = 0x27A468u;
            goto label_27a468;
        }
    }
    ctx->pc = 0x27A458u;
    // 0x27a458: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x27a458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27a45c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27A45Cu;
    {
        const bool branch_taken_0x27a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A45Cu;
            // 0x27a460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a45c) {
            ctx->pc = 0x27A4D8u;
            goto label_27a4d8;
        }
    }
    ctx->pc = 0x27A464u;
    // 0x27a464: 0x0  nop
    ctx->pc = 0x27a464u;
    // NOP
label_27a468:
    // 0x27a468: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27a468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a46c: 0x0  nop
    ctx->pc = 0x27a46cu;
    // NOP
    // 0x27a470: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x27a470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a474: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A474u;
    {
        const bool branch_taken_0x27a474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a474) {
            ctx->pc = 0x27A488u;
            goto label_27a488;
        }
    }
    ctx->pc = 0x27A47Cu;
    // 0x27a47c: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x27a47cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x27a480: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27A480u;
    {
        const bool branch_taken_0x27a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A480u;
            // 0x27a484: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a480) {
            ctx->pc = 0x27A4D8u;
            goto label_27a4d8;
        }
    }
    ctx->pc = 0x27A488u;
label_27a488:
    // 0x27a488: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x27a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x27a48c: 0x46062900  add.s       $f4, $f5, $f6
    ctx->pc = 0x27a48cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x27a490: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27a490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a494: 0x0  nop
    ctx->pc = 0x27a494u;
    // NOP
    // 0x27a498: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27a498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27a49c: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x27a49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a4a0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x27A4A0u;
    {
        const bool branch_taken_0x27a4a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a4a0) {
            ctx->pc = 0x27A4C8u;
            goto label_27a4c8;
        }
    }
    ctx->pc = 0x27A4A8u;
    // 0x27a4a8: 0x0  nop
    ctx->pc = 0x27a4a8u;
    // NOP
    // 0x27a4ac: 0x0  nop
    ctx->pc = 0x27a4acu;
    // NOP
    // 0x27a4b0: 0x460a18c3  div.s       $f3, $f3, $f10
    ctx->pc = 0x27a4b0u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[10];
    // 0x27a4b4: 0x0  nop
    ctx->pc = 0x27a4b4u;
    // NOP
    // 0x27a4b8: 0x0  nop
    ctx->pc = 0x27a4b8u;
    // NOP
    // 0x27a4bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27A4BCu;
    {
        const bool branch_taken_0x27a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4BCu;
            // 0x27a4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4bc) {
            ctx->pc = 0x27A4D8u;
            goto label_27a4d8;
        }
    }
    ctx->pc = 0x27A4C4u;
    // 0x27a4c4: 0x0  nop
    ctx->pc = 0x27a4c4u;
    // NOP
label_27a4c8:
    // 0x27a4c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27a4cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x27a4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27a4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a4d4: 0x0  nop
    ctx->pc = 0x27a4d4u;
    // NOP
label_27a4d8:
    // 0x27a4d8: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x27a4d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x27a4dc: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x27a4dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x27a4e0: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x27a4e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a4e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A4E4u;
    {
        const bool branch_taken_0x27a4e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4E4u;
            // 0x27a4e8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4e4) {
            ctx->pc = 0x27A4F8u;
            goto label_27a4f8;
        }
    }
    ctx->pc = 0x27A4ECu;
    // 0x27a4ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27a4ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a4f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27A4F0u;
    {
        const bool branch_taken_0x27a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4F0u;
            // 0x27a4f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4f0) {
            ctx->pc = 0x27A530u;
            goto label_27a530;
        }
    }
    ctx->pc = 0x27A4F8u;
label_27a4f8:
    // 0x27a4f8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x27a4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27a4fc: 0x0  nop
    ctx->pc = 0x27a4fcu;
    // NOP
    // 0x27a500: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x27a500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a504: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A504u;
    {
        const bool branch_taken_0x27a504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a504) {
            ctx->pc = 0x27A518u;
            goto label_27a518;
        }
    }
    ctx->pc = 0x27A50Cu;
    // 0x27a50c: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x27a50cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
    // 0x27a510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A510u;
    {
        const bool branch_taken_0x27a510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A510u;
            // 0x27a514: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a510) {
            ctx->pc = 0x27A530u;
            goto label_27a530;
        }
    }
    ctx->pc = 0x27A518u;
label_27a518:
    // 0x27a518: 0x0  nop
    ctx->pc = 0x27a518u;
    // NOP
    // 0x27a51c: 0x46081083  div.s       $f2, $f2, $f8
    ctx->pc = 0x27a51cu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[8];
    // 0x27a520: 0x0  nop
    ctx->pc = 0x27a520u;
    // NOP
    // 0x27a524: 0x0  nop
    ctx->pc = 0x27a524u;
    // NOP
    // 0x27a528: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27A528u;
    {
        const bool branch_taken_0x27a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a528) {
            ctx->pc = 0x27A578u;
            goto label_27a578;
        }
    }
    ctx->pc = 0x27A530u;
label_27a530:
    // 0x27a530: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27a530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27a534: 0x460168c0  add.s       $f3, $f13, $f1
    ctx->pc = 0x27a534u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x27a538: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27a538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a53c: 0x0  nop
    ctx->pc = 0x27a53cu;
    // NOP
    // 0x27a540: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x27a540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a544: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A544u;
    {
        const bool branch_taken_0x27a544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a544) {
            ctx->pc = 0x27A558u;
            goto label_27a558;
        }
    }
    ctx->pc = 0x27A54Cu;
    // 0x27a54c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x27a54cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x27a550: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27A550u;
    {
        const bool branch_taken_0x27a550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A550u;
            // 0x27a554: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a550) {
            ctx->pc = 0x27A578u;
            goto label_27a578;
        }
    }
    ctx->pc = 0x27A558u;
label_27a558:
    // 0x27a558: 0x46091834  c.lt.s      $f3, $f9
    ctx->pc = 0x27a558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a55c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x27A55Cu;
    {
        const bool branch_taken_0x27a55c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A55Cu;
            // 0x27a560: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a55c) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A564u;
    // 0x27a564: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x27a564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27a568: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A568u;
    {
        const bool branch_taken_0x27a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A568u;
            // 0x27a56c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a568) {
            ctx->pc = 0x27A578u;
            goto label_27a578;
        }
    }
    ctx->pc = 0x27A570u;
label_27a570:
    // 0x27a570: 0x0  nop
    ctx->pc = 0x27a570u;
    // NOP
    // 0x27a574: 0x460918c3  div.s       $f3, $f3, $f9
    ctx->pc = 0x27a574u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[9];
label_27a578:
    // 0x27a578: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27a578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27a57c: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x27a57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x27a580: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x27a580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27a584: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x27a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a588: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a58c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27a58cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27a590: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a594: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x27a594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x27a598: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x27a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a59c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x27a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a5a0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27a5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27a5a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a5a8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x27a5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x27a5ac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a5b0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x27a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a5b4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x27a5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27a5b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a5bc: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x27a5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x27a5c0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x27a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a5c4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x27a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a5c8: 0xc4e60008  lwc1        $f6, 0x8($a3)
    ctx->pc = 0x27a5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27a5cc: 0xc4e4000c  lwc1        $f4, 0xC($a3)
    ctx->pc = 0x27a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a5d0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x27a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a5d4: 0xc4c90004  lwc1        $f9, 0x4($a2)
    ctx->pc = 0x27a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27a5d8: 0x46001202  mul.s       $f8, $f2, $f0
    ctx->pc = 0x27a5d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27a5dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27a5dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27a5e0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a5e4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x27a5e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x27a5e8: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x27a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27a5ec: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x27a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a5f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27a5f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27a5f4: 0x46084a00  add.s       $f8, $f9, $f8
    ctx->pc = 0x27a5f4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x27a5f8: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x27a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x27a5fc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x27a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a600: 0x46061182  mul.s       $f6, $f2, $f6
    ctx->pc = 0x27a600u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x27a604: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x27a604u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x27a608: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x27a608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x27a60c: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x27a60cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27a610: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x27a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a614: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x27a614u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x27a618: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x27a618u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x27a61c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x27a61cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x27a620: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x27a620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x27a624: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x27a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a628: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x27a628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x27a62c: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x27a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x27a630: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x27a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a634: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x27a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a638: 0xc5020018  lwc1        $f2, 0x18($t0)
    ctx->pc = 0x27a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a63c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27a63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27a640: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x27a640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27a644: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27a644u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a648: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x27a648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x27a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A64Cu;
            // 0x27a650: 0xe5000020  swc1        $f0, 0x20($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A654u;
    // 0x27a654: 0x0  nop
    ctx->pc = 0x27a654u;
    // NOP
    // 0x27a658: 0x0  nop
    ctx->pc = 0x27a658u;
    // NOP
    // 0x27a65c: 0x0  nop
    ctx->pc = 0x27a65cu;
    // NOP
}
