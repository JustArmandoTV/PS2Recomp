#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00512030
// Address: 0x512030 - 0x512040
void sub_00512030_0x512030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512030_0x512030");
#endif

    ctx->pc = 0x512030u;

    // 0x512030: 0x3e00008  jr          $ra
    ctx->pc = 0x512030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512030u;
            // 0x512034: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x512038u;
    // 0x512038: 0x0  nop
    ctx->pc = 0x512038u;
    // NOP
    // 0x51203c: 0x0  nop
    ctx->pc = 0x51203cu;
    // NOP
}
