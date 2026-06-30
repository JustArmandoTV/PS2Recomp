#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CAE0
// Address: 0x13cae0 - 0x13cb50
void sub_0013CAE0_0x13cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CAE0_0x13cae0");
#endif

    switch (ctx->pc) {
        case 0x13cb00u: goto label_13cb00;
        default: break;
    }

    ctx->pc = 0x13cae0u;

    // 0x13cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13cae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cae8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x13caec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13caf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13caf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13caf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caf8: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CAF8u;
    SET_GPR_U32(ctx, 31, 0x13CB00u);
    ctx->pc = 0x13CAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CAF8u;
            // 0x13cafc: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB00u; }
        if (ctx->pc != 0x13CB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB00u; }
        if (ctx->pc != 0x13CB00u) { return; }
    }
    ctx->pc = 0x13CB00u;
label_13cb00:
    // 0x13cb00: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x13cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13cb04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13cb08: 0x70644488  pextlw      $t0, $v1, $a0
    ctx->pc = 0x13cb08u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13cb0c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13cb0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13cb10: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x13cb10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cb14: 0x4aa001ac  vsub.yw     $vf6, $vf0, $vf0
    ctx->pc = 0x13cb14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cb18: 0x4aa0022c  vsub.yw     $vf8, $vf0, $vf0
    ctx->pc = 0x13cb18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cb1c: 0x4a8001c3  vaddw.y     $vf7, $vf0, $vf0w
    ctx->pc = 0x13cb1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cb20: 0x4a440184  vsubx.z     $vf6, $vf0, $vf4x
    ctx->pc = 0x13cb20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cb24: 0x4a440201  vaddy.z     $vf8, $vf0, $vf4y
    ctx->pc = 0x13cb24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cb28: 0x4b040181  vaddy.x     $vf6, $vf0, $vf4y
    ctx->pc = 0x13cb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cb2c: 0x4b040200  vaddx.x     $vf8, $vf0, $vf4x
    ctx->pc = 0x13cb2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cb30: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x13cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cb34: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x13cb34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13cb38: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x13cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13cb3c: 0xfa080020  sqc2        $vf8, 0x20($s0)
    ctx->pc = 0x13cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x13cb40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cb48: 0x3e00008  jr          $ra
    ctx->pc = 0x13CB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB48u;
            // 0x13cb4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CB50u;
}
