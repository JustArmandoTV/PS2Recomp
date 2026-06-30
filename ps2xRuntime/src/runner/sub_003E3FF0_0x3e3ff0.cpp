#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3FF0
// Address: 0x3e3ff0 - 0x3e4000
void sub_003E3FF0_0x3e3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3FF0_0x3e3ff0");
#endif

    ctx->pc = 0x3e3ff0u;

    // 0x3e3ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3FF0u;
            // 0x3e3ff4: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3FF8u;
    // 0x3e3ff8: 0x0  nop
    ctx->pc = 0x3e3ff8u;
    // NOP
    // 0x3e3ffc: 0x0  nop
    ctx->pc = 0x3e3ffcu;
    // NOP
}
