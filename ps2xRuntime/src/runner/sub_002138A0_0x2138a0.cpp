#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002138A0
// Address: 0x2138a0 - 0x213b38
void sub_002138A0_0x2138a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002138A0_0x2138a0");
#endif

    switch (ctx->pc) {
        case 0x213950u: goto label_213950;
        case 0x213960u: goto label_213960;
        case 0x2139f8u: goto label_2139f8;
        case 0x213a1cu: goto label_213a1c;
        case 0x213a40u: goto label_213a40;
        default: break;
    }

    ctx->pc = 0x2138a0u;

    // 0x2138a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2138a4: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x2138a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x2138a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2138a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2138ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2138acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2138b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2138b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2138b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2138b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2138b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2138bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2138bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138c0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2138c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2138c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2138c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2138c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2138cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2138ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2138d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2138d4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2138d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2138d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2138dc: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2138dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138e0: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2138e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2138e4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2138e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2138e8: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x2138e8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x2138ec: 0x4bc209ee  vopmsub.xyz $vf7, $vf1, $vf2
    ctx->pc = 0x2138ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2138f0: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x2138f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2138f4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2138f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2138f8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2138f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2138fc: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x2138fcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x213900: 0x4bc20a6e  vopmsub.xyz $vf9, $vf1, $vf2
    ctx->pc = 0x213900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213904: 0xfba90010  sqc2        $vf9, 0x10($sp)
    ctx->pc = 0x213904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x213908: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x213908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21390c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x21390cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x213910: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x213910u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x213914: 0x4bc20a2e  vopmsub.xyz $vf8, $vf1, $vf2
    ctx->pc = 0x213914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213918: 0xfba80020  sqc2        $vf8, 0x20($sp)
    ctx->pc = 0x213918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x21391c: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x21391cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213920: 0x4bc3386a  vmul.xyz    $vf1, $vf7, $vf3
    ctx->pc = 0x213920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213924: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x213924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213928: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x213928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21392c: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x21392cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213930: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x213930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213934: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x213934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213938: 0x0  nop
    ctx->pc = 0x213938u;
    // NOP
    // 0x21393c: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x21393cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x213940: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213944: 0x0  nop
    ctx->pc = 0x213944u;
    // NOP
    // 0x213948: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x213948u;
    {
        const bool branch_taken_0x213948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213948) {
            ctx->pc = 0x21394Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213948u;
            // 0x21394c: 0xda210010  lqc2        $vf1, 0x10($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213A48u;
            goto label_213a48;
        }
    }
    ctx->pc = 0x213950u;
label_213950:
    // 0x213950: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x213950u;
    {
        const bool branch_taken_0x213950 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x213950) {
            ctx->pc = 0x213954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213950u;
            // 0x213954: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213970u;
            goto label_213970;
        }
    }
    ctx->pc = 0x213958u;
    // 0x213958: 0xc084c50  jal         func_213140
    ctx->pc = 0x213958u;
    SET_GPR_U32(ctx, 31, 0x213960u);
    ctx->pc = 0x21395Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213958u;
            // 0x21395c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213140u;
    if (runtime->hasFunction(0x213140u)) {
        auto targetFn = runtime->lookupFunction(0x213140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213960u; }
        if (ctx->pc != 0x213960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213140_0x213140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213960u; }
        if (ctx->pc != 0x213960u) { return; }
    }
    ctx->pc = 0x213960u;
label_213960:
    // 0x213960: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x213960u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x213964: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x213964u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x213968: 0x8e12001c  lw          $s2, 0x1C($s0)
    ctx->pc = 0x213968u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21396c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x21396cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_213970:
    // 0x213970: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x213970u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213974: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x213974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x213978: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x213978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21397c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x21397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x213980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213984: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x213988: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x213988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21398c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x21398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x213990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213994: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x213994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x213998: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x213998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21399c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21399cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2139a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2139a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2139a4: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x2139a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x2139a8: 0x8e090038  lw          $t1, 0x38($s0)
    ctx->pc = 0x2139a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2139ac: 0x8e0a003c  lw          $t2, 0x3C($s0)
    ctx->pc = 0x2139acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2139b0: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x2139b4: 0x8d430024  lw          $v1, 0x24($t2)
    ctx->pc = 0x2139b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x2139b8: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x2139b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2139bc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2139bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2139c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2139c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2139c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2139c8: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x2139c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x2139cc: 0x8e090038  lw          $t1, 0x38($s0)
    ctx->pc = 0x2139ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2139d0: 0x8e0a003c  lw          $t2, 0x3C($s0)
    ctx->pc = 0x2139d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2139d4: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x2139d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x2139d8: 0x8d430024  lw          $v1, 0x24($t2)
    ctx->pc = 0x2139d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x2139dc: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2139dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2139e0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2139e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2139e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2139e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2139e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2139e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2139ec: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x2139ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x2139f0: 0xc084d42  jal         func_213508
    ctx->pc = 0x2139F0u;
    SET_GPR_U32(ctx, 31, 0x2139F8u);
    ctx->pc = 0x2139F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2139F0u;
            // 0x2139f4: 0x8e140030  lw          $s4, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213508u;
    if (runtime->hasFunction(0x213508u)) {
        auto targetFn = runtime->lookupFunction(0x213508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139F8u; }
        if (ctx->pc != 0x2139F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213508_0x213508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2139F8u; }
        if (ctx->pc != 0x2139F8u) { return; }
    }
    ctx->pc = 0x2139F8u;
label_2139f8:
    // 0x2139f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2139f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2139fc: 0x56820046  bnel        $s4, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2139FCu;
    {
        const bool branch_taken_0x2139fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2139fc) {
            ctx->pc = 0x213A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2139FCu;
            // 0x213a00: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213B18u;
            goto label_213b18;
        }
    }
    ctx->pc = 0x213A04u;
    // 0x213a04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x213a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a10: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x213a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a14: 0xc084d42  jal         func_213508
    ctx->pc = 0x213A14u;
    SET_GPR_U32(ctx, 31, 0x213A1Cu);
    ctx->pc = 0x213A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A14u;
            // 0x213a18: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213508u;
    if (runtime->hasFunction(0x213508u)) {
        auto targetFn = runtime->lookupFunction(0x213508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A1Cu; }
        if (ctx->pc != 0x213A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213508_0x213508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A1Cu; }
        if (ctx->pc != 0x213A1Cu) { return; }
    }
    ctx->pc = 0x213A1Cu;
label_213a1c:
    // 0x213a1c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x213a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x213a20: 0x5682003d  bnel        $s4, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x213A20u;
    {
        const bool branch_taken_0x213a20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x213a20) {
            ctx->pc = 0x213A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213A20u;
            // 0x213a24: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213B18u;
            goto label_213b18;
        }
    }
    ctx->pc = 0x213A28u;
    // 0x213a28: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x213a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x213a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a38: 0xc084d42  jal         func_213508
    ctx->pc = 0x213A38u;
    SET_GPR_U32(ctx, 31, 0x213A40u);
    ctx->pc = 0x213A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A38u;
            // 0x213a3c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213508u;
    if (runtime->hasFunction(0x213508u)) {
        auto targetFn = runtime->lookupFunction(0x213508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A40u; }
        if (ctx->pc != 0x213A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213508_0x213508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A40u; }
        if (ctx->pc != 0x213A40u) { return; }
    }
    ctx->pc = 0x213A40u;
label_213a40:
    // 0x213a40: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x213A40u;
    {
        const bool branch_taken_0x213a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A40u;
            // 0x213a44: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a40) {
            ctx->pc = 0x213B18u;
            goto label_213b18;
        }
    }
    ctx->pc = 0x213A48u;
label_213a48:
    // 0x213a48: 0x4bc118aa  vmul.xyz    $vf2, $vf3, $vf1
    ctx->pc = 0x213a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213a4c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x213a4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213a50: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x213a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213a54: 0x4b02208a  vmaddz.x    $vf2, $vf4, $vf2z
    ctx->pc = 0x213a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213a58: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x213a58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x213a5c: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x213a5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x213a60: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x213a60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213a64: 0x4bc328aa  vmul.xyz    $vf2, $vf5, $vf3
    ctx->pc = 0x213a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213a68: 0x4b000183  vaddw.x     $vf6, $vf0, $vf0w
    ctx->pc = 0x213a68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x213a6c: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x213a6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213a70: 0x4b02308a  vmaddz.x    $vf2, $vf6, $vf2z
    ctx->pc = 0x213a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213a74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x213a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213a78: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x213a78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213a7c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x213a7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213a80: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x213a80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x213a84: 0x4bc120ea  vmul.xyz    $vf3, $vf4, $vf1
    ctx->pc = 0x213a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213a88: 0x4b000143  vaddw.x     $vf5, $vf0, $vf0w
    ctx->pc = 0x213a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213a8c: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x213a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213a90: 0x4b0328ca  vmaddz.x    $vf3, $vf5, $vf3z
    ctx->pc = 0x213a90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213a98: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x213a98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x213a9c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x213a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x213aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213aa4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x213aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x213aa8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x213aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x213aac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ab4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x213ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x213ab8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x213ab8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x213abc: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x213abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213ac0: 0x4be139bc  vmulax.xyzw $ACC, $vf7, $vf1x
    ctx->pc = 0x213ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x213ac4: 0x4be148bd  vmadday.xyzw $ACC, $vf9, $vf1y
    ctx->pc = 0x213ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x213ac8: 0x4be1410a  vmaddz.xyzw $vf4, $vf8, $vf1z
    ctx->pc = 0x213ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213acc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x213accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x213ad0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x213ad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213ad4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x213ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x213ad8: 0x4be22118  vmulx.xyzw  $vf4, $vf4, $vf2x
    ctx->pc = 0x213ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213adc: 0x4be121fd  vabs.xyzw   $vf1, $vf4
    ctx->pc = 0x213adcu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[4], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213ae0: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x213ae0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x213ae4: 0x4be1182c  vsub.xyzw   $vf0, $vf3, $vf1
    ctx->pc = 0x213ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x213ae8: 0x4a0002ff  vnop
    ctx->pc = 0x213ae8u;
    // NOP operation, no action needed for VU0
    // 0x213aec: 0x4a0002ff  vnop
    ctx->pc = 0x213aecu;
    // NOP operation, no action needed for VU0
    // 0x213af0: 0x4a0002ff  vnop
    ctx->pc = 0x213af0u;
    // NOP operation, no action needed for VU0
    // 0x213af4: 0x4a0002ff  vnop
    ctx->pc = 0x213af4u;
    // NOP operation, no action needed for VU0
    // 0x213af8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x213af8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar3);
    // 0x213afc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x213afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x213b00: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x213b00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x213b04: 0x3043000e  andi        $v1, $v0, 0xE
    ctx->pc = 0x213b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x213b08: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x213B08u;
    {
        const bool branch_taken_0x213b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213B08u;
            // 0x213b0c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b08) {
            ctx->pc = 0x213950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213950;
        }
    }
    ctx->pc = 0x213B10u;
    // 0x213b10: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x213b10u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x213b14: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x213b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_213b18:
    // 0x213b18: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x213b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x213b1c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x213b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213b20: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x213b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x213b24: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x213b24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x213b28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x213b28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213b2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x213b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213b30: 0x3e00008  jr          $ra
    ctx->pc = 0x213B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213B30u;
            // 0x213b34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213B38u;
}
