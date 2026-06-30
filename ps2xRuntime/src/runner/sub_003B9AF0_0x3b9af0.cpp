#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9AF0
// Address: 0x3b9af0 - 0x3b9b00
void sub_003B9AF0_0x3b9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9AF0_0x3b9af0");
#endif

    ctx->pc = 0x3b9af0u;

    // 0x3b9af0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9AF0u;
            // 0x3b9af4: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9AF8u;
    // 0x3b9af8: 0x0  nop
    ctx->pc = 0x3b9af8u;
    // NOP
    // 0x3b9afc: 0x0  nop
    ctx->pc = 0x3b9afcu;
    // NOP
}
