#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443950
// Address: 0x443950 - 0x443960
void sub_00443950_0x443950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443950_0x443950");
#endif

    ctx->pc = 0x443950u;

    // 0x443950: 0x3e00008  jr          $ra
    ctx->pc = 0x443950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443950u;
            // 0x443954: 0x24820484  addiu       $v0, $a0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443958u;
    // 0x443958: 0x0  nop
    ctx->pc = 0x443958u;
    // NOP
    // 0x44395c: 0x0  nop
    ctx->pc = 0x44395cu;
    // NOP
}
