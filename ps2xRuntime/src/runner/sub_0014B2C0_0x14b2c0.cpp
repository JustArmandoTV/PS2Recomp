#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B2C0
// Address: 0x14b2c0 - 0x14b330
void sub_0014B2C0_0x14b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B2C0_0x14b2c0");
#endif

    ctx->pc = 0x14b2c0u;

    // 0x14b2c0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b2c4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x14b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b2c8: 0x460060c7  neg.s       $f3, $f12
    ctx->pc = 0x14b2c8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[12]);
    // 0x14b2cc: 0x460c081a  mula.s      $f1, $f12
    ctx->pc = 0x14b2ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x14b2d0: 0x460d101c  madd.s      $f0, $f2, $f13
    ctx->pc = 0x14b2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x14b2d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14b2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14b2d8: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x14b2d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x14b2dc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14b2dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14b2e0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14b2e4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x14b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b2e8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x14b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b2ec: 0x460c081a  mula.s      $f1, $f12
    ctx->pc = 0x14b2ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x14b2f0: 0x460d101c  madd.s      $f0, $f2, $f13
    ctx->pc = 0x14b2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x14b2f4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x14b2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14b2f8: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x14b2f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x14b2fc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14b2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14b300: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x14b300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x14b304: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14b304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b308: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x14b308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b30c: 0x460c001a  mula.s      $f0, $f12
    ctx->pc = 0x14b30cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x14b310: 0x460d105c  madd.s      $f1, $f2, $f13
    ctx->pc = 0x14b310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x14b314: 0x460d001a  mula.s      $f0, $f13
    ctx->pc = 0x14b314u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x14b318: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14b318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14b31c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x14b31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x14b320: 0x3e00008  jr          $ra
    ctx->pc = 0x14B320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B320u;
            // 0x14b324: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B328u;
    // 0x14b328: 0x0  nop
    ctx->pc = 0x14b328u;
    // NOP
    // 0x14b32c: 0x0  nop
    ctx->pc = 0x14b32cu;
    // NOP
}
