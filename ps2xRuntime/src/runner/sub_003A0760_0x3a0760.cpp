#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0760
// Address: 0x3a0760 - 0x3a0770
void sub_003A0760_0x3a0760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0760_0x3a0760");
#endif

    ctx->pc = 0x3a0760u;

    // 0x3a0760: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a0760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a0764: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a0768: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0768u;
            // 0x3a076c: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0770u;
}
