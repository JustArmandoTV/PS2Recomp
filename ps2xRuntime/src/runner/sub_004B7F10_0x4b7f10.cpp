#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B7F10
// Address: 0x4b7f10 - 0x4b7f20
void sub_004B7F10_0x4b7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7F10_0x4b7f10");
#endif

    ctx->pc = 0x4b7f10u;

    // 0x4b7f10: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F10u;
            // 0x4b7f14: 0x24820120  addiu       $v0, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7F18u;
    // 0x4b7f18: 0x0  nop
    ctx->pc = 0x4b7f18u;
    // NOP
    // 0x4b7f1c: 0x0  nop
    ctx->pc = 0x4b7f1cu;
    // NOP
}
