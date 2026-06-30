#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002933F0
// Address: 0x2933f0 - 0x2934f0
void sub_002933F0_0x2933f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002933F0_0x2933f0");
#endif

    ctx->pc = 0x2933f0u;

    // 0x2933f0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2933f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2933f4: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x2933f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2933f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2933f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2933fc: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x2933fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x293400: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x293400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x293404: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x293404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29340c: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x29340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x293410: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x293410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x293414: 0x46094982  mul.s       $f6, $f9, $f9
    ctx->pc = 0x293414u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x293418: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x293418u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x29341c: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x29341cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x293420: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x293420u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x293424: 0x46044902  mul.s       $f4, $f9, $f4
    ctx->pc = 0x293424u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x293428: 0x4608419c  madd.s      $f6, $f8, $f8
    ctx->pc = 0x293428u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x29342c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x29342cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x293430: 0x46060104  c1          0x60104
    ctx->pc = 0x293430u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x293434: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x293434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293438: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x293438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29343c: 0x460340dc  madd.s      $f3, $f8, $f3
    ctx->pc = 0x29343cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x293440: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x293440u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x293444: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x293444u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x293448: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x293448u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x29344c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x29344cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x293450: 0x0  nop
    ctx->pc = 0x293450u;
    // NOP
    // 0x293454: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x293454u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x293458: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x293458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29345c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29345Cu;
    {
        const bool branch_taken_0x29345c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29345c) {
            ctx->pc = 0x29346Cu;
            goto label_29346c;
        }
    }
    ctx->pc = 0x293464u;
    // 0x293464: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x293464u;
    {
        const bool branch_taken_0x293464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293464) {
            ctx->pc = 0x293470u;
            goto label_293470;
        }
    }
    ctx->pc = 0x29346Cu;
label_29346c:
    // 0x29346c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x29346cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_293470:
    // 0x293470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x293470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293474: 0x0  nop
    ctx->pc = 0x293474u;
    // NOP
    // 0x293478: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x293478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29347c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29347Cu;
    {
        const bool branch_taken_0x29347c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29347c) {
            ctx->pc = 0x293488u;
            goto label_293488;
        }
    }
    ctx->pc = 0x293484u;
    // 0x293484: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x293484u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_293488:
    // 0x293488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x293488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29348c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293490: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x293490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293494: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x293494u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x293498: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x293498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29349c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x29349cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2934a0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2934a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2934a4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2934a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2934a8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2934a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2934ac: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2934acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2934b0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2934b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2934b4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2934b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2934b8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2934b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2934bc: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2934bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2934c0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2934c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2934c4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2934c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2934c8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2934c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2934cc: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2934ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2934d0: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x2934d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2934d4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2934d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2934d8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2934d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2934dc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2934dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2934e0: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x2934e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2934e4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2934e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2934e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2934E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2934ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2934E8u;
            // 0x2934ec: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2934F0u;
}
