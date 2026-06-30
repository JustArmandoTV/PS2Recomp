#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F9E0
// Address: 0x20f9e0 - 0x20fa68
void sub_0020F9E0_0x20f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F9E0_0x20f9e0");
#endif

    ctx->pc = 0x20f9e0u;

    // 0x20f9e0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x20f9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f9e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f9e8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x20f9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f9ec: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x20f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20f9f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20f9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20f9f4: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x20f9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f9f8: 0xd87e0000  lqc2        $vf30, 0x0($v1)
    ctx->pc = 0x20f9f8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f9fc: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x20f9fcu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20fa00: 0x4a0046f8  vcallms     0x8D8
    ctx->pc = 0x20fa00u;
    {     ctx->vu0_tpc = 0x8D8;     runtime->executeVU0Microprogram(rdram, ctx, 0x8D8); }
    // 0x20fa04: 0xcc600040  pref        0x00, 0x40($v1)
    ctx->pc = 0x20fa04u;
    // PREF instruction (ignored)
    // 0x20fa08: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x20fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20fa0c: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x20fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20fa10: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x20fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20fa14: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x20fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20fa18: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x20fa18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x20fa1c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fa20: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x20fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20fa24: 0x4601101e  madda.s     $f2, $f1
    ctx->pc = 0x20fa24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x20fa28: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x20fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20fa2c: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x20fa2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x20fa30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20fa30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20fa34: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x20fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fa38: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20fa38u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20fa3c: 0xf8fe0000  sqc2        $vf30, 0x0($a3)
    ctx->pc = 0x20fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20fa40: 0xf8ff0010  sqc2        $vf31, 0x10($a3)
    ctx->pc = 0x20fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20fa44: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x20fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20fa48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20fa48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20fa4c: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x20fa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x20fa50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fa54: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x20fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20fa58: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x20fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x20fa5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fa60: 0x3e00008  jr          $ra
    ctx->pc = 0x20FA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FA60u;
            // 0x20fa64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FA68u;
}
