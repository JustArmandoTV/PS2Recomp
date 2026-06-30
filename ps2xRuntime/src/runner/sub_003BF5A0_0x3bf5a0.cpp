#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF5A0
// Address: 0x3bf5a0 - 0x3bf5b0
void sub_003BF5A0_0x3bf5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF5A0_0x3bf5a0");
#endif

    ctx->pc = 0x3bf5a0u;

    // 0x3bf5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF5A0u;
            // 0x3bf5a4: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF5A8u;
    // 0x3bf5a8: 0x0  nop
    ctx->pc = 0x3bf5a8u;
    // NOP
    // 0x3bf5ac: 0x0  nop
    ctx->pc = 0x3bf5acu;
    // NOP
}
