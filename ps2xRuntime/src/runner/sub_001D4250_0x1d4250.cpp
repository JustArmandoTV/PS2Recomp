#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4250
// Address: 0x1d4250 - 0x1d4310
void sub_001D4250_0x1d4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4250_0x1d4250");
#endif

    ctx->pc = 0x1d4250u;

    // 0x1d4250: 0xc4c90004  lwc1        $f9, 0x4($a2)
    ctx->pc = 0x1d4250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1d4254: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4258: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1d4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d425c: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x1d425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1d4260: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1d4260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4264: 0x4609081a  mula.s      $f1, $f9
    ctx->pc = 0x1d4264u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x1d4268: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x1d4268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1d426c: 0x4608101e  madda.s     $f2, $f8
    ctx->pc = 0x1d426cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[8]));
    // 0x1d4270: 0xc4a40024  lwc1        $f4, 0x24($a1)
    ctx->pc = 0x1d4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d4274: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x1d4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4278: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1d4278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d427c: 0x4607205c  madd.s      $f1, $f4, $f7
    ctx->pc = 0x1d427cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x1d4280: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x1d4280u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4284: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1d4284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4288: 0xc4a30028  lwc1        $f3, 0x28($a1)
    ctx->pc = 0x1d4288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d428c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x1d428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4290: 0x4609081a  mula.s      $f1, $f9
    ctx->pc = 0x1d4290u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x1d4294: 0x4608101e  madda.s     $f2, $f8
    ctx->pc = 0x1d4294u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[8]));
    // 0x1d4298: 0x4607185c  madd.s      $f1, $f3, $f7
    ctx->pc = 0x1d4298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x1d429c: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x1d429cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d42a0: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x1d42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d42a4: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x1d42a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d42a8: 0xc4a4002c  lwc1        $f4, 0x2C($a1)
    ctx->pc = 0x1d42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d42ac: 0x4609101a  mula.s      $f2, $f9
    ctx->pc = 0x1d42acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x1d42b0: 0x4608181e  madda.s     $f3, $f8
    ctx->pc = 0x1d42b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
    // 0x1d42b4: 0x4607209c  madd.s      $f2, $f4, $f7
    ctx->pc = 0x1d42b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x1d42b8: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x1d42b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d42bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d42bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d42c0: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x1d42c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d42c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d42c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d42c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d42c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d42cc: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x1d42ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1d42d0: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x1d42d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1d42d4: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x1d42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d42d8: 0x4609201a  mula.s      $f4, $f9
    ctx->pc = 0x1d42d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x1d42dc: 0xc4a60020  lwc1        $f6, 0x20($a1)
    ctx->pc = 0x1d42dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1d42e0: 0x4608281e  madda.s     $f5, $f8
    ctx->pc = 0x1d42e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
    // 0x1d42e4: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x1d42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d42e8: 0x4607311c  madd.s      $f4, $f6, $f7
    ctx->pc = 0x1d42e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x1d42ec: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1d42ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1d42f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1d42f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1d42f4: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1d42f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d42f8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1d42f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d42fc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1d42fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d4300: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4300u;
            // 0x1d4304: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4308u;
    // 0x1d4308: 0x0  nop
    ctx->pc = 0x1d4308u;
    // NOP
    // 0x1d430c: 0x0  nop
    ctx->pc = 0x1d430cu;
    // NOP
}
