#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304570
// Address: 0x304570 - 0x3045f0
void sub_00304570_0x304570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304570_0x304570");
#endif

    ctx->pc = 0x304570u;

    // 0x304570: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x304570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304574: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x304574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x304578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30457c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x30457Cu;
    {
        const bool branch_taken_0x30457c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30457c) {
            ctx->pc = 0x304580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30457Cu;
            // 0x304580: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x30458Cu;
            goto label_30458c;
        }
    }
    ctx->pc = 0x304584u;
    // 0x304584: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x304584u;
    {
        const bool branch_taken_0x304584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304584u;
            // 0x304588: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304584) {
            ctx->pc = 0x3045D4u;
            goto label_3045d4;
        }
    }
    ctx->pc = 0x30458Cu;
label_30458c:
    // 0x30458c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30458cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304590: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x304590u;
    {
        const bool branch_taken_0x304590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304590) {
            ctx->pc = 0x304594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304590u;
            // 0x304594: 0xc4800de8  lwc1        $f0, 0xDE8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3045A0u;
            goto label_3045a0;
        }
    }
    ctx->pc = 0x304598u;
    // 0x304598: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x304598u;
    {
        const bool branch_taken_0x304598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304598u;
            // 0x30459c: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304598) {
            ctx->pc = 0x3045D4u;
            goto label_3045d4;
        }
    }
    ctx->pc = 0x3045A0u;
label_3045a0:
    // 0x3045a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3045a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3045a4: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3045a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
    // 0x3045a8: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x3045a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3045ac: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3045acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3045b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3045b4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3045B4u;
    {
        const bool branch_taken_0x3045b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3045b4) {
            ctx->pc = 0x3045B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3045B4u;
            // 0x3045b8: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3045C4u;
            goto label_3045c4;
        }
    }
    ctx->pc = 0x3045BCu;
    // 0x3045bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3045BCu;
    {
        const bool branch_taken_0x3045bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045BCu;
            // 0x3045c0: 0xe4800de4  swc1        $f0, 0xDE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045bc) {
            ctx->pc = 0x3045D4u;
            goto label_3045d4;
        }
    }
    ctx->pc = 0x3045C4u;
label_3045c4:
    // 0x3045c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3045c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3045c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3045C8u;
    {
        const bool branch_taken_0x3045c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3045c8) {
            ctx->pc = 0x3045CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3045C8u;
            // 0x3045cc: 0xc4810de4  lwc1        $f1, 0xDE4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3045D8u;
            goto label_3045d8;
        }
    }
    ctx->pc = 0x3045D0u;
    // 0x3045d0: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3045d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3045d4:
    // 0x3045d4: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3045d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3045d8:
    // 0x3045d8: 0xc4800de0  lwc1        $f0, 0xDE0($a0)
    ctx->pc = 0x3045d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3045dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3045dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3045e0: 0x0  nop
    ctx->pc = 0x3045e0u;
    // NOP
    // 0x3045e4: 0x0  nop
    ctx->pc = 0x3045e4u;
    // NOP
    // 0x3045e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3045E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3045ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045E8u;
            // 0x3045ec: 0xe4800dec  swc1        $f0, 0xDEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3045F0u;
}
