#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CC20
// Address: 0x13cc20 - 0x13cd10
void sub_0013CC20_0x13cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CC20_0x13cc20");
#endif

    switch (ctx->pc) {
        case 0x13cc50u: goto label_13cc50;
        case 0x13cc60u: goto label_13cc60;
        case 0x13cc70u: goto label_13cc70;
        default: break;
    }

    ctx->pc = 0x13cc20u;

    // 0x13cc20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13cc24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13cc28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13cc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13cc30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13cc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cc38: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13cc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc40: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x13cc44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc48: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CC48u;
    SET_GPR_U32(ctx, 31, 0x13CC50u);
    ctx->pc = 0x13CC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC48u;
            // 0x13cc4c: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC50u; }
        if (ctx->pc != 0x13CC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC50u; }
        if (ctx->pc != 0x13CC50u) { return; }
    }
    ctx->pc = 0x13CC50u;
label_13cc50:
    // 0x13cc50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc54: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x13cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x13cc58: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CC58u;
    SET_GPR_U32(ctx, 31, 0x13CC60u);
    ctx->pc = 0x13CC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC58u;
            // 0x13cc5c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC60u; }
        if (ctx->pc != 0x13CC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC60u; }
        if (ctx->pc != 0x13CC60u) { return; }
    }
    ctx->pc = 0x13CC60u;
label_13cc60:
    // 0x13cc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13cc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc64: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x13cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13cc68: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CC68u;
    SET_GPR_U32(ctx, 31, 0x13CC70u);
    ctx->pc = 0x13CC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC68u;
            // 0x13cc6c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC70u; }
        if (ctx->pc != 0x13CC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC70u; }
        if (ctx->pc != 0x13CC70u) { return; }
    }
    ctx->pc = 0x13CC70u;
label_13cc70:
    // 0x13cc70: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x13cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13cc74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13cc78: 0x8fa9005c  lw          $t1, 0x5C($sp)
    ctx->pc = 0x13cc78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x13cc7c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x13cc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13cc80: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13cc84: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cc88: 0x70834488  pextlw      $t0, $a0, $v1
    ctx->pc = 0x13cc88u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x13cc8c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13cc8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13cc90: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13cc90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cc94: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x13cc94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cc98: 0x4be3033d  vmr32.xyzw  $vf3, $vf0
    ctx->pc = 0x13cc98u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x13cc9c: 0x4b840068  vadd.xy     $vf1, $vf0, $vf4
    ctx->pc = 0x13cc9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cca0: 0x4b040085  vsuby.x     $vf2, $vf0, $vf4y
    ctx->pc = 0x13cca0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cca4: 0x4a840080  vaddx.y     $vf2, $vf0, $vf4x
    ctx->pc = 0x13cca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cca8: 0x70a64488  pextlw      $t0, $a1, $a2
    ctx->pc = 0x13cca8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x13ccac: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13ccacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13ccb0: 0x4a20016c  vsub.w      $vf5, $vf0, $vf0
    ctx->pc = 0x13ccb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13ccb4: 0x4bc409bd  vmulay.xyz  $ACC, $vf1, $vf4y
    ctx->pc = 0x13ccb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13ccb8: 0x4bc4194c  vmsubx.xyz  $vf5, $vf3, $vf4x
    ctx->pc = 0x13ccb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13ccbc: 0x4bc419bd  vmulay.xyz  $ACC, $vf3, $vf4y
    ctx->pc = 0x13ccbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13ccc0: 0x4bc408c8  vmaddx.xyz  $vf3, $vf1, $vf4x
    ctx->pc = 0x13ccc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13ccc4: 0x70e94488  pextlw      $t0, $a3, $t1
    ctx->pc = 0x13ccc4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 9)));
    // 0x13ccc8: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x13ccc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13cccc: 0x4a2001ac  vsub.w      $vf6, $vf0, $vf0
    ctx->pc = 0x13ccccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13ccd0: 0x4bc411bd  vmulay.xyz  $ACC, $vf2, $vf4y
    ctx->pc = 0x13ccd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13ccd4: 0x4bc41988  vmaddx.xyz  $vf6, $vf3, $vf4x
    ctx->pc = 0x13ccd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13ccd8: 0x4bc419bd  vmulay.xyz  $ACC, $vf3, $vf4y
    ctx->pc = 0x13ccd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13ccdc: 0x4bc410cc  vmsubx.xyz  $vf3, $vf2, $vf4x
    ctx->pc = 0x13ccdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cce0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x13cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cce4: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x13cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13cce8: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x13cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13ccec: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x13ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ccf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ccf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ccf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ccf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ccf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ccfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ccfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cd00: 0x3e00008  jr          $ra
    ctx->pc = 0x13CD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD00u;
            // 0x13cd04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CD08u;
    // 0x13cd08: 0x0  nop
    ctx->pc = 0x13cd08u;
    // NOP
    // 0x13cd0c: 0x0  nop
    ctx->pc = 0x13cd0cu;
    // NOP
}
