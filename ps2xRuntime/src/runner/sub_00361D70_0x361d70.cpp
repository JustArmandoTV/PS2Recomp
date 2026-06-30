#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00361D70
// Address: 0x361d70 - 0x361d80
void sub_00361D70_0x361d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361D70_0x361d70");
#endif

    ctx->pc = 0x361d70u;

    // 0x361d70: 0x3e00008  jr          $ra
    ctx->pc = 0x361D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361D70u;
            // 0x361d74: 0xac850040  sw          $a1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361D78u;
    // 0x361d78: 0x0  nop
    ctx->pc = 0x361d78u;
    // NOP
    // 0x361d7c: 0x0  nop
    ctx->pc = 0x361d7cu;
    // NOP
}
