#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E700
// Address: 0x49e700 - 0x49e710
void sub_0049E700_0x49e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E700_0x49e700");
#endif

    ctx->pc = 0x49e700u;

    // 0x49e700: 0x3e00008  jr          $ra
    ctx->pc = 0x49E700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E700u;
            // 0x49e704: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E708u;
    // 0x49e708: 0x0  nop
    ctx->pc = 0x49e708u;
    // NOP
    // 0x49e70c: 0x0  nop
    ctx->pc = 0x49e70cu;
    // NOP
}
