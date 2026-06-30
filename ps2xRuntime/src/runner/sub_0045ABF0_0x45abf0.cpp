#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045ABF0
// Address: 0x45abf0 - 0x45ac00
void sub_0045ABF0_0x45abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045ABF0_0x45abf0");
#endif

    ctx->pc = 0x45abf0u;

    // 0x45abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x45ABF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45ABF0u;
            // 0x45abf4: 0xac8500f8  sw          $a1, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45ABF8u;
    // 0x45abf8: 0x0  nop
    ctx->pc = 0x45abf8u;
    // NOP
    // 0x45abfc: 0x0  nop
    ctx->pc = 0x45abfcu;
    // NOP
}
