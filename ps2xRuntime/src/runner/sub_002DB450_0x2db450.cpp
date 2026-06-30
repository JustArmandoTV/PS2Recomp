#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB450
// Address: 0x2db450 - 0x2db460
void sub_002DB450_0x2db450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB450_0x2db450");
#endif

    ctx->pc = 0x2db450u;

    // 0x2db450: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB450u;
            // 0x2db454: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB458u;
    // 0x2db458: 0x0  nop
    ctx->pc = 0x2db458u;
    // NOP
    // 0x2db45c: 0x0  nop
    ctx->pc = 0x2db45cu;
    // NOP
}
