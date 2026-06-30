#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494480
// Address: 0x494480 - 0x494490
void sub_00494480_0x494480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494480_0x494480");
#endif

    ctx->pc = 0x494480u;

    // 0x494480: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x494480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x494484: 0x3e00008  jr          $ra
    ctx->pc = 0x494484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494484u;
            // 0x494488: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49448Cu;
    // 0x49448c: 0x0  nop
    ctx->pc = 0x49448cu;
    // NOP
}
