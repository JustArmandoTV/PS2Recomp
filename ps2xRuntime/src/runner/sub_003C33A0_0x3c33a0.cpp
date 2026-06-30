#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C33A0
// Address: 0x3c33a0 - 0x3c33b0
void sub_003C33A0_0x3c33a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C33A0_0x3c33a0");
#endif

    ctx->pc = 0x3c33a0u;

    // 0x3c33a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C33A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C33A0u;
            // 0x3c33a4: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C33A8u;
    // 0x3c33a8: 0x0  nop
    ctx->pc = 0x3c33a8u;
    // NOP
    // 0x3c33ac: 0x0  nop
    ctx->pc = 0x3c33acu;
    // NOP
}
