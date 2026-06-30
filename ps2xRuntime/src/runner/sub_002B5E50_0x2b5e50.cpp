#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5E50
// Address: 0x2b5e50 - 0x2b5e60
void sub_002B5E50_0x2b5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5E50_0x2b5e50");
#endif

    ctx->pc = 0x2b5e50u;

    // 0x2b5e50: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2b5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2b5e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E54u;
            // 0x2b5e58: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5E5Cu;
    // 0x2b5e5c: 0x0  nop
    ctx->pc = 0x2b5e5cu;
    // NOP
}
