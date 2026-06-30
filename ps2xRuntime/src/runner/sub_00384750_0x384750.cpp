#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384750
// Address: 0x384750 - 0x384760
void sub_00384750_0x384750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384750_0x384750");
#endif

    ctx->pc = 0x384750u;

    // 0x384750: 0x8083010d  lb          $v1, 0x10D($a0)
    ctx->pc = 0x384750u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
    // 0x384754: 0xa083010e  sb          $v1, 0x10E($a0)
    ctx->pc = 0x384754u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 270), (uint8_t)GPR_U32(ctx, 3));
    // 0x384758: 0x3e00008  jr          $ra
    ctx->pc = 0x384758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384758u;
            // 0x38475c: 0xa085010d  sb          $a1, 0x10D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384760u;
}
