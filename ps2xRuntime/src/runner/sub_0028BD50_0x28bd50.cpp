#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028BD50
// Address: 0x28bd50 - 0x28c300
void sub_0028BD50_0x28bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BD50_0x28bd50");
#endif

    switch (ctx->pc) {
        case 0x28c0a4u: goto label_28c0a4;
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c0e8u: goto label_28c0e8;
        case 0x28c11cu: goto label_28c11c;
        case 0x28c170u: goto label_28c170;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c210u: goto label_28c210;
        case 0x28c260u: goto label_28c260;
        case 0x28c2acu: goto label_28c2ac;
        default: break;
    }

    ctx->pc = 0x28bd50u;

    // 0x28bd50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28bd54: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28bd54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28bd5c: 0x54100  sll         $t0, $a1, 4
    ctx->pc = 0x28bd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28bd60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28bd64: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x28bd64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28bd68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28bd6c: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x28bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28bd70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28bd74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28bd74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28bd7c: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x28bd7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28bd80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28bd84: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x28bd84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x28bd88: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x28bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x28bd8c: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x28bd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x28bd90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x28bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bd94: 0x27aa008c  addiu       $t2, $sp, 0x8C
    ctx->pc = 0x28bd94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x28bd98: 0x27b80070  addiu       $t8, $sp, 0x70
    ctx->pc = 0x28bd98u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28bd9c: 0x27ae0074  addiu       $t6, $sp, 0x74
    ctx->pc = 0x28bd9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28bda0: 0x27ad0078  addiu       $t5, $sp, 0x78
    ctx->pc = 0x28bda0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x28bda4: 0x27b90060  addiu       $t9, $sp, 0x60
    ctx->pc = 0x28bda4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28bda8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28bda8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28bdac: 0x897821  addu        $t7, $a0, $t1
    ctx->pc = 0x28bdacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x28bdb0: 0x886021  addu        $t4, $a0, $t0
    ctx->pc = 0x28bdb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x28bdb4: 0x855821  addu        $t3, $a0, $a1
    ctx->pc = 0x28bdb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28bdb8: 0x27a9007c  addiu       $t1, $sp, 0x7C
    ctx->pc = 0x28bdb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28bdbc: 0x79e40000  lq          $a0, 0x0($t7)
    ctx->pc = 0x28bdbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x28bdc0: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x28bdc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x28bdc4: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x28bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28bdc8: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x28bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x28bdcc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x28bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bdd0: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x28bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bdd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28bdd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28bdd8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x28bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x28bddc: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x28bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bde0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bde4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28bde4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28bde8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28bde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28bdec: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x28bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bdf0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x28bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bdf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28bdf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28bdf8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28bdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x28bdfc: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x28bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28be00: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x28be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28be04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28be04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28be08: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x28be08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x28be0c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x28be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28be10: 0x79640000  lq          $a0, 0x0($t3)
    ctx->pc = 0x28be10u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x28be14: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28be18: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x28be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28be1c: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x28be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28be20: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x28be20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28be24: 0x7f040000  sq          $a0, 0x0($t8)
    ctx->pc = 0x28be24u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 4));
    // 0x28be28: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x28be28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28be2c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x28be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28be30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28be30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28be34: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28be34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28be38: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x28be38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x28be3c: 0xc5e20004  lwc1        $f2, 0x4($t7)
    ctx->pc = 0x28be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28be40: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x28be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28be44: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x28be44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x28be48: 0x4606301c  madd.s      $f0, $f6, $f6
    ctx->pc = 0x28be48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x28be4c: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x28be4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x28be50: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x28be50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x28be54: 0xe5c10000  swc1        $f1, 0x0($t6)
    ctx->pc = 0x28be54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x28be58: 0xc5e20008  lwc1        $f2, 0x8($t7)
    ctx->pc = 0x28be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28be5c: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x28be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28be60: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x28be60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x28be64: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x28be64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28be68: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x28be68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x28be6c: 0xe5a10000  swc1        $f1, 0x0($t5)
    ctx->pc = 0x28be6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x28be70: 0xc5e2000c  lwc1        $f2, 0xC($t7)
    ctx->pc = 0x28be70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28be74: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x28be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28be78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x28be78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x28be7c: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x28be7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x28be80: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x28be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28be84: 0x79840000  lq          $a0, 0x0($t4)
    ctx->pc = 0x28be84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x28be88: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x28be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28be8c: 0xc5c60000  lwc1        $f6, 0x0($t6)
    ctx->pc = 0x28be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28be90: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x28be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28be94: 0x46021202  mul.s       $f8, $f2, $f2
    ctx->pc = 0x28be94u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28be98: 0x7f240000  sq          $a0, 0x0($t9)
    ctx->pc = 0x28be98u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 4));
    // 0x28be9c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x28be9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28bea0: 0x4606325c  madd.s      $f9, $f6, $f6
    ctx->pc = 0x28bea0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x28bea4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x28bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28bea8: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x28bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28beac: 0x46052982  mul.s       $f6, $f5, $f5
    ctx->pc = 0x28beacu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x28beb0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28beb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28beb4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x28beb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28beb8: 0xc5650004  lwc1        $f5, 0x4($t3)
    ctx->pc = 0x28beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28bebc: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x28bebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bec0: 0x46094080  add.s       $f2, $f8, $f9
    ctx->pc = 0x28bec0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x28bec4: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x28bec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x28bec8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x28bec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x28becc: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x28beccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x28bed0: 0xc5650008  lwc1        $f5, 0x8($t3)
    ctx->pc = 0x28bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28bed4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x28bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bed8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x28bed8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x28bedc: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x28bedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x28bee0: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x28bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28bee4: 0xc565000c  lwc1        $f5, 0xC($t3)
    ctx->pc = 0x28bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28bee8: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x28bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28beec: 0xc7aa0068  lwc1        $f10, 0x68($sp)
    ctx->pc = 0x28beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28bef0: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x28bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28bef4: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x28bef4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x28bef8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x28bef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x28befc: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x28befcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x28bf00: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x28bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bf04: 0x460a5182  mul.s       $f6, $f10, $f10
    ctx->pc = 0x28bf04u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x28bf08: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x28bf08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28bf0c: 0x460739dc  madd.s      $f7, $f7, $f7
    ctx->pc = 0x28bf0cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x28bf10: 0x46073040  add.s       $f1, $f6, $f7
    ctx->pc = 0x28bf10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x28bf14: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x28BF14u;
    {
        const bool branch_taken_0x28bf14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF14u;
            // 0x28bf18: 0x46012840  add.s       $f1, $f5, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf14) {
            ctx->pc = 0x28BF40u;
            goto label_28bf40;
        }
    }
    ctx->pc = 0x28BF1Cu;
    // 0x28bf1c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x28bf20: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x28bf20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28bf24: 0x0  nop
    ctx->pc = 0x28bf24u;
    // NOP
    // 0x28bf28: 0x46002116  rsqrt.s     $f4, $f4, $f0
    ctx->pc = 0x28bf28u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[4]);
    // 0x28bf2c: 0x0  nop
    ctx->pc = 0x28bf2cu;
    // NOP
    // 0x28bf30: 0x0  nop
    ctx->pc = 0x28bf30u;
    // NOP
    // 0x28bf34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28BF34u;
    {
        const bool branch_taken_0x28bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf34) {
            ctx->pc = 0x28BF40u;
            goto label_28bf40;
        }
    }
    ctx->pc = 0x28BF3Cu;
    // 0x28bf3c: 0x0  nop
    ctx->pc = 0x28bf3cu;
    // NOP
label_28bf40:
    // 0x28bf40: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x28bf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bf44: 0x46094140  add.s       $f5, $f8, $f9
    ctx->pc = 0x28bf44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x28bf48: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x28bf48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x28bf4c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28bf4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28bf50: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x28bf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x28bf54: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bf58: 0x46082832  c.eq.s      $f5, $f8
    ctx->pc = 0x28bf58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bf5c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28bf5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28bf60: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28bf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28bf64: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x28bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bf68: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28bf68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28bf6c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28bf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x28bf70: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x28bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bf74: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28bf74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28bf78: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x28BF78u;
    {
        const bool branch_taken_0x28bf78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF78u;
            // 0x28bf7c: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf78) {
            ctx->pc = 0x28BFA0u;
            goto label_28bfa0;
        }
    }
    ctx->pc = 0x28BF80u;
    // 0x28bf80: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x28bf84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28bf84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bf88: 0x0  nop
    ctx->pc = 0x28bf88u;
    // NOP
    // 0x28bf8c: 0x46050216  rsqrt.s     $f8, $f0, $f5
    ctx->pc = 0x28bf8cu;
    ctx->f[8] = 1.0f / sqrtf(ctx->f[0]);
    // 0x28bf90: 0x0  nop
    ctx->pc = 0x28bf90u;
    // NOP
    // 0x28bf94: 0x0  nop
    ctx->pc = 0x28bf94u;
    // NOP
    // 0x28bf98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x28BF98u;
    {
        const bool branch_taken_0x28bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf98) {
            ctx->pc = 0x28BFA0u;
            goto label_28bfa0;
        }
    }
    ctx->pc = 0x28BFA0u;
label_28bfa0:
    // 0x28bfa0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x28bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bfa4: 0x46073100  add.s       $f4, $f6, $f7
    ctx->pc = 0x28bfa4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x28bfa8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x28bfa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28bfac: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x28bfacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x28bfb0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x28bfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x28bfb4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x28bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bfb8: 0x46052032  c.eq.s      $f4, $f5
    ctx->pc = 0x28bfb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bfbc: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x28bfbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x28bfc0: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x28bfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x28bfc4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x28bfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bfc8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x28bfc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x28bfcc: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x28bfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x28bfd0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x28bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bfd4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x28bfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x28bfd8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x28BFD8u;
    {
        const bool branch_taken_0x28bfd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFD8u;
            // 0x28bfdc: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfd8) {
            ctx->pc = 0x28C000u;
            goto label_28c000;
        }
    }
    ctx->pc = 0x28BFE0u;
    // 0x28bfe0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x28bfe4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28bfe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bfe8: 0x0  nop
    ctx->pc = 0x28bfe8u;
    // NOP
    // 0x28bfec: 0x46040156  rsqrt.s     $f5, $f0, $f4
    ctx->pc = 0x28bfecu;
    ctx->f[5] = 1.0f / sqrtf(ctx->f[0]);
    // 0x28bff0: 0x0  nop
    ctx->pc = 0x28bff0u;
    // NOP
    // 0x28bff4: 0x0  nop
    ctx->pc = 0x28bff4u;
    // NOP
    // 0x28bff8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x28BFF8u;
    {
        const bool branch_taken_0x28bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bff8) {
            ctx->pc = 0x28C000u;
            goto label_28c000;
        }
    }
    ctx->pc = 0x28C000u;
label_28c000:
    // 0x28c000: 0x3c043586  lui         $a0, 0x3586
    ctx->pc = 0x28c000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13702 << 16));
    // 0x28c004: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x28c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28c008: 0x348437bd  ori         $a0, $a0, 0x37BD
    ctx->pc = 0x28c008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14269);
    // 0x28c00c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28c00cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c010: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x28c010u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x28c014: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x28c014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28c018: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x28c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28c01c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x28c01cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x28c020: 0xe5040000  swc1        $f4, 0x0($t0)
    ctx->pc = 0x28c020u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x28c024: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x28c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28c028: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x28c028u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x28c02c: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x28c02cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x28c030: 0xc5c70000  lwc1        $f7, 0x0($t6)
    ctx->pc = 0x28c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28c034: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x28c034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28c038: 0xc5a50000  lwc1        $f5, 0x0($t5)
    ctx->pc = 0x28c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28c03c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x28c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28c040: 0xc7a90070  lwc1        $f9, 0x70($sp)
    ctx->pc = 0x28c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28c044: 0xc7a80080  lwc1        $f8, 0x80($sp)
    ctx->pc = 0x28c044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28c048: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x28c048u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x28c04c: 0x46042981  sub.s       $f6, $f5, $f4
    ctx->pc = 0x28c04cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x28c050: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x28c050u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x28c054: 0x46084142  mul.s       $f5, $f8, $f8
    ctx->pc = 0x28c054u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x28c058: 0x46073902  mul.s       $f4, $f7, $f7
    ctx->pc = 0x28c058u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x28c05c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x28c05cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x28c060: 0x4606311c  madd.s      $f4, $f6, $f6
    ctx->pc = 0x28c060u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x28c064: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x28c064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c068: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x28C068u;
    {
        const bool branch_taken_0x28c068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c068) {
            ctx->pc = 0x28C0F0u;
            goto label_28c0f0;
        }
    }
    ctx->pc = 0x28C070u;
    // 0x28c070: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x28c070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c074: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28C074u;
    {
        const bool branch_taken_0x28c074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C074u;
            // 0x28c078: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c074) {
            ctx->pc = 0x28C080u;
            goto label_28c080;
        }
    }
    ctx->pc = 0x28C07Cu;
    // 0x28c07c: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x28c07cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_28c080:
    // 0x28c080: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x28c080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c084: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28C084u;
    {
        const bool branch_taken_0x28c084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c084) {
            ctx->pc = 0x28C090u;
            goto label_28c090;
        }
    }
    ctx->pc = 0x28C08Cu;
    // 0x28c08c: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x28c08cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_28c090:
    // 0x28c090: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x28c090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c094: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28C094u;
    {
        const bool branch_taken_0x28c094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C094u;
            // 0x28c098: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c094) {
            ctx->pc = 0x28C0B0u;
            goto label_28c0b0;
        }
    }
    ctx->pc = 0x28C09Cu;
    // 0x28c09c: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x28C09Cu;
    SET_GPR_U32(ctx, 31, 0x28C0A4u);
    ctx->pc = 0x28C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C09Cu;
            // 0x28c0a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0A4u; }
        if (ctx->pc != 0x28C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0A4u; }
        if (ctx->pc != 0x28C0A4u) { return; }
    }
    ctx->pc = 0x28C0A4u;
label_28c0a4:
    // 0x28c0a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28C0A4u;
    {
        const bool branch_taken_0x28c0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c0a4) {
            ctx->pc = 0x28C0E8u;
            goto label_28c0e8;
        }
    }
    ctx->pc = 0x28C0ACu;
    // 0x28c0ac: 0x0  nop
    ctx->pc = 0x28c0acu;
    // NOP
label_28c0b0:
    // 0x28c0b0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x28c0b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c0b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28C0B4u;
    {
        const bool branch_taken_0x28c0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0B4u;
            // 0x28c0b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0b4) {
            ctx->pc = 0x28C0D0u;
            goto label_28c0d0;
        }
    }
    ctx->pc = 0x28C0BCu;
    // 0x28c0bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28c0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0c0: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x28C0C0u;
    SET_GPR_U32(ctx, 31, 0x28C0C8u);
    ctx->pc = 0x28C0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0C0u;
            // 0x28c0c4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0C8u; }
        if (ctx->pc != 0x28C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0C8u; }
        if (ctx->pc != 0x28C0C8u) { return; }
    }
    ctx->pc = 0x28C0C8u;
label_28c0c8:
    // 0x28c0c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28C0C8u;
    {
        const bool branch_taken_0x28c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c0c8) {
            ctx->pc = 0x28C0E8u;
            goto label_28c0e8;
        }
    }
    ctx->pc = 0x28C0D0u;
label_28c0d0:
    // 0x28c0d0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28c0d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c0d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28C0D4u;
    {
        const bool branch_taken_0x28c0d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0D4u;
            // 0x28c0d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0d4) {
            ctx->pc = 0x28C0E8u;
            goto label_28c0e8;
        }
    }
    ctx->pc = 0x28C0DCu;
    // 0x28c0dc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28c0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0e0: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x28C0E0u;
    SET_GPR_U32(ctx, 31, 0x28C0E8u);
    ctx->pc = 0x28C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0E0u;
            // 0x28c0e4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0E8u; }
        if (ctx->pc != 0x28C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0E8u; }
        if (ctx->pc != 0x28C0E8u) { return; }
    }
    ctx->pc = 0x28C0E8u;
label_28c0e8:
    // 0x28c0e8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x28C0E8u;
    {
        const bool branch_taken_0x28c0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c0e8) {
            ctx->pc = 0x28C2E0u;
            goto label_28c2e0;
        }
    }
    ctx->pc = 0x28C0F0u;
label_28c0f0:
    // 0x28c0f0: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x28c0f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c0f4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28c0f8: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x28c0f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28c0fc: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c100: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28c100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28c104: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28c104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28c108: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C108u;
    {
        const bool branch_taken_0x28c108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C108u;
            // 0x28c10c: 0x30f0ffff  andi        $s0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c108) {
            ctx->pc = 0x28C120u;
            goto label_28c120;
        }
    }
    ctx->pc = 0x28C110u;
    // 0x28c110: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x28c110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x28c114: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28C114u;
    SET_GPR_U32(ctx, 31, 0x28C11Cu);
    ctx->pc = 0x28C118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C114u;
            // 0x28c118: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C11Cu; }
        if (ctx->pc != 0x28C11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C11Cu; }
        if (ctx->pc != 0x28C11Cu) { return; }
    }
    ctx->pc = 0x28C11Cu;
label_28c11c:
    // 0x28c11c: 0x0  nop
    ctx->pc = 0x28c11cu;
    // NOP
label_28c120:
    // 0x28c120: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x28c120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28c124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c128: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c12c: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x28c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28c130: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x28c130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x28c134: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x28c134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28c138: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x28c138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28c13c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28c140: 0xa4b20000  sh          $s2, 0x0($a1)
    ctx->pc = 0x28c140u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x28c144: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x28c144u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x28c148: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x28c148u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28c14c: 0xa4b40006  sh          $s4, 0x6($a1)
    ctx->pc = 0x28c14cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x28c150: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28c154: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28c154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c158: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28c158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28c15c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28c15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28c160: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C160u;
    {
        const bool branch_taken_0x28c160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C160u;
            // 0x28c164: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c160) {
            ctx->pc = 0x28C170u;
            goto label_28c170;
        }
    }
    ctx->pc = 0x28C168u;
    // 0x28c168: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28C168u;
    SET_GPR_U32(ctx, 31, 0x28C170u);
    ctx->pc = 0x28C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C168u;
            // 0x28c16c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C170u; }
        if (ctx->pc != 0x28C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C170u; }
        if (ctx->pc != 0x28C170u) { return; }
    }
    ctx->pc = 0x28C170u;
label_28c170:
    // 0x28c170: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x28c170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c174: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28c174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28c178: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x28c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28c17c: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x28c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x28c180: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x28c180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28c184: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x28c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28c188: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28c188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28c18c: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x28c18cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x28c190: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x28c190u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x28c194: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x28c194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28c198: 0xa4940006  sh          $s4, 0x6($a0)
    ctx->pc = 0x28c198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x28c19c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28c1a0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c1a4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28c1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28c1a8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28c1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28c1ac: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C1ACu;
    {
        const bool branch_taken_0x28c1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1ACu;
            // 0x28c1b0: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1ac) {
            ctx->pc = 0x28C1C0u;
            goto label_28c1c0;
        }
    }
    ctx->pc = 0x28C1B4u;
    // 0x28c1b4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28C1B4u;
    SET_GPR_U32(ctx, 31, 0x28C1BCu);
    ctx->pc = 0x28C1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1B4u;
            // 0x28c1b8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1BCu; }
        if (ctx->pc != 0x28C1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1BCu; }
        if (ctx->pc != 0x28C1BCu) { return; }
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0x0  nop
    ctx->pc = 0x28c1bcu;
    // NOP
label_28c1c0:
    // 0x28c1c0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x28c1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c1c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x28c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28c1c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28c1cc: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x28c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28c1d0: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x28c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x28c1d4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x28c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28c1d8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28c1dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28c1e0: 0xa4b10000  sh          $s1, 0x0($a1)
    ctx->pc = 0x28c1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x28c1e4: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x28c1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x28c1e8: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x28c1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28c1ec: 0xa4b40006  sh          $s4, 0x6($a1)
    ctx->pc = 0x28c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x28c1f0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28c1f4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c1f8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28c1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28c1fc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28c1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28c200: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C200u;
    {
        const bool branch_taken_0x28c200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C200u;
            // 0x28c204: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c200) {
            ctx->pc = 0x28C210u;
            goto label_28c210;
        }
    }
    ctx->pc = 0x28C208u;
    // 0x28c208: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28C208u;
    SET_GPR_U32(ctx, 31, 0x28C210u);
    ctx->pc = 0x28C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C208u;
            // 0x28c20c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C210u; }
        if (ctx->pc != 0x28C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C210u; }
        if (ctx->pc != 0x28C210u) { return; }
    }
    ctx->pc = 0x28C210u;
label_28c210:
    // 0x28c210: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x28c210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c214: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28c214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c21c: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x28c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28c220: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x28c220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x28c224: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x28c224u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28c228: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x28c228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28c22c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28c230: 0xa4b00000  sh          $s0, 0x0($a1)
    ctx->pc = 0x28c230u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x28c234: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x28c234u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x28c238: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x28c238u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28c23c: 0xa4b40006  sh          $s4, 0x6($a1)
    ctx->pc = 0x28c23cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x28c240: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28c244: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28c244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c248: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28c248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28c24c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28c24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28c250: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C250u;
    {
        const bool branch_taken_0x28c250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C250u;
            // 0x28c254: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c250) {
            ctx->pc = 0x28C260u;
            goto label_28c260;
        }
    }
    ctx->pc = 0x28C258u;
    // 0x28c258: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28C258u;
    SET_GPR_U32(ctx, 31, 0x28C260u);
    ctx->pc = 0x28C25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C258u;
            // 0x28c25c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C260u; }
        if (ctx->pc != 0x28C260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C260u; }
        if (ctx->pc != 0x28C260u) { return; }
    }
    ctx->pc = 0x28C260u;
label_28c260:
    // 0x28c260: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x28c260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c264: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28c264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28c268: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x28c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28c26c: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x28c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x28c270: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x28c270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28c274: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x28c274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28c278: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28c27c: 0xa4900000  sh          $s0, 0x0($a0)
    ctx->pc = 0x28c27cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x28c280: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x28c280u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x28c284: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x28c284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x28c288: 0xa4940006  sh          $s4, 0x6($a0)
    ctx->pc = 0x28c288u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x28c28c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28c290: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28c290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c294: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28c294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28c298: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28c298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28c29c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C29Cu;
    {
        const bool branch_taken_0x28c29c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C29Cu;
            // 0x28c2a0: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c29c) {
            ctx->pc = 0x28C2B0u;
            goto label_28c2b0;
        }
    }
    ctx->pc = 0x28C2A4u;
    // 0x28c2a4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28C2A4u;
    SET_GPR_U32(ctx, 31, 0x28C2ACu);
    ctx->pc = 0x28C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2A4u;
            // 0x28c2a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C2ACu; }
        if (ctx->pc != 0x28C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C2ACu; }
        if (ctx->pc != 0x28C2ACu) { return; }
    }
    ctx->pc = 0x28C2ACu;
label_28c2ac:
    // 0x28c2ac: 0x0  nop
    ctx->pc = 0x28c2acu;
    // NOP
label_28c2b0:
    // 0x28c2b0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x28c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28c2b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x28c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28c2b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28c2bc: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x28c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28c2c0: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x28c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x28c2c4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x28c2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28c2c8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x28c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28c2cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28c2d0: 0xa4b20000  sh          $s2, 0x0($a1)
    ctx->pc = 0x28c2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x28c2d4: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x28c2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x28c2d8: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x28c2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28c2dc: 0xa4b40006  sh          $s4, 0x6($a1)
    ctx->pc = 0x28c2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 20));
label_28c2e0:
    // 0x28c2e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c2e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28c2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c2e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c2e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c2ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28C2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2F8u;
            // 0x28c2fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C300u;
}
