#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001336C0
// Address: 0x1336c0 - 0x133740
void sub_001336C0_0x1336c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001336C0_0x1336c0");
#endif

    switch (ctx->pc) {
        case 0x1336e8u: goto label_1336e8;
        default: break;
    }

    ctx->pc = 0x1336c0u;

    // 0x1336c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1336c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1336c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1336c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1336c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1336c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1336cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1336ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1336d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1336d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1336d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1336d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336dc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1336dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1336e0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1336E0u;
    SET_GPR_U32(ctx, 31, 0x1336E8u);
    ctx->pc = 0x1336E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1336E0u;
            // 0x1336e4: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1336E8u; }
        if (ctx->pc != 0x1336E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1336E8u; }
        if (ctx->pc != 0x1336E8u) { return; }
    }
    ctx->pc = 0x1336E8u;
label_1336e8:
    // 0x1336e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1336e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1336ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1336ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1336f0: 0x70644c88  pextlw      $t1, $v1, $a0
    ctx->pc = 0x1336f0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1336f4: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x1336f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1336f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1336f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1336fc: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1336fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x133700: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x133700u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x133704: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x133704u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x133708: 0x4be6133c  vmove.xyzw  $vf6, $vf2
    ctx->pc = 0x133708u;
    ctx->vu0_vf[6] = ctx->vu0_vf[2];
    // 0x13370c: 0x4bc511bd  vmulay.xyz  $ACC, $vf2, $vf5y
    ctx->pc = 0x13370cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x133710: 0x4bc51988  vmaddx.xyz  $vf6, $vf3, $vf5x
    ctx->pc = 0x133710u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x133714: 0x4bc519bd  vmulay.xyz  $ACC, $vf3, $vf5y
    ctx->pc = 0x133714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x133718: 0x4bc510cc  vmsubx.xyz  $vf3, $vf2, $vf5x
    ctx->pc = 0x133718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13371c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x13371cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x133720: 0xfa260010  sqc2        $vf6, 0x10($s1)
    ctx->pc = 0x133720u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x133724: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x133724u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x133728: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x133728u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13372c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13372cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133738: 0x3e00008  jr          $ra
    ctx->pc = 0x133738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133738u;
            // 0x13373c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133740u;
}
