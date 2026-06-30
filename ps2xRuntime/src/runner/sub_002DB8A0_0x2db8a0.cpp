#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB8A0
// Address: 0x2db8a0 - 0x2db8e0
void sub_002DB8A0_0x2db8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB8A0_0x2db8a0");
#endif

    ctx->pc = 0x2db8a0u;

    // 0x2db8a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2db8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db8a4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2db8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2db8a8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2db8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2db8ac: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2db8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db8b0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2db8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2db8b4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2db8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2db8b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2db8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db8bc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2db8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2db8c0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2db8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2db8c4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2db8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db8c8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2db8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2db8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB8CCu;
            // 0x2db8d0: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB8D4u;
    // 0x2db8d4: 0x0  nop
    ctx->pc = 0x2db8d4u;
    // NOP
    // 0x2db8d8: 0x0  nop
    ctx->pc = 0x2db8d8u;
    // NOP
    // 0x2db8dc: 0x0  nop
    ctx->pc = 0x2db8dcu;
    // NOP
}
