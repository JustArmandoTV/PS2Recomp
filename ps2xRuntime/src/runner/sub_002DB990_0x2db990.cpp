#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB990
// Address: 0x2db990 - 0x2db9a0
void sub_002DB990_0x2db990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB990_0x2db990");
#endif

    ctx->pc = 0x2db990u;

    // 0x2db990: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB990u;
            // 0x2db994: 0xac8501a0  sw          $a1, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB998u;
    // 0x2db998: 0x0  nop
    ctx->pc = 0x2db998u;
    // NOP
    // 0x2db99c: 0x0  nop
    ctx->pc = 0x2db99cu;
    // NOP
}
