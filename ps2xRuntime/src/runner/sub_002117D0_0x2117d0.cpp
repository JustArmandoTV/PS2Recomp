#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002117D0
// Address: 0x2117d0 - 0x2119e8
void sub_002117D0_0x2117d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002117D0_0x2117d0");
#endif

    switch (ctx->pc) {
        case 0x211858u: goto label_211858;
        case 0x211870u: goto label_211870;
        case 0x2118b0u: goto label_2118b0;
        default: break;
    }

    ctx->pc = 0x2117d0u;

    // 0x2117d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2117d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2117d4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2117d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2117d8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2117d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2117dc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2117dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2117e0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2117e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2117e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2117e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117e8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2117e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2117ec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2117ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117f0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2117f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2117f4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2117f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2117f8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2117f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2117fc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2117fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211800: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x211800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x211804: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x211804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x211808: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x211808u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21180c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x21180cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x211810: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x211810u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211814: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x211814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x211818: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x211818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21181c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x21181cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x211820: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x211820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x211824: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x211828: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x211828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21182c: 0x24550020  addiu       $s5, $v0, 0x20
    ctx->pc = 0x21182cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x211830: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x211830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211834: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x211834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x211838: 0x6000043  bltz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x211838u;
    {
        const bool branch_taken_0x211838 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x21183Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211838u;
            // 0x21183c: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211838) {
            ctx->pc = 0x211948u;
            goto label_211948;
        }
    }
    ctx->pc = 0x211840u;
    // 0x211840: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x211840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x211844: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x211844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x211848: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x211848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21184c: 0x241603c0  addiu       $s6, $zero, 0x3C0
    ctx->pc = 0x21184cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x211850: 0x2161018  mult        $v0, $s0, $s6
    ctx->pc = 0x211850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x211854: 0x0  nop
    ctx->pc = 0x211854u;
    // NOP
label_211858:
    // 0x211858: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x21185c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21185cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211860: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x211860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x211864: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x211864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x211868: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211868u;
    SET_GPR_U32(ctx, 31, 0x211870u);
    ctx->pc = 0x21186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211868u;
            // 0x21186c: 0x24a50180  addiu       $a1, $a1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211870u; }
        if (ctx->pc != 0x211870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211870u; }
        if (ctx->pc != 0x211870u) { return; }
    }
    ctx->pc = 0x211870u;
label_211870:
    // 0x211870: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x211870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x211874: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x211874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211878: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21187c: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x21187cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211880: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x211880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211884: 0x2609ffff  addiu       $t1, $s0, -0x1
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x211888: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x211888u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21188c: 0x104180  sll         $t0, $s0, 6
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x211890: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x211890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x211894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x211898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21189c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x21189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2118a0: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2118a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2118a4: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x2118a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2118a8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2118a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2118ac: 0x0  nop
    ctx->pc = 0x2118acu;
    // NOP
label_2118b0:
    // 0x2118b0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2118b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2118b4: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x2118b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2118b8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2118b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2118bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2118bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2118c0: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x2118c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2118c4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2118c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2118c8: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2118C8u;
    {
        const bool branch_taken_0x2118c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2118c8) {
            ctx->pc = 0x2118CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2118C8u;
            // 0x2118cc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21192Cu;
            goto label_21192c;
        }
    }
    ctx->pc = 0x2118D0u;
    // 0x2118d0: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2118d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2118d4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2118d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2118d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2118d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118dc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2118dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2118e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2118e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2118e4: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2118e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2118e8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2118e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2118ec: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2118ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2118f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2118f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2118f4: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2118f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2118f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2118f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2118fc: 0x0  nop
    ctx->pc = 0x2118fcu;
    // NOP
    // 0x211900: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x211900u;
    {
        const bool branch_taken_0x211900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211900) {
            ctx->pc = 0x211904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211900u;
            // 0x211904: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x211908u;
            goto label_211908;
        }
    }
    ctx->pc = 0x211908u;
label_211908:
    // 0x211908: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x211908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21190c: 0x0  nop
    ctx->pc = 0x21190cu;
    // NOP
    // 0x211910: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x211910u;
    {
        const bool branch_taken_0x211910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211910) {
            ctx->pc = 0x211914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211910u;
            // 0x211914: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21192Cu;
            goto label_21192c;
        }
    }
    ctx->pc = 0x211918u;
    // 0x211918: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x211918u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21191c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x21191cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x211920: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x211920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211924: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x211924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211928: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x211928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21192c:
    // 0x21192c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x21192cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x211930: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x211930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211934: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x211934u;
    {
        const bool branch_taken_0x211934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211934u;
            // 0x211938: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211934) {
            ctx->pc = 0x2118B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2118b0;
        }
    }
    ctx->pc = 0x21193Cu;
    // 0x21193c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x21193cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211940: 0x601ffc5  bgez        $s0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x211940u;
    {
        const bool branch_taken_0x211940 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x211944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211940u;
            // 0x211944: 0x2161018  mult        $v0, $s0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211940) {
            ctx->pc = 0x211858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211858;
        }
    }
    ctx->pc = 0x211948u;
label_211948:
    // 0x211948: 0x6800018  bltz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x211948u;
    {
        const bool branch_taken_0x211948 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x21194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211948u;
            // 0x21194c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211948) {
            ctx->pc = 0x2119ACu;
            goto label_2119ac;
        }
    }
    ctx->pc = 0x211950u;
    // 0x211950: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x211950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x211954: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x211954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x211958: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x211958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x21195c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x21195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211960: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x211960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211964: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x211964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x211968: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x211968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21196c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21196cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211970: 0x0  nop
    ctx->pc = 0x211970u;
    // NOP
    // 0x211974: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x211974u;
    {
        const bool branch_taken_0x211974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211974u;
            // 0x211978: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211974) {
            ctx->pc = 0x211980u;
            goto label_211980;
        }
    }
    ctx->pc = 0x21197Cu;
    // 0x21197c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21197cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211980:
    // 0x211980: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x211980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x211984: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x211984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x211988: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x211988u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21198c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x21198cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x211990: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x211990u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x211994: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x211994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x211998: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x211998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x21199c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x21199cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2119a0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2119a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2119a4: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x2119a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x2119a8: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2119a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_2119ac:
    // 0x2119ac: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2119acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2119b0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2119b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2119b4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2119b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2119b8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2119b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2119bc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2119bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2119c0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2119c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2119c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2119c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2119c8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2119c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2119cc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2119ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2119d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2119d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2119d4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2119d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2119d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2119d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2119dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2119DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2119E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2119DCu;
            // 0x2119e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2119E4u;
    // 0x2119e4: 0x0  nop
    ctx->pc = 0x2119e4u;
    // NOP
}
