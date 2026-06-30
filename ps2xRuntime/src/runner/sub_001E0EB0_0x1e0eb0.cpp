#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0EB0
// Address: 0x1e0eb0 - 0x1e0ec0
void sub_001E0EB0_0x1e0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0EB0_0x1e0eb0");
#endif

    ctx->pc = 0x1e0eb0u;

    // 0x1e0eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EB0u;
            // 0x1e0eb4: 0xc4800de4  lwc1        $f0, 0xDE4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0EB8u;
    // 0x1e0eb8: 0x0  nop
    ctx->pc = 0x1e0eb8u;
    // NOP
    // 0x1e0ebc: 0x0  nop
    ctx->pc = 0x1e0ebcu;
    // NOP
}
