#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385470
// Address: 0x385470 - 0x385480
void sub_00385470_0x385470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385470_0x385470");
#endif

    ctx->pc = 0x385470u;

    // 0x385470: 0x3e00008  jr          $ra
    ctx->pc = 0x385470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385470u;
            // 0x385474: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385478u;
    // 0x385478: 0x0  nop
    ctx->pc = 0x385478u;
    // NOP
    // 0x38547c: 0x0  nop
    ctx->pc = 0x38547cu;
    // NOP
}
