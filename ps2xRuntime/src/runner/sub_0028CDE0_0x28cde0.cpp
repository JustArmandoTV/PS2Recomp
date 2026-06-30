#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CDE0
// Address: 0x28cde0 - 0x28cef0
void sub_0028CDE0_0x28cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CDE0_0x28cde0");
#endif

    ctx->pc = 0x28cde0u;

    // 0x28cde0: 0xc4870028  lwc1        $f7, 0x28($a0)
    ctx->pc = 0x28cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28cde4: 0x3c031d00  lui         $v1, 0x1D00
    ctx->pc = 0x28cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7424 << 16));
    // 0x28cde8: 0xc4860014  lwc1        $f6, 0x14($a0)
    ctx->pc = 0x28cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28cdec: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x28cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28cdf0: 0xc4880018  lwc1        $f8, 0x18($a0)
    ctx->pc = 0x28cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28cdf4: 0x4607301a  mula.s      $f6, $f7
    ctx->pc = 0x28cdf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x28cdf8: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x28cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28cdfc: 0x4609435d  msub.s      $f13, $f8, $f9
    ctx->pc = 0x28cdfcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[9]));
    // 0x28ce00: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x28ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28ce04: 0x4604401a  mula.s      $f8, $f4
    ctx->pc = 0x28ce04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x28ce08: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x28ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ce0c: 0x46072b9d  msub.s      $f14, $f5, $f7
    ctx->pc = 0x28ce0cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
    // 0x28ce10: 0x4609281a  mula.s      $f5, $f9
    ctx->pc = 0x28ce10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x28ce14: 0x460433dd  msub.s      $f15, $f6, $f4
    ctx->pc = 0x28ce14u;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x28ce18: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x28ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ce1c: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x28ce1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x28ce20: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ce24: 0x46033a9d  msub.s      $f10, $f7, $f3
    ctx->pc = 0x28ce24u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x28ce28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28ce28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ce2c: 0x0  nop
    ctx->pc = 0x28ce2cu;
    // NOP
    // 0x28ce30: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28ce30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28ce34: 0x460222dd  msub.s      $f11, $f4, $f2
    ctx->pc = 0x28ce34u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x28ce38: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x28ce38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28ce3c: 0x46004b1d  msub.s      $f12, $f9, $f0
    ctx->pc = 0x28ce3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[0]));
    // 0x28ce40: 0x4608181a  mula.s      $f3, $f8
    ctx->pc = 0x28ce40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x28ce44: 0x4606125d  msub.s      $f9, $f2, $f6
    ctx->pc = 0x28ce44u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x28ce48: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x28ce48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28ce4c: 0x4608021d  msub.s      $f8, $f0, $f8
    ctx->pc = 0x28ce4cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
    // 0x28ce50: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x28ce50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x28ce54: 0x4605199d  msub.s      $f6, $f3, $f5
    ctx->pc = 0x28ce54u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x28ce58: 0x460e181a  mula.s      $f3, $f14
    ctx->pc = 0x28ce58u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x28ce5c: 0x460d001e  madda.s     $f0, $f13
    ctx->pc = 0x28ce5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x28ce60: 0x460f101c  madd.s      $f0, $f2, $f15
    ctx->pc = 0x28ce60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[15]));
    // 0x28ce64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28ce64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ce68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28CE68u;
    {
        const bool branch_taken_0x28ce68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ce68) {
            ctx->pc = 0x28CE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE68u;
            // 0x28ce6c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CE70u;
label_28ce70:
    // 0x28ce70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28ce74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ce74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ce78: 0x0  nop
    ctx->pc = 0x28ce78u;
    // NOP
    // 0x28ce7c: 0x460101c3  div.s       $f7, $f0, $f1
    ctx->pc = 0x28ce7cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[1];
    // 0x28ce80: 0x460d3802  mul.s       $f0, $f7, $f13
    ctx->pc = 0x28ce80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x28ce84: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28ce84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28ce88: 0x460e3802  mul.s       $f0, $f7, $f14
    ctx->pc = 0x28ce88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
    // 0x28ce8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28ce90: 0x460f3802  mul.s       $f0, $f7, $f15
    ctx->pc = 0x28ce90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[15]);
    // 0x28ce94: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28ce94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28ce98: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x28ce98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x28ce9c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x28ce9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28cea0: 0x0  nop
    ctx->pc = 0x28cea0u;
    // NOP
    // 0x28cea4: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x28cea4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x28cea8: 0x460a3942  mul.s       $f5, $f7, $f10
    ctx->pc = 0x28cea8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x28ceac: 0xe486000c  swc1        $f6, 0xC($a0)
    ctx->pc = 0x28ceacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28ceb0: 0x460b3902  mul.s       $f4, $f7, $f11
    ctx->pc = 0x28ceb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x28ceb4: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x28ceb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28ceb8: 0x460c38c2  mul.s       $f3, $f7, $f12
    ctx->pc = 0x28ceb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x28cebc: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x28cebcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28cec0: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x28cec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28cec4: 0x46093882  mul.s       $f2, $f7, $f9
    ctx->pc = 0x28cec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x28cec8: 0xe486001c  swc1        $f6, 0x1C($a0)
    ctx->pc = 0x28cec8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x28cecc: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x28ceccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x28ced0: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x28ced0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28ced4: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x28ced4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x28ced8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28cedc: 0x3e00008  jr          $ra
    ctx->pc = 0x28CEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEDCu;
            // 0x28cee0: 0xe486002c  swc1        $f6, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CEE4u;
    // 0x28cee4: 0x0  nop
    ctx->pc = 0x28cee4u;
    // NOP
    // 0x28cee8: 0x0  nop
    ctx->pc = 0x28cee8u;
    // NOP
    // 0x28ceec: 0x0  nop
    ctx->pc = 0x28ceecu;
    // NOP
}
