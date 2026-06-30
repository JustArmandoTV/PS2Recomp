#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8390
// Address: 0x2b8390 - 0x2b83a0
void sub_002B8390_0x2b8390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8390_0x2b8390");
#endif

    ctx->pc = 0x2b8390u;

    // 0x2b8390: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8390u;
            // 0x2b8394: 0x8c82077c  lw          $v0, 0x77C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8398u;
    // 0x2b8398: 0x0  nop
    ctx->pc = 0x2b8398u;
    // NOP
    // 0x2b839c: 0x0  nop
    ctx->pc = 0x2b839cu;
    // NOP
}
