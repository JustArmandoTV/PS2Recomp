#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135690
// Address: 0x135690 - 0x135710
void sub_00135690_0x135690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135690_0x135690");
#endif

    ctx->pc = 0x135690u;

    // 0x135690: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135694: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x135694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x135698: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x135698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13569c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x13569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356a0: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1356a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1356a4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1356a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1356a8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1356a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356ac: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x1356acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1356b0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1356b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1356b4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1356b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356b8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1356b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1356bc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1356bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1356c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1356c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356c4: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1356c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1356c8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1356c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1356cc: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1356ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356d0: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x1356d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1356d4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1356d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1356d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1356d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356dc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1356dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1356e0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1356e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1356e4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x1356e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356e8: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1356e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1356ec: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1356ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1356f0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1356f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356f4: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x1356f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1356f8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1356f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1356fc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1356fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x135700: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x135700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x135704: 0x3e00008  jr          $ra
    ctx->pc = 0x135704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135704u;
            // 0x135708: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13570Cu;
    // 0x13570c: 0x0  nop
    ctx->pc = 0x13570cu;
    // NOP
}
