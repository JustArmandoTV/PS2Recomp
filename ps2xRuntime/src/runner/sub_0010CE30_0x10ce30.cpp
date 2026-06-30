#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CE30
// Address: 0x10ce30 - 0x10ce40
void sub_0010CE30_0x10ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CE30_0x10ce30");
#endif

    ctx->pc = 0x10ce30u;

    // 0x10ce30: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10ce34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10ce38: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CE38u;
            // 0x10ce3c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE40u;
}
