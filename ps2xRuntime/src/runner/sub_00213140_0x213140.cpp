#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213140
// Address: 0x213140 - 0x213270
void sub_00213140_0x213140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213140_0x213140");
#endif

    switch (ctx->pc) {
        case 0x213160u: goto label_213160;
        case 0x213180u: goto label_213180;
        default: break;
    }

    ctx->pc = 0x213140u;

    // 0x213140: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x213140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x213144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213148: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x213148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21314c: 0x18400045  blez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x21314Cu;
    {
        const bool branch_taken_0x21314c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21314Cu;
            // 0x213150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21314c) {
            ctx->pc = 0x213264u;
            goto label_213264;
        }
    }
    ctx->pc = 0x213154u;
    // 0x213154: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x213154u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x213158: 0x24a90001  addiu       $t1, $a1, 0x1
    ctx->pc = 0x213158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21315c: 0x0  nop
    ctx->pc = 0x21315cu;
    // NOP
label_213160:
    // 0x213160: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x213160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x213164: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x213164u;
    {
        const bool branch_taken_0x213164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213164u;
            // 0x213168: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213164) {
            ctx->pc = 0x21324Cu;
            goto label_21324c;
        }
    }
    ctx->pc = 0x21316Cu;
    // 0x21316c: 0xac1018  mult        $v0, $a1, $t4
    ctx->pc = 0x21316cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213170: 0x445021  addu        $t2, $v0, $a0
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x213174: 0x16c1018  mult        $v0, $t3, $t4
    ctx->pc = 0x213174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213178: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x213178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21317c: 0x0  nop
    ctx->pc = 0x21317cu;
    // NOP
label_213180:
    // 0x213180: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x213180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x213184: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x213184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x213188: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x213188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x21318c: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x21318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x213190: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x213190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x213194: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x213194u;
    {
        const bool branch_taken_0x213194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213194) {
            ctx->pc = 0x213198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213194u;
            // 0x213198: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21323Cu;
            goto label_21323c;
        }
    }
    ctx->pc = 0x21319Cu;
    // 0x21319c: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21319Cu;
    {
        const bool branch_taken_0x21319c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x21319c) {
            ctx->pc = 0x2131F0u;
            goto label_2131f0;
        }
    }
    ctx->pc = 0x2131A4u;
    // 0x2131a4: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x2131a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2131a8: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x2131a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2131ac: 0x4bc1092a  vmul.xyz    $vf4, $vf1, $vf1
    ctx->pc = 0x2131acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2131b0: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x2131b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2131b4: 0x4b04203d  vadday.x    $ACC, $vf4, $vf4y
    ctx->pc = 0x2131b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2131b8: 0x4b04190a  vmaddz.x    $vf4, $vf3, $vf4z
    ctx->pc = 0x2131b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2131bc: 0x4bc211aa  vmul.xyz    $vf6, $vf2, $vf2
    ctx->pc = 0x2131bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2131c0: 0x4b000143  vaddw.x     $vf5, $vf0, $vf0w
    ctx->pc = 0x2131c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2131c4: 0x4b06303d  vadday.x    $ACC, $vf6, $vf6y
    ctx->pc = 0x2131c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2131c8: 0x4b06298a  vmaddz.x    $vf6, $vf5, $vf6z
    ctx->pc = 0x2131c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2131cc: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x2131ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2131d0: 0x48253000  qmfc2.ni    $a1, $vf6
    ctx->pc = 0x2131d0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2131d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2131d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2131d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2131d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2131dc: 0x0  nop
    ctx->pc = 0x2131dcu;
    // NOP
    // 0x2131e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2131e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2131e4: 0x0  nop
    ctx->pc = 0x2131e4u;
    // NOP
    // 0x2131e8: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x2131E8u;
    {
        const bool branch_taken_0x2131e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2131e8) {
            ctx->pc = 0x2131ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2131E8u;
            // 0x2131ec: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21323Cu;
            goto label_21323c;
        }
    }
    ctx->pc = 0x2131F0u;
label_2131f0:
    // 0x2131f0: 0x69460007  ldl         $a2, 0x7($t2)
    ctx->pc = 0x2131f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2131f4: 0x6d460000  ldr         $a2, 0x0($t2)
    ctx->pc = 0x2131f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2131f8: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x2131f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2131fc: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2131fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213200: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x213200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213204: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x213204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x213208: 0x69060007  ldl         $a2, 0x7($t0)
    ctx->pc = 0x213208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21320c: 0x6d060000  ldr         $a2, 0x0($t0)
    ctx->pc = 0x21320cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x213210: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x213210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x213214: 0xb1460007  sdl         $a2, 0x7($t2)
    ctx->pc = 0x213214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213218: 0xb5460000  sdr         $a2, 0x0($t2)
    ctx->pc = 0x213218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21321c: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x21321cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x213220: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x213220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x213224: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x213224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x213228: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x213228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21322c: 0xb1060007  sdl         $a2, 0x7($t0)
    ctx->pc = 0x21322cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213230: 0xb5060000  sdr         $a2, 0x0($t0)
    ctx->pc = 0x213230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213234: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x213234u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x213238: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x213238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_21323c:
    // 0x21323c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21323cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x213240: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x213240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213244: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x213244u;
    {
        const bool branch_taken_0x213244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213244u;
            // 0x213248: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213244) {
            ctx->pc = 0x213180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213180;
        }
    }
    ctx->pc = 0x21324Cu;
label_21324c:
    // 0x21324c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x21324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x213250: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x213250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213254: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x213254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x213258: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x213258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21325c: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x21325Cu;
    {
        const bool branch_taken_0x21325c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21325c) {
            ctx->pc = 0x213260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21325Cu;
            // 0x213260: 0x24a90001  addiu       $t1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213160;
        }
    }
    ctx->pc = 0x213264u;
label_213264:
    // 0x213264: 0x3e00008  jr          $ra
    ctx->pc = 0x213264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213264u;
            // 0x213268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21326Cu;
    // 0x21326c: 0x0  nop
    ctx->pc = 0x21326cu;
    // NOP
}
