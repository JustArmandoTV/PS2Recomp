#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002119E8
// Address: 0x2119e8 - 0x211eb8
void sub_002119E8_0x2119e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002119E8_0x2119e8");
#endif

    switch (ctx->pc) {
        case 0x211a88u: goto label_211a88;
        case 0x211ad8u: goto label_211ad8;
        case 0x211b2cu: goto label_211b2c;
        case 0x211b98u: goto label_211b98;
        case 0x211ba0u: goto label_211ba0;
        case 0x211bd4u: goto label_211bd4;
        case 0x211c34u: goto label_211c34;
        case 0x211c44u: goto label_211c44;
        case 0x211c74u: goto label_211c74;
        case 0x211cc0u: goto label_211cc0;
        default: break;
    }

    ctx->pc = 0x2119e8u;

    // 0x2119e8: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x2119e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x2119ec: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2119ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2119f0: 0x7fb301f0  sq          $s3, 0x1F0($sp)
    ctx->pc = 0x2119f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 19));
    // 0x2119f4: 0x7fb401e0  sq          $s4, 0x1E0($sp)
    ctx->pc = 0x2119f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 20));
    // 0x2119f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2119f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119fc: 0xe7b50238  swc1        $f21, 0x238($sp)
    ctx->pc = 0x2119fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x211a00: 0x240403c0  addiu       $a0, $zero, 0x3C0
    ctx->pc = 0x211a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x211a04: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x211a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
    // 0x211a08: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x211a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
    // 0x211a0c: 0x7fb20200  sq          $s2, 0x200($sp)
    ctx->pc = 0x211a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 18));
    // 0x211a10: 0x7fb501d0  sq          $s5, 0x1D0($sp)
    ctx->pc = 0x211a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 21));
    // 0x211a14: 0x7fb601c0  sq          $s6, 0x1C0($sp)
    ctx->pc = 0x211a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 22));
    // 0x211a18: 0x7fb701b0  sq          $s7, 0x1B0($sp)
    ctx->pc = 0x211a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 23));
    // 0x211a1c: 0x7fbe01a0  sq          $fp, 0x1A0($sp)
    ctx->pc = 0x211a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 30));
    // 0x211a20: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x211a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x211a24: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x211a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x211a28: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x211a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x211a2c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x211a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x211a30: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x211a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x211a34: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x211a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x211a38: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x211a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x211a3c: 0xafa60164  sw          $a2, 0x164($sp)
    ctx->pc = 0x211a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 6));
    // 0x211a40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x211a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x211a44: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x211a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211a48: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x211a4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x211a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x211a50: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x211a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x211a54: 0x2445fdc0  addiu       $a1, $v0, -0x240
    ctx->pc = 0x211a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966720));
    // 0x211a58: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x211a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x211a5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211a60: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x211a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x211a64: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x211a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x211a68: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x211a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x211a6c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x211a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x211a70: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x211a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x211a74: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x211a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x211a78: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x211a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x211a7c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x211a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x211a80: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211A80u;
    SET_GPR_U32(ctx, 31, 0x211A88u);
    ctx->pc = 0x211A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211A80u;
            // 0x211a84: 0xfba40180  sqc2        $vf4, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A88u; }
        if (ctx->pc != 0x211A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A88u; }
        if (ctx->pc != 0x211A88u) { return; }
    }
    ctx->pc = 0x211A88u;
label_211a88:
    // 0x211a88: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x211a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x211a8c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x211a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x211a90: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x211a94: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x211a94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211a98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211a9c: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x211a9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211aa0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x211aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x211aa4: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x211aa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x211aa8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x211aa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211aac: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x211aacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211ab0: 0xdba40180  lqc2        $vf4, 0x180($sp)
    ctx->pc = 0x211ab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x211ab4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x211ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211ab8: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x211ab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211abc: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x211abcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x211ac0: 0x68000db  bltz        $s4, . + 4 + (0xDB << 2)
    ctx->pc = 0x211AC0u;
    {
        const bool branch_taken_0x211ac0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x211AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211AC0u;
            // 0x211ac4: 0xfba20050  sqc2        $vf2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ac0) {
            ctx->pc = 0x211E30u;
            goto label_211e30;
        }
    }
    ctx->pc = 0x211AC8u;
    // 0x211ac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211acc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x211accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x211ad0: 0x48302000  qmfc2.ni    $s0, $vf4
    ctx->pc = 0x211ad0u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x211ad4: 0x2692ffff  addiu       $s2, $s4, -0x1
    ctx->pc = 0x211ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_211ad8:
    // 0x211ad8: 0x240303c0  addiu       $v1, $zero, 0x3C0
    ctx->pc = 0x211ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x211adc: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x211adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x211ae0: 0xafb20174  sw          $s2, 0x174($sp)
    ctx->pc = 0x211ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 18));
    // 0x211ae4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x211ae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x211ae8: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x211ae8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211aec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x211aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x211af0: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x211af0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211af4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x211af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x211af8: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x211af8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211afc: 0x7ba70050  lq          $a3, 0x50($sp)
    ctx->pc = 0x211afcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211b00: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211b04: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x211b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x211b08: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x211b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x211b0c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x211b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b10: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x211b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x211b14: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x211B14u;
    {
        const bool branch_taken_0x211b14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x211B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211B14u;
            // 0x211b18: 0x7fa70030  sq          $a3, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b14) {
            ctx->pc = 0x211B60u;
            goto label_211b60;
        }
    }
    ctx->pc = 0x211B1Cu;
    // 0x211b1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x211b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x211b20: 0x26250180  addiu       $a1, $s1, 0x180
    ctx->pc = 0x211b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x211b24: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211B24u;
    SET_GPR_U32(ctx, 31, 0x211B2Cu);
    ctx->pc = 0x211B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211B24u;
            // 0x211b28: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B2Cu; }
        if (ctx->pc != 0x211B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B2Cu; }
        if (ctx->pc != 0x211B2Cu) { return; }
    }
    ctx->pc = 0x211B2Cu;
label_211b2c:
    // 0x211b2c: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x211b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x211b30: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x211b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x211b34: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x211b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x211b38: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x211b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211b3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211b40: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x211b40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211b44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x211b44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211b48: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x211b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211b4c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x211b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211b50: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x211b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211b54: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x211b54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x211b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211B58u;
    {
        const bool branch_taken_0x211b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211B58u;
            // 0x211b5c: 0xfba20050  sqc2        $vf2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b58) {
            ctx->pc = 0x211B68u;
            goto label_211b68;
        }
    }
    ctx->pc = 0x211B60u;
label_211b60:
    // 0x211b60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x211b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x211b64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x211b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_211b68:
    // 0x211b68: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x211b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x211b6c: 0x262306c0  addiu       $v1, $s1, 0x6C0
    ctx->pc = 0x211b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
    // 0x211b70: 0xafa40178  sw          $a0, 0x178($sp)
    ctx->pc = 0x211b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 4));
    // 0x211b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211b78: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x211b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x211b7c: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x211b80: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x211b80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x211b84: 0x263e0600  addiu       $fp, $s1, 0x600
    ctx->pc = 0x211b84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x211b88: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x211b88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x211b8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211b90: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x211b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x211b94: 0x0  nop
    ctx->pc = 0x211b94u;
    // NOP
label_211b98:
    // 0x211b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x211b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_211ba0:
    // 0x211ba0: 0x0  nop
    ctx->pc = 0x211ba0u;
    // NOP
    // 0x211ba4: 0x0  nop
    ctx->pc = 0x211ba4u;
    // NOP
    // 0x211ba8: 0x0  nop
    ctx->pc = 0x211ba8u;
    // NOP
    // 0x211bac: 0x0  nop
    ctx->pc = 0x211bacu;
    // NOP
    // 0x211bb0: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x211BB0u;
    {
        const bool branch_taken_0x211bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x211BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211BB0u;
            // 0x211bb4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bb0) {
            ctx->pc = 0x211BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211ba0;
        }
    }
    ctx->pc = 0x211BB8u;
    // 0x211bb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x211bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211bbc: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x211BBCu;
    {
        const bool branch_taken_0x211bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x211BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211BBCu;
            // 0x211bc0: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bbc) {
            ctx->pc = 0x211B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211b98;
        }
    }
    ctx->pc = 0x211BC4u;
    // 0x211bc4: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x211BC4u;
    {
        const bool branch_taken_0x211bc4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x211BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211BC4u;
            // 0x211bc8: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bc4) {
            ctx->pc = 0x211BDCu;
            goto label_211bdc;
        }
    }
    ctx->pc = 0x211BCCu;
    // 0x211bcc: 0xc0a35f8  jal         func_28D7E0
    ctx->pc = 0x211BCCu;
    SET_GPR_U32(ctx, 31, 0x211BD4u);
    ctx->pc = 0x211BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211BCCu;
            // 0x211bd0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D7E0u;
    if (runtime->hasFunction(0x28D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x28D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BD4u; }
        if (ctx->pc != 0x211BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D7E0_0x28d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BD4u; }
        if (ctx->pc != 0x211BD4u) { return; }
    }
    ctx->pc = 0x211BD4u;
label_211bd4:
    // 0x211bd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x211BD4u;
    {
        const bool branch_taken_0x211bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211BD4u;
            // 0x211bd8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bd4) {
            ctx->pc = 0x211C28u;
            goto label_211c28;
        }
    }
    ctx->pc = 0x211BDCu;
label_211bdc:
    // 0x211bdc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x211bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x211be0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x211be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x211be4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x211be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x211be8: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x211be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x211bec: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x211becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x211bf0: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x211bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x211bf4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x211bf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x211bf8: 0xe7b400b4  swc1        $f20, 0xB4($sp)
    ctx->pc = 0x211bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x211bfc: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x211bfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x211c00: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x211c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x211c04: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x211c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x211c08: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x211c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x211c0c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x211c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x211c10: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x211c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x211c14: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x211c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x211c18: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x211c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x211c1c: 0xe7b40144  swc1        $f20, 0x144($sp)
    ctx->pc = 0x211c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x211c20: 0xe7b40158  swc1        $f20, 0x158($sp)
    ctx->pc = 0x211c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x211c24: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x211c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_211c28:
    // 0x211c28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x211c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211c2c: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211C2Cu;
    SET_GPR_U32(ctx, 31, 0x211C34u);
    ctx->pc = 0x211C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C2Cu;
            // 0x211c30: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C34u; }
        if (ctx->pc != 0x211C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C34u; }
        if (ctx->pc != 0x211C34u) { return; }
    }
    ctx->pc = 0x211C34u;
label_211c34:
    // 0x211c34: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x211c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c38: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x211c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c3c: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211C3Cu;
    SET_GPR_U32(ctx, 31, 0x211C44u);
    ctx->pc = 0x211C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C3Cu;
            // 0x211c40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C44u; }
        if (ctx->pc != 0x211C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C44u; }
        if (ctx->pc != 0x211C44u) { return; }
    }
    ctx->pc = 0x211C44u;
label_211c44:
    // 0x211c44: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x211c44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211c48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x211c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c4c: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x211c4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211c50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x211c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c54: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x211c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211c58: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x211c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211c5c: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x211c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x211c60: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x211c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x211c64: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x211c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x211c68: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x211c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x211c6c: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x211C6Cu;
    SET_GPR_U32(ctx, 31, 0x211C74u);
    ctx->pc = 0x211C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C6Cu;
            // 0x211c70: 0xfba20070  sqc2        $vf2, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C74u; }
        if (ctx->pc != 0x211C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D5C0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C74u; }
        if (ctx->pc != 0x211C74u) { return; }
    }
    ctx->pc = 0x211C74u;
label_211c74:
    // 0x211c74: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x211c74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211c78: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x211c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x211c7c: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x211c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211c80: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x211c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x211c84: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x211c84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211c88: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x211c88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x211c8c: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x211c8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211c90: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x211c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x211c94: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x211c94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x211c98: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x211c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x211c9c: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x211c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x211ca0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211ca4: 0x8fb10178  lw          $s1, 0x178($sp)
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x211ca8: 0x147880  sll         $t7, $s4, 2
    ctx->pc = 0x211ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x211cac: 0x25940  sll         $t3, $v0, 5
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x211cb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x211cb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cb4: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x211cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x211cb8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x211cb8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cbc: 0x0  nop
    ctx->pc = 0x211cbcu;
    // NOP
label_211cc0:
    // 0x211cc0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x211cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x211cc4: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x211cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x211cc8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x211cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x211ccc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x211cccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211cd0: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x211cd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x211cd4: 0x30670003  andi        $a3, $v1, 0x3
    ctx->pc = 0x211cd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x211cd8: 0x50ee0004  beql        $a3, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x211CD8u;
    {
        const bool branch_taken_0x211cd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x211cd8) {
            ctx->pc = 0x211CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211CD8u;
            // 0x211cdc: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211CECu;
            goto label_211cec;
        }
    }
    ctx->pc = 0x211CE0u;
    // 0x211ce0: 0x54ed004b  bnel        $a3, $t5, . + 4 + (0x4B << 2)
    ctx->pc = 0x211CE0u;
    {
        const bool branch_taken_0x211ce0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        if (branch_taken_0x211ce0) {
            ctx->pc = 0x211CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211CE0u;
            // 0x211ce4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211E10u;
            goto label_211e10;
        }
    }
    ctx->pc = 0x211CE8u;
    // 0x211ce8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x211ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_211cec:
    // 0x211cec: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x211cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x211cf0: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x211cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x211cf4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x211cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x211cf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211cfc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x211cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x211d00: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x211d04: 0xd89a0010  lqc2        $vf26, 0x10($a0)
    ctx->pc = 0x211d04u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x211d08: 0xd89b0020  lqc2        $vf27, 0x20($a0)
    ctx->pc = 0x211d08u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x211d0c: 0xd89c0030  lqc2        $vf28, 0x30($a0)
    ctx->pc = 0x211d0cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x211d10: 0xd8dd0010  lqc2        $vf29, 0x10($a2)
    ctx->pc = 0x211d10u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x211d14: 0xd8de0020  lqc2        $vf30, 0x20($a2)
    ctx->pc = 0x211d14u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x211d18: 0xd8df0030  lqc2        $vf31, 0x30($a2)
    ctx->pc = 0x211d18u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x211d1c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x211d20: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x211d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x211d24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x211d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d28: 0xc4650014  lwc1        $f5, 0x14($v1)
    ctx->pc = 0x211d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x211d2c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x211d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x211d30: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x211d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x211d34: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x211d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x211d38: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x211d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211d3c: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x211d3cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211d40: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x211d40u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211d44: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x211d44u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x211d48: 0xd8830050  lqc2        $vf3, 0x50($a0)
    ctx->pc = 0x211d48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x211d4c: 0xd8c40050  lqc2        $vf4, 0x50($a2)
    ctx->pc = 0x211d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x211d50: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x211d50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x211d54: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x211d54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x211d58: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x211d58u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x211d5c: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x211d5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211d60: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x211d60u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x211d64: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x211d64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211d68: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x211d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x211d6c: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x211d6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211d70: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x211d70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x211d74: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x211d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x211d78: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x211d78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x211d7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x211d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211d80: 0x48246000  qmfc2.ni    $a0, $vf12
    ctx->pc = 0x211d80u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x211d84: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x211d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211d88: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x211d88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x211d8c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x211d8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x211d90: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x211d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x211d94: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x211d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x211d98: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x211d98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x211d9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x211d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x211da0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x211da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x211da4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x211da4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x211da8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x211da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211dac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x211dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x211db0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x211db0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211db8: 0x14ee0005  bne         $a3, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x211DB8u;
    {
        const bool branch_taken_0x211db8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        if (branch_taken_0x211db8) {
            ctx->pc = 0x211DD0u;
            goto label_211dd0;
        }
    }
    ctx->pc = 0x211DC0u;
    // 0x211dc0: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x211dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211dc4: 0x0  nop
    ctx->pc = 0x211dc4u;
    // NOP
    // 0x211dc8: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x211DC8u;
    {
        const bool branch_taken_0x211dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211dc8) {
            ctx->pc = 0x211DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211DC8u;
            // 0x211dcc: 0x46003001  sub.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x211DECu;
            goto label_211dec;
        }
    }
    ctx->pc = 0x211DD0u;
label_211dd0:
    // 0x211dd0: 0x54ed000f  bnel        $a3, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x211DD0u;
    {
        const bool branch_taken_0x211dd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        if (branch_taken_0x211dd0) {
            ctx->pc = 0x211DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211DD0u;
            // 0x211dd4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211E10u;
            goto label_211e10;
        }
    }
    ctx->pc = 0x211DD8u;
    // 0x211dd8: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x211dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211ddc: 0x0  nop
    ctx->pc = 0x211ddcu;
    // NOP
    // 0x211de0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x211DE0u;
    {
        const bool branch_taken_0x211de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211de0) {
            ctx->pc = 0x211DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211DE0u;
            // 0x211de4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211E10u;
            goto label_211e10;
        }
    }
    ctx->pc = 0x211DE8u;
    // 0x211de8: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x211de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_211dec:
    // 0x211dec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x211decu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x211df0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x211df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211df4: 0x0  nop
    ctx->pc = 0x211df4u;
    // NOP
    // 0x211df8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x211DF8u;
    {
        const bool branch_taken_0x211df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211df8) {
            ctx->pc = 0x211DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211DF8u;
            // 0x211dfc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211E10u;
            goto label_211e10;
        }
    }
    ctx->pc = 0x211E00u;
    // 0x211e00: 0xafb4016c  sw          $s4, 0x16C($sp)
    ctx->pc = 0x211e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 20));
    // 0x211e04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x211e04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x211e08: 0xafa90170  sw          $t1, 0x170($sp)
    ctx->pc = 0x211e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 9));
    // 0x211e0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x211e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_211e10:
    // 0x211e10: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x211e10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x211e14: 0x258c0014  addiu       $t4, $t4, 0x14
    ctx->pc = 0x211e14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
    // 0x211e18: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x211e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211e1c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x211E1Cu;
    {
        const bool branch_taken_0x211e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E1Cu;
            // 0x211e20: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e1c) {
            ctx->pc = 0x211CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211cc0;
        }
    }
    ctx->pc = 0x211E24u;
    // 0x211e24: 0x8fb40174  lw          $s4, 0x174($sp)
    ctx->pc = 0x211e24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x211e28: 0x681ff2b  bgez        $s4, . + 4 + (-0xD5 << 2)
    ctx->pc = 0x211E28u;
    {
        const bool branch_taken_0x211e28 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x211E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E28u;
            // 0x211e2c: 0x2692ffff  addiu       $s2, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e28) {
            ctx->pc = 0x211AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211ad8;
        }
    }
    ctx->pc = 0x211E30u;
label_211e30:
    // 0x211e30: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x211e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x211e34: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x211E34u;
    {
        const bool branch_taken_0x211e34 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x211E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E34u;
            // 0x211e38: 0x8fa30170  lw          $v1, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e34) {
            ctx->pc = 0x211E7Cu;
            goto label_211e7c;
        }
    }
    ctx->pc = 0x211E3Cu;
    // 0x211e3c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x211e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x211e40: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x211e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x211e44: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x211e44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211e48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x211e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x211e4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x211e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x211e50: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x211e50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211e54: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x211e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x211e58: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x211e58u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x211e5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x211e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x211e60: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x211e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x211e64: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x211e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x211e68: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x211e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x211e6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x211e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x211e70: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x211e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x211e74: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x211e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x211e78: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x211e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_211e7c:
    // 0x211e7c: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x211e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x211e80: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x211e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x211e84: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x211e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x211e88: 0x7bb301f0  lq          $s3, 0x1F0($sp)
    ctx->pc = 0x211e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x211e8c: 0x7bb401e0  lq          $s4, 0x1E0($sp)
    ctx->pc = 0x211e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x211e90: 0x7bb501d0  lq          $s5, 0x1D0($sp)
    ctx->pc = 0x211e90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x211e94: 0x7bb601c0  lq          $s6, 0x1C0($sp)
    ctx->pc = 0x211e94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x211e98: 0x7bb701b0  lq          $s7, 0x1B0($sp)
    ctx->pc = 0x211e98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x211e9c: 0x7bbe01a0  lq          $fp, 0x1A0($sp)
    ctx->pc = 0x211e9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x211ea0: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x211ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x211ea4: 0xc7b50238  lwc1        $f21, 0x238($sp)
    ctx->pc = 0x211ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x211ea8: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x211ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x211eac: 0x3e00008  jr          $ra
    ctx->pc = 0x211EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EACu;
            // 0x211eb0: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211EB4u;
    // 0x211eb4: 0x0  nop
    ctx->pc = 0x211eb4u;
    // NOP
}
