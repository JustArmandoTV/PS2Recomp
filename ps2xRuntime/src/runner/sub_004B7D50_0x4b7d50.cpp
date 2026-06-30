#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B7D50
// Address: 0x4b7d50 - 0x4b7d60
void sub_004B7D50_0x4b7d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7D50_0x4b7d50");
#endif

    ctx->pc = 0x4b7d50u;

    // 0x4b7d50: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4b7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4b7d54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4b7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b7d58: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7D58u;
            // 0x4b7d5c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7D60u;
}
