#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC350
// Address: 0x1dc350 - 0x1dc360
void sub_001DC350_0x1dc350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC350_0x1dc350");
#endif

    ctx->pc = 0x1dc350u;

    // 0x1dc350: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC350u;
            // 0x1dc354: 0x24820c6c  addiu       $v0, $a0, 0xC6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3180));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC358u;
    // 0x1dc358: 0x0  nop
    ctx->pc = 0x1dc358u;
    // NOP
    // 0x1dc35c: 0x0  nop
    ctx->pc = 0x1dc35cu;
    // NOP
}
