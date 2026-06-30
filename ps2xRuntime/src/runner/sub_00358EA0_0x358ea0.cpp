#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358EA0
// Address: 0x358ea0 - 0x358eb0
void sub_00358EA0_0x358ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358EA0_0x358ea0");
#endif

    ctx->pc = 0x358ea0u;

    // 0x358ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x358EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358EA0u;
            // 0x358ea4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358EA8u;
    // 0x358ea8: 0x0  nop
    ctx->pc = 0x358ea8u;
    // NOP
    // 0x358eac: 0x0  nop
    ctx->pc = 0x358eacu;
    // NOP
}
