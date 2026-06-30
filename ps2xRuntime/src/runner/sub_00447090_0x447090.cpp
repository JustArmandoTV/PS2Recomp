#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00447090
// Address: 0x447090 - 0x4470a0
void sub_00447090_0x447090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447090_0x447090");
#endif

    ctx->pc = 0x447090u;

    // 0x447090: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x447090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x447094: 0x3e00008  jr          $ra
    ctx->pc = 0x447094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447094u;
            // 0x447098: 0x8c427538  lw          $v0, 0x7538($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30008)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44709Cu;
    // 0x44709c: 0x0  nop
    ctx->pc = 0x44709cu;
    // NOP
}
