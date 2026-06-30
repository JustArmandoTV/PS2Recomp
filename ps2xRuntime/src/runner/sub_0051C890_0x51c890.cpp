#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C890
// Address: 0x51c890 - 0x51c8a0
void sub_0051C890_0x51c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C890_0x51c890");
#endif

    ctx->pc = 0x51c890u;

    // 0x51c890: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51c890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51c894: 0x3e00008  jr          $ra
    ctx->pc = 0x51C894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C894u;
            // 0x51c898: 0x8c420c78  lw          $v0, 0xC78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C89Cu;
    // 0x51c89c: 0x0  nop
    ctx->pc = 0x51c89cu;
    // NOP
}
