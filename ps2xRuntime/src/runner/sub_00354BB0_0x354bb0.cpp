#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00354BB0
// Address: 0x354bb0 - 0x354bc0
void sub_00354BB0_0x354bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354BB0_0x354bb0");
#endif

    ctx->pc = 0x354bb0u;

    // 0x354bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x354BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354BB0u;
            // 0x354bb4: 0x908200e5  lbu         $v0, 0xE5($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 229)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x354BB8u;
    // 0x354bb8: 0x0  nop
    ctx->pc = 0x354bb8u;
    // NOP
    // 0x354bbc: 0x0  nop
    ctx->pc = 0x354bbcu;
    // NOP
}
