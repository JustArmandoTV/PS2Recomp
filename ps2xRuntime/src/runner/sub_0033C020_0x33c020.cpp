#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033C020
// Address: 0x33c020 - 0x33c030
void sub_0033C020_0x33c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C020_0x33c020");
#endif

    ctx->pc = 0x33c020u;

    // 0x33c020: 0x3e00008  jr          $ra
    ctx->pc = 0x33C020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C020u;
            // 0x33c024: 0x8c820d78  lw          $v0, 0xD78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3448)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C028u;
    // 0x33c028: 0x0  nop
    ctx->pc = 0x33c028u;
    // NOP
    // 0x33c02c: 0x0  nop
    ctx->pc = 0x33c02cu;
    // NOP
}
