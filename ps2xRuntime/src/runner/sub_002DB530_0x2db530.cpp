#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB530
// Address: 0x2db530 - 0x2db540
void sub_002DB530_0x2db530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB530_0x2db530");
#endif

    ctx->pc = 0x2db530u;

    // 0x2db530: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x2db530u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
    // 0x2db534: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2db534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2db538: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB538u;
            // 0x2db53c: 0xa08302c5  sb          $v1, 0x2C5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 709), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB540u;
}
