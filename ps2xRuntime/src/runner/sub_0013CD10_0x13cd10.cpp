#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CD10
// Address: 0x13cd10 - 0x13ce00
void sub_0013CD10_0x13cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CD10_0x13cd10");
#endif

    switch (ctx->pc) {
        case 0x13cd40u: goto label_13cd40;
        case 0x13cd50u: goto label_13cd50;
        case 0x13cd60u: goto label_13cd60;
        default: break;
    }

    ctx->pc = 0x13cd10u;

    // 0x13cd10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13cd14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13cd18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13cd1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13cd20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13cd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cd28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13cd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd30: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x13cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x13cd34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd38: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CD38u;
    SET_GPR_U32(ctx, 31, 0x13CD40u);
    ctx->pc = 0x13CD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD38u;
            // 0x13cd3c: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD40u; }
        if (ctx->pc != 0x13CD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD40u; }
        if (ctx->pc != 0x13CD40u) { return; }
    }
    ctx->pc = 0x13CD40u;
label_13cd40:
    // 0x13cd40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13cd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd44: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x13cd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x13cd48: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CD48u;
    SET_GPR_U32(ctx, 31, 0x13CD50u);
    ctx->pc = 0x13CD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD48u;
            // 0x13cd4c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD50u; }
        if (ctx->pc != 0x13CD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD50u; }
        if (ctx->pc != 0x13CD50u) { return; }
    }
    ctx->pc = 0x13CD50u;
label_13cd50:
    // 0x13cd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13cd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd54: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x13cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13cd58: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CD58u;
    SET_GPR_U32(ctx, 31, 0x13CD60u);
    ctx->pc = 0x13CD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD58u;
            // 0x13cd5c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD60u; }
        if (ctx->pc != 0x13CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD60u; }
        if (ctx->pc != 0x13CD60u) { return; }
    }
    ctx->pc = 0x13CD60u;
label_13cd60:
    // 0x13cd60: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x13cd60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13cd64: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cd68: 0x8fa9005c  lw          $t1, 0x5C($sp)
    ctx->pc = 0x13cd68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x13cd6c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x13cd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13cd70: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x13cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13cd74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13cd78: 0x70a64488  pextlw      $t0, $a1, $a2
    ctx->pc = 0x13cd78u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x13cd7c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13cd7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13cd80: 0x4aa0006c  vsub.yw     $vf1, $vf0, $vf0
    ctx->pc = 0x13cd80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cd84: 0x4b040041  vaddy.x     $vf1, $vf0, $vf4y
    ctx->pc = 0x13cd84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cd88: 0x4a440044  vsubx.z     $vf1, $vf0, $vf4x
    ctx->pc = 0x13cd88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cd8c: 0x4b6000ac  vsub.xzw    $vf2, $vf0, $vf0
    ctx->pc = 0x13cd8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cd90: 0x4a800083  vaddw.y     $vf2, $vf0, $vf0w
    ctx->pc = 0x13cd90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cd94: 0x4aa000ec  vsub.yw     $vf3, $vf0, $vf0
    ctx->pc = 0x13cd94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cd98: 0x4b0400c0  vaddx.x     $vf3, $vf0, $vf4x
    ctx->pc = 0x13cd98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cd9c: 0x4a4400c1  vaddy.z     $vf3, $vf0, $vf4y
    ctx->pc = 0x13cd9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cda0: 0x70644488  pextlw      $t0, $v1, $a0
    ctx->pc = 0x13cda0u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13cda4: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13cda4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13cda8: 0x4a20016c  vsub.w      $vf5, $vf0, $vf0
    ctx->pc = 0x13cda8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13cdac: 0x4bc409bd  vmulay.xyz  $ACC, $vf1, $vf4y
    ctx->pc = 0x13cdacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13cdb0: 0x4bc41148  vmaddx.xyz  $vf5, $vf2, $vf4x
    ctx->pc = 0x13cdb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cdb4: 0x4bc411bd  vmulay.xyz  $ACC, $vf2, $vf4y
    ctx->pc = 0x13cdb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13cdb8: 0x4bc4088c  vmsubx.xyz  $vf2, $vf1, $vf4x
    ctx->pc = 0x13cdb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cdbc: 0x70e94488  pextlw      $t0, $a3, $t1
    ctx->pc = 0x13cdbcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 9)));
    // 0x13cdc0: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13cdc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13cdc4: 0x4a2001ac  vsub.w      $vf6, $vf0, $vf0
    ctx->pc = 0x13cdc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cdc8: 0x4bc411bd  vmulay.xyz  $ACC, $vf2, $vf4y
    ctx->pc = 0x13cdc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13cdcc: 0x4bc41988  vmaddx.xyz  $vf6, $vf3, $vf4x
    ctx->pc = 0x13cdccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cdd0: 0x4bc419bd  vmulay.xyz  $ACC, $vf3, $vf4y
    ctx->pc = 0x13cdd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13cdd4: 0x4bc410cc  vmsubx.xyz  $vf3, $vf2, $vf4x
    ctx->pc = 0x13cdd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cdd8: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x13cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cddc: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x13cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13cde0: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x13cde0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13cde4: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x13cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13cde8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13cde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cdec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13cdecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cdf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cdf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDF8u;
            // 0x13cdfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CE00u;
}
