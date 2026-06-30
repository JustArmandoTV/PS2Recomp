#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DCF30
// Address: 0x3dcf30 - 0x3dcf50
void sub_003DCF30_0x3dcf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCF30_0x3dcf30");
#endif

    ctx->pc = 0x3dcf30u;

    // 0x3dcf30: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3dcf30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dcf34: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3dcf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3dcf38: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3dcf38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3dcf3c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3dcf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3dcf40: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3dcf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3dcf44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3dcf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3dcf48: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCF48u;
            // 0x3dcf4c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DCF50u;
}
