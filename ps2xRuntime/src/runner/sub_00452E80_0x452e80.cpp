#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00452E80
// Address: 0x452e80 - 0x452e90
void sub_00452E80_0x452e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452E80_0x452e80");
#endif

    ctx->pc = 0x452e80u;

    // 0x452e80: 0x3e00008  jr          $ra
    ctx->pc = 0x452E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452E80u;
            // 0x452e84: 0xac850300  sw          $a1, 0x300($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452E88u;
    // 0x452e88: 0x0  nop
    ctx->pc = 0x452e88u;
    // NOP
    // 0x452e8c: 0x0  nop
    ctx->pc = 0x452e8cu;
    // NOP
}
