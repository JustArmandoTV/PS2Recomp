#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFEC0
// Address: 0x1dfec0 - 0x1dff00
void sub_001DFEC0_0x1dfec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFEC0_0x1dfec0");
#endif

    ctx->pc = 0x1dfec0u;

    // 0x1dfec0: 0x30a30200  andi        $v1, $a1, 0x200
    ctx->pc = 0x1dfec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x1dfec4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFEC4u;
    {
        const bool branch_taken_0x1dfec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfec4) {
            ctx->pc = 0x1DFEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEC4u;
            // 0x1dfec8: 0x8c860da0  lw          $a2, 0xDA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFEECu;
            goto label_1dfeec;
        }
    }
    ctx->pc = 0x1DFECCu;
    // 0x1dfecc: 0xc4810e48  lwc1        $f1, 0xE48($a0)
    ctx->pc = 0x1dfeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dfed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfed4: 0x0  nop
    ctx->pc = 0x1dfed4u;
    // NOP
    // 0x1dfed8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1dfed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfedc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFEDCu;
    {
        const bool branch_taken_0x1dfedc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dfedc) {
            ctx->pc = 0x1DFEE8u;
            goto label_1dfee8;
        }
    }
    ctx->pc = 0x1DFEE4u;
    // 0x1dfee4: 0x0  nop
    ctx->pc = 0x1dfee4u;
    // NOP
label_1dfee8:
    // 0x1dfee8: 0x8c860da0  lw          $a2, 0xDA0($a0)
    ctx->pc = 0x1dfee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_1dfeec:
    // 0x1dfeec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfef0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1dfef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dfef4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1dfef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1dfef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEF8u;
            // 0x1dfefc: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFF00u;
}
