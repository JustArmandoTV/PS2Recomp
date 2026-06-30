#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A110
// Address: 0x27a110 - 0x27a3a0
void sub_0027A110_0x27a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A110_0x27a110");
#endif

    ctx->pc = 0x27a110u;

    // 0x27a110: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x27a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27a114: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x27a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27a118: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x27a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a11c: 0xc4b30004  lwc1        $f19, 0x4($a1)
    ctx->pc = 0x27a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x27a120: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x27a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a124: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x27a124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a128: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x27a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a12c: 0x46064bc1  sub.s       $f15, $f9, $f6
    ctx->pc = 0x27a12cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x27a130: 0x46059b81  sub.s       $f14, $f19, $f5
    ctx->pc = 0x27a130u;
    ctx->f[14] = FPU_SUB_S(ctx->f[19], ctx->f[5]);
    // 0x27a134: 0xc4b00008  lwc1        $f16, 0x8($a1)
    ctx->pc = 0x27a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27a138: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x27a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a13c: 0x460f7a02  mul.s       $f8, $f15, $f15
    ctx->pc = 0x27a13cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x27a140: 0x460e71c2  mul.s       $f7, $f14, $f14
    ctx->pc = 0x27a140u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x27a144: 0x46061b01  sub.s       $f12, $f3, $f6
    ctx->pc = 0x27a144u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x27a148: 0x46074018  adda.s      $f8, $f7
    ctx->pc = 0x27a148u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x27a14c: 0x460512c1  sub.s       $f11, $f2, $f5
    ctx->pc = 0x27a14cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x27a150: 0x46048341  sub.s       $f13, $f16, $f4
    ctx->pc = 0x27a150u;
    ctx->f[13] = FPU_SUB_S(ctx->f[16], ctx->f[4]);
    // 0x27a154: 0x460c6202  mul.s       $f8, $f12, $f12
    ctx->pc = 0x27a154u;
    ctx->f[8] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x27a158: 0x460b59c2  mul.s       $f7, $f11, $f11
    ctx->pc = 0x27a158u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x27a15c: 0x460d6c9c  madd.s      $f18, $f13, $f13
    ctx->pc = 0x27a15cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x27a160: 0x46074018  adda.s      $f8, $f7
    ctx->pc = 0x27a160u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x27a164: 0x46040a81  sub.s       $f10, $f1, $f4
    ctx->pc = 0x27a164u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x27a168: 0x460c7a02  mul.s       $f8, $f15, $f12
    ctx->pc = 0x27a168u;
    ctx->f[8] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x27a16c: 0x460b71c2  mul.s       $f7, $f14, $f11
    ctx->pc = 0x27a16cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[11]);
    // 0x27a170: 0x460a545c  madd.s      $f17, $f10, $f10
    ctx->pc = 0x27a170u;
    ctx->f[17] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x27a174: 0x46074018  adda.s      $f8, $f7
    ctx->pc = 0x27a174u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x27a178: 0x460a69dc  madd.s      $f7, $f13, $f10
    ctx->pc = 0x27a178u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[10]));
    // 0x27a17c: 0x4611901a  mula.s      $f18, $f17
    ctx->pc = 0x27a17cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[17]);
    // 0x27a180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a184: 0x46073a1d  msub.s      $f8, $f7, $f7
    ctx->pc = 0x27a184u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x27a188: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x27a188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a18c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x27A18Cu;
    {
        const bool branch_taken_0x27a18c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A18Cu;
            // 0x27a190: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a18c) {
            ctx->pc = 0x27A208u;
            goto label_27a208;
        }
    }
    ctx->pc = 0x27A194u;
    // 0x27a194: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x27a194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27a198: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x27a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a19c: 0x46081a43  div.s       $f9, $f3, $f8
    ctx->pc = 0x27a19cu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[9] = ctx->f[3] / ctx->f[8];
    // 0x27a1a0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a1a4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x27a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a1a8: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x27a1a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x27a1ac: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x27a1acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x27a1b0: 0x460020c1  sub.s       $f3, $f4, $f0
    ctx->pc = 0x27a1b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x27a1b4: 0x460f3082  mul.s       $f2, $f6, $f15
    ctx->pc = 0x27a1b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
    // 0x27a1b8: 0x460e2802  mul.s       $f0, $f5, $f14
    ctx->pc = 0x27a1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x27a1bc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x27a1bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27a1c0: 0x460c3042  mul.s       $f1, $f6, $f12
    ctx->pc = 0x27a1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x27a1c4: 0x460b2802  mul.s       $f0, $f5, $f11
    ctx->pc = 0x27a1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x27a1c8: 0x460d189c  madd.s      $f2, $f3, $f13
    ctx->pc = 0x27a1c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[13]));
    // 0x27a1cc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x27a1ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a1d0: 0x460a181c  madd.s      $f0, $f3, $f10
    ctx->pc = 0x27a1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[10]));
    // 0x27a1d4: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x27a1d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x27a1d8: 0x4602885d  msub.s      $f1, $f17, $f2
    ctx->pc = 0x27a1d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[2]));
    // 0x27a1dc: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x27a1dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x27a1e0: 0x4600909d  msub.s      $f2, $f18, $f0
    ctx->pc = 0x27a1e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[0]));
    // 0x27a1e4: 0x46014001  sub.s       $f0, $f8, $f1
    ctx->pc = 0x27a1e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x27a1e8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x27a1e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x27a1ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27a1ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27a1f0: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x27a1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27a1f4: 0x46004842  mul.s       $f1, $f9, $f0
    ctx->pc = 0x27a1f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x27a1f8: 0x46024802  mul.s       $f0, $f9, $f2
    ctx->pc = 0x27a1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x27a1fc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x27a1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x27a200: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x27A200u;
    {
        const bool branch_taken_0x27a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A200u;
            // 0x27a204: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a200) {
            ctx->pc = 0x27A390u;
            goto label_27a390;
        }
    }
    ctx->pc = 0x27A208u;
label_27a208:
    // 0x27a208: 0x46034a41  sub.s       $f9, $f9, $f3
    ctx->pc = 0x27a208u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x27a20c: 0x46029a01  sub.s       $f8, $f19, $f2
    ctx->pc = 0x27a20cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[19], ctx->f[2]);
    // 0x27a210: 0x460181c1  sub.s       $f7, $f16, $f1
    ctx->pc = 0x27a210u;
    ctx->f[7] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
    // 0x27a214: 0x46094cc2  mul.s       $f19, $f9, $f9
    ctx->pc = 0x27a214u;
    ctx->f[19] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x27a218: 0x46084402  mul.s       $f16, $f8, $f8
    ctx->pc = 0x27a218u;
    ctx->f[16] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x27a21c: 0x46109818  adda.s      $f19, $f16
    ctx->pc = 0x27a21cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[19], ctx->f[16]);
    // 0x27a220: 0x46119034  c.lt.s      $f18, $f17
    ctx->pc = 0x27a220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[18], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a224: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x27A224u;
    {
        const bool branch_taken_0x27a224 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A224u;
            // 0x27a228: 0x46073c1c  madd.s      $f16, $f7, $f7 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a224) {
            ctx->pc = 0x27A2F0u;
            goto label_27a2f0;
        }
    }
    ctx->pc = 0x27A22Cu;
    // 0x27a22c: 0x46128034  c.lt.s      $f16, $f18
    ctx->pc = 0x27a22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a230: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x27A230u;
    {
        const bool branch_taken_0x27a230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a230) {
            ctx->pc = 0x27A2A8u;
            goto label_27a2a8;
        }
    }
    ctx->pc = 0x27A238u;
    // 0x27a238: 0x46008036  c.le.s      $f16, $f0
    ctx->pc = 0x27a238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a23c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x27A23Cu;
    {
        const bool branch_taken_0x27a23c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A23Cu;
            // 0x27a240: 0xe5000004  swc1        $f0, 0x4($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a23c) {
            ctx->pc = 0x27A298u;
            goto label_27a298;
        }
    }
    ctx->pc = 0x27A244u;
    // 0x27a244: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x27a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27a248: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a24c: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x27a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a250: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x27a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27a254: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x27a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a258: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x27a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a25c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x27a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a264: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x27a264u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x27a268: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x27a268u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x27a26c: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x27a26cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x27a270: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x27a270u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x27a274: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27a274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x27a278: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x27a278u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x27a27c: 0x4607085c  madd.s      $f1, $f1, $f7
    ctx->pc = 0x27a27cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x27a280: 0x46100843  div.s       $f1, $f1, $f16
    ctx->pc = 0x27a280u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[16];
    // 0x27a284: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27a284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27a288: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x27a288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27a28c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27A28Cu;
    {
        const bool branch_taken_0x27a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A28Cu;
            // 0x27a290: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a28c) {
            ctx->pc = 0x27A390u;
            goto label_27a390;
        }
    }
    ctx->pc = 0x27A294u;
    // 0x27a294: 0x0  nop
    ctx->pc = 0x27a294u;
    // NOP
label_27a298:
    // 0x27a298: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x27a298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27a29c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27A29Cu;
    {
        const bool branch_taken_0x27a29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A29Cu;
            // 0x27a2a0: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a29c) {
            ctx->pc = 0x27A390u;
            goto label_27a390;
        }
    }
    ctx->pc = 0x27A2A4u;
    // 0x27a2a4: 0x0  nop
    ctx->pc = 0x27a2a4u;
    // NOP
label_27a2a8:
    // 0x27a2a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a2ac: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x27a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27a2b0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x27a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a2b4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x27a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a2b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a2bc: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x27a2bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x27a2c0: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x27a2c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x27a2c4: 0x460f3182  mul.s       $f6, $f6, $f15
    ctx->pc = 0x27a2c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
    // 0x27a2c8: 0x460e18c2  mul.s       $f3, $f3, $f14
    ctx->pc = 0x27a2c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x27a2cc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x27a2ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x27a2d0: 0x46033018  adda.s      $f6, $f3
    ctx->pc = 0x27a2d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x27a2d4: 0x460d109c  madd.s      $f2, $f2, $f13
    ctx->pc = 0x27a2d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x27a2d8: 0x46121083  div.s       $f2, $f2, $f18
    ctx->pc = 0x27a2d8u;
    if (ctx->f[18] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[18];
    // 0x27a2dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27a2dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27a2e0: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x27a2e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27a2e4: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x27a2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x27a2e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x27A2E8u;
    {
        const bool branch_taken_0x27a2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2E8u;
            // 0x27a2ec: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2e8) {
            ctx->pc = 0x27A390u;
            goto label_27a390;
        }
    }
    ctx->pc = 0x27A2F0u;
label_27a2f0:
    // 0x27a2f0: 0x46118034  c.lt.s      $f16, $f17
    ctx->pc = 0x27a2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a2f4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x27A2F4u;
    {
        const bool branch_taken_0x27a2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a2f4) {
            ctx->pc = 0x27A348u;
            goto label_27a348;
        }
    }
    ctx->pc = 0x27A2FCu;
    // 0x27a2fc: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x27a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x27a300: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a304: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x27a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27a308: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x27a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27a30c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x27a30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27a310: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x27a310u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x27a314: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x27a314u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x27a318: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x27a318u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x27a31c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x27a31cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x27a320: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x27a320u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x27a324: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x27a324u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x27a328: 0x4607085c  madd.s      $f1, $f1, $f7
    ctx->pc = 0x27a328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x27a32c: 0x46100843  div.s       $f1, $f1, $f16
    ctx->pc = 0x27a32cu;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[16];
    // 0x27a330: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x27a330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27a334: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x27a334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x27a338: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x27a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a33c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x27a33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x27a340: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27A340u;
    {
        const bool branch_taken_0x27a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A340u;
            // 0x27a344: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a340) {
            ctx->pc = 0x27A390u;
            goto label_27a390;
        }
    }
    ctx->pc = 0x27A348u;
label_27a348:
    // 0x27a348: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a34c: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x27a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27a350: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x27a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27a354: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x27a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a358: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a35c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x27a35cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x27a360: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x27a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x27a364: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x27a364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x27a368: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x27a368u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x27a36c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x27a36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x27a370: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x27a370u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x27a374: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x27a374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x27a378: 0x460a001c  madd.s      $f0, $f0, $f10
    ctx->pc = 0x27a378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[10]));
    // 0x27a37c: 0x46110083  div.s       $f2, $f0, $f17
    ctx->pc = 0x27a37cu;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[17];
    // 0x27a380: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x27a380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27a384: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x27a384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x27a388: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x27a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x27a38c: 0x0  nop
    ctx->pc = 0x27a38cu;
    // NOP
label_27a390:
    // 0x27a390: 0x3e00008  jr          $ra
    ctx->pc = 0x27A390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A398u;
    // 0x27a398: 0x0  nop
    ctx->pc = 0x27a398u;
    // NOP
    // 0x27a39c: 0x0  nop
    ctx->pc = 0x27a39cu;
    // NOP
}
