#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E15E0
// Address: 0x3e15e0 - 0x3e15f0
void sub_003E15E0_0x3e15e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E15E0_0x3e15e0");
#endif

    ctx->pc = 0x3e15e0u;

    // 0x3e15e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E15E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E15E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E15E0u;
            // 0x3e15e4: 0x90820010  lbu         $v0, 0x10($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E15E8u;
    // 0x3e15e8: 0x0  nop
    ctx->pc = 0x3e15e8u;
    // NOP
    // 0x3e15ec: 0x0  nop
    ctx->pc = 0x3e15ecu;
    // NOP
}
