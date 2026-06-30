#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002785D0
// Address: 0x2785d0 - 0x2787e0
void sub_002785D0_0x2785d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002785D0_0x2785d0");
#endif

    switch (ctx->pc) {
        case 0x2787d0u: goto label_2787d0;
        default: break;
    }

    ctx->pc = 0x2785d0u;

    // 0x2785d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2785d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2785d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2785d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2785d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2785d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2785dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2785dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2785e0: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x2785e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x2785e4: 0x27ae0024  addiu       $t6, $sp, 0x24
    ctx->pc = 0x2785e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2785e8: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x2785e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x2785ec: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x2785ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x2785f0: 0xac880060  sw          $t0, 0x60($a0)
    ctx->pc = 0x2785f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 8));
    // 0x2785f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2785f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2785f8: 0xac89005c  sw          $t1, 0x5C($a0)
    ctx->pc = 0x2785f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 9));
    // 0x2785fc: 0x27ad0034  addiu       $t5, $sp, 0x34
    ctx->pc = 0x2785fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x278600: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x278600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x278604: 0x27ac0038  addiu       $t4, $sp, 0x38
    ctx->pc = 0x278604u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x278608: 0x27ab003c  addiu       $t3, $sp, 0x3C
    ctx->pc = 0x278608u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x27860c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x27860cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x278610: 0x27a90044  addiu       $t1, $sp, 0x44
    ctx->pc = 0x278610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x278614: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x278614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x278618: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x278618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x27861c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x278620: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x278620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278624: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x278624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x278628: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x278628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x27862c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x27862cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x278630: 0x8c6f0020  lw          $t7, 0x20($v1)
    ctx->pc = 0x278630u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x278634: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x278634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x278638: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x278638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27863c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x27863cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x278640: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x278640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x278644: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x278644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x278648: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x278648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27864c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x27864cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x278650: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x278650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x278654: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x278654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x278658: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x278658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27865c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27865cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x278660: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x278660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x278664: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x278664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278668: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x278668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27866c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27866cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x278670: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x278670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x278674: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x278674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278678: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x278678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27867c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27867cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x278680: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x278680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x278684: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x278684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278688: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x278688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27868c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27868cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x278690: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x278690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x278694: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x278694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278698: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x278698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27869c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27869cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2786a0: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2786a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2786a4: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x2786a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2786a8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2786a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2786ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2786acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2786b0: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2786b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2786b4: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x2786b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2786b8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2786b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2786bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2786bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2786c0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2786c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2786c4: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x2786c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2786c8: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2786c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2786cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2786ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2786d0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2786d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2786d4: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x2786d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2786d8: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x2786d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2786dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2786dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2786e0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2786e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2786e4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x2786e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2786e8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2786e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2786ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2786ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2786f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2786f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2786f4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2786f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2786f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2786f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2786fc: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2786fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x278700: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x278700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278708: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x278708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x27870c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x27870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278710: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278714: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x278714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x278718: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x278718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27871c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27871cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278720: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x278720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x278724: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x278724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278728: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27872c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x27872cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x278730: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x278730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278734: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278738: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x278738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27873c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278740: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278744: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x278744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x278748: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x278748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27874c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x27874cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x278750: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x278750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278754: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x278754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x278758: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x278758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27875c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x27875cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x278760: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x278760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278764: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x278764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x278768: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x278768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27876c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x27876cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x278770: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x278770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278774: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x278774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x278778: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x278778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27877c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x27877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x278780: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x278780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278784: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x278784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x278788: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x278788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x27878c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x27878cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x278790: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x278790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x278794: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x278794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x278798: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x278798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x27879c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x27879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2787a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2787a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2787a4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2787a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2787a8: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x2787a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2787ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2787ACu;
    {
        const bool branch_taken_0x2787ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2787B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2787ACu;
            // 0x2787b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787ac) {
            ctx->pc = 0x2787B8u;
            goto label_2787b8;
        }
    }
    ctx->pc = 0x2787B4u;
    // 0x2787b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2787b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2787b8:
    // 0x2787b8: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x2787b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x2787bc: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x2787bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2787c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2787c4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2787c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2787c8: 0xc09db78  jal         func_276DE0
    ctx->pc = 0x2787C8u;
    SET_GPR_U32(ctx, 31, 0x2787D0u);
    ctx->pc = 0x2787CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2787C8u;
            // 0x2787cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276DE0u;
    if (runtime->hasFunction(0x276DE0u)) {
        auto targetFn = runtime->lookupFunction(0x276DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2787D0u; }
        if (ctx->pc != 0x2787D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276DE0_0x276de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2787D0u; }
        if (ctx->pc != 0x2787D0u) { return; }
    }
    ctx->pc = 0x2787D0u;
label_2787d0:
    // 0x2787d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2787d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2787d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2787D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2787D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2787D4u;
            // 0x2787d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2787DCu;
    // 0x2787dc: 0x0  nop
    ctx->pc = 0x2787dcu;
    // NOP
}
