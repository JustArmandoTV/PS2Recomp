#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397DB0
// Address: 0x397db0 - 0x397dc0
void sub_00397DB0_0x397db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397DB0_0x397db0");
#endif

    ctx->pc = 0x397db0u;

    // 0x397db0: 0x3e00008  jr          $ra
    ctx->pc = 0x397DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397DB0u;
            // 0x397db4: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397DB8u;
    // 0x397db8: 0x0  nop
    ctx->pc = 0x397db8u;
    // NOP
    // 0x397dbc: 0x0  nop
    ctx->pc = 0x397dbcu;
    // NOP
}
