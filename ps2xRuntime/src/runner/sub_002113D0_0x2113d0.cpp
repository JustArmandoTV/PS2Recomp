#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002113D0
// Address: 0x2113d0 - 0x2115d8
void sub_002113D0_0x2113d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002113D0_0x2113d0");
#endif

    switch (ctx->pc) {
        case 0x2113f0u: goto label_2113f0;
        case 0x211460u: goto label_211460;
        default: break;
    }

    ctx->pc = 0x2113d0u;

    // 0x2113d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2113d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113d4: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2113d4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2113d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2113dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2113dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113e0: 0x8ce90010  lw          $t1, 0x10($a3)
    ctx->pc = 0x2113e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2113e4: 0x1840007a  blez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2113E4u;
    {
        const bool branch_taken_0x2113e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2113E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2113E4u;
            // 0x2113e8: 0x8ce80014  lw          $t0, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113e4) {
            ctx->pc = 0x2115D0u;
            goto label_2115d0;
        }
    }
    ctx->pc = 0x2113ECu;
    // 0x2113ec: 0x0  nop
    ctx->pc = 0x2113ecu;
    // NOP
label_2113f0:
    // 0x2113f0: 0x8ce40018  lw          $a0, 0x18($a3)
    ctx->pc = 0x2113f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2113f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2113f8: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x2113f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2113fc: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x2113fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x211400: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211404: 0x3236021  addu        $t4, $t9, $v1
    ctx->pc = 0x211404u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x211408: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x211408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21140c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211410: 0xa45821  addu        $t3, $a1, $a0
    ctx->pc = 0x211410u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x211414: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x211418: 0xd8ba0010  lqc2        $vf26, 0x10($a1)
    ctx->pc = 0x211418u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21141c: 0xd8bb0020  lqc2        $vf27, 0x20($a1)
    ctx->pc = 0x21141cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x211420: 0xd8bc0030  lqc2        $vf28, 0x30($a1)
    ctx->pc = 0x211420u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x211424: 0xd97d0010  lqc2        $vf29, 0x10($t3)
    ctx->pc = 0x211424u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x211428: 0xd97e0020  lqc2        $vf30, 0x20($t3)
    ctx->pc = 0x211428u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x21142c: 0xd97f0030  lqc2        $vf31, 0x30($t3)
    ctx->pc = 0x21142cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x211430: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x211434: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x211434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x211438: 0x24ce0001  addiu       $t6, $a2, 0x1
    ctx->pc = 0x211438u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21143c: 0x252f0090  addiu       $t7, $t1, 0x90
    ctx->pc = 0x21143cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x211440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211444: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x211444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211448: 0x25180060  addiu       $t8, $t0, 0x60
    ctx->pc = 0x211448u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x21144c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x21144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211450: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x211450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x211454: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x211454u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211458: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x211458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21145c: 0x0  nop
    ctx->pc = 0x21145cu;
    // NOP
label_211460:
    // 0x211460: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x211460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x211464: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x211464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211468: 0xc4e5000c  lwc1        $f5, 0xC($a3)
    ctx->pc = 0x211468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21146c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x21146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x211470: 0xc542000c  lwc1        $f2, 0xC($t2)
    ctx->pc = 0x211470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211474: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x211474u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211478: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x211478u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21147c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x21147cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x211480: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x211480u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x211484: 0xd8a10040  lqc2        $vf1, 0x40($a1)
    ctx->pc = 0x211484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x211488: 0xd8a30050  lqc2        $vf3, 0x50($a1)
    ctx->pc = 0x211488u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x21148c: 0xd9620040  lqc2        $vf2, 0x40($t3)
    ctx->pc = 0x21148cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x211490: 0xd9640050  lqc2        $vf4, 0x50($t3)
    ctx->pc = 0x211490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x211494: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x211494u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x211498: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x211498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21149c: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x21149cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2114a0: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x2114a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2114a4: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x2114a4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x2114a8: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x2114a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2114ac: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x2114acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2114b0: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x2114b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2114b4: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x2114b4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x2114b8: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x2114b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2114bc: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x2114bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2114c0: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x2114c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2114c4: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x2114c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2114c8: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x2114c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2114cc: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x2114ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2114d0: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x2114d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2114d4: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x2114d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2114d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2114d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2114dc: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x2114dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2114e0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2114e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2114e4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2114e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2114e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2114e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2114ec: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2114ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2114f0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2114f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2114f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2114f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2114f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2114f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2114fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2114fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x211500: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x211500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x211504: 0xc523fffc  lwc1        $f3, -0x4($t1)
    ctx->pc = 0x211504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211508: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x211508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21150c: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x21150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x211510: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x211510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211514: 0xd8980000  lqc2        $vf24, 0x0($a0)
    ctx->pc = 0x211514u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211518: 0xd8990010  lqc2        $vf25, 0x10($a0)
    ctx->pc = 0x211518u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21151c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x21151cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x211520: 0xd8a30050  lqc2        $vf3, 0x50($a1)
    ctx->pc = 0x211520u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x211524: 0xd9640050  lqc2        $vf4, 0x50($t3)
    ctx->pc = 0x211524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x211528: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x211528u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21152c: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x21152cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x211530: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x211530u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x211534: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x211534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211538: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x211538u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x21153c: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x21153cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211540: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x211540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x211544: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x211544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211548: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x211548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21154c: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x21154cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211550: 0x48235800  qmfc2.ni    $v1, $vf11
    ctx->pc = 0x211550u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x211554: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x211554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211558: 0x48236000  qmfc2.ni    $v1, $vf12
    ctx->pc = 0x211558u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x21155c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x21155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211560: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x211560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x211564: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x211564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x211568: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x211568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x21156c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21156cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x211570: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x211574: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x211574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x211578: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x211578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x21157c: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x21157cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x211580: 0x29a20003  slti        $v0, $t5, 0x3
    ctx->pc = 0x211580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211584: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x211584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x211588: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x211588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21158c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21158cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211590: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x211590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x211594: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x211594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x211598: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x211598u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21159c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21159cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2115a0: 0x0  nop
    ctx->pc = 0x2115a0u;
    // NOP
    // 0x2115a4: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2115a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2115a8: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2115A8u;
    {
        const bool branch_taken_0x2115a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2115ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2115A8u;
            // 0x2115ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115a8) {
            ctx->pc = 0x211460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211460;
        }
    }
    ctx->pc = 0x2115B0u;
    // 0x2115b0: 0xad80001c  sw          $zero, 0x1C($t4)
    ctx->pc = 0x2115b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 0));
    // 0x2115b4: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x2115b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115b8: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x2115b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x2115bc: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x2115bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115c0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2115c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2115c4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2115c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2115c8: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x2115C8u;
    {
        const bool branch_taken_0x2115c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2115CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2115C8u;
            // 0x2115cc: 0x300402d  daddu       $t0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115c8) {
            ctx->pc = 0x2113F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2113f0;
        }
    }
    ctx->pc = 0x2115D0u;
label_2115d0:
    // 0x2115d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2115D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2115D8u;
}
