#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046DA80
// Address: 0x46da80 - 0x46da90
void sub_0046DA80_0x46da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DA80_0x46da80");
#endif

    ctx->pc = 0x46da80u;

    // 0x46da80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46da80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46da84: 0x3e00008  jr          $ra
    ctx->pc = 0x46DA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DA84u;
            // 0x46da88: 0x8c420ed0  lw          $v0, 0xED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46DA8Cu;
    // 0x46da8c: 0x0  nop
    ctx->pc = 0x46da8cu;
    // NOP
}
