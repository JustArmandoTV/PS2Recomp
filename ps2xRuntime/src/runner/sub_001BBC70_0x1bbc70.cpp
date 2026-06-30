#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBC70
// Address: 0x1bbc70 - 0x1bbc88
void sub_001BBC70_0x1bbc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC70_0x1bbc70");
#endif

    ctx->pc = 0x1bbc70u;

    // 0x1bbc70: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bbc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbc74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc78: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x1bbc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1bbc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC7Cu;
            // 0x1bbc80: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBC84u;
    // 0x1bbc84: 0x0  nop
    ctx->pc = 0x1bbc84u;
    // NOP
}
