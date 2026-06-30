#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A830
// Address: 0x29a830 - 0x29a9a0
void sub_0029A830_0x29a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A830_0x29a830");
#endif

    ctx->pc = 0x29a830u;

    // 0x29a830: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x29a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a834: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x29a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a838: 0x46006887  neg.s       $f2, $f13
    ctx->pc = 0x29a838u;
    ctx->f[2] = FPU_NEG_S(ctx->f[13]);
    // 0x29a83c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29a83cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x29a840: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x29a840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x29a844: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x29a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a848: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x29a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a84c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29a84cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x29a850: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x29a850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x29a854: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x29a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a858: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x29a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a85c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29a85cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x29a860: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x29a860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x29a864: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x29a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a868: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x29a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a86c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a870: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x29a870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x29a874: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29a874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29a878: 0xc481007c  lwc1        $f1, 0x7C($a0)
    ctx->pc = 0x29a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a87c: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x29a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a880: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a884: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x29a884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x29a888: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x29a888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x29a88c: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x29a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a890: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x29a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a894: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29a894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29a898: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x29a898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x29a89c: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x29a89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x29a8a0: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x29a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29a8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29a8a8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x29a8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x29a8ac: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x29a8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x29a8b0: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x29a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29a8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29a8b8: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x29a8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x29a8bc: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x29a8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x29a8c0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x29a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29a8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29a8c8: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x29a8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x29a8cc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x29a8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x29a8d0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x29a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a8d4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x29a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a8d8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x29a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8dc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x29a8dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x29a8e0: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x29a8e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x29a8e4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x29a8e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x29a8e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29a8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a8ec: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29a8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29a8f0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x29a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a8f4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x29a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a8f8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x29a8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8fc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x29a8fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x29a900: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x29a900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x29a904: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x29a904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x29a908: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29a908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a90c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x29a90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x29a910: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a914: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x29a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a918: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x29a918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a91c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x29a91cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x29a920: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x29a920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x29a924: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x29a924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x29a928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29a928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a92c: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x29a92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x29a930: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x29a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a934: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x29a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a938: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x29a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a93c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x29a93cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x29a940: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29a940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29a944: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a948: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x29a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x29a94c: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x29a94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x29a950: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x29a950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a954: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x29a954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a958: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x29a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a95c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x29a95cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x29a960: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29a960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29a964: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a968: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x29a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x29a96c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x29a96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x29a970: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x29a970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a974: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a978: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x29a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a97c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x29a97cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x29a980: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29a980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29a984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a988: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x29a988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x29a98c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A98Cu;
            // 0x29a990: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A994u;
    // 0x29a994: 0x0  nop
    ctx->pc = 0x29a994u;
    // NOP
    // 0x29a998: 0x0  nop
    ctx->pc = 0x29a998u;
    // NOP
    // 0x29a99c: 0x0  nop
    ctx->pc = 0x29a99cu;
    // NOP
}
