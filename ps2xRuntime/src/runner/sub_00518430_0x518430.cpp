#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00518430
// Address: 0x518430 - 0x518450
void sub_00518430_0x518430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00518430_0x518430");
#endif

    ctx->pc = 0x518430u;

    // 0x518430: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x518430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x518434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x518434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x518438: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x518438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x51843c: 0xac830124  sw          $v1, 0x124($a0)
    ctx->pc = 0x51843cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
    // 0x518440: 0x3e00008  jr          $ra
    ctx->pc = 0x518440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518440u;
            // 0x518444: 0xa0830140  sb          $v1, 0x140($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 320), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518448u;
    // 0x518448: 0x0  nop
    ctx->pc = 0x518448u;
    // NOP
    // 0x51844c: 0x0  nop
    ctx->pc = 0x51844cu;
    // NOP
}
