#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371020
// Address: 0x371020 - 0x371030
void sub_00371020_0x371020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371020_0x371020");
#endif

    ctx->pc = 0x371020u;

    // 0x371020: 0x3e00008  jr          $ra
    ctx->pc = 0x371020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371020u;
            // 0x371024: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371028u;
    // 0x371028: 0x0  nop
    ctx->pc = 0x371028u;
    // NOP
    // 0x37102c: 0x0  nop
    ctx->pc = 0x37102cu;
    // NOP
}
