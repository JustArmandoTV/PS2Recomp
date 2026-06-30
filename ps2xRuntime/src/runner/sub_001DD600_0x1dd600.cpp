#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD600
// Address: 0x1dd600 - 0x1dd610
void sub_001DD600_0x1dd600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD600_0x1dd600");
#endif

    ctx->pc = 0x1dd600u;

    // 0x1dd600: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD600u;
            // 0x1dd604: 0x248200a8  addiu       $v0, $a0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD608u;
    // 0x1dd608: 0x0  nop
    ctx->pc = 0x1dd608u;
    // NOP
    // 0x1dd60c: 0x0  nop
    ctx->pc = 0x1dd60cu;
    // NOP
}
