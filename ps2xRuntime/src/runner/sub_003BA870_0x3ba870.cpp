#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BA870
// Address: 0x3ba870 - 0x3ba890
void sub_003BA870_0x3ba870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA870_0x3ba870");
#endif

    ctx->pc = 0x3ba870u;

    // 0x3ba870: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3ba870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba874: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3ba874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3ba878: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3ba878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba87c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA87Cu;
            // 0x3ba880: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BA884u;
    // 0x3ba884: 0x0  nop
    ctx->pc = 0x3ba884u;
    // NOP
    // 0x3ba888: 0x0  nop
    ctx->pc = 0x3ba888u;
    // NOP
    // 0x3ba88c: 0x0  nop
    ctx->pc = 0x3ba88cu;
    // NOP
}
