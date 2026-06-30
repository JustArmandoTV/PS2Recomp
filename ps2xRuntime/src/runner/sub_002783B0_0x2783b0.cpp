#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002783B0
// Address: 0x2783b0 - 0x2785d0
void sub_002783B0_0x2783b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002783B0_0x2783b0");
#endif

    switch (ctx->pc) {
        case 0x2785b4u: goto label_2785b4;
        default: break;
    }

    ctx->pc = 0x2783b0u;

    // 0x2783b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2783b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2783b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2783b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2783b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2783b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2783bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2783bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2783c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2783c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2783c4: 0x27af0044  addiu       $t7, $sp, 0x44
    ctx->pc = 0x2783c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2783c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2783c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2783cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2783ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783d0: 0xaca60064  sw          $a2, 0x64($a1)
    ctx->pc = 0x2783d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 6));
    // 0x2783d4: 0x27ae0054  addiu       $t6, $sp, 0x54
    ctx->pc = 0x2783d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2783d8: 0xaca90058  sw          $t1, 0x58($a1)
    ctx->pc = 0x2783d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 9));
    // 0x2783dc: 0x27ad0058  addiu       $t5, $sp, 0x58
    ctx->pc = 0x2783dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2783e0: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x2783e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x2783e4: 0x27ac005c  addiu       $t4, $sp, 0x5C
    ctx->pc = 0x2783e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2783e8: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x2783e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x2783ec: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x2783ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x2783f0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2783f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2783f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2783f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2783f8: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x2783f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2783fc: 0x27aa0064  addiu       $t2, $sp, 0x64
    ctx->pc = 0x2783fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x278400: 0x27a90068  addiu       $t1, $sp, 0x68
    ctx->pc = 0x278400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x278404: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x278408: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x278408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27840c: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x27840cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x278410: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x278410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x278414: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x278414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x278418: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x278418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x27841c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x27841cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x278420: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x278420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x278424: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x278424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278428: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x278428u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x27842c: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x27842cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x278430: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x278430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x278434: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x278434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278438: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x278438u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x27843c: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x27843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x278440: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x278440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278444: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x278444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x278448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27844c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27844cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x278450: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x278450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278454: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x278454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278458: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x278458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27845c: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x27845cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x278460: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x278460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278464: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x278464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278468: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x278468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27846c: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x27846cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x278470: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x278470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278474: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x278474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x278478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27847c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x27847cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x278480: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x278480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278484: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x278484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x278488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27848c: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x27848cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x278490: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x278490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278494: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x278494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278498: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x278498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27849c: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x27849cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2784a0: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x2784a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2784a4: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2784a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2784a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2784a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2784ac: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2784acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2784b0: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x2784b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2784b4: 0xc501001c  lwc1        $f1, 0x1C($t0)
    ctx->pc = 0x2784b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2784b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2784b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2784bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2784bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2784c0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x2784c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2784c4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2784c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2784c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2784c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2784cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2784ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2784d0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x2784d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2784d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2784d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2784d8: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x2784d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x2784dc: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2784dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2784e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2784e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2784e4: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2784e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2784e8: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x2784e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2784ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2784ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2784f0: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x2784f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x2784f4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2784f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2784f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2784f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2784fc: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2784fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x278500: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x278500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278504: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278508: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x278508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x27850c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x27850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278510: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278514: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x278514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x278518: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x278518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27851c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27851cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278520: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x278520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x278524: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x278524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278528: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x278528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x27852c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x27852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278530: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x278530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x278534: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x278534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278538: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x278538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x27853c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x27853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278540: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x278540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x278544: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x278544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278548: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x278548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x27854c: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x27854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278550: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x278550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x278554: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x278554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278558: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x278558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x27855c: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x27855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278560: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x278560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x278564: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x278564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x278568: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x278568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x27856c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x27856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x278570: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x278570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x278574: 0xa0a00050  sb          $zero, 0x50($a1)
    ctx->pc = 0x278574u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x278578: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x278578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x27857c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x278580: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x278580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x278584: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x278584u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x278588: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278588u;
    {
        const bool branch_taken_0x278588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278588u;
            // 0x27858c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278588) {
            ctx->pc = 0x278598u;
            goto label_278598;
        }
    }
    ctx->pc = 0x278590u;
    // 0x278590: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x278590u;
    {
        const bool branch_taken_0x278590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278590u;
            // 0x278594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278590) {
            ctx->pc = 0x27859Cu;
            goto label_27859c;
        }
    }
    ctx->pc = 0x278598u;
label_278598:
    // 0x278598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x278598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27859c:
    // 0x27859c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x27859cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2785a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2785a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2785a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2785a8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2785a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2785ac: 0xc09db78  jal         func_276DE0
    ctx->pc = 0x2785ACu;
    SET_GPR_U32(ctx, 31, 0x2785B4u);
    ctx->pc = 0x2785B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2785ACu;
            // 0x2785b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276DE0u;
    if (runtime->hasFunction(0x276DE0u)) {
        auto targetFn = runtime->lookupFunction(0x276DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B4u; }
        if (ctx->pc != 0x2785B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276DE0_0x276de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2785B4u; }
        if (ctx->pc != 0x2785B4u) { return; }
    }
    ctx->pc = 0x2785B4u;
label_2785b4:
    // 0x2785b4: 0x82030050  lb          $v1, 0x50($s0)
    ctx->pc = 0x2785b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2785b8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2785b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2785bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2785bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2785c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2785c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2785c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2785c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2785c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2785C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2785CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2785C8u;
            // 0x2785cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2785D0u;
}
