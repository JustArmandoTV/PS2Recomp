#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD6D0
// Address: 0x1dd6d0 - 0x1dd6e0
void sub_001DD6D0_0x1dd6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6D0_0x1dd6d0");
#endif

    ctx->pc = 0x1dd6d0u;

    // 0x1dd6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6D0u;
            // 0x1dd6d4: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD6D8u;
    // 0x1dd6d8: 0x0  nop
    ctx->pc = 0x1dd6d8u;
    // NOP
    // 0x1dd6dc: 0x0  nop
    ctx->pc = 0x1dd6dcu;
    // NOP
}
