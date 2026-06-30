#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358F50
// Address: 0x358f50 - 0x358f60
void sub_00358F50_0x358f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358F50_0x358f50");
#endif

    ctx->pc = 0x358f50u;

    // 0x358f50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x358f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x358f54: 0x3e00008  jr          $ra
    ctx->pc = 0x358F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358F54u;
            // 0x358f58: 0x8c424000  lw          $v0, 0x4000($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358F5Cu;
    // 0x358f5c: 0x0  nop
    ctx->pc = 0x358f5cu;
    // NOP
}
