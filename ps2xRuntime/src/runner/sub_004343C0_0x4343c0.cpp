#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004343C0
// Address: 0x4343c0 - 0x4343d0
void sub_004343C0_0x4343c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004343C0_0x4343c0");
#endif

    ctx->pc = 0x4343c0u;

    // 0x4343c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4343C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4343C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4343C0u;
            // 0x4343c4: 0x24820140  addiu       $v0, $a0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4343C8u;
    // 0x4343c8: 0x0  nop
    ctx->pc = 0x4343c8u;
    // NOP
    // 0x4343cc: 0x0  nop
    ctx->pc = 0x4343ccu;
    // NOP
}
