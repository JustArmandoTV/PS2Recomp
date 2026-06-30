#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379A50
// Address: 0x379a50 - 0x379a60
void sub_00379A50_0x379a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379A50_0x379a50");
#endif

    ctx->pc = 0x379a50u;

    // 0x379a50: 0x3e00008  jr          $ra
    ctx->pc = 0x379A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379A50u;
            // 0x379a54: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379A58u;
    // 0x379a58: 0x0  nop
    ctx->pc = 0x379a58u;
    // NOP
    // 0x379a5c: 0x0  nop
    ctx->pc = 0x379a5cu;
    // NOP
}
