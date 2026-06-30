#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDAD0
// Address: 0x2cdad0 - 0x2cdae0
void sub_002CDAD0_0x2cdad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDAD0_0x2cdad0");
#endif

    ctx->pc = 0x2cdad0u;

    // 0x2cdad0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2cdad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2cdad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAD4u;
            // 0x2cdad8: 0x8c42d130  lw          $v0, -0x2ED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDADCu;
    // 0x2cdadc: 0x0  nop
    ctx->pc = 0x2cdadcu;
    // NOP
}
