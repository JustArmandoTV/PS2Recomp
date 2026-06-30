#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C33C0
// Address: 0x3c33c0 - 0x3c33d0
void sub_003C33C0_0x3c33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C33C0_0x3c33c0");
#endif

    ctx->pc = 0x3c33c0u;

    // 0x3c33c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C33C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C33C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C33C0u;
            // 0x3c33c4: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C33C8u;
    // 0x3c33c8: 0x0  nop
    ctx->pc = 0x3c33c8u;
    // NOP
    // 0x3c33cc: 0x0  nop
    ctx->pc = 0x3c33ccu;
    // NOP
}
