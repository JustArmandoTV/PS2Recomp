#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CB50
// Address: 0x13cb50 - 0x13cbc0
void sub_0013CB50_0x13cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CB50_0x13cb50");
#endif

    switch (ctx->pc) {
        case 0x13cb70u: goto label_13cb70;
        default: break;
    }

    ctx->pc = 0x13cb50u;

    // 0x13cb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13cb54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cb58: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x13cb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x13cb5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cb60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13cb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb68: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CB68u;
    SET_GPR_U32(ctx, 31, 0x13CB70u);
    ctx->pc = 0x13CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB68u;
            // 0x13cb6c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB70u; }
        if (ctx->pc != 0x13CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB70u; }
        if (ctx->pc != 0x13CB70u) { return; }
    }
    ctx->pc = 0x13CB70u;
label_13cb70:
    // 0x13cb70: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x13cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13cb74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13cb78: 0x70834488  pextlw      $t0, $a0, $v1
    ctx->pc = 0x13cb78u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x13cb7c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13cb7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13cb80: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x13cb80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cb84: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x13cb84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cb88: 0x4be8033d  vmr32.xyzw  $vf8, $vf0
    ctx->pc = 0x13cb88u;
    ctx->vu0_vf[8] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x13cb8c: 0x4b8401a8  vadd.xy     $vf6, $vf0, $vf4
    ctx->pc = 0x13cb8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cb90: 0x4b0401c5  vsuby.x     $vf7, $vf0, $vf4y
    ctx->pc = 0x13cb90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cb94: 0x4a8401c0  vaddx.y     $vf7, $vf0, $vf4x
    ctx->pc = 0x13cb94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cb98: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x13cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cb9c: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x13cb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13cba0: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x13cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13cba4: 0xfa080020  sqc2        $vf8, 0x20($s0)
    ctx->pc = 0x13cba4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x13cba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x13CBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBB0u;
            // 0x13cbb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CBB8u;
    // 0x13cbb8: 0x0  nop
    ctx->pc = 0x13cbb8u;
    // NOP
    // 0x13cbbc: 0x0  nop
    ctx->pc = 0x13cbbcu;
    // NOP
}
