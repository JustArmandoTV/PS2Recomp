#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D3290
// Address: 0x3d3290 - 0x3d32c0
void sub_003D3290_0x3d3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3290_0x3d3290");
#endif

    ctx->pc = 0x3d3290u;

    // 0x3d3290: 0xc481020c  lwc1        $f1, 0x20C($a0)
    ctx->pc = 0x3d3290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d3294: 0xc4800208  lwc1        $f0, 0x208($a0)
    ctx->pc = 0x3d3294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d3298: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d3298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d329c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3D329Cu;
    {
        const bool branch_taken_0x3d329c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d329c) {
            ctx->pc = 0x3D32B0u;
            goto label_3d32b0;
        }
    }
    ctx->pc = 0x3D32A4u;
    // 0x3d32a4: 0xac80020c  sw          $zero, 0x20C($a0)
    ctx->pc = 0x3d32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 0));
    // 0x3d32a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d32ac: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x3d32acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
label_3d32b0:
    // 0x3d32b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D32B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D32B8u;
    // 0x3d32b8: 0x0  nop
    ctx->pc = 0x3d32b8u;
    // NOP
    // 0x3d32bc: 0x0  nop
    ctx->pc = 0x3d32bcu;
    // NOP
}
