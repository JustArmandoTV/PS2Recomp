#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FA68
// Address: 0x20fa68 - 0x20fb00
void sub_0020FA68_0x20fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FA68_0x20fa68");
#endif

    ctx->pc = 0x20fa68u;

    // 0x20fa68: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x20fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fa6c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x20fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20fa70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fa74: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x20fa74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20fa78: 0xd89b0000  lqc2        $vf27, 0x0($a0)
    ctx->pc = 0x20fa78u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fa7c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x20fa7cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fa80: 0x48a7e000  qmtc2.ni    $a3, $vf28
    ctx->pc = 0x20fa80u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x20fa84: 0x4a004078  vcallms     0x808
    ctx->pc = 0x20fa84u;
    {     ctx->vu0_tpc = 0x808;     runtime->executeVU0Microprogram(rdram, ctx, 0x808); }
    // 0x20fa88: 0xcc800040  pref        0x00, 0x40($a0)
    ctx->pc = 0x20fa88u;
    // PREF instruction (ignored)
    // 0x20fa8c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x20fa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fa90: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x20fa90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x20fa94: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20fa94u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20fa98: 0xf87d0000  sqc2        $vf29, 0x0($v1)
    ctx->pc = 0x20fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20fa9c: 0xf87e0010  sqc2        $vf30, 0x10($v1)
    ctx->pc = 0x20fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20faa0: 0xf87f0020  sqc2        $vf31, 0x20($v1)
    ctx->pc = 0x20faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20faa4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20faa8: 0xe46c000c  swc1        $f12, 0xC($v1)
    ctx->pc = 0x20faa8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x20faac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fab0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x20fab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fab4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20fab8: 0x3e00008  jr          $ra
    ctx->pc = 0x20FAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAB8u;
            // 0x20fabc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FAC0u;
    // 0x20fac0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x20fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fac4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x20fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20fac8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20fac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20facc: 0xd89b0000  lqc2        $vf27, 0x0($a0)
    ctx->pc = 0x20faccu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fad0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x20fad0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fad4: 0x48a3e000  qmtc2.ni    $v1, $vf28
    ctx->pc = 0x20fad4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20fad8: 0x4a004078  vcallms     0x808
    ctx->pc = 0x20fad8u;
    {     ctx->vu0_tpc = 0x808;     runtime->executeVU0Microprogram(rdram, ctx, 0x808); }
    // 0x20fadc: 0xcc800040  pref        0x00, 0x40($a0)
    ctx->pc = 0x20fadcu;
    // PREF instruction (ignored)
    // 0x20fae0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x20fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fae4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x20fae4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x20fae8: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20fae8u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20faec: 0xf8dd0000  sqc2        $vf29, 0x0($a2)
    ctx->pc = 0x20faecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20faf0: 0xf8de0010  sqc2        $vf30, 0x10($a2)
    ctx->pc = 0x20faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20faf4: 0xf8df0020  sqc2        $vf31, 0x20($a2)
    ctx->pc = 0x20faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20faf8: 0x3e00008  jr          $ra
    ctx->pc = 0x20FAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAF8u;
            // 0x20fafc: 0xe4cc000c  swc1        $f12, 0xC($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FB00u;
}
