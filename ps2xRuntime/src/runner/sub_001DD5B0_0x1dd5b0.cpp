#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD5B0
// Address: 0x1dd5b0 - 0x1dd5c0
void sub_001DD5B0_0x1dd5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD5B0_0x1dd5b0");
#endif

    ctx->pc = 0x1dd5b0u;

    // 0x1dd5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5B0u;
            // 0x1dd5b4: 0xc480002c  lwc1        $f0, 0x2C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD5B8u;
    // 0x1dd5b8: 0x0  nop
    ctx->pc = 0x1dd5b8u;
    // NOP
    // 0x1dd5bc: 0x0  nop
    ctx->pc = 0x1dd5bcu;
    // NOP
}
