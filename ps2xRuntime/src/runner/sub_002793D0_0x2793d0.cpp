#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002793D0
// Address: 0x2793d0 - 0x2794e0
void sub_002793D0_0x2793d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002793D0_0x2793d0");
#endif

    switch (ctx->pc) {
        case 0x2794ccu: goto label_2794cc;
        default: break;
    }

    ctx->pc = 0x2793d0u;

    // 0x2793d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2793d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2793d4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2793d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2793d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2793d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2793dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2793dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793e0: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x2793e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x2793e4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2793e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2793e8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2793e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x2793ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2793ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2793f0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2793f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2793f4: 0x25480010  addiu       $t0, $t2, 0x10
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2793f8: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x2793f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2793fc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2793fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x279400: 0xd8ea0000  lqc2        $vf10, 0x0($a3)
    ctx->pc = 0x279400u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x279404: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x279404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x279408: 0x48a25800  qmtc2.ni    $v0, $vf11
    ctx->pc = 0x279408u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x27940c: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x27940cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279410: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x279410u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279414: 0xd8c70010  lqc2        $vf7, 0x10($a2)
    ctx->pc = 0x279414u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x279418: 0xd8c80020  lqc2        $vf8, 0x20($a2)
    ctx->pc = 0x279418u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x27941c: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x27941cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x279420: 0x4bca3198  vmulx.xyz   $vf6, $vf6, $vf10x
    ctx->pc = 0x279420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x279424: 0x4bca39d9  vmuly.xyz   $vf7, $vf7, $vf10y
    ctx->pc = 0x279424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x279428: 0x4bca421a  vmulz.xyz   $vf8, $vf8, $vf10z
    ctx->pc = 0x279428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x27942c: 0x4be631fd  vabs.xyzw   $vf6, $vf6
    ctx->pc = 0x27942cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[6], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x279430: 0x4be739fd  vabs.xyzw   $vf7, $vf7
    ctx->pc = 0x279430u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[7], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x279434: 0x4bcb3180  vaddx.xyz   $vf6, $vf6, $vf11x
    ctx->pc = 0x279434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x279438: 0x4be841fd  vabs.xyzw   $vf8, $vf8
    ctx->pc = 0x279438u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[8], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x27943c: 0x4bc731e8  vadd.xyz    $vf7, $vf6, $vf7
    ctx->pc = 0x27943cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x279440: 0x4bc92a6c  vsub.xyz    $vf9, $vf5, $vf9
    ctx->pc = 0x279440u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x279444: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x279444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x279448: 0x4bc701ac  vsub.xyz    $vf6, $vf0, $vf7
    ctx->pc = 0x279448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x27944c: 0x4bc931a8  vadd.xyz    $vf6, $vf6, $vf9
    ctx->pc = 0x27944cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x279450: 0x4bc939e8  vadd.xyz    $vf7, $vf7, $vf9
    ctx->pc = 0x279450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x279454: 0x4be9319b  vmulw.xyzw  $vf6, $vf6, $vf9w
    ctx->pc = 0x279454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x279458: 0x4be939db  vmulw.xyzw  $vf7, $vf7, $vf9w
    ctx->pc = 0x279458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x27945c: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x27945cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x279460: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x279460u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279464: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x279464u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x279468: 0x4be7397c  vftoi0.xyzw $vf7, $vf7
    ctx->pc = 0x279468u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x27946c: 0x48243000  qmfc2.ni    $a0, $vf6
    ctx->pc = 0x27946cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x279470: 0x48253800  qmfc2.ni    $a1, $vf7
    ctx->pc = 0x279470u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x279474: 0xf9060010  sqc2        $vf6, 0x10($t0)
    ctx->pc = 0x279474u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x279478: 0xf9070000  sqc2        $vf7, 0x0($t0)
    ctx->pc = 0x279478u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x27947c: 0x7004243f  psraw       $a0, $a0, 16
    ctx->pc = 0x27947cu;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi32(GPR_VEC(ctx, 4), 16));
    // 0x279480: 0x70052c3f  psraw       $a1, $a1, 16
    ctx->pc = 0x279480u;
    SET_GPR_VEC(ctx, 5, _mm_srai_epi32(GPR_VEC(ctx, 5), 16));
    // 0x279484: 0x70a32808  paddw       $a1, $a1, $v1
    ctx->pc = 0x279484u;
    SET_GPR_VEC(ctx, 5, PS2_PADDW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x279488: 0x7d240010  sq          $a0, 0x10($t1)
    ctx->pc = 0x279488u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 4));
    // 0x27948c: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x27948cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x279490: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x279490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x279494: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x279494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x279498: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x279498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x27949c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x27949cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2794a0: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2794a4: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x2794a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2794a8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2794a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2794ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2794ACu;
    {
        const bool branch_taken_0x2794ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2794B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2794ACu;
            // 0x2794b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794ac) {
            ctx->pc = 0x2794B8u;
            goto label_2794b8;
        }
    }
    ctx->pc = 0x2794B4u;
    // 0x2794b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2794b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2794b8:
    // 0x2794b8: 0xad420034  sw          $v0, 0x34($t2)
    ctx->pc = 0x2794b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 2));
    // 0x2794bc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2794bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2794c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2794c4: 0xc09e1f8  jal         func_2787E0
    ctx->pc = 0x2794C4u;
    SET_GPR_U32(ctx, 31, 0x2794CCu);
    ctx->pc = 0x2794C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2794C4u;
            // 0x2794c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2787E0u;
    if (runtime->hasFunction(0x2787E0u)) {
        auto targetFn = runtime->lookupFunction(0x2787E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2794CCu; }
        if (ctx->pc != 0x2794CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002787E0_0x2787e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2794CCu; }
        if (ctx->pc != 0x2794CCu) { return; }
    }
    ctx->pc = 0x2794CCu;
label_2794cc:
    // 0x2794cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2794ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2794d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2794D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2794D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2794D0u;
            // 0x2794d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2794D8u;
    // 0x2794d8: 0x0  nop
    ctx->pc = 0x2794d8u;
    // NOP
    // 0x2794dc: 0x0  nop
    ctx->pc = 0x2794dcu;
    // NOP
}
