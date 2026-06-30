#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001333D0
// Address: 0x1333d0 - 0x133510
void sub_001333D0_0x1333d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001333D0_0x1333d0");
#endif

    ctx->pc = 0x1333d0u;

    // 0x1333d0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1333d0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1333d4: 0x78ab0010  lq          $t3, 0x10($a1)
    ctx->pc = 0x1333d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1333d8: 0x78ae0020  lq          $t6, 0x20($a1)
    ctx->pc = 0x1333d8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1333dc: 0xd8b80030  lqc2        $vf24, 0x30($a1)
    ctx->pc = 0x1333dcu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1333e0: 0x48a8f000  qmtc2.ni    $t0, $vf30
    ctx->pc = 0x1333e0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1333e4: 0x48abe800  qmtc2.ni    $t3, $vf29
    ctx->pc = 0x1333e4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x1333e8: 0x48aee000  qmtc2.ni    $t6, $vf28
    ctx->pc = 0x1333e8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x1333ec: 0x8483e  dsrl32      $t1, $t0, 0
    ctx->pc = 0x1333ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1333f0: 0xb603e  dsrl32      $t4, $t3, 0
    ctx->pc = 0x1333f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x1333f4: 0xe783e  dsrl32      $t7, $t6, 0
    ctx->pc = 0x1333f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x1333f8: 0x710053a9  pcpyud      $t2, $t0, $zero
    ctx->pc = 0x1333f8u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1333fc: 0x71606ba9  pcpyud      $t5, $t3, $zero
    ctx->pc = 0x1333fcu;
    SET_GPR_VEC(ctx, 13, _mm_unpackhi_epi64(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x133400: 0x71c0c3a9  pcpyud      $t8, $t6, $zero
    ctx->pc = 0x133400u;
    SET_GPR_VEC(ctx, 24, _mm_unpackhi_epi64(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x133404: 0x7108cc88  pextlw      $t9, $t0, $t0
    ctx->pc = 0x133404u;
    SET_GPR_VEC(ctx, 25, PS2_PEXTLW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x133408: 0x71293488  pextlw      $a2, $t1, $t1
    ctx->pc = 0x133408u;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x13340c: 0x714a3c88  pextlw      $a3, $t2, $t2
    ctx->pc = 0x13340cu;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 10)));
    // 0x133410: 0x7179cb89  pcpyld      $t9, $t3, $t9
    ctx->pc = 0x133410u;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x133414: 0x71863389  pcpyld      $a2, $t4, $a2
    ctx->pc = 0x133414u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 6)));
    // 0x133418: 0x71a73b89  pcpyld      $a3, $t5, $a3
    ctx->pc = 0x133418u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 7)));
    // 0x13341c: 0x7019cf89  pexew       $t9, $t9
    ctx->pc = 0x13341cu;
    SET_GPR_VEC(ctx, 25, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x133420: 0x70063789  pexew       $a2, $a2
    ctx->pc = 0x133420u;
    SET_GPR_VEC(ctx, 6, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x133424: 0x70073f89  pexew       $a3, $a3
    ctx->pc = 0x133424u;
    SET_GPR_VEC(ctx, 7, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x133428: 0x71ce7488  pextlw      $t6, $t6, $t6
    ctx->pc = 0x133428u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 14), GPR_VEC(ctx, 14)));
    // 0x13342c: 0x71ef7c88  pextlw      $t7, $t7, $t7
    ctx->pc = 0x13342cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTLW(GPR_VEC(ctx, 15), GPR_VEC(ctx, 15)));
    // 0x133430: 0x7318c488  pextlw      $t8, $t8, $t8
    ctx->pc = 0x133430u;
    SET_GPR_VEC(ctx, 24, PS2_PEXTLW(GPR_VEC(ctx, 24), GPR_VEC(ctx, 24)));
    // 0x133434: 0x716e7389  pcpyld      $t6, $t3, $t6
    ctx->pc = 0x133434u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 14)));
    // 0x133438: 0x718f7b89  pcpyld      $t7, $t4, $t7
    ctx->pc = 0x133438u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 15)));
    // 0x13343c: 0x71b8c389  pcpyld      $t8, $t5, $t8
    ctx->pc = 0x13343cu;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 24)));
    // 0x133440: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x133440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x133444: 0x48b83000  qmtc2.ni    $t8, $vf6
    ctx->pc = 0x133444u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 24));
    // 0x133448: 0x48a71800  qmtc2.ni    $a3, $vf3
    ctx->pc = 0x133448u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x13344c: 0x48af2800  qmtc2.ni    $t7, $vf5
    ctx->pc = 0x13344cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x133450: 0x48b90800  qmtc2.ni    $t9, $vf1
    ctx->pc = 0x133450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 25));
    // 0x133454: 0x48ae2000  qmtc2.ni    $t6, $vf4
    ctx->pc = 0x133454u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x133458: 0x4bc612be  vmula.xyz   $ACC, $vf2, $vf6
    ctx->pc = 0x133458u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]);
    // 0x13345c: 0x4bc51aad  vmsub.xyz   $vf10, $vf3, $vf5
    ctx->pc = 0x13345cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x133460: 0x4bc60abe  vmula.xyz   $ACC, $vf1, $vf6
    ctx->pc = 0x133460u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[6]);
    // 0x133464: 0x4bc41aed  vmsub.xyz   $vf11, $vf3, $vf4
    ctx->pc = 0x133464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x133468: 0x4bc50abe  vmula.xyz   $ACC, $vf1, $vf5
    ctx->pc = 0x133468u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]);
    // 0x13346c: 0x4a8a02ac  vsub.y      $vf10, $vf0, $vf10
    ctx->pc = 0x13346cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x133470: 0x4bc4132d  vmsub.xyz   $vf12, $vf2, $vf4
    ctx->pc = 0x133470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x133474: 0x4b4b02ec  vsub.xz     $vf11, $vf0, $vf11
    ctx->pc = 0x133474u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x133478: 0x4a8c032c  vsub.y      $vf12, $vf0, $vf12
    ctx->pc = 0x133478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13347c: 0x4b0af1bc  vmulax.x    $ACC, $vf30, $vf10x
    ctx->pc = 0x13347cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x133480: 0x4b0ae8bd  vmadday.x   $ACC, $vf29, $vf10y
    ctx->pc = 0x133480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x133484: 0x4b0ae7ca  vmaddz.x    $vf31, $vf28, $vf10z
    ctx->pc = 0x133484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x133488: 0x4a7f03bc  vdiv        $Q, $vf0w, $vf31x
    ctx->pc = 0x133488u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13348c: 0x4bed033c  vmove.xyzw  $vf13, $vf0
    ctx->pc = 0x13348cu;
    ctx->vu0_vf[13] = ctx->vu0_vf[0];
    // 0x133490: 0x4a0002ff  vnop
    ctx->pc = 0x133490u;
    // NOP operation, no action needed for VU0
    // 0x133494: 0x4a0002ff  vnop
    ctx->pc = 0x133494u;
    // NOP operation, no action needed for VU0
    // 0x133498: 0x48488800  cfc2.ni     $t0, $vi17
    ctx->pc = 0x133498u;
    SET_GPR_U32(ctx, 8, ctx->vu0_cmsar3);
    // 0x13349c: 0x4a2002ac  vsub.w      $vf10, $vf0, $vf0
    ctx->pc = 0x13349cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1334a0: 0x4a2002ec  vsub.w      $vf11, $vf0, $vf0
    ctx->pc = 0x1334a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1334a4: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x1334a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1334a8: 0x31080008  andi        $t0, $t0, 0x8
    ctx->pc = 0x1334a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x1334ac: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1334ACu;
    {
        const bool branch_taken_0x1334ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1334ACu;
            // 0x1334b0: 0x20020000  addi        $v0, $zero, 0x0 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334ac) {
            ctx->pc = 0x1334C8u;
            goto label_1334c8;
        }
    }
    ctx->pc = 0x1334B4u;
    // 0x1334b4: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x1334b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x1334b8: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x1334b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x1334bc: 0x7c800020  sq          $zero, 0x20($a0)
    ctx->pc = 0x1334bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 0));
    // 0x1334c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1334C0u;
    {
        const bool branch_taken_0x1334c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1334C0u;
            // 0x1334c4: 0x7c800030  sq          $zero, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334c0) {
            ctx->pc = 0x1334FCu;
            goto label_1334fc;
        }
    }
    ctx->pc = 0x1334C8u;
label_1334c8:
    // 0x1334c8: 0x4bd8062c  vsub.xyz    $vf24, $vf0, $vf24
    ctx->pc = 0x1334c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x1334cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1334ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1334d0: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x1334d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1334d4: 0x4bc05adc  vmulq.xyz   $vf11, $vf11, $Q
    ctx->pc = 0x1334d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1334d8: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1334d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1334dc: 0x4bd851bc  vmulax.xyz  $ACC, $vf10, $vf24x
    ctx->pc = 0x1334dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1334e0: 0x4bd858bd  vmadday.xyz $ACC, $vf11, $vf24y
    ctx->pc = 0x1334e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1334e4: 0x4bd8634a  vmaddz.xyz  $vf13, $vf12, $vf24z
    ctx->pc = 0x1334e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1334e8: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1334e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1334ec: 0xf88b0010  sqc2        $vf11, 0x10($a0)
    ctx->pc = 0x1334ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1334f0: 0xf88c0020  sqc2        $vf12, 0x20($a0)
    ctx->pc = 0x1334f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1334f4: 0xf88d0030  sqc2        $vf13, 0x30($a0)
    ctx->pc = 0x1334f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1334f8: 0x20020001  addi        $v0, $zero, 0x1
    ctx->pc = 0x1334f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_1334fc:
    // 0x1334fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1334FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133504u;
    // 0x133504: 0x0  nop
    ctx->pc = 0x133504u;
    // NOP
    // 0x133508: 0x0  nop
    ctx->pc = 0x133508u;
    // NOP
    // 0x13350c: 0x0  nop
    ctx->pc = 0x13350cu;
    // NOP
}
