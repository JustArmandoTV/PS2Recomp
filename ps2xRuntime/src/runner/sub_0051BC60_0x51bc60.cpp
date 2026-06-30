#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BC60
// Address: 0x51bc60 - 0x51bc70
void sub_0051BC60_0x51bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BC60_0x51bc60");
#endif

    ctx->pc = 0x51bc60u;

    // 0x51bc60: 0x3e00008  jr          $ra
    ctx->pc = 0x51BC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BC60u;
            // 0x51bc64: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BC68u;
    // 0x51bc68: 0x0  nop
    ctx->pc = 0x51bc68u;
    // NOP
    // 0x51bc6c: 0x0  nop
    ctx->pc = 0x51bc6cu;
    // NOP
}
