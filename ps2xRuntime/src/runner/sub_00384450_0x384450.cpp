#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384450
// Address: 0x384450 - 0x384460
void sub_00384450_0x384450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384450_0x384450");
#endif

    ctx->pc = 0x384450u;

    // 0x384450: 0x3e00008  jr          $ra
    ctx->pc = 0x384450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384450u;
            // 0x384454: 0x80820004  lb          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384458u;
    // 0x384458: 0x0  nop
    ctx->pc = 0x384458u;
    // NOP
    // 0x38445c: 0x0  nop
    ctx->pc = 0x38445cu;
    // NOP
}
