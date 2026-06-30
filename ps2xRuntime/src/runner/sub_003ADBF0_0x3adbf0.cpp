#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003ADBF0
// Address: 0x3adbf0 - 0x3ae110
void sub_003ADBF0_0x3adbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADBF0_0x3adbf0");
#endif

    switch (ctx->pc) {
        case 0x3adce0u: goto label_3adce0;
        case 0x3addf0u: goto label_3addf0;
        case 0x3adfa8u: goto label_3adfa8;
        case 0x3ae0d4u: goto label_3ae0d4;
        default: break;
    }

    ctx->pc = 0x3adbf0u;

    // 0x3adbf0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3adbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3adbf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3adbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3adbf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3adbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3adbfc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3adbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3adc00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3adc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3adc04: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x3adc04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x3adc08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3adc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3adc0c: 0x26949bc0  addiu       $s4, $s4, -0x6440
    ctx->pc = 0x3adc0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941632));
    // 0x3adc10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3adc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3adc14: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x3adc14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
    // 0x3adc18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3adc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3adc1c: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x3adc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
    // 0x3adc20: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3adc20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3adc24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3adc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3adc28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3adc2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3adc2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3adc30: 0x8d080d70  lw          $t0, 0xD70($t0)
    ctx->pc = 0x3adc30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3440)));
    // 0x3adc34: 0xc520007c  lwc1        $f0, 0x7C($t1)
    ctx->pc = 0x3adc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3adc38: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x3adc38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3adc3c: 0xc5020100  lwc1        $f2, 0x100($t0)
    ctx->pc = 0x3adc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3adc40: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x3adc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adc44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3adc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3adc48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3adc48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3adc4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3adc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adc50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADC50u;
    {
        const bool branch_taken_0x3adc50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADC50u;
            // 0x3adc54: 0x250300e8  addiu       $v1, $t0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc50) {
            ctx->pc = 0x3ADC60u;
            goto label_3adc60;
        }
    }
    ctx->pc = 0x3ADC58u;
    // 0x3adc58: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x3ADC58u;
    {
        const bool branch_taken_0x3adc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADC58u;
            // 0x3adc5c: 0xad20007c  sw          $zero, 0x7C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc58) {
            ctx->pc = 0x3AE0D4u;
            goto label_3ae0d4;
        }
    }
    ctx->pc = 0x3ADC60u;
label_3adc60:
    // 0x3adc60: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x3adc60u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3adc64: 0x240dff00  addiu       $t5, $zero, -0x100
    ctx->pc = 0x3adc64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3adc68: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x3adc68u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3adc6c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3adc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3adc70: 0x920a0087  lbu         $t2, 0x87($s0)
    ctx->pc = 0x3adc70u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 135)));
    // 0x3adc74: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x3adc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3adc78: 0x91910116  lbu         $s1, 0x116($t4)
    ctx->pc = 0x3adc78u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 278)));
    // 0x3adc7c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x3adc7cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3adc80: 0x0  nop
    ctx->pc = 0x3adc80u;
    // NOP
    // 0x3adc84: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3adc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3adc88: 0xa6100  sll         $t4, $t2, 4
    ctx->pc = 0x3adc88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x3adc8c: 0x22d6825  or          $t5, $s1, $t5
    ctx->pc = 0x3adc8cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) | GPR_U64(ctx, 13));
    // 0x3adc90: 0x28c6021  addu        $t4, $s4, $t4
    ctx->pc = 0x3adc90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x3adc94: 0x864a0002  lh          $t2, 0x2($s2)
    ctx->pc = 0x3adc94u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3adc98: 0xc5850000  lwc1        $f5, 0x0($t4)
    ctx->pc = 0x3adc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3adc9c: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x3adc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adca0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3adca0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3adca4: 0x46042983  div.s       $f6, $f5, $f4
    ctx->pc = 0x3adca4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[4];
    // 0x3adca8: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x3adca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3adcac: 0x46040903  div.s       $f4, $f1, $f4
    ctx->pc = 0x3adcacu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[4];
    // 0x3adcb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3adcb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3adcb4: 0xc5830004  lwc1        $f3, 0x4($t4)
    ctx->pc = 0x3adcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3adcb8: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3adcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3adcbc: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x3adcbcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[2];
    // 0x3adcc0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3adcc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3adcc4: 0x0  nop
    ctx->pc = 0x3adcc4u;
    // NOP
    // 0x3adcc8: 0x0  nop
    ctx->pc = 0x3adcc8u;
    // NOP
    // 0x3adccc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3adcccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x3adcd0: 0x0  nop
    ctx->pc = 0x3adcd0u;
    // NOP
    // 0x3adcd4: 0x0  nop
    ctx->pc = 0x3adcd4u;
    // NOP
    // 0x3adcd8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ADCD8u;
    {
        const bool branch_taken_0x3adcd8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adcd8) {
            ctx->pc = 0x3ADCFCu;
            goto label_3adcfc;
        }
    }
    ctx->pc = 0x3ADCE0u;
label_3adce0:
    // 0x3adce0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x3adce0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3adce4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3adce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3adce8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3adce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3adcec: 0x0  nop
    ctx->pc = 0x3adcecu;
    // NOP
    // 0x3adcf0: 0x0  nop
    ctx->pc = 0x3adcf0u;
    // NOP
    // 0x3adcf4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3ADCF4u;
    {
        const bool branch_taken_0x3adcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3adcf4) {
            ctx->pc = 0x3ADCE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3adce0;
        }
    }
    ctx->pc = 0x3ADCFCu;
label_3adcfc:
    // 0x3adcfc: 0xafad0088  sw          $t5, 0x88($sp)
    ctx->pc = 0x3adcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 13));
    // 0x3add00: 0xe7a4008c  swc1        $f4, 0x8C($sp)
    ctx->pc = 0x3add00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3add04: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x3add04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3add08: 0xafad009c  sw          $t5, 0x9C($sp)
    ctx->pc = 0x3add08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 13));
    // 0x3add0c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3add0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3add10: 0xafad00b0  sw          $t5, 0xB0($sp)
    ctx->pc = 0x3add10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 13));
    // 0x3add14: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3add14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3add18: 0xafad00c4  sw          $t5, 0xC4($sp)
    ctx->pc = 0x3add18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 13));
    // 0x3add1c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3add1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3add20: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x3add20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3add24: 0xe7a600b4  swc1        $f6, 0xB4($sp)
    ctx->pc = 0x3add24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3add28: 0xe7a600c8  swc1        $f6, 0xC8($sp)
    ctx->pc = 0x3add28u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3add2c: 0xc521007c  lwc1        $f1, 0x7C($t1)
    ctx->pc = 0x3add2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add30: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x3add30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3add34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3add34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3add38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3add38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3add3c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3add3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3add40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3ADD40u;
    {
        const bool branch_taken_0x3add40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3add40) {
            ctx->pc = 0x3ADD4Cu;
            goto label_3add4c;
        }
    }
    ctx->pc = 0x3ADD48u;
    // 0x3add48: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x3add48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_3add4c:
    // 0x3add4c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x3add4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3add50: 0x92690014  lbu         $t1, 0x14($s3)
    ctx->pc = 0x3add50u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3add54: 0x46801160  cvt.s.w     $f5, $f2
    ctx->pc = 0x3add54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3add58: 0x92680015  lbu         $t0, 0x15($s3)
    ctx->pc = 0x3add58u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x3add5c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3add5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3add60: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x3add60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3add64: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x3add64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3add68: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3add68u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3add6c: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x3add6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3add70: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x3add70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3add74: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3add74u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3add78: 0x0  nop
    ctx->pc = 0x3add78u;
    // NOP
    // 0x3add7c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3add7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3add80: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x3add80u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3add84: 0x0  nop
    ctx->pc = 0x3add84u;
    // NOP
    // 0x3add88: 0x468015a0  cvt.s.w     $f22, $f2
    ctx->pc = 0x3add88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x3add8c: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x3add8cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3add90: 0x0  nop
    ctx->pc = 0x3add90u;
    // NOP
    // 0x3add94: 0x46801560  cvt.s.w     $f21, $f2
    ctx->pc = 0x3add94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x3add98: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3add98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3add9c: 0x0  nop
    ctx->pc = 0x3add9cu;
    // NOP
    // 0x3adda0: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x3adda0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x3adda4: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x3adda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3adda8: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3adda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3addac: 0x4605319c  madd.s      $f6, $f6, $f5
    ctx->pc = 0x3addacu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x3addb0: 0x14e4000a  bne         $a3, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3ADDB0u;
    {
        const bool branch_taken_0x3addb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x3ADDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADDB0u;
            // 0x3addb4: 0x46021940  add.s       $f5, $f3, $f2 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3addb0) {
            ctx->pc = 0x3ADDDCu;
            goto label_3adddc;
        }
    }
    ctx->pc = 0x3ADDB8u;
    // 0x3addb8: 0x90640020  lbu         $a0, 0x20($v1)
    ctx->pc = 0x3addb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3addbc: 0x92650016  lbu         $a1, 0x16($s3)
    ctx->pc = 0x3addbcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x3addc0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3addc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3addc4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x3addc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3addc8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3addc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3addcc: 0x0  nop
    ctx->pc = 0x3addccu;
    // NOP
    // 0x3addd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3addd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3addd4: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x3addd4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x3addd8: 0x4602b581  sub.s       $f22, $f22, $f2
    ctx->pc = 0x3addd8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
label_3adddc:
    // 0x3adddc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x3adddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3adde0: 0xc6630030  lwc1        $f3, 0x30($s3)
    ctx->pc = 0x3adde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3adde4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x3adde4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3adde8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3adde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3addec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3addecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3addf0:
    // 0x3addf0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3addf0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3addf4: 0x0  nop
    ctx->pc = 0x3addf4u;
    // NOP
    // 0x3addf8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3addf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3addfc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3addfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ade00: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3ade00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ade04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3ADE04u;
    {
        const bool branch_taken_0x3ade04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADE04u;
            // 0x3ade08: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade04) {
            ctx->pc = 0x3ADE10u;
            goto label_3ade10;
        }
    }
    ctx->pc = 0x3ADE0Cu;
    // 0x3ade0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ade0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ade10:
    // 0x3ade10: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3ade10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3ade14: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x3ADE14u;
    {
        const bool branch_taken_0x3ade14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ade14) {
            ctx->pc = 0x3ADE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADE14u;
            // 0x3ade18: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ADFB0u;
            goto label_3adfb0;
        }
    }
    ctx->pc = 0x3ADE1Cu;
    // 0x3ade1c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3ade1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ade20: 0x0  nop
    ctx->pc = 0x3ade20u;
    // NOP
    // 0x3ade24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3ade24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ade28: 0xc6640030  lwc1        $f4, 0x30($s3)
    ctx->pc = 0x3ade28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ade2c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3ade2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3ade30: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3ade30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3ade34: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x3ade34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ade38: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3ADE38u;
    {
        const bool branch_taken_0x3ade38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADE38u;
            // 0x3ade3c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade38) {
            ctx->pc = 0x3ADE4Cu;
            goto label_3ade4c;
        }
    }
    ctx->pc = 0x3ADE40u;
    // 0x3ade40: 0x46040d01  sub.s       $f20, $f1, $f4
    ctx->pc = 0x3ade40u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3ade44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3ade44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ade48: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x3ade48u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_3ade4c:
    // 0x3ade4c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3ade4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3ade50: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3ade50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3ade54: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x3ADE54u;
    {
        const bool branch_taken_0x3ade54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ade54) {
            ctx->pc = 0x3ADFB8u;
            goto label_3adfb8;
        }
    }
    ctx->pc = 0x3ADE5Cu;
    // 0x3ade5c: 0x54a00011  bnel        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3ADE5Cu;
    {
        const bool branch_taken_0x3ade5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ade5c) {
            ctx->pc = 0x3ADE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADE5Cu;
            // 0x3ade60: 0x92640016  lbu         $a0, 0x16($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ADEA4u;
            goto label_3adea4;
        }
    }
    ctx->pc = 0x3ADE64u;
    // 0x3ade64: 0x4606b0c1  sub.s       $f3, $f22, $f6
    ctx->pc = 0x3ade64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[6]);
    // 0x3ade68: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x3ade68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3ade6c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x3ade6cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x3ade70: 0x460231c0  add.s       $f7, $f6, $f2
    ctx->pc = 0x3ade70u;
    ctx->f[7] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x3ade74: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3ade74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3ade78: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x3ade78u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x3ade7c: 0x460230c0  add.s       $f3, $f6, $f2
    ctx->pc = 0x3ade7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x3ade80: 0x4605a881  sub.s       $f2, $f21, $f5
    ctx->pc = 0x3ade80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[5]);
    // 0x3ade84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ade84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ade88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ade88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ade8c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x3ade8cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x3ade90: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x3ade90u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x3ade94: 0x0  nop
    ctx->pc = 0x3ade94u;
    // NOP
    // 0x3ade98: 0x46012980  add.s       $f6, $f5, $f1
    ctx->pc = 0x3ade98u;
    ctx->f[6] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3ade9c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3ADE9Cu;
    {
        const bool branch_taken_0x3ade9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADE9Cu;
            // 0x3adea0: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade9c) {
            ctx->pc = 0x3ADF3Cu;
            goto label_3adf3c;
        }
    }
    ctx->pc = 0x3ADEA4u;
label_3adea4:
    // 0x3adea4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3adea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3adea8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x3adea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3adeac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3adeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3adeb0: 0x0  nop
    ctx->pc = 0x3adeb0u;
    // NOP
    // 0x3adeb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3adeb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3adeb8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ADEB8u;
    {
        const bool branch_taken_0x3adeb8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3ADEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADEB8u;
            // 0x3adebc: 0x4602b0c0  add.s       $f3, $f22, $f2 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adeb8) {
            ctx->pc = 0x3ADECCu;
            goto label_3adecc;
        }
    }
    ctx->pc = 0x3ADEC0u;
    // 0x3adec0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3adec0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3adec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ADEC4u;
    {
        const bool branch_taken_0x3adec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADEC4u;
            // 0x3adec8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adec4) {
            ctx->pc = 0x3ADEE8u;
            goto label_3adee8;
        }
    }
    ctx->pc = 0x3ADECCu;
label_3adecc:
    // 0x3adecc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3adeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3aded0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3aded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3aded4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aded4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aded8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3aded8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3adedc: 0x0  nop
    ctx->pc = 0x3adedcu;
    // NOP
    // 0x3adee0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3adee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3adee4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3adee4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3adee8:
    // 0x3adee8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3adee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3adeec: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x3adeecu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x3adef0: 0x4600a986  mov.s       $f6, $f21
    ctx->pc = 0x3adef0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[21]);
    // 0x3adef4: 0x0  nop
    ctx->pc = 0x3adef4u;
    // NOP
    // 0x3adef8: 0x0  nop
    ctx->pc = 0x3adef8u;
    // NOP
    // 0x3adefc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ADEFCu;
    {
        const bool branch_taken_0x3adefc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3ADF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADEFCu;
            // 0x3adf00: 0x460309c0  add.s       $f7, $f1, $f3 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adefc) {
            ctx->pc = 0x3ADF10u;
            goto label_3adf10;
        }
    }
    ctx->pc = 0x3ADF04u;
    // 0x3adf04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3adf04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3adf08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ADF08u;
    {
        const bool branch_taken_0x3adf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADF08u;
            // 0x3adf0c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adf08) {
            ctx->pc = 0x3ADF2Cu;
            goto label_3adf2c;
        }
    }
    ctx->pc = 0x3ADF10u;
label_3adf10:
    // 0x3adf10: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3adf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3adf14: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3adf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3adf18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3adf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3adf1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3adf1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3adf20: 0x0  nop
    ctx->pc = 0x3adf20u;
    // NOP
    // 0x3adf24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3adf24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3adf28: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3adf28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3adf2c:
    // 0x3adf2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3adf2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3adf30: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x3adf30u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x3adf34: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x3adf34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3adf38: 0x4600a946  mov.s       $f5, $f21
    ctx->pc = 0x3adf38u;
    ctx->f[5] = FPU_MOV_S(ctx->f[21]);
label_3adf3c:
    // 0x3adf3c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x3adf3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3adf40: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3adf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3adf44: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x3adf44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3adf48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3adf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3adf4c: 0xc6620038  lwc1        $f2, 0x38($s3)
    ctx->pc = 0x3adf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3adf50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3adf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3adf54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3adf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3adf58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3adf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3adf5c: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x3adf5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x3adf60: 0x46022800  add.s       $f0, $f5, $f2
    ctx->pc = 0x3adf60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x3adf64: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3adf64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3adf68: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3adf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3adf6c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3adf6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3adf70: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3adf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3adf74: 0x46023041  sub.s       $f1, $f6, $f2
    ctx->pc = 0x3adf74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x3adf78: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x3adf78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x3adf7c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x3adf7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3adf80: 0xe7a700a8  swc1        $f7, 0xA8($sp)
    ctx->pc = 0x3adf80u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3adf84: 0xe7a700bc  swc1        $f7, 0xBC($sp)
    ctx->pc = 0x3adf84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3adf88: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x3adf88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3adf8c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3adf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3adf90: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x3adf90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3adf94: 0xe7a700a8  swc1        $f7, 0xA8($sp)
    ctx->pc = 0x3adf94u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3adf98: 0xe7a700bc  swc1        $f7, 0xBC($sp)
    ctx->pc = 0x3adf98u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3adf9c: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x3adf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3adfa0: 0xc050780  jal         func_141E00
    ctx->pc = 0x3ADFA0u;
    SET_GPR_U32(ctx, 31, 0x3ADFA8u);
    ctx->pc = 0x3ADFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADFA0u;
            // 0x3adfa4: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ADFA8u; }
        if (ctx->pc != 0x3ADFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ADFA8u; }
        if (ctx->pc != 0x3ADFA8u) { return; }
    }
    ctx->pc = 0x3ADFA8u;
label_3adfa8:
    // 0x3adfa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADFA8u;
    {
        const bool branch_taken_0x3adfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adfa8) {
            ctx->pc = 0x3ADFB8u;
            goto label_3adfb8;
        }
    }
    ctx->pc = 0x3ADFB0u;
label_3adfb0:
    // 0x3adfb0: 0x4a1ff8f  bgez        $a1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x3ADFB0u;
    {
        const bool branch_taken_0x3adfb0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x3adfb0) {
            ctx->pc = 0x3ADDF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3addf0;
        }
    }
    ctx->pc = 0x3ADFB8u;
label_3adfb8:
    // 0x3adfb8: 0x6a20047  bltzl       $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x3ADFB8u;
    {
        const bool branch_taken_0x3adfb8 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x3adfb8) {
            ctx->pc = 0x3ADFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADFB8u;
            // 0x3adfbc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE0D8u;
            goto label_3ae0d8;
        }
    }
    ctx->pc = 0x3ADFC0u;
    // 0x3adfc0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3adfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x3adfc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3adfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3adfc8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3adfc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3adfcc: 0x0  nop
    ctx->pc = 0x3adfccu;
    // NOP
    // 0x3adfd0: 0x46141882  mul.s       $f2, $f3, $f20
    ctx->pc = 0x3adfd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3adfd4: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x3adfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adfd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3adfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3adfdc: 0x0  nop
    ctx->pc = 0x3adfdcu;
    // NOP
    // 0x3adfe0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3adfe0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x3adfe4: 0x0  nop
    ctx->pc = 0x3adfe4u;
    // NOP
    // 0x3adfe8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3adfe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3adfec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3adfecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adff0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3ADFF0u;
    {
        const bool branch_taken_0x3adff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adff0) {
            ctx->pc = 0x3ADFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADFF0u;
            // 0x3adff4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE008u;
            goto label_3ae008;
        }
    }
    ctx->pc = 0x3ADFF8u;
    // 0x3adff8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3adff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3adffc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3adffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ae000: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AE000u;
    {
        const bool branch_taken_0x3ae000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE000u;
            // 0x3ae004: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae000) {
            ctx->pc = 0x3AE020u;
            goto label_3ae020;
        }
    }
    ctx->pc = 0x3AE008u;
label_3ae008:
    // 0x3ae008: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ae008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae00c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae00cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ae010: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ae010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ae014: 0x0  nop
    ctx->pc = 0x3ae014u;
    // NOP
    // 0x3ae018: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ae018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ae01c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ae01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ae020:
    // 0x3ae020: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3ae020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ae024: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x3ae024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ae028: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE028u;
    {
        const bool branch_taken_0x3ae028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae028) {
            ctx->pc = 0x3AE02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE028u;
            // 0x3ae02c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE038u;
            goto label_3ae038;
        }
    }
    ctx->pc = 0x3AE030u;
    // 0x3ae030: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3ae030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ae034: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3ae034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ae038:
    // 0x3ae038: 0x92630016  lbu         $v1, 0x16($s3)
    ctx->pc = 0x3ae038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x3ae03c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3ae03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3ae040: 0x3c0b3f00  lui         $t3, 0x3F00
    ctx->pc = 0x3ae040u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16128 << 16));
    // 0x3ae044: 0xc6640018  lwc1        $f4, 0x18($s3)
    ctx->pc = 0x3ae044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ae048: 0x92040088  lbu         $a0, 0x88($s0)
    ctx->pc = 0x3ae048u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3ae04c: 0xc4409b38  lwc1        $f0, -0x64C8($v0)
    ctx->pc = 0x3ae04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae050: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x3ae050u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ae054: 0x755018  mult        $t2, $v1, $s5
    ctx->pc = 0x3ae054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3ae058: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x3ae058u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3ae05c: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x3ae05cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ae060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ae060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae064: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3ae064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ae068: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3ae068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3ae06c: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x3ae06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3ae070: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3ae070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3ae074: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x3ae074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3ae078: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3ae078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3ae07c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x3ae07cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3ae080: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ae080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ae084: 0xc4419b3c  lwc1        $f1, -0x64C4($v0)
    ctx->pc = 0x3ae084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae088: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x3ae088u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ae08c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3ae08cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3ae090: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3ae090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ae094: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3ae094u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae098: 0x0  nop
    ctx->pc = 0x3ae098u;
    // NOP
    // 0x3ae09c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ae0a0: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x3ae0a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3ae0a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3ae0a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae0a8: 0x0  nop
    ctx->pc = 0x3ae0a8u;
    // NOP
    // 0x3ae0ac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ae0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3ae0b0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ae0b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae0b4: 0x0  nop
    ctx->pc = 0x3ae0b4u;
    // NOP
    // 0x3ae0b8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ae0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3ae0bc: 0x46030b01  sub.s       $f12, $f1, $f3
    ctx->pc = 0x3ae0bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3ae0c0: 0x46030b80  add.s       $f14, $f1, $f3
    ctx->pc = 0x3ae0c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3ae0c4: 0x4602ab41  sub.s       $f13, $f21, $f2
    ctx->pc = 0x3ae0c4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3ae0c8: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x3ae0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3ae0cc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AE0CCu;
    SET_GPR_U32(ctx, 31, 0x3AE0D4u);
    ctx->pc = 0x3AE0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE0CCu;
            // 0x3ae0d0: 0x4602abc0  add.s       $f15, $f21, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE0D4u; }
        if (ctx->pc != 0x3AE0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE0D4u; }
        if (ctx->pc != 0x3AE0D4u) { return; }
    }
    ctx->pc = 0x3AE0D4u;
label_3ae0d4:
    // 0x3ae0d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ae0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3ae0d8:
    // 0x3ae0d8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3ae0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3ae0dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ae0dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ae0e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ae0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ae0e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ae0e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae0e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ae0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ae0ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ae0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae0f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ae0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae0f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ae0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae0f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ae0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE0FCu;
            // 0x3ae100: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AE104u;
    // 0x3ae104: 0x0  nop
    ctx->pc = 0x3ae104u;
    // NOP
    // 0x3ae108: 0x0  nop
    ctx->pc = 0x3ae108u;
    // NOP
    // 0x3ae10c: 0x0  nop
    ctx->pc = 0x3ae10cu;
    // NOP
}
