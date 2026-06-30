#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046EDA0
// Address: 0x46eda0 - 0x46edb0
void sub_0046EDA0_0x46eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EDA0_0x46eda0");
#endif

    ctx->pc = 0x46eda0u;

    // 0x46eda0: 0x3e00008  jr          $ra
    ctx->pc = 0x46EDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EDA0u;
            // 0x46eda4: 0x8082008e  lb          $v0, 0x8E($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 142)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46EDA8u;
    // 0x46eda8: 0x0  nop
    ctx->pc = 0x46eda8u;
    // NOP
    // 0x46edac: 0x0  nop
    ctx->pc = 0x46edacu;
    // NOP
}
