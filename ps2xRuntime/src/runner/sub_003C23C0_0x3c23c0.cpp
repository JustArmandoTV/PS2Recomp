#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C23C0
// Address: 0x3c23c0 - 0x3c23d0
void sub_003C23C0_0x3c23c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C23C0_0x3c23c0");
#endif

    ctx->pc = 0x3c23c0u;

    // 0x3c23c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C23C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C23C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C23C0u;
            // 0x3c23c4: 0x24820140  addiu       $v0, $a0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C23C8u;
    // 0x3c23c8: 0x0  nop
    ctx->pc = 0x3c23c8u;
    // NOP
    // 0x3c23cc: 0x0  nop
    ctx->pc = 0x3c23ccu;
    // NOP
}
