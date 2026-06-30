#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD580
// Address: 0x1dd580 - 0x1dd590
void sub_001DD580_0x1dd580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD580_0x1dd580");
#endif

    ctx->pc = 0x1dd580u;

    // 0x1dd580: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD580u;
            // 0x1dd584: 0x248204c4  addiu       $v0, $a0, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1220));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD588u;
    // 0x1dd588: 0x0  nop
    ctx->pc = 0x1dd588u;
    // NOP
    // 0x1dd58c: 0x0  nop
    ctx->pc = 0x1dd58cu;
    // NOP
}
