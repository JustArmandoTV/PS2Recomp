#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002918A0
// Address: 0x2918a0 - 0x291910
void sub_002918A0_0x2918a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002918A0_0x2918a0");
#endif

    ctx->pc = 0x2918a0u;

    // 0x2918a0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2918a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2918a4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2918a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918a8: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x2918a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2918ac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2918acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2918b0: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2918b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2918b4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2918b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2918b8: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x2918b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2918bc: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2918bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2918c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2918c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2918c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2918c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2918c8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2918c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918cc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2918ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2918d0: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x2918d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2918d4: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2918d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2918d8: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2918d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2918dc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2918dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2918e0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2918e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2918e4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2918e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918e8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2918e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2918ec: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x2918ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2918f0: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2918f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2918f4: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2918f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2918f8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2918f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2918fc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2918fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x291900: 0x3e00008  jr          $ra
    ctx->pc = 0x291900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291900u;
            // 0x291904: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291908u;
    // 0x291908: 0x0  nop
    ctx->pc = 0x291908u;
    // NOP
    // 0x29190c: 0x0  nop
    ctx->pc = 0x29190cu;
    // NOP
}
