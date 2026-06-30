#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003045F0
// Address: 0x3045f0 - 0x3046a0
void sub_003045F0_0x3045f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003045F0_0x3045f0");
#endif

    ctx->pc = 0x3045f0u;

    // 0x3045f0: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x3045f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3045f4: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3045f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3045f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3045fc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3045FCu;
    {
        const bool branch_taken_0x3045fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3045fc) {
            ctx->pc = 0x304600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3045FCu;
            // 0x304600: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30460Cu;
            goto label_30460c;
        }
    }
    ctx->pc = 0x304604u;
    // 0x304604: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x304604u;
    {
        const bool branch_taken_0x304604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304604u;
            // 0x304608: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304604) {
            ctx->pc = 0x304654u;
            goto label_304654;
        }
    }
    ctx->pc = 0x30460Cu;
label_30460c:
    // 0x30460c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30460cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304610: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304610u;
    {
        const bool branch_taken_0x304610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304610) {
            ctx->pc = 0x304614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304610u;
            // 0x304614: 0xc4800de8  lwc1        $f0, 0xDE8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304620u;
            goto label_304620;
        }
    }
    ctx->pc = 0x304618u;
    // 0x304618: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x304618u;
    {
        const bool branch_taken_0x304618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304618u;
            // 0x30461c: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304618) {
            ctx->pc = 0x304654u;
            goto label_304654;
        }
    }
    ctx->pc = 0x304620u;
label_304620:
    // 0x304620: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x304620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x304624: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x304624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
    // 0x304628: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30462c: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x30462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304630: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x304630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304634: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304634u;
    {
        const bool branch_taken_0x304634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304634) {
            ctx->pc = 0x304638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304634u;
            // 0x304638: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304644u;
            goto label_304644;
        }
    }
    ctx->pc = 0x30463Cu;
    // 0x30463c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30463Cu;
    {
        const bool branch_taken_0x30463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30463Cu;
            // 0x304640: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30463c) {
            ctx->pc = 0x304654u;
            goto label_304654;
        }
    }
    ctx->pc = 0x304644u;
label_304644:
    // 0x304644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304648: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304648u;
    {
        const bool branch_taken_0x304648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304648) {
            ctx->pc = 0x30464Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304648u;
            // 0x30464c: 0xc4810de4  lwc1        $f1, 0xDE4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304658u;
            goto label_304658;
        }
    }
    ctx->pc = 0x304650u;
    // 0x304650: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x304650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_304654:
    // 0x304654: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x304654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304658:
    // 0x304658: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30465c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30465cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304660: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304660u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x304664: 0xe4800dec  swc1        $f0, 0xDEC($a0)
    ctx->pc = 0x304664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3564), bits); }
    // 0x304668: 0xc4800de8  lwc1        $f0, 0xDE8($a0)
    ctx->pc = 0x304668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30466c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30466cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304670: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x304670u;
    {
        const bool branch_taken_0x304670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304670) {
            ctx->pc = 0x304698u;
            goto label_304698;
        }
    }
    ctx->pc = 0x304678u;
    // 0x304678: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x304678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30467c: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x30467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304684: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x304684u;
    {
        const bool branch_taken_0x304684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304684) {
            ctx->pc = 0x304698u;
            goto label_304698;
        }
    }
    ctx->pc = 0x30468Cu;
    // 0x30468c: 0xe4820de8  swc1        $f2, 0xDE8($a0)
    ctx->pc = 0x30468cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
    // 0x304690: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304694: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x304694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_304698:
    // 0x304698: 0x3e00008  jr          $ra
    ctx->pc = 0x304698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3046A0u;
}
