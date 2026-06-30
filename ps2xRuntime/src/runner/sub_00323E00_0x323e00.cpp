#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323E00
// Address: 0x323e00 - 0x323e10
void sub_00323E00_0x323e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323E00_0x323e00");
#endif

    ctx->pc = 0x323e00u;

    // 0x323e00: 0x3e00008  jr          $ra
    ctx->pc = 0x323E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323E00u;
            // 0x323e04: 0x8082008c  lb          $v0, 0x8C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323E08u;
    // 0x323e08: 0x0  nop
    ctx->pc = 0x323e08u;
    // NOP
    // 0x323e0c: 0x0  nop
    ctx->pc = 0x323e0cu;
    // NOP
}
