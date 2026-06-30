#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4FA0
// Address: 0x1d4fa0 - 0x1d4fb0
void sub_001D4FA0_0x1d4fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4FA0_0x1d4fa0");
#endif

    ctx->pc = 0x1d4fa0u;

    // 0x1d4fa0: 0xe48c0088  swc1        $f12, 0x88($a0)
    ctx->pc = 0x1d4fa0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1d4fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FA4u;
            // 0x1d4fa8: 0xe48c0034  swc1        $f12, 0x34($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4FACu;
    // 0x1d4fac: 0x0  nop
    ctx->pc = 0x1d4facu;
    // NOP
}
