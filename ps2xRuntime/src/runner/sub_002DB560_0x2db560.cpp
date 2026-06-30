#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB560
// Address: 0x2db560 - 0x2db570
void sub_002DB560_0x2db560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB560_0x2db560");
#endif

    ctx->pc = 0x2db560u;

    // 0x2db560: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB560u;
            // 0x2db564: 0x24821190  addiu       $v0, $a0, 0x1190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB568u;
    // 0x2db568: 0x0  nop
    ctx->pc = 0x2db568u;
    // NOP
    // 0x2db56c: 0x0  nop
    ctx->pc = 0x2db56cu;
    // NOP
}
