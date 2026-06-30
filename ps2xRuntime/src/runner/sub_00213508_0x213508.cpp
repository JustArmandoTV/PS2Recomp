#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213508
// Address: 0x213508 - 0x2138a0
void sub_00213508_0x213508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213508_0x213508");
#endif

    switch (ctx->pc) {
        case 0x213578u: goto label_213578;
        case 0x2135e8u: goto label_2135e8;
        case 0x213608u: goto label_213608;
        case 0x21361cu: goto label_21361c;
        default: break;
    }

    ctx->pc = 0x213508u;

    // 0x213508: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x213508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21350c: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x21350cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x213510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213514: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x213514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x213518: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x213518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x21351c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21351cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213520: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x213520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x213524: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213528: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x213528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x21352c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21352cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213530: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x213534: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x213534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213538: 0xda2a0000  lqc2        $vf10, 0x0($s1)
    ctx->pc = 0x213538u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21353c: 0xda490000  lqc2        $vf9, 0x0($s2)
    ctx->pc = 0x21353cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213540: 0x4bc952fe  vopmula.xyz $ACC, $vf10, $vf9
    ctx->pc = 0x213540u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[9]);
    // 0x213544: 0x4bca486e  vopmsub.xyz $vf1, $vf9, $vf10
    ctx->pc = 0x213544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[10]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213548: 0x4be70b3c  vmove.xyzw  $vf7, $vf1
    ctx->pc = 0x213548u;
    ctx->vu0_vf[7] = ctx->vu0_vf[1];
    // 0x21354c: 0x4bc7386a  vmul.xyz    $vf1, $vf7, $vf7
    ctx->pc = 0x21354cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213550: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x213550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213554: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x213554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213558: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x213558u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21355c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21355cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213564: 0x0  nop
    ctx->pc = 0x213564u;
    // NOP
    // 0x213568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x213568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21356c: 0x0  nop
    ctx->pc = 0x21356cu;
    // NOP
    // 0x213570: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x213570u;
    {
        const bool branch_taken_0x213570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213570u;
            // 0x213574: 0x4be83b3c  vmove.xyzw  $vf8, $vf7 (Delay Slot)
        ctx->vu0_vf[8] = ctx->vu0_vf[7];
        ctx->in_delay_slot = false;
        if (branch_taken_0x213570) {
            ctx->pc = 0x213624u;
            goto label_213624;
        }
    }
    ctx->pc = 0x213578u;
label_213578:
    // 0x213578: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x213578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21357c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213580: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x213580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x213584: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x213584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x213588: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x213588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x21358c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x21358cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x213590: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x213590u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x213594: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x213594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x213598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21359c: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x21359cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2135a0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2135a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2135a4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x2135a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2135a8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2135a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2135ac: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x2135acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2135b0: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2135b4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2135b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2135b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2135b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2135bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2135bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2135c0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2135c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2135c4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2135c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2135c8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2135c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2135cc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2135ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2135d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2135D0u;
    {
        const bool branch_taken_0x2135d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2135D0u;
            // 0x2135d4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135d0) {
            ctx->pc = 0x2135F8u;
            goto label_2135f8;
        }
    }
    ctx->pc = 0x2135D8u;
    // 0x2135d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2135d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135e0: 0xc084c9c  jal         func_213270
    ctx->pc = 0x2135E0u;
    SET_GPR_U32(ctx, 31, 0x2135E8u);
    ctx->pc = 0x2135E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2135E0u;
            // 0x2135e4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213270u;
    if (runtime->hasFunction(0x213270u)) {
        auto targetFn = runtime->lookupFunction(0x213270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135E8u; }
        if (ctx->pc != 0x2135E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213270_0x213270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135E8u; }
        if (ctx->pc != 0x2135E8u) { return; }
    }
    ctx->pc = 0x2135E8u;
label_2135e8:
    // 0x2135e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2135e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2135F0u;
    {
        const bool branch_taken_0x2135f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2135F0u;
            // 0x2135f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135f0) {
            ctx->pc = 0x213614u;
            goto label_213614;
        }
    }
    ctx->pc = 0x2135F8u;
label_2135f8:
    // 0x2135f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2135f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2135fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213600: 0xc084c9c  jal         func_213270
    ctx->pc = 0x213600u;
    SET_GPR_U32(ctx, 31, 0x213608u);
    ctx->pc = 0x213604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213600u;
            // 0x213604: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213270u;
    if (runtime->hasFunction(0x213270u)) {
        auto targetFn = runtime->lookupFunction(0x213270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213608u; }
        if (ctx->pc != 0x213608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213270_0x213270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213608u; }
        if (ctx->pc != 0x213608u) { return; }
    }
    ctx->pc = 0x213608u;
label_213608:
    // 0x213608: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x213608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21360c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213614:
    // 0x213614: 0xc084c9c  jal         func_213270
    ctx->pc = 0x213614u;
    SET_GPR_U32(ctx, 31, 0x21361Cu);
    ctx->pc = 0x213618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213614u;
            // 0x213618: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213270u;
    if (runtime->hasFunction(0x213270u)) {
        auto targetFn = runtime->lookupFunction(0x213270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21361Cu; }
        if (ctx->pc != 0x21361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213270_0x213270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21361Cu; }
        if (ctx->pc != 0x21361Cu) { return; }
    }
    ctx->pc = 0x21361Cu;
label_21361c:
    // 0x21361c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x21361Cu;
    {
        const bool branch_taken_0x21361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21361Cu;
            // 0x213620: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21361c) {
            ctx->pc = 0x213884u;
            goto label_213884;
        }
    }
    ctx->pc = 0x213624u;
label_213624:
    // 0x213624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21362c: 0x0  nop
    ctx->pc = 0x21362cu;
    // NOP
    // 0x213630: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x213630u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x213634: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x213634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x213638: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x213638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21363c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x21363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x213640: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x213640u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x213644: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x213644u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213648: 0x4be31068  vadd.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x213648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21364c: 0x4be64218  vmulx.xyzw  $vf8, $vf8, $vf6x
    ctx->pc = 0x21364cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x213650: 0x4bc1412a  vmul.xyz    $vf4, $vf8, $vf1
    ctx->pc = 0x213650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213654: 0x4b000143  vaddw.x     $vf5, $vf0, $vf0w
    ctx->pc = 0x213654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213658: 0x4b04203d  vadday.x    $ACC, $vf4, $vf4y
    ctx->pc = 0x213658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21365c: 0x4b04290a  vmaddz.x    $vf4, $vf5, $vf4z
    ctx->pc = 0x21365cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213660: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x213660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213668: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x213668u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21366c: 0x4bc2516a  vmul.xyz    $vf5, $vf10, $vf2
    ctx->pc = 0x21366cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213670: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w
    ctx->pc = 0x213670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213674: 0x4b05283d  vadday.x    $ACC, $vf5, $vf5y
    ctx->pc = 0x213674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213678: 0x4b05094a  vmaddz.x    $vf5, $vf1, $vf5z
    ctx->pc = 0x213678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21367c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213680: 0x4bc3486a  vmul.xyz    $vf1, $vf9, $vf3
    ctx->pc = 0x213680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213684: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x213684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213688: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x213688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21368c: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x21368cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213690: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x213690u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x213694: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x213694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x213698: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21369c: 0x4bc84afe  vopmula.xyz $ACC, $vf9, $vf8
    ctx->pc = 0x21369cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[8]);
    // 0x2136a0: 0x4bc940ae  vopmsub.xyz $vf2, $vf8, $vf9
    ctx->pc = 0x2136a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[9]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2136a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2136a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2136a8: 0x4bca42fe  vopmula.xyz $ACC, $vf8, $vf10
    ctx->pc = 0x2136a8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[10]);
    // 0x2136ac: 0x4bc850ee  vopmsub.xyz $vf3, $vf10, $vf8
    ctx->pc = 0x2136acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[8]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2136b0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2136b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2136b4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x2136b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2136b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2136b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2136bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2136bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2136c0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2136c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2136c4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2136c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2136c8: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x2136c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2136cc: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2136ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2136d0: 0x4be139bc  vmulax.xyzw $ACC, $vf7, $vf1x
    ctx->pc = 0x2136d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2136d4: 0x4be110bd  vmadday.xyzw $ACC, $vf2, $vf1y
    ctx->pc = 0x2136d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2136d8: 0x4be1184a  vmaddz.xyzw $vf1, $vf3, $vf1z
    ctx->pc = 0x2136d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2136dc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x2136dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2136e0: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x2136e0u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x2136e4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2136e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2136e8: 0x4be62118  vmulx.xyzw  $vf4, $vf4, $vf6x
    ctx->pc = 0x2136e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2136ec: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2136ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2136f0: 0x4be221fd  vabs.xyzw   $vf2, $vf4
    ctx->pc = 0x2136f0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[4], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2136f4: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2136f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2136f8: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x2136f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2136fc: 0x4be2082c  vsub.xyzw   $vf0, $vf1, $vf2
    ctx->pc = 0x2136fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x213700: 0x4a0002ff  vnop
    ctx->pc = 0x213700u;
    // NOP operation, no action needed for VU0
    // 0x213704: 0x4a0002ff  vnop
    ctx->pc = 0x213704u;
    // NOP operation, no action needed for VU0
    // 0x213708: 0x4a0002ff  vnop
    ctx->pc = 0x213708u;
    // NOP operation, no action needed for VU0
    // 0x21370c: 0x4a0002ff  vnop
    ctx->pc = 0x21370cu;
    // NOP operation, no action needed for VU0
    // 0x213710: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x213710u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar3);
    // 0x213714: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x213714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x213718: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213718u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21371c: 0x3043000e  andi        $v1, $v0, 0xE
    ctx->pc = 0x21371cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x213720: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x213720u;
    {
        const bool branch_taken_0x213720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213720u;
            // 0x213724: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213720) {
            ctx->pc = 0x213578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213578;
        }
    }
    ctx->pc = 0x213728u;
    // 0x213728: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x213728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x21372c: 0x4bc808ea  vmul.xyz    $vf3, $vf1, $vf8
    ctx->pc = 0x21372cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213730: 0x4b000143  vaddw.x     $vf5, $vf0, $vf0w
    ctx->pc = 0x213730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213734: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x213734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213738: 0x4b0328ca  vmaddz.x    $vf3, $vf5, $vf3z
    ctx->pc = 0x213738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21373c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x21373cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x213740: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x213740u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x213744: 0x4be410ac  vsub.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x213744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213748: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x213748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21374c: 0x4bc8112a  vmul.xyz    $vf4, $vf2, $vf8
    ctx->pc = 0x21374cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213750: 0x4b000183  vaddw.x     $vf6, $vf0, $vf0w
    ctx->pc = 0x213750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x213754: 0x4b04203d  vadday.x    $ACC, $vf4, $vf4y
    ctx->pc = 0x213754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213758: 0x4b04310a  vmaddz.x    $vf4, $vf6, $vf4z
    ctx->pc = 0x213758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21375c: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x21375cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x213760: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x213760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213764: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x213764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x213768: 0x4bc2106a  vmul.xyz    $vf1, $vf2, $vf2
    ctx->pc = 0x213768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21376c: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x21376cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213770: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x213770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213774: 0x4b01184a  vmaddz.x    $vf1, $vf3, $vf1z
    ctx->pc = 0x213774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213778: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x213778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21377c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21377cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213780: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x213780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x213784: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x213784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213788: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x213788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x21378c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x21378cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213790: 0x0  nop
    ctx->pc = 0x213790u;
    // NOP
    // 0x213794: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x213794u;
    {
        const bool branch_taken_0x213794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213794u;
            // 0x213798: 0x460010c0  add.s       $f3, $f2, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213794) {
            ctx->pc = 0x2137A8u;
            goto label_2137a8;
        }
    }
    ctx->pc = 0x21379Cu;
    // 0x21379c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x21379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2137a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2137A0u;
    {
        const bool branch_taken_0x2137a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2137A0u;
            // 0x2137a4: 0xc6410024  lwc1        $f1, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137a0) {
            ctx->pc = 0x2137B0u;
            goto label_2137b0;
        }
    }
    ctx->pc = 0x2137A8u;
label_2137a8:
    // 0x2137a8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2137a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2137ac: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x2137acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2137b0:
    // 0x2137b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2137b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2137b4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2137b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2137b8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2137b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2137bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2137bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2137c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2137c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2137c4: 0x46052982  mul.s       $f6, $f5, $f5
    ctx->pc = 0x2137c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2137c8: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2137c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2137cc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2137ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2137d0: 0xc642002c  lwc1        $f2, 0x2C($s2)
    ctx->pc = 0x2137d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2137d4: 0x46063801  sub.s       $f0, $f7, $f6
    ctx->pc = 0x2137d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x2137d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2137d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2137dc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2137dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2137e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2137e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2137e4: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x2137e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2137e8: 0x0  nop
    ctx->pc = 0x2137e8u;
    // NOP
    // 0x2137ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2137ECu;
    {
        const bool branch_taken_0x2137ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2137F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2137ECu;
            // 0x2137f0: 0x46040902  mul.s       $f4, $f1, $f4 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137ec) {
            ctx->pc = 0x213800u;
            goto label_213800;
        }
    }
    ctx->pc = 0x2137F4u;
    // 0x2137f4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2137f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2137f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2137F8u;
    {
        const bool branch_taken_0x2137f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2137F8u;
            // 0x2137fc: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137f8) {
            ctx->pc = 0x213880u;
            goto label_213880;
        }
    }
    ctx->pc = 0x213800u;
label_213800:
    // 0x213800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213808: 0x0  nop
    ctx->pc = 0x213808u;
    // NOP
    // 0x21380c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x21380cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213810: 0x0  nop
    ctx->pc = 0x213810u;
    // NOP
    // 0x213814: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x213814u;
    {
        const bool branch_taken_0x213814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213814) {
            ctx->pc = 0x213868u;
            goto label_213868;
        }
    }
    ctx->pc = 0x21381Cu;
    // 0x21381c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x21381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x213820: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x213820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x213824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213828: 0x0  nop
    ctx->pc = 0x213828u;
    // NOP
    // 0x21382c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x21382cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x213830: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x213830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213834: 0x0  nop
    ctx->pc = 0x213834u;
    // NOP
    // 0x213838: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x213838u;
    {
        const bool branch_taken_0x213838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213838) {
            ctx->pc = 0x213868u;
            goto label_213868;
        }
    }
    ctx->pc = 0x213840u;
    // 0x213840: 0x0  nop
    ctx->pc = 0x213840u;
    // NOP
    // 0x213844: 0x0  nop
    ctx->pc = 0x213844u;
    // NOP
    // 0x213848: 0x46050803  div.s       $f0, $f1, $f5
    ctx->pc = 0x213848u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[5];
    // 0x21384c: 0x46070084  c1          0x70084
    ctx->pc = 0x21384cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x213850: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x213850u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x213854: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x213854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x213858: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x213858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21385c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21385cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213860: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x213860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x213864: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x213864u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_213868:
    // 0x213868: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x213868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21386c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x21386cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213870: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x213870u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213874: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x213874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x213878: 0x4be24048  vmaddx.xyzw $vf1, $vf8, $vf2x
    ctx->pc = 0x213878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21387c: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x21387cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_213880:
    // 0x213880: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x213880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_213884:
    // 0x213884: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x213884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213888: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x213888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21388c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x21388cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x213890: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x213890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213894: 0x3e00008  jr          $ra
    ctx->pc = 0x213894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213894u;
            // 0x213898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21389Cu;
    // 0x21389c: 0x0  nop
    ctx->pc = 0x21389cu;
    // NOP
}
