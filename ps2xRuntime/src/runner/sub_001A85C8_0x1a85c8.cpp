#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A85C8
// Address: 0x1a85c8 - 0x1a85d8
void sub_001A85C8_0x1a85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A85C8_0x1a85c8");
#endif

    ctx->pc = 0x1a85c8u;

    // 0x1a85c8: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x1a85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x1a85cc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a85ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a85d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A85D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A85D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85D0u;
            // 0x1a85d4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A85D8u;
}
