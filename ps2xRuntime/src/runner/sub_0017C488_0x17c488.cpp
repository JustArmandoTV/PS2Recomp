#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C488
// Address: 0x17c488 - 0x17c498
void sub_0017C488_0x17c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C488_0x17c488");
#endif

    ctx->pc = 0x17c488u;

    // 0x17c488: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x17c488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x17c48c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C48Cu;
            // 0x17c490: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C494u;
    // 0x17c494: 0x0  nop
    ctx->pc = 0x17c494u;
    // NOP
}
