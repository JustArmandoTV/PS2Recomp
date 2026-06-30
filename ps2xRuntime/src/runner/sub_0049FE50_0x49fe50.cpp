#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049FE50
// Address: 0x49fe50 - 0x49fe60
void sub_0049FE50_0x49fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FE50_0x49fe50");
#endif

    ctx->pc = 0x49fe50u;

    // 0x49fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x49FE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FE50u;
            // 0x49fe54: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FE58u;
    // 0x49fe58: 0x0  nop
    ctx->pc = 0x49fe58u;
    // NOP
    // 0x49fe5c: 0x0  nop
    ctx->pc = 0x49fe5cu;
    // NOP
}
