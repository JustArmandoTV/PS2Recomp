#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212D70
// Address: 0x212d70 - 0x2130b8
void sub_00212D70_0x212d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212D70_0x212d70");
#endif

    switch (ctx->pc) {
        case 0x2130a8u: goto label_2130a8;
        default: break;
    }

    ctx->pc = 0x212d70u;

    // 0x212d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x212d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212d74: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x212d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x212d78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x212d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x212d7c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x212d7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212d80: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x212d80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x212d84: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x212d84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x212d88: 0xd8c40010  lqc2        $vf4, 0x10($a2)
    ctx->pc = 0x212d88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x212d8c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x212d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212d90: 0x4be418bd  vmadday.xyzw $ACC, $vf3, $vf4y
    ctx->pc = 0x212d90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212d94: 0x4be4110a  vmaddz.xyzw $vf4, $vf2, $vf4z
    ctx->pc = 0x212d94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212d98: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x212d98u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x212d9c: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x212d9cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x212da0: 0xd8860070  lqc2        $vf6, 0x70($a0)
    ctx->pc = 0x212da0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x212da4: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x212da4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x212da8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x212da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212dac: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x212dacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212db0: 0x4be1404a  vmaddz.xyzw $vf1, $vf8, $vf1z
    ctx->pc = 0x212db0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212db4: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x212db4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x212db8: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x212db8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212dbc: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x212dbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x212dc0: 0x4be2296c  vsub.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x212dc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x212dc4: 0xd88300e0  lqc2        $vf3, 0xE0($a0)
    ctx->pc = 0x212dc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x212dc8: 0xd88200f0  lqc2        $vf2, 0xF0($a0)
    ctx->pc = 0x212dc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x212dcc: 0xd8810100  lqc2        $vf1, 0x100($a0)
    ctx->pc = 0x212dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x212dd0: 0x4bc519aa  vmul.xyz    $vf6, $vf3, $vf5
    ctx->pc = 0x212dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x212dd4: 0x4bc5122a  vmul.xyz    $vf8, $vf2, $vf5
    ctx->pc = 0x212dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x212dd8: 0x4bc509ea  vmul.xyz    $vf7, $vf1, $vf5
    ctx->pc = 0x212dd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x212ddc: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x212ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x212de0: 0x4a884200  vaddx.y     $vf8, $vf8, $vf8x
    ctx->pc = 0x212de0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x212de4: 0x4a4739c1  vaddy.z     $vf7, $vf7, $vf7y
    ctx->pc = 0x212de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x212de8: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x212de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x212dec: 0x4a884182  vaddz.y     $vf6, $vf8, $vf8z
    ctx->pc = 0x212decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x212df0: 0x4a473980  vaddx.z     $vf6, $vf7, $vf7x
    ctx->pc = 0x212df0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x212df4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x212df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212df8: 0x4be62128  vadd.xyzw   $vf4, $vf4, $vf6
    ctx->pc = 0x212df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x212dfc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x212dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x212e00: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x212e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212e08: 0x0  nop
    ctx->pc = 0x212e08u;
    // NOP
    // 0x212e0c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x212E0Cu;
    {
        const bool branch_taken_0x212e0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212e0c) {
            ctx->pc = 0x212E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212E0Cu;
            // 0x212e10: 0xdba10000  lqc2        $vf1, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x212E38u;
            goto label_212e38;
        }
    }
    ctx->pc = 0x212E14u;
    // 0x212e14: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x212e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x212e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212e1c: 0x0  nop
    ctx->pc = 0x212e1cu;
    // NOP
    // 0x212e20: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x212E20u;
    {
        const bool branch_taken_0x212e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212E20u;
            // 0x212e24: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e20) {
            ctx->pc = 0x212E34u;
            goto label_212e34;
        }
    }
    ctx->pc = 0x212E28u;
    // 0x212e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212e2c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x212E2Cu;
    {
        const bool branch_taken_0x212e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212E2Cu;
            // 0x212e30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e2c) {
            ctx->pc = 0x2130B0u;
            goto label_2130b0;
        }
    }
    ctx->pc = 0x212E34u;
label_212e34:
    // 0x212e34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_212e38:
    // 0x212e38: 0x24820140  addiu       $v0, $a0, 0x140
    ctx->pc = 0x212e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x212e3c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x212e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212e40: 0x4be001bc  vmulax.xyzw $ACC, $vf0, $vf0x
    ctx->pc = 0x212e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212e44: 0x4be0084f  vmsubw.xyzw $vf1, $vf1, $vf0w
    ctx->pc = 0x212e44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212e48: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212e4c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x212e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x212e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212e58: 0x0  nop
    ctx->pc = 0x212e58u;
    // NOP
    // 0x212e5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x212e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x212e60: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x212e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212e64: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x212e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e68: 0xd8830140  lqc2        $vf3, 0x140($a0)
    ctx->pc = 0x212e68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x212e6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x212e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212e70: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x212e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212e74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x212e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x212e78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x212e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x212e7c: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x212e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x212e80: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x212e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x212e84: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x212e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e88: 0xa0a00028  sb          $zero, 0x28($a1)
    ctx->pc = 0x212e88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e8c: 0x4be419bc  vmulax.xyzw $ACC, $vf3, $vf4x
    ctx->pc = 0x212e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212e90: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x212e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212e94: 0x4be4108a  vmaddz.xyzw $vf2, $vf2, $vf4z
    ctx->pc = 0x212e94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212e98: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x212e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212e9c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x212e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212ea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212ea4: 0x0  nop
    ctx->pc = 0x212ea4u;
    // NOP
    // 0x212ea8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x212EA8u;
    {
        const bool branch_taken_0x212ea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212EA8u;
            // 0x212eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ea8) {
            ctx->pc = 0x212ED8u;
            goto label_212ed8;
        }
    }
    ctx->pc = 0x212EB0u;
    // 0x212eb0: 0x0  nop
    ctx->pc = 0x212eb0u;
    // NOP
    // 0x212eb4: 0x0  nop
    ctx->pc = 0x212eb4u;
    // NOP
    // 0x212eb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x212eb8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x212ebc: 0xa0a20028  sb          $v0, 0x28($a1)
    ctx->pc = 0x212ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x212ec0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x212ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x212ec4: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x212ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x212ec8: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x212ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x212ecc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x212eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212ed0: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x212ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212ed4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x212ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_212ed8:
    // 0x212ed8: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x212ed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212edc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x212edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212ee0: 0xc4a80010  lwc1        $f8, 0x10($a1)
    ctx->pc = 0x212ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x212ee4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x212ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212ee8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x212ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212eec: 0x460840c2  mul.s       $f3, $f8, $f8
    ctx->pc = 0x212eecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x212ef0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x212ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212ef4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x212ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212ef8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x212ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212efc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x212efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x212f00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x212f00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x212f04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212f08: 0x0  nop
    ctx->pc = 0x212f08u;
    // NOP
    // 0x212f0c: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x212F0Cu;
    {
        const bool branch_taken_0x212f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212f0c) {
            ctx->pc = 0x2130A0u;
            goto label_2130a0;
        }
    }
    ctx->pc = 0x212F14u;
    // 0x212f14: 0xc489011c  lwc1        $f9, 0x11C($a0)
    ctx->pc = 0x212f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x212f18: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x212f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x212f1c: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x212f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x212f20: 0xd8860110  lqc2        $vf6, 0x110($a0)
    ctx->pc = 0x212f20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x212f24: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x212f24u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x212f28: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f2c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x212f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212f30: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x212f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212f34: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x212f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212f38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x212f38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212f3c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x212f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x212f40: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x212f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x212f44: 0x4be2304c  vmsubx.xyzw $vf1, $vf6, $vf2x
    ctx->pc = 0x212f44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212f48: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x212f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x212f4c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212f50: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x212f50u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x212f54: 0xc4860124  lwc1        $f6, 0x124($a0)
    ctx->pc = 0x212f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x212f58: 0xc4820134  lwc1        $f2, 0x134($a0)
    ctx->pc = 0x212f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212f5c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x212f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212f60: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x212f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x212f64: 0xc4850138  lwc1        $f5, 0x138($a0)
    ctx->pc = 0x212f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x212f68: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x212f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x212f6c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x212f6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x212f70: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x212f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x212f74: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x212f74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x212f78: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x212f78u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x212f7c: 0xc486012c  lwc1        $f6, 0x12C($a0)
    ctx->pc = 0x212f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x212f80: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x212f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212f84: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x212f84u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x212f88: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x212f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x212f8c: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x212f8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x212f90: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x212f90u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x212f94: 0x46080042  mul.s       $f1, $f0, $f8
    ctx->pc = 0x212f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x212f98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x212f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x212f9c: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x212f9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x212fa0: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x212fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x212fa4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x212fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x212fa8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x212fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x212fac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212fb0: 0x0  nop
    ctx->pc = 0x212fb0u;
    // NOP
    // 0x212fb4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x212FB4u;
    {
        const bool branch_taken_0x212fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212fb4) {
            ctx->pc = 0x212FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212FB4u;
            // 0x212fb8: 0xe4640004  swc1        $f4, 0x4($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212FD8u;
            goto label_212fd8;
        }
    }
    ctx->pc = 0x212FBCu;
    // 0x212fbc: 0x0  nop
    ctx->pc = 0x212fbcu;
    // NOP
    // 0x212fc0: 0x0  nop
    ctx->pc = 0x212fc0u;
    // NOP
    // 0x212fc4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x212fc4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x212fc8: 0x46000004  c1          0x4
    ctx->pc = 0x212fc8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x212fcc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x212fccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x212fd0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x212fd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x212fd4: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x212fd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_212fd8:
    // 0x212fd8: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x212fd8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x212fdc: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x212fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x212fe0: 0xd8830120  lqc2        $vf3, 0x120($a0)
    ctx->pc = 0x212fe0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x212fe4: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x212fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x212fe8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212fec: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x212fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x212ff0: 0x4be4184c  vmsubx.xyzw $vf1, $vf3, $vf4x
    ctx->pc = 0x212ff0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212ff4: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x212ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212ff8: 0xd8820130  lqc2        $vf2, 0x130($a0)
    ctx->pc = 0x212ff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x212ffc: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x212ffcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213000: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x213000u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x213004: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x213004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213008: 0x4be019bf  vmulaw.xyzw $ACC, $vf3, $vf0w
    ctx->pc = 0x213008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x21300c: 0x4be510cc  vmsubx.xyzw $vf3, $vf2, $vf5x
    ctx->pc = 0x21300cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213010: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x213010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213014: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x213014u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x213018: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x213018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21301c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x21301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213020: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x213020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x213024: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x213024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213028: 0x0  nop
    ctx->pc = 0x213028u;
    // NOP
    // 0x21302c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21302Cu;
    {
        const bool branch_taken_0x21302c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21302Cu;
            // 0x213030: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21302c) {
            ctx->pc = 0x213038u;
            goto label_213038;
        }
    }
    ctx->pc = 0x213034u;
    // 0x213034: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x213034u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_213038:
    // 0x213038: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x213038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21303c: 0x46005086  mov.s       $f2, $f10
    ctx->pc = 0x21303cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[10]);
    // 0x213040: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x213040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213044: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x213044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213048: 0x4be011bf  vmulaw.xyzw $ACC, $vf2, $vf0w
    ctx->pc = 0x213048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x21304c: 0x4be1308c  vmsubx.xyzw $vf2, $vf6, $vf1x
    ctx->pc = 0x21304cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213050: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x213050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213054: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x213054u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213058: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x213058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21305c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x21305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213060: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x213060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x213064: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x213064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x213068: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x213068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21306c: 0x460a0834  c.lt.s      $f1, $f10
    ctx->pc = 0x21306cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213070: 0x0  nop
    ctx->pc = 0x213070u;
    // NOP
    // 0x213074: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x213074u;
    {
        const bool branch_taken_0x213074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213074u;
            // 0x213078: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213074) {
            ctx->pc = 0x213080u;
            goto label_213080;
        }
    }
    ctx->pc = 0x21307Cu;
    // 0x21307c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x21307cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_213080:
    // 0x213080: 0x0  nop
    ctx->pc = 0x213080u;
    // NOP
    // 0x213084: 0x0  nop
    ctx->pc = 0x213084u;
    // NOP
    // 0x213088: 0x46020004  c1          0x20004
    ctx->pc = 0x213088u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21308c: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x21308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213090: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x213090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x213094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213098: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x213098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x21309c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x21309cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2130a0:
    // 0x2130a0: 0xc084b22  jal         func_212C88
    ctx->pc = 0x2130A0u;
    SET_GPR_U32(ctx, 31, 0x2130A8u);
    ctx->pc = 0x2130A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2130A0u;
            // 0x2130a4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212C88u;
    if (runtime->hasFunction(0x212C88u)) {
        auto targetFn = runtime->lookupFunction(0x212C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130A8u; }
        if (ctx->pc != 0x2130A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212C88_0x212c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130A8u; }
        if (ctx->pc != 0x2130A8u) { return; }
    }
    ctx->pc = 0x2130A8u;
label_2130a8:
    // 0x2130a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2130a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2130ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2130acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2130b0:
    // 0x2130b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2130B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2130B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2130B0u;
            // 0x2130b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2130B8u;
}
