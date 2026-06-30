#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036D8A0
// Address: 0x36d8a0 - 0x36d8b0
void sub_0036D8A0_0x36d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D8A0_0x36d8a0");
#endif

    ctx->pc = 0x36d8a0u;

    // 0x36d8a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36d8a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36d8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D8A8u;
            // 0x36d8ac: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36D8B0u;
}
