#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002116E8
// Address: 0x2116e8 - 0x2117d0
void sub_002116E8_0x2116e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002116E8_0x2116e8");
#endif

    switch (ctx->pc) {
        case 0x211738u: goto label_211738;
        case 0x211758u: goto label_211758;
        case 0x21179cu: goto label_21179c;
        default: break;
    }

    ctx->pc = 0x2116e8u;

    // 0x2116e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2116e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2116ec: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2116ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2116f0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2116f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2116f4: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2116f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2116f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2116f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2116fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2116fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211700: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x211700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x211704: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x211704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x211708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x211708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21170c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x21170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x211710: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x211714: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x211714u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211718: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x211718u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21171c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x211720: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x211720u;
    {
        const bool branch_taken_0x211720 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x211724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211720u;
            // 0x211724: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211720) {
            ctx->pc = 0x2117ACu;
            goto label_2117ac;
        }
    }
    ctx->pc = 0x211728u;
    // 0x211728: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x211728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21172c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21172cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211730: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x211730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211734: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x211734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_211738:
    // 0x211738: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x211738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x21173c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x211740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x211740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211744: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x211744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211748: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x211748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21174c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x21174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x211750: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211750u;
    SET_GPR_U32(ctx, 31, 0x211758u);
    ctx->pc = 0x211754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211750u;
            // 0x211754: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211758u; }
        if (ctx->pc != 0x211758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211758u; }
        if (ctx->pc != 0x211758u) { return; }
    }
    ctx->pc = 0x211758u;
label_211758:
    // 0x211758: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x211758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x21175c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x21175cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x211760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211764: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x211764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211768: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x211768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21176c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x21176cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211770: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x211770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x211774: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x211774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211778: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x21177c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x21177cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211780: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x211780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x211784: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x211784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x211788: 0x269403c0  addiu       $s4, $s4, 0x3C0
    ctx->pc = 0x211788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x21178c: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x21178cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x211790: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x211790u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211794: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211794u;
    SET_GPR_U32(ctx, 31, 0x21179Cu);
    ctx->pc = 0x211798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211794u;
            // 0x211798: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21179Cu; }
        if (ctx->pc != 0x21179Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21179Cu; }
        if (ctx->pc != 0x21179Cu) { return; }
    }
    ctx->pc = 0x21179Cu;
label_21179c:
    // 0x21179c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2117a0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2117a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2117a4: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2117A4u;
    {
        const bool branch_taken_0x2117a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2117a4) {
            ctx->pc = 0x2117A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2117A4u;
            // 0x2117a8: 0x8e30002c  lw          $s0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211738;
        }
    }
    ctx->pc = 0x2117ACu;
label_2117ac:
    // 0x2117ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2117acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2117b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2117b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2117b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2117b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2117b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2117b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2117bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2117bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2117c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2117c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2117c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2117c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2117c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2117C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2117C8u;
            // 0x2117cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2117D0u;
}
