#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049FE70
// Address: 0x49fe70 - 0x49fef0
void sub_0049FE70_0x49fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FE70_0x49fe70");
#endif

    ctx->pc = 0x49fe70u;

    // 0x49fe70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fe74: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x49fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x49fe78: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x49fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
    // 0x49fe7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49fe7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x49fe80: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x49fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49fe84: 0xe4810084  swc1        $f1, 0x84($a0)
    ctx->pc = 0x49fe84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x49fe88: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x49fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49fe8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x49fe8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x49fe90: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x49FE90u;
    {
        const bool branch_taken_0x49fe90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49fe90) {
            ctx->pc = 0x49FE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49FE90u;
            // 0x49fe94: 0x3c03c2f0  lui         $v1, 0xC2F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49904 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49FEA8u;
            goto label_49fea8;
        }
    }
    ctx->pc = 0x49FE98u;
    // 0x49fe98: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x49fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x49fe9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x49fe9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x49fea0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49FEA0u;
    {
        const bool branch_taken_0x49fea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FEA0u;
            // 0x49fea4: 0xc4800088  lwc1        $f0, 0x88($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fea0) {
            ctx->pc = 0x49FEB0u;
            goto label_49feb0;
        }
    }
    ctx->pc = 0x49FEA8u;
label_49fea8:
    // 0x49fea8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x49fea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x49feac: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x49feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49feb0:
    // 0x49feb0: 0x0  nop
    ctx->pc = 0x49feb0u;
    // NOP
    // 0x49feb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x49feb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x49feb8: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x49feb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x49febc: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x49febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x49fec0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x49fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x49fec4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x49fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49fec8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x49fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x49fecc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x49feccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x49fed0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x49fed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x49fed4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x49fed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x49fed8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x49fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x49fedc: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x49fedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x49fee0: 0x3e00008  jr          $ra
    ctx->pc = 0x49FEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FEE0u;
            // 0x49fee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FEE8u;
    // 0x49fee8: 0x0  nop
    ctx->pc = 0x49fee8u;
    // NOP
    // 0x49feec: 0x0  nop
    ctx->pc = 0x49feecu;
    // NOP
}
