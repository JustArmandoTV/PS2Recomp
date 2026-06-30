#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047D3F0
// Address: 0x47d3f0 - 0x47d410
void sub_0047D3F0_0x47d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D3F0_0x47d3f0");
#endif

    ctx->pc = 0x47d3f0u;

    // 0x47d3f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47d3f4: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x47d3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d3f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x47d3fc: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x47d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x47d400: 0x3e00008  jr          $ra
    ctx->pc = 0x47D400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D400u;
            // 0x47d404: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47D408u;
    // 0x47d408: 0x0  nop
    ctx->pc = 0x47d408u;
    // NOP
    // 0x47d40c: 0x0  nop
    ctx->pc = 0x47d40cu;
    // NOP
}
