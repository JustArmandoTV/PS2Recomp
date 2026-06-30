#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242650
// Address: 0x242650 - 0x242690
void sub_00242650_0x242650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242650_0x242650");
#endif

    ctx->pc = 0x242650u;

    // 0x242650: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x242650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242654: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x242654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242658: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x242658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24265c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x24265cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x242660: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x242660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x242664: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x242664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x242668: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x242668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x24266c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x24266cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x242670: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x242670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x242674: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x242674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x242678: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x242678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x24267c: 0x3e00008  jr          $ra
    ctx->pc = 0x24267Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24267Cu;
            // 0x242680: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242684u;
    // 0x242684: 0x0  nop
    ctx->pc = 0x242684u;
    // NOP
    // 0x242688: 0x0  nop
    ctx->pc = 0x242688u;
    // NOP
    // 0x24268c: 0x0  nop
    ctx->pc = 0x24268cu;
    // NOP
}
