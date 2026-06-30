#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213270
// Address: 0x213270 - 0x213508
void sub_00213270_0x213270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213270_0x213270");
#endif

    switch (ctx->pc) {
        case 0x21340cu: goto label_21340c;
        default: break;
    }

    ctx->pc = 0x213270u;

    // 0x213270: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x213270u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213274: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x213274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x213278: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x213278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21327c: 0x4be119ac  vsub.xyzw   $vf6, $vf3, $vf1
    ctx->pc = 0x21327cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x213280: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x213280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213284: 0x4bc6306a  vmul.xyz    $vf1, $vf6, $vf6
    ctx->pc = 0x213284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213288: 0x4b000143  vaddw.x     $vf5, $vf0, $vf0w
    ctx->pc = 0x213288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21328c: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x21328cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213290: 0x4b01284a  vmaddz.x    $vf1, $vf5, $vf1z
    ctx->pc = 0x213290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213294: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x213294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x213298: 0x4bc230ea  vmul.xyz    $vf3, $vf6, $vf2
    ctx->pc = 0x213298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21329c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x21329cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2132a0: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x2132a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2132a4: 0x4b0320ca  vmaddz.x    $vf3, $vf4, $vf3z
    ctx->pc = 0x2132a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2132a8: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x2132a8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2132ac: 0x4be031bf  vmulaw.xyzw $ACC, $vf6, $vf0w
    ctx->pc = 0x2132acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2132b0: 0x4be3118c  vmsubx.xyzw $vf6, $vf2, $vf3x
    ctx->pc = 0x2132b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2132b4: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2132b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2132b8: 0x4bc130aa  vmul.xyz    $vf2, $vf6, $vf1
    ctx->pc = 0x2132b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2132bc: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2132bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2132c0: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x2132c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2132c4: 0x4b02208a  vmaddz.x    $vf2, $vf4, $vf2z
    ctx->pc = 0x2132c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2132c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2132c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2132cc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2132ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2132d0: 0x44864000  mtc1        $a2, $f8
    ctx->pc = 0x2132d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2132d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2132d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2132d8: 0x4b0318ea  vmul.x      $vf3, $vf3, $vf3
    ctx->pc = 0x2132d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2132dc: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x2132dcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2132e0: 0xc4a60020  lwc1        $f6, 0x20($a1)
    ctx->pc = 0x2132e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2132e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2132e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2132e8: 0xc4a9002c  lwc1        $f9, 0x2C($a1)
    ctx->pc = 0x2132e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2132ec: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x2132ecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2132f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2132F0u;
    {
        const bool branch_taken_0x2132f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2132F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2132F0u;
            // 0x2132f4: 0x4be5333c  vmove.xyzw  $vf5, $vf6 (Delay Slot)
        ctx->vu0_vf[5] = ctx->vu0_vf[6];
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132f0) {
            ctx->pc = 0x213300u;
            goto label_213300;
        }
    }
    ctx->pc = 0x2132F8u;
    // 0x2132f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2132F8u;
    {
        const bool branch_taken_0x2132f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2132F8u;
            // 0x2132fc: 0xc4a50024  lwc1        $f5, 0x24($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132f8) {
            ctx->pc = 0x213304u;
            goto label_213304;
        }
    }
    ctx->pc = 0x213300u;
label_213300:
    // 0x213300: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x213300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_213304:
    // 0x213304: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x213304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x213308: 0x0  nop
    ctx->pc = 0x213308u;
    // NOP
    // 0x21330c: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x21330cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213310: 0x0  nop
    ctx->pc = 0x213310u;
    // NOP
    // 0x213314: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x213314u;
    {
        const bool branch_taken_0x213314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213314u;
            // 0x213318: 0x46003886  mov.s       $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213314) {
            ctx->pc = 0x213428u;
            goto label_213428;
        }
    }
    ctx->pc = 0x21331Cu;
    // 0x21331c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x21331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x213320: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x213320u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213324: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x213324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x213328: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x213328u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x21332c: 0x4bc110ee  vopmsub.xyz $vf3, $vf2, $vf1
    ctx->pc = 0x21332cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213330: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x213330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x213334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213338: 0x4bc3186a  vmul.xyz    $vf1, $vf3, $vf3
    ctx->pc = 0x213338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21333c: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x21333cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213340: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x213340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213344: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x213344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213348: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x213348u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21334c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x21334cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213350: 0x0  nop
    ctx->pc = 0x213350u;
    // NOP
    // 0x213354: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x213354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213358: 0x0  nop
    ctx->pc = 0x213358u;
    // NOP
    // 0x21335c: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x21335Cu;
    {
        const bool branch_taken_0x21335c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21335c) {
            ctx->pc = 0x213360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21335Cu;
            // 0x213360: 0x46053040  add.s       $f1, $f6, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2133CCu;
            goto label_2133cc;
        }
    }
    ctx->pc = 0x213364u;
    // 0x213364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21336c: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x21336cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x213370: 0x46030016  rsqrt.s     $f0, $f0, $f3
    ctx->pc = 0x213370u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x213374: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x213374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x213378: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x213378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x21337c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x21337cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x213380: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x213380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213384: 0x4bc3286a  vmul.xyz    $vf1, $vf5, $vf3
    ctx->pc = 0x213384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213388: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x213388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21338c: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x21338cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213390: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x213390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213394: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x213394u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213398: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x213398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21339c: 0x0  nop
    ctx->pc = 0x21339cu;
    // NOP
    // 0x2133a0: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2133a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2133a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2133a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2133a8: 0x0  nop
    ctx->pc = 0x2133a8u;
    // NOP
    // 0x2133ac: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2133ACu;
    {
        const bool branch_taken_0x2133ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2133ac) {
            ctx->pc = 0x2133B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2133ACu;
            // 0x2133b0: 0x46053040  add.s       $f1, $f6, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2133D0u;
            goto label_2133d0;
        }
    }
    ctx->pc = 0x2133B4u;
    // 0x2133b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2133b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2133b8: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x2133b8u;
    ctx->vu0_vf[6] = ctx->vu0_vf[5];
    // 0x2133bc: 0x4be031bf  vmulaw.xyzw $ACC, $vf6, $vf0w
    ctx->pc = 0x2133bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2133c0: 0x4be1198c  vmsubx.xyzw $vf6, $vf3, $vf1x
    ctx->pc = 0x2133c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2133c4: 0x46003886  mov.s       $f2, $f7
    ctx->pc = 0x2133c4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[7]);
    // 0x2133c8: 0x46053040  add.s       $f1, $f6, $f5
    ctx->pc = 0x2133c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_2133cc:
    // 0x2133cc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2133ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2133d0:
    // 0x2133d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2133d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2133d4: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x2133d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2133d8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2133d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2133dc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2133dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2133e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2133e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2133e4: 0x0  nop
    ctx->pc = 0x2133e4u;
    // NOP
    // 0x2133e8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2133E8u;
    {
        const bool branch_taken_0x2133e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2133e8) {
            ctx->pc = 0x213444u;
            goto label_213444;
        }
    }
    ctx->pc = 0x2133F0u;
    // 0x2133f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2133f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2133f4: 0x0  nop
    ctx->pc = 0x2133f4u;
    // NOP
    // 0x2133f8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2133f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2133fc: 0x0  nop
    ctx->pc = 0x2133fcu;
    // NOP
    // 0x213400: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x213400u;
    {
        const bool branch_taken_0x213400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213400) {
            ctx->pc = 0x213414u;
            goto label_213414;
        }
    }
    ctx->pc = 0x213408u;
    // 0x213408: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x213408u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21340c:
    // 0x21340c: 0x3e00008  jr          $ra
    ctx->pc = 0x21340Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21340Cu;
            // 0x213410: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213414u;
label_213414:
    // 0x213414: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x213414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x213418: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x213418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x21341c: 0x4be11998  vmulx.xyzw  $vf6, $vf3, $vf1x
    ctx->pc = 0x21341cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x213420: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213420u;
    {
        const bool branch_taken_0x213420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213420) {
            ctx->pc = 0x213444u;
            goto label_213444;
        }
    }
    ctx->pc = 0x213428u;
label_213428:
    // 0x213428: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x213428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x21342c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21342cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x213430: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x213430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x213434: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x213434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213438: 0x0  nop
    ctx->pc = 0x213438u;
    // NOP
    // 0x21343c: 0x4503fff3  bc1tl       . + 4 + (-0xD << 2)
    ctx->pc = 0x21343Cu;
    {
        const bool branch_taken_0x21343c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21343c) {
            ctx->pc = 0x213440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21343Cu;
            // 0x213440: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21340Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21340c;
        }
    }
    ctx->pc = 0x213444u;
label_213444:
    // 0x213444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213448: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21344c: 0x0  nop
    ctx->pc = 0x21344cu;
    // NOP
    // 0x213450: 0x46014834  c.lt.s      $f9, $f1
    ctx->pc = 0x213450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213454: 0x0  nop
    ctx->pc = 0x213454u;
    // NOP
    // 0x213458: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x213458u;
    {
        const bool branch_taken_0x213458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213458) {
            ctx->pc = 0x21345Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213458u;
            // 0x21345c: 0xd8610000  lqc2        $vf1, 0x0($v1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2134F8u;
            goto label_2134f8;
        }
    }
    ctx->pc = 0x213460u;
    // 0x213460: 0x4bc630aa  vmul.xyz    $vf2, $vf6, $vf6
    ctx->pc = 0x213460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213464: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w
    ctx->pc = 0x213464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213468: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x213468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21346c: 0x4b02088a  vmaddz.x    $vf2, $vf1, $vf2z
    ctx->pc = 0x21346cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213470: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x213470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x213474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213478: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x213478u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21347c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21347cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213480: 0x0  nop
    ctx->pc = 0x213480u;
    // NOP
    // 0x213484: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x213484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213488: 0x0  nop
    ctx->pc = 0x213488u;
    // NOP
    // 0x21348c: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x21348Cu;
    {
        const bool branch_taken_0x21348c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21348c) {
            ctx->pc = 0x213490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21348Cu;
            // 0x213490: 0xd8610000  lqc2        $vf1, 0x0($v1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2134F8u;
            goto label_2134f8;
        }
    }
    ctx->pc = 0x213494u;
    // 0x213494: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x213494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x213498: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x213498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x21349c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21349cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2134a0: 0x0  nop
    ctx->pc = 0x2134a0u;
    // NOP
    // 0x2134a4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2134a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2134a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2134a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2134ac: 0x0  nop
    ctx->pc = 0x2134acu;
    // NOP
    // 0x2134b0: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2134B0u;
    {
        const bool branch_taken_0x2134b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2134b0) {
            ctx->pc = 0x2134B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2134B0u;
            // 0x2134b4: 0xd8610000  lqc2        $vf1, 0x0($v1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2134F8u;
            goto label_2134f8;
        }
    }
    ctx->pc = 0x2134B8u;
    // 0x2134b8: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x2134b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x2134bc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x2134bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2134c0: 0x46024003  div.s       $f0, $f8, $f2
    ctx->pc = 0x2134c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[0] = ctx->f[8] / ctx->f[2];
    // 0x2134c4: 0x46000004  c1          0x4
    ctx->pc = 0x2134c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2134c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2134c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2134cc: 0x46014840  add.s       $f1, $f9, $f1
    ctx->pc = 0x2134ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2134d0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2134d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2134d4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2134d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2134d8: 0x4be13198  vmulx.xyzw  $vf6, $vf6, $vf1x
    ctx->pc = 0x2134d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2134dc: 0x4bc618aa  vmul.xyz    $vf2, $vf3, $vf6
    ctx->pc = 0x2134dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2134e0: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2134e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2134e4: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x2134e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2134e8: 0x4b02208a  vmaddz.x    $vf2, $vf4, $vf2z
    ctx->pc = 0x2134e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2134ec: 0x4be031bf  vmulaw.xyzw $ACC, $vf6, $vf0w
    ctx->pc = 0x2134ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2134f0: 0x4be2198c  vmsubx.xyzw $vf6, $vf3, $vf2x
    ctx->pc = 0x2134f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2134f4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2134f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2134f8:
    // 0x2134f8: 0x4be13068  vadd.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x2134f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2134fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2134FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2134FCu;
            // 0x213500: 0xf8e10000  sqc2        $vf1, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213504u;
    // 0x213504: 0x0  nop
    ctx->pc = 0x213504u;
    // NOP
}
