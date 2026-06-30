#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F160
// Address: 0x53f160 - 0x53f170
void sub_0053F160_0x53f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F160_0x53f160");
#endif

    ctx->pc = 0x53f160u;

    // 0x53f160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x53f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x53f164: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x53f164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x53f168: 0x3e00008  jr          $ra
    ctx->pc = 0x53F168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F168u;
            // 0x53f16c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F170u;
}
