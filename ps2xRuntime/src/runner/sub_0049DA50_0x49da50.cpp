#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049DA50
// Address: 0x49da50 - 0x49da60
void sub_0049DA50_0x49da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DA50_0x49da50");
#endif

    ctx->pc = 0x49da50u;

    // 0x49da50: 0x3e00008  jr          $ra
    ctx->pc = 0x49DA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DA50u;
            // 0x49da54: 0xac8500f8  sw          $a1, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DA58u;
    // 0x49da58: 0x0  nop
    ctx->pc = 0x49da58u;
    // NOP
    // 0x49da5c: 0x0  nop
    ctx->pc = 0x49da5cu;
    // NOP
}
