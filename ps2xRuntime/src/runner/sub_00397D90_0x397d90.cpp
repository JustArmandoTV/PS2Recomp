#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397D90
// Address: 0x397d90 - 0x397da0
void sub_00397D90_0x397d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397D90_0x397d90");
#endif

    ctx->pc = 0x397d90u;

    // 0x397d90: 0x3e00008  jr          $ra
    ctx->pc = 0x397D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397D90u;
            // 0x397d94: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397D98u;
    // 0x397d98: 0x0  nop
    ctx->pc = 0x397d98u;
    // NOP
    // 0x397d9c: 0x0  nop
    ctx->pc = 0x397d9cu;
    // NOP
}
