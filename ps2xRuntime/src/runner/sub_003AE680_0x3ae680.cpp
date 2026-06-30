#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AE680
// Address: 0x3ae680 - 0x3aeb70
void sub_003AE680_0x3ae680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE680_0x3ae680");
#endif

    switch (ctx->pc) {
        case 0x3ae810u: goto label_3ae810;
        case 0x3ae8a4u: goto label_3ae8a4;
        case 0x3ae914u: goto label_3ae914;
        case 0x3ae990u: goto label_3ae990;
        case 0x3aeb30u: goto label_3aeb30;
        default: break;
    }

    ctx->pc = 0x3ae680u;

    // 0x3ae680: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3ae680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3ae684: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3ae684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3ae688: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ae688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3ae68c: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x3ae68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x3ae690: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3ae690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3ae694: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ae694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3ae698: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3ae698u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae69c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ae69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3ae6a0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3ae6a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae6a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ae6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3ae6a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ae6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ae6ac: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3ae6acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae6b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ae6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ae6b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ae6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ae6b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ae6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ae6bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ae6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ae6c0: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3ae6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x3ae6c4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3ae6c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ae6c8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3ae6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x3ae6cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ae6ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ae6d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ae6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3ae6d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ae6d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ae6d8: 0xafa600e8  sw          $a2, 0xE8($sp)
    ctx->pc = 0x3ae6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
    // 0x3ae6dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3ae6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ae6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae6e4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x3ae6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ae6e8: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x3ae6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
    // 0x3ae6ec: 0x8d060d70  lw          $a2, 0xD70($t0)
    ctx->pc = 0x3ae6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3440)));
    // 0x3ae6f0: 0x90a20116  lbu         $v0, 0x116($a1)
    ctx->pc = 0x3ae6f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
    // 0x3ae6f4: 0x90830084  lbu         $v1, 0x84($a0)
    ctx->pc = 0x3ae6f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x3ae6f8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3ae6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae6fc: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x3ae6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x3ae700: 0x24d000e8  addiu       $s0, $a2, 0xE8
    ctx->pc = 0x3ae700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 232));
    // 0x3ae704: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3ae704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3ae708: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x3ae708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ae70c: 0x8cc40100  lw          $a0, 0x100($a2)
    ctx->pc = 0x3ae70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x3ae710: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ae710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3ae714: 0x92450014  lbu         $a1, 0x14($s2)
    ctx->pc = 0x3ae714u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3ae718: 0xafa900e4  sw          $t1, 0xE4($sp)
    ctx->pc = 0x3ae718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 9));
    // 0x3ae71c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3ae71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ae720: 0xa3aa00e3  sb          $t2, 0xE3($sp)
    ctx->pc = 0x3ae720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 227), (uint8_t)GPR_U32(ctx, 10));
    // 0x3ae724: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3ae724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3ae728: 0xb73018  mult        $a2, $a1, $s7
    ctx->pc = 0x3ae728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3ae72c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3ae72cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3ae730: 0x92440015  lbu         $a0, 0x15($s2)
    ctx->pc = 0x3ae730u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x3ae734: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3ae734u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ae738: 0xc686000c  lwc1        $f6, 0xC($s4)
    ctx->pc = 0x3ae738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3ae73c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3ae73cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ae740: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3ae740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3ae744: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x3ae744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ae748: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3ae748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x3ae74c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3ae74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3ae750: 0x84652100  lh          $a1, 0x2100($v1)
    ctx->pc = 0x3ae750u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8448)));
    // 0x3ae754: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3ae754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3ae758: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ae758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ae75c: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x3ae75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x3ae760: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3ae760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3ae764: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ae764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ae768: 0x46010242  mul.s       $f9, $f0, $f1
    ctx->pc = 0x3ae768u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ae76c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3ae76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3ae770: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ae770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ae774: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3ae774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3ae778: 0x46801da0  cvt.s.w     $f22, $f3
    ctx->pc = 0x3ae778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x3ae77c: 0x84422102  lh          $v0, 0x2102($v0)
    ctx->pc = 0x3ae77cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
    // 0x3ae780: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ae780u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae784: 0x0  nop
    ctx->pc = 0x3ae784u;
    // NOP
    // 0x3ae788: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ae788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3ae78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae790: 0x0  nop
    ctx->pc = 0x3ae790u;
    // NOP
    // 0x3ae794: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ae794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ae798: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3ae798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3ae79c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3ae79cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae7a0: 0x0  nop
    ctx->pc = 0x3ae7a0u;
    // NOP
    // 0x3ae7a4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3ae7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3ae7a8: 0x46801520  cvt.s.w     $f20, $f2
    ctx->pc = 0x3ae7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x3ae7ac: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x3ae7acu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae7b0: 0x0  nop
    ctx->pc = 0x3ae7b0u;
    // NOP
    // 0x3ae7b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ae7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3ae7b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ae7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae7bc: 0x0  nop
    ctx->pc = 0x3ae7bcu;
    // NOP
    // 0x3ae7c0: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3ae7c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3ae7c4: 0x46042a1c  madd.s      $f8, $f5, $f4
    ctx->pc = 0x3ae7c4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x3ae7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae7cc: 0x0  nop
    ctx->pc = 0x3ae7ccu;
    // NOP
    // 0x3ae7d0: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3ae7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3ae7d4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3ae7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae7d8: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x3ae7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae7dc: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x3ae7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ae7e0: 0x460029c0  add.s       $f7, $f5, $f0
    ctx->pc = 0x3ae7e0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3ae7e4: 0x46061000  add.s       $f0, $f2, $f6
    ctx->pc = 0x3ae7e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3ae7e8: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x3ae7e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[1];
    // 0x3ae7ec: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x3ae7ecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x3ae7f0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3ae7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae7f4: 0x46032043  div.s       $f1, $f4, $f3
    ctx->pc = 0x3ae7f4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[3];
    // 0x3ae7f8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3ae7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3ae7fc: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x3ae7fcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
    // 0x3ae800: 0x0  nop
    ctx->pc = 0x3ae800u;
    // NOP
    // 0x3ae804: 0x0  nop
    ctx->pc = 0x3ae804u;
    // NOP
    // 0x3ae808: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE808u;
    {
        const bool branch_taken_0x3ae808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae808) {
            ctx->pc = 0x3AE82Cu;
            goto label_3ae82c;
        }
    }
    ctx->pc = 0x3AE810u;
label_3ae810:
    // 0x3ae810: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3ae810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae814: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ae814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ae818: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ae818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ae81c: 0x0  nop
    ctx->pc = 0x3ae81cu;
    // NOP
    // 0x3ae820: 0x0  nop
    ctx->pc = 0x3ae820u;
    // NOP
    // 0x3ae824: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AE824u;
    {
        const bool branch_taken_0x3ae824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae824) {
            ctx->pc = 0x3AE810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ae810;
        }
    }
    ctx->pc = 0x3AE82Cu;
label_3ae82c:
    // 0x3ae82c: 0x46093801  sub.s       $f0, $f7, $f9
    ctx->pc = 0x3ae82cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x3ae830: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ae830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3ae834: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x3ae834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
    // 0x3ae838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ae838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae83c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3ae83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3ae840: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ae840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ae844: 0xafa7010c  sw          $a3, 0x10C($sp)
    ctx->pc = 0x3ae844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 7));
    // 0x3ae848: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3ae848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3ae84c: 0xafa70120  sw          $a3, 0x120($sp)
    ctx->pc = 0x3ae84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
    // 0x3ae850: 0x46093800  add.s       $f0, $f7, $f9
    ctx->pc = 0x3ae850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x3ae854: 0xafa70134  sw          $a3, 0x134($sp)
    ctx->pc = 0x3ae854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 7));
    // 0x3ae858: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x3ae858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3ae85c: 0x4609a001  sub.s       $f0, $f20, $f9
    ctx->pc = 0x3ae85cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[9]);
    // 0x3ae860: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x3ae860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x3ae864: 0x4609a000  add.s       $f0, $f20, $f9
    ctx->pc = 0x3ae864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[9]);
    // 0x3ae868: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x3ae868u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3ae86c: 0xe7a80104  swc1        $f8, 0x104($sp)
    ctx->pc = 0x3ae86cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3ae870: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x3ae870u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x3ae874: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x3ae874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3ae878: 0xe7a50100  swc1        $f5, 0x100($sp)
    ctx->pc = 0x3ae878u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3ae87c: 0xe7a50128  swc1        $f5, 0x128($sp)
    ctx->pc = 0x3ae87cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x3ae880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ae880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ae884: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x3ae884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x3ae888: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x3ae888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x3ae88c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x3ae88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x3ae890: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x3ae890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3ae894: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x3ae894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3ae898: 0xe7b60118  swc1        $f22, 0x118($sp)
    ctx->pc = 0x3ae898u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x3ae89c: 0xc050780  jal         func_141E00
    ctx->pc = 0x3AE89Cu;
    SET_GPR_U32(ctx, 31, 0x3AE8A4u);
    ctx->pc = 0x3AE8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE89Cu;
            // 0x3ae8a0: 0xe7b6012c  swc1        $f22, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE8A4u; }
        if (ctx->pc != 0x3AE8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE8A4u; }
        if (ctx->pc != 0x3AE8A4u) { return; }
    }
    ctx->pc = 0x3AE8A4u;
label_3ae8a4:
    // 0x3ae8a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ae8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ae8a8: 0x56e3000a  bnel        $s7, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3AE8A8u;
    {
        const bool branch_taken_0x3ae8a8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ae8a8) {
            ctx->pc = 0x3AE8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE8A8u;
            // 0x3ae8ac: 0x92030020  lbu         $v1, 0x20($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE8D4u;
            goto label_3ae8d4;
        }
    }
    ctx->pc = 0x3AE8B0u;
    // 0x3ae8b0: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x3ae8b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3ae8b4: 0x92440016  lbu         $a0, 0x16($s2)
    ctx->pc = 0x3ae8b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x3ae8b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ae8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ae8bc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3ae8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ae8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae8c4: 0x0  nop
    ctx->pc = 0x3ae8c4u;
    // NOP
    // 0x3ae8c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ae8cc: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x3ae8ccu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x3ae8d0: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x3ae8d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_3ae8d4:
    // 0x3ae8d4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3ae8d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ae8d8: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x3AE8D8u;
    {
        const bool branch_taken_0x3ae8d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae8d8) {
            ctx->pc = 0x3AE9A8u;
            goto label_3ae9a8;
        }
    }
    ctx->pc = 0x3AE8E0u;
    // 0x3ae8e0: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x3ae8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae8e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ae8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3ae8e8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3ae8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae8ec: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3ae8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3ae8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae8f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ae8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae8f8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3ae8f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ae8fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ae8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ae900: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x3ae900u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ae904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ae904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ae908: 0x4600a540  add.s       $f21, $f20, $f0
    ctx->pc = 0x3ae908u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3ae90c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3ae90cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3ae910: 0x92450016  lbu         $a1, 0x16($s2)
    ctx->pc = 0x3ae910u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_3ae914:
    // 0x3ae914: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x3ae914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ae918: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ae918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3ae91c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x3ae91cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ae920: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ae920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3ae924: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3ae924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae928: 0x70a42018  mult1       $a0, $a1, $a0
    ctx->pc = 0x3ae928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ae92c: 0xb34018  mult        $t0, $a1, $s3
    ctx->pc = 0x3ae92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3ae930: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ae930u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae934: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x3ae934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3ae938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ae93c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ae93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ae940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ae940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae944: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ae944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae948: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x3ae948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3ae94c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae94cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ae950: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x3ae950u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae954: 0x0  nop
    ctx->pc = 0x3ae954u;
    // NOP
    // 0x3ae958: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ae958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ae95c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3ae95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x3ae960: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x3ae960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x3ae964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae968: 0x0  nop
    ctx->pc = 0x3ae968u;
    // NOP
    // 0x3ae96c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ae96cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3ae970: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae978: 0x0  nop
    ctx->pc = 0x3ae978u;
    // NOP
    // 0x3ae97c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x3ae97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3ae980: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ae980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3ae984: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ae984u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3ae988: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AE988u;
    SET_GPR_U32(ctx, 31, 0x3AE990u);
    ctx->pc = 0x3AE98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE988u;
            // 0x3ae98c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE990u; }
        if (ctx->pc != 0x3AE990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE990u; }
        if (ctx->pc != 0x3AE990u) { return; }
    }
    ctx->pc = 0x3AE990u;
label_3ae990:
    // 0x3ae990: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x3ae990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3ae994: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ae994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ae998: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ae998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ae99c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3ae99cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ae9a0: 0x5460ffdc  bnel        $v1, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3AE9A0u;
    {
        const bool branch_taken_0x3ae9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9a0) {
            ctx->pc = 0x3AE9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE9A0u;
            // 0x3ae9a4: 0x92450016  lbu         $a1, 0x16($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ae914;
        }
    }
    ctx->pc = 0x3AE9A8u;
label_3ae9a8:
    // 0x3ae9a8: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x3ae9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
    // 0x3ae9ac: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3ae9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3ae9b0: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3AE9B0u;
    {
        const bool branch_taken_0x3ae9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae9b0) {
            ctx->pc = 0x3AE9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE9B0u;
            // 0x3ae9b4: 0x7ba300c0  lq          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE9F0u;
            goto label_3ae9f0;
        }
    }
    ctx->pc = 0x3AE9B8u;
    // 0x3ae9b8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3ae9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ae9bc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3AE9BCu;
    {
        const bool branch_taken_0x3ae9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae9bc) {
            ctx->pc = 0x3AE9ECu;
            goto label_3ae9ec;
        }
    }
    ctx->pc = 0x3AE9C4u;
    // 0x3ae9c4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ae9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ae9c8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE9C8u;
    {
        const bool branch_taken_0x3ae9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae9c8) {
            ctx->pc = 0x3AE9ECu;
            goto label_3ae9ec;
        }
    }
    ctx->pc = 0x3AE9D0u;
    // 0x3ae9d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae9d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE9D4u;
    {
        const bool branch_taken_0x3ae9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae9d4) {
            ctx->pc = 0x3AE9ECu;
            goto label_3ae9ec;
        }
    }
    ctx->pc = 0x3AE9DCu;
    // 0x3ae9dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ae9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae9e0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AE9E0u;
    {
        const bool branch_taken_0x3ae9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae9e0) {
            ctx->pc = 0x3AE9ECu;
            goto label_3ae9ec;
        }
    }
    ctx->pc = 0x3AE9E8u;
    // 0x3ae9e8: 0xa3a000e3  sb          $zero, 0xE3($sp)
    ctx->pc = 0x3ae9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 227), (uint8_t)GPR_U32(ctx, 0));
label_3ae9ec:
    // 0x3ae9ec: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3ae9ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ae9f0:
    // 0x3ae9f0: 0x4620050  bltzl       $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3AE9F0u;
    {
        const bool branch_taken_0x3ae9f0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3ae9f0) {
            ctx->pc = 0x3AE9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE9F0u;
            // 0x3ae9f4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AEB34u;
            goto label_3aeb34;
        }
    }
    ctx->pc = 0x3AE9F8u;
    // 0x3ae9f8: 0x93a300e3  lbu         $v1, 0xE3($sp)
    ctx->pc = 0x3ae9f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 227)));
    // 0x3ae9fc: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3AE9FCu;
    {
        const bool branch_taken_0x3ae9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9fc) {
            ctx->pc = 0x3AEB30u;
            goto label_3aeb30;
        }
    }
    ctx->pc = 0x3AEA04u;
    // 0x3aea04: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x3aea04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3aea08: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x3aea08u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3aea0c: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x3aea0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x3aea10: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3aea10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3aea14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEA14u;
    {
        const bool branch_taken_0x3aea14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aea14) {
            ctx->pc = 0x3AEA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEA14u;
            // 0x3aea18: 0x7ba400d0  lq          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA28u;
            goto label_3aea28;
        }
    }
    ctx->pc = 0x3AEA1Cu;
    // 0x3aea1c: 0x70801e28  paddub      $v1, $a0, $zero
    ctx->pc = 0x3aea1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x3aea20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3aea20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3aea24: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x3aea24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3aea28:
    // 0x3aea28: 0x24850420  addiu       $a1, $a0, 0x420
    ctx->pc = 0x3aea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
    // 0x3aea2c: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x3aea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3aea30: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x3aea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3aea34: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x3aea34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x3aea38: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AEA38u;
    {
        const bool branch_taken_0x3aea38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aea38) {
            ctx->pc = 0x3AEA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEA38u;
            // 0x3aea3c: 0x9248004e  lbu         $t0, 0x4E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 78)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA7Cu;
            goto label_3aea7c;
        }
    }
    ctx->pc = 0x3AEA40u;
    // 0x3aea40: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x3aea40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3aea44: 0x92480016  lbu         $t0, 0x16($s2)
    ctx->pc = 0x3aea44u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x3aea48: 0x92460015  lbu         $a2, 0x15($s2)
    ctx->pc = 0x3aea48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x3aea4c: 0x92470014  lbu         $a3, 0x14($s2)
    ctx->pc = 0x3aea4cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3aea50: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3aea50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3aea54: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3aea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3aea58: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3aea58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3aea5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aea5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aea60: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x3aea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3aea64: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x3aea64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3aea68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3aea68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3aea6c: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x3aea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x3aea70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aea70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aea74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AEA74u;
    {
        const bool branch_taken_0x3aea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEA74u;
            // 0x3aea78: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea74) {
            ctx->pc = 0x3AEAB8u;
            goto label_3aeab8;
        }
    }
    ctx->pc = 0x3AEA7Cu;
label_3aea7c:
    // 0x3aea7c: 0x86440026  lh          $a0, 0x26($s2)
    ctx->pc = 0x3aea7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x3aea80: 0x82470050  lb          $a3, 0x50($s2)
    ctx->pc = 0x3aea80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x3aea84: 0x92460051  lbu         $a2, 0x51($s2)
    ctx->pc = 0x3aea84u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 81)));
    // 0x3aea88: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x3aea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3aea8c: 0x2e44018  mult        $t0, $s7, $a0
    ctx->pc = 0x3aea8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3aea90: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3aea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3aea94: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x3aea94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3aea98: 0x62043  sra         $a0, $a2, 1
    ctx->pc = 0x3aea98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x3aea9c: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x3aea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3aeaa0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aeaa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aeaa4: 0x3c82021  addu        $a0, $fp, $t0
    ctx->pc = 0x3aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x3aeaa8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3aeaa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3aeaac: 0x0  nop
    ctx->pc = 0x3aeaacu;
    // NOP
    // 0x3aeab0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3aeab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3aeab4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3aeab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3aeab8:
    // 0x3aeab8: 0x86470028  lh          $a3, 0x28($s2)
    ctx->pc = 0x3aeab8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3aeabc: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x3aeabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x3aeac0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aeac0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aeac4: 0x8ea60da0  lw          $a2, 0xDA0($s5)
    ctx->pc = 0x3aeac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
    // 0x3aeac8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3aeac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3aeacc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x3aeaccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3aead0: 0x8c84f510  lw          $a0, -0xAF0($a0)
    ctx->pc = 0x3aead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964496)));
    // 0x3aead4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3aead4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aead8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x3aead8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3aeadc: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AEADCu;
    {
        const bool branch_taken_0x3aeadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEADCu;
            // 0x3aeae0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeadc) {
            ctx->pc = 0x3AEB30u;
            goto label_3aeb30;
        }
    }
    ctx->pc = 0x3AEAE4u;
    // 0x3aeae4: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x3aeae4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aeae8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3aeae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3aeaec: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3aeaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3aeaf0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aeaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aeaf4: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3aeaf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3aeaf8: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x3aeaf8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3aeafc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3aeafcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aeb00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aeb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aeb04: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aeb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aeb08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aeb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeb0c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aeb0cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aeb10: 0x0  nop
    ctx->pc = 0x3aeb10u;
    // NOP
    // 0x3aeb14: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aeb14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aeb18: 0x46011b01  sub.s       $f12, $f3, $f1
    ctx->pc = 0x3aeb18u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3aeb1c: 0x46011b80  add.s       $f14, $f3, $f1
    ctx->pc = 0x3aeb1cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3aeb20: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x3aeb20u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3aeb24: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aeb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aeb28: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AEB28u;
    SET_GPR_U32(ctx, 31, 0x3AEB30u);
    ctx->pc = 0x3AEB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEB28u;
            // 0x3aeb2c: 0x460113c0  add.s       $f15, $f2, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AEB30u; }
        if (ctx->pc != 0x3AEB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AEB30u; }
        if (ctx->pc != 0x3AEB30u) { return; }
    }
    ctx->pc = 0x3AEB30u;
label_3aeb30:
    // 0x3aeb30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3aeb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3aeb34:
    // 0x3aeb34: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3aeb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3aeb38: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3aeb38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3aeb3c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3aeb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3aeb40: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3aeb40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3aeb44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3aeb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3aeb48: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3aeb48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3aeb4c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3aeb4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3aeb50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3aeb50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aeb54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3aeb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aeb58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3aeb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aeb5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3aeb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aeb60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3aeb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aeb64: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEB64u;
            // 0x3aeb68: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AEB6Cu;
    // 0x3aeb6c: 0x0  nop
    ctx->pc = 0x3aeb6cu;
    // NOP
}
