#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D3B0
// Address: 0x31d3b0 - 0x31d3d0
void sub_0031D3B0_0x31d3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D3B0_0x31d3b0");
#endif

    ctx->pc = 0x31d3b0u;

    // 0x31d3b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31d3b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x31d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31d3b8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x31d3bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31d3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d3c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D3C8u;
            // 0x31d3cc: 0x94420046  lhu         $v0, 0x46($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D3D0u;
}
