#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C478
// Address: 0x17c478 - 0x17c488
void sub_0017C478_0x17c478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C478_0x17c478");
#endif

    ctx->pc = 0x17c478u;

    // 0x17c478: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x17c478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x17c47c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C47Cu;
            // 0x17c480: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C484u;
    // 0x17c484: 0x0  nop
    ctx->pc = 0x17c484u;
    // NOP
}
