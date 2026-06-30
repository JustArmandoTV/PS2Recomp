#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051EA00
// Address: 0x51ea00 - 0x51ea10
void sub_0051EA00_0x51ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051EA00_0x51ea00");
#endif

    ctx->pc = 0x51ea00u;

    // 0x51ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x51EA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51EA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EA00u;
            // 0x51ea04: 0xac8501c4  sw          $a1, 0x1C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51EA08u;
    // 0x51ea08: 0x0  nop
    ctx->pc = 0x51ea08u;
    // NOP
    // 0x51ea0c: 0x0  nop
    ctx->pc = 0x51ea0cu;
    // NOP
}
