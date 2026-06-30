#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214790
// Address: 0x214790 - 0x214c60
void sub_00214790_0x214790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214790_0x214790");
#endif

    switch (ctx->pc) {
        case 0x2147f8u: goto label_2147f8;
        case 0x214ab8u: goto label_214ab8;
        default: break;
    }

    ctx->pc = 0x214790u;

    // 0x214790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214794: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x214794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x214798: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21479c: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x21479cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2147a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2147a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2147a4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2147a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2147a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2147a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2147ac: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2147acu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147b0: 0x482f0800  qmfc2.ni    $t7, $vf1
    ctx->pc = 0x2147b0u;
    SET_GPR_VEC(ctx, 15, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2147b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2147b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147b8: 0x94e50002  lhu         $a1, 0x2($a3)
    ctx->pc = 0x2147b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2147bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2147bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147c0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2147c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2147c4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2147c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2147c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2147c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2147cc: 0x1238821  addu        $s1, $t1, $v1
    ctx->pc = 0x2147ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2147d0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2147d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2147d4: 0x62c021  addu        $t8, $v1, $v0
    ctx->pc = 0x2147d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2147d8: 0x24790010  addiu       $t9, $v1, 0x10
    ctx->pc = 0x2147d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2147dc: 0x10a0009e  beqz        $a1, . + 4 + (0x9E << 2)
    ctx->pc = 0x2147DCu;
    {
        const bool branch_taken_0x2147dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2147E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2147DCu;
            // 0x2147e0: 0xf8610000  sqc2        $vf1, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147dc) {
            ctx->pc = 0x214A58u;
            goto label_214a58;
        }
    }
    ctx->pc = 0x2147E4u;
    // 0x2147e4: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x2147e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147e8: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x2147e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147ec: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x2147ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2147f0: 0x300502d  daddu       $t2, $t8, $zero
    ctx->pc = 0x2147f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147f4: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2147f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2147f8:
    // 0x2147f8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2147fc: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x2147fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x214800: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x214800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x214804: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x214804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x214808: 0xd87a0010  lqc2        $vf26, 0x10($v1)
    ctx->pc = 0x214808u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21480c: 0xd87b0020  lqc2        $vf27, 0x20($v1)
    ctx->pc = 0x21480cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x214810: 0xd87c0030  lqc2        $vf28, 0x30($v1)
    ctx->pc = 0x214810u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x214814: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x214814u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x214818: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x214818u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21481c: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x21481cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x214820: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x214820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214824: 0xc4e5000c  lwc1        $f5, 0xC($a3)
    ctx->pc = 0x214824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x214828: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x214828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21482c: 0xd9320000  lqc2        $vf18, 0x0($t1)
    ctx->pc = 0x21482cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x214830: 0xd9330010  lqc2        $vf19, 0x10($t1)
    ctx->pc = 0x214830u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x214834: 0xd9340020  lqc2        $vf20, 0x20($t1)
    ctx->pc = 0x214834u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x214838: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x214838u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21483c: 0xd8610040  lqc2        $vf1, 0x40($v1)
    ctx->pc = 0x21483cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x214840: 0xd8630050  lqc2        $vf3, 0x50($v1)
    ctx->pc = 0x214840u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x214844: 0xd8820040  lqc2        $vf2, 0x40($a0)
    ctx->pc = 0x214844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x214848: 0xd8840050  lqc2        $vf4, 0x50($a0)
    ctx->pc = 0x214848u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x21484c: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x21484cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214850: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x214850u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x214854: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x214854u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x214858: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x214858u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x21485c: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x21485cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x214860: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x214860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x214864: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x214864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x214868: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x214868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21486c: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x21486cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x214870: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x214870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x214874: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x214874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x214878: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x214878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21487c: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x21487cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214880: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x214880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214884: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x214884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214888: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x214888u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21488c: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x21488cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x214890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214894: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x214894u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x214898: 0xc5c00040  lwc1        $f0, 0x40($t6)
    ctx->pc = 0x214898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21489c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x21489cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2148a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2148a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2148a4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2148a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2148a8: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x2148a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2148ac: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2148acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2148b0: 0xc4e6000c  lwc1        $f6, 0xC($a3)
    ctx->pc = 0x2148b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2148b4: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x2148b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x2148b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2148b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2148bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2148bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2148c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2148c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2148c4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2148c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2148c8: 0xc523003c  lwc1        $f3, 0x3C($t1)
    ctx->pc = 0x2148c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2148cc: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2148ccu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2148d0: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x2148d0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2148d4: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x2148d4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2148d8: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2148d8u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2148dc: 0xd8610040  lqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2148dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2148e0: 0xd8630050  lqc2        $vf3, 0x50($v1)
    ctx->pc = 0x2148e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2148e4: 0xd8820040  lqc2        $vf2, 0x40($a0)
    ctx->pc = 0x2148e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2148e8: 0xd8840050  lqc2        $vf4, 0x50($a0)
    ctx->pc = 0x2148e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2148ec: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x2148ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2148f0: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x2148f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2148f4: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x2148f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2148f8: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x2148f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2148fc: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x2148fcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x214900: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x214900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x214904: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x214904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x214908: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x214908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21490c: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x21490cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x214910: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x214910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x214914: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x214914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x214918: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x214918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21491c: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x21491cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214920: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x214920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214924: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x214924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214928: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x214928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21492c: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x21492cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x214930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214934: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x214934u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x214938: 0xc5c00040  lwc1        $f0, 0x40($t6)
    ctx->pc = 0x214938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21493c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x21493cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x214940: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x214940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x214944: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x214944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x214948: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x214948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21494c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x21494cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x214950: 0xc4e6000c  lwc1        $f6, 0xC($a3)
    ctx->pc = 0x214950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x214954: 0x25220060  addiu       $v0, $t1, 0x60
    ctx->pc = 0x214954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x214958: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x214958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21495c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21495cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214960: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x214960u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x214964: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x214964u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x214968: 0xc522006c  lwc1        $f2, 0x6C($t1)
    ctx->pc = 0x214968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21496c: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x21496cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214970: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x214970u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214974: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x214974u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x214978: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x214978u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21497c: 0xd8610040  lqc2        $vf1, 0x40($v1)
    ctx->pc = 0x21497cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x214980: 0xd8630050  lqc2        $vf3, 0x50($v1)
    ctx->pc = 0x214980u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x214984: 0xd8820040  lqc2        $vf2, 0x40($a0)
    ctx->pc = 0x214984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x214988: 0xd8840050  lqc2        $vf4, 0x50($a0)
    ctx->pc = 0x214988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x21498c: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x21498cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214990: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x214990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x214994: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x214994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x214998: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x214998u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x21499c: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x21499cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x2149a0: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x2149a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2149a4: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x2149a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2149a8: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x2149a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2149ac: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x2149acu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x2149b0: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x2149b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2149b4: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x2149b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2149b8: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x2149b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2149bc: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x2149bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2149c0: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x2149c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2149c4: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x2149c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2149c8: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x2149c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2149cc: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x2149ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2149d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2149d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2149d4: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x2149d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2149d8: 0xc5c00040  lwc1        $f0, 0x40($t6)
    ctx->pc = 0x2149d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149dc: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2149dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2149e0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2149e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2149e4: 0x25290090  addiu       $t1, $t1, 0x90
    ctx->pc = 0x2149e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x2149e8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2149e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2149ec: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2149ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2149f0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2149f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2149f4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2149f8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2149f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2149fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2149fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214a00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x214a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214a04: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x214a04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x214a08: 0xe5a20008  swc1        $f2, 0x8($t5)
    ctx->pc = 0x214a08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x214a0c: 0xd8c4ffe0  lqc2        $vf4, -0x20($a2)
    ctx->pc = 0x214a0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 4294967264)));
    // 0x214a10: 0xd8c3fff0  lqc2        $vf3, -0x10($a2)
    ctx->pc = 0x214a10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 4294967280)));
    // 0x214a14: 0xd8c5ffd0  lqc2        $vf5, -0x30($a2)
    ctx->pc = 0x214a14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 4294967248)));
    // 0x214a18: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x214a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x214a1c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x214a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x214a20: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x214a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x214a24: 0x4be1184a  vmaddz.xyzw $vf1, $vf3, $vf1z
    ctx->pc = 0x214a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214a28: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x214a28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214a2c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x214a2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214a30: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x214a30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214a34: 0xd8c30010  lqc2        $vf3, 0x10($a2)
    ctx->pc = 0x214a34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x214a38: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x214a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x214a3c: 0x4be221bc  vmulax.xyzw $ACC, $vf4, $vf2x
    ctx->pc = 0x214a3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x214a40: 0x4be218bd  vmadday.xyzw $ACC, $vf3, $vf2y
    ctx->pc = 0x214a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x214a44: 0x4be2088a  vmaddz.xyzw $vf2, $vf1, $vf2z
    ctx->pc = 0x214a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214a48: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x214a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x214a4c: 0xf9620010  sqc2        $vf2, 0x10($t3)
    ctx->pc = 0x214a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x214a50: 0x1580ff69  bnez        $t4, . + 4 + (-0x97 << 2)
    ctx->pc = 0x214A50u;
    {
        const bool branch_taken_0x214a50 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x214A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214A50u;
            // 0x214a54: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a50) {
            ctx->pc = 0x2147F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2147f8;
        }
    }
    ctx->pc = 0x214A58u;
label_214a58:
    // 0x214a58: 0x48af3800  qmtc2.ni    $t7, $vf7
    ctx->pc = 0x214a58u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x214a5c: 0x24abffff  addiu       $t3, $a1, -0x1
    ctx->pc = 0x214a5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x214a60: 0x560007a  bltz        $t3, . + 4 + (0x7A << 2)
    ctx->pc = 0x214A60u;
    {
        const bool branch_taken_0x214a60 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x214A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214A60u;
            // 0x214a64: 0x24e90010  addiu       $t1, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a60) {
            ctx->pc = 0x214C4Cu;
            goto label_214c4c;
        }
    }
    ctx->pc = 0x214A68u;
    // 0x214a68: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x214a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x214a6c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x214a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214a70: 0x1631818  mult        $v1, $t3, $v1
    ctx->pc = 0x214a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x214a74: 0x1621018  mult        $v0, $t3, $v0
    ctx->pc = 0x214a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214a78: 0xb2100  sll         $a0, $t3, 4
    ctx->pc = 0x214a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x214a7c: 0xb2880  sll         $a1, $t3, 2
    ctx->pc = 0x214a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x214a80: 0xb86021  addu        $t4, $a1, $t8
    ctx->pc = 0x214a80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x214a84: 0x99c821  addu        $t9, $a0, $t9
    ctx->pc = 0x214a84u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x214a88: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x214a8c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x214a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x214a90: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x214a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214a94: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x214a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x214a98: 0xf15021  addu        $t2, $a3, $s1
    ctx->pc = 0x214a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x214a9c: 0x52c021  addu        $t8, $v0, $s2
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x214aa0: 0x697821  addu        $t7, $v1, $t1
    ctx->pc = 0x214aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x214aa4: 0x927021  addu        $t6, $a0, $s2
    ctx->pc = 0x214aa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x214aa8: 0xb26821  addu        $t5, $a1, $s2
    ctx->pc = 0x214aa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x214aac: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x214aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x214ab0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x214ab4: 0x0  nop
    ctx->pc = 0x214ab4u;
    // NOP
label_214ab8:
    // 0x214ab8: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x214ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x214abc: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x214abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x214ac0: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x214ac0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x214ac4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x214ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x214ac8: 0xd9440010  lqc2        $vf4, 0x10($t2)
    ctx->pc = 0x214ac8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x214acc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x214accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x214ad0: 0xd9410020  lqc2        $vf1, 0x20($t2)
    ctx->pc = 0x214ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x214ad4: 0x4be719bc  vmulax.xyzw $ACC, $vf3, $vf7x
    ctx->pc = 0x214ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x214ad8: 0x4be720bd  vmadday.xyzw $ACC, $vf4, $vf7y
    ctx->pc = 0x214ad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x214adc: 0x4be708ca  vmaddz.xyzw $vf3, $vf1, $vf7z
    ctx->pc = 0x214adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214ae0: 0xdb220000  lqc2        $vf2, 0x0($t9)
    ctx->pc = 0x214ae0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x214ae4: 0x4be311ec  vsub.xyzw   $vf7, $vf2, $vf3
    ctx->pc = 0x214ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x214ae8: 0xd8ba0010  lqc2        $vf26, 0x10($a1)
    ctx->pc = 0x214ae8u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x214aec: 0xd8bb0020  lqc2        $vf27, 0x20($a1)
    ctx->pc = 0x214aecu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x214af0: 0xd8bc0030  lqc2        $vf28, 0x30($a1)
    ctx->pc = 0x214af0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x214af4: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x214af4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x214af8: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x214af8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x214afc: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x214afcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x214b00: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x214b00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x214b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214b08: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x214b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b0c: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x214b0cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214b10: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x214b10u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214b14: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x214b14u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x214b18: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x214b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x214b1c: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x214b1cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x214b20: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x214b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b24: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x214b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214b28: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x214b28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x214b2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x214b2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214b30: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x214b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214b34: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x214b34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x214b38: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x214b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x214b3c: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x214b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214b40: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x214b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x214b44: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x214b44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x214b48: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x214b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x214b4c: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x214b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x214b50: 0xe7010000  swc1        $f1, 0x0($t8)
    ctx->pc = 0x214b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x214b54: 0x4b070041  vaddy.x     $vf1, $vf0, $vf7y
    ctx->pc = 0x214b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214b58: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x214b58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b5c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x214b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214b64: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x214b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b68: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x214b68u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214b6c: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x214b6cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214b70: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x214b70u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x214b74: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x214b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x214b78: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x214b78u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x214b7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x214b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b80: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x214b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214b84: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x214b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x214b88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x214b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214b8c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x214b8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214b90: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x214b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x214b94: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x214b94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x214b98: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x214b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214b9c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x214b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x214ba0: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x214ba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x214ba4: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x214ba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x214ba8: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x214ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x214bac: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x214bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x214bb0: 0x4b070042  vaddz.x     $vf1, $vf0, $vf7z
    ctx->pc = 0x214bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214bb4: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x214bb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bb8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x214bb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214bc0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x214bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bc4: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x214bc4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214bc8: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x214bc8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214bcc: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x214bccu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x214bd0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x214bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x214bd4: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x214bd4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x214bd8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x214bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214bdc: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x214bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214be0: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x214be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x214be4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x214be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214be8: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x214be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214bec: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x214becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x214bf0: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x214bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x214bf4: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x214bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214bf8: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x214bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x214bfc: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x214bfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x214c00: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x214c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x214c04: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x214c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x214c08: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x214c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x214c0c: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x214c0cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x214c10: 0xf8ba0010  sqc2        $vf26, 0x10($a1)
    ctx->pc = 0x214c10u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x214c14: 0xf8bb0020  sqc2        $vf27, 0x20($a1)
    ctx->pc = 0x214c14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x214c18: 0xf89d0010  sqc2        $vf29, 0x10($a0)
    ctx->pc = 0x214c18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x214c1c: 0xf89e0020  sqc2        $vf30, 0x20($a0)
    ctx->pc = 0x214c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x214c20: 0x25cefff4  addiu       $t6, $t6, -0xC
    ctx->pc = 0x214c20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
    // 0x214c24: 0x24e7ff70  addiu       $a3, $a3, -0x90
    ctx->pc = 0x214c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967152));
    // 0x214c28: 0x25adfff4  addiu       $t5, $t5, -0xC
    ctx->pc = 0x214c28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967284));
    // 0x214c2c: 0x24c6ff70  addiu       $a2, $a2, -0x90
    ctx->pc = 0x214c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967152));
    // 0x214c30: 0x2718fff4  addiu       $t8, $t8, -0xC
    ctx->pc = 0x214c30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967284));
    // 0x214c34: 0x25efff70  addiu       $t7, $t7, -0x90
    ctx->pc = 0x214c34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967152));
    // 0x214c38: 0x2739fff0  addiu       $t9, $t9, -0x10
    ctx->pc = 0x214c38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967280));
    // 0x214c3c: 0x254aff70  addiu       $t2, $t2, -0x90
    ctx->pc = 0x214c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967152));
    // 0x214c40: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x214c40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x214c44: 0x561ff9c  bgez        $t3, . + 4 + (-0x64 << 2)
    ctx->pc = 0x214C44u;
    {
        const bool branch_taken_0x214c44 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x214C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214C44u;
            // 0x214c48: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c44) {
            ctx->pc = 0x214AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214ab8;
        }
    }
    ctx->pc = 0x214C4Cu;
label_214c4c:
    // 0x214c4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214c50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214c54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214c58: 0x3e00008  jr          $ra
    ctx->pc = 0x214C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214C58u;
            // 0x214c5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214C60u;
}
