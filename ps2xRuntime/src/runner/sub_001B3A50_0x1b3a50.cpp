#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3A50
// Address: 0x1b3a50 - 0x1b3a60
void sub_001B3A50_0x1b3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3A50_0x1b3a50");
#endif

    ctx->pc = 0x1b3a50u;

    // 0x1b3a50: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1b3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1b3a54: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1b3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1b3a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A58u;
            // 0x1b3a5c: 0xfc800008  sd          $zero, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3A60u;
}
