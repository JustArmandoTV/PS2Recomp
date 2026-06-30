#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001323C0
// Address: 0x1323c0 - 0x132500
void sub_001323C0_0x1323c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001323C0_0x1323c0");
#endif

    ctx->pc = 0x1323c0u;

    // 0x1323c0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1323c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1323c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1323c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1323c8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1323c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1323cc: 0xc4c90000  lwc1        $f9, 0x0($a2)
    ctx->pc = 0x1323ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1323d0: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x1323d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1323d4: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1323d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1323d8: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x1323d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1323dc: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x1323dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1323e0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1323e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1323e4: 0x4609401e  madda.s     $f8, $f9
    ctx->pc = 0x1323e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[9]));
    // 0x1323e8: 0xc4a7000c  lwc1        $f7, 0xC($a1)
    ctx->pc = 0x1323e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1323ec: 0xc4c6000c  lwc1        $f6, 0xC($a2)
    ctx->pc = 0x1323ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1323f0: 0x4604281e  madda.s     $f5, $f4
    ctx->pc = 0x1323f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1323f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1323f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1323f8: 0x4606399c  madd.s      $f6, $f7, $f6
    ctx->pc = 0x1323f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x1323fc: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1323fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132400: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x132400u;
    {
        const bool branch_taken_0x132400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132400u;
            // 0x132404: 0x460c5041  sub.s       $f1, $f10, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132400) {
            ctx->pc = 0x132410u;
            goto label_132410;
        }
    }
    ctx->pc = 0x132408u;
    // 0x132408: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x132408u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x13240c: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x13240cu;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
label_132410:
    // 0x132410: 0x3c033f7f  lui         $v1, 0x3F7F
    ctx->pc = 0x132410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16255 << 16));
    // 0x132414: 0x3463ff58  ori         $v1, $v1, 0xFF58
    ctx->pc = 0x132414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65368);
    // 0x132418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13241c: 0x0  nop
    ctx->pc = 0x13241cu;
    // NOP
    // 0x132420: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x132420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132424: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x132424u;
    {
        const bool branch_taken_0x132424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132424) {
            ctx->pc = 0x132428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132424u;
            // 0x132428: 0x460a60c2  mul.s       $f3, $f12, $f10 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1324B4u;
            goto label_1324b4;
        }
    }
    ctx->pc = 0x13242Cu;
    // 0x13242c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13242cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132430: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x132430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x132434: 0x0  nop
    ctx->pc = 0x132434u;
    // NOP
    // 0x132438: 0x46061880  add.s       $f2, $f3, $f6
    ctx->pc = 0x132438u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x13243c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13243cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132444: 0x0  nop
    ctx->pc = 0x132444u;
    // NOP
    // 0x132448: 0x46020156  rsqrt.s     $f5, $f0, $f2
    ctx->pc = 0x132448u;
    ctx->f[5] = 1.0f / sqrtf(ctx->f[0]);
    // 0x13244c: 0x3c034035  lui         $v1, 0x4035
    ctx->pc = 0x13244cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16437 << 16));
    // 0x132450: 0x346704f3  ori         $a3, $v1, 0x4F3
    ctx->pc = 0x132450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1267);
    // 0x132454: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x132454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x132458: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x132458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13245c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13245cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132460: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x132460u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x132464: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x132464u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x132468: 0x4605109d  msub.s      $f2, $f2, $f5
    ctx->pc = 0x132468u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x13246c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x13246cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x132470: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x132470u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x132474: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x132474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x132478: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x132478u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13247c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x13247cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x132480: 0x4601009c  madd.s      $f2, $f0, $f1
    ctx->pc = 0x132480u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x132484: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x132484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x132488: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x132488u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13248c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13248cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x132490: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x132490u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x132494: 0x4600305c  madd.s      $f1, $f6, $f0
    ctx->pc = 0x132494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x132498: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13249c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13249cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1324a0: 0x0  nop
    ctx->pc = 0x1324a0u;
    // NOP
    // 0x1324a4: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x1324a4u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x1324a8: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x1324a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1324ac: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x1324acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1324b0: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1324b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1324b4:
    // 0x1324b4: 0x4603481a  mula.s      $f9, $f3
    ctx->pc = 0x1324b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x1324b8: 0x4601401c  madd.s      $f0, $f8, $f1
    ctx->pc = 0x1324b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x1324bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1324bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1324c0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1324c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1324c4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1324c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1324c8: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x1324c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1324cc: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1324ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1324d0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1324d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1324d4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1324d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1324d8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1324d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1324dc: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x1324dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1324e0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1324e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1324e4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1324e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1324e8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1324e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1324ec: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x1324ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1324f0: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x1324f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1324f4: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1324f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1324f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1324F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1324F8u;
            // 0x1324fc: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132500u;
}
