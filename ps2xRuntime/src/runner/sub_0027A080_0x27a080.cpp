#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A080
// Address: 0x27a080 - 0x27a110
void sub_0027A080_0x27a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A080_0x27a080");
#endif

    switch (ctx->pc) {
        case 0x27a0f8u: goto label_27a0f8;
        default: break;
    }

    ctx->pc = 0x27a080u;

    // 0x27a080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a084: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x27a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x27a088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a08c: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x27a08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x27a090: 0x8ca90020  lw          $t1, 0x20($a1)
    ctx->pc = 0x27a090u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x27a094: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27a098: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x27a098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x27a09c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27a09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a0a0: 0x200a0001  addi        $t2, $zero, 0x1
    ctx->pc = 0x27a0a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x27a0a4: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x27a0a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27a0a8: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x27a0a8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a0ac: 0x4be00228  vadd.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x27a0acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x27a0b0: 0x4bc731ac  vsub.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x27a0b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x27a0b4: 0x71405488  pextlw      $t2, $t2, $zero
    ctx->pc = 0x27a0b4u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x27a0b8: 0x4be7319b  vmulw.xyzw  $vf6, $vf6, $vf7w
    ctx->pc = 0x27a0b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x27a0bc: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x27a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x27a0c0: 0x4be831a8  vadd.xyzw   $vf6, $vf6, $vf8
    ctx->pc = 0x27a0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x27a0c4: 0x4be7317c  vftoi0.xyzw $vf7, $vf6
    ctx->pc = 0x27a0c4u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x27a0c8: 0x71405488  pextlw      $t2, $t2, $zero
    ctx->pc = 0x27a0c8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLW(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x27a0cc: 0xf9070000  sqc2        $vf7, 0x0($t0)
    ctx->pc = 0x27a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x27a0d0: 0x48283800  qmfc2.ni    $t0, $vf7
    ctx->pc = 0x27a0d0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x27a0d4: 0x7008443f  psraw       $t0, $t0, 16
    ctx->pc = 0x27a0d4u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi32(GPR_VEC(ctx, 8), 16));
    // 0x27a0d8: 0x710a4008  paddw       $t0, $t0, $t2
    ctx->pc = 0x27a0d8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x27a0dc: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x27a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x27a0e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x27a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27a0e4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x27a0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0e8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x27a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x27a0ec: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x27a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x27a0f0: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x27A0F0u;
    SET_GPR_U32(ctx, 31, 0x27A0F8u);
    ctx->pc = 0x27A0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0F0u;
            // 0x27a0f4: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2796A0u;
    if (runtime->hasFunction(0x2796A0u)) {
        auto targetFn = runtime->lookupFunction(0x2796A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A0F8u; }
        if (ctx->pc != 0x27A0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002796A0_0x2796a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A0F8u; }
        if (ctx->pc != 0x27A0F8u) { return; }
    }
    ctx->pc = 0x27A0F8u;
label_27a0f8:
    // 0x27a0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0FCu;
            // 0x27a100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A104u;
    // 0x27a104: 0x0  nop
    ctx->pc = 0x27a104u;
    // NOP
    // 0x27a108: 0x0  nop
    ctx->pc = 0x27a108u;
    // NOP
    // 0x27a10c: 0x0  nop
    ctx->pc = 0x27a10cu;
    // NOP
}
