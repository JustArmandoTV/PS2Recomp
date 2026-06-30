#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003844C0
// Address: 0x3844c0 - 0x3844d0
void sub_003844C0_0x3844c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003844C0_0x3844c0");
#endif

    ctx->pc = 0x3844c0u;

    // 0x3844c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3844C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3844C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3844C0u;
            // 0x3844c4: 0xc4800120  lwc1        $f0, 0x120($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3844C8u;
    // 0x3844c8: 0x0  nop
    ctx->pc = 0x3844c8u;
    // NOP
    // 0x3844cc: 0x0  nop
    ctx->pc = 0x3844ccu;
    // NOP
}
