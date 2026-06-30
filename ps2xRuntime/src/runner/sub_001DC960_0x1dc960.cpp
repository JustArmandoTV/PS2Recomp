#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC960
// Address: 0x1dc960 - 0x1dc970
void sub_001DC960_0x1dc960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC960_0x1dc960");
#endif

    ctx->pc = 0x1dc960u;

    // 0x1dc960: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC960u;
            // 0x1dc964: 0x24820890  addiu       $v0, $a0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC968u;
    // 0x1dc968: 0x0  nop
    ctx->pc = 0x1dc968u;
    // NOP
    // 0x1dc96c: 0x0  nop
    ctx->pc = 0x1dc96cu;
    // NOP
}
