#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039EBB0
// Address: 0x39ebb0 - 0x39ebc0
void sub_0039EBB0_0x39ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EBB0_0x39ebb0");
#endif

    ctx->pc = 0x39ebb0u;

    // 0x39ebb0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x39ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x39ebb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39ebb8: 0x3e00008  jr          $ra
    ctx->pc = 0x39EBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EBB8u;
            // 0x39ebbc: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EBC0u;
}
