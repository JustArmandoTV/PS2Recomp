#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030E250
// Address: 0x30e250 - 0x30e4f0
void sub_0030E250_0x30e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E250_0x30e250");
#endif

    switch (ctx->pc) {
        case 0x30e390u: goto label_30e390;
        default: break;
    }

    ctx->pc = 0x30e250u;

    // 0x30e250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e254: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x30e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30e258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30e25c: 0x1436024  and         $t4, $t2, $v1
    ctx->pc = 0x30e25cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x30e260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e264: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x30e264u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x30e268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e26c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x30e26cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e270: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x30e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e274: 0x8c8f00cc  lw          $t7, 0xCC($a0)
    ctx->pc = 0x30e274u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30e278: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e27c: 0x848d0066  lh          $t5, 0x66($a0)
    ctx->pc = 0x30e27cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30e280: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x30e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e284: 0x91ee0002  lbu         $t6, 0x2($t7)
    ctx->pc = 0x30e284u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x30e288: 0xc5e3000c  lwc1        $f3, 0xC($t7)
    ctx->pc = 0x30e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e28c: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x30e28cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e290: 0x91ea0003  lbu         $t2, 0x3($t7)
    ctx->pc = 0x30e290u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x30e294: 0x29a10002  slti        $at, $t5, 0x2
    ctx->pc = 0x30e294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e298: 0x18e1825  or          $v1, $t4, $t6
    ctx->pc = 0x30e298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x30e29c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30e29cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30e2a0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e2a4: 0xc5e00010  lwc1        $f0, 0x10($t7)
    ctx->pc = 0x30e2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e2a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e2a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e2ac: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x30e2acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30e2b0: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x30e2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e2b4: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e2b8: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x30e2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e2bc: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x30e2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e2c0: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x30e2c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x30e2c4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30e2c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30e2c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e2c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e2cc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x30e2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30e2d0: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x30e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e2d4: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e2d8: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x30e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e2dc: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x30e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e2e0: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x30e2e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x30e2e4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30e2e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30e2e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e2e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e2ec: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x30e2ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30e2f0: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x30e2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30e2f4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x30e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x30e2f8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30e2fc: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x30e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e300: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x30e300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e304: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x30e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e308: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e30c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e30cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e310: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30e310u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30e314: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30e314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30e318: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x30e318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x30e31c: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x30e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e320: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x30e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e324: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x30e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e328: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x30e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e32c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e32cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e330: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30e330u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30e334: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30e334u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30e338: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x30e338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x30e33c: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x30e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e340: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x30e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e344: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x30e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e348: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x30e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e34c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e34cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e350: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30e350u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30e354: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30e354u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30e358: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x30e358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x30e35c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x30e35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x30e360: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30e360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30e364: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x30E364u;
    {
        const bool branch_taken_0x30e364 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E364u;
            // 0x30e368: 0xacab002c  sw          $t3, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e364) {
            ctx->pc = 0x30E4D0u;
            goto label_30e4d0;
        }
    }
    ctx->pc = 0x30E36Cu;
    // 0x30e36c: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x30e36cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x30e370: 0x25a7ffff  addiu       $a3, $t5, -0x1
    ctx->pc = 0x30e370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30e374: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x30e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x30e378: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x30e378u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e37c: 0x6e5023  subu        $t2, $v1, $t6
    ctx->pc = 0x30e37cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x30e380: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x30e380u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e384: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x30e384u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e388: 0x0  nop
    ctx->pc = 0x30e388u;
    // NOP
    // 0x30e38c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30e38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_30e390:
    // 0x30e390: 0xf98023  subu        $s0, $a3, $t9
    ctx->pc = 0x30e390u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x30e394: 0x2723ffff  addiu       $v1, $t9, -0x1
    ctx->pc = 0x30e394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30e398: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x30e398u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e39c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x30e39cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x30e3a0: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x30e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e3a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30e3a8: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x30e3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30e3ac: 0x181840  sll         $v1, $t8, 1
    ctx->pc = 0x30e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x30e3b0: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x30e3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30e3b4: 0x788021  addu        $s0, $v1, $t8
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x30e3b8: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x30e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x30e3bc: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x30e3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x30e3c0: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x30e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e3c4: 0xb09021  addu        $s2, $a1, $s0
    ctx->pc = 0x30e3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x30e3c8: 0xc46600d8  lwc1        $f6, 0xD8($v1)
    ctx->pc = 0x30e3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e3cc: 0x32d802a  slt         $s0, $t9, $t5
    ctx->pc = 0x30e3ccu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30e3d0: 0x1e7001a  div         $zero, $t7, $a3
    ctx->pc = 0x30e3d0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30e3d4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x30e3d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x30e3d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30e3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30e3dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30e3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30e3e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30e3e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x30e3e4: 0x8812  mflo        $s1
    ctx->pc = 0x30e3e4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x30e3e8: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x30e3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x30e3ec: 0x1d18821  addu        $s1, $t6, $s1
    ctx->pc = 0x30e3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x30e3f0: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x30e3f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x30e3f4: 0x1918825  or          $s1, $t4, $s1
    ctx->pc = 0x30e3f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 17));
    // 0x30e3f8: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e3f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e3fc: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x30e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e400: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x30e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e404: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x30e404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x30e408: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e408u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e40c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30e40cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30e410: 0xe6440000  swc1        $f4, 0x0($s2)
    ctx->pc = 0x30e410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x30e414: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x30e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e418: 0xc46600dc  lwc1        $f6, 0xDC($v1)
    ctx->pc = 0x30e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e41c: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x30e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e420: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x30e420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e424: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e424u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e428: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e428u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e42c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30e42cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30e430: 0xe6440004  swc1        $f4, 0x4($s2)
    ctx->pc = 0x30e430u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x30e434: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x30e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e438: 0xc46600e0  lwc1        $f6, 0xE0($v1)
    ctx->pc = 0x30e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e43c: 0xc5250008  lwc1        $f5, 0x8($t1)
    ctx->pc = 0x30e43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e440: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x30e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e444: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e444u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e448: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e448u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e44c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x30e44cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x30e450: 0xe6440008  swc1        $f4, 0x8($s2)
    ctx->pc = 0x30e450u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x30e454: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x30e454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x30e458: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x30e458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x30e45c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x30e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x30e460: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x30e460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e464: 0xc46600e4  lwc1        $f6, 0xE4($v1)
    ctx->pc = 0x30e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e468: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x30e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e46c: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x30e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e470: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e470u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e474: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e474u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e478: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e478u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e47c: 0xe6440018  swc1        $f4, 0x18($s2)
    ctx->pc = 0x30e47cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x30e480: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x30e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e484: 0xc46600e8  lwc1        $f6, 0xE8($v1)
    ctx->pc = 0x30e484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e488: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x30e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e48c: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x30e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e490: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e490u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e494: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e494u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e498: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e498u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e49c: 0xe644001c  swc1        $f4, 0x1C($s2)
    ctx->pc = 0x30e49cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x30e4a0: 0xc46600ec  lwc1        $f6, 0xEC($v1)
    ctx->pc = 0x30e4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e4a4: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x30e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e4a8: 0xc5250008  lwc1        $f5, 0x8($t1)
    ctx->pc = 0x30e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e4ac: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x30e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e4b0: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x30e4b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x30e4b4: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x30e4b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x30e4b8: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x30e4b8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x30e4bc: 0xe6440020  swc1        $f4, 0x20($s2)
    ctx->pc = 0x30e4bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x30e4c0: 0xae510024  sw          $s1, 0x24($s2)
    ctx->pc = 0x30e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
    // 0x30e4c4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x30e4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x30e4c8: 0x1600ffb1  bnez        $s0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x30E4C8u;
    {
        const bool branch_taken_0x30e4c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4C8u;
            // 0x30e4cc: 0xae4b002c  sw          $t3, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4c8) {
            ctx->pc = 0x30E390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e390;
        }
    }
    ctx->pc = 0x30E4D0u;
label_30e4d0:
    // 0x30e4d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30e4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30E4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4DCu;
            // 0x30e4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E4E4u;
    // 0x30e4e4: 0x0  nop
    ctx->pc = 0x30e4e4u;
    // NOP
    // 0x30e4e8: 0x0  nop
    ctx->pc = 0x30e4e8u;
    // NOP
    // 0x30e4ec: 0x0  nop
    ctx->pc = 0x30e4ecu;
    // NOP
}
