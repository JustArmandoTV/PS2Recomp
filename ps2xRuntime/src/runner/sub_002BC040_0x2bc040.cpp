#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC040
// Address: 0x2bc040 - 0x2bc050
void sub_002BC040_0x2bc040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC040_0x2bc040");
#endif

    ctx->pc = 0x2bc040u;

    // 0x2bc040: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC040u;
            // 0x2bc044: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC048u;
    // 0x2bc048: 0x0  nop
    ctx->pc = 0x2bc048u;
    // NOP
    // 0x2bc04c: 0x0  nop
    ctx->pc = 0x2bc04cu;
    // NOP
}
