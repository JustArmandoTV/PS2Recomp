#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301720
// Address: 0x301720 - 0x301730
void sub_00301720_0x301720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301720_0x301720");
#endif

    ctx->pc = 0x301720u;

    // 0x301720: 0x3e00008  jr          $ra
    ctx->pc = 0x301720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301720u;
            // 0x301724: 0x24820340  addiu       $v0, $a0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301728u;
    // 0x301728: 0x0  nop
    ctx->pc = 0x301728u;
    // NOP
    // 0x30172c: 0x0  nop
    ctx->pc = 0x30172cu;
    // NOP
}
