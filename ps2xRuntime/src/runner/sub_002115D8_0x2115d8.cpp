#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002115D8
// Address: 0x2115d8 - 0x2116e8
void sub_002115D8_0x2115d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002115D8_0x2115d8");
#endif

    ctx->pc = 0x2115d8u;

    // 0x2115d8: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x2115d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2115dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2115dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2115e0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x2115e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2115e4: 0x8cca001c  lw          $t2, 0x1C($a2)
    ctx->pc = 0x2115e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2115e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2115e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2115ec: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2115f0: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2115f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2115f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2115f8: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x2115f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2115fc: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x2115fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x211600: 0xd95a0010  lqc2        $vf26, 0x10($t2)
    ctx->pc = 0x211600u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x211604: 0xd95b0020  lqc2        $vf27, 0x20($t2)
    ctx->pc = 0x211604u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x211608: 0xd95c0030  lqc2        $vf28, 0x30($t2)
    ctx->pc = 0x211608u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x21160c: 0xd97d0010  lqc2        $vf29, 0x10($t3)
    ctx->pc = 0x21160cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x211610: 0xd97e0020  lqc2        $vf30, 0x20($t3)
    ctx->pc = 0x211610u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x211614: 0xd97f0030  lqc2        $vf31, 0x30($t3)
    ctx->pc = 0x211614u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x211618: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x211618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21161c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x211620: 0xa84018  mult        $t0, $a1, $t0
    ctx->pc = 0x211620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x211624: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211628: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x211628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x21162c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x21162cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x211630: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x211634: 0x8cc90014  lw          $t1, 0x14($a2)
    ctx->pc = 0x211634u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x211638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21163c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21163cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x211640: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x211640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x211644: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x211648: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x21164c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x211650: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x211650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x211654: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x211654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211658: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x211658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21165c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x21165cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211660: 0xc4850014  lwc1        $f5, 0x14($a0)
    ctx->pc = 0x211660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x211664: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x211664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211668: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x211668u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21166c: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x21166cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211670: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x211670u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x211674: 0xd9430050  lqc2        $vf3, 0x50($t2)
    ctx->pc = 0x211674u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x211678: 0xd9640050  lqc2        $vf4, 0x50($t3)
    ctx->pc = 0x211678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x21167c: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x21167cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x211680: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x211680u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x211684: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x211684u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x211688: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x211688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21168c: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x21168cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x211690: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x211690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211694: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x211694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x211698: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x211698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21169c: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x21169cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2116a0: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x2116a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2116a4: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x2116a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2116a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2116a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2116ac: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x2116acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2116b0: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2116b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2116b4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2116b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2116b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2116b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2116bc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2116bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2116c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2116c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2116c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2116c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2116c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2116c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2116cc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2116ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2116d0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2116d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2116d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2116d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2116d8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2116d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2116dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2116dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2116e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2116E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2116E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2116E0u;
            // 0x2116e4: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2116E8u;
}
