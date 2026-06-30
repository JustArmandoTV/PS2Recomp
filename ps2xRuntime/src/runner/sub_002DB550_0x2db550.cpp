#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB550
// Address: 0x2db550 - 0x2db560
void sub_002DB550_0x2db550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB550_0x2db550");
#endif

    ctx->pc = 0x2db550u;

    // 0x2db550: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB550u;
            // 0x2db554: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB558u;
    // 0x2db558: 0x0  nop
    ctx->pc = 0x2db558u;
    // NOP
    // 0x2db55c: 0x0  nop
    ctx->pc = 0x2db55cu;
    // NOP
}
