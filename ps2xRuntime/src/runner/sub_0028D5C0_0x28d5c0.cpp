#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D5C0
// Address: 0x28d5c0 - 0x28d7e0
void sub_0028D5C0_0x28d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D5C0_0x28d5c0");
#endif

    ctx->pc = 0x28d5c0u;

    // 0x28d5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28d5c4: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x28d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28d5c8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x28d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x28d5cc: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x28d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d5d0: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x28d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28d5d4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x28d5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d5d8: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28d5d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28d5dc: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x28d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28d5e0: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x28d5e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x28d5e4: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x28d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d5e8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x28d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d5ec: 0xc4a40024  lwc1        $f4, 0x24($a1)
    ctx->pc = 0x28d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28d5f0: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x28d5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x28d5f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28d5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d5f8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x28d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d5fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d600: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x28d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d604: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28d604u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28d608: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x28d608u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x28d60c: 0x4604301c  madd.s      $f0, $f6, $f4
    ctx->pc = 0x28d60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x28d610: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d614: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x28d614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d618: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x28d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28d61c: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x28d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28d620: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28d620u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28d624: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x28d624u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x28d628: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x28d628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x28d62c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x28d62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d630: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x28d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d634: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x28d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d638: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x28d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d63c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x28d63cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28d640: 0xc4a20050  lwc1        $f2, 0x50($a1)
    ctx->pc = 0x28d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d644: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x28d644u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x28d648: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28d648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28d64c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28d64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28d650: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x28d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d654: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x28d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d658: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x28d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d65c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x28d65cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28d660: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x28d660u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x28d664: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28d664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28d668: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28d66c: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x28d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d670: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x28d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d674: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x28d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d678: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x28d678u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28d67c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x28d67cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x28d680: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28d680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28d684: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28d684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28d688: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28d688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28d68c: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x28d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28d690: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x28d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d694: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x28d694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28d698: 0xc4a10060  lwc1        $f1, 0x60($a1)
    ctx->pc = 0x28d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d69c: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x28d69cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x28d6a0: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x28d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28d6a4: 0x4601381e  madda.s     $f7, $f1
    ctx->pc = 0x28d6a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x28d6a8: 0xc4a20080  lwc1        $f2, 0x80($a1)
    ctx->pc = 0x28d6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d6ac: 0xc4a30064  lwc1        $f3, 0x64($a1)
    ctx->pc = 0x28d6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d6b0: 0xc4a40084  lwc1        $f4, 0x84($a1)
    ctx->pc = 0x28d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28d6b4: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x28d6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x28d6b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28d6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28d6bc: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x28d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d6c0: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x28d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d6c4: 0xc4a20088  lwc1        $f2, 0x88($a1)
    ctx->pc = 0x28d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d6c8: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x28d6c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x28d6cc: 0x4603381e  madda.s     $f7, $f3
    ctx->pc = 0x28d6ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x28d6d0: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x28d6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x28d6d4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28d6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d6d8: 0xc4a00078  lwc1        $f0, 0x78($a1)
    ctx->pc = 0x28d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d6dc: 0xc4cc0014  lwc1        $f12, 0x14($a2)
    ctx->pc = 0x28d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d6e0: 0xc4cd0010  lwc1        $f13, 0x10($a2)
    ctx->pc = 0x28d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d6e4: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x28d6e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x28d6e8: 0x4601381e  madda.s     $f7, $f1
    ctx->pc = 0x28d6e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x28d6ec: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x28d6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x28d6f0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28d6f4: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x28d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d6f8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x28d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x28d6fc: 0xc4a10090  lwc1        $f1, 0x90($a1)
    ctx->pc = 0x28d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d700: 0xc4cb0018  lwc1        $f11, 0x18($a2)
    ctx->pc = 0x28d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28d704: 0x4600601a  mula.s      $f12, $f0
    ctx->pc = 0x28d704u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28d708: 0x4601681e  madda.s     $f13, $f1
    ctx->pc = 0x28d708u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[1]));
    // 0x28d70c: 0xc4a800b0  lwc1        $f8, 0xB0($a1)
    ctx->pc = 0x28d70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28d710: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x28d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28d714: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x28d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28d718: 0x4608581c  madd.s      $f0, $f11, $f8
    ctx->pc = 0x28d718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[8]));
    // 0x28d71c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x28d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28d720: 0xc4a800a4  lwc1        $f8, 0xA4($a1)
    ctx->pc = 0x28d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28d724: 0xc4a90094  lwc1        $f9, 0x94($a1)
    ctx->pc = 0x28d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28d728: 0xc4aa00b4  lwc1        $f10, 0xB4($a1)
    ctx->pc = 0x28d728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28d72c: 0x4608601a  mula.s      $f12, $f8
    ctx->pc = 0x28d72cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x28d730: 0x4609681e  madda.s     $f13, $f9
    ctx->pc = 0x28d730u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[9]));
    // 0x28d734: 0x460a5a1c  madd.s      $f8, $f11, $f10
    ctx->pc = 0x28d734u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[10]));
    // 0x28d738: 0xe4880014  swc1        $f8, 0x14($a0)
    ctx->pc = 0x28d738u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28d73c: 0xc4a800a8  lwc1        $f8, 0xA8($a1)
    ctx->pc = 0x28d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28d740: 0xc4a90098  lwc1        $f9, 0x98($a1)
    ctx->pc = 0x28d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28d744: 0xc4aa00b8  lwc1        $f10, 0xB8($a1)
    ctx->pc = 0x28d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28d748: 0x4608601a  mula.s      $f12, $f8
    ctx->pc = 0x28d748u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x28d74c: 0x4609681e  madda.s     $f13, $f9
    ctx->pc = 0x28d74cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[9]));
    // 0x28d750: 0x460a5a1c  madd.s      $f8, $f11, $f10
    ctx->pc = 0x28d750u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[10]));
    // 0x28d754: 0xe4880018  swc1        $f8, 0x18($a0)
    ctx->pc = 0x28d754u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28d758: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x28d758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x28d75c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x28d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28d760: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x28d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28d764: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x28d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28d768: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x28d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d76c: 0x460741c0  add.s       $f7, $f8, $f7
    ctx->pc = 0x28d76cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x28d770: 0xe4870000  swc1        $f7, 0x0($a0)
    ctx->pc = 0x28d770u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28d774: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x28d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28d778: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x28d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d77c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x28d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d780: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x28d780u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x28d784: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x28d784u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28d788: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x28d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28d78c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x28d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d790: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x28d790u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x28d794: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x28d794u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28d798: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x28d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28d79c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x28d79cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x28d7a0: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x28d7a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28d7a4: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x28d7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28d7a8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x28d7a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x28d7ac: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x28d7acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28d7b0: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x28d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d7b4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x28d7b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x28d7b8: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x28d7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28d7bc: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x28d7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d7c0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x28d7c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28d7c4: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x28d7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28d7c8: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x28d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d7cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d7d0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x28d7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x28d7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7D4u;
            // 0x28d7d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D7DCu;
    // 0x28d7dc: 0x0  nop
    ctx->pc = 0x28d7dcu;
    // NOP
}
