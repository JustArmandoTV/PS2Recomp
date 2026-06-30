#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024B500
// Address: 0x24b500 - 0x24c120
void sub_0024B500_0x24b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B500_0x24b500");
#endif

    switch (ctx->pc) {
        case 0x24b94cu: goto label_24b94c;
        default: break;
    }

    ctx->pc = 0x24b500u;

    // 0x24b500: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x24b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x24b504: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x24b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x24b508: 0x27a90154  addiu       $t1, $sp, 0x154
    ctx->pc = 0x24b508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x24b50c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x24b50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x24b510: 0x27a80158  addiu       $t0, $sp, 0x158
    ctx->pc = 0x24b510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x24b514: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x24b514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x24b518: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x24b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x24b51c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x24b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x24b520: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x24b520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x24b524: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24b524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b528: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x24b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x24b52c: 0x27b40160  addiu       $s4, $sp, 0x160
    ctx->pc = 0x24b52cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x24b530: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x24b530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x24b534: 0x27b30170  addiu       $s3, $sp, 0x170
    ctx->pc = 0x24b534u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x24b538: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24b53c: 0x26870004  addiu       $a3, $s4, 0x4
    ctx->pc = 0x24b53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x24b540: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24b544: 0x26b10074  addiu       $s1, $s5, 0x74
    ctx->pc = 0x24b544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
    // 0x24b548: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x24b548u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24b54c: 0x26b00078  addiu       $s0, $s5, 0x78
    ctx->pc = 0x24b54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x24b550: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x24b550u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24b554: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x24b558: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x24b558u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24b55c: 0x26860008  addiu       $a2, $s4, 0x8
    ctx->pc = 0x24b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x24b560: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x24b560u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24b564: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x24b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x24b568: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x24b568u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x24b56c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x24b56cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24b570: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x24b570u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24b574: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x24b574u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24b578: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x24b578u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24b57c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x24b57cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24b580: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x24b580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24b584: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24b584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24b588: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x24b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b58c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b58cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b590: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x24b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x24b594: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x24b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b598: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b598u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b59c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x24b59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x24b5a0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x24b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5a8: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x24b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x24b5ac: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x24b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5b0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5b4: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x24b5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x24b5b8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x24b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5c0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x24b5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x24b5c4: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x24b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5c8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5cc: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x24b5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x24b5d0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x24b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5d8: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x24b5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x24b5dc: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x24b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5e4: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x24b5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x24b5e8: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x24b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5ec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5ecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5f0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x24b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x24b5f4: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x24b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b5f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b5f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b5fc: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x24b5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x24b600: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x24b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b604: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b604u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b608: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x24b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x24b60c: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x24b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b610: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24b610u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24b614: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x24b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x24b618: 0xc4850070  lwc1        $f5, 0x70($a0)
    ctx->pc = 0x24b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b61c: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x24b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b620: 0xc4870074  lwc1        $f7, 0x74($a0)
    ctx->pc = 0x24b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24b624: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x24b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b628: 0xc4860078  lwc1        $f6, 0x78($a0)
    ctx->pc = 0x24b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b62c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x24b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b630: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24b630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24b634: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x24b634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x24b638: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24b638u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24b63c: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x24b63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x24b640: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b644: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x24b644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b648: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x24b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b64c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x24b64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b650: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b654: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x24b654u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x24b658: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x24b658u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x24b65c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24b65cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24b660: 0x4601305c  madd.s      $f1, $f6, $f1
    ctx->pc = 0x24b660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x24b664: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x24b664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b668: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x24b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b66c: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x24b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b670: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x24b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b674: 0xc7a30144  lwc1        $f3, 0x144($sp)
    ctx->pc = 0x24b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b678: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x24b678u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x24b67c: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x24b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x24b680: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x24b680u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x24b684: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x24b684u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x24b688: 0x4602309c  madd.s      $f2, $f6, $f2
    ctx->pc = 0x24b688u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x24b68c: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x24b68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b690: 0xc4840060  lwc1        $f4, 0x60($a0)
    ctx->pc = 0x24b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b694: 0xc48800c0  lwc1        $f8, 0xC0($a0)
    ctx->pc = 0x24b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24b698: 0xc48700c4  lwc1        $f7, 0xC4($a0)
    ctx->pc = 0x24b698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24b69c: 0xc48600c8  lwc1        $f6, 0xC8($a0)
    ctx->pc = 0x24b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b6a0: 0xc48500cc  lwc1        $f5, 0xCC($a0)
    ctx->pc = 0x24b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b6a4: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x24b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b6a8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24b6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24b6ac: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b6b0: 0xc4840064  lwc1        $f4, 0x64($a0)
    ctx->pc = 0x24b6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b6b4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b6b8: 0x46004205  abs.s       $f8, $f8
    ctx->pc = 0x24b6b8u;
    ctx->f[8] = FPU_ABS_S(ctx->f[8]);
    // 0x24b6bc: 0x460039c5  abs.s       $f7, $f7
    ctx->pc = 0x24b6bcu;
    ctx->f[7] = FPU_ABS_S(ctx->f[7]);
    // 0x24b6c0: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x24b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b6c4: 0x46003185  abs.s       $f6, $f6
    ctx->pc = 0x24b6c4u;
    ctx->f[6] = FPU_ABS_S(ctx->f[6]);
    // 0x24b6c8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24b6c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x24b6cc: 0xe7a30144  swc1        $f3, 0x144($sp)
    ctx->pc = 0x24b6ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b6d0: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x24b6d0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x24b6d4: 0xc4830068  lwc1        $f3, 0x68($a0)
    ctx->pc = 0x24b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b6d8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b6dc: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x24b6dcu;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
    // 0x24b6e0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x24b6e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24b6e4: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x24b6e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b6e8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x24b6e8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x24b6ec: 0xc482006c  lwc1        $f2, 0x6C($a0)
    ctx->pc = 0x24b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b6f0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b6f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24b6f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24b6f8: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x24b6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b6fc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x24b6fcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x24b700: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x24b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b704: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b708: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x24b708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b70c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24B70Cu;
    {
        const bool branch_taken_0x24b70c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B70Cu;
            // 0x24b710: 0x46012941  sub.s       $f5, $f5, $f1 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b70c) {
            ctx->pc = 0x24B71Cu;
            goto label_24b71c;
        }
    }
    ctx->pc = 0x24B714u;
    // 0x24b714: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B714u;
    {
        const bool branch_taken_0x24b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B714u;
            // 0x24b718: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b714) {
            ctx->pc = 0x24B720u;
            goto label_24b720;
        }
    }
    ctx->pc = 0x24B71Cu;
label_24b71c:
    // 0x24b71c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24b71cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b720:
    // 0x24b720: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b724: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x24b724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b728: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24B728u;
    {
        const bool branch_taken_0x24b728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B728u;
            // 0x24b72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b728) {
            ctx->pc = 0x24B734u;
            goto label_24b734;
        }
    }
    ctx->pc = 0x24B730u;
    // 0x24b730: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x24b730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24b734:
    // 0x24b734: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b738: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x24b738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b73c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24B73Cu;
    {
        const bool branch_taken_0x24b73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B73Cu;
            // 0x24b740: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b73c) {
            ctx->pc = 0x24B748u;
            goto label_24b748;
        }
    }
    ctx->pc = 0x24B744u;
    // 0x24b744: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x24b744u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24b748:
    // 0x24b748: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x24b748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b74c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x24b74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b750: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24B750u;
    {
        const bool branch_taken_0x24b750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B750u;
            // 0x24b754: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b750) {
            ctx->pc = 0x24B75Cu;
            goto label_24b75c;
        }
    }
    ctx->pc = 0x24B758u;
    // 0x24b758: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24b758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b75c:
    // 0x24b75c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x24b75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x24b760: 0x314b00ff  andi        $t3, $t2, 0xFF
    ctx->pc = 0x24b760u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x24b764: 0x1842025  or          $a0, $t4, $a0
    ctx->pc = 0x24b764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
    // 0x24b768: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x24b768u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x24b76c: 0x27aa0198  addiu       $t2, $sp, 0x198
    ctx->pc = 0x24b76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x24b770: 0xafab0198  sw          $t3, 0x198($sp)
    ctx->pc = 0x24b770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 11));
    // 0x24b774: 0x27a401ac  addiu       $a0, $sp, 0x1AC
    ctx->pc = 0x24b774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x24b778: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x24b778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b77c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24b77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24b780: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x24b780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x24b784: 0x3084000e  andi        $a0, $a0, 0xE
    ctx->pc = 0x24b784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
    // 0x24b788: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B788u;
    {
        const bool branch_taken_0x24b788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b788) {
            ctx->pc = 0x24B798u;
            goto label_24b798;
        }
    }
    ctx->pc = 0x24B790u;
    // 0x24b790: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x24B790u;
    {
        const bool branch_taken_0x24b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B790u;
            // 0x24b794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b790) {
            ctx->pc = 0x24C0B8u;
            goto label_24c0b8;
        }
    }
    ctx->pc = 0x24B798u;
label_24b798:
    // 0x24b798: 0x26b60064  addiu       $s6, $s5, 0x64
    ctx->pc = 0x24b798u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x24b79c: 0xe6a800e0  swc1        $f8, 0xE0($s5)
    ctx->pc = 0x24b79cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 224), bits); }
    // 0x24b7a0: 0x26b20068  addiu       $s2, $s5, 0x68
    ctx->pc = 0x24b7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
    // 0x24b7a4: 0xe6a700e4  swc1        $f7, 0xE4($s5)
    ctx->pc = 0x24b7a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
    // 0x24b7a8: 0xe6a600e8  swc1        $f6, 0xE8($s5)
    ctx->pc = 0x24b7a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 232), bits); }
    // 0x24b7ac: 0xe6a500ec  swc1        $f5, 0xEC($s5)
    ctx->pc = 0x24b7acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 236), bits); }
    // 0x24b7b0: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x24b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b7b4: 0xc6a40064  lwc1        $f4, 0x64($s5)
    ctx->pc = 0x24b7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b7b8: 0xc6a70060  lwc1        $f7, 0x60($s5)
    ctx->pc = 0x24b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24b7bc: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x24b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b7c0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x24b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7c4: 0xc6a60068  lwc1        $f6, 0x68($s5)
    ctx->pc = 0x24b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b7c8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24b7c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24b7cc: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x24b7ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x24b7d0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x24b7d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24b7d4: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x24b7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x24b7d8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24b7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24b7dc: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x24b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b7e0: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x24b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b7e4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x24b7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b7e8: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24b7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7ec: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x24b7ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x24b7f0: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24b7f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24b7f4: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24b7f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24b7f8: 0x4601305c  madd.s      $f1, $f6, $f1
    ctx->pc = 0x24b7f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x24b7fc: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x24b7fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24b800: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b804: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x24b804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b808: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24b808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b80c: 0xc7a30134  lwc1        $f3, 0x134($sp)
    ctx->pc = 0x24b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b810: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24b810u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24b814: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x24b814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x24b818: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x24b818u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x24b81c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x24b81cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x24b820: 0x4602309c  madd.s      $f2, $f6, $f2
    ctx->pc = 0x24b820u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x24b824: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x24b824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24b828: 0xc6a40070  lwc1        $f4, 0x70($s5)
    ctx->pc = 0x24b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b82c: 0xc6a800d0  lwc1        $f8, 0xD0($s5)
    ctx->pc = 0x24b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24b830: 0xc6a700d4  lwc1        $f7, 0xD4($s5)
    ctx->pc = 0x24b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24b834: 0xc6a600d8  lwc1        $f6, 0xD8($s5)
    ctx->pc = 0x24b834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b838: 0xc6a500dc  lwc1        $f5, 0xDC($s5)
    ctx->pc = 0x24b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b83c: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x24b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b840: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24b840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24b844: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24b844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24b848: 0xc6a40074  lwc1        $f4, 0x74($s5)
    ctx->pc = 0x24b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b84c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b850: 0x46004205  abs.s       $f8, $f8
    ctx->pc = 0x24b850u;
    ctx->f[8] = FPU_ABS_S(ctx->f[8]);
    // 0x24b854: 0x460039c5  abs.s       $f7, $f7
    ctx->pc = 0x24b854u;
    ctx->f[7] = FPU_ABS_S(ctx->f[7]);
    // 0x24b858: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x24b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b85c: 0x46003185  abs.s       $f6, $f6
    ctx->pc = 0x24b85cu;
    ctx->f[6] = FPU_ABS_S(ctx->f[6]);
    // 0x24b860: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24b860u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x24b864: 0xe7a30134  swc1        $f3, 0x134($sp)
    ctx->pc = 0x24b864u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24b868: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x24b868u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x24b86c: 0xc6a30078  lwc1        $f3, 0x78($s5)
    ctx->pc = 0x24b86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b870: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b874: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x24b874u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
    // 0x24b878: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x24b878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24b87c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x24b87cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24b880: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x24b880u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x24b884: 0xc6a2007c  lwc1        $f2, 0x7C($s5)
    ctx->pc = 0x24b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b888: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x24b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b88c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24b88cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24b890: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x24b890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24b894: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x24b894u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x24b898: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x24b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b89c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b8a0: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x24b8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b8a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24B8A4u;
    {
        const bool branch_taken_0x24b8a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8A4u;
            // 0x24b8a8: 0x46012941  sub.s       $f5, $f5, $f1 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8a4) {
            ctx->pc = 0x24B8B4u;
            goto label_24b8b4;
        }
    }
    ctx->pc = 0x24B8ACu;
    // 0x24b8ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B8ACu;
    {
        const bool branch_taken_0x24b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8ACu;
            // 0x24b8b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8ac) {
            ctx->pc = 0x24B8B8u;
            goto label_24b8b8;
        }
    }
    ctx->pc = 0x24B8B4u;
label_24b8b4:
    // 0x24b8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b8b8:
    // 0x24b8b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b8bc: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x24b8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b8c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24B8C0u;
    {
        const bool branch_taken_0x24b8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8C0u;
            // 0x24b8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8c0) {
            ctx->pc = 0x24B8CCu;
            goto label_24b8cc;
        }
    }
    ctx->pc = 0x24B8C8u;
    // 0x24b8c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24b8cc:
    // 0x24b8cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b8d0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x24b8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b8d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24B8D4u;
    {
        const bool branch_taken_0x24b8d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8D4u;
            // 0x24b8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8d4) {
            ctx->pc = 0x24B8E0u;
            goto label_24b8e0;
        }
    }
    ctx->pc = 0x24B8DCu;
    // 0x24b8dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x24b8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24b8e0:
    // 0x24b8e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x24b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b8e4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x24b8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b8e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24B8E8u;
    {
        const bool branch_taken_0x24b8e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8E8u;
            // 0x24b8ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8e8) {
            ctx->pc = 0x24B8F4u;
            goto label_24b8f4;
        }
    }
    ctx->pc = 0x24B8F0u;
    // 0x24b8f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24b8f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b8f4:
    // 0x24b8f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24b8f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24b8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24b8fc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x24b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x24b900: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24b900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24b904: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x24b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x24b908: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x24b908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
    // 0x24b90c: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x24b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x24b910: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b914: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24b914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24b918: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x24b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x24b91c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x24b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x24b920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B920u;
    {
        const bool branch_taken_0x24b920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b920) {
            ctx->pc = 0x24B930u;
            goto label_24b930;
        }
    }
    ctx->pc = 0x24B928u;
    // 0x24b928: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x24B928u;
    {
        const bool branch_taken_0x24b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B928u;
            // 0x24b92c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b928) {
            ctx->pc = 0x24C0B8u;
            goto label_24c0b8;
        }
    }
    ctx->pc = 0x24B930u;
label_24b930:
    // 0x24b930: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24b930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24b934: 0xe6a800f0  swc1        $f8, 0xF0($s5)
    ctx->pc = 0x24b934u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 240), bits); }
    // 0x24b938: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x24b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x24b93c: 0xe6a700f4  swc1        $f7, 0xF4($s5)
    ctx->pc = 0x24b93cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 244), bits); }
    // 0x24b940: 0xe6a600f8  swc1        $f6, 0xF8($s5)
    ctx->pc = 0x24b940u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 248), bits); }
    // 0x24b944: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x24B944u;
    SET_GPR_U32(ctx, 31, 0x24B94Cu);
    ctx->pc = 0x24B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B944u;
            // 0x24b948: 0xe6a500fc  swc1        $f5, 0xFC($s5) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B94Cu; }
        if (ctx->pc != 0x24B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B94Cu; }
        if (ctx->pc != 0x24B94Cu) { return; }
    }
    ctx->pc = 0x24B94Cu;
label_24b94c:
    // 0x24b94c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x24b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24b950: 0x3c1e3400  lui         $fp, 0x3400
    ctx->pc = 0x24b950u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)13312 << 16));
    // 0x24b954: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x24b954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b958: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x24b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24b95c: 0x449e9800  mtc1        $fp, $f19
    ctx->pc = 0x24b95cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x24b960: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x24b960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24b964: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24b968: 0x27ad0120  addiu       $t5, $sp, 0x120
    ctx->pc = 0x24b968u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24b96c: 0x3c1e3f80  lui         $fp, 0x3F80
    ctx->pc = 0x24b96cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16256 << 16));
    // 0x24b970: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x24b970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24b974: 0x27a800f4  addiu       $t0, $sp, 0xF4
    ctx->pc = 0x24b974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x24b978: 0x27a700f8  addiu       $a3, $sp, 0xF8
    ctx->pc = 0x24b978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x24b97c: 0x27b900e4  addiu       $t9, $sp, 0xE4
    ctx->pc = 0x24b97cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x24b980: 0x27af00e8  addiu       $t7, $sp, 0xE8
    ctx->pc = 0x24b980u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x24b984: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24b984u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24b988: 0x27b800d4  addiu       $t8, $sp, 0xD4
    ctx->pc = 0x24b988u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x24b98c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x24b98cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b990: 0x449ea000  mtc1        $fp, $f20
    ctx->pc = 0x24b990u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24b994: 0x27ae00d8  addiu       $t6, $sp, 0xD8
    ctx->pc = 0x24b994u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x24b998: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x24b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x24b99c: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x24b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x24b9a0: 0x26690004  addiu       $t1, $s3, 0x4
    ctx->pc = 0x24b9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x24b9a4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x24b9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24b9a8: 0x266c0008  addiu       $t4, $s3, 0x8
    ctx->pc = 0x24b9a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x24b9ac: 0x268b0004  addiu       $t3, $s4, 0x4
    ctx->pc = 0x24b9acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x24b9b0: 0x268a0008  addiu       $t2, $s4, 0x8
    ctx->pc = 0x24b9b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x24b9b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24b9b8: 0x79a20000  lq          $v0, 0x0($t5)
    ctx->pc = 0x24b9b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x24b9bc: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x24b9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x24b9c0: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x24b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b9c4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x24b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b9c8: 0xc7ae00f4  lwc1        $f14, 0xF4($sp)
    ctx->pc = 0x24b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24b9cc: 0xc7a800ec  lwc1        $f8, 0xEC($sp)
    ctx->pc = 0x24b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24b9d0: 0xc7a700ec  lwc1        $f7, 0xEC($sp)
    ctx->pc = 0x24b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24b9d4: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x24b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b9d8: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x24b9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b9dc: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x24b9dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24b9e0: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x24b9e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x24b9e4: 0xc50f0000  lwc1        $f15, 0x0($t0)
    ctx->pc = 0x24b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24b9e8: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x24b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b9ec: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x24b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b9f0: 0x46030b02  mul.s       $f12, $f1, $f3
    ctx->pc = 0x24b9f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24b9f4: 0x460202c2  mul.s       $f11, $f0, $f2
    ctx->pc = 0x24b9f4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24b9f8: 0x460f7382  mul.s       $f14, $f14, $f15
    ctx->pc = 0x24b9f8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x24b9fc: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x24b9fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x24ba00: 0xe7ae00f4  swc1        $f14, 0xF4($sp)
    ctx->pc = 0x24ba00u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x24ba04: 0xc4e80000  lwc1        $f8, 0x0($a3)
    ctx->pc = 0x24ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24ba08: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x24ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24ba0c: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x24ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ba10: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x24ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ba14: 0xc7aa00e4  lwc1        $f10, 0xE4($sp)
    ctx->pc = 0x24ba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24ba18: 0xc7a900e8  lwc1        $f9, 0xE8($sp)
    ctx->pc = 0x24ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24ba1c: 0xe7ac00fc  swc1        $f12, 0xFC($sp)
    ctx->pc = 0x24ba1cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x24ba20: 0x46086a02  mul.s       $f8, $f13, $f8
    ctx->pc = 0x24ba20u;
    ctx->f[8] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x24ba24: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x24ba24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x24ba28: 0xe7ab00e0  swc1        $f11, 0xE0($sp)
    ctx->pc = 0x24ba28u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x24ba2c: 0xe7a800f8  swc1        $f8, 0xF8($sp)
    ctx->pc = 0x24ba2cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x24ba30: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x24ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ba34: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x24ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24ba38: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x24ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ba3c: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x24ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24ba40: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x24ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ba44: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x24ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ba48: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x24ba48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x24ba4c: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x24ba4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x24ba50: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x24ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ba54: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x24ba54u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x24ba58: 0x46024a02  mul.s       $f8, $f9, $f2
    ctx->pc = 0x24ba58u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x24ba5c: 0xe7a700ec  swc1        $f7, 0xEC($sp)
    ctx->pc = 0x24ba5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x24ba60: 0xe7a600d0  swc1        $f6, 0xD0($sp)
    ctx->pc = 0x24ba60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x24ba64: 0x46003086  mov.s       $f2, $f6
    ctx->pc = 0x24ba64u;
    ctx->f[2] = FPU_MOV_S(ctx->f[6]);
    // 0x24ba68: 0xe7a800e8  swc1        $f8, 0xE8($sp)
    ctx->pc = 0x24ba68u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x24ba6c: 0x46005846  mov.s       $f1, $f11
    ctx->pc = 0x24ba6cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[11]);
    // 0x24ba70: 0xc7060000  lwc1        $f6, 0x0($t8)
    ctx->pc = 0x24ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24ba74: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x24ba74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24ba78: 0x46062882  mul.s       $f2, $f5, $f6
    ctx->pc = 0x24ba78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x24ba7c: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x24ba7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x24ba80: 0x46019880  add.s       $f2, $f19, $f1
    ctx->pc = 0x24ba80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x24ba84: 0x4602a456  rsqrt.s     $f17, $f20, $f2
    ctx->pc = 0x24ba84u;
    ctx->f[17] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24ba88: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x24ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ba8c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24ba8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24ba90: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x24ba90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x24ba94: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x24ba94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x24ba98: 0xc6b200c8  lwc1        $f18, 0xC8($s5)
    ctx->pc = 0x24ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x24ba9c: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x24ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24baa0: 0xc6af00c4  lwc1        $f15, 0xC4($s5)
    ctx->pc = 0x24baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24baa4: 0xc5a60000  lwc1        $f6, 0x0($t5)
    ctx->pc = 0x24baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24baa8: 0xc4ce0004  lwc1        $f14, 0x4($a2)
    ctx->pc = 0x24baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24baac: 0xc5a50004  lwc1        $f5, 0x4($t5)
    ctx->pc = 0x24baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24bab0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x24bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bab4: 0x4608901a  mula.s      $f18, $f8
    ctx->pc = 0x24bab4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[8]);
    // 0x24bab8: 0xc5a30008  lwc1        $f3, 0x8($t5)
    ctx->pc = 0x24bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24babc: 0x46067ddd  msub.s      $f23, $f15, $f6
    ctx->pc = 0x24babcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[6]));
    // 0x24bac0: 0x460e901a  mula.s      $f18, $f14
    ctx->pc = 0x24bac0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[14]);
    // 0x24bac4: 0x46057b9d  msub.s      $f14, $f15, $f5
    ctx->pc = 0x24bac4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[5]));
    // 0x24bac8: 0x4604901a  mula.s      $f18, $f4
    ctx->pc = 0x24bac8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[4]);
    // 0x24bacc: 0xc4cd000c  lwc1        $f13, 0xC($a2)
    ctx->pc = 0x24baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24bad0: 0x46037d9d  msub.s      $f22, $f15, $f3
    ctx->pc = 0x24bad0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
    // 0x24bad4: 0xc7290000  lwc1        $f9, 0x0($t9)
    ctx->pc = 0x24bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24bad8: 0xc7020000  lwc1        $f2, 0x0($t8)
    ctx->pc = 0x24bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24badc: 0xc5ac000c  lwc1        $f12, 0xC($t5)
    ctx->pc = 0x24badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24bae0: 0xc6c80000  lwc1        $f8, 0x0($s6)
    ctx->pc = 0x24bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24bae4: 0x460d901a  mula.s      $f18, $f13
    ctx->pc = 0x24bae4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[13]);
    // 0x24bae8: 0x4600b345  abs.s       $f13, $f22
    ctx->pc = 0x24bae8u;
    ctx->f[13] = FPU_ABS_S(ctx->f[22]);
    // 0x24baec: 0xc4920000  lwc1        $f18, 0x0($a0)
    ctx->pc = 0x24baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x24baf0: 0x46091040  add.s       $f1, $f2, $f9
    ctx->pc = 0x24baf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x24baf4: 0x460c7b1d  msub.s      $f12, $f15, $f12
    ctx->pc = 0x24baf4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[12]));
    // 0x24baf8: 0x46019c00  add.s       $f16, $f19, $f1
    ctx->pc = 0x24baf8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x24bafc: 0x4608901a  mula.s      $f18, $f8
    ctx->pc = 0x24bafcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[8]);
    // 0x24bb00: 0x4600bbc5  abs.s       $f15, $f23
    ctx->pc = 0x24bb00u;
    ctx->f[15] = FPU_ABS_S(ctx->f[23]);
    // 0x24bb04: 0xc64a0000  lwc1        $f10, 0x0($s2)
    ctx->pc = 0x24bb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24bb08: 0xc4b80000  lwc1        $f24, 0x0($a1)
    ctx->pc = 0x24bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x24bb0c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x24bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24bb10: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x24bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bb14: 0xc6a60070  lwc1        $f6, 0x70($s5)
    ctx->pc = 0x24bb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24bb18: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x24bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb1c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x24bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bb20: 0x460ac6dc  madd.s      $f27, $f24, $f10
    ctx->pc = 0x24bb20u;
    ctx->f[27] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[10]));
    // 0x24bb24: 0xc69a0008  lwc1        $f26, 0x8($s4)
    ctx->pc = 0x24bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x24bb28: 0x46052602  mul.s       $f24, $f4, $f5
    ctx->pc = 0x24bb28u;
    ctx->f[24] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24bb2c: 0x461bc018  adda.s      $f24, $f27
    ctx->pc = 0x24bb2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x24bb30: 0x46062602  mul.s       $f24, $f4, $f6
    ctx->pc = 0x24bb30u;
    ctx->f[24] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x24bb34: 0x46060902  mul.s       $f4, $f1, $f6
    ctx->pc = 0x24bb34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x24bb38: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x24bb38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x24bb3c: 0x46017bc1  sub.s       $f15, $f15, $f1
    ctx->pc = 0x24bb3cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x24bb40: 0xc6990004  lwc1        $f25, 0x4($s4)
    ctx->pc = 0x24bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x24bb44: 0x4608d01a  mula.s      $f26, $f8
    ctx->pc = 0x24bb44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[8]);
    // 0x24bb48: 0xc6770008  lwc1        $f23, 0x8($s3)
    ctx->pc = 0x24bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24bb4c: 0xc6760004  lwc1        $f22, 0x4($s3)
    ctx->pc = 0x24bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24bb50: 0xc5e70000  lwc1        $f7, 0x0($t7)
    ctx->pc = 0x24bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24bb54: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x24bb54u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x24bb58: 0x460ac85c  madd.s      $f1, $f25, $f10
    ctx->pc = 0x24bb58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[10]));
    // 0x24bb5c: 0x4601c018  adda.s      $f24, $f1
    ctx->pc = 0x24bb5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x24bb60: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x24bb60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x24bb64: 0x4608b81a  mula.s      $f23, $f8
    ctx->pc = 0x24bb64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[8]);
    // 0x24bb68: 0x460ab05c  madd.s      $f1, $f22, $f10
    ctx->pc = 0x24bb68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[10]));
    // 0x24bb6c: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x24bb6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x24bb70: 0x4605001c  madd.s      $f0, $f0, $f5
    ctx->pc = 0x24bb70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x24bb74: 0x46007385  abs.s       $f14, $f14
    ctx->pc = 0x24bb74u;
    ctx->f[14] = FPU_ABS_S(ctx->f[14]);
    // 0x24bb78: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x24bb78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x24bb7c: 0xc5cb0000  lwc1        $f11, 0x0($t6)
    ctx->pc = 0x24bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24bb80: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x24bb80u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x24bb84: 0x4610a416  rsqrt.s     $f16, $f20, $f16
    ctx->pc = 0x24bb84u;
    ctx->f[16] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bb88: 0x46075800  add.s       $f0, $f11, $f7
    ctx->pc = 0x24bb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x24bb8c: 0x46009800  add.s       $f0, $f19, $f0
    ctx->pc = 0x24bb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[19], ctx->f[0]);
    // 0x24bb90: 0x46037381  sub.s       $f14, $f14, $f3
    ctx->pc = 0x24bb90u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[3]);
    // 0x24bb94: 0x4600a216  rsqrt.s     $f8, $f20, $f0
    ctx->pc = 0x24bb94u;
    ctx->f[8] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bb98: 0xc6b20084  lwc1        $f18, 0x84($s5)
    ctx->pc = 0x24bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x24bb9c: 0x460e8142  mul.s       $f5, $f16, $f14
    ctx->pc = 0x24bb9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[14]);
    // 0x24bba0: 0x460f8982  mul.s       $f6, $f17, $f15
    ctx->pc = 0x24bba0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[17], ctx->f[15]);
    // 0x24bba4: 0x46059034  c.lt.s      $f18, $f5
    ctx->pc = 0x24bba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[18], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bba8: 0x460ca842  mul.s       $f1, $f21, $f12
    ctx->pc = 0x24bba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x24bbac: 0x0  nop
    ctx->pc = 0x24bbacu;
    // NOP
    // 0x24bbb0: 0x0  nop
    ctx->pc = 0x24bbb0u;
    // NOP
    // 0x24bbb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24BBB4u;
    {
        const bool branch_taken_0x24bbb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBB4u;
            // 0x24bbb8: 0x460d4102  mul.s       $f4, $f8, $f13 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbb4) {
            ctx->pc = 0x24BBC4u;
            goto label_24bbc4;
        }
    }
    ctx->pc = 0x24BBBCu;
    // 0x24bbbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BBBCu;
    {
        const bool branch_taken_0x24bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBBCu;
            // 0x24bbc0: 0x240e0004  addiu       $t6, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbbc) {
            ctx->pc = 0x24BBC8u;
            goto label_24bbc8;
        }
    }
    ctx->pc = 0x24BBC4u;
label_24bbc4:
    // 0x24bbc4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x24bbc4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bbc8:
    // 0x24bbc8: 0xc6a00080  lwc1        $f0, 0x80($s5)
    ctx->pc = 0x24bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbcc: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x24bbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bbd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BBD0u;
    {
        const bool branch_taken_0x24bbd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBD0u;
            // 0x24bbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbd0) {
            ctx->pc = 0x24BBDCu;
            goto label_24bbdc;
        }
    }
    ctx->pc = 0x24BBD8u;
    // 0x24bbd8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24bbdc:
    // 0x24bbdc: 0xc6a00088  lwc1        $f0, 0x88($s5)
    ctx->pc = 0x24bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbe0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x24bbe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bbe4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BBE4u;
    {
        const bool branch_taken_0x24bbe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBE4u;
            // 0x24bbe8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbe4) {
            ctx->pc = 0x24BBF0u;
            goto label_24bbf0;
        }
    }
    ctx->pc = 0x24BBECu;
    // 0x24bbec: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x24bbecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24bbf0:
    // 0x24bbf0: 0xc6a0008c  lwc1        $f0, 0x8C($s5)
    ctx->pc = 0x24bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24bbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bbf8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BBF8u;
    {
        const bool branch_taken_0x24bbf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBF8u;
            // 0x24bbfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbf8) {
            ctx->pc = 0x24BC04u;
            goto label_24bc04;
        }
    }
    ctx->pc = 0x24BC00u;
    // 0x24bc00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24bc00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bc04:
    // 0x24bc04: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x24bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x24bc08: 0x306e00ff  andi        $t6, $v1, 0xFF
    ctx->pc = 0x24bc08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24bc0c: 0x1e21025  or          $v0, $t7, $v0
    ctx->pc = 0x24bc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x24bc10: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x24bc10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x24bc14: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x24bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x24bc18: 0xafae0190  sw          $t6, 0x190($sp)
    ctx->pc = 0x24bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 14));
    // 0x24bc1c: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x24bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x24bc20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24bc28: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x24bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x24bc2c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x24bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x24bc30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BC30u;
    {
        const bool branch_taken_0x24bc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bc30) {
            ctx->pc = 0x24BC40u;
            goto label_24bc40;
        }
    }
    ctx->pc = 0x24BC38u;
    // 0x24bc38: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x24BC38u;
    {
        const bool branch_taken_0x24bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC38u;
            // 0x24bc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc38) {
            ctx->pc = 0x24C0B8u;
            goto label_24c0b8;
        }
    }
    ctx->pc = 0x24BC40u;
label_24bc40:
    // 0x24bc40: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x24bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x24bc44: 0xc423f8f0  lwc1        $f3, -0x710($at)
    ctx->pc = 0x24bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bc48: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x24bc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x24bc4c: 0xc420f8f0  lwc1        $f0, -0x710($at)
    ctx->pc = 0x24bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc50: 0x46008836  c.le.s      $f17, $f0
    ctx->pc = 0x24bc50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BC54u;
    {
        const bool branch_taken_0x24bc54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC54u;
            // 0x24bc58: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc54) {
            ctx->pc = 0x24BC60u;
            goto label_24bc60;
        }
    }
    ctx->pc = 0x24BC5Cu;
    // 0x24bc5c: 0xc426f8f8  lwc1        $f6, -0x708($at)
    ctx->pc = 0x24bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24bc60:
    // 0x24bc60: 0x46038036  c.le.s      $f16, $f3
    ctx->pc = 0x24bc60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BC64u;
    {
        const bool branch_taken_0x24bc64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC64u;
            // 0x24bc68: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc64) {
            ctx->pc = 0x24BC70u;
            goto label_24bc70;
        }
    }
    ctx->pc = 0x24BC6Cu;
    // 0x24bc6c: 0xc425f8f8  lwc1        $f5, -0x708($at)
    ctx->pc = 0x24bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24bc70:
    // 0x24bc70: 0x46034036  c.le.s      $f8, $f3
    ctx->pc = 0x24bc70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BC74u;
    {
        const bool branch_taken_0x24bc74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC74u;
            // 0x24bc78: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc74) {
            ctx->pc = 0x24BC80u;
            goto label_24bc80;
        }
    }
    ctx->pc = 0x24BC7Cu;
    // 0x24bc7c: 0xc424f8f8  lwc1        $f4, -0x708($at)
    ctx->pc = 0x24bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24bc80:
    // 0x24bc80: 0xe6a60100  swc1        $f6, 0x100($s5)
    ctx->pc = 0x24bc80u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 256), bits); }
    // 0x24bc84: 0x3c0f3400  lui         $t7, 0x3400
    ctx->pc = 0x24bc84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)13312 << 16));
    // 0x24bc88: 0xe6a50104  swc1        $f5, 0x104($s5)
    ctx->pc = 0x24bc88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 260), bits); }
    // 0x24bc8c: 0x27ae0104  addiu       $t6, $sp, 0x104
    ctx->pc = 0x24bc8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x24bc90: 0xe6a40108  swc1        $f4, 0x108($s5)
    ctx->pc = 0x24bc90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 264), bits); }
    // 0x24bc94: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x24bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x24bc98: 0xe6a1010c  swc1        $f1, 0x10C($s5)
    ctx->pc = 0x24bc98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 268), bits); }
    // 0x24bc9c: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x24bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x24bca0: 0xc6b600c0  lwc1        $f22, 0xC0($s5)
    ctx->pc = 0x24bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24bca4: 0xc5ad0000  lwc1        $f13, 0x0($t5)
    ctx->pc = 0x24bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24bca8: 0xc50a0000  lwc1        $f10, 0x0($t0)
    ctx->pc = 0x24bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24bcac: 0xc6b500c8  lwc1        $f21, 0xC8($s5)
    ctx->pc = 0x24bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24bcb0: 0xc7a40100  lwc1        $f4, 0x100($sp)
    ctx->pc = 0x24bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bcb4: 0xc5af0004  lwc1        $f15, 0x4($t5)
    ctx->pc = 0x24bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24bcb8: 0xc5ce0000  lwc1        $f14, 0x0($t6)
    ctx->pc = 0x24bcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24bcbc: 0x460db01a  mula.s      $f22, $f13
    ctx->pc = 0x24bcbcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[13]);
    // 0x24bcc0: 0xc5ac0008  lwc1        $f12, 0x8($t5)
    ctx->pc = 0x24bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24bcc4: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x24bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24bcc8: 0x4604ac1d  msub.s      $f16, $f21, $f4
    ctx->pc = 0x24bcc8u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[4]));
    // 0x24bccc: 0x460fb01a  mula.s      $f22, $f15
    ctx->pc = 0x24bcccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[15]);
    // 0x24bcd0: 0x460eaddd  msub.s      $f23, $f21, $f14
    ctx->pc = 0x24bcd0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[14]));
    // 0x24bcd4: 0xc5a6000c  lwc1        $f6, 0xC($t5)
    ctx->pc = 0x24bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24bcd8: 0x460cb01a  mula.s      $f22, $f12
    ctx->pc = 0x24bcd8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x24bcdc: 0x460dae9d  msub.s      $f26, $f21, $f13
    ctx->pc = 0x24bcdcu;
    ctx->f[26] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[13]));
    // 0x24bce0: 0xc7bc00d0  lwc1        $f28, 0xD0($sp)
    ctx->pc = 0x24bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x24bce4: 0xc4e80000  lwc1        $f8, 0x0($a3)
    ctx->pc = 0x24bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24bce8: 0x46008605  abs.s       $f24, $f16
    ctx->pc = 0x24bce8u;
    ctx->f[24] = FPU_ABS_S(ctx->f[16]);
    // 0x24bcec: 0x4606b01a  mula.s      $f22, $f6
    ctx->pc = 0x24bcecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[6]);
    // 0x24bcf0: 0x4600d585  abs.s       $f22, $f26
    ctx->pc = 0x24bcf0u;
    ctx->f[22] = FPU_ABS_S(ctx->f[26]);
    // 0x24bcf4: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x24bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x24bcf8: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x24bcf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x24bcfc: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x24bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bd00: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x24bd00u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bd04: 0x461ae680  add.s       $f26, $f28, $f26
    ctx->pc = 0x24bd04u;
    ctx->f[26] = FPU_ADD_S(ctx->f[28], ctx->f[26]);
    // 0x24bd08: 0x46020740  add.s       $f29, $f0, $f2
    ctx->pc = 0x24bd08u;
    ctx->f[29] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24bd0c: 0x461a0680  add.s       $f26, $f0, $f26
    ctx->pc = 0x24bd0cu;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x24bd10: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x24bd10u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x24bd14: 0x4604a91d  msub.s      $f4, $f21, $f4
    ctx->pc = 0x24bd14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[4]));
    // 0x24bd18: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x24bd18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x24bd1c: 0xc6b20060  lwc1        $f18, 0x60($s5)
    ctx->pc = 0x24bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x24bd20: 0xc4990000  lwc1        $f25, 0x0($a0)
    ctx->pc = 0x24bd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x24bd24: 0x461aa696  rsqrt.s     $f26, $f20, $f26
    ctx->pc = 0x24bd24u;
    ctx->f[26] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bd28: 0x4612c81a  mula.s      $f25, $f18
    ctx->pc = 0x24bd28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[18]);
    // 0x24bd2c: 0x46002545  abs.s       $f21, $f4
    ctx->pc = 0x24bd2cu;
    ctx->f[21] = FPU_ABS_S(ctx->f[4]);
    // 0x24bd30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24bd30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bd34: 0x461da656  rsqrt.s     $f25, $f20, $f29
    ctx->pc = 0x24bd34u;
    ctx->f[25] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bd38: 0x4600a016  rsqrt.s     $f0, $f20, $f0
    ctx->pc = 0x24bd38u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bd3c: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x24bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24bd40: 0xc66e0004  lwc1        $f14, 0x4($s3)
    ctx->pc = 0x24bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24bd44: 0xc6530000  lwc1        $f19, 0x0($s2)
    ctx->pc = 0x24bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x24bd48: 0xc7a60150  lwc1        $f6, 0x150($sp)
    ctx->pc = 0x24bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24bd4c: 0xc6b10070  lwc1        $f17, 0x70($s5)
    ctx->pc = 0x24bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x24bd50: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x24bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24bd54: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x24bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24bd58: 0x460f72c2  mul.s       $f11, $f14, $f15
    ctx->pc = 0x24bd58u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x24bd5c: 0x4613319c  madd.s      $f6, $f6, $f19
    ctx->pc = 0x24bd5cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[19]));
    // 0x24bd60: 0x46065818  adda.s      $f11, $f6
    ctx->pc = 0x24bd60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[6]);
    // 0x24bd64: 0x46116182  mul.s       $f6, $f12, $f17
    ctx->pc = 0x24bd64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[17]);
    // 0x24bd68: 0x460d631c  madd.s      $f12, $f12, $f13
    ctx->pc = 0x24bd68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[13]));
    // 0x24bd6c: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x24bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24bd70: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x24bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bd74: 0xc4b00000  lwc1        $f16, 0x0($a1)
    ctx->pc = 0x24bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x24bd78: 0x461172c2  mul.s       $f11, $f14, $f17
    ctx->pc = 0x24bd78u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[17]);
    // 0x24bd7c: 0x4612281a  mula.s      $f5, $f18
    ctx->pc = 0x24bd7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[18]);
    // 0x24bd80: 0x4613211c  madd.s      $f4, $f4, $f19
    ctx->pc = 0x24bd80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[19]));
    // 0x24bd84: 0x46045818  adda.s      $f11, $f4
    ctx->pc = 0x24bd84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x24bd88: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x24bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bd8c: 0x460d811c  madd.s      $f4, $f16, $f13
    ctx->pc = 0x24bd8cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[13]));
    // 0x24bd90: 0x4600bdc5  abs.s       $f23, $f23
    ctx->pc = 0x24bd90u;
    ctx->f[23] = FPU_ABS_S(ctx->f[23]);
    // 0x24bd94: 0x4604bdc1  sub.s       $f23, $f23, $f4
    ctx->pc = 0x24bd94u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[4]);
    // 0x24bd98: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x24bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bd9c: 0x4612181a  mula.s      $f3, $f18
    ctx->pc = 0x24bd9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[18]);
    // 0x24bda0: 0xc6bb0084  lwc1        $f27, 0x84($s5)
    ctx->pc = 0x24bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x24bda4: 0x4617c942  mul.s       $f5, $f25, $f23
    ctx->pc = 0x24bda4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[25], ctx->f[23]);
    // 0x24bda8: 0x4613109c  madd.s      $f2, $f2, $f19
    ctx->pc = 0x24bda8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[19]));
    // 0x24bdac: 0x46023018  adda.s      $f6, $f2
    ctx->pc = 0x24bdacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x24bdb0: 0x460f809c  madd.s      $f2, $f16, $f15
    ctx->pc = 0x24bdb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[15]));
    // 0x24bdb4: 0x460cc601  sub.s       $f24, $f24, $f12
    ctx->pc = 0x24bdb4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[12]);
    // 0x24bdb8: 0x4602b581  sub.s       $f22, $f22, $f2
    ctx->pc = 0x24bdb8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x24bdbc: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x24bdbcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x24bdc0: 0x4618d182  mul.s       $f6, $f26, $f24
    ctx->pc = 0x24bdc0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
    // 0x24bdc4: 0x46160102  mul.s       $f4, $f0, $f22
    ctx->pc = 0x24bdc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x24bdc8: 0x4605d834  c.lt.s      $f27, $f5
    ctx->pc = 0x24bdc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bdcc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24BDCCu;
    {
        const bool branch_taken_0x24bdcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDCCu;
            // 0x24bdd0: 0x46150882  mul.s       $f2, $f1, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdcc) {
            ctx->pc = 0x24BDDCu;
            goto label_24bddc;
        }
    }
    ctx->pc = 0x24BDD4u;
    // 0x24bdd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BDD4u;
    {
        const bool branch_taken_0x24bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDD4u;
            // 0x24bdd8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdd4) {
            ctx->pc = 0x24BDE0u;
            goto label_24bde0;
        }
    }
    ctx->pc = 0x24BDDCu;
label_24bddc:
    // 0x24bddc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24bddcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bde0:
    // 0x24bde0: 0xc6a10080  lwc1        $f1, 0x80($s5)
    ctx->pc = 0x24bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bde4: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x24bde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bde8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BDE8u;
    {
        const bool branch_taken_0x24bde8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDE8u;
            // 0x24bdec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bde8) {
            ctx->pc = 0x24BDF4u;
            goto label_24bdf4;
        }
    }
    ctx->pc = 0x24BDF0u;
    // 0x24bdf0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x24bdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24bdf4:
    // 0x24bdf4: 0xc6a10088  lwc1        $f1, 0x88($s5)
    ctx->pc = 0x24bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bdf8: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x24bdf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bdfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BDFCu;
    {
        const bool branch_taken_0x24bdfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDFCu;
            // 0x24be00: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdfc) {
            ctx->pc = 0x24BE08u;
            goto label_24be08;
        }
    }
    ctx->pc = 0x24BE04u;
    // 0x24be04: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x24be04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24be08:
    // 0x24be08: 0xc6a1008c  lwc1        $f1, 0x8C($s5)
    ctx->pc = 0x24be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24be0c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x24be0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE10u;
    {
        const bool branch_taken_0x24be10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE10u;
            // 0x24be14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be10) {
            ctx->pc = 0x24BE1Cu;
            goto label_24be1c;
        }
    }
    ctx->pc = 0x24BE18u;
    // 0x24be18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24be18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24be1c:
    // 0x24be1c: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x24be1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x24be20: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x24be20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x24be24: 0x1873825  or          $a3, $t4, $a3
    ctx->pc = 0x24be24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) | GPR_U64(ctx, 7));
    // 0x24be28: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x24be28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x24be2c: 0x27a8018c  addiu       $t0, $sp, 0x18C
    ctx->pc = 0x24be2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x24be30: 0xafaa018c  sw          $t2, 0x18C($sp)
    ctx->pc = 0x24be30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 10));
    // 0x24be34: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x24be34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x24be38: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x24be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24be3c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x24be3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x24be40: 0x8fa701a0  lw          $a3, 0x1A0($sp)
    ctx->pc = 0x24be40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24be44: 0x30e7000e  andi        $a3, $a3, 0xE
    ctx->pc = 0x24be44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)14);
    // 0x24be48: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BE48u;
    {
        const bool branch_taken_0x24be48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be48) {
            ctx->pc = 0x24BE58u;
            goto label_24be58;
        }
    }
    ctx->pc = 0x24BE50u;
    // 0x24be50: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x24BE50u;
    {
        const bool branch_taken_0x24be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE50u;
            // 0x24be54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be50) {
            ctx->pc = 0x24C0B8u;
            goto label_24c0b8;
        }
    }
    ctx->pc = 0x24BE58u;
label_24be58:
    // 0x24be58: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x24be58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x24be5c: 0xc423f8f0  lwc1        $f3, -0x710($at)
    ctx->pc = 0x24be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24be60: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x24be60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x24be64: 0xc421f8f0  lwc1        $f1, -0x710($at)
    ctx->pc = 0x24be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24be68: 0x4601d036  c.le.s      $f26, $f1
    ctx->pc = 0x24be68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE6Cu;
    {
        const bool branch_taken_0x24be6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE6Cu;
            // 0x24be70: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be6c) {
            ctx->pc = 0x24BE78u;
            goto label_24be78;
        }
    }
    ctx->pc = 0x24BE74u;
    // 0x24be74: 0xc426f8f8  lwc1        $f6, -0x708($at)
    ctx->pc = 0x24be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24be78:
    // 0x24be78: 0x4603c836  c.le.s      $f25, $f3
    ctx->pc = 0x24be78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE7Cu;
    {
        const bool branch_taken_0x24be7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE7Cu;
            // 0x24be80: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be7c) {
            ctx->pc = 0x24BE88u;
            goto label_24be88;
        }
    }
    ctx->pc = 0x24BE84u;
    // 0x24be84: 0xc425f8f8  lwc1        $f5, -0x708($at)
    ctx->pc = 0x24be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24be88:
    // 0x24be88: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x24be88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE8Cu;
    {
        const bool branch_taken_0x24be8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE8Cu;
            // 0x24be90: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be8c) {
            ctx->pc = 0x24BE98u;
            goto label_24be98;
        }
    }
    ctx->pc = 0x24BE94u;
    // 0x24be94: 0xc424f8f8  lwc1        $f4, -0x708($at)
    ctx->pc = 0x24be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24be98:
    // 0x24be98: 0xe6a60110  swc1        $f6, 0x110($s5)
    ctx->pc = 0x24be98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 272), bits); }
    // 0x24be9c: 0x3c073400  lui         $a3, 0x3400
    ctx->pc = 0x24be9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)13312 << 16));
    // 0x24bea0: 0xe6a50114  swc1        $f5, 0x114($s5)
    ctx->pc = 0x24bea0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 276), bits); }
    // 0x24bea4: 0xe6a40118  swc1        $f4, 0x118($s5)
    ctx->pc = 0x24bea4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 280), bits); }
    // 0x24bea8: 0xe6a2011c  swc1        $f2, 0x11C($s5)
    ctx->pc = 0x24bea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 284), bits); }
    // 0x24beac: 0xc7bf00e0  lwc1        $f31, 0xE0($sp)
    ctx->pc = 0x24beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x24beb0: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x24beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24beb4: 0x460a4800  add.s       $f0, $f9, $f10
    ctx->pc = 0x24beb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x24beb8: 0x46083880  add.s       $f2, $f7, $f8
    ctx->pc = 0x24beb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x24bebc: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x24bebcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24bec0: 0x4603f8c0  add.s       $f3, $f31, $f3
    ctx->pc = 0x24bec0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], ctx->f[3]);
    // 0x24bec4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x24bec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x24bec8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x24bec8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x24becc: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x24beccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x24bed0: 0x4600a016  rsqrt.s     $f0, $f20, $f0
    ctx->pc = 0x24bed0u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bed4: 0x4603a0d6  rsqrt.s     $f3, $f20, $f3
    ctx->pc = 0x24bed4u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bed8: 0x4602a096  rsqrt.s     $f2, $f20, $f2
    ctx->pc = 0x24bed8u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[20]);
    // 0x24bedc: 0xc6be00c4  lwc1        $f30, 0xC4($s5)
    ctx->pc = 0x24bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x24bee0: 0xc7b30100  lwc1        $f19, 0x100($sp)
    ctx->pc = 0x24bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x24bee4: 0xc6bd00c0  lwc1        $f29, 0xC0($s5)
    ctx->pc = 0x24bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x24bee8: 0xc4d20000  lwc1        $f18, 0x0($a2)
    ctx->pc = 0x24bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x24beec: 0xc5d10000  lwc1        $f17, 0x0($t6)
    ctx->pc = 0x24beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x24bef0: 0xc4d00004  lwc1        $f16, 0x4($a2)
    ctx->pc = 0x24bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x24bef4: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x24bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24bef8: 0x4613f01a  mula.s      $f30, $f19
    ctx->pc = 0x24bef8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[30], ctx->f[19]);
    // 0x24befc: 0xc6380000  lwc1        $f24, 0x0($s1)
    ctx->pc = 0x24befcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x24bf00: 0xc6770008  lwc1        $f23, 0x8($s3)
    ctx->pc = 0x24bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24bf04: 0x4612ec9d  msub.s      $f18, $f29, $f18
    ctx->pc = 0x24bf04u;
    ctx->f[18] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[18]));
    // 0x24bf08: 0x4611f01a  mula.s      $f30, $f17
    ctx->pc = 0x24bf08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[30], ctx->f[17]);
    // 0x24bf0c: 0x4610ec5d  msub.s      $f17, $f29, $f16
    ctx->pc = 0x24bf0cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[16]));
    // 0x24bf10: 0xc4ce0008  lwc1        $f14, 0x8($a2)
    ctx->pc = 0x24bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24bf14: 0x460ff01a  mula.s      $f30, $f15
    ctx->pc = 0x24bf14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[30], ctx->f[15]);
    // 0x24bf18: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x24bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24bf1c: 0xc4cc000c  lwc1        $f12, 0xC($a2)
    ctx->pc = 0x24bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24bf20: 0xc4ab0000  lwc1        $f11, 0x0($a1)
    ctx->pc = 0x24bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24bf24: 0xc6bb0060  lwc1        $f27, 0x60($s5)
    ctx->pc = 0x24bf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x24bf28: 0x460eec1d  msub.s      $f16, $f29, $f14
    ctx->pc = 0x24bf28u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[14]));
    // 0x24bf2c: 0xc6dc0000  lwc1        $f28, 0x0($s6)
    ctx->pc = 0x24bf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x24bf30: 0x460df01a  mula.s      $f30, $f13
    ctx->pc = 0x24bf30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[30], ctx->f[13]);
    // 0x24bf34: 0x460cebdd  msub.s      $f15, $f29, $f12
    ctx->pc = 0x24bf34u;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[29], ctx->f[12]));
    // 0x24bf38: 0xc7aa0150  lwc1        $f10, 0x150($sp)
    ctx->pc = 0x24bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24bf3c: 0x461b581a  mula.s      $f11, $f27
    ctx->pc = 0x24bf3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[27]);
    // 0x24bf40: 0xc6160000  lwc1        $f22, 0x0($s0)
    ctx->pc = 0x24bf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24bf44: 0xc6950008  lwc1        $f21, 0x8($s4)
    ctx->pc = 0x24bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24bf48: 0x4618b902  mul.s       $f4, $f23, $f24
    ctx->pc = 0x24bf48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x24bf4c: 0x461c529c  madd.s      $f10, $f10, $f28
    ctx->pc = 0x24bf4cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[28]));
    // 0x24bf50: 0x460a2018  adda.s      $f4, $f10
    ctx->pc = 0x24bf50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x24bf54: 0xc49a0000  lwc1        $f26, 0x0($a0)
    ctx->pc = 0x24bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x24bf58: 0x46009385  abs.s       $f14, $f18
    ctx->pc = 0x24bf58u;
    ctx->f[14] = FPU_ABS_S(ctx->f[18]);
    // 0x24bf5c: 0x4616a91c  madd.s      $f4, $f21, $f22
    ctx->pc = 0x24bf5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[22]));
    // 0x24bf60: 0x46047381  sub.s       $f14, $f14, $f4
    ctx->pc = 0x24bf60u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
    // 0x24bf64: 0xc5690000  lwc1        $f9, 0x0($t3)
    ctx->pc = 0x24bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24bf68: 0xc6880000  lwc1        $f8, 0x0($s4)
    ctx->pc = 0x24bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24bf6c: 0xc6b90070  lwc1        $f25, 0x70($s5)
    ctx->pc = 0x24bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x24bf70: 0x4616d102  mul.s       $f4, $f26, $f22
    ctx->pc = 0x24bf70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[26], ctx->f[22]);
    // 0x24bf74: 0x461b481a  mula.s      $f9, $f27
    ctx->pc = 0x24bf74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[27]);
    // 0x24bf78: 0x461c421c  madd.s      $f8, $f8, $f28
    ctx->pc = 0x24bf78u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[28]));
    // 0x24bf7c: 0x46082018  adda.s      $f4, $f8
    ctx->pc = 0x24bf7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x24bf80: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x24bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24bf84: 0x4619ba1c  madd.s      $f8, $f23, $f25
    ctx->pc = 0x24bf84u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[25]));
    // 0x24bf88: 0x46008b45  abs.s       $f13, $f17
    ctx->pc = 0x24bf88u;
    ctx->f[13] = FPU_ABS_S(ctx->f[17]);
    // 0x24bf8c: 0x46086b41  sub.s       $f13, $f13, $f8
    ctx->pc = 0x24bf8cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[8]);
    // 0x24bf90: 0x461b381a  mula.s      $f7, $f27
    ctx->pc = 0x24bf90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[27]);
    // 0x24bf94: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x24bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24bf98: 0x4619a902  mul.s       $f4, $f21, $f25
    ctx->pc = 0x24bf98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
    // 0x24bf9c: 0x461c319c  madd.s      $f6, $f6, $f28
    ctx->pc = 0x24bf9cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[28]));
    // 0x24bfa0: 0x46062018  adda.s      $f4, $f6
    ctx->pc = 0x24bfa0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x24bfa4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x24bfa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24bfa8: 0x46007ac5  abs.s       $f11, $f15
    ctx->pc = 0x24bfa8u;
    ctx->f[11] = FPU_ABS_S(ctx->f[15]);
    // 0x24bfac: 0x46008305  abs.s       $f12, $f16
    ctx->pc = 0x24bfacu;
    ctx->f[12] = FPU_ABS_S(ctx->f[16]);
    // 0x24bfb0: 0x4618d11c  madd.s      $f4, $f26, $f24
    ctx->pc = 0x24bfb0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[24]));
    // 0x24bfb4: 0x46046301  sub.s       $f12, $f12, $f4
    ctx->pc = 0x24bfb4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x24bfb8: 0x46055ac1  sub.s       $f11, $f11, $f5
    ctx->pc = 0x24bfb8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x24bfbc: 0xc6a10084  lwc1        $f1, 0x84($s5)
    ctx->pc = 0x24bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bfc0: 0x460d01c2  mul.s       $f7, $f0, $f13
    ctx->pc = 0x24bfc0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x24bfc4: 0x460e1a02  mul.s       $f8, $f3, $f14
    ctx->pc = 0x24bfc4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x24bfc8: 0x460c1182  mul.s       $f6, $f2, $f12
    ctx->pc = 0x24bfc8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x24bfcc: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x24bfccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bfd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24BFD0u;
    {
        const bool branch_taken_0x24bfd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFD0u;
            // 0x24bfd4: 0x460b2902  mul.s       $f4, $f5, $f11 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfd0) {
            ctx->pc = 0x24BFE0u;
            goto label_24bfe0;
        }
    }
    ctx->pc = 0x24BFD8u;
    // 0x24bfd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24BFD8u;
    {
        const bool branch_taken_0x24bfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFD8u;
            // 0x24bfdc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfd8) {
            ctx->pc = 0x24BFE4u;
            goto label_24bfe4;
        }
    }
    ctx->pc = 0x24BFE0u;
label_24bfe0:
    // 0x24bfe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24bfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bfe4:
    // 0x24bfe4: 0xc6a10080  lwc1        $f1, 0x80($s5)
    ctx->pc = 0x24bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bfe8: 0x46080834  c.lt.s      $f1, $f8
    ctx->pc = 0x24bfe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bfec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BFECu;
    {
        const bool branch_taken_0x24bfec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFECu;
            // 0x24bff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfec) {
            ctx->pc = 0x24BFF8u;
            goto label_24bff8;
        }
    }
    ctx->pc = 0x24BFF4u;
    // 0x24bff4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24bff8:
    // 0x24bff8: 0xc6a10088  lwc1        $f1, 0x88($s5)
    ctx->pc = 0x24bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bffc: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x24bffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c000: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C000u;
    {
        const bool branch_taken_0x24c000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C000u;
            // 0x24c004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c000) {
            ctx->pc = 0x24C00Cu;
            goto label_24c00c;
        }
    }
    ctx->pc = 0x24C008u;
    // 0x24c008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24c008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24c00c:
    // 0x24c00c: 0xc6a1008c  lwc1        $f1, 0x8C($s5)
    ctx->pc = 0x24c00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c010: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x24c010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c014: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C014u;
    {
        const bool branch_taken_0x24c014 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C014u;
            // 0x24c018: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c014) {
            ctx->pc = 0x24C020u;
            goto label_24c020;
        }
    }
    ctx->pc = 0x24C01Cu;
    // 0x24c01c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24c01cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c020:
    // 0x24c020: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24c024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24c024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24c028: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x24c028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x24c02c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24c02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24c030: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x24c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24c034: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x24c034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
    // 0x24c038: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x24c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x24c03c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c040: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x24c040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24c044: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x24c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x24c048: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x24c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x24c04c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C04Cu;
    {
        const bool branch_taken_0x24c04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c04c) {
            ctx->pc = 0x24C060u;
            goto label_24c060;
        }
    }
    ctx->pc = 0x24C054u;
    // 0x24c054: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24C054u;
    {
        const bool branch_taken_0x24c054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C054u;
            // 0x24c058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c054) {
            ctx->pc = 0x24C0B8u;
            goto label_24c0b8;
        }
    }
    ctx->pc = 0x24C05Cu;
    // 0x24c05c: 0x0  nop
    ctx->pc = 0x24c05cu;
    // NOP
label_24c060:
    // 0x24c060: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x24c060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x24c064: 0xc425f8f0  lwc1        $f5, -0x710($at)
    ctx->pc = 0x24c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24c068: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x24c068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x24c06c: 0xc421f8f0  lwc1        $f1, -0x710($at)
    ctx->pc = 0x24c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c070: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x24c070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c074: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C074u;
    {
        const bool branch_taken_0x24c074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C074u;
            // 0x24c078: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c074) {
            ctx->pc = 0x24C080u;
            goto label_24c080;
        }
    }
    ctx->pc = 0x24C07Cu;
    // 0x24c07c: 0xc428f8f8  lwc1        $f8, -0x708($at)
    ctx->pc = 0x24c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_24c080:
    // 0x24c080: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x24c080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c084: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C084u;
    {
        const bool branch_taken_0x24c084 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C084u;
            // 0x24c088: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c084) {
            ctx->pc = 0x24C090u;
            goto label_24c090;
        }
    }
    ctx->pc = 0x24C08Cu;
    // 0x24c08c: 0xc427f8f8  lwc1        $f7, -0x708($at)
    ctx->pc = 0x24c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_24c090:
    // 0x24c090: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x24c090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c094: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C094u;
    {
        const bool branch_taken_0x24c094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C094u;
            // 0x24c098: 0x3c010064  lui         $at, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c094) {
            ctx->pc = 0x24C0A0u;
            goto label_24c0a0;
        }
    }
    ctx->pc = 0x24C09Cu;
    // 0x24c09c: 0xc426f8f8  lwc1        $f6, -0x708($at)
    ctx->pc = 0x24c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24c0a0:
    // 0x24c0a0: 0xe6a80120  swc1        $f8, 0x120($s5)
    ctx->pc = 0x24c0a0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
    // 0x24c0a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24c0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0a8: 0xe6a70124  swc1        $f7, 0x124($s5)
    ctx->pc = 0x24c0a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
    // 0x24c0ac: 0xe6a60128  swc1        $f6, 0x128($s5)
    ctx->pc = 0x24c0acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
    // 0x24c0b0: 0xe6a4012c  swc1        $f4, 0x12C($s5)
    ctx->pc = 0x24c0b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
    // 0x24c0b4: 0x0  nop
    ctx->pc = 0x24c0b4u;
    // NOP
label_24c0b8:
    // 0x24c0b8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x24c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24c0bc: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x24c0bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24c0c0: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x24c0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x24c0c4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x24c0c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24c0c8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x24c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x24c0cc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x24c0ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24c0d0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x24c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x24c0d4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x24c0d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24c0d8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x24c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x24c0dc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x24c0dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c0e0: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x24c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x24c0e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x24c0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c0e8: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x24c0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x24c0ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x24c0ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c0f0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x24c0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x24c0f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24c0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c0f8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x24c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x24c0fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24c0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c100: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x24c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24c104: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x24c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24c108: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x24c108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24c10c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24c110: 0x3e00008  jr          $ra
    ctx->pc = 0x24C110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C110u;
            // 0x24c114: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24C118u;
    // 0x24c118: 0x0  nop
    ctx->pc = 0x24c118u;
    // NOP
    // 0x24c11c: 0x0  nop
    ctx->pc = 0x24c11cu;
    // NOP
}
