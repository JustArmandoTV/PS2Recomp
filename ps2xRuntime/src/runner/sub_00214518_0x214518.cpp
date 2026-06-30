#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214518
// Address: 0x214518 - 0x214790
void sub_00214518_0x214518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214518_0x214518");
#endif

    switch (ctx->pc) {
        case 0x214580u: goto label_214580;
        case 0x2146b8u: goto label_2146b8;
        default: break;
    }

    ctx->pc = 0x214518u;

    // 0x214518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21451c: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x21451cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x214520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x214524: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x214524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x214528: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x214528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x21452c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214530: 0x25af0010  addiu       $t7, $t5, 0x10
    ctx->pc = 0x214530u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x214534: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x214534u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214538: 0x95ab0002  lhu         $t3, 0x2($t5)
    ctx->pc = 0x214538u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x21453c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x21453cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214540: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x214540u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214544: 0x1652818  mult        $a1, $t3, $a1
    ctx->pc = 0x214544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x214548: 0x1621018  mult        $v0, $t3, $v0
    ctx->pc = 0x214548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21454c: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x21454cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x214550: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x214550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x214554: 0x1e57021  addu        $t6, $t7, $a1
    ctx->pc = 0x214554u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x214558: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x214558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x21455c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x21455cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214560: 0x24580004  addiu       $t8, $v0, 0x4
    ctx->pc = 0x214560u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214564: 0x11600045  beqz        $t3, . + 4 + (0x45 << 2)
    ctx->pc = 0x214564u;
    {
        const bool branch_taken_0x214564 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x214568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214564u;
            // 0x214568: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214564) {
            ctx->pc = 0x21467Cu;
            goto label_21467c;
        }
    }
    ctx->pc = 0x21456Cu;
    // 0x21456c: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x21456cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214570: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x214570u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214574: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x214574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21457c: 0x0  nop
    ctx->pc = 0x21457cu;
    // NOP
label_214580:
    // 0x214580: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x214580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214584: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x214584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x214588: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x214588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21458c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x21458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x214590: 0xd87a0010  lqc2        $vf26, 0x10($v1)
    ctx->pc = 0x214590u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x214594: 0xd87b0020  lqc2        $vf27, 0x20($v1)
    ctx->pc = 0x214594u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x214598: 0xd87c0030  lqc2        $vf28, 0x30($v1)
    ctx->pc = 0x214598u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x21459c: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x21459cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2145a0: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x2145a0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2145a4: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x2145a4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2145a8: 0xc5a60008  lwc1        $f6, 0x8($t5)
    ctx->pc = 0x2145a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2145ac: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2145acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145b0: 0xc5a2000c  lwc1        $f2, 0xC($t5)
    ctx->pc = 0x2145b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2145b4: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x2145b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2145b8: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2145b8u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2145bc: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x2145bcu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2145c0: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x2145c0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2145c4: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2145c4u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2145c8: 0xd8610040  lqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2145c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2145cc: 0xd8630050  lqc2        $vf3, 0x50($v1)
    ctx->pc = 0x2145ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2145d0: 0xd8820040  lqc2        $vf2, 0x40($a0)
    ctx->pc = 0x2145d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2145d4: 0xd8840050  lqc2        $vf4, 0x50($a0)
    ctx->pc = 0x2145d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2145d8: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x2145d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2145dc: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x2145dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2145e0: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x2145e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2145e4: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x2145e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2145e8: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x2145e8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x2145ec: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x2145ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2145f0: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x2145f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2145f4: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x2145f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2145f8: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x2145f8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x2145fc: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x2145fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x214600: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x214600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x214604: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x214604u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214608: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x214608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21460c: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x21460cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214610: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x214610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214614: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x214614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214618: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x214618u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x21461c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x21461cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x214620: 0x48286000  qmfc2.ni    $t0, $vf12
    ctx->pc = 0x214620u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x214624: 0xc7200040  lwc1        $f0, 0x40($t9)
    ctx->pc = 0x214624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214628: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x214628u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x21462c: 0x44882800  mtc1        $t0, $f5
    ctx->pc = 0x21462cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x214630: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x214630u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x214634: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x214634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x214638: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x214638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21463c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x21463cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x214640: 0xc522fffc  lwc1        $f2, -0x4($t1)
    ctx->pc = 0x214640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214644: 0xc5460004  lwc1        $f6, 0x4($t2)
    ctx->pc = 0x214644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x214648: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x214648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x21464c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x21464cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x214650: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x214650u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x214654: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x214654u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x214658: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x214658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21465c: 0x18b102a  slt         $v0, $t4, $t3
    ctx->pc = 0x21465cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x214660: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x214660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x214664: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x214664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x214668: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x214668u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21466c: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x21466cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x214670: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x214670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x214674: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x214674u;
    {
        const bool branch_taken_0x214674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214674u;
            // 0x214678: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214674) {
            ctx->pc = 0x214580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214580;
        }
    }
    ctx->pc = 0x21467Cu;
label_21467c:
    // 0x21467c: 0x2565ffff  addiu       $a1, $t3, -0x1
    ctx->pc = 0x21467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x214680: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x214680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x214684: 0x4a0003d  bltz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x214684u;
    {
        const bool branch_taken_0x214684 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x214688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214684u;
            // 0x214688: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214684) {
            ctx->pc = 0x21477Cu;
            goto label_21477c;
        }
    }
    ctx->pc = 0x21468Cu;
    // 0x21468c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x21468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214690: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x214690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214694: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x214694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x214698: 0x4f6021  addu        $t4, $v0, $t7
    ctx->pc = 0x214698u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x21469c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2146a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2146a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2146a4: 0x6e4821  addu        $t1, $v1, $t6
    ctx->pc = 0x2146a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2146a8: 0x585821  addu        $t3, $v0, $t8
    ctx->pc = 0x2146a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2146ac: 0x515021  addu        $t2, $v0, $s1
    ctx->pc = 0x2146acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2146b0: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x2146b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2146b4: 0x0  nop
    ctx->pc = 0x2146b4u;
    // NOP
label_2146b8:
    // 0x2146b8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2146b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146bc: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2146bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2146c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2146c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2146c4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2146c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2146c8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2146c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2146cc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2146ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2146d0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x2146d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2146d4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2146d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2146d8: 0xd89a0010  lqc2        $vf26, 0x10($a0)
    ctx->pc = 0x2146d8u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2146dc: 0xd89b0020  lqc2        $vf27, 0x20($a0)
    ctx->pc = 0x2146dcu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2146e0: 0xd89c0030  lqc2        $vf28, 0x30($a0)
    ctx->pc = 0x2146e0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2146e4: 0xd87d0010  lqc2        $vf29, 0x10($v1)
    ctx->pc = 0x2146e4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2146e8: 0xd87e0020  lqc2        $vf30, 0x20($v1)
    ctx->pc = 0x2146e8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2146ec: 0xd87f0030  lqc2        $vf31, 0x30($v1)
    ctx->pc = 0x2146ecu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2146f0: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x2146f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146f4: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x2146f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2146f8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2146f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2146fc: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x2146fcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214700: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x214700u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214704: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x214704u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214708: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x214708u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21470c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x21470cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x214710: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x214710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x214714: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x214714u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x214718: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x214718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21471c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21471cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214720: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x214720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x214724: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x214724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x214728: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x214728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21472c: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x21472cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x214730: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x214730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x214734: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x214734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x214738: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x214738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x21473c: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x21473cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x214740: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x214740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x214744: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x214744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x214748: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x214748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x21474c: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x21474cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x214750: 0xf89a0010  sqc2        $vf26, 0x10($a0)
    ctx->pc = 0x214750u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x214754: 0xf89b0020  sqc2        $vf27, 0x20($a0)
    ctx->pc = 0x214754u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x214758: 0xf87d0010  sqc2        $vf29, 0x10($v1)
    ctx->pc = 0x214758u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x21475c: 0xf87e0020  sqc2        $vf30, 0x20($v1)
    ctx->pc = 0x21475cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x214760: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x214760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x214764: 0x258cffd0  addiu       $t4, $t4, -0x30
    ctx->pc = 0x214764u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967248));
    // 0x214768: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x214768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x21476c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x21476cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x214770: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x214770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x214774: 0x4a1ffd0  bgez        $a1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x214774u;
    {
        const bool branch_taken_0x214774 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x214778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214774u;
            // 0x214778: 0x2529fff4  addiu       $t1, $t1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214774) {
            ctx->pc = 0x2146B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2146b8;
        }
    }
    ctx->pc = 0x21477Cu;
label_21477c:
    // 0x21477c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21477cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214780: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x214780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214784: 0x3e00008  jr          $ra
    ctx->pc = 0x214784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214784u;
            // 0x214788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21478Cu;
    // 0x21478c: 0x0  nop
    ctx->pc = 0x21478cu;
    // NOP
}
