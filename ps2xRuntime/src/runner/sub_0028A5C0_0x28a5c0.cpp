#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A5C0
// Address: 0x28a5c0 - 0x28a610
void sub_0028A5C0_0x28a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A5C0_0x28a5c0");
#endif

    ctx->pc = 0x28a5c0u;

    // 0x28a5c0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x28a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a5c4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a5c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28a5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28a5cc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x28a5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x28a5d0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a5d4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a5d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28a5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28a5dc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x28a5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x28a5e0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x28a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a5e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28a5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a5e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28a5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28a5ec: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x28a5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x28a5f0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x28a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a5f4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a5f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28a5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x28A5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5FCu;
            // 0x28a600: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A604u;
    // 0x28a604: 0x0  nop
    ctx->pc = 0x28a604u;
    // NOP
    // 0x28a608: 0x0  nop
    ctx->pc = 0x28a608u;
    // NOP
    // 0x28a60c: 0x0  nop
    ctx->pc = 0x28a60cu;
    // NOP
}
