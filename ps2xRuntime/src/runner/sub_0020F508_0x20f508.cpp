#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F508
// Address: 0x20f508 - 0x20f578
void sub_0020F508_0x20f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F508_0x20f508");
#endif

    ctx->pc = 0x20f508u;

    // 0x20f508: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x20f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f50c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x20f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20f510: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x20f510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f514: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20f514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20f518: 0xd89b0000  lqc2        $vf27, 0x0($a0)
    ctx->pc = 0x20f518u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f51c: 0xd87d0000  lqc2        $vf29, 0x0($v1)
    ctx->pc = 0x20f51cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f520: 0x48a2e000  qmtc2.ni    $v0, $vf28
    ctx->pc = 0x20f520u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20f524: 0x4a004078  vcallms     0x808
    ctx->pc = 0x20f524u;
    {     ctx->vu0_tpc = 0x808;     runtime->executeVU0Microprogram(rdram, ctx, 0x808); }
    // 0x20f528: 0xcc800040  pref        0x00, 0x40($a0)
    ctx->pc = 0x20f528u;
    // PREF instruction (ignored)
    // 0x20f52c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x20f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20f530: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x20f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f534: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f538: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f53c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20f53cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20f540: 0xf8fd0000  sqc2        $vf29, 0x0($a3)
    ctx->pc = 0x20f540u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20f544: 0xf8fe0010  sqc2        $vf30, 0x10($a3)
    ctx->pc = 0x20f544u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20f548: 0xf8ff0020  sqc2        $vf31, 0x20($a3)
    ctx->pc = 0x20f548u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20f54c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x20f54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f550: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20f550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x20f554: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f558: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x20f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x20f55c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x20f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x20f560: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x20f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f564: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f568: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x20f568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x20f56c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f570: 0x3e00008  jr          $ra
    ctx->pc = 0x20F570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F570u;
            // 0x20f574: 0xe4600030  swc1        $f0, 0x30($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F578u;
}
