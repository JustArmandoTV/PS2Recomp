#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033C000
// Address: 0x33c000 - 0x33c010
void sub_0033C000_0x33c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C000_0x33c000");
#endif

    ctx->pc = 0x33c000u;

    // 0x33c000: 0x3e00008  jr          $ra
    ctx->pc = 0x33C000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C000u;
            // 0x33c004: 0x94820010  lhu         $v0, 0x10($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C008u;
    // 0x33c008: 0x0  nop
    ctx->pc = 0x33c008u;
    // NOP
    // 0x33c00c: 0x0  nop
    ctx->pc = 0x33c00cu;
    // NOP
}
