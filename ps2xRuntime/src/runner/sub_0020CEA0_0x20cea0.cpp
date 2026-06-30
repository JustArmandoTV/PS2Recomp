#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CEA0
// Address: 0x20cea0 - 0x20cff0
void sub_0020CEA0_0x20cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CEA0_0x20cea0");
#endif

    ctx->pc = 0x20cea0u;

    // 0x20cea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cea4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20cea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20cea8: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x20cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20ceac: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x20ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20ceb0: 0xc4f30004  lwc1        $f19, 0x4($a3)
    ctx->pc = 0x20ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x20ceb4: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x20ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x20ceb8: 0x460438c1  sub.s       $f3, $f7, $f4
    ctx->pc = 0x20ceb8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x20cebc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x20cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20cec0: 0x46133a01  sub.s       $f8, $f7, $f19
    ctx->pc = 0x20cec0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[7], ctx->f[19]);
    // 0x20cec4: 0x46072341  sub.s       $f13, $f4, $f7
    ctx->pc = 0x20cec4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x20cec8: 0xc4f20008  lwc1        $f18, 0x8($a3)
    ctx->pc = 0x20cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x20cecc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ced0: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x20ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20ced4: 0xc4f40000  lwc1        $f20, 0x0($a3)
    ctx->pc = 0x20ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20ced8: 0x461249c1  sub.s       $f7, $f9, $f18
    ctx->pc = 0x20ced8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[18]);
    // 0x20cedc: 0x46024841  sub.s       $f1, $f9, $f2
    ctx->pc = 0x20cedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x20cee0: 0x4607181a  mula.s      $f3, $f7
    ctx->pc = 0x20cee0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x20cee4: 0x46140281  sub.s       $f10, $f0, $f20
    ctx->pc = 0x20cee4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x20cee8: 0x46080c5d  msub.s      $f17, $f1, $f8
    ctx->pc = 0x20cee8u;
    ctx->f[17] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x20ceec: 0x46060141  sub.s       $f5, $f0, $f6
    ctx->pc = 0x20ceecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x20cef0: 0x460a081a  mula.s      $f1, $f10
    ctx->pc = 0x20cef0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x20cef4: 0x46072c1d  msub.s      $f16, $f5, $f7
    ctx->pc = 0x20cef4u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
    // 0x20cef8: 0x4608281a  mula.s      $f5, $f8
    ctx->pc = 0x20cef8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x20cefc: 0x46003381  sub.s       $f14, $f6, $f0
    ctx->pc = 0x20cefcu;
    ctx->f[14] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x20cf00: 0x461211c1  sub.s       $f7, $f2, $f18
    ctx->pc = 0x20cf00u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[18]);
    // 0x20cf04: 0x460a1bdd  msub.s      $f15, $f3, $f10
    ctx->pc = 0x20cf04u;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[10]));
    // 0x20cf08: 0x46091241  sub.s       $f9, $f2, $f9
    ctx->pc = 0x20cf08u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x20cf0c: 0x46132201  sub.s       $f8, $f4, $f19
    ctx->pc = 0x20cf0cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[19]);
    // 0x20cf10: 0x4607681a  mula.s      $f13, $f7
    ctx->pc = 0x20cf10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x20cf14: 0x461432c1  sub.s       $f11, $f6, $f20
    ctx->pc = 0x20cf14u;
    ctx->f[11] = FPU_SUB_S(ctx->f[6], ctx->f[20]);
    // 0x20cf18: 0x46084a9d  msub.s      $f10, $f9, $f8
    ctx->pc = 0x20cf18u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
    // 0x20cf1c: 0x460b481a  mula.s      $f9, $f11
    ctx->pc = 0x20cf1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x20cf20: 0x4607725d  msub.s      $f9, $f14, $f7
    ctx->pc = 0x20cf20u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[7]));
    // 0x20cf24: 0x4608701a  mula.s      $f14, $f8
    ctx->pc = 0x20cf24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x20cf28: 0x460b6a1d  msub.s      $f8, $f13, $f11
    ctx->pc = 0x20cf28u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[11]));
    // 0x20cf2c: 0x4610801a  mula.s      $f16, $f16
    ctx->pc = 0x20cf2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x20cf30: 0x4611881e  madda.s     $f17, $f17
    ctx->pc = 0x20cf30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[17]));
    // 0x20cf34: 0x460f79dc  madd.s      $f7, $f15, $f15
    ctx->pc = 0x20cf34u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[15]));
    // 0x20cf38: 0x460c3834  c.lt.s      $f7, $f12
    ctx->pc = 0x20cf38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cf3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20cf3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cf40: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x20CF40u;
    {
        const bool branch_taken_0x20cf40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cf40) {
            ctx->pc = 0x20CF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF40u;
            // 0x20cf44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CF6Cu;
            goto label_20cf6c;
        }
    }
    ctx->pc = 0x20CF48u;
    // 0x20cf48: 0x460949c2  mul.s       $f7, $f9, $f9
    ctx->pc = 0x20cf48u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x20cf4c: 0x46070018  adda.s      $f0, $f7
    ctx->pc = 0x20cf4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x20cf50: 0x460a51dc  madd.s      $f7, $f10, $f10
    ctx->pc = 0x20cf50u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x20cf54: 0x46070018  adda.s      $f0, $f7
    ctx->pc = 0x20cf54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x20cf58: 0x460841dc  madd.s      $f7, $f8, $f8
    ctx->pc = 0x20cf58u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x20cf5c: 0x460c3834  c.lt.s      $f7, $f12
    ctx->pc = 0x20cf5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cf60: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20CF60u;
    {
        const bool branch_taken_0x20cf60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cf60) {
            ctx->pc = 0x20CF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF60u;
            // 0x20cf64: 0x460499c1  sub.s       $f7, $f19, $f4 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[19], ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CF74u;
            goto label_20cf74;
        }
    }
    ctx->pc = 0x20CF68u;
    // 0x20cf68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cf6c:
    // 0x20cf6c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20CF6Cu;
    {
        const bool branch_taken_0x20cf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF6Cu;
            // 0x20cf70: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf6c) {
            ctx->pc = 0x20CFD8u;
            goto label_20cfd8;
        }
    }
    ctx->pc = 0x20CF74u;
label_20cf74:
    // 0x20cf74: 0x46033902  mul.s       $f4, $f7, $f3
    ctx->pc = 0x20cf74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x20cf78: 0x4606a201  sub.s       $f8, $f20, $f6
    ctx->pc = 0x20cf78u;
    ctx->f[8] = FPU_SUB_S(ctx->f[20], ctx->f[6]);
    // 0x20cf7c: 0x46029181  sub.s       $f6, $f18, $f2
    ctx->pc = 0x20cf7cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[18], ctx->f[2]);
    // 0x20cf80: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x20cf80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x20cf84: 0x4605411c  madd.s      $f4, $f8, $f5
    ctx->pc = 0x20cf84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
    // 0x20cf88: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x20cf88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x20cf8c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x20cf8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20cf90: 0x4601311c  madd.s      $f4, $f6, $f1
    ctx->pc = 0x20cf90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x20cf94: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x20cf94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x20cf98: 0x460528dc  madd.s      $f3, $f5, $f5
    ctx->pc = 0x20cf98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x20cf9c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x20cf9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x20cfa0: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x20cfa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x20cfa4: 0x460108dc  madd.s      $f3, $f1, $f1
    ctx->pc = 0x20cfa4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x20cfa8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x20cfa8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20cfac: 0x4608405c  madd.s      $f1, $f8, $f8
    ctx->pc = 0x20cfacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x20cfb0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20cfb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cfb4: 0x4606305c  madd.s      $f1, $f6, $f6
    ctx->pc = 0x20cfb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x20cfb8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x20cfb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x20cfbc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20cfbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cfc0: 0x4604205d  msub.s      $f1, $f4, $f4
    ctx->pc = 0x20cfc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x20cfc4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20cfc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cfc8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x20CFC8u;
    {
        const bool branch_taken_0x20cfc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cfc8) {
            ctx->pc = 0x20CFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20CFC8u;
            // 0x20cfcc: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20CFD8u;
            goto label_20cfd8;
        }
    }
    ctx->pc = 0x20CFD0u;
    // 0x20cfd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cfd4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x20cfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_20cfd8:
    // 0x20cfd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20cfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x20CFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CFDCu;
            // 0x20cfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CFE4u;
    // 0x20cfe4: 0x0  nop
    ctx->pc = 0x20cfe4u;
    // NOP
    // 0x20cfe8: 0x0  nop
    ctx->pc = 0x20cfe8u;
    // NOP
    // 0x20cfec: 0x0  nop
    ctx->pc = 0x20cfecu;
    // NOP
}
