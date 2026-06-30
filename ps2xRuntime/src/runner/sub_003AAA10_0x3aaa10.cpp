#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AAA10
// Address: 0x3aaa10 - 0x3ab090
void sub_003AAA10_0x3aaa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAA10_0x3aaa10");
#endif

    switch (ctx->pc) {
        case 0x3aabe4u: goto label_3aabe4;
        case 0x3aad24u: goto label_3aad24;
        case 0x3aad84u: goto label_3aad84;
        case 0x3ab038u: goto label_3ab038;
        default: break;
    }

    ctx->pc = 0x3aaa10u;

    // 0x3aaa10: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3aaa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3aaa14: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x3aaa14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x3aaa18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3aaa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3aaa1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aaa1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaa20: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3aaa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3aaa24: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3aaa24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x3aaa28: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3aaa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3aaa2c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3aaa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3aaa30: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3aaa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3aaa34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aaa34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aaa38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3aaa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3aaa3c: 0x25089bc0  addiu       $t0, $t0, -0x6440
    ctx->pc = 0x3aaa3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941632));
    // 0x3aaa40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3aaa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3aaa44: 0x24a52100  addiu       $a1, $a1, 0x2100
    ctx->pc = 0x3aaa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8448));
    // 0x3aaa48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3aaa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3aaa4c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3aaa4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3aaa50: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3aaa50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3aaa54: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3aaa54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3aaa58: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3aaa58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3aaa5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3aaa5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3aaa60: 0x8c890034  lw          $t1, 0x34($a0)
    ctx->pc = 0x3aaa60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3aaa64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3aaa64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3aaa68: 0x908b0028  lbu         $t3, 0x28($a0)
    ctx->pc = 0x3aaa68u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3aaa6c: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x3aaa6cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3aaa70: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x3aaa70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x3aaa74: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x3aaa74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x3aaa78: 0x91290001  lbu         $t1, 0x1($t1)
    ctx->pc = 0x3aaa78u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3aaa7c: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x3aaa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3aaa80: 0xc5640008  lwc1        $f4, 0x8($t3)
    ctx->pc = 0x3aaa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3aaa84: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x3aaa84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3aaa88: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aaa88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaa8c: 0x0  nop
    ctx->pc = 0x3aaa8cu;
    // NOP
    // 0x3aaa90: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x3aaa90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x3aaa94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3aaa94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaa98: 0x0  nop
    ctx->pc = 0x3aaa98u;
    // NOP
    // 0x3aaa9c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3aaa9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3aaaa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aaaa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaaa4: 0x0  nop
    ctx->pc = 0x3aaaa4u;
    // NOP
    // 0x3aaaa8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3aaaa8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aaaac: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAAACu;
    {
        const bool branch_taken_0x3aaaac = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x3AAAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAAACu;
            // 0x3aaab0: 0x4603261c  madd.s      $f24, $f4, $f3 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaaac) {
            ctx->pc = 0x3AAAC0u;
            goto label_3aaac0;
        }
    }
    ctx->pc = 0x3AAAB4u;
    // 0x3aaab4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3aaab4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAAB8u;
    {
        const bool branch_taken_0x3aaab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAAB8u;
            // 0x3aaabc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaab8) {
            ctx->pc = 0x3AAADCu;
            goto label_3aaadc;
        }
    }
    ctx->pc = 0x3AAAC0u;
label_3aaac0:
    // 0x3aaac0: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x3aaac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x3aaac4: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x3aaac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x3aaac8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3aaac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3aaacc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aaaccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaad0: 0x0  nop
    ctx->pc = 0x3aaad0u;
    // NOP
    // 0x3aaad4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aaad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aaad8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3aaad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3aaadc:
    // 0x3aaadc: 0x5420004  bltzl       $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAADCu;
    {
        const bool branch_taken_0x3aaadc = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x3aaadc) {
            ctx->pc = 0x3AAAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAADCu;
            // 0x3aaae0: 0xa3042  srl         $a2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAAE4u;
    // 0x3aaae4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3aaae4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaae8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAAE8u;
    {
        const bool branch_taken_0x3aaae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAAE8u;
            // 0x3aaaec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaae8) {
            ctx->pc = 0x3AAB08u;
            goto label_3aab08;
        }
    }
    ctx->pc = 0x3AAAF0u;
label_3aaaf0:
    // 0x3aaaf0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x3aaaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3aaaf4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3aaaf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3aaaf8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aaaf8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaafc: 0x0  nop
    ctx->pc = 0x3aaafcu;
    // NOP
    // 0x3aab00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aab00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aab04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3aab04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3aab08:
    // 0x3aab08: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3aab08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3aab0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3aab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3aab10: 0xc4c3f484  lwc1        $f3, -0xB7C($a2)
    ctx->pc = 0x3aab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aab14: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x3aab14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x3aab18: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3aab18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3aab1c: 0x3c0b4000  lui         $t3, 0x4000
    ctx->pc = 0x3aab1cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16384 << 16));
    // 0x3aab20: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x3aab20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3aab24: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x3aab24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
    // 0x3aab28: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x3aab28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3aab2c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3aab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3aab30: 0xc520f480  lwc1        $f0, -0xB80($t1)
    ctx->pc = 0x3aab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294964352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aab34: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x3aab34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3aab38: 0xc4c2f488  lwc1        $f2, -0xB78($a2)
    ctx->pc = 0x3aab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aab3c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x3aab3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x3aab40: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x3aab40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x3aab44: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3aab44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3aab48: 0xc4c0f48c  lwc1        $f0, -0xB74($a2)
    ctx->pc = 0x3aab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aab4c: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x3aab4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x3aab50: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x3aab50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x3aab54: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3aab54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3aab58: 0xc4c2f490  lwc1        $f2, -0xB70($a2)
    ctx->pc = 0x3aab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aab5c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3aab5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x3aab60: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3aab60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3aab64: 0xc4c0f494  lwc1        $f0, -0xB6C($a2)
    ctx->pc = 0x3aab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aab68: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x3aab68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3aab6c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3aab6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3aab70: 0xc4c2f498  lwc1        $f2, -0xB68($a2)
    ctx->pc = 0x3aab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aab74: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x3aab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3aab78: 0xc520f49c  lwc1        $f0, -0xB64($t1)
    ctx->pc = 0x3aab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294964380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aab7c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x3aab7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3aab80: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3aab80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3aab84: 0xc4c2f4a0  lwc1        $f2, -0xB60($a2)
    ctx->pc = 0x3aab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aab88: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x3aab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3aab8c: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x3aab8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x3aab90: 0xc520f4a4  lwc1        $f0, -0xB5C($t1)
    ctx->pc = 0x3aab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294964388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aab94: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3aab94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3aab98: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x3aab98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3aab9c: 0xc4c44890  lwc1        $f4, 0x4890($a2)
    ctx->pc = 0x3aab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3aaba0: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x3aaba0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
    // 0x3aaba4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x3aaba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x3aaba8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3aaba8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aabac: 0x0  nop
    ctx->pc = 0x3aabacu;
    // NOP
    // 0x3aabb0: 0x46040080  add.s       $f2, $f0, $f4
    ctx->pc = 0x3aabb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3aabb4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3aabb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3aabb8: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x3aabb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3aabbc: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x3aabbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3aabc0: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x3aabc0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aabc4: 0xc4c348f0  lwc1        $f3, 0x48F0($a2)
    ctx->pc = 0x3aabc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aabc8: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x3aabc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3aabcc: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x3aabccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
    // 0x3aabd0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3aabd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3aabd4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3aabd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3aabd8: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x3aabd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3aabdc: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AABDCu;
    {
        const bool branch_taken_0x3aabdc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AABDCu;
            // 0x3aabe0: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabdc) {
            ctx->pc = 0x3AAC00u;
            goto label_3aac00;
        }
    }
    ctx->pc = 0x3AABE4u;
label_3aabe4:
    // 0x3aabe4: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x3aabe4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aabe8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3aabe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3aabec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3aabecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3aabf0: 0x0  nop
    ctx->pc = 0x3aabf0u;
    // NOP
    // 0x3aabf4: 0x0  nop
    ctx->pc = 0x3aabf4u;
    // NOP
    // 0x3aabf8: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AABF8u;
    {
        const bool branch_taken_0x3aabf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aabf8) {
            ctx->pc = 0x3AABE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3aabe4;
        }
    }
    ctx->pc = 0x3AAC00u;
label_3aac00:
    // 0x3aac00: 0xc7a70100  lwc1        $f7, 0x100($sp)
    ctx->pc = 0x3aac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3aac04: 0xc7a60104  lwc1        $f6, 0x104($sp)
    ctx->pc = 0x3aac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3aac08: 0xc7a50108  lwc1        $f5, 0x108($sp)
    ctx->pc = 0x3aac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3aac0c: 0xc7a4010c  lwc1        $f4, 0x10C($sp)
    ctx->pc = 0x3aac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3aac10: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x3aac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aac14: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x3aac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aac18: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x3aac18u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x3aac1c: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x3aac1cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x3aac20: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x3aac20u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x3aac24: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x3aac24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x3aac28: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3aac28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x3aac2c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3aac2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x3aac30: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3aac30u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aac34: 0x460f39c3  div.s       $f7, $f7, $f15
    ctx->pc = 0x3aac34u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[7] = ctx->f[7] / ctx->f[15];
    // 0x3aac38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aac38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aac3c: 0x460f3183  div.s       $f6, $f6, $f15
    ctx->pc = 0x3aac3cu;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[6] = ctx->f[6] / ctx->f[15];
    // 0x3aac40: 0x460f2943  div.s       $f5, $f5, $f15
    ctx->pc = 0x3aac40u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[15];
    // 0x3aac44: 0x460f2103  div.s       $f4, $f4, $f15
    ctx->pc = 0x3aac44u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[15];
    // 0x3aac48: 0x460f18c3  div.s       $f3, $f3, $f15
    ctx->pc = 0x3aac48u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[15];
    // 0x3aac4c: 0x460f1083  div.s       $f2, $f2, $f15
    ctx->pc = 0x3aac4cu;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[15];
    // 0x3aac50: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x3aac50u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3aac54: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x3aac54u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x3aac58: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x3aac58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3aac5c: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x3aac5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3aac60: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3aac60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3aac64: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3aac64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3aac68: 0x460e6836  c.le.s      $f13, $f14
    ctx->pc = 0x3aac68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aac6c: 0xe7a700e0  swc1        $f7, 0xE0($sp)
    ctx->pc = 0x3aac6cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3aac70: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x3aac70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3aac74: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x3aac74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3aac78: 0xe7a400ec  swc1        $f4, 0xEC($sp)
    ctx->pc = 0x3aac78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3aac7c: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x3aac7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3aac80: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAC80u;
    {
        const bool branch_taken_0x3aac80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AAC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAC80u;
            // 0x3aac84: 0xe7a200f4  swc1        $f2, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac80) {
            ctx->pc = 0x3AACA4u;
            goto label_3aaca4;
        }
    }
    ctx->pc = 0x3AAC88u;
    // 0x3aac88: 0x460c7082  mul.s       $f2, $f14, $f12
    ctx->pc = 0x3aac88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x3aac8c: 0x460f1083  div.s       $f2, $f2, $f15
    ctx->pc = 0x3aac8cu;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[15];
    // 0x3aac90: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x3aac90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x3aac94: 0x0  nop
    ctx->pc = 0x3aac94u;
    // NOP
    // 0x3aac98: 0x0  nop
    ctx->pc = 0x3aac98u;
    // NOP
    // 0x3aac9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AAC9Cu;
    {
        const bool branch_taken_0x3aac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AACA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAC9Cu;
            // 0x3aaca0: 0x46020202  mul.s       $f8, $f0, $f2 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac9c) {
            ctx->pc = 0x3AACB4u;
            goto label_3aacb4;
        }
    }
    ctx->pc = 0x3AACA4u;
label_3aaca4:
    // 0x3aaca4: 0x460c6882  mul.s       $f2, $f13, $f12
    ctx->pc = 0x3aaca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x3aaca8: 0x460f1083  div.s       $f2, $f2, $f15
    ctx->pc = 0x3aaca8u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[15];
    // 0x3aacac: 0x46020202  mul.s       $f8, $f0, $f2
    ctx->pc = 0x3aacacu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3aacb0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x3aacb0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_3aacb4:
    // 0x3aacb4: 0x460c4036  c.le.s      $f8, $f12
    ctx->pc = 0x3aacb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aacb8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3AACB8u;
    {
        const bool branch_taken_0x3aacb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aacb8) {
            ctx->pc = 0x3AACBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AACB8u;
            // 0x3aacbc: 0x908b002c  lbu         $t3, 0x2C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AACC8u;
            goto label_3aacc8;
        }
    }
    ctx->pc = 0x3AACC0u;
    // 0x3aacc0: 0x46006206  mov.s       $f8, $f12
    ctx->pc = 0x3aacc0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[12]);
    // 0x3aacc4: 0x908b002c  lbu         $t3, 0x2C($a0)
    ctx->pc = 0x3aacc4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_3aacc8:
    // 0x3aacc8: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x3aacc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x3aaccc: 0x84aa0000  lh          $t2, 0x0($a1)
    ctx->pc = 0x3aacccu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3aacd0: 0x2529f4b0  addiu       $t1, $t1, -0xB50
    ctx->pc = 0x3aacd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964400));
    // 0x3aacd4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3aacd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3aacd8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3aacd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3aacdc: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x3aacdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3aace0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3aace0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aace4: 0x0  nop
    ctx->pc = 0x3aace4u;
    // NOP
    // 0x3aace8: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3aace8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3aacec: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x3aacecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x3aacf0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x3aacf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3aacf4: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x3aacf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3aacf8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3aacf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aacfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aacfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aad00: 0x460531c3  div.s       $f7, $f6, $f5
    ctx->pc = 0x3aad00u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[7] = ctx->f[6] / ctx->f[5];
    // 0x3aad04: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x3aad04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x3aad08: 0x46051143  div.s       $f5, $f2, $f5
    ctx->pc = 0x3aad08u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[5] = ctx->f[2] / ctx->f[5];
    // 0x3aad0c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3aad0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3aad10: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x3aad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3aad14: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3aad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aad18: 0x46032083  div.s       $f2, $f4, $f3
    ctx->pc = 0x3aad18u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[3];
    // 0x3aad1c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3aad1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3aad20: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3aad20u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_3aad24:
    // 0x3aad24: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x3aad24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3aad28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3aad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3aad2c: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x3aad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3aad30: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3aad30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3aad34: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x3aad34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x3aad38: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3aad38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3aad3c: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AAD3Cu;
    {
        const bool branch_taken_0x3aad3c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3AAD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAD3Cu;
            // 0x3aad40: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad3c) {
            ctx->pc = 0x3AAD24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3aad24;
        }
    }
    ctx->pc = 0x3AAD44u;
    // 0x3aad44: 0x4608c540  add.s       $f21, $f24, $f8
    ctx->pc = 0x3aad44u;
    ctx->f[21] = FPU_ADD_S(ctx->f[24], ctx->f[8]);
    // 0x3aad48: 0x8fb50120  lw          $s5, 0x120($sp)
    ctx->pc = 0x3aad48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3aad4c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x3aad4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3aad50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3aad50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aad54: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x3aad54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3aad58: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x3aad58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3aad5c: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x3aad5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3aad60: 0x4601bd00  add.s       $f20, $f23, $f1
    ctx->pc = 0x3aad60u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x3aad64: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x3aad64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3aad68: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x3aad68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3aad6c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3aad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3aad70: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3aad70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3aad74: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x3aad74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3aad78: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x3aad78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3aad7c: 0xe7a700c4  swc1        $f7, 0xC4($sp)
    ctx->pc = 0x3aad7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3aad80: 0xe7a700d8  swc1        $f7, 0xD8($sp)
    ctx->pc = 0x3aad80u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3aad84:
    // 0x3aad84: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3aad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aad88: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x3aad88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aad8c: 0x450100aa  bc1t        . + 4 + (0xAA << 2)
    ctx->pc = 0x3AAD8Cu;
    {
        const bool branch_taken_0x3aad8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aad8c) {
            ctx->pc = 0x3AB038u;
            goto label_3ab038;
        }
    }
    ctx->pc = 0x3AAD94u;
    // 0x3aad94: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3aad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aad98: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x3aad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aad9c: 0x4602b036  c.le.s      $f22, $f2
    ctx->pc = 0x3aad9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aada0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3AADA0u;
    {
        const bool branch_taken_0x3aada0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AADA0u;
            // 0x3aada4: 0x4600c140  add.s       $f5, $f24, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aada0) {
            ctx->pc = 0x3AADB4u;
            goto label_3aadb4;
        }
    }
    ctx->pc = 0x3AADA8u;
    // 0x3aada8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3aada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aadac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AADACu;
    {
        const bool branch_taken_0x3aadac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AADACu;
            // 0x3aadb0: 0x4600c100  add.s       $f4, $f24, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadac) {
            ctx->pc = 0x3AADB8u;
            goto label_3aadb8;
        }
    }
    ctx->pc = 0x3AADB4u;
label_3aadb4:
    // 0x3aadb4: 0x4600a906  mov.s       $f4, $f21
    ctx->pc = 0x3aadb4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[21]);
label_3aadb8:
    // 0x3aadb8: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3aadb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3aadbc: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x3aadbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x3aadc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3aadc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aadc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3AADC4u;
    {
        const bool branch_taken_0x3aadc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aadc4) {
            ctx->pc = 0x3AADD0u;
            goto label_3aadd0;
        }
    }
    ctx->pc = 0x3AADCCu;
    // 0x3aadcc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3aadccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_3aadd0:
    // 0x3aadd0: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x3aadd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x3aadd4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3aadd4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x3aadd8: 0x2a61024  and         $v0, $s5, $a2
    ctx->pc = 0x3aadd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 6));
    // 0x3aaddc: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x3aaddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3aade0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x3aade0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aade4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3aade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3aade8: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x3aade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x3aadec: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x3aadecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3aadf0: 0x32a2ff00  andi        $v0, $s5, 0xFF00
    ctx->pc = 0x3aadf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x3aadf4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3aadf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3aadf8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3aadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3aadfc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aadfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aae00: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3aae00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aae04: 0x2b01025  or          $v0, $s5, $s0
    ctx->pc = 0x3aae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
    // 0x3aae08: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3aae08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3aae0c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x3aae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x3aae10: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x3aae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3aae14: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x3aae14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3aae18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3aae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3aae1c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3aae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3aae20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aae24: 0x0  nop
    ctx->pc = 0x3aae24u;
    // NOP
    // 0x3aae28: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3aae28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3aae2c: 0xe7b700bc  swc1        $f23, 0xBC($sp)
    ctx->pc = 0x3aae2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3aae30: 0xe7b70094  swc1        $f23, 0x94($sp)
    ctx->pc = 0x3aae30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3aae34: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3aae34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3aae38: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x3aae38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3aae3c: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x3aae3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3aae40: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x3aae40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3aae44: 0xe7a400cc  swc1        $f4, 0xCC($sp)
    ctx->pc = 0x3aae44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3aae48: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAE48u;
    {
        const bool branch_taken_0x3aae48 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x3AAE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAE48u;
            // 0x3aae4c: 0xe7a400b8  swc1        $f4, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae48) {
            ctx->pc = 0x3AAE5Cu;
            goto label_3aae5c;
        }
    }
    ctx->pc = 0x3AAE50u;
    // 0x3aae50: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3aae50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aae54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAE54u;
    {
        const bool branch_taken_0x3aae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAE54u;
            // 0x3aae58: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae54) {
            ctx->pc = 0x3AAE78u;
            goto label_3aae78;
        }
    }
    ctx->pc = 0x3AAE5Cu;
label_3aae5c:
    // 0x3aae5c: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x3aae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x3aae60: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x3aae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3aae64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3aae64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3aae68: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aae68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aae6c: 0x0  nop
    ctx->pc = 0x3aae6cu;
    // NOP
    // 0x3aae70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aae70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aae74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3aae74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3aae78:
    // 0x3aae78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aae78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aae7c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3aae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3aae80: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3aae80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aae84: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3aae84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3aae88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aae88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aae8c: 0x0  nop
    ctx->pc = 0x3aae8cu;
    // NOP
    // 0x3aae90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3aae90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aae94: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3AAE94u;
    {
        const bool branch_taken_0x3aae94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aae94) {
            ctx->pc = 0x3AAE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAE94u;
            // 0x3aae98: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AAEACu;
            goto label_3aaeac;
        }
    }
    ctx->pc = 0x3AAE9Cu;
    // 0x3aae9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aae9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3aaea0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3aaea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3aaea4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAEA4u;
    {
        const bool branch_taken_0x3aaea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAEA4u;
            // 0x3aaea8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaea4) {
            ctx->pc = 0x3AAEC4u;
            goto label_3aaec4;
        }
    }
    ctx->pc = 0x3AAEACu;
label_3aaeac:
    // 0x3aaeac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3aaeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3aaeb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aaeb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3aaeb4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3aaeb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3aaeb8: 0x0  nop
    ctx->pc = 0x3aaeb8u;
    // NOP
    // 0x3aaebc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3aaebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3aaec0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3aaec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3aaec4:
    // 0x3aaec4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3aaec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3aaec8: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x3aaec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x3aaecc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3aaeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3aaed0: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x3aaed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3aaed4: 0x63c02  srl         $a3, $a2, 16
    ctx->pc = 0x3aaed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x3aaed8: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3aaed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3aaedc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x3aaedcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3aaee0: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x3aaee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3aaee4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aaee4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaee8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAEE8u;
    {
        const bool branch_taken_0x3aaee8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3AAEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAEE8u;
            // 0x3aaeec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaee8) {
            ctx->pc = 0x3AAEFCu;
            goto label_3aaefc;
        }
    }
    ctx->pc = 0x3AAEF0u;
    // 0x3aaef0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aaef0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAEF4u;
    {
        const bool branch_taken_0x3aaef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAEF4u;
            // 0x3aaef8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaef4) {
            ctx->pc = 0x3AAF18u;
            goto label_3aaf18;
        }
    }
    ctx->pc = 0x3AAEFCu;
label_3aaefc:
    // 0x3aaefc: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x3aaefcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3aaf00: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3aaf00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3aaf04: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3aaf04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3aaf08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aaf08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaf0c: 0x0  nop
    ctx->pc = 0x3aaf0cu;
    // NOP
    // 0x3aaf10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aaf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aaf14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3aaf14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3aaf18:
    // 0x3aaf18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aaf18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaf1c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x3aaf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x3aaf20: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3aaf20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aaf24: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3aaf24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3aaf28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aaf28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaf2c: 0x0  nop
    ctx->pc = 0x3aaf2cu;
    // NOP
    // 0x3aaf30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3aaf30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aaf34: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3AAF34u;
    {
        const bool branch_taken_0x3aaf34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aaf34) {
            ctx->pc = 0x3AAF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAF34u;
            // 0x3aaf38: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AAF4Cu;
            goto label_3aaf4c;
        }
    }
    ctx->pc = 0x3AAF3Cu;
    // 0x3aaf3c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aaf3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3aaf40: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3aaf40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3aaf44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAF44u;
    {
        const bool branch_taken_0x3aaf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAF44u;
            // 0x3aaf48: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf44) {
            ctx->pc = 0x3AAF64u;
            goto label_3aaf64;
        }
    }
    ctx->pc = 0x3AAF4Cu;
label_3aaf4c:
    // 0x3aaf4c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3aaf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3aaf50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aaf50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3aaf54: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3aaf54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3aaf58: 0x0  nop
    ctx->pc = 0x3aaf58u;
    // NOP
    // 0x3aaf5c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3aaf5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3aaf60: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3aaf60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3aaf64:
    // 0x3aaf64: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x3aaf64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3aaf68: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3aaf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3aaf6c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3aaf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3aaf70: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3aaf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3aaf74: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x3aaf74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3aaf78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3aaf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3aaf7c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3aaf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3aaf80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3aaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aaf84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aaf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaf88: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AAF88u;
    {
        const bool branch_taken_0x3aaf88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AAF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAF88u;
            // 0x3aaf8c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf88) {
            ctx->pc = 0x3AAF9Cu;
            goto label_3aaf9c;
        }
    }
    ctx->pc = 0x3AAF90u;
    // 0x3aaf90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aaf90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aaf94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAF94u;
    {
        const bool branch_taken_0x3aaf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAF94u;
            // 0x3aaf98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf94) {
            ctx->pc = 0x3AAFB8u;
            goto label_3aafb8;
        }
    }
    ctx->pc = 0x3AAF9Cu;
label_3aaf9c:
    // 0x3aaf9c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3aaf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3aafa0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3aafa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3aafa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aafa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aafa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aafa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aafac: 0x0  nop
    ctx->pc = 0x3aafacu;
    // NOP
    // 0x3aafb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aafb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aafb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3aafb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3aafb8:
    // 0x3aafb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aafb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aafbc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3aafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3aafc0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3aafc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3aafc4: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3aafc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3aafc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aafc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aafcc: 0x0  nop
    ctx->pc = 0x3aafccu;
    // NOP
    // 0x3aafd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3aafd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aafd4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3AAFD4u;
    {
        const bool branch_taken_0x3aafd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aafd4) {
            ctx->pc = 0x3AAFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAFD4u;
            // 0x3aafd8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AAFECu;
            goto label_3aafec;
        }
    }
    ctx->pc = 0x3AAFDCu;
    // 0x3aafdc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aafdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3aafe0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3aafe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3aafe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAFE4u;
    {
        const bool branch_taken_0x3aafe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AAFE4u;
            // 0x3aafe8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafe4) {
            ctx->pc = 0x3AB004u;
            goto label_3ab004;
        }
    }
    ctx->pc = 0x3AAFECu;
label_3aafec:
    // 0x3aafec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3aafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3aaff0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aaff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3aaff4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3aaff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3aaff8: 0x0  nop
    ctx->pc = 0x3aaff8u;
    // NOP
    // 0x3aaffc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aaffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ab000: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ab000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ab004:
    // 0x3ab004: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3ab004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ab008: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x3ab008u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab00c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3ab00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ab010: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ab010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab014: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3ab014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3ab018: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ab018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3ab01c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x3ab01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x3ab020: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3ab020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ab024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ab024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ab028: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x3ab028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x3ab02c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3ab02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x3ab030: 0xc050780  jal         func_141E00
    ctx->pc = 0x3AB030u;
    SET_GPR_U32(ctx, 31, 0x3AB038u);
    ctx->pc = 0x3AB034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB030u;
            // 0x3ab034: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB038u; }
        if (ctx->pc != 0x3AB038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB038u; }
        if (ctx->pc != 0x3AB038u) { return; }
    }
    ctx->pc = 0x3AB038u;
label_3ab038:
    // 0x3ab038: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ab038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3ab03c: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x3ab03cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3ab040: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ab040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3ab044: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3ab044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3ab048: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x3AB048u;
    {
        const bool branch_taken_0x3ab048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB048u;
            // 0x3ab04c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab048) {
            ctx->pc = 0x3AAD84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3aad84;
        }
    }
    ctx->pc = 0x3AB050u;
    // 0x3ab050: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ab050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ab054: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3ab054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3ab058: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ab058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ab05c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3ab05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3ab060: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ab060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ab064: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3ab064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3ab068: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ab068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab06c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ab06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ab070: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ab070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab074: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ab074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ab078: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ab078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ab07c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ab07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab080: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB080u;
            // 0x3ab084: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AB088u;
    // 0x3ab088: 0x0  nop
    ctx->pc = 0x3ab088u;
    // NOP
    // 0x3ab08c: 0x0  nop
    ctx->pc = 0x3ab08cu;
    // NOP
}
