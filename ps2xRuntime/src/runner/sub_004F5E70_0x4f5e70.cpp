#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5E70
// Address: 0x4f5e70 - 0x4f5e90
void sub_004F5E70_0x4f5e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5E70_0x4f5e70");
#endif

    ctx->pc = 0x4f5e70u;

    // 0x4f5e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4f5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f5e74: 0xa0830026  sb          $v1, 0x26($a0)
    ctx->pc = 0x4f5e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x4f5e78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4f5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4f5e7c: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x4f5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x4f5e80: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5E80u;
            // 0x4f5e84: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5E88u;
    // 0x4f5e88: 0x0  nop
    ctx->pc = 0x4f5e88u;
    // NOP
    // 0x4f5e8c: 0x0  nop
    ctx->pc = 0x4f5e8cu;
    // NOP
}
