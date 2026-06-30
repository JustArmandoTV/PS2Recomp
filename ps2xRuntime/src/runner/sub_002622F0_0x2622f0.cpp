#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002622F0
// Address: 0x2622f0 - 0x262640
void sub_002622F0_0x2622f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002622F0_0x2622f0");
#endif

    switch (ctx->pc) {
        case 0x2624e8u: goto label_2624e8;
        case 0x26262cu: goto label_26262c;
        default: break;
    }

    ctx->pc = 0x2622f0u;

    // 0x2622f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2622f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2622f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2622f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2622f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2622f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2622fc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2622fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x262300: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x262300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x262304: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x262304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x262308: 0xc4ad0010  lwc1        $f13, 0x10($a1)
    ctx->pc = 0x262308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26230c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262310: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x262310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262314: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x262314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262318: 0xc4ae0000  lwc1        $f14, 0x0($a1)
    ctx->pc = 0x262318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26231c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x26231cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262320: 0xc4a70030  lwc1        $f7, 0x30($a1)
    ctx->pc = 0x262320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x262324: 0xc4aa0014  lwc1        $f10, 0x14($a1)
    ctx->pc = 0x262324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x262328: 0xc4af0024  lwc1        $f15, 0x24($a1)
    ctx->pc = 0x262328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x26232c: 0xc4ab0004  lwc1        $f11, 0x4($a1)
    ctx->pc = 0x26232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x262330: 0xc4a60034  lwc1        $f6, 0x34($a1)
    ctx->pc = 0x262330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x262334: 0x460d0901  sub.s       $f4, $f1, $f13
    ctx->pc = 0x262334u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x262338: 0x46017081  sub.s       $f2, $f14, $f1
    ctx->pc = 0x262338u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x26233c: 0x46013c41  sub.s       $f17, $f7, $f1
    ctx->pc = 0x26233cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x262340: 0xc4a80018  lwc1        $f8, 0x18($a1)
    ctx->pc = 0x262340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x262344: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x262344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262348: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x262348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x26234c: 0xc4a50038  lwc1        $f5, 0x38($a1)
    ctx->pc = 0x26234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262350: 0x460a78c1  sub.s       $f3, $f15, $f10
    ctx->pc = 0x262350u;
    ctx->f[3] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
    // 0x262354: 0x460f5841  sub.s       $f1, $f11, $f15
    ctx->pc = 0x262354u;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[15]);
    // 0x262358: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x262358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x26235c: 0x460f3401  sub.s       $f16, $f6, $f15
    ctx->pc = 0x26235cu;
    ctx->f[16] = FPU_SUB_S(ctx->f[6], ctx->f[15]);
    // 0x262360: 0x460b5481  sub.s       $f18, $f10, $f11
    ctx->pc = 0x262360u;
    ctx->f[18] = FPU_SUB_S(ctx->f[10], ctx->f[11]);
    // 0x262364: 0x46080501  sub.s       $f20, $f0, $f8
    ctx->pc = 0x262364u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x262368: 0x46004cc1  sub.s       $f19, $f9, $f0
    ctx->pc = 0x262368u;
    ctx->f[19] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x26236c: 0x46002bc1  sub.s       $f15, $f5, $f0
    ctx->pc = 0x26236cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x262370: 0x460e6801  sub.s       $f0, $f13, $f14
    ctx->pc = 0x262370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
    // 0x262374: 0x460e3b81  sub.s       $f14, $f7, $f14
    ctx->pc = 0x262374u;
    ctx->f[14] = FPU_SUB_S(ctx->f[7], ctx->f[14]);
    // 0x262378: 0x460d3b41  sub.s       $f13, $f7, $f13
    ctx->pc = 0x262378u;
    ctx->f[13] = FPU_SUB_S(ctx->f[7], ctx->f[13]);
    // 0x26237c: 0x460a31c1  sub.s       $f7, $f6, $f10
    ctx->pc = 0x26237cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x262380: 0x460b32c1  sub.s       $f11, $f6, $f11
    ctx->pc = 0x262380u;
    ctx->f[11] = FPU_SUB_S(ctx->f[6], ctx->f[11]);
    // 0x262384: 0x46094281  sub.s       $f10, $f8, $f9
    ctx->pc = 0x262384u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x262388: 0x46082981  sub.s       $f6, $f5, $f8
    ctx->pc = 0x262388u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x26238c: 0x46092a41  sub.s       $f9, $f5, $f9
    ctx->pc = 0x26238cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x262390: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x262390u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x262394: 0x4607a15d  msub.s      $f5, $f20, $f7
    ctx->pc = 0x262394u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[7]));
    // 0x262398: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x262398u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26239c: 0x460da01a  mula.s      $f20, $f13
    ctx->pc = 0x26239cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x2623a0: 0x4606215d  msub.s      $f5, $f4, $f6
    ctx->pc = 0x2623a0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x2623a4: 0x4607201a  mula.s      $f4, $f7
    ctx->pc = 0x2623a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2623a8: 0x460d18dd  msub.s      $f3, $f3, $f13
    ctx->pc = 0x2623a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[13]));
    // 0x2623ac: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2623acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2623b0: 0x460f081a  mula.s      $f1, $f15
    ctx->pc = 0x2623b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2623b4: 0x461098dd  msub.s      $f3, $f19, $f16
    ctx->pc = 0x2623b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[16]));
    // 0x2623b8: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x2623b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2623bc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x2623bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2623c0: 0x4611981a  mula.s      $f19, $f17
    ctx->pc = 0x2623c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[19], ctx->f[17]);
    // 0x2623c4: 0x460f10dd  msub.s      $f3, $f2, $f15
    ctx->pc = 0x2623c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[15]));
    // 0x2623c8: 0x4610101a  mula.s      $f2, $f16
    ctx->pc = 0x2623c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x2623cc: 0x4611085d  msub.s      $f1, $f1, $f17
    ctx->pc = 0x2623ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[17]));
    // 0x2623d0: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x2623d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2623d4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2623d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2623d8: 0x4609901a  mula.s      $f18, $f9
    ctx->pc = 0x2623d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[9]);
    // 0x2623dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2623dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2623e0: 0x460b505d  msub.s      $f1, $f10, $f11
    ctx->pc = 0x2623e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[11]));
    // 0x2623e4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2623e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2623e8: 0x460e501a  mula.s      $f10, $f14
    ctx->pc = 0x2623e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[14]);
    // 0x2623ec: 0x4609005d  msub.s      $f1, $f0, $f9
    ctx->pc = 0x2623ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[9]));
    // 0x2623f0: 0x460b001a  mula.s      $f0, $f11
    ctx->pc = 0x2623f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2623f4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2623f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2623f8: 0x460e901d  msub.s      $f0, $f18, $f14
    ctx->pc = 0x2623f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[14]));
    // 0x2623fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2623fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x262400: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x262400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x262404: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x262404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262408: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x262408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26240c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x26240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x262410: 0xc4a50034  lwc1        $f5, 0x34($a1)
    ctx->pc = 0x262410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262414: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x262414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262418: 0xc4a30038  lwc1        $f3, 0x38($a1)
    ctx->pc = 0x262418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26241c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x26241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262420: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x262420u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262424: 0x460531c1  sub.s       $f7, $f6, $f5
    ctx->pc = 0x262424u;
    ctx->f[7] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x262428: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x262428u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x26242c: 0x46032181  sub.s       $f6, $f4, $f3
    ctx->pc = 0x26242cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x262430: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x262430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262434: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x262434u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x262438: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x262438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26243c: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x26243cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x262440: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x262440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x262444: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x262444u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x262448: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x262448u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x26244c: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x26244cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x262450: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x262450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x262454: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x262454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262458: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x262458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26245c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x26245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262460: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x262460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262464: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x262464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x262468: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x262468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x26246c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x26246cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x262470: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x262470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x262474: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x262474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x262478: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x262478u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x26247c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x26247cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x262480: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x262480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262484: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x262484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262488: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x262488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26248c: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x26248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262490: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x262490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x262494: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x262494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x262498: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x262498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26249c: 0x46023802  mul.s       $f0, $f7, $f2
    ctx->pc = 0x26249cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2624a0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x2624a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2624a4: 0x4601301c  madd.s      $f0, $f6, $f1
    ctx->pc = 0x2624a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x2624a8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2624a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2624ac: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x2624acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x2624b0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2624b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2624b4: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x2624b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2624b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2624b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2624bc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2624bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2624c0: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x2624c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x2624c4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2624c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2624c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2624c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2624cc: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x2624ccu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x2624d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2624d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2624d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2624d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2624d8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2624d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2624dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2624dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2624e0: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x2624e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x2624e4: 0x0  nop
    ctx->pc = 0x2624e4u;
    // NOP
label_2624e8:
    // 0x2624e8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2624e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2624ec: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2624ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2624f0: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x2624f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2624f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2624f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2624f8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2624f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2624fc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2624fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x262500: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x262500u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x262504: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x262504u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262508: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x262508u;
    {
        const bool branch_taken_0x262508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262508) {
            ctx->pc = 0x262530u;
            goto label_262530;
        }
    }
    ctx->pc = 0x262510u;
    // 0x262510: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x262510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262514: 0x0  nop
    ctx->pc = 0x262514u;
    // NOP
    // 0x262518: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x262518u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x26251c: 0x0  nop
    ctx->pc = 0x26251cu;
    // NOP
    // 0x262520: 0x0  nop
    ctx->pc = 0x262520u;
    // NOP
    // 0x262524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262524u;
    {
        const bool branch_taken_0x262524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262524u;
            // 0x262528: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262524) {
            ctx->pc = 0x262538u;
            goto label_262538;
        }
    }
    ctx->pc = 0x26252Cu;
    // 0x26252c: 0x0  nop
    ctx->pc = 0x26252cu;
    // NOP
label_262530:
    // 0x262530: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x262530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x262534: 0x0  nop
    ctx->pc = 0x262534u;
    // NOP
label_262538:
    // 0x262538: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x262538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x26253c: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x26253cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x262540: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x262540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x262544: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x262544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x262548: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x262548u;
    {
        const bool branch_taken_0x262548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262548u;
            // 0x26254c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262548) {
            ctx->pc = 0x2624E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2624e8;
        }
    }
    ctx->pc = 0x262550u;
    // 0x262550: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x262550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x262554: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x262554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262558: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x262558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26255c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26255cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262560: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x262560u;
    {
        const bool branch_taken_0x262560 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x262564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262560u;
            // 0x262564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262560) {
            ctx->pc = 0x262578u;
            goto label_262578;
        }
    }
    ctx->pc = 0x262568u;
    // 0x262568: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x262568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x26256c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26256cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262570: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x262570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x262574: 0x0  nop
    ctx->pc = 0x262574u;
    // NOP
label_262578:
    // 0x262578: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x262578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x26257c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262580: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x262580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262584: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x262584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262588: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x262588u;
    {
        const bool branch_taken_0x262588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262588) {
            ctx->pc = 0x2625B8u;
            goto label_2625b8;
        }
    }
    ctx->pc = 0x262590u;
    // 0x262590: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x262590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x262594: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x262594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x262598: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x262598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26259c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x26259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2625a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2625a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2625a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2625A4u;
    {
        const bool branch_taken_0x2625a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2625a4) {
            ctx->pc = 0x2625C0u;
            goto label_2625c0;
        }
    }
    ctx->pc = 0x2625ACu;
    // 0x2625ac: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2625acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2625b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2625B0u;
    {
        const bool branch_taken_0x2625b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2625B0u;
            // 0x2625b4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625b0) {
            ctx->pc = 0x2625C0u;
            goto label_2625c0;
        }
    }
    ctx->pc = 0x2625B8u;
label_2625b8:
    // 0x2625b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2625b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2625bc: 0x0  nop
    ctx->pc = 0x2625bcu;
    // NOP
label_2625c0:
    // 0x2625c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2625c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2625c4: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x2625c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x2625c8: 0x346337be  ori         $v1, $v1, 0x37BE
    ctx->pc = 0x2625c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14270);
    // 0x2625cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2625ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2625d0: 0x0  nop
    ctx->pc = 0x2625d0u;
    // NOP
    // 0x2625d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2625d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2625d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2625D8u;
    {
        const bool branch_taken_0x2625d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2625d8) {
            ctx->pc = 0x2625E8u;
            goto label_2625e8;
        }
    }
    ctx->pc = 0x2625E0u;
    // 0x2625e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2625E0u;
    {
        const bool branch_taken_0x2625e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2625E0u;
            // 0x2625e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625e0) {
            ctx->pc = 0x262630u;
            goto label_262630;
        }
    }
    ctx->pc = 0x2625E8u;
label_2625e8:
    // 0x2625e8: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2625e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2625ec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2625ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2625f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2625f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2625f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2625f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2625f8: 0x0  nop
    ctx->pc = 0x2625f8u;
    // NOP
    // 0x2625fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2625fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262600: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x262600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262604: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x262604u;
    {
        const bool branch_taken_0x262604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262604) {
            ctx->pc = 0x262618u;
            goto label_262618;
        }
    }
    ctx->pc = 0x26260Cu;
    // 0x26260c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26260Cu;
    {
        const bool branch_taken_0x26260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26260c) {
            ctx->pc = 0x262630u;
            goto label_262630;
        }
    }
    ctx->pc = 0x262614u;
    // 0x262614: 0x0  nop
    ctx->pc = 0x262614u;
    // NOP
label_262618:
    // 0x262618: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x262618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26261c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x26261cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262620: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x262620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x262624: 0xc098794  jal         func_261E50
    ctx->pc = 0x262624u;
    SET_GPR_U32(ctx, 31, 0x26262Cu);
    ctx->pc = 0x262628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262624u;
            // 0x262628: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261E50u;
    if (runtime->hasFunction(0x261E50u)) {
        auto targetFn = runtime->lookupFunction(0x261E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26262Cu; }
        if (ctx->pc != 0x26262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261E50_0x261e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26262Cu; }
        if (ctx->pc != 0x26262Cu) { return; }
    }
    ctx->pc = 0x26262Cu;
label_26262c:
    // 0x26262c: 0x0  nop
    ctx->pc = 0x26262cu;
    // NOP
label_262630:
    // 0x262630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262634: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x262634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x262638: 0x3e00008  jr          $ra
    ctx->pc = 0x262638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262638u;
            // 0x26263c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262640u;
}
