#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510460
// Address: 0x510460 - 0x510470
void sub_00510460_0x510460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510460_0x510460");
#endif

    ctx->pc = 0x510460u;

    // 0x510460: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x510460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x510464: 0x3e00008  jr          $ra
    ctx->pc = 0x510464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510464u;
            // 0x510468: 0x8c42ab08  lw          $v0, -0x54F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51046Cu;
    // 0x51046c: 0x0  nop
    ctx->pc = 0x51046cu;
    // NOP
}
