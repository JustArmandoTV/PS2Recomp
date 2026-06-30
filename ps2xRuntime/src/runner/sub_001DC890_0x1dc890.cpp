#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC890
// Address: 0x1dc890 - 0x1dc8a0
void sub_001DC890_0x1dc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC890_0x1dc890");
#endif

    ctx->pc = 0x1dc890u;

    // 0x1dc890: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC890u;
            // 0x1dc894: 0x90820010  lbu         $v0, 0x10($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC898u;
    // 0x1dc898: 0x0  nop
    ctx->pc = 0x1dc898u;
    // NOP
    // 0x1dc89c: 0x0  nop
    ctx->pc = 0x1dc89cu;
    // NOP
}
