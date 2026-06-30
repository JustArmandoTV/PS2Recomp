#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A7B0
// Address: 0x27a7b0 - 0x27a890
void sub_0027A7B0_0x27a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A7B0_0x27a7b0");
#endif

    ctx->pc = 0x27a7b0u;

    // 0x27a7b0: 0xc4880010  lwc1        $f8, 0x10($a0)
    ctx->pc = 0x27a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27a7b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a7b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a7bc: 0xc4870014  lwc1        $f7, 0x14($a0)
    ctx->pc = 0x27a7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27a7c0: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x27a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a7c4: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x27a7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a7c8: 0xc4860018  lwc1        $f6, 0x18($a0)
    ctx->pc = 0x27a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27a7cc: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x27a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a7d0: 0x46080281  sub.s       $f10, $f0, $f8
    ctx->pc = 0x27a7d0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x27a7d4: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x27a7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a7d8: 0x46072a41  sub.s       $f9, $f5, $f7
    ctx->pc = 0x27a7d8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x27a7dc: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x27a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a7e0: 0x46081a01  sub.s       $f8, $f3, $f8
    ctx->pc = 0x27a7e0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x27a7e4: 0x46070941  sub.s       $f5, $f1, $f7
    ctx->pc = 0x27a7e4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x27a7e8: 0x460600c1  sub.s       $f3, $f0, $f6
    ctx->pc = 0x27a7e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x27a7ec: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x27a7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x27a7f0: 0x46094802  mul.s       $f0, $f9, $f9
    ctx->pc = 0x27a7f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x27a7f4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27a7f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a7f8: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x27a7f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x27a7fc: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x27a7fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x27a800: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x27a800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x27a804: 0x460422dc  madd.s      $f11, $f4, $f4
    ctx->pc = 0x27a804u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x27a808: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27a808u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a80c: 0x460a4042  mul.s       $f1, $f8, $f10
    ctx->pc = 0x27a80cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x27a810: 0x46092802  mul.s       $f0, $f5, $f9
    ctx->pc = 0x27a810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x27a814: 0x460319dc  madd.s      $f7, $f3, $f3
    ctx->pc = 0x27a814u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x27a818: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27a818u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a81c: 0x4604199c  madd.s      $f6, $f3, $f4
    ctx->pc = 0x27a81cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x27a820: 0x4607581a  mula.s      $f11, $f7
    ctx->pc = 0x27a820u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x27a824: 0x4606301d  msub.s      $f0, $f6, $f6
    ctx->pc = 0x27a824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x27a828: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27a828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a82c: 0x0  nop
    ctx->pc = 0x27a82cu;
    // NOP
    // 0x27a830: 0x4603481a  mula.s      $f9, $f3
    ctx->pc = 0x27a830u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x27a834: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x27a834u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[0];
    // 0x27a838: 0x460c5802  mul.s       $f0, $f11, $f12
    ctx->pc = 0x27a838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x27a83c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x27a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x27a840: 0x460c3842  mul.s       $f1, $f7, $f12
    ctx->pc = 0x27a840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x27a844: 0x460c3002  mul.s       $f0, $f6, $f12
    ctx->pc = 0x27a844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x27a848: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x27a848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x27a84c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x27a84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x27a850: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x27a850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x27a854: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x27a854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27a858: 0x4608201a  mula.s      $f4, $f8
    ctx->pc = 0x27a858u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x27a85c: 0x4603501d  msub.s      $f0, $f10, $f3
    ctx->pc = 0x27a85cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
    // 0x27a860: 0x4605501a  mula.s      $f10, $f5
    ctx->pc = 0x27a860u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x27a864: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27a864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27a868: 0x460848dd  msub.s      $f3, $f9, $f8
    ctx->pc = 0x27a868u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
    // 0x27a86c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27a86cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a870: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x27a870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x27a874: 0x46000004  c1          0x4
    ctx->pc = 0x27a874u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x27a878: 0x0  nop
    ctx->pc = 0x27a878u;
    // NOP
    // 0x27a87c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x27a87cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x27a880: 0x0  nop
    ctx->pc = 0x27a880u;
    // NOP
    // 0x27a884: 0x0  nop
    ctx->pc = 0x27a884u;
    // NOP
    // 0x27a888: 0x3e00008  jr          $ra
    ctx->pc = 0x27A888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A888u;
            // 0x27a88c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A890u;
}
