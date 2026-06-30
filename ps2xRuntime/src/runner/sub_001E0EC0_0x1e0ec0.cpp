#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0EC0
// Address: 0x1e0ec0 - 0x1e0ed0
void sub_001E0EC0_0x1e0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0EC0_0x1e0ec0");
#endif

    ctx->pc = 0x1e0ec0u;

    // 0x1e0ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EC0u;
            // 0x1e0ec4: 0xc4800dd8  lwc1        $f0, 0xDD8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0EC8u;
    // 0x1e0ec8: 0x0  nop
    ctx->pc = 0x1e0ec8u;
    // NOP
    // 0x1e0ecc: 0x0  nop
    ctx->pc = 0x1e0eccu;
    // NOP
}
