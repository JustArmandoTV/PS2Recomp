#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0EE0
// Address: 0x1e0ee0 - 0x1e0ef0
void sub_001E0EE0_0x1e0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0EE0_0x1e0ee0");
#endif

    ctx->pc = 0x1e0ee0u;

    // 0x1e0ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EE0u;
            // 0x1e0ee4: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0EE8u;
    // 0x1e0ee8: 0x0  nop
    ctx->pc = 0x1e0ee8u;
    // NOP
    // 0x1e0eec: 0x0  nop
    ctx->pc = 0x1e0eecu;
    // NOP
}
