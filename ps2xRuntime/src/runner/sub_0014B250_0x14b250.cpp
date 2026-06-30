#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B250
// Address: 0x14b250 - 0x14b2c0
void sub_0014B250_0x14b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B250_0x14b250");
#endif

    ctx->pc = 0x14b250u;

    // 0x14b250: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x14b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b254: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x14b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b258: 0x460060c7  neg.s       $f3, $f12
    ctx->pc = 0x14b258u;
    ctx->f[3] = FPU_NEG_S(ctx->f[12]);
    // 0x14b25c: 0x460c081a  mula.s      $f1, $f12
    ctx->pc = 0x14b25cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x14b260: 0x460d101c  madd.s      $f0, $f2, $f13
    ctx->pc = 0x14b260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x14b264: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x14b264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x14b268: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x14b268u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x14b26c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14b26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14b270: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14b270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14b274: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x14b274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b278: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x14b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b27c: 0x460c081a  mula.s      $f1, $f12
    ctx->pc = 0x14b27cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x14b280: 0x460d101c  madd.s      $f0, $f2, $f13
    ctx->pc = 0x14b280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x14b284: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x14b284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x14b288: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x14b288u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x14b28c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14b28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14b290: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x14b290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14b294: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b298: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x14b298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b29c: 0x460c001a  mula.s      $f0, $f12
    ctx->pc = 0x14b29cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x14b2a0: 0x460d105c  madd.s      $f1, $f2, $f13
    ctx->pc = 0x14b2a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
    // 0x14b2a4: 0x460d001a  mula.s      $f0, $f13
    ctx->pc = 0x14b2a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x14b2a8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x14b2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14b2ac: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x14b2acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x14b2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2B0u;
            // 0x14b2b4: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B2B8u;
    // 0x14b2b8: 0x0  nop
    ctx->pc = 0x14b2b8u;
    // NOP
    // 0x14b2bc: 0x0  nop
    ctx->pc = 0x14b2bcu;
    // NOP
}
