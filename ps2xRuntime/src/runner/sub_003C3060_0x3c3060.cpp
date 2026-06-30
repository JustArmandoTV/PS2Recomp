#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3060
// Address: 0x3c3060 - 0x3c3070
void sub_003C3060_0x3c3060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3060_0x3c3060");
#endif

    ctx->pc = 0x3c3060u;

    // 0x3c3060: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3060u;
            // 0x3c3064: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3068u;
    // 0x3c3068: 0x0  nop
    ctx->pc = 0x3c3068u;
    // NOP
    // 0x3c306c: 0x0  nop
    ctx->pc = 0x3c306cu;
    // NOP
}
