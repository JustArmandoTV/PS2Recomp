#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B038
// Address: 0x17b038 - 0x17b048
void sub_0017B038_0x17b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B038_0x17b038");
#endif

    ctx->pc = 0x17b038u;

    // 0x17b038: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b03c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B03Cu;
            // 0x17b040: 0x8c6243c4  lw          $v0, 0x43C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B044u;
    // 0x17b044: 0x0  nop
    ctx->pc = 0x17b044u;
    // NOP
}
