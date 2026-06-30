#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021ECC0
// Address: 0x21ecc0 - 0x21f420
void sub_0021ECC0_0x21ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ECC0_0x21ecc0");
#endif

    switch (ctx->pc) {
        case 0x21ed30u: goto label_21ed30;
        case 0x21ee6cu: goto label_21ee6c;
        case 0x21ee88u: goto label_21ee88;
        case 0x21eea4u: goto label_21eea4;
        case 0x21efbcu: goto label_21efbc;
        case 0x21effcu: goto label_21effc;
        case 0x21f18cu: goto label_21f18c;
        case 0x21f1d4u: goto label_21f1d4;
        case 0x21f1fcu: goto label_21f1fc;
        case 0x21f224u: goto label_21f224;
        case 0x21f2d4u: goto label_21f2d4;
        case 0x21f320u: goto label_21f320;
        case 0x21f348u: goto label_21f348;
        case 0x21f370u: goto label_21f370;
        case 0x21f3fcu: goto label_21f3fc;
        default: break;
    }

    ctx->pc = 0x21ecc0u;

    // 0x21ecc0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x21ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x21ecc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21ecc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21eccc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21ecd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21ecd4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x21ecd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ecd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21ecdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21ece0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21ece0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ece4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21ece8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21ecec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ecf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ecf4: 0x24d10030  addiu       $s1, $a2, 0x30
    ctx->pc = 0x21ecf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x21ecf8: 0x8cbe0048  lw          $fp, 0x48($a1)
    ctx->pc = 0x21ecf8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x21ecfc: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x21ecfcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x21ed00: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x21ed00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21ed04: 0x8fd40014  lw          $s4, 0x14($fp)
    ctx->pc = 0x21ed04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x21ed08: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21ed0c: 0x8fd30018  lw          $s3, 0x18($fp)
    ctx->pc = 0x21ed0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x21ed10: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x21ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21ed14: 0x2476ffff  addiu       $s6, $v1, -0x1
    ctx->pc = 0x21ed14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21ed18: 0x6c000f5  bltz        $s6, . + 4 + (0xF5 << 2)
    ctx->pc = 0x21ED18u;
    {
        const bool branch_taken_0x21ed18 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x21ED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED18u;
            // 0x21ed1c: 0x24920030  addiu       $s2, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed18) {
            ctx->pc = 0x21F0F0u;
            goto label_21f0f0;
        }
    }
    ctx->pc = 0x21ED20u;
    // 0x21ed20: 0x268301d4  addiu       $v1, $s4, 0x1D4
    ctx->pc = 0x21ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 468));
    // 0x21ed24: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x21ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x21ed28: 0x266301d4  addiu       $v1, $s3, 0x1D4
    ctx->pc = 0x21ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 468));
    // 0x21ed2c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x21ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_21ed30:
    // 0x21ed30: 0x9243000f  lbu         $v1, 0xF($s2)
    ctx->pc = 0x21ed30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x21ed34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x21ed34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x21ed38: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x21ED38u;
    {
        const bool branch_taken_0x21ed38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ed38) {
            ctx->pc = 0x21F0E0u;
            goto label_21f0e0;
        }
    }
    ctx->pc = 0x21ED40u;
    // 0x21ed40: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x21ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x21ed44: 0xc62b0008  lwc1        $f11, 0x8($s1)
    ctx->pc = 0x21ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x21ed48: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x21ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21ed4c: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x21ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x21ed50: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x21ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ed54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed58: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x21ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ed5c: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x21ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed60: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x21ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed64: 0x46005981  sub.s       $f6, $f11, $f0
    ctx->pc = 0x21ed64u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x21ed68: 0x460161c1  sub.s       $f7, $f12, $f1
    ctx->pc = 0x21ed68u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x21ed6c: 0xc6840194  lwc1        $f4, 0x194($s4)
    ctx->pc = 0x21ed6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21ed70: 0x46026a01  sub.s       $f8, $f13, $f2
    ctx->pc = 0x21ed70u;
    ctx->f[8] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x21ed74: 0xc6850198  lwc1        $f5, 0x198($s4)
    ctx->pc = 0x21ed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21ed78: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x21ed78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21ed7c: 0xc6800180  lwc1        $f0, 0x180($s4)
    ctx->pc = 0x21ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ed80: 0x4607289d  msub.s      $f2, $f5, $f7
    ctx->pc = 0x21ed80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
    // 0x21ed84: 0xc6810190  lwc1        $f1, 0x190($s4)
    ctx->pc = 0x21ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed88: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x21ed88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21ed8c: 0x4608281a  mula.s      $f5, $f8
    ctx->pc = 0x21ed8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x21ed90: 0x4606095d  msub.s      $f5, $f1, $f6
    ctx->pc = 0x21ed90u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x21ed94: 0x4607081a  mula.s      $f1, $f7
    ctx->pc = 0x21ed94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x21ed98: 0xc6820184  lwc1        $f2, 0x184($s4)
    ctx->pc = 0x21ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed9c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x21ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eda0: 0x4608211d  msub.s      $f4, $f4, $f8
    ctx->pc = 0x21eda0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x21eda4: 0xc6810188  lwc1        $f1, 0x188($s4)
    ctx->pc = 0x21eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eda8: 0x46006a01  sub.s       $f8, $f13, $f0
    ctx->pc = 0x21eda8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x21edac: 0x46012240  add.s       $f9, $f4, $f1
    ctx->pc = 0x21edacu;
    ctx->f[9] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x21edb0: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x21edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21edb4: 0x46022a80  add.s       $f10, $f5, $f2
    ctx->pc = 0x21edb4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x21edb8: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x21edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21edbc: 0x46005981  sub.s       $f6, $f11, $f0
    ctx->pc = 0x21edbcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x21edc0: 0x460161c1  sub.s       $f7, $f12, $f1
    ctx->pc = 0x21edc0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x21edc4: 0xc6640194  lwc1        $f4, 0x194($s3)
    ctx->pc = 0x21edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21edc8: 0xc6650198  lwc1        $f5, 0x198($s3)
    ctx->pc = 0x21edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21edcc: 0xc6600180  lwc1        $f0, 0x180($s3)
    ctx->pc = 0x21edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21edd0: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x21edd0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21edd4: 0x4607289d  msub.s      $f2, $f5, $f7
    ctx->pc = 0x21edd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
    // 0x21edd8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x21edd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21eddc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x21eddcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21ede0: 0xc6610190  lwc1        $f1, 0x190($s3)
    ctx->pc = 0x21ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ede4: 0x4608281a  mula.s      $f5, $f8
    ctx->pc = 0x21ede4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x21ede8: 0xc6600188  lwc1        $f0, 0x188($s3)
    ctx->pc = 0x21ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21edec: 0x4606095d  msub.s      $f5, $f1, $f6
    ctx->pc = 0x21edecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x21edf0: 0x4607081a  mula.s      $f1, $f7
    ctx->pc = 0x21edf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x21edf4: 0x4608209d  msub.s      $f2, $f4, $f8
    ctx->pc = 0x21edf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x21edf8: 0xc6610184  lwc1        $f1, 0x184($s3)
    ctx->pc = 0x21edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21edfc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x21edfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21ee00: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x21ee00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x21ee04: 0x46004941  sub.s       $f5, $f9, $f0
    ctx->pc = 0x21ee04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x21ee08: 0x46015041  sub.s       $f1, $f10, $f1
    ctx->pc = 0x21ee08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x21ee0c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x21ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ee10: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x21ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ee14: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x21ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21ee18: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x21ee18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ee1c: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x21ee1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x21ee20: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EE20u;
    {
        const bool branch_taken_0x21ee20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE20u;
            // 0x21ee24: 0x4604281c  madd.s      $f0, $f5, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee20) {
            ctx->pc = 0x21EE30u;
            goto label_21ee30;
        }
    }
    ctx->pc = 0x21EE28u;
    // 0x21ee28: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x21ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21ee2c: 0x0  nop
    ctx->pc = 0x21ee2cu;
    // NOP
label_21ee30:
    // 0x21ee30: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x21ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x21ee34: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x21ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x21ee38: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x21ee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x21ee3c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x21ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x21ee40: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x21ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x21ee44: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x21ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x21ee48: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x21ee48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21ee4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ee50: 0xafb1010c  sw          $s1, 0x10C($sp)
    ctx->pc = 0x21ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 17));
    // 0x21ee54: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x21ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x21ee58: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x21ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x21ee5c: 0xafb70120  sw          $s7, 0x120($sp)
    ctx->pc = 0x21ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 23));
    // 0x21ee60: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x21ee60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x21ee64: 0xc08e678  jal         func_2399E0
    ctx->pc = 0x21EE64u;
    SET_GPR_U32(ctx, 31, 0x21EE6Cu);
    ctx->pc = 0x21EE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE64u;
            // 0x21ee68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2399E0u;
    if (runtime->hasFunction(0x2399E0u)) {
        auto targetFn = runtime->lookupFunction(0x2399E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE6Cu; }
        if (ctx->pc != 0x21EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002399E0_0x2399e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE6Cu; }
        if (ctx->pc != 0x21EE6Cu) { return; }
    }
    ctx->pc = 0x21EE6Cu;
label_21ee6c:
    // 0x21ee6c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21ee70: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x21ee70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ee74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EE74u;
    {
        const bool branch_taken_0x21ee74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee74) {
            ctx->pc = 0x21EE88u;
            goto label_21ee88;
        }
    }
    ctx->pc = 0x21EE7Cu;
    // 0x21ee7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21ee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee80: 0xc089518  jal         func_225460
    ctx->pc = 0x21EE80u;
    SET_GPR_U32(ctx, 31, 0x21EE88u);
    ctx->pc = 0x21EE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE80u;
            // 0x21ee84: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225460u;
    if (runtime->hasFunction(0x225460u)) {
        auto targetFn = runtime->lookupFunction(0x225460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE88u; }
        if (ctx->pc != 0x21EE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225460_0x225460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE88u; }
        if (ctx->pc != 0x21EE88u) { return; }
    }
    ctx->pc = 0x21EE88u;
label_21ee88:
    // 0x21ee88: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x21ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21ee8c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x21ee8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ee90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EE90u;
    {
        const bool branch_taken_0x21ee90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee90) {
            ctx->pc = 0x21EEA8u;
            goto label_21eea8;
        }
    }
    ctx->pc = 0x21EE98u;
    // 0x21ee98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21ee98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee9c: 0xc089518  jal         func_225460
    ctx->pc = 0x21EE9Cu;
    SET_GPR_U32(ctx, 31, 0x21EEA4u);
    ctx->pc = 0x21EEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE9Cu;
            // 0x21eea0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225460u;
    if (runtime->hasFunction(0x225460u)) {
        auto targetFn = runtime->lookupFunction(0x225460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEA4u; }
        if (ctx->pc != 0x21EEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225460_0x225460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEA4u; }
        if (ctx->pc != 0x21EEA4u) { return; }
    }
    ctx->pc = 0x21EEA4u;
label_21eea4:
    // 0x21eea4: 0x0  nop
    ctx->pc = 0x21eea4u;
    // NOP
label_21eea8:
    // 0x21eea8: 0x9243000d  lbu         $v1, 0xD($s2)
    ctx->pc = 0x21eea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x21eeac: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EEACu;
    {
        const bool branch_taken_0x21eeac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x21eeac) {
            ctx->pc = 0x21EEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21EEACu;
            // 0x21eeb0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21EEC0u;
            goto label_21eec0;
        }
    }
    ctx->pc = 0x21EEB4u;
    // 0x21eeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21eeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eeb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21EEB8u;
    {
        const bool branch_taken_0x21eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EEB8u;
            // 0x21eebc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eeb8) {
            ctx->pc = 0x21EED8u;
            goto label_21eed8;
        }
    }
    ctx->pc = 0x21EEC0u;
label_21eec0:
    // 0x21eec0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x21eec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x21eec4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x21eec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x21eec8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21eec8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eecc: 0x0  nop
    ctx->pc = 0x21eeccu;
    // NOP
    // 0x21eed0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x21eed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21eed4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x21eed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_21eed8:
    // 0x21eed8: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x21eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x21eedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21eedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eee0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x21eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x21eee4: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x21eee4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21eee8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x21eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x21eeec: 0xc7a60118  lwc1        $f6, 0x118($sp)
    ctx->pc = 0x21eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21eef0: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x21eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eef4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21eef4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21eef8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x21eef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21eefc: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x21EEFCu;
    {
        const bool branch_taken_0x21eefc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21eefc) {
            ctx->pc = 0x21F010u;
            goto label_21f010;
        }
    }
    ctx->pc = 0x21EF04u;
    // 0x21ef04: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x21ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x21ef08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21ef08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21ef0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ef0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ef10: 0x0  nop
    ctx->pc = 0x21ef10u;
    // NOP
    // 0x21ef14: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x21ef14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ef18: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x21EF18u;
    {
        const bool branch_taken_0x21ef18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ef18) {
            ctx->pc = 0x21F010u;
            goto label_21f010;
        }
    }
    ctx->pc = 0x21EF20u;
    // 0x21ef20: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x21ef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef24: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x21ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x21ef28: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x21ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x21ef2c: 0x24840970  addiu       $a0, $a0, 0x970
    ctx->pc = 0x21ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2416));
    // 0x21ef30: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x21ef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x21ef34: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x21ef34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x21ef38: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x21ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef3c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x21ef3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x21ef40: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x21ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef44: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x21ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x21ef48: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x21ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef4c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x21ef4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x21ef50: 0x9243000c  lbu         $v1, 0xC($s2)
    ctx->pc = 0x21ef50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21ef54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ef58: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x21ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x21ef5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21ef60: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x21ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x21ef64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef68: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x21ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x21ef6c: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x21ef6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x21ef70: 0xe7a600ec  swc1        $f6, 0xEC($sp)
    ctx->pc = 0x21ef70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x21ef74: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x21ef74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x21ef78: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x21ef78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x21ef7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EF7Cu;
    {
        const bool branch_taken_0x21ef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ef7c) {
            ctx->pc = 0x21EF98u;
            goto label_21ef98;
        }
    }
    ctx->pc = 0x21EF84u;
    // 0x21ef84: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x21ef84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x21ef88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21ef8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21ef90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef94: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21ef94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_21ef98:
    // 0x21ef98: 0x8ea90030  lw          $t1, 0x30($s5)
    ctx->pc = 0x21ef98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x21ef9c: 0x8eaa0034  lw          $t2, 0x34($s5)
    ctx->pc = 0x21ef9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x21efa0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21efa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21efa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efa8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21efa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21efac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21efacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efb0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x21efb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efb4: 0xc088058  jal         func_220160
    ctx->pc = 0x21EFB4u;
    SET_GPR_U32(ctx, 31, 0x21EFBCu);
    ctx->pc = 0x21EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFB4u;
            // 0x21efb8: 0x27ab012c  addiu       $t3, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220160u;
    if (runtime->hasFunction(0x220160u)) {
        auto targetFn = runtime->lookupFunction(0x220160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFBCu; }
        if (ctx->pc != 0x21EFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220160_0x220160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFBCu; }
        if (ctx->pc != 0x21EFBCu) { return; }
    }
    ctx->pc = 0x21EFBCu;
label_21efbc:
    // 0x21efbc: 0x83a300f8  lb          $v1, 0xF8($sp)
    ctx->pc = 0x21efbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21efc0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21EFC0u;
    {
        const bool branch_taken_0x21efc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21efc0) {
            ctx->pc = 0x21F000u;
            goto label_21f000;
        }
    }
    ctx->pc = 0x21EFC8u;
    // 0x21efc8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EFC8u;
    {
        const bool branch_taken_0x21efc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFC8u;
            // 0x21efcc: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efc8) {
            ctx->pc = 0x21EFD8u;
            goto label_21efd8;
        }
    }
    ctx->pc = 0x21EFD0u;
    // 0x21efd0: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x21efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21efd4: 0x0  nop
    ctx->pc = 0x21efd4u;
    // NOP
label_21efd8:
    // 0x21efd8: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x21efdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21efe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efe4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21efe8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x21efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x21efec: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x21efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x21eff0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x21eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x21eff4: 0xc08ea14  jal         func_23A850
    ctx->pc = 0x21EFF4u;
    SET_GPR_U32(ctx, 31, 0x21EFFCu);
    ctx->pc = 0x21EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFF4u;
            // 0x21eff8: 0xafb100cc  sw          $s1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A850u;
    if (runtime->hasFunction(0x23A850u)) {
        auto targetFn = runtime->lookupFunction(0x23A850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFFCu; }
        if (ctx->pc != 0x21EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A850_0x23a850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFFCu; }
        if (ctx->pc != 0x21EFFCu) { return; }
    }
    ctx->pc = 0x21EFFCu;
label_21effc:
    // 0x21effc: 0x0  nop
    ctx->pc = 0x21effcu;
    // NOP
label_21f000:
    // 0x21f000: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21f000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x21f004: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x21f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f008: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21F008u;
    {
        const bool branch_taken_0x21f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F008u;
            // 0x21f00c: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f008) {
            ctx->pc = 0x21F0D0u;
            goto label_21f0d0;
        }
    }
    ctx->pc = 0x21F010u;
label_21f010:
    // 0x21f010: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x21f010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x21f014: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x21f014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21f018: 0x3c032edb  lui         $v1, 0x2EDB
    ctx->pc = 0x21f018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11995 << 16));
    // 0x21f01c: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x21f01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x21f020: 0x3463e6ff  ori         $v1, $v1, 0xE6FF
    ctx->pc = 0x21f020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59135);
    // 0x21f024: 0xc685017c  lwc1        $f5, 0x17C($s4)
    ctx->pc = 0x21f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21f028: 0xc664017c  lwc1        $f4, 0x17C($s3)
    ctx->pc = 0x21f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21f02c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x21f02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21f030: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x21f030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x21f034: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x21f034u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x21f038: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21f038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21f03c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x21f03cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x21f040: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x21f040u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x21f044: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f048: 0x0  nop
    ctx->pc = 0x21f048u;
    // NOP
    // 0x21f04c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21f04cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21f050: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x21f050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x21f054: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f058: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x21f058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21f05c: 0x9243000d  lbu         $v1, 0xD($s2)
    ctx->pc = 0x21f05cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x21f060: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F060u;
    {
        const bool branch_taken_0x21f060 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x21f060) {
            ctx->pc = 0x21F064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F060u;
            // 0x21f064: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F074u;
            goto label_21f074;
        }
    }
    ctx->pc = 0x21F068u;
    // 0x21f068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f06c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21F06Cu;
    {
        const bool branch_taken_0x21f06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F06Cu;
            // 0x21f070: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f06c) {
            ctx->pc = 0x21F08Cu;
            goto label_21f08c;
        }
    }
    ctx->pc = 0x21F074u;
label_21f074:
    // 0x21f074: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x21f074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x21f078: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x21f078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x21f07c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21f07cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f080: 0x0  nop
    ctx->pc = 0x21f080u;
    // NOP
    // 0x21f084: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x21f084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x21f088: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x21f088u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_21f08c:
    // 0x21f08c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x21f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x21f090: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f094: 0x0  nop
    ctx->pc = 0x21f094u;
    // NOP
    // 0x21f098: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21f098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21f09c: 0x3c03bfa6  lui         $v1, 0xBFA6
    ctx->pc = 0x21f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49062 << 16));
    // 0x21f0a0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x21f0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21f0a4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x21f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0a8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x21f0a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21f0ac: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x21f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f0b4: 0x0  nop
    ctx->pc = 0x21f0b4u;
    // NOP
    // 0x21f0b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x21f0b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x21f0bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f0c0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x21f0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x21f0c4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x21f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21f0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21f0cc: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x21f0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_21f0d0:
    // 0x21f0d0: 0x9243000f  lbu         $v1, 0xF($s2)
    ctx->pc = 0x21f0d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x21f0d4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x21f0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x21f0d8: 0xa243000f  sb          $v1, 0xF($s2)
    ctx->pc = 0x21f0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x21f0dc: 0x0  nop
    ctx->pc = 0x21f0dcu;
    // NOP
label_21f0e0:
    // 0x21f0e0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x21f0e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x21f0e4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x21f0e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x21f0e8: 0x6c1ff11  bgez        $s6, . + 4 + (-0xEF << 2)
    ctx->pc = 0x21F0E8u;
    {
        const bool branch_taken_0x21f0e8 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x21F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0E8u;
            // 0x21f0ec: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0e8) {
            ctx->pc = 0x21ED30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ed30;
        }
    }
    ctx->pc = 0x21F0F0u;
label_21f0f0:
    // 0x21f0f0: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x21f0f4: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x21f0f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x21f0f8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x21f0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x21f0fc: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x21f0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x21f100: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21f100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21f104: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21f104u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f108: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21f108u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f10c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21f10cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21f110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21f114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21f118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f11c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f128: 0x3e00008  jr          $ra
    ctx->pc = 0x21F128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F128u;
            // 0x21f12c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F130u;
    // 0x21f130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21f134: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21f134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21f138: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21f13c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21f140: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21f140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f144: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21f144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21f148: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21f148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f14c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21f150: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21f150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f158: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x21f158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f15c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f160: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x21f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x21f164: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x21f164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21f168: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x21F168u;
    {
        const bool branch_taken_0x21f168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F168u;
            // 0x21f16c: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f168) {
            ctx->pc = 0x21F248u;
            goto label_21f248;
        }
    }
    ctx->pc = 0x21F170u;
    // 0x21f170: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x21f170u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21f174: 0x28830017  slti        $v1, $a0, 0x17
    ctx->pc = 0x21f174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x21f178: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x21f178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x21f17c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21f180: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x21F180u;
    {
        const bool branch_taken_0x21f180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f180) {
            ctx->pc = 0x21F248u;
            goto label_21f248;
        }
    }
    ctx->pc = 0x21F188u;
    // 0x21f188: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x21f188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21f18c:
    // 0x21f18c: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F18Cu;
    {
        const bool branch_taken_0x21f18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f18c) {
            ctx->pc = 0x21F208u;
            goto label_21f208;
        }
    }
    ctx->pc = 0x21F194u;
    // 0x21f194: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x21f194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x21f198: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21F198u;
    {
        const bool branch_taken_0x21f198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f198) {
            ctx->pc = 0x21F1E0u;
            goto label_21f1e0;
        }
    }
    ctx->pc = 0x21F1A0u;
    // 0x21f1a0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21f1a4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F1A4u;
    {
        const bool branch_taken_0x21f1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f1a4) {
            ctx->pc = 0x21F1B8u;
            goto label_21f1b8;
        }
    }
    ctx->pc = 0x21F1ACu;
    // 0x21f1ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x21F1ACu;
    {
        const bool branch_taken_0x21f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f1ac) {
            ctx->pc = 0x21F228u;
            goto label_21f228;
        }
    }
    ctx->pc = 0x21F1B4u;
    // 0x21f1b4: 0x0  nop
    ctx->pc = 0x21f1b4u;
    // NOP
label_21f1b8:
    // 0x21f1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21f1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21f1c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1cc: 0xc087284  jal         func_21CA10
    ctx->pc = 0x21F1CCu;
    SET_GPR_U32(ctx, 31, 0x21F1D4u);
    ctx->pc = 0x21F1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1CCu;
            // 0x21f1d0: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CA10u;
    if (runtime->hasFunction(0x21CA10u)) {
        auto targetFn = runtime->lookupFunction(0x21CA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1D4u; }
        if (ctx->pc != 0x21F1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CA10_0x21ca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1D4u; }
        if (ctx->pc != 0x21F1D4u) { return; }
    }
    ctx->pc = 0x21F1D4u;
label_21f1d4:
    // 0x21f1d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21F1D4u;
    {
        const bool branch_taken_0x21f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f1d4) {
            ctx->pc = 0x21F228u;
            goto label_21f228;
        }
    }
    ctx->pc = 0x21F1DCu;
    // 0x21f1dc: 0x0  nop
    ctx->pc = 0x21f1dcu;
    // NOP
label_21f1e0:
    // 0x21f1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21f1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1f0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21f1f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1f4: 0xc0872a0  jal         func_21CA80
    ctx->pc = 0x21F1F4u;
    SET_GPR_U32(ctx, 31, 0x21F1FCu);
    ctx->pc = 0x21F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1F4u;
            // 0x21f1f8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CA80u;
    if (runtime->hasFunction(0x21CA80u)) {
        auto targetFn = runtime->lookupFunction(0x21CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1FCu; }
        if (ctx->pc != 0x21F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CA80_0x21ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1FCu; }
        if (ctx->pc != 0x21F1FCu) { return; }
    }
    ctx->pc = 0x21F1FCu;
label_21f1fc:
    // 0x21f1fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21F1FCu;
    {
        const bool branch_taken_0x21f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f1fc) {
            ctx->pc = 0x21F228u;
            goto label_21f228;
        }
    }
    ctx->pc = 0x21F204u;
    // 0x21f204: 0x0  nop
    ctx->pc = 0x21f204u;
    // NOP
label_21f208:
    // 0x21f208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f20c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21f20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f210: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f214: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f218: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21f218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f21c: 0xc087338  jal         func_21CCE0
    ctx->pc = 0x21F21Cu;
    SET_GPR_U32(ctx, 31, 0x21F224u);
    ctx->pc = 0x21F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F21Cu;
            // 0x21f220: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CCE0u;
    if (runtime->hasFunction(0x21CCE0u)) {
        auto targetFn = runtime->lookupFunction(0x21CCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F224u; }
        if (ctx->pc != 0x21F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CCE0_0x21cce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F224u; }
        if (ctx->pc != 0x21F224u) { return; }
    }
    ctx->pc = 0x21F224u;
label_21f224:
    // 0x21f224: 0x0  nop
    ctx->pc = 0x21f224u;
    // NOP
label_21f228:
    // 0x21f228: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21f22c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x21f22cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21f230: 0x28830017  slti        $v1, $a0, 0x17
    ctx->pc = 0x21f230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x21f234: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x21f234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x21f238: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21f238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21f23c: 0x5460ffd3  bnel        $v1, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x21F23Cu;
    {
        const bool branch_taken_0x21f23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f23c) {
            ctx->pc = 0x21F240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F23Cu;
            // 0x21f240: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F18Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f18c;
        }
    }
    ctx->pc = 0x21F244u;
    // 0x21f244: 0x0  nop
    ctx->pc = 0x21f244u;
    // NOP
label_21f248:
    // 0x21f248: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21f248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f24c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21f24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f250: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21f250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f254: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21f254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f264: 0x3e00008  jr          $ra
    ctx->pc = 0x21F264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F264u;
            // 0x21f268: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F26Cu;
    // 0x21f26c: 0x0  nop
    ctx->pc = 0x21f26cu;
    // NOP
    // 0x21f270: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21f274: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21f278: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x21f278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x21f27c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21f27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21f280: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21f280u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f284: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21f284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21f288: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21f288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f28c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21f28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21f290: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21f290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f294: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21f294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21f298: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x21f298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f29c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21f2a0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x21f2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x21f2a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21f2a8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x21f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x21f2ac: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x21f2acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21f2b0: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x21F2B0u;
    {
        const bool branch_taken_0x21f2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2B0u;
            // 0x21f2b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2b0) {
            ctx->pc = 0x21F390u;
            goto label_21f390;
        }
    }
    ctx->pc = 0x21F2B8u;
    // 0x21f2b8: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x21f2b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21f2bc: 0x28830017  slti        $v1, $a0, 0x17
    ctx->pc = 0x21f2bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x21f2c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x21f2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x21f2c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21f2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21f2c8: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x21F2C8u;
    {
        const bool branch_taken_0x21f2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f2c8) {
            ctx->pc = 0x21F390u;
            goto label_21f390;
        }
    }
    ctx->pc = 0x21F2D0u;
    // 0x21f2d0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x21f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21f2d4:
    // 0x21f2d4: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F2D4u;
    {
        const bool branch_taken_0x21f2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f2d4) {
            ctx->pc = 0x21F350u;
            goto label_21f350;
        }
    }
    ctx->pc = 0x21F2DCu;
    // 0x21f2dc: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x21f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x21f2e0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21F2E0u;
    {
        const bool branch_taken_0x21f2e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f2e0) {
            ctx->pc = 0x21F328u;
            goto label_21f328;
        }
    }
    ctx->pc = 0x21F2E8u;
    // 0x21f2e8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21f2ec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F2ECu;
    {
        const bool branch_taken_0x21f2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f2ec) {
            ctx->pc = 0x21F300u;
            goto label_21f300;
        }
    }
    ctx->pc = 0x21F2F4u;
    // 0x21f2f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x21F2F4u;
    {
        const bool branch_taken_0x21f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f2f4) {
            ctx->pc = 0x21F370u;
            goto label_21f370;
        }
    }
    ctx->pc = 0x21F2FCu;
    // 0x21f2fc: 0x0  nop
    ctx->pc = 0x21f2fcu;
    // NOP
label_21f300:
    // 0x21f300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f304: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21f304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f308: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f30c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21f30cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21f310: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f314: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21f314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f318: 0xc08729c  jal         func_21CA70
    ctx->pc = 0x21F318u;
    SET_GPR_U32(ctx, 31, 0x21F320u);
    ctx->pc = 0x21F31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F318u;
            // 0x21f31c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CA70u;
    if (runtime->hasFunction(0x21CA70u)) {
        auto targetFn = runtime->lookupFunction(0x21CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F320u; }
        if (ctx->pc != 0x21F320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CA70_0x21ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F320u; }
        if (ctx->pc != 0x21F320u) { return; }
    }
    ctx->pc = 0x21F320u;
label_21f320:
    // 0x21f320: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21F320u;
    {
        const bool branch_taken_0x21f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f320) {
            ctx->pc = 0x21F370u;
            goto label_21f370;
        }
    }
    ctx->pc = 0x21F328u;
label_21f328:
    // 0x21f328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f32c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21f32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f330: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f334: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21f334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21f338: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f33c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21f33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f340: 0xc0872d8  jal         func_21CB60
    ctx->pc = 0x21F340u;
    SET_GPR_U32(ctx, 31, 0x21F348u);
    ctx->pc = 0x21F344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F340u;
            // 0x21f344: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CB60u;
    if (runtime->hasFunction(0x21CB60u)) {
        auto targetFn = runtime->lookupFunction(0x21CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F348u; }
        if (ctx->pc != 0x21F348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CB60_0x21cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F348u; }
        if (ctx->pc != 0x21F348u) { return; }
    }
    ctx->pc = 0x21F348u;
label_21f348:
    // 0x21f348: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21F348u;
    {
        const bool branch_taken_0x21f348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f348) {
            ctx->pc = 0x21F370u;
            goto label_21f370;
        }
    }
    ctx->pc = 0x21F350u;
label_21f350:
    // 0x21f350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f354: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21f354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f358: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f35c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21f35cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21f360: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f364: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21f364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f368: 0xc087358  jal         func_21CD60
    ctx->pc = 0x21F368u;
    SET_GPR_U32(ctx, 31, 0x21F370u);
    ctx->pc = 0x21F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F368u;
            // 0x21f36c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CD60u;
    if (runtime->hasFunction(0x21CD60u)) {
        auto targetFn = runtime->lookupFunction(0x21CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F370u; }
        if (ctx->pc != 0x21F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CD60_0x21cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F370u; }
        if (ctx->pc != 0x21F370u) { return; }
    }
    ctx->pc = 0x21F370u;
label_21f370:
    // 0x21f370: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x21f370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21f374: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x21f374u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21f378: 0x28830017  slti        $v1, $a0, 0x17
    ctx->pc = 0x21f378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x21f37c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x21f37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x21f380: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21f380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21f384: 0x5460ffd3  bnel        $v1, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x21F384u;
    {
        const bool branch_taken_0x21f384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f384) {
            ctx->pc = 0x21F388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F384u;
            // 0x21f388: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F2D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f2d4;
        }
    }
    ctx->pc = 0x21F38Cu;
    // 0x21f38c: 0x0  nop
    ctx->pc = 0x21f38cu;
    // NOP
label_21f390:
    // 0x21f390: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f394: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21f398: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x21f398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f39c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21f39cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f3a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21f3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f3a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21f3a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f3a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21f3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f3ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21f3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3B0u;
            // 0x21f3b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F3B8u;
    // 0x21f3b8: 0x0  nop
    ctx->pc = 0x21f3b8u;
    // NOP
    // 0x21f3bc: 0x0  nop
    ctx->pc = 0x21f3bcu;
    // NOP
    // 0x21f3c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3C4u;
            // 0x21f3c8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F3CCu;
    // 0x21f3cc: 0x0  nop
    ctx->pc = 0x21f3ccu;
    // NOP
    // 0x21f3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3D0u;
            // 0x21f3d4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F3D8u;
    // 0x21f3d8: 0x0  nop
    ctx->pc = 0x21f3d8u;
    // NOP
    // 0x21f3dc: 0x0  nop
    ctx->pc = 0x21f3dcu;
    // NOP
    // 0x21f3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f3e4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F3E4u;
    {
        const bool branch_taken_0x21f3e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3E4u;
            // 0x21f3e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3e4) {
            ctx->pc = 0x21F3FCu;
            goto label_21f3fc;
        }
    }
    ctx->pc = 0x21F3ECu;
    // 0x21f3ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21f3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21f3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3f4: 0xc0a8458  jal         func_2A1160
    ctx->pc = 0x21F3F4u;
    SET_GPR_U32(ctx, 31, 0x21F3FCu);
    ctx->pc = 0x21F3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3F4u;
            // 0x21f3f8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3FCu; }
        if (ctx->pc != 0x21F3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3FCu; }
        if (ctx->pc != 0x21F3FCu) { return; }
    }
    ctx->pc = 0x21F3FCu;
label_21f3fc:
    // 0x21f3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f400: 0x3e00008  jr          $ra
    ctx->pc = 0x21F400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F400u;
            // 0x21f404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F408u;
    // 0x21f408: 0x0  nop
    ctx->pc = 0x21f408u;
    // NOP
    // 0x21f40c: 0x0  nop
    ctx->pc = 0x21f40cu;
    // NOP
    // 0x21f410: 0x3e00008  jr          $ra
    ctx->pc = 0x21F410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F410u;
            // 0x21f414: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F418u;
    // 0x21f418: 0x0  nop
    ctx->pc = 0x21f418u;
    // NOP
    // 0x21f41c: 0x0  nop
    ctx->pc = 0x21f41cu;
    // NOP
}
