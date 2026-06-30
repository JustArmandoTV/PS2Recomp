#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CA70
// Address: 0x13ca70 - 0x13cae0
void sub_0013CA70_0x13ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CA70_0x13ca70");
#endif

    switch (ctx->pc) {
        case 0x13ca90u: goto label_13ca90;
        default: break;
    }

    ctx->pc = 0x13ca70u;

    // 0x13ca70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ca74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ca78: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x13ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x13ca7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ca80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ca80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca88: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CA88u;
    SET_GPR_U32(ctx, 31, 0x13CA90u);
    ctx->pc = 0x13CA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA88u;
            // 0x13ca8c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA90u; }
        if (ctx->pc != 0x13CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA90u; }
        if (ctx->pc != 0x13CA90u) { return; }
    }
    ctx->pc = 0x13CA90u;
label_13ca90:
    // 0x13ca90: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13ca94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ca98: 0x70644488  pextlw      $t0, $v1, $a0
    ctx->pc = 0x13ca98u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13ca9c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13ca9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13caa0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x13caa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13caa4: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x13caa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13caa8: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x13caa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13caac: 0x4b000183  vaddw.x     $vf6, $vf0, $vf0w
    ctx->pc = 0x13caacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cab0: 0x4a8401c1  vaddy.y     $vf7, $vf0, $vf4y
    ctx->pc = 0x13cab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cab4: 0x4a4401c0  vaddx.z     $vf7, $vf0, $vf4x
    ctx->pc = 0x13cab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cab8: 0x4a840204  vsubx.y     $vf8, $vf0, $vf4x
    ctx->pc = 0x13cab8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cabc: 0x4a440201  vaddy.z     $vf8, $vf0, $vf4y
    ctx->pc = 0x13cabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cac0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x13cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cac4: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x13cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13cac8: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x13cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13cacc: 0xfa080020  sqc2        $vf8, 0x20($s0)
    ctx->pc = 0x13caccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x13cad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cad8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CAD8u;
            // 0x13cadc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CAE0u;
}
