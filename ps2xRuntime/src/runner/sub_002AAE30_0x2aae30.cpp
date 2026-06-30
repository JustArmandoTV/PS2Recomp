#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AAE30
// Address: 0x2aae30 - 0x2aae40
void sub_002AAE30_0x2aae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAE30_0x2aae30");
#endif

    ctx->pc = 0x2aae30u;

    // 0x2aae30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2aae34: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE34u;
            // 0x2aae38: 0x8c427378  lw          $v0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAE3Cu;
    // 0x2aae3c: 0x0  nop
    ctx->pc = 0x2aae3cu;
    // NOP
}
