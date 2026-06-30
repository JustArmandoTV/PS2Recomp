#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBAA0
// Address: 0x1bbaa0 - 0x1bbab8
void sub_001BBAA0_0x1bbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBAA0_0x1bbaa0");
#endif

    ctx->pc = 0x1bbaa0u;

    // 0x1bbaa0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bbaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbaa8: 0x84c30088  lh          $v1, 0x88($a2)
    ctx->pc = 0x1bbaa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x1bbaac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAACu;
            // 0x1bbab0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBAB4u;
    // 0x1bbab4: 0x0  nop
    ctx->pc = 0x1bbab4u;
    // NOP
}
