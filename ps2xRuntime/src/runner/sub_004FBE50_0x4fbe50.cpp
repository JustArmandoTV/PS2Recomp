#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FBE50
// Address: 0x4fbe50 - 0x4fbe60
void sub_004FBE50_0x4fbe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FBE50_0x4fbe50");
#endif

    ctx->pc = 0x4fbe50u;

    // 0x4fbe50: 0x3e00008  jr          $ra
    ctx->pc = 0x4FBE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FBE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBE50u;
            // 0x4fbe54: 0xa085005a  sb          $a1, 0x5A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FBE58u;
    // 0x4fbe58: 0x0  nop
    ctx->pc = 0x4fbe58u;
    // NOP
    // 0x4fbe5c: 0x0  nop
    ctx->pc = 0x4fbe5cu;
    // NOP
}
