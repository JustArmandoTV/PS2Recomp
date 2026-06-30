#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4450
// Address: 0x3c4450 - 0x3c4460
void sub_003C4450_0x3c4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4450_0x3c4450");
#endif

    ctx->pc = 0x3c4450u;

    // 0x3c4450: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4450u;
            // 0x3c4454: 0x90820025  lbu         $v0, 0x25($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4458u;
    // 0x3c4458: 0x0  nop
    ctx->pc = 0x3c4458u;
    // NOP
    // 0x3c445c: 0x0  nop
    ctx->pc = 0x3c445cu;
    // NOP
}
