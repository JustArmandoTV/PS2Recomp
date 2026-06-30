#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC920
// Address: 0x1dc920 - 0x1dc930
void sub_001DC920_0x1dc920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC920_0x1dc920");
#endif

    ctx->pc = 0x1dc920u;

    // 0x1dc920: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC920u;
            // 0x1dc924: 0x908211cc  lbu         $v0, 0x11CC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4556)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC928u;
    // 0x1dc928: 0x0  nop
    ctx->pc = 0x1dc928u;
    // NOP
    // 0x1dc92c: 0x0  nop
    ctx->pc = 0x1dc92cu;
    // NOP
}
