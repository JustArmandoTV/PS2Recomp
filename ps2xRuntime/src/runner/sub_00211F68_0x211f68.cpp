#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211F68
// Address: 0x211f68 - 0x2126f8
void sub_00211F68_0x211f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211F68_0x211f68");
#endif

    switch (ctx->pc) {
        case 0x212090u: goto label_212090;
        case 0x2123ecu: goto label_2123ec;
        case 0x212638u: goto label_212638;
        case 0x212660u: goto label_212660;
        default: break;
    }

    ctx->pc = 0x211f68u;

    // 0x211f68: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x211f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x211f6c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x211f6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x211f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x211f74: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x211f74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211f78: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x211f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x211f7c: 0x248f0030  addiu       $t7, $a0, 0x30
    ctx->pc = 0x211f7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x211f80: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x211f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x211f84: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x211f84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f88: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x211f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x211f8c: 0x248a0010  addiu       $t2, $a0, 0x10
    ctx->pc = 0x211f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x211f90: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x211f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x211f94: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x211f94u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x211f98: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x211f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x211f9c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x211f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x211fa0: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x211fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x211fa4: 0x948e0004  lhu         $t6, 0x4($a0)
    ctx->pc = 0x211fa4u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x211fa8: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x211fa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x211fac: 0x460052c6  mov.s       $f11, $f10
    ctx->pc = 0x211facu;
    ctx->f[11] = FPU_MOV_S(ctx->f[10]);
    // 0x211fb0: 0x8d6c0030  lw          $t4, 0x30($t3)
    ctx->pc = 0x211fb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x211fb4: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x211fb4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211fb8: 0x0  nop
    ctx->pc = 0x211fb8u;
    // NOP
    // 0x211fbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x211fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x211fc0: 0x8d680034  lw          $t0, 0x34($t3)
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x211fc4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x211fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x211fc8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x211fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211fcc: 0x1e26821  addu        $t5, $t7, $v0
    ctx->pc = 0x211fccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x211fd0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x211fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211fd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211fdc: 0x0  nop
    ctx->pc = 0x211fdcu;
    // NOP
    // 0x211fe0: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x211fe0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x211fe4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x211FE4u;
    {
        const bool branch_taken_0x211fe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x211FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211FE4u;
            // 0x211fe8: 0x8ea90000  lw          $t1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fe4) {
            ctx->pc = 0x21201Cu;
            goto label_21201c;
        }
    }
    ctx->pc = 0x211FECu;
    // 0x211fec: 0x8d650048  lw          $a1, 0x48($t3)
    ctx->pc = 0x211fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x211ff0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x211ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x211ff4: 0x8d640050  lw          $a0, 0x50($t3)
    ctx->pc = 0x211ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x211ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211ffc: 0x8d630054  lw          $v1, 0x54($t3)
    ctx->pc = 0x211ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x212000: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x212000u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x212004: 0xa5240004  sh          $a0, 0x4($t1)
    ctx->pc = 0x212004u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x212008: 0xa5230006  sh          $v1, 0x6($t1)
    ctx->pc = 0x212008u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x21200c: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x21200cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
    // 0x212010: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x212010u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x212014: 0xad2d0008  sw          $t5, 0x8($t1)
    ctx->pc = 0x212014u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 13));
    // 0x212018: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x212018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_21201c:
    // 0x21201c: 0xd9940030  lqc2        $vf20, 0x30($t4)
    ctx->pc = 0x21201cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x212020: 0xd9930040  lqc2        $vf19, 0x40($t4)
    ctx->pc = 0x212020u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x212024: 0xd9900050  lqc2        $vf16, 0x50($t4)
    ctx->pc = 0x212024u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x212028: 0xd9910060  lqc2        $vf17, 0x60($t4)
    ctx->pc = 0x212028u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 96)));
    // 0x21202c: 0xd9920070  lqc2        $vf18, 0x70($t4)
    ctx->pc = 0x21202cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 112)));
    // 0x212030: 0xd9190030  lqc2        $vf25, 0x30($t0)
    ctx->pc = 0x212030u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x212034: 0xd9180040  lqc2        $vf24, 0x40($t0)
    ctx->pc = 0x212034u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x212038: 0xd9150050  lqc2        $vf21, 0x50($t0)
    ctx->pc = 0x212038u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x21203c: 0xd9160060  lqc2        $vf22, 0x60($t0)
    ctx->pc = 0x21203cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x212040: 0xd9170070  lqc2        $vf23, 0x70($t0)
    ctx->pc = 0x212040u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x212044: 0x27b90010  addiu       $t9, $sp, 0x10
    ctx->pc = 0x212044u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x212048: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x212048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x21204c: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x21204cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212050: 0x3c01b400  lui         $at, 0xB400
    ctx->pc = 0x212050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46080 << 16));
    // 0x212054: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x212054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x212058: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x212058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x21205c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x21205cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x212060: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x212060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x212064: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x212064u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x212068: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x212068u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x21206c: 0x3a0c02d  daddu       $t8, $sp, $zero
    ctx->pc = 0x21206cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212070: 0x320902d  daddu       $s2, $t9, $zero
    ctx->pc = 0x212070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212074: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x212074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x212078: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x21207c: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x21207cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x212080: 0x244d0970  addiu       $t5, $v0, 0x970
    ctx->pc = 0x212080u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x212084: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x212084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212088: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x212088u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21208c: 0x0  nop
    ctx->pc = 0x21208cu;
    // NOP
label_212090:
    // 0x212090: 0x9083000f  lbu         $v1, 0xF($a0)
    ctx->pc = 0x212090u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x212094: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x212094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212098: 0xc5600020  lwc1        $f0, 0x20($t3)
    ctx->pc = 0x212098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21209c: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x21209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2120a0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2120a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2120a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2120a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2120a8: 0xd8db0000  lqc2        $vf27, 0x0($a2)
    ctx->pc = 0x2120a8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2120ac: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2120acu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2120b0: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x2120b0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2120b4: 0x4a004078  vcallms     0x808
    ctx->pc = 0x2120b4u;
    {     ctx->vu0_tpc = 0x808;     runtime->executeVU0Microprogram(rdram, ctx, 0x808); }
    // 0x2120b8: 0xccc00040  pref        0x00, 0x40($a2)
    ctx->pc = 0x2120b8u;
    // PREF instruction (ignored)
    // 0x2120bc: 0xc661c1ac  lwc1        $f1, -0x3E54($s3)
    ctx->pc = 0x2120bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294951340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2120c0: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x2120c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2120c4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2120c4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2120c8: 0xc682c1a8  lwc1        $f2, -0x3E58($s4)
    ctx->pc = 0x2120c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294951336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2120cc: 0xc564000c  lwc1        $f4, 0xC($t3)
    ctx->pc = 0x2120ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2120d0: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2120d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2120d4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2120d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2120d8: 0xc4c3001c  lwc1        $f3, 0x1C($a2)
    ctx->pc = 0x2120d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2120dc: 0x46013202  mul.s       $f8, $f6, $f1
    ctx->pc = 0x2120dcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2120e0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2120e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2120e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2120e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2120e8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2120e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2120ec: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2120f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2120f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2120f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2120f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2120f8: 0x46044034  c.lt.s      $f8, $f4
    ctx->pc = 0x2120f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2120fc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2120fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212100: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x212100u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x212104: 0x460301c1  sub.s       $f7, $f0, $f3
    ctx->pc = 0x212104u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x212108: 0x46025ac0  add.s       $f11, $f11, $f2
    ctx->pc = 0x212108u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x21210c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21210Cu;
    {
        const bool branch_taken_0x21210c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21210Cu;
            // 0x212110: 0x46015280  add.s       $f10, $f10, $f1 (Delay Slot)
        ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21210c) {
            ctx->pc = 0x212118u;
            goto label_212118;
        }
    }
    ctx->pc = 0x212114u;
    // 0x212114: 0x46004146  mov.s       $f5, $f8
    ctx->pc = 0x212114u;
    ctx->f[5] = FPU_MOV_S(ctx->f[8]);
label_212118:
    // 0x212118: 0x46052800  add.s       $f0, $f5, $f5
    ctx->pc = 0x212118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x21211c: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x21211cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x212120: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x212120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x212124: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x212124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212128: 0x0  nop
    ctx->pc = 0x212128u;
    // NOP
    // 0x21212c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x21212Cu;
    {
        const bool branch_taken_0x21212c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21212Cu;
            // 0x212130: 0x460518c1  sub.s       $f3, $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21212c) {
            ctx->pc = 0x21213Cu;
            goto label_21213c;
        }
    }
    ctx->pc = 0x212134u;
    // 0x212134: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x212134u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x212138: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x212138u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
label_21213c:
    // 0x21213c: 0x46093034  c.lt.s      $f6, $f9
    ctx->pc = 0x21213cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212140: 0x0  nop
    ctx->pc = 0x212140u;
    // NOP
    // 0x212144: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x212144u;
    {
        const bool branch_taken_0x212144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212144u;
            // 0x212148: 0x46004806  mov.s       $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212144) {
            ctx->pc = 0x212150u;
            goto label_212150;
        }
    }
    ctx->pc = 0x21214Cu;
    // 0x21214c: 0x46003006  mov.s       $f0, $f6
    ctx->pc = 0x21214cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[6]);
label_212150:
    // 0x212150: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x212150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x212154: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x212154u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x212158: 0xc560001c  lwc1        $f0, 0x1C($t3)
    ctx->pc = 0x212158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21215c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21215cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x212160: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x212160u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x212164: 0xf8bd0000  sqc2        $vf29, 0x0($a1)
    ctx->pc = 0x212164u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x212168: 0xf8be0010  sqc2        $vf30, 0x10($a1)
    ctx->pc = 0x212168u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x21216c: 0xf8bf0020  sqc2        $vf31, 0x20($a1)
    ctx->pc = 0x21216cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x212170: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x212170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x212174: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x212174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x212178: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x212178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21217c: 0x4bfb0868  vadd.xyzw   $vf1, $vf1, $vf27
    ctx->pc = 0x21217cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212180: 0x4bfd10a8  vadd.xyzw   $vf2, $vf2, $vf29
    ctx->pc = 0x212180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212184: 0xfb010000  sqc2        $vf1, 0x0($t8)
    ctx->pc = 0x212184u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212188: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x212188u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21218c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x21218Cu;
    {
        const bool branch_taken_0x21218c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21218c) {
            ctx->pc = 0x212190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21218Cu;
            // 0x212190: 0xc5630020  lwc1        $f3, 0x20($t3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2121BCu;
            goto label_2121bc;
        }
    }
    ctx->pc = 0x212194u;
    // 0x212194: 0x9082000e  lbu         $v0, 0xE($a0)
    ctx->pc = 0x212194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x212198: 0xa1310000  sb          $s1, 0x0($t1)
    ctx->pc = 0x212198u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x21219c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21219Cu;
    {
        const bool branch_taken_0x21219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2121A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21219Cu;
            // 0x2121a0: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21219c) {
            ctx->pc = 0x212238u;
            goto label_212238;
        }
    }
    ctx->pc = 0x2121A4u;
    // 0x2121a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2121a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2121a8: 0xa0b00000  sb          $s0, 0x0($a1)
    ctx->pc = 0x2121a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2121ac: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2121acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2121b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2121b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2121b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2121B4u;
    {
        const bool branch_taken_0x2121b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2121B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2121B4u;
            // 0x2121b8: 0xe4a0002c  swc1        $f0, 0x2C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121b4) {
            ctx->pc = 0x212238u;
            goto label_212238;
        }
    }
    ctx->pc = 0x2121BCu;
label_2121bc:
    // 0x2121bc: 0x2522ffd0  addiu       $v0, $t1, -0x30
    ctx->pc = 0x2121bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967248));
    // 0x2121c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2121c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2121c4: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x2121c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2121c8: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x2121c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2121cc: 0x4bdd086a  vmul.xyz    $vf1, $vf1, $vf29
    ctx->pc = 0x2121ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2121d0: 0x4bde10aa  vmul.xyz    $vf2, $vf2, $vf30
    ctx->pc = 0x2121d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2121d4: 0x4bdf18ea  vmul.xyz    $vf3, $vf3, $vf31
    ctx->pc = 0x2121d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2121d8: 0x4bd409bf  vmulaw.xyz  $ACC, $vf1, $vf20w
    ctx->pc = 0x2121d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2121dc: 0x4bd908bf  vmaddaw.xyz $ACC, $vf1, $vf25w
    ctx->pc = 0x2121dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2121e0: 0x4bd412bd  vmadda.xyz  $ACC, $vf2, $vf20
    ctx->pc = 0x2121e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[20]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2121e4: 0x4bd918e9  vmadd.xyz   $vf3, $vf3, $vf25
    ctx->pc = 0x2121e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2121e8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2121e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2121ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2121ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2121f0: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2121f0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2121f4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2121f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2121f8: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x2121f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x2121fc: 0xc524fffc  lwc1        $f4, -0x4($t1)
    ctx->pc = 0x2121fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x212200: 0xc522002c  lwc1        $f2, 0x2C($t1)
    ctx->pc = 0x212200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212204: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x212204u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x212208: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x212208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x21220c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x21220cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x212210: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x212210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x212214: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x212214u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x212218: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x212218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x21221c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x21221cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x212220: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x212220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x212224: 0xe522fffc  swc1        $f2, -0x4($t1)
    ctx->pc = 0x212224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294967292), bits); }
    // 0x212228: 0xe524002c  swc1        $f4, 0x2C($t1)
    ctx->pc = 0x212228u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 44), bits); }
    // 0x21222c: 0xe4410060  swc1        $f1, 0x60($v0)
    ctx->pc = 0x21222cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x212230: 0xa127ffd0  sb          $a3, -0x30($t1)
    ctx->pc = 0x212230u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294967248), (uint8_t)GPR_U32(ctx, 7));
    // 0x212234: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x212234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
label_212238:
    // 0x212238: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x212238u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x21223c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x21223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x212240: 0x18e102a  slt         $v0, $t4, $t6
    ctx->pc = 0x212240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x212244: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x212244u;
    {
        const bool branch_taken_0x212244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212244u;
            // 0x212248: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212244) {
            ctx->pc = 0x212090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212090;
        }
    }
    ctx->pc = 0x21224Cu;
    // 0x21224c: 0x460b5002  mul.s       $f0, $f10, $f11
    ctx->pc = 0x21224cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x212250: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x212250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212254: 0x460c0182  mul.s       $f6, $f0, $f12
    ctx->pc = 0x212254u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x212258: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x212258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21225c: 0x0  nop
    ctx->pc = 0x21225cu;
    // NOP
    // 0x212260: 0x4500011c  bc1f        . + 4 + (0x11C << 2)
    ctx->pc = 0x212260u;
    {
        const bool branch_taken_0x212260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212260u;
            // 0x212264: 0xdba30010  lqc2        $vf3, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212260) {
            ctx->pc = 0x2126D4u;
            goto label_2126d4;
        }
    }
    ctx->pc = 0x212268u;
    // 0x212268: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x212268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x21226c: 0x4bc3186a  vmul.xyz    $vf1, $vf3, $vf3
    ctx->pc = 0x21226cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212270: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x212270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212274: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x212274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x212278: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x212278u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21227c: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x21227cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x212280: 0x3421f972  ori         $at, $at, 0xF972
    ctx->pc = 0x212280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63858);
    // 0x212284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212288: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x212288u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21228c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212290: 0x0  nop
    ctx->pc = 0x212290u;
    // NOP
    // 0x212294: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x212294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x212298: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21229c: 0x0  nop
    ctx->pc = 0x21229cu;
    // NOP
    // 0x2122a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2122A0u;
    {
        const bool branch_taken_0x2122a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2122a0) {
            ctx->pc = 0x2122B4u;
            goto label_2122b4;
        }
    }
    ctx->pc = 0x2122A8u;
    // 0x2122a8: 0x79e20010  lq          $v0, 0x10($t7)
    ctx->pc = 0x2122a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x2122ac: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2122ACu;
    {
        const bool branch_taken_0x2122ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2122ACu;
            // 0x2122b0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122ac) {
            ctx->pc = 0x21234Cu;
            goto label_21234c;
        }
    }
    ctx->pc = 0x2122B4u;
label_2122b4:
    // 0x2122b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2122b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2122b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2122b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2122bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2122bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2122c0: 0x0  nop
    ctx->pc = 0x2122c0u;
    // NOP
    // 0x2122c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2122c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2122c8: 0x0  nop
    ctx->pc = 0x2122c8u;
    // NOP
    // 0x2122cc: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x2122CCu;
    {
        const bool branch_taken_0x2122cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2122cc) {
            ctx->pc = 0x2122D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2122CCu;
            // 0x2122d0: 0xd9e10010  lqc2        $vf1, 0x10($t7) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x212300u;
            goto label_212300;
        }
    }
    ctx->pc = 0x2122D4u;
    // 0x2122d4: 0x4bc318aa  vmul.xyz    $vf2, $vf3, $vf3
    ctx->pc = 0x2122d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2122d8: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w
    ctx->pc = 0x2122d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2122dc: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x2122dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2122e0: 0x4b02088a  vmaddz.x    $vf2, $vf1, $vf2z
    ctx->pc = 0x2122e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2122e4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2122e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2122e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2122e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2122ec: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x2122ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2122f0: 0x4a0002ff  vnop
    ctx->pc = 0x2122f0u;
    // NOP operation, no action needed for VU0
    // 0x2122f4: 0x4a0002ff  vnop
    ctx->pc = 0x2122f4u;
    // NOP operation, no action needed for VU0
    // 0x2122f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2122F8u;
    {
        const bool branch_taken_0x2122f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2122F8u;
            // 0x2122fc: 0xfba30010  sqc2        $vf3, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122f8) {
            ctx->pc = 0x21234Cu;
            goto label_21234c;
        }
    }
    ctx->pc = 0x212300u;
label_212300:
    // 0x212300: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x212300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212304: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x212304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x212308: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x212308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21230c: 0x4b02188a  vmaddz.x    $vf2, $vf3, $vf2z
    ctx->pc = 0x21230cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212310: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x212310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x212314: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x212314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x212318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21231c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x21231cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212320: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x212320u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212324: 0x0  nop
    ctx->pc = 0x212324u;
    // NOP
    // 0x212328: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x212328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21232c: 0x0  nop
    ctx->pc = 0x21232cu;
    // NOP
    // 0x212330: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x212330u;
    {
        const bool branch_taken_0x212330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212330u;
            // 0x212334: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212330) {
            ctx->pc = 0x21234Cu;
            goto label_21234c;
        }
    }
    ctx->pc = 0x212338u;
    // 0x212338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21233c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21233cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212340: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x212340u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x212344: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x212344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x212348: 0xe7200004  swc1        $f0, 0x4($t9)
    ctx->pc = 0x212348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
label_21234c:
    // 0x21234c: 0x95430002  lhu         $v1, 0x2($t2)
    ctx->pc = 0x21234cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x212350: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x212354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212358: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x212358u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21235c: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x21235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x212360: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x212360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x212364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x212364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212368: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x212368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x21236c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21236cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x212370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212374: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x212374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212378: 0x4bc512fe  vopmula.xyz $ACC, $vf2, $vf5
    ctx->pc = 0x212378u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]);
    // 0x21237c: 0x4bc2286e  vopmsub.xyz $vf1, $vf5, $vf2
    ctx->pc = 0x21237cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212380: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x212380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x212384: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x212384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x212388: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x212388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21238c: 0x4b0320ca  vmaddz.x    $vf3, $vf4, $vf3z
    ctx->pc = 0x21238cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212390: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x212390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212394: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x212394u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x212398: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x212398u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21239c: 0x0  nop
    ctx->pc = 0x21239cu;
    // NOP
    // 0x2123a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2123a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2123a4: 0x0  nop
    ctx->pc = 0x2123a4u;
    // NOP
    // 0x2123a8: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x2123A8u;
    {
        const bool branch_taken_0x2123a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2123ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2123A8u;
            // 0x2123ac: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123a8) {
            ctx->pc = 0x2124B4u;
            goto label_2124b4;
        }
    }
    ctx->pc = 0x2123B0u;
    // 0x2123b0: 0x4be129fd  vabs.xyzw   $vf1, $vf5
    ctx->pc = 0x2123b0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[5], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2123b4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2123b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2123b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2123b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2123bc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2123bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2123c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2123c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2123c4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2123c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2123c8: 0x0  nop
    ctx->pc = 0x2123c8u;
    // NOP
    // 0x2123cc: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2123CCu;
    {
        const bool branch_taken_0x2123cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2123D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2123CCu;
            // 0x2123d0: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123cc) {
            ctx->pc = 0x21246Cu;
            goto label_21246c;
        }
    }
    ctx->pc = 0x2123D4u;
    // 0x2123d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2123d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2123d8: 0x0  nop
    ctx->pc = 0x2123d8u;
    // NOP
    // 0x2123dc: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x2123DCu;
    {
        const bool branch_taken_0x2123dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2123E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2123DCu;
            // 0x2123e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123dc) {
            ctx->pc = 0x212480u;
            goto label_212480;
        }
    }
    ctx->pc = 0x2123E4u;
    // 0x2123e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2123E4u;
    {
        const bool branch_taken_0x2123e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2123E4u;
            // 0x2123e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123e4) {
            ctx->pc = 0x212480u;
            goto label_212480;
        }
    }
    ctx->pc = 0x2123ECu;
label_2123ec:
    // 0x2123ec: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x2123ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2123f0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2123f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2123f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2123f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2123f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2123f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2123fc: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2123fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x212400: 0xc5600020  lwc1        $f0, 0x20($t3)
    ctx->pc = 0x212400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212404: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x212404u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x212408: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x212408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21240c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x21240cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212410: 0xdb3e0000  lqc2        $vf30, 0x0($t9)
    ctx->pc = 0x212410u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x212414: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x212414u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x212418: 0x4a0046f8  vcallms     0x8D8
    ctx->pc = 0x212418u;
    {     ctx->vu0_tpc = 0x8D8;     runtime->executeVU0Microprogram(rdram, ctx, 0x8D8); }
    // 0x21241c: 0xcf200040  pref        0x00, 0x40($t9)
    ctx->pc = 0x21241cu;
    // PREF instruction (ignored)
    // 0x212420: 0xc5630024  lwc1        $f3, 0x24($t3)
    ctx->pc = 0x212420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212424: 0xc541001c  lwc1        $f1, 0x1C($t2)
    ctx->pc = 0x212424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212428: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x212428u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21242c: 0xf85e0000  sqc2        $vf30, 0x0($v0)
    ctx->pc = 0x21242cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x212430: 0xf85f0010  sqc2        $vf31, 0x10($v0)
    ctx->pc = 0x212430u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x212434: 0xc4a0006c  lwc1        $f0, 0x6C($a1)
    ctx->pc = 0x212434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212438: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x212438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21243c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x21243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x212440: 0x24890090  addiu       $t1, $a0, 0x90
    ctx->pc = 0x212440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x212444: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x212444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x212448: 0xe4a1007c  swc1        $f1, 0x7C($a1)
    ctx->pc = 0x212448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
    // 0x21244c: 0xe4a0006c  swc1        $f0, 0x6C($a1)
    ctx->pc = 0x21244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x212450: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x212450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212454: 0xe4850080  swc1        $f5, 0x80($a0)
    ctx->pc = 0x212454u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x212458: 0xe4840084  swc1        $f4, 0x84($a0)
    ctx->pc = 0x212458u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x21245c: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x21245cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x212460: 0xac86008c  sw          $a2, 0x8C($a0)
    ctx->pc = 0x212460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 6));
    // 0x212464: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x212464u;
    {
        const bool branch_taken_0x212464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212464u;
            // 0x212468: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212464) {
            ctx->pc = 0x2126D4u;
            goto label_2126d4;
        }
    }
    ctx->pc = 0x21246Cu;
label_21246c:
    // 0x21246c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21246cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212470: 0x0  nop
    ctx->pc = 0x212470u;
    // NOP
    // 0x212474: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x212474u;
    {
        const bool branch_taken_0x212474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212474u;
            // 0x212478: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212474) {
            ctx->pc = 0x212480u;
            goto label_212480;
        }
    }
    ctx->pc = 0x21247Cu;
    // 0x21247c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212480:
    // 0x212480: 0xa5420002  sh          $v0, 0x2($t2)
    ctx->pc = 0x212480u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x212484: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x212484u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x212488: 0x2483d6e0  addiu       $v1, $a0, -0x2920
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956768));
    // 0x21248c: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x21248cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x212490: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x212490u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x212494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x212498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21249c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x21249cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2124a0: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2124a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2124a4: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x2124a4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x2124a8: 0x4bc2086e  vopmsub.xyz $vf1, $vf1, $vf2
    ctx->pc = 0x2124a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2124ac: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2124acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2124b0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x2124b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
label_2124b4:
    // 0x2124b4: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x2124b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2124b8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2124b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2124bc: 0x4bc3196a  vmul.xyz    $vf5, $vf3, $vf3
    ctx->pc = 0x2124bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2124c0: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x2124c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2124c4: 0x4b05283d  vadday.x    $ACC, $vf5, $vf5y
    ctx->pc = 0x2124c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2124c8: 0x4b05114a  vmaddz.x    $vf5, $vf2, $vf5z
    ctx->pc = 0x2124c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2124cc: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x2124ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2124d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2124d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2124d4: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x2124d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2124d8: 0x4a0002ff  vnop
    ctx->pc = 0x2124d8u;
    // NOP operation, no action needed for VU0
    // 0x2124dc: 0x4a0002ff  vnop
    ctx->pc = 0x2124dcu;
    // NOP operation, no action needed for VU0
    // 0x2124e0: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x2124e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2124e4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2124e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2124e8: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x2124e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2124ec: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x2124ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2124f0: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x2124f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2124f4: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x2124f4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x2124f8: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x2124f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2124fc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2124fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212500: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x212500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212504: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x212504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212508: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x212508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21250c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x21250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x212510: 0xc5600020  lwc1        $f0, 0x20($t3)
    ctx->pc = 0x212510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212514: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x212514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x212518: 0xdbbb0000  lqc2        $vf27, 0x0($sp)
    ctx->pc = 0x212518u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21251c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x21251cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212520: 0x48a4e000  qmtc2.ni    $a0, $vf28
    ctx->pc = 0x212520u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x212524: 0x4a004078  vcallms     0x808
    ctx->pc = 0x212524u;
    {     ctx->vu0_tpc = 0x808;     runtime->executeVU0Microprogram(rdram, ctx, 0x808); }
    // 0x212528: 0xcfa00040  pref        0x00, 0x40($sp)
    ctx->pc = 0x212528u;
    // PREF instruction (ignored)
    // 0x21252c: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x21252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212530: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x212530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212534: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x212534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x212538: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x212538u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21253c: 0xf8bd0000  sqc2        $vf29, 0x0($a1)
    ctx->pc = 0x21253cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x212540: 0xf8be0010  sqc2        $vf30, 0x10($a1)
    ctx->pc = 0x212540u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x212544: 0xf8bf0020  sqc2        $vf31, 0x20($a1)
    ctx->pc = 0x212544u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x212548: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x212548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x21254c: 0xc5600020  lwc1        $f0, 0x20($t3)
    ctx->pc = 0x21254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212550: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x212550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x212554: 0xdbbb0000  lqc2        $vf27, 0x0($sp)
    ctx->pc = 0x212554u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212558: 0xd87d0000  lqc2        $vf29, 0x0($v1)
    ctx->pc = 0x212558u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21255c: 0x48a7e000  qmtc2.ni    $a3, $vf28
    ctx->pc = 0x21255cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x212560: 0x4a004078  vcallms     0x808
    ctx->pc = 0x212560u;
    {     ctx->vu0_tpc = 0x808;     runtime->executeVU0Microprogram(rdram, ctx, 0x808); }
    // 0x212564: 0xcfa00040  pref        0x00, 0x40($sp)
    ctx->pc = 0x212564u;
    // PREF instruction (ignored)
    // 0x212568: 0xc5410014  lwc1        $f1, 0x14($t2)
    ctx->pc = 0x212568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21256c: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x21256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x212570: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x212570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212574: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x212574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x212578: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x212578u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21257c: 0xf85d0000  sqc2        $vf29, 0x0($v0)
    ctx->pc = 0x21257cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x212580: 0xf85e0010  sqc2        $vf30, 0x10($v0)
    ctx->pc = 0x212580u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x212584: 0xf85f0020  sqc2        $vf31, 0x20($v0)
    ctx->pc = 0x212584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x212588: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x212588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21258c: 0xe521003c  swc1        $f1, 0x3C($t1)
    ctx->pc = 0x21258cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 60), bits); }
    // 0x212590: 0xc5630020  lwc1        $f3, 0x20($t3)
    ctx->pc = 0x212590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212594: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x212594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x212598: 0xd9220010  lqc2        $vf2, 0x10($t1)
    ctx->pc = 0x212598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x21259c: 0xd9230020  lqc2        $vf3, 0x20($t1)
    ctx->pc = 0x21259cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2125a0: 0x4bdd086a  vmul.xyz    $vf1, $vf1, $vf29
    ctx->pc = 0x2125a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2125a4: 0x4bde10aa  vmul.xyz    $vf2, $vf2, $vf30
    ctx->pc = 0x2125a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2125a8: 0x4bdf18ea  vmul.xyz    $vf3, $vf3, $vf31
    ctx->pc = 0x2125a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2125ac: 0x4bd409bf  vmulaw.xyz  $ACC, $vf1, $vf20w
    ctx->pc = 0x2125acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2125b0: 0x4bd908bf  vmaddaw.xyz $ACC, $vf1, $vf25w
    ctx->pc = 0x2125b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2125b4: 0x4bd412bd  vmadda.xyz  $ACC, $vf2, $vf20
    ctx->pc = 0x2125b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[20]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2125b8: 0x4bd918e9  vmadd.xyz   $vf3, $vf3, $vf25
    ctx->pc = 0x2125b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2125bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2125bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2125c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2125c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2125c4: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2125c4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2125c8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2125c8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2125cc: 0xc524002c  lwc1        $f4, 0x2C($t1)
    ctx->pc = 0x2125ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2125d0: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x2125d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2125d4: 0xc522005c  lwc1        $f2, 0x5C($t1)
    ctx->pc = 0x2125d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2125d8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2125d8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2125dc: 0x25460008  addiu       $a2, $t2, 0x8
    ctx->pc = 0x2125dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x2125e0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2125e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2125e4: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x2125e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2125e8: 0x29c30002  slti        $v1, $t6, 0x2
    ctx->pc = 0x2125e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2125ec: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2125ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2125f0: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2125f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x2125f4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2125f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2125f8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2125f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2125fc: 0x46030942  mul.s       $f5, $f1, $f3
    ctx->pc = 0x2125fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x212600: 0xe524005c  swc1        $f4, 0x5C($t1)
    ctx->pc = 0x212600u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 92), bits); }
    // 0x212604: 0xe522002c  swc1        $f2, 0x2C($t1)
    ctx->pc = 0x212604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 44), bits); }
    // 0x212608: 0xc5600018  lwc1        $f0, 0x18($t3)
    ctx->pc = 0x212608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21260c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x21260cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x212610: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x212610u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x212614: 0xe5250060  swc1        $f5, 0x60($t1)
    ctx->pc = 0x212614u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
    // 0x212618: 0xad260068  sw          $a2, 0x68($t1)
    ctx->pc = 0x212618u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 6));
    // 0x21261c: 0xe5240064  swc1        $f4, 0x64($t1)
    ctx->pc = 0x21261cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x212620: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x212620u;
    {
        const bool branch_taken_0x212620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212620u;
            // 0x212624: 0x25290070  addiu       $t1, $t1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212620) {
            ctx->pc = 0x2126D4u;
            goto label_2126d4;
        }
    }
    ctx->pc = 0x212628u;
    // 0x212628: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x212628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x21262c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x21262cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x212630: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212634: 0x0  nop
    ctx->pc = 0x212634u;
    // NOP
label_212638:
    // 0x212638: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x212638u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x21263c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x212640: 0x1040ff6a  beqz        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x212640u;
    {
        const bool branch_taken_0x212640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212640u;
            // 0x212644: 0x25c2ffff  addiu       $v0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212640) {
            ctx->pc = 0x2123ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2123ec;
        }
    }
    ctx->pc = 0x212648u;
    // 0x212648: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x212648u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x21264c: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21264Cu;
    {
        const bool branch_taken_0x21264c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x212650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21264Cu;
            // 0x212650: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21264c) {
            ctx->pc = 0x2126ACu;
            goto label_2126ac;
        }
    }
    ctx->pc = 0x212654u;
    // 0x212654: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x212654u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212658: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x212658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21265c: 0x0  nop
    ctx->pc = 0x21265cu;
    // NOP
label_212660:
    // 0x212660: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x212660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x212664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x212668: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x212668u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21266c: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x21266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212670: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x212670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212674: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x212674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x212678: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x212678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21267c: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x21267cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212680: 0x4a0103bd  .word       0x4A0103BD                   # vsqrt       $Q, $vf1x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x212680u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x212684: 0x4a0003bf  vwaitq
    ctx->pc = 0x212684u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x212688: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x212688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21268c: 0x4a0002ff  vnop
    ctx->pc = 0x21268cu;
    // NOP operation, no action needed for VU0
    // 0x212690: 0x4a0002ff  vnop
    ctx->pc = 0x212690u;
    // NOP operation, no action needed for VU0
    // 0x212694: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x212694u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212698: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x212698u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21269c: 0x0  nop
    ctx->pc = 0x21269cu;
    // NOP
    // 0x2126a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2126a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2126a4: 0x441ffee  bgez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2126A4u;
    {
        const bool branch_taken_0x2126a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2126A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2126A4u;
            // 0x2126a8: 0xe5410004  swc1        $f1, 0x4($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126a4) {
            ctx->pc = 0x212660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212660;
        }
    }
    ctx->pc = 0x2126ACu;
label_2126ac:
    // 0x2126ac: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x2126acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2126b0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2126b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2126b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2126b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2126b8: 0x0  nop
    ctx->pc = 0x2126b8u;
    // NOP
    // 0x2126bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2126BCu;
    {
        const bool branch_taken_0x2126bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2126C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2126BCu;
            // 0x2126c0: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126bc) {
            ctx->pc = 0x2126D4u;
            goto label_2126d4;
        }
    }
    ctx->pc = 0x2126C4u;
    // 0x2126c4: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x2126c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2126c8: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2126c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2126cc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x2126CCu;
    {
        const bool branch_taken_0x2126cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2126D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2126CCu;
            // 0x2126d0: 0xa5420000  sh          $v0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126cc) {
            ctx->pc = 0x212638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212638;
        }
    }
    ctx->pc = 0x2126D4u;
label_2126d4:
    // 0x2126d4: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x2126d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x2126d8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2126d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2126dc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2126dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2126e0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2126e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2126e4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2126e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2126e8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2126e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2126ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2126ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2126f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2126F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2126F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2126F0u;
            // 0x2126f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2126F8u;
}
