#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212A08
// Address: 0x212a08 - 0x212c88
void sub_00212A08_0x212a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212A08_0x212a08");
#endif

    switch (ctx->pc) {
        case 0x212a70u: goto label_212a70;
        case 0x212ad8u: goto label_212ad8;
        case 0x212b48u: goto label_212b48;
        default: break;
    }

    ctx->pc = 0x212a08u;

    // 0x212a08: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x212a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212a0c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x212a0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212a10: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x212a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212a14: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212a18: 0xf8e10130  sqc2        $vf1, 0x130($a3)
    ctx->pc = 0x212a18u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212a1c: 0x24cd0010  addiu       $t5, $a2, 0x10
    ctx->pc = 0x212a1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x212a20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x212a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x212a24: 0xf8e10110  sqc2        $vf1, 0x110($a3)
    ctx->pc = 0x212a24u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212a28: 0xf8e10120  sqc2        $vf1, 0x120($a3)
    ctx->pc = 0x212a28u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212a2c: 0x24cc0020  addiu       $t4, $a2, 0x20
    ctx->pc = 0x212a2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x212a30: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x212a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x212a34: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x212a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x212a38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x212a38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a3c: 0xe4e00138  swc1        $f0, 0x138($a3)
    ctx->pc = 0x212a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 312), bits); }
    // 0x212a40: 0x240e0070  addiu       $t6, $zero, 0x70
    ctx->pc = 0x212a40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x212a44: 0xe4e00110  swc1        $f0, 0x110($a3)
    ctx->pc = 0x212a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 272), bits); }
    // 0x212a48: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x212a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    // 0x212a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212a50: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x212a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x212a54: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x212a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212a58: 0x7ce200e0  sq          $v0, 0xE0($a3)
    ctx->pc = 0x212a58u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 224), GPR_VEC(ctx, 2));
    // 0x212a5c: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x212a5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x212a60: 0x7ce300f0  sq          $v1, 0xF0($a3)
    ctx->pc = 0x212a60u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 240), GPR_VEC(ctx, 3));
    // 0x212a64: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x212a64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x212a68: 0x7ce20100  sq          $v0, 0x100($a3)
    ctx->pc = 0x212a68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 256), GPR_VEC(ctx, 2));
    // 0x212a6c: 0x0  nop
    ctx->pc = 0x212a6cu;
    // NOP
label_212a70:
    // 0x212a70: 0x16e1018  mult        $v0, $t3, $t6
    ctx->pc = 0x212a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212a74: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x212a74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212a78: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x212a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212a7c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x212a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212a80: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x212a80u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x212a84: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x212a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212a88: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x212a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x212a8c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x212a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212a90: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x212a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x212a94: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x212a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a98: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x212a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x212a9c: 0xd9a20000  lqc2        $vf2, 0x0($t5)
    ctx->pc = 0x212a9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x212aa0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x212aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212aa4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x212aa4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x212aa8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x212aa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212aac: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x212aacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212ab0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x212ab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212ab4: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x212ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x212ab8: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x212ab8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x212abc: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x212abcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212ac0: 0xf8620020  sqc2        $vf2, 0x20($v1)
    ctx->pc = 0x212ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212ac4: 0xd84c0000  lqc2        $vf12, 0x0($v0)
    ctx->pc = 0x212ac4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212ac8: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x212ac8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x212acc: 0xd84e0020  lqc2        $vf14, 0x20($v0)
    ctx->pc = 0x212accu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x212ad0: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x212ad4: 0x0  nop
    ctx->pc = 0x212ad4u;
    // NOP
label_212ad8:
    // 0x212ad8: 0xd92f0000  lqc2        $vf15, 0x0($t1)
    ctx->pc = 0x212ad8u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x212adc: 0x4bef61bc  vmulax.xyzw $ACC, $vf12, $vf15x
    ctx->pc = 0x212adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212ae0: 0x4bef68bd  vmadday.xyzw $ACC, $vf13, $vf15y
    ctx->pc = 0x212ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212ae4: 0x4bef73ca  vmaddz.xyzw $vf15, $vf14, $vf15z
    ctx->pc = 0x212ae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212ae8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x212ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x212aec: 0xf90f0000  sqc2        $vf15, 0x0($t0)
    ctx->pc = 0x212aecu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x212af0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x212af4: 0x1d40fff8  bgtz        $t2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x212AF4u;
    {
        const bool branch_taken_0x212af4 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x212AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212AF4u;
            // 0x212af8: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212af4) {
            ctx->pc = 0x212AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212ad8;
        }
    }
    ctx->pc = 0x212AFCu;
    // 0x212afc: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x212afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x212b00: 0x24690030  addiu       $t1, $v1, 0x30
    ctx->pc = 0x212b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x212b04: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x212b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212b08: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212b0c: 0xc4640020  lwc1        $f4, 0x20($v1)
    ctx->pc = 0x212b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x212b10: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x212b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b14: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x212b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212b18: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x212b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212b1c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x212b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212b20: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x212b20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x212b24: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x212b24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x212b28: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x212b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x212b2c: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x212b2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x212b30: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x212b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x212b34: 0xe4630018  swc1        $f3, 0x18($v1)
    ctx->pc = 0x212b34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x212b38: 0xd86c0000  lqc2        $vf12, 0x0($v1)
    ctx->pc = 0x212b38u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212b3c: 0xd86d0010  lqc2        $vf13, 0x10($v1)
    ctx->pc = 0x212b3cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x212b40: 0xd86e0020  lqc2        $vf14, 0x20($v1)
    ctx->pc = 0x212b40u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x212b44: 0x0  nop
    ctx->pc = 0x212b44u;
    // NOP
label_212b48:
    // 0x212b48: 0xd92f0000  lqc2        $vf15, 0x0($t1)
    ctx->pc = 0x212b48u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x212b4c: 0x4bef61bc  vmulax.xyzw $ACC, $vf12, $vf15x
    ctx->pc = 0x212b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212b50: 0x4bef68bd  vmadday.xyzw $ACC, $vf13, $vf15y
    ctx->pc = 0x212b50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212b54: 0x4bef73ca  vmaddz.xyzw $vf15, $vf14, $vf15z
    ctx->pc = 0x212b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212b58: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x212b58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x212b5c: 0xf90f0000  sqc2        $vf15, 0x0($t0)
    ctx->pc = 0x212b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x212b60: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x212b64: 0x1d40fff8  bgtz        $t2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x212B64u;
    {
        const bool branch_taken_0x212b64 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x212B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212B64u;
            // 0x212b68: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b64) {
            ctx->pc = 0x212B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212b48;
        }
    }
    ctx->pc = 0x212B6Cu;
    // 0x212b6c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212b6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b70: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x212b70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b74: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x212b74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212b78: 0x29620002  slti        $v0, $t3, 0x2
    ctx->pc = 0x212b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x212b7c: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x212b7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212b80: 0xd8e60110  lqc2        $vf6, 0x110($a3)
    ctx->pc = 0x212b80u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 272)));
    // 0x212b84: 0xd8e50120  lqc2        $vf5, 0x120($a3)
    ctx->pc = 0x212b84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 288)));
    // 0x212b88: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x212b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x212b8c: 0xd8e30130  lqc2        $vf3, 0x130($a3)
    ctx->pc = 0x212b8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x212b90: 0x4be42968  vadd.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x212b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x212b94: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x212b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x212b98: 0xf8e60110  sqc2        $vf6, 0x110($a3)
    ctx->pc = 0x212b98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 272), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x212b9c: 0xf8e50120  sqc2        $vf5, 0x120($a3)
    ctx->pc = 0x212b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 288), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x212ba0: 0xf8e30130  sqc2        $vf3, 0x130($a3)
    ctx->pc = 0x212ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x212ba4: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x212ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212ba8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x212ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bac: 0x46070800  add.s       $f0, $f1, $f7
    ctx->pc = 0x212bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x212bb0: 0xe4610060  swc1        $f1, 0x60($v1)
    ctx->pc = 0x212bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x212bb4: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x212bb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[0];
    // 0x212bb8: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x212BB8u;
    {
        const bool branch_taken_0x212bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212BB8u;
            // 0x212bbc: 0xe4600064  swc1        $f0, 0x64($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bb8) {
            ctx->pc = 0x212A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212a70;
        }
    }
    ctx->pc = 0x212BC0u;
    // 0x212bc0: 0xc4e20138  lwc1        $f2, 0x138($a3)
    ctx->pc = 0x212bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212bc4: 0xc4e00124  lwc1        $f0, 0x124($a3)
    ctx->pc = 0x212bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212bc8: 0xc4e10134  lwc1        $f1, 0x134($a3)
    ctx->pc = 0x212bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212bcc: 0xc4e30128  lwc1        $f3, 0x128($a3)
    ctx->pc = 0x212bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212bd0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x212bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x212bd4: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x212bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x212bd8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x212bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x212bdc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x212bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x212be0: 0xc4e40110  lwc1        $f4, 0x110($a3)
    ctx->pc = 0x212be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x212be4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212be8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212bec: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x212becu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x212bf0: 0xd8e70120  lqc2        $vf7, 0x120($a3)
    ctx->pc = 0x212bf0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 288)));
    // 0x212bf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x212bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x212bf8: 0xd8e60130  lqc2        $vf6, 0x130($a3)
    ctx->pc = 0x212bf8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x212bfc: 0x3c011d00  lui         $at, 0x1D00
    ctx->pc = 0x212bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7424 << 16));
    // 0x212c00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212c04: 0x4bc63afe  vopmula.xyz $ACC, $vf7, $vf6
    ctx->pc = 0x212c04u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[6]);
    // 0x212c08: 0x4bc7316e  vopmsub.xyz $vf5, $vf6, $vf7
    ctx->pc = 0x212c08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212c0c: 0x46041103  div.s       $f4, $f2, $f4
    ctx->pc = 0x212c0cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[4];
    // 0x212c10: 0xd8e20110  lqc2        $vf2, 0x110($a3)
    ctx->pc = 0x212c10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 272)));
    // 0x212c14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x212c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212c18: 0x4bc5112a  vmul.xyz    $vf4, $vf2, $vf5
    ctx->pc = 0x212c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x212c1c: 0x4b000203  vaddw.x     $vf8, $vf0, $vf0w
    ctx->pc = 0x212c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x212c20: 0x4b04203d  vadday.x    $ACC, $vf4, $vf4y
    ctx->pc = 0x212c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x212c24: 0x4b04410a  vmaddz.x    $vf4, $vf8, $vf4z
    ctx->pc = 0x212c24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212c28: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x212c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x212c2c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x212c2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212c30: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x212c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212c34: 0x4bc232fe  vopmula.xyz $ACC, $vf6, $vf2
    ctx->pc = 0x212c34u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]);
    // 0x212c38: 0x4bc611ae  vopmsub.xyz $vf6, $vf2, $vf6
    ctx->pc = 0x212c38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212c3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212c40: 0x4b0418e8  vadd.x      $vf3, $vf3, $vf4
    ctx->pc = 0x212c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x212c44: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x212c44u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x212c48: 0x4a030bbc  vdiv        $Q, $vf1x, $vf3x
    ctx->pc = 0x212c48u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x212c4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x212c4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x212c50: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x212c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212c54: 0x4bc712fe  vopmula.xyz $ACC, $vf2, $vf7
    ctx->pc = 0x212c54u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]);
    // 0x212c58: 0x4bc238ae  vopmsub.xyz $vf2, $vf7, $vf2
    ctx->pc = 0x212c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212c5c: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x212c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x212c60: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x212c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212c64: 0xf8e50140  sqc2        $vf5, 0x140($a3)
    ctx->pc = 0x212c64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 320), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x212c68: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x212c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212c6c: 0xf8e20160  sqc2        $vf2, 0x160($a3)
    ctx->pc = 0x212c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212c70: 0xf8e10150  sqc2        $vf1, 0x150($a3)
    ctx->pc = 0x212c70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212c74: 0xe4e4011c  swc1        $f4, 0x11C($a3)
    ctx->pc = 0x212c74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 284), bits); }
    // 0x212c78: 0xe4e2012c  swc1        $f2, 0x12C($a3)
    ctx->pc = 0x212c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 300), bits); }
    // 0x212c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x212C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212C7Cu;
            // 0x212c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212C84u;
    // 0x212c84: 0x0  nop
    ctx->pc = 0x212c84u;
    // NOP
}
