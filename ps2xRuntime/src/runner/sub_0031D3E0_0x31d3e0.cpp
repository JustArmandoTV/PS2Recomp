#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D3E0
// Address: 0x31d3e0 - 0x31d400
void sub_0031D3E0_0x31d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D3E0_0x31d3e0");
#endif

    ctx->pc = 0x31d3e0u;

    // 0x31d3e0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x31d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x31d3e4: 0xa02827  not         $a1, $a1
    ctx->pc = 0x31d3e4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x31d3e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x31d3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x31d3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31D3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D3ECu;
            // 0x31d3f0: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D3F4u;
    // 0x31d3f4: 0x0  nop
    ctx->pc = 0x31d3f4u;
    // NOP
    // 0x31d3f8: 0x0  nop
    ctx->pc = 0x31d3f8u;
    // NOP
    // 0x31d3fc: 0x0  nop
    ctx->pc = 0x31d3fcu;
    // NOP
}
