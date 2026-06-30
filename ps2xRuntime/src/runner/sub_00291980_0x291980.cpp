#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291980
// Address: 0x291980 - 0x2919f0
void sub_00291980_0x291980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291980_0x291980");
#endif

    ctx->pc = 0x291980u;

    // 0x291980: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x291980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291984: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x291984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291988: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x291988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29198c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291990: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x291990u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291994: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x291994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291998: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x291998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29199c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x29199cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2919a0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2919a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2919a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2919a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2919a8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2919a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2919ac: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2919acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2919b0: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x2919b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2919b4: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2919b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2919b8: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2919b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2919bc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2919bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2919c0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2919c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2919c4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2919c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2919c8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2919c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2919cc: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x2919ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2919d0: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2919d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2919d4: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2919d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2919d8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2919d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2919dc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2919dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2919e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2919E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2919E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919E0u;
            // 0x2919e4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2919E8u;
    // 0x2919e8: 0x0  nop
    ctx->pc = 0x2919e8u;
    // NOP
    // 0x2919ec: 0x0  nop
    ctx->pc = 0x2919ecu;
    // NOP
}
