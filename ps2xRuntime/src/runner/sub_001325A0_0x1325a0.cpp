#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001325A0
// Address: 0x1325a0 - 0x1325c0
void sub_001325A0_0x1325a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001325A0_0x1325a0");
#endif

    ctx->pc = 0x1325a0u;

    // 0x1325a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1325a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1325a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1325a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1325a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1325a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1325ac: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1325acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1325b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1325B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325B0u;
            // 0x1325b4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1325B8u;
    // 0x1325b8: 0x0  nop
    ctx->pc = 0x1325b8u;
    // NOP
    // 0x1325bc: 0x0  nop
    ctx->pc = 0x1325bcu;
    // NOP
}
