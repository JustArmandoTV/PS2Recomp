#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262640
// Address: 0x262640 - 0x262d80
void sub_00262640_0x262640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262640_0x262640");
#endif

    switch (ctx->pc) {
        case 0x262840u: goto label_262840;
        case 0x262858u: goto label_262858;
        case 0x2628b0u: goto label_2628b0;
        case 0x2628c8u: goto label_2628c8;
        case 0x2629fcu: goto label_2629fc;
        case 0x262b28u: goto label_262b28;
        case 0x262b54u: goto label_262b54;
        default: break;
    }

    ctx->pc = 0x262640u;

    // 0x262640: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x262640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x262644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x262644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x262648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x262648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26264c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x262650: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x262650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x262654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x262658: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x262658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26265c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262660: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x262660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262668: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x262668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26266c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262670: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x262670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262674: 0xa3a9007c  sb          $t1, 0x7C($sp)
    ctx->pc = 0x262674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 9));
    // 0x262678: 0x83a2007c  lb          $v0, 0x7C($sp)
    ctx->pc = 0x262678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x26267c: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x26267Cu;
    {
        const bool branch_taken_0x26267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26267Cu;
            // 0x262680: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26267c) {
            ctx->pc = 0x262A20u;
            goto label_262a20;
        }
    }
    ctx->pc = 0x262684u;
    // 0x262684: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x262684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262688: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x262688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26268c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262690: 0x0  nop
    ctx->pc = 0x262690u;
    // NOP
    // 0x262694: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x262694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x262698: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x262698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x26269c: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x26269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2626a0: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x2626a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2626a4: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x2626a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2626a8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2626a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2626ac: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x2626acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2626b0: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x2626b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2626b4: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x2626b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2626b8: 0xc7a60154  lwc1        $f6, 0x154($sp)
    ctx->pc = 0x2626b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2626bc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2626bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2626c0: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x2626c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2626c4: 0xc662001c  lwc1        $f2, 0x1C($s3)
    ctx->pc = 0x2626c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2626c8: 0xc661002c  lwc1        $f1, 0x2C($s3)
    ctx->pc = 0x2626c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2626cc: 0xc7a70158  lwc1        $f7, 0x158($sp)
    ctx->pc = 0x2626ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2626d0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2626d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2626d4: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x2626d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2626d8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2626d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2626dc: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x2626dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2626e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2626e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2626e4: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x2626e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2626e8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2626e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2626ec: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x2626ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2626f0: 0xc7a40140  lwc1        $f4, 0x140($sp)
    ctx->pc = 0x2626f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2626f4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2626f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2626f8: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x2626f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x2626fc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2626fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262700: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x262700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262704: 0xc7a50144  lwc1        $f5, 0x144($sp)
    ctx->pc = 0x262704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262708: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x262708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26270c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x26270cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x262710: 0xc7aa0148  lwc1        $f10, 0x148($sp)
    ctx->pc = 0x262710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x262714: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x262714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262718: 0xc661002c  lwc1        $f1, 0x2C($s3)
    ctx->pc = 0x262718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26271c: 0x460a301a  mula.s      $f6, $f10
    ctx->pc = 0x26271cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x262720: 0x46053b1d  msub.s      $f12, $f7, $f5
    ctx->pc = 0x262720u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
    // 0x262724: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x262724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x262728: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x262728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x26272c: 0x4604381a  mula.s      $f7, $f4
    ctx->pc = 0x26272cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x262730: 0x460a1add  msub.s      $f11, $f3, $f10
    ctx->pc = 0x262730u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[10]));
    // 0x262734: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x262734u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x262738: 0x4604329d  msub.s      $f10, $f6, $f4
    ctx->pc = 0x262738u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x26273c: 0xc6690004  lwc1        $f9, 0x4($s3)
    ctx->pc = 0x26273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x262740: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x262740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262744: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x262744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262748: 0xc6680000  lwc1        $f8, 0x0($s3)
    ctx->pc = 0x262748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x26274c: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x26274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262750: 0xc6670008  lwc1        $f7, 0x8($s3)
    ctx->pc = 0x262750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x262754: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x262754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262758: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x262758u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x26275c: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x26275cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x262760: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x262760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262764: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x262764u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x262768: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x262768u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x26276c: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x26276cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x262770: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x262770u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x262774: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x262774u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x262778: 0x460350dc  madd.s      $f3, $f10, $f3
    ctx->pc = 0x262778u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
    // 0x26277c: 0xc6860010  lwc1        $f6, 0x10($s4)
    ctx->pc = 0x26277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x262780: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x262780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262784: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x262784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x262788: 0x46083001  sub.s       $f0, $f6, $f8
    ctx->pc = 0x262788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x26278c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x26278cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x262790: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x262790u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x262794: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x262794u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x262798: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x262798u;
    {
        const bool branch_taken_0x262798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262798u;
            // 0x26279c: 0x4601505c  madd.s      $f1, $f10, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262798) {
            ctx->pc = 0x2627A8u;
            goto label_2627a8;
        }
    }
    ctx->pc = 0x2627A0u;
    // 0x2627a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2627A0u;
    {
        const bool branch_taken_0x2627a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2627A0u;
            // 0x2627a4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627a0) {
            ctx->pc = 0x2627ACu;
            goto label_2627ac;
        }
    }
    ctx->pc = 0x2627A8u;
label_2627a8:
    // 0x2627a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2627a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2627ac:
    // 0x2627ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2627acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2627b0: 0x0  nop
    ctx->pc = 0x2627b0u;
    // NOP
    // 0x2627b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2627b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2627b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2627B8u;
    {
        const bool branch_taken_0x2627b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2627BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2627B8u;
            // 0x2627bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627b8) {
            ctx->pc = 0x2627C4u;
            goto label_2627c4;
        }
    }
    ctx->pc = 0x2627C0u;
    // 0x2627c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2627c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2627c4:
    // 0x2627c4: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2627C4u;
    {
        const bool branch_taken_0x2627c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2627C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2627C4u;
            // 0x2627c8: 0x46011881  sub.s       $f2, $f3, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627c4) {
            ctx->pc = 0x262940u;
            goto label_262940;
        }
    }
    ctx->pc = 0x2627CCu;
    // 0x2627cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2627ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2627d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2627d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2627d4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2627d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2627d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2627d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2627dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2627dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2627e0: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2627e0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
    // 0x2627e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2627e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2627e8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2627e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2627ec: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2627ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2627f0: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x2627f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2627f4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2627f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2627f8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2627f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2627fc: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2627fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x262800: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x262800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262804: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x262804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262808: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x262808u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x26280c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x26280cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x262810: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x262810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x262814: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x262814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262818: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x262818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26281c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x26281cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x262820: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x262820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x262824: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x262824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x262828: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x262828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26282c: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x26282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262830: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x262830u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x262834: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x262834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x262838: 0xc0987fc  jal         func_261FF0
    ctx->pc = 0x262838u;
    SET_GPR_U32(ctx, 31, 0x262840u);
    ctx->pc = 0x26283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262838u;
            // 0x26283c: 0xe7a0013c  swc1        $f0, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262840u; }
        if (ctx->pc != 0x262840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262840u; }
        if (ctx->pc != 0x262840u) { return; }
    }
    ctx->pc = 0x262840u;
label_262840:
    // 0x262840: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x262840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x262844: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x262844u;
    {
        const bool branch_taken_0x262844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262844) {
            ctx->pc = 0x262858u;
            goto label_262858;
        }
    }
    ctx->pc = 0x26284Cu;
    // 0x26284c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26284Cu;
    {
        const bool branch_taken_0x26284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26284Cu;
            // 0x262850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26284c) {
            ctx->pc = 0x262D50u;
            goto label_262d50;
        }
    }
    ctx->pc = 0x262854u;
    // 0x262854: 0x0  nop
    ctx->pc = 0x262854u;
    // NOP
label_262858:
    // 0x262858: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x262858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26285c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x26285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262860: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x262860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x262864: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x262864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262868: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x262868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x26286c: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x26286cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x262870: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x262870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x262874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x262874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262878: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x262878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x26287c: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262880: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x262880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262884: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x262884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262888: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x262888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x26288c: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x26288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262890: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x262890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262894: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x262894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262898: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x262898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x26289c: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26289cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2628a0: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2628a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2628a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2628a8: 0xc09e8e8  jal         func_27A3A0
    ctx->pc = 0x2628A8u;
    SET_GPR_U32(ctx, 31, 0x2628B0u);
    ctx->pc = 0x2628ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2628A8u;
            // 0x2628ac: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A3A0u;
    if (runtime->hasFunction(0x27A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x27A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628B0u; }
        if (ctx->pc != 0x2628B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A3A0_0x27a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628B0u; }
        if (ctx->pc != 0x2628B0u) { return; }
    }
    ctx->pc = 0x2628B0u;
label_2628b0:
    // 0x2628b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2628b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2628b4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2628b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2628b8: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x2628b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2628bc: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x2628bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2628c0: 0xc09e8e8  jal         func_27A3A0
    ctx->pc = 0x2628C0u;
    SET_GPR_U32(ctx, 31, 0x2628C8u);
    ctx->pc = 0x2628C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2628C0u;
            // 0x2628c4: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A3A0u;
    if (runtime->hasFunction(0x27A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x27A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628C8u; }
        if (ctx->pc != 0x2628C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A3A0_0x27a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628C8u; }
        if (ctx->pc != 0x2628C8u) { return; }
    }
    ctx->pc = 0x2628C8u;
label_2628c8:
    // 0x2628c8: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2628c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2628cc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2628ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2628d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2628d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2628D4u;
    {
        const bool branch_taken_0x2628d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2628D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2628D4u;
            // 0x2628d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628d4) {
            ctx->pc = 0x2628E0u;
            goto label_2628e0;
        }
    }
    ctx->pc = 0x2628DCu;
    // 0x2628dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2628dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2628e0:
    // 0x2628e0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2628e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2628e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2628e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2628e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2628ec: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2628ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2628f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2628f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2628f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2628f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2628f8: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2628f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628fc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2628fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x262900: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x262900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262904: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x262904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x262908: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x262908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26290c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x26290cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x262910: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x262910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262914: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x262914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x262918: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x262918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26291c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x26291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x262920: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x262920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262924: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x262924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x262928: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x262928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26292c: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x26292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x262930: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x262930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x262934: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262938: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x262938u;
    {
        const bool branch_taken_0x262938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26293Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262938u;
            // 0x26293c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262938) {
            ctx->pc = 0x262D50u;
            goto label_262d50;
        }
    }
    ctx->pc = 0x262940u;
label_262940:
    // 0x262940: 0x46001885  abs.s       $f2, $f3
    ctx->pc = 0x262940u;
    ctx->f[2] = FPU_ABS_S(ctx->f[3]);
    // 0x262944: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x262944u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x262948: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x262948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26294c: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x26294Cu;
    {
        const bool branch_taken_0x26294c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26294c) {
            ctx->pc = 0x2629E8u;
            goto label_2629e8;
        }
    }
    ctx->pc = 0x262954u;
    // 0x262954: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x262954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x262958: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x262958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26295c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x26295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262960: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x262960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x262964: 0xe6860000  swc1        $f6, 0x0($s4)
    ctx->pc = 0x262964u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x262968: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x262968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26296c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x26296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x262970: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x262970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262974: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x262974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x262978: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x262978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26297c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x26297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x262980: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x262980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262984: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x262984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x262988: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x262988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26298c: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x26298cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x262990: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x262990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262994: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x262994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x262998: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x262998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26299c: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x26299cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2629a0: 0x7a820040  lq          $v0, 0x40($s4)
    ctx->pc = 0x2629a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2629a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2629a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2629a8: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x2629a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629ac: 0xe6800040  swc1        $f0, 0x40($s4)
    ctx->pc = 0x2629acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x2629b0: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x2629b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629b4: 0xe6800044  swc1        $f0, 0x44($s4)
    ctx->pc = 0x2629b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    // 0x2629b8: 0xc6800058  lwc1        $f0, 0x58($s4)
    ctx->pc = 0x2629b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629bc: 0xe6800048  swc1        $f0, 0x48($s4)
    ctx->pc = 0x2629bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x2629c0: 0xc680005c  lwc1        $f0, 0x5C($s4)
    ctx->pc = 0x2629c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629c4: 0xe680004c  swc1        $f0, 0x4C($s4)
    ctx->pc = 0x2629c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x2629c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2629c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629cc: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x2629ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
    // 0x2629d0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2629d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629d4: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x2629d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
    // 0x2629d8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2629d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629dc: 0xe6800058  swc1        $f0, 0x58($s4)
    ctx->pc = 0x2629dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
    // 0x2629e0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2629e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629e4: 0xe680005c  swc1        $f0, 0x5C($s4)
    ctx->pc = 0x2629e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
label_2629e8:
    // 0x2629e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2629e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2629ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2629f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629f4: 0xc0987fc  jal         func_261FF0
    ctx->pc = 0x2629F4u;
    SET_GPR_U32(ctx, 31, 0x2629FCu);
    ctx->pc = 0x2629F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2629F4u;
            // 0x2629f8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2629FCu; }
        if (ctx->pc != 0x2629FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2629FCu; }
        if (ctx->pc != 0x2629FCu) { return; }
    }
    ctx->pc = 0x2629FCu;
label_2629fc:
    // 0x2629fc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2629fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x262a00: 0x1443ff95  bne         $v0, $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x262A00u;
    {
        const bool branch_taken_0x262a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262a00) {
            ctx->pc = 0x262858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262858;
        }
    }
    ctx->pc = 0x262A08u;
    // 0x262a08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x262a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262a14: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x262A14u;
    {
        const bool branch_taken_0x262a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A14u;
            // 0x262a18: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a14) {
            ctx->pc = 0x262D50u;
            goto label_262d50;
        }
    }
    ctx->pc = 0x262A1Cu;
    // 0x262a1c: 0x0  nop
    ctx->pc = 0x262a1cu;
    // NOP
label_262a20:
    // 0x262a20: 0x7aa20160  lq          $v0, 0x160($s5)
    ctx->pc = 0x262a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 352)));
    // 0x262a24: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x262a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262a28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x262a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262a2c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x262a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x262a30: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x262a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262a34: 0xc6850014  lwc1        $f5, 0x14($s4)
    ctx->pc = 0x262a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262a38: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x262a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262a3c: 0xc66a0000  lwc1        $f10, 0x0($s3)
    ctx->pc = 0x262a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x262a40: 0xc6860010  lwc1        $f6, 0x10($s4)
    ctx->pc = 0x262a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x262a44: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x262a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262a48: 0xc6ab0124  lwc1        $f11, 0x124($s5)
    ctx->pc = 0x262a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x262a4c: 0x460c2941  sub.s       $f5, $f5, $f12
    ctx->pc = 0x262a4cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x262a50: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x262a50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x262a54: 0xc6a90120  lwc1        $f9, 0x120($s5)
    ctx->pc = 0x262a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x262a58: 0x460a3181  sub.s       $f6, $f6, $f10
    ctx->pc = 0x262a58u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x262a5c: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x262a5cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x262a60: 0xc6680008  lwc1        $f8, 0x8($s3)
    ctx->pc = 0x262a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x262a64: 0xc6840018  lwc1        $f4, 0x18($s4)
    ctx->pc = 0x262a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262a68: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x262a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262a6c: 0xc6a70128  lwc1        $f7, 0x128($s5)
    ctx->pc = 0x262a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x262a70: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x262a70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x262a74: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x262a74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x262a78: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x262a78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x262a7c: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x262a7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x262a80: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x262a80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x262a84: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x262a84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x262a88: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x262a88u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x262a8c: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x262a8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x262a90: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x262a90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x262a94: 0x460138dc  madd.s      $f3, $f7, $f1
    ctx->pc = 0x262a94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x262a98: 0x46041842  mul.s       $f1, $f3, $f4
    ctx->pc = 0x262a98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x262a9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x262a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262aa0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x262AA0u;
    {
        const bool branch_taken_0x262aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262AA0u;
            // 0x262aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aa0) {
            ctx->pc = 0x262AACu;
            goto label_262aac;
        }
    }
    ctx->pc = 0x262AA8u;
    // 0x262aa8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x262aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_262aac:
    // 0x262aac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x262AACu;
    {
        const bool branch_taken_0x262aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262AACu;
            // 0x262ab0: 0x46041881  sub.s       $f2, $f3, $f4 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aac) {
            ctx->pc = 0x262B40u;
            goto label_262b40;
        }
    }
    ctx->pc = 0x262AB4u;
    // 0x262ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262ab8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262abc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x262abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262ac0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x262ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x262ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ac8: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x262ac8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
    // 0x262acc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x262accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262ad0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x262ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262ad4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x262ad4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x262ad8: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x262ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262adc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x262adcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x262ae0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x262ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x262ae4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x262ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x262ae8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x262ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262aec: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x262aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262af0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x262af0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x262af4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x262af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x262af8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x262af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x262afc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x262afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262b00: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x262b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b04: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x262b04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x262b08: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x262b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x262b0c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x262b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x262b10: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x262b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262b14: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x262b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b18: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x262b18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x262b1c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x262b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x262b20: 0xc0987fc  jal         func_261FF0
    ctx->pc = 0x262B20u;
    SET_GPR_U32(ctx, 31, 0x262B28u);
    ctx->pc = 0x262B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262B20u;
            // 0x262b24: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B28u; }
        if (ctx->pc != 0x262B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B28u; }
        if (ctx->pc != 0x262B28u) { return; }
    }
    ctx->pc = 0x262B28u;
label_262b28:
    // 0x262b28: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x262b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x262b2c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x262B2Cu;
    {
        const bool branch_taken_0x262b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262b2c) {
            ctx->pc = 0x262B40u;
            goto label_262b40;
        }
    }
    ctx->pc = 0x262B34u;
    // 0x262b34: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x262B34u;
    {
        const bool branch_taken_0x262b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B34u;
            // 0x262b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b34) {
            ctx->pc = 0x262D50u;
            goto label_262d50;
        }
    }
    ctx->pc = 0x262B3Cu;
    // 0x262b3c: 0x0  nop
    ctx->pc = 0x262b3cu;
    // NOP
label_262b40:
    // 0x262b40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b44: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x262b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x262b48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x262b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b4c: 0xc0987fc  jal         func_261FF0
    ctx->pc = 0x262B4Cu;
    SET_GPR_U32(ctx, 31, 0x262B54u);
    ctx->pc = 0x262B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262B4Cu;
            // 0x262b50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B54u; }
        if (ctx->pc != 0x262B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B54u; }
        if (ctx->pc != 0x262B54u) { return; }
    }
    ctx->pc = 0x262B54u;
label_262b54:
    // 0x262b54: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x262b58: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x262B58u;
    {
        const bool branch_taken_0x262b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262b58) {
            ctx->pc = 0x262BB8u;
            goto label_262bb8;
        }
    }
    ctx->pc = 0x262B60u;
    // 0x262b60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x262b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262b6c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x262b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x262b70: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x262b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b74: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x262b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x262b78: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x262b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b7c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x262b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x262b80: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x262b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b84: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x262b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x262b88: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x262b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b8c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x262b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x262b90: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x262b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b94: 0xe6800040  swc1        $f0, 0x40($s4)
    ctx->pc = 0x262b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x262b98: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x262b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b9c: 0xe6800044  swc1        $f0, 0x44($s4)
    ctx->pc = 0x262b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    // 0x262ba0: 0xc6800058  lwc1        $f0, 0x58($s4)
    ctx->pc = 0x262ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262ba4: 0xe6800048  swc1        $f0, 0x48($s4)
    ctx->pc = 0x262ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x262ba8: 0xc680005c  lwc1        $f0, 0x5C($s4)
    ctx->pc = 0x262ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262bac: 0xe680004c  swc1        $f0, 0x4C($s4)
    ctx->pc = 0x262bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x262bb0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x262BB0u;
    {
        const bool branch_taken_0x262bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BB0u;
            // 0x262bb4: 0xaeb00174  sw          $s0, 0x174($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 372), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bb0) {
            ctx->pc = 0x262D50u;
            goto label_262d50;
        }
    }
    ctx->pc = 0x262BB8u;
label_262bb8:
    // 0x262bb8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x262bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x262bbc: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x262BBCu;
    {
        const bool branch_taken_0x262bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x262BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BBCu;
            // 0x262bc0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bbc) {
            ctx->pc = 0x262C90u;
            goto label_262c90;
        }
    }
    ctx->pc = 0x262BC4u;
    // 0x262bc4: 0x10430048  beq         $v0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x262BC4u;
    {
        const bool branch_taken_0x262bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x262bc4) {
            ctx->pc = 0x262CE8u;
            goto label_262ce8;
        }
    }
    ctx->pc = 0x262BCCu;
    // 0x262bcc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x262bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x262bd0: 0x1043005b  beq         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x262BD0u;
    {
        const bool branch_taken_0x262bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x262BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BD0u;
            // 0x262bd4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bd0) {
            ctx->pc = 0x262D40u;
            goto label_262d40;
        }
    }
    ctx->pc = 0x262BD8u;
    // 0x262bd8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x262BD8u;
    {
        const bool branch_taken_0x262bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262bd8) {
            ctx->pc = 0x262C18u;
            goto label_262c18;
        }
    }
    ctx->pc = 0x262BE0u;
    // 0x262be0: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x262be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262be4: 0xc6a10164  lwc1        $f1, 0x164($s5)
    ctx->pc = 0x262be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262be8: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x262be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262bec: 0xc6a00168  lwc1        $f0, 0x168($s5)
    ctx->pc = 0x262becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262bf0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x262bf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x262bf4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x262bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x262bf8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x262bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x262bfc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x262bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x262c00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x262c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262c04: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x262C04u;
    {
        const bool branch_taken_0x262c04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262c04) {
            ctx->pc = 0x262CE8u;
            goto label_262ce8;
        }
    }
    ctx->pc = 0x262C0Cu;
    // 0x262c0c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x262C0Cu;
    {
        const bool branch_taken_0x262c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c0c) {
            ctx->pc = 0x262D40u;
            goto label_262d40;
        }
    }
    ctx->pc = 0x262C14u;
    // 0x262c14: 0x0  nop
    ctx->pc = 0x262c14u;
    // NOP
label_262c18:
    // 0x262c18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x262c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x262c1c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x262C1Cu;
    {
        const bool branch_taken_0x262c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262c1c) {
            ctx->pc = 0x262C58u;
            goto label_262c58;
        }
    }
    ctx->pc = 0x262C24u;
    // 0x262c24: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x262c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262c28: 0xc6a10168  lwc1        $f1, 0x168($s5)
    ctx->pc = 0x262c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262c2c: 0xc6a00160  lwc1        $f0, 0x160($s5)
    ctx->pc = 0x262c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262c30: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x262c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262c34: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x262c34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x262c38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x262c38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x262c3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x262c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x262c40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x262c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x262c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x262c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262c48: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x262C48u;
    {
        const bool branch_taken_0x262c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262c48) {
            ctx->pc = 0x262D40u;
            goto label_262d40;
        }
    }
    ctx->pc = 0x262C50u;
    // 0x262c50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x262C50u;
    {
        const bool branch_taken_0x262c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c50) {
            ctx->pc = 0x262C90u;
            goto label_262c90;
        }
    }
    ctx->pc = 0x262C58u;
label_262c58:
    // 0x262c58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x262c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262c5c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x262C5Cu;
    {
        const bool branch_taken_0x262c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262c5c) {
            ctx->pc = 0x262C90u;
            goto label_262c90;
        }
    }
    ctx->pc = 0x262C64u;
    // 0x262c64: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x262c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262c68: 0xc6a00164  lwc1        $f0, 0x164($s5)
    ctx->pc = 0x262c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262c6c: 0xc6a10160  lwc1        $f1, 0x160($s5)
    ctx->pc = 0x262c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262c70: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x262c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262c74: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x262c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x262c78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x262c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x262c7c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x262c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x262c80: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x262c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x262c84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x262c84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262c88: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x262C88u;
    {
        const bool branch_taken_0x262c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262c88) {
            ctx->pc = 0x262CE8u;
            goto label_262ce8;
        }
    }
    ctx->pc = 0x262C90u;
label_262c90:
    // 0x262c90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x262c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x262c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262c98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262c9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x262c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x262ca0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x262ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262ca4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x262ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x262ca8: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x262ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cac: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x262cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x262cb0: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x262cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cb4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x262cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x262cb8: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x262cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cbc: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x262cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x262cc0: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x262cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cc4: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x262cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x262cc8: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x262cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262ccc: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x262cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x262cd0: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x262cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cd4: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x262cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x262cd8: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x262cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cdc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x262CDCu;
    {
        const bool branch_taken_0x262cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262CDCu;
            // 0x262ce0: 0xe660004c  swc1        $f0, 0x4C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262cdc) {
            ctx->pc = 0x262D50u;
            goto label_262d50;
        }
    }
    ctx->pc = 0x262CE4u;
    // 0x262ce4: 0x0  nop
    ctx->pc = 0x262ce4u;
    // NOP
label_262ce8:
    // 0x262ce8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x262ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x262cec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x262cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262cf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262cf4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x262cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x262cf8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x262cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cfc: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x262cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x262d00: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x262d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d04: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x262d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x262d08: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x262d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d0c: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x262d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x262d10: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x262d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d14: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x262d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x262d18: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x262d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d1c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x262d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x262d20: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x262d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d24: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x262d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x262d28: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x262d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d2c: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x262d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x262d30: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x262d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x262D34u;
    {
        const bool branch_taken_0x262d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D34u;
            // 0x262d38: 0xe660005c  swc1        $f0, 0x5C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d34) {
            ctx->pc = 0x262D50u;
            goto label_262d50;
        }
    }
    ctx->pc = 0x262D3Cu;
    // 0x262d3c: 0x0  nop
    ctx->pc = 0x262d3cu;
    // NOP
label_262d40:
    // 0x262d40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x262d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x262d44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x262d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262d48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262d4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x262d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_262d50:
    // 0x262d50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x262d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262d54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x262d54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262d58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x262d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262d5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x262d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262d60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x262d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x262D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D6Cu;
            // 0x262d70: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262D74u;
    // 0x262d74: 0x0  nop
    ctx->pc = 0x262d74u;
    // NOP
    // 0x262d78: 0x0  nop
    ctx->pc = 0x262d78u;
    // NOP
    // 0x262d7c: 0x0  nop
    ctx->pc = 0x262d7cu;
    // NOP
}
