#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036BBB0
// Address: 0x36bbb0 - 0x36bbc0
void sub_0036BBB0_0x36bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BBB0_0x36bbb0");
#endif

    ctx->pc = 0x36bbb0u;

    // 0x36bbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36BBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BBB0u;
            // 0x36bbb4: 0xc4800930  lwc1        $f0, 0x930($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BBB8u;
    // 0x36bbb8: 0x0  nop
    ctx->pc = 0x36bbb8u;
    // NOP
    // 0x36bbbc: 0x0  nop
    ctx->pc = 0x36bbbcu;
    // NOP
}
