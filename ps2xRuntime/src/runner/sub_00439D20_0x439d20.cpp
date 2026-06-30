#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00439D20
// Address: 0x439d20 - 0x439d30
void sub_00439D20_0x439d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439D20_0x439d20");
#endif

    ctx->pc = 0x439d20u;

    // 0x439d20: 0x3e00008  jr          $ra
    ctx->pc = 0x439D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439D20u;
            // 0x439d24: 0x8c8200a0  lw          $v0, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439D28u;
    // 0x439d28: 0x0  nop
    ctx->pc = 0x439d28u;
    // NOP
    // 0x439d2c: 0x0  nop
    ctx->pc = 0x439d2cu;
    // NOP
}
