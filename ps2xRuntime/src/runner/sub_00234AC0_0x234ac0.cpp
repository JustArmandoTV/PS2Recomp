#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234AC0
// Address: 0x234ac0 - 0x234b10
void sub_00234AC0_0x234ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234AC0_0x234ac0");
#endif

    ctx->pc = 0x234ac0u;

    // 0x234ac0: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x234ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x234ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234ac8: 0x0  nop
    ctx->pc = 0x234ac8u;
    // NOP
    // 0x234acc: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x234accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x234ad0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x234ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x234ad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234ad8: 0x0  nop
    ctx->pc = 0x234ad8u;
    // NOP
    // 0x234adc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x234adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x234ae0: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x234ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x234ae4: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x234ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x234ae8: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x234ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x234aec: 0xe481003c  swc1        $f1, 0x3C($a0)
    ctx->pc = 0x234aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x234af0: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x234af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x234af4: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x234af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x234af8: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x234af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x234afc: 0x3e00008  jr          $ra
    ctx->pc = 0x234AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234AFCu;
            // 0x234b00: 0xe480004c  swc1        $f0, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234B04u;
    // 0x234b04: 0x0  nop
    ctx->pc = 0x234b04u;
    // NOP
    // 0x234b08: 0x0  nop
    ctx->pc = 0x234b08u;
    // NOP
    // 0x234b0c: 0x0  nop
    ctx->pc = 0x234b0cu;
    // NOP
}
