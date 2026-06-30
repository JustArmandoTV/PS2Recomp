#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133740
// Address: 0x133740 - 0x1337c0
void sub_00133740_0x133740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133740_0x133740");
#endif

    switch (ctx->pc) {
        case 0x133768u: goto label_133768;
        default: break;
    }

    ctx->pc = 0x133740u;

    // 0x133740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13374c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x133750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133754: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x133754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133758: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x133758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13375c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x13375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x133760: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x133760u;
    SET_GPR_U32(ctx, 31, 0x133768u);
    ctx->pc = 0x133764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133760u;
            // 0x133764: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133768u; }
        if (ctx->pc != 0x133768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133768u; }
        if (ctx->pc != 0x133768u) { return; }
    }
    ctx->pc = 0x133768u;
label_133768:
    // 0x133768: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13376c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x13376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x133770: 0x70644c88  pextlw      $t1, $v1, $a0
    ctx->pc = 0x133770u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x133774: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x133774u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x133778: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x133778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13377c: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x13377cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x133780: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x133780u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x133784: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x133784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x133788: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x133788u;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
    // 0x13378c: 0x4bc509bd  vmulay.xyz  $ACC, $vf1, $vf5y
    ctx->pc = 0x13378cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x133790: 0x4bc5198c  vmsubx.xyz  $vf6, $vf3, $vf5x
    ctx->pc = 0x133790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x133794: 0x4bc519bd  vmulay.xyz  $ACC, $vf3, $vf5y
    ctx->pc = 0x133794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x133798: 0x4bc508c8  vmaddx.xyz  $vf3, $vf1, $vf5x
    ctx->pc = 0x133798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13379c: 0xfa260000  sqc2        $vf6, 0x0($s1)
    ctx->pc = 0x13379cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1337a0: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x1337a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1337a4: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1337a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1337a8: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x1337a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1337ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1337acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1337b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1337b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1337b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1337b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1337b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1337B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1337BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1337B8u;
            // 0x1337bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1337C0u;
}
