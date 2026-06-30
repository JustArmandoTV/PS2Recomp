#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5650
// Address: 0x3e5650 - 0x3e5660
void sub_003E5650_0x3e5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5650_0x3e5650");
#endif

    ctx->pc = 0x3e5650u;

    // 0x3e5650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e5654: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5654u;
            // 0x3e5658: 0x8c4264c0  lw          $v0, 0x64C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25792)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E565Cu;
    // 0x3e565c: 0x0  nop
    ctx->pc = 0x3e565cu;
    // NOP
}
