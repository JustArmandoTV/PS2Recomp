#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307000
// Address: 0x307000 - 0x307010
void sub_00307000_0x307000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307000_0x307000");
#endif

    ctx->pc = 0x307000u;

    // 0x307000: 0x3e00008  jr          $ra
    ctx->pc = 0x307000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307000u;
            // 0x307004: 0x24820c50  addiu       $v0, $a0, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307008u;
    // 0x307008: 0x0  nop
    ctx->pc = 0x307008u;
    // NOP
    // 0x30700c: 0x0  nop
    ctx->pc = 0x30700cu;
    // NOP
}
