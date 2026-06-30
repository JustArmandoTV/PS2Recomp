#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE60
// Address: 0x33be60 - 0x33be70
void sub_0033BE60_0x33be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE60_0x33be60");
#endif

    ctx->pc = 0x33be60u;

    // 0x33be60: 0x3e00008  jr          $ra
    ctx->pc = 0x33BE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE60u;
            // 0x33be64: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BE68u;
    // 0x33be68: 0x0  nop
    ctx->pc = 0x33be68u;
    // NOP
    // 0x33be6c: 0x0  nop
    ctx->pc = 0x33be6cu;
    // NOP
}
