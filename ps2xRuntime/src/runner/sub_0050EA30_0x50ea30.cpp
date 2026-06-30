#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050EA30
// Address: 0x50ea30 - 0x50ea40
void sub_0050EA30_0x50ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050EA30_0x50ea30");
#endif

    ctx->pc = 0x50ea30u;

    // 0x50ea30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x50ea34: 0xac830124  sw          $v1, 0x124($a0)
    ctx->pc = 0x50ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
    // 0x50ea38: 0x3e00008  jr          $ra
    ctx->pc = 0x50EA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EA38u;
            // 0x50ea3c: 0xac800134  sw          $zero, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50EA40u;
}
