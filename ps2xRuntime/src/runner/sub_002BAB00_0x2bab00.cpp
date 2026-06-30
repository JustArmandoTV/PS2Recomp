#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BAB00
// Address: 0x2bab00 - 0x2bab10
void sub_002BAB00_0x2bab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAB00_0x2bab00");
#endif

    ctx->pc = 0x2bab00u;

    // 0x2bab00: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB00u;
            // 0x2bab04: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAB08u;
    // 0x2bab08: 0x0  nop
    ctx->pc = 0x2bab08u;
    // NOP
    // 0x2bab0c: 0x0  nop
    ctx->pc = 0x2bab0cu;
    // NOP
}
